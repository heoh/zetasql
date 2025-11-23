function caseInsensitive(keyword) {
  return new RegExp(keyword
    .split('')
    .map(letter => `[${letter.toLowerCase()}${letter.toUpperCase()}]`)
    .join('')
  );
}

module.exports = grammar({
  name: 'zetasql',

  extras: $ => [
    /\s/,
    $.comment,
  ],

  rules: {
    source_file: $ => repeat($.statement),

    statement: $ => choice(
      $.select_statement,
      // Add other statements here
    ),

    select_statement: $ => seq(
      $.select_clause,
      optional($.from_clause),
      optional($.where_clause),
      optional($.group_by_clause),
      optional($.having_clause),
      optional($.order_by_clause),
      optional($.limit_clause),
      optional(';')
    ),

    select_clause: $ => seq(
      caseInsensitive('SELECT'),
      optional(choice(caseInsensitive('ALL'), caseInsensitive('DISTINCT'))),
      $.select_list
    ),

    select_list: $ => seq(
      $.select_expression,
      repeat(seq(',', $.select_expression))
    ),

    select_expression: $ => choice(
      '*',
      seq($.expression, optional(seq(optional(caseInsensitive('AS')), $.identifier))),
      seq($.identifier, '.', '*')
    ),

    from_clause: $ => seq(
      caseInsensitive('FROM'),
      $.from_item,
      repeat(seq(',', $.from_item))
    ),

    from_item: $ => seq(
      $.table_expression,
      optional(seq(optional(caseInsensitive('AS')), $.identifier))
    ),

    table_expression: $ => $.path_expression,

    where_clause: $ => seq(
      caseInsensitive('WHERE'),
      $.expression
    ),

    group_by_clause: $ => seq(
      caseInsensitive('GROUP'), caseInsensitive('BY'),
      $.expression_list
    ),

    having_clause: $ => seq(
      caseInsensitive('HAVING'),
      $.expression
    ),

    order_by_clause: $ => seq(
      caseInsensitive('ORDER'), caseInsensitive('BY'),
      $.order_expression_list
    ),

    limit_clause: $ => seq(
      caseInsensitive('LIMIT'),
      $.number
    ),

    expression_list: $ => seq(
      $.expression,
      repeat(seq(',', $.expression))
    ),

    order_expression_list: $ => seq(
      $.order_expression,
      repeat(seq(',', $.order_expression))
    ),

    order_expression: $ => seq(
      $.expression,
      optional(choice(caseInsensitive('ASC'), caseInsensitive('DESC')))
    ),

    expression: $ => choice(
      $.path_expression,
      $.number,
      $.string,
      $.binary_expression,
      seq('(', $.expression, ')')
    ),

    path_expression: $ => seq(
      $.identifier,
      repeat(seq('.', choice($.identifier, alias($._identifier_after_dot, $.identifier))))
    ),

    binary_expression: $ => prec.left(1, seq(
      $.expression,
      choice('=', '<>', '<', '>', '<=', '>=', '+', '-', '*', '/'),
      $.expression
    )),

    identifier: $ => choice(
      /[a-zA-Z_][a-zA-Z0-9_]*/,
      /`[^`]+`/
    ),
    _identifier_after_dot: $ => /[0-9][a-zA-Z0-9_]*/,
    number: $ => /\d+/,
    string: $ => /'[^']*'/,
    comment: $ => token(choice(
      seq('--', /.*/),
      seq('/*', /[^*]*\*+([^/*][^*]*\*+)*/, '/')
    )),
  }
});
