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
      repeat(seq(',', $.select_expression)),
      optional(',')
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

    table_expression: $ => choice(
      $.path_expression,
      seq('(', $.select_statement, ')')
    ),

    where_clause: $ => seq(
      caseInsensitive('WHERE'),
      $.expression
    ),

    group_by_clause: $ => seq(
      caseInsensitive('GROUP'),
      optional($.hint),
      caseInsensitive('BY'),
      $.grouping_item_list
    ),

    grouping_item_list: $ => seq(
      $.grouping_item,
      repeat(seq(',', $.grouping_item))
    ),

    grouping_item: $ => choice(
      seq(caseInsensitive('ROLLUP'), '(', $.expression_list, ')'),
      seq(caseInsensitive('CUBE'), '(', $.expression_list, ')'),
      seq(caseInsensitive('GROUPING'), caseInsensitive('SETS'), '(', $.grouping_item_list, ')'),
      seq('(', ')'),
      $.expression
    ),

    having_clause: $ => seq(
      caseInsensitive('HAVING'),
      $.expression
    ),

    order_by_clause: $ => seq(
      caseInsensitive('ORDER'),
      optional($.hint),
      caseInsensitive('BY'),
      $.order_expression_list
    ),

    hint: $ => seq(
      '@',
      choice($.identifier, $.number)
    ),

    limit_clause: $ => seq(
      caseInsensitive('LIMIT'),
      choice($.number, caseInsensitive('ALL')),
      optional(seq(
        caseInsensitive('OFFSET'),
        $.number
      ))
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
      optional(choice(caseInsensitive('ASC'), caseInsensitive('DESC'))),
      optional(seq(caseInsensitive('NULLS'), choice(caseInsensitive('FIRST'), caseInsensitive('LAST'))))
    ),

    expression: $ => choice(
      $.path_expression,
      $.number,
      $.string,
      $.boolean_literal,
      $.null_literal,
      $.binary_expression,
      $.is_expression,
      $.between_expression,
      $.collate_expression,
      $.function_call,
      seq('(', $.expression, ')')
    ),

    collate_expression: $ => prec.left(6, seq(
      $.expression,
      caseInsensitive('COLLATE'),
      $.string
    )),

    boolean_literal: $ => choice(caseInsensitive('TRUE'), caseInsensitive('FALSE')),
    null_literal: $ => caseInsensitive('NULL'),

    between_expression: $ => prec.left(3, seq(
      $.expression,
      optional(caseInsensitive('NOT')),
      caseInsensitive('BETWEEN'),
      $.expression,
      caseInsensitive('AND'),
      $.expression
    )),

    function_call: $ => prec.right(seq(
      $.path_expression,
      '(',
      optional(choice(
        seq(
          '*',
          optional(seq(',', $.function_arguments)),
          optional($._function_modifiers)
        ),
        seq(
          optional(choice(caseInsensitive('DISTINCT'), caseInsensitive('ALL'))),
          $.function_arguments,
          optional($._function_modifiers)
        ),
        seq(
          optional(choice(caseInsensitive('DISTINCT'), caseInsensitive('ALL'))),
          optional($._function_modifiers)
        )
      )),
      ')',
      optional($.with_group_rows_modifier),
      optional($.over_clause)
    )),

    over_clause: $ => seq(
      caseInsensitive('OVER'),
      choice(
        $.identifier,
        seq(
          '(',
          optional($.partition_by_clause),
          optional($.order_by_clause),
          ')'
        )
      )
    ),

    partition_by_clause: $ => seq(
      caseInsensitive('PARTITION'), caseInsensitive('BY'),
      $.expression_list
    ),

    _function_modifiers: $ => repeat1(choice(
      $.null_handling_modifier,
      $.where_clause,
      $.group_by_clause,
      $.having_modifier,
      $.having_clause,
      $.clamped_between_modifier,
      $.with_report_modifier,
      $.order_by_clause,
      $.limit_clause
    )),

    null_handling_modifier: $ => seq(
      choice(caseInsensitive('IGNORE'), caseInsensitive('RESPECT')),
      caseInsensitive('NULLS')
    ),

    having_modifier: $ => seq(
      caseInsensitive('HAVING'),
      choice(caseInsensitive('MIN'), caseInsensitive('MAX')),
      $.expression
    ),

    with_report_modifier: $ => seq(
      caseInsensitive('WITH'),
      caseInsensitive('REPORT'),
      optional($.options_list)
    ),

    with_group_rows_modifier: $ => seq(
      caseInsensitive('WITH'),
      caseInsensitive('GROUP'),
      caseInsensitive('ROWS'),
      '(',
      $.select_statement,
      ')'
    ),

    options_list: $ => seq(
      '(',
      $.options_entry,
      repeat(seq(',', $.options_entry)),
      ')'
    ),

    options_entry: $ => seq(
      $.identifier,
      '=',
      $.expression
    ),

    clamped_between_modifier: $ => seq(
      caseInsensitive('CLAMPED'),
      caseInsensitive('BETWEEN'),
      $.expression,
      caseInsensitive('AND'),
      $.expression
    ),

    function_arguments: $ => seq(
      $.function_argument,
      repeat(seq(',', $.function_argument))
    ),

    function_argument: $ => seq(
      optional(caseInsensitive('SEQUENCE')),
      $.expression
    ),

    path_expression: $ => seq(
      $.identifier,
      repeat(seq('.', choice($.identifier, alias($._identifier_after_dot, $.identifier))))
    ),

    is_expression: $ => prec.left(3, seq(
      $.expression,
      caseInsensitive('IS'),
      optional(caseInsensitive('NOT')),
      choice(
        $.null_literal,
        $.boolean_literal
      )
    )),

    binary_expression: $ => choice(
      prec.left(1, seq($.expression, caseInsensitive('OR'), $.expression)),
      prec.left(2, seq($.expression, caseInsensitive('AND'), $.expression)),
      prec.left(3, seq($.expression, choice('=', '<>', '<', '>', '<=', '>='), $.expression)),
      prec.left(4, seq($.expression, choice('+', '-'), $.expression)),
      prec.left(5, seq($.expression, choice('*', '/'), $.expression)),
    ),

    identifier: $ => choice(
      /[a-zA-Z_][a-zA-Z0-9_]*/,
      /`[^`]+`/
    ),
    _identifier_after_dot: $ => /[0-9][a-zA-Z0-9_]*/,
    number: $ => /\d+/,
    string: $ => choice(
      /'[^']*'/,
      /"[^"]*"/
    ),
    comment: $ => token(choice(
      seq('--', /.*/),
      seq('#', /.*/),
      seq('/*', /[^*]*\*+([^/*][^*]*\*+)*/, '/')
    )),
  }
});
