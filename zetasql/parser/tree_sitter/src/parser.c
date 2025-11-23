#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 118
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 62
#define ALIAS_COUNT 0
#define TOKEN_COUNT 35
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_SEMI = 1,
  aux_sym_select_clause_token1 = 2,
  aux_sym_select_clause_token2 = 3,
  aux_sym_select_clause_token3 = 4,
  anon_sym_COMMA = 5,
  anon_sym_STAR = 6,
  aux_sym_select_expression_token1 = 7,
  anon_sym_DOT = 8,
  aux_sym_from_clause_token1 = 9,
  aux_sym_where_clause_token1 = 10,
  aux_sym_group_by_clause_token1 = 11,
  aux_sym_group_by_clause_token2 = 12,
  aux_sym_having_clause_token1 = 13,
  aux_sym_order_by_clause_token1 = 14,
  aux_sym_limit_clause_token1 = 15,
  aux_sym_order_expression_token1 = 16,
  aux_sym_order_expression_token2 = 17,
  anon_sym_LPAREN = 18,
  anon_sym_RPAREN = 19,
  anon_sym_EQ = 20,
  anon_sym_LT_GT = 21,
  anon_sym_LT = 22,
  anon_sym_GT = 23,
  anon_sym_LT_EQ = 24,
  anon_sym_GT_EQ = 25,
  anon_sym_PLUS = 26,
  anon_sym_DASH = 27,
  anon_sym_SLASH = 28,
  aux_sym_identifier_token1 = 29,
  aux_sym_identifier_token2 = 30,
  sym__identifier_after_dot = 31,
  sym_number = 32,
  sym_string = 33,
  sym_comment = 34,
  sym_source_file = 35,
  sym_statement = 36,
  sym_select_statement = 37,
  sym_select_clause = 38,
  sym_select_list = 39,
  sym_select_expression = 40,
  sym_from_clause = 41,
  sym_from_item = 42,
  sym_table_expression = 43,
  sym_where_clause = 44,
  sym_group_by_clause = 45,
  sym_having_clause = 46,
  sym_order_by_clause = 47,
  sym_limit_clause = 48,
  sym_expression_list = 49,
  sym_order_expression_list = 50,
  sym_order_expression = 51,
  sym_expression = 52,
  sym_path_expression = 53,
  sym_binary_expression = 54,
  sym_identifier = 55,
  aux_sym_source_file_repeat1 = 56,
  aux_sym_select_list_repeat1 = 57,
  aux_sym_from_clause_repeat1 = 58,
  aux_sym_expression_list_repeat1 = 59,
  aux_sym_order_expression_list_repeat1 = 60,
  aux_sym_path_expression_repeat1 = 61,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [aux_sym_select_clause_token1] = "select_clause_token1",
  [aux_sym_select_clause_token2] = "select_clause_token2",
  [aux_sym_select_clause_token3] = "select_clause_token3",
  [anon_sym_COMMA] = ",",
  [anon_sym_STAR] = "*",
  [aux_sym_select_expression_token1] = "select_expression_token1",
  [anon_sym_DOT] = ".",
  [aux_sym_from_clause_token1] = "from_clause_token1",
  [aux_sym_where_clause_token1] = "where_clause_token1",
  [aux_sym_group_by_clause_token1] = "group_by_clause_token1",
  [aux_sym_group_by_clause_token2] = "group_by_clause_token2",
  [aux_sym_having_clause_token1] = "having_clause_token1",
  [aux_sym_order_by_clause_token1] = "order_by_clause_token1",
  [aux_sym_limit_clause_token1] = "limit_clause_token1",
  [aux_sym_order_expression_token1] = "order_expression_token1",
  [aux_sym_order_expression_token2] = "order_expression_token2",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_EQ] = "=",
  [anon_sym_LT_GT] = "<>",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH] = "/",
  [aux_sym_identifier_token1] = "identifier_token1",
  [aux_sym_identifier_token2] = "identifier_token2",
  [sym__identifier_after_dot] = "identifier",
  [sym_number] = "number",
  [sym_string] = "string",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_statement] = "statement",
  [sym_select_statement] = "select_statement",
  [sym_select_clause] = "select_clause",
  [sym_select_list] = "select_list",
  [sym_select_expression] = "select_expression",
  [sym_from_clause] = "from_clause",
  [sym_from_item] = "from_item",
  [sym_table_expression] = "table_expression",
  [sym_where_clause] = "where_clause",
  [sym_group_by_clause] = "group_by_clause",
  [sym_having_clause] = "having_clause",
  [sym_order_by_clause] = "order_by_clause",
  [sym_limit_clause] = "limit_clause",
  [sym_expression_list] = "expression_list",
  [sym_order_expression_list] = "order_expression_list",
  [sym_order_expression] = "order_expression",
  [sym_expression] = "expression",
  [sym_path_expression] = "path_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_identifier] = "identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_select_list_repeat1] = "select_list_repeat1",
  [aux_sym_from_clause_repeat1] = "from_clause_repeat1",
  [aux_sym_expression_list_repeat1] = "expression_list_repeat1",
  [aux_sym_order_expression_list_repeat1] = "order_expression_list_repeat1",
  [aux_sym_path_expression_repeat1] = "path_expression_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_select_clause_token1] = aux_sym_select_clause_token1,
  [aux_sym_select_clause_token2] = aux_sym_select_clause_token2,
  [aux_sym_select_clause_token3] = aux_sym_select_clause_token3,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_STAR] = anon_sym_STAR,
  [aux_sym_select_expression_token1] = aux_sym_select_expression_token1,
  [anon_sym_DOT] = anon_sym_DOT,
  [aux_sym_from_clause_token1] = aux_sym_from_clause_token1,
  [aux_sym_where_clause_token1] = aux_sym_where_clause_token1,
  [aux_sym_group_by_clause_token1] = aux_sym_group_by_clause_token1,
  [aux_sym_group_by_clause_token2] = aux_sym_group_by_clause_token2,
  [aux_sym_having_clause_token1] = aux_sym_having_clause_token1,
  [aux_sym_order_by_clause_token1] = aux_sym_order_by_clause_token1,
  [aux_sym_limit_clause_token1] = aux_sym_limit_clause_token1,
  [aux_sym_order_expression_token1] = aux_sym_order_expression_token1,
  [aux_sym_order_expression_token2] = aux_sym_order_expression_token2,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [aux_sym_identifier_token2] = aux_sym_identifier_token2,
  [sym__identifier_after_dot] = sym_identifier,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_statement] = sym_statement,
  [sym_select_statement] = sym_select_statement,
  [sym_select_clause] = sym_select_clause,
  [sym_select_list] = sym_select_list,
  [sym_select_expression] = sym_select_expression,
  [sym_from_clause] = sym_from_clause,
  [sym_from_item] = sym_from_item,
  [sym_table_expression] = sym_table_expression,
  [sym_where_clause] = sym_where_clause,
  [sym_group_by_clause] = sym_group_by_clause,
  [sym_having_clause] = sym_having_clause,
  [sym_order_by_clause] = sym_order_by_clause,
  [sym_limit_clause] = sym_limit_clause,
  [sym_expression_list] = sym_expression_list,
  [sym_order_expression_list] = sym_order_expression_list,
  [sym_order_expression] = sym_order_expression,
  [sym_expression] = sym_expression,
  [sym_path_expression] = sym_path_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_identifier] = sym_identifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_select_list_repeat1] = aux_sym_select_list_repeat1,
  [aux_sym_from_clause_repeat1] = aux_sym_from_clause_repeat1,
  [aux_sym_expression_list_repeat1] = aux_sym_expression_list_repeat1,
  [aux_sym_order_expression_list_repeat1] = aux_sym_order_expression_list_repeat1,
  [aux_sym_path_expression_repeat1] = aux_sym_path_expression_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_select_clause_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_select_clause_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_select_clause_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_select_expression_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_from_clause_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_where_clause_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_group_by_clause_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_group_by_clause_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_having_clause_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_order_by_clause_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_limit_clause_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_order_expression_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_order_expression_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifier_token2] = {
    .visible = false,
    .named = false,
  },
  [sym__identifier_after_dot] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_select_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_select_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_select_list] = {
    .visible = true,
    .named = true,
  },
  [sym_select_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_from_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_from_item] = {
    .visible = true,
    .named = true,
  },
  [sym_table_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_where_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_group_by_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_having_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_order_by_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_limit_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_list] = {
    .visible = true,
    .named = true,
  },
  [sym_order_expression_list] = {
    .visible = true,
    .named = true,
  },
  [sym_order_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_path_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_select_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_from_clause_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_order_expression_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 5,
  [13] = 3,
  [14] = 4,
  [15] = 2,
  [16] = 6,
  [17] = 9,
  [18] = 10,
  [19] = 8,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 4,
  [28] = 2,
  [29] = 3,
  [30] = 30,
  [31] = 5,
  [32] = 4,
  [33] = 33,
  [34] = 6,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 40,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 60,
  [63] = 63,
  [64] = 57,
  [65] = 60,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 93,
  [96] = 93,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(58);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '(') ADVANCE(86);
      if (lookahead == ')') ADVANCE(87);
      if (lookahead == '*') ADVANCE(67);
      if (lookahead == '+') ADVANCE(94);
      if (lookahead == ',') ADVANCE(66);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == '.') ADVANCE(70);
      if (lookahead == '/') ADVANCE(96);
      if (lookahead == ';') ADVANCE(59);
      if (lookahead == '<') ADVANCE(90);
      if (lookahead == '=') ADVANCE(88);
      if (lookahead == '>') ADVANCE(91);
      if (lookahead == '`') ADVANCE(54);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(29);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(53);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(17);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(39);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(42);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(10);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(25);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(40);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(19);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 1:
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '(') ADVANCE(86);
      if (lookahead == '*') ADVANCE(67);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '`') ADVANCE(54);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(115);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == '(') ADVANCE(86);
      if (lookahead == '*') ADVANCE(67);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '`') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(141);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(67);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '`') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(142);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(143);
      END_STATE();
    case 9:
      if (lookahead == '`') ADVANCE(137);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 11:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(85);
      END_STATE();
    case 12:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(84);
      END_STATE();
    case 13:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(48);
      END_STATE();
    case 14:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(49);
      END_STATE();
    case 15:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(22);
      END_STATE();
    case 16:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 17:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(44);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 18:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 19:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 20:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 21:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 22:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 23:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(78);
      END_STATE();
    case 24:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(21);
      END_STATE();
    case 25:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 26:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 27:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 28:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 29:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(30);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(68);
      END_STATE();
    case 30:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 31:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 32:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(71);
      END_STATE();
    case 33:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(27);
      END_STATE();
    case 34:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 35:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 36:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 37:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 38:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(75);
      END_STATE();
    case 39:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 40:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 41:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 42:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 43:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 44:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(11);
      END_STATE();
    case 45:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(50);
      END_STATE();
    case 46:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(12);
      END_STATE();
    case 47:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(82);
      END_STATE();
    case 48:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(60);
      END_STATE();
    case 49:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(64);
      END_STATE();
    case 50:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(28);
      END_STATE();
    case 51:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 52:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(26);
      END_STATE();
    case 53:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(77);
      END_STATE();
    case 54:
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(9);
      END_STATE();
    case 55:
      if (eof) ADVANCE(58);
      if (lookahead == ')') ADVANCE(87);
      if (lookahead == '*') ADVANCE(67);
      if (lookahead == '+') ADVANCE(94);
      if (lookahead == ',') ADVANCE(66);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == '.') ADVANCE(70);
      if (lookahead == '/') ADVANCE(96);
      if (lookahead == ';') ADVANCE(59);
      if (lookahead == '<') ADVANCE(90);
      if (lookahead == '=') ADVANCE(88);
      if (lookahead == '>') ADVANCE(91);
      if (lookahead == '`') ADVANCE(54);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(128);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(123);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(126);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(97);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(108);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(124);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(101);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(55)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 56:
      if (eof) ADVANCE(58);
      if (lookahead == '*') ADVANCE(67);
      if (lookahead == '+') ADVANCE(94);
      if (lookahead == ',') ADVANCE(66);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == '.') ADVANCE(70);
      if (lookahead == '/') ADVANCE(96);
      if (lookahead == ';') ADVANCE(59);
      if (lookahead == '<') ADVANCE(90);
      if (lookahead == '=') ADVANCE(88);
      if (lookahead == '>') ADVANCE(91);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(46);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(16);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(39);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(42);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(10);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(25);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(40);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(19);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(56)
      END_STATE();
    case 57:
      if (eof) ADVANCE(58);
      if (lookahead == ',') ADVANCE(66);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(70);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ';') ADVANCE(59);
      if (lookahead == '`') ADVANCE(54);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(128);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(126);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(97);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(108);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(124);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(101);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(57)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_select_clause_token1);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_select_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_select_clause_token2);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_select_clause_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_select_clause_token3);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_select_clause_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_select_expression_token1);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_select_expression_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_from_clause_token1);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_from_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_where_clause_token1);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_where_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_group_by_clause_token1);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_group_by_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_group_by_clause_token2);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_having_clause_token1);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_having_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_order_by_clause_token1);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_order_by_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_limit_clause_token1);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_limit_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_order_expression_token1);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_order_expression_token2);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(92);
      if (lookahead == '>') ADVANCE(89);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(93);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(143);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(7);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__identifier_after_dot);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__identifier_after_dot);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(143);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 55},
  [3] = {.lex_state = 55},
  [4] = {.lex_state = 55},
  [5] = {.lex_state = 55},
  [6] = {.lex_state = 55},
  [7] = {.lex_state = 55},
  [8] = {.lex_state = 55},
  [9] = {.lex_state = 55},
  [10] = {.lex_state = 55},
  [11] = {.lex_state = 55},
  [12] = {.lex_state = 56},
  [13] = {.lex_state = 56},
  [14] = {.lex_state = 56},
  [15] = {.lex_state = 56},
  [16] = {.lex_state = 56},
  [17] = {.lex_state = 56},
  [18] = {.lex_state = 56},
  [19] = {.lex_state = 56},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 56},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 57},
  [28] = {.lex_state = 57},
  [29] = {.lex_state = 57},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 57},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 57},
  [34] = {.lex_state = 57},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 57},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 2},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 55},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [aux_sym_select_clause_token1] = ACTIONS(1),
    [aux_sym_select_clause_token2] = ACTIONS(1),
    [aux_sym_select_clause_token3] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [aux_sym_select_expression_token1] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [aux_sym_from_clause_token1] = ACTIONS(1),
    [aux_sym_where_clause_token1] = ACTIONS(1),
    [aux_sym_group_by_clause_token1] = ACTIONS(1),
    [aux_sym_group_by_clause_token2] = ACTIONS(1),
    [aux_sym_having_clause_token1] = ACTIONS(1),
    [aux_sym_order_by_clause_token1] = ACTIONS(1),
    [aux_sym_limit_clause_token1] = ACTIONS(1),
    [aux_sym_order_expression_token2] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [aux_sym_identifier_token2] = ACTIONS(1),
    [sym__identifier_after_dot] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(114),
    [sym_statement] = STATE(79),
    [sym_select_statement] = STATE(113),
    [sym_select_clause] = STATE(24),
    [aux_sym_source_file_repeat1] = STATE(79),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_select_clause_token1] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOT,
    STATE(3), 1,
      aux_sym_path_expression_repeat1,
    ACTIONS(9), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      aux_sym_identifier_token2,
    ACTIONS(11), 13,
      aux_sym_select_clause_token1,
      aux_sym_select_expression_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
      aux_sym_identifier_token1,
  [38] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DOT,
    STATE(3), 1,
      aux_sym_path_expression_repeat1,
    ACTIONS(15), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      aux_sym_identifier_token2,
    ACTIONS(17), 13,
      aux_sym_select_clause_token1,
      aux_sym_select_expression_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
      aux_sym_identifier_token1,
  [76] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOT,
    STATE(2), 1,
      aux_sym_path_expression_repeat1,
    ACTIONS(22), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      aux_sym_identifier_token2,
    ACTIONS(24), 13,
      aux_sym_select_clause_token1,
      aux_sym_select_expression_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
      aux_sym_identifier_token1,
  [113] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(26), 12,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      aux_sym_identifier_token2,
    ACTIONS(28), 13,
      aux_sym_select_clause_token1,
      aux_sym_select_expression_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
      aux_sym_identifier_token1,
  [146] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 12,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      aux_sym_identifier_token2,
    ACTIONS(17), 13,
      aux_sym_select_clause_token1,
      aux_sym_select_expression_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
      aux_sym_identifier_token1,
  [179] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(30), 1,
      anon_sym_DOT,
    STATE(2), 1,
      aux_sym_path_expression_repeat1,
    ACTIONS(22), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      aux_sym_identifier_token2,
    ACTIONS(24), 13,
      aux_sym_select_clause_token1,
      aux_sym_select_expression_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
      aux_sym_identifier_token1,
  [216] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(32), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      aux_sym_identifier_token2,
    ACTIONS(34), 13,
      aux_sym_select_clause_token1,
      aux_sym_select_expression_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
      aux_sym_identifier_token1,
  [248] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(36), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      aux_sym_identifier_token2,
    ACTIONS(38), 13,
      aux_sym_select_clause_token1,
      aux_sym_select_expression_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
      aux_sym_identifier_token1,
  [280] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      aux_sym_identifier_token2,
    ACTIONS(42), 13,
      aux_sym_select_clause_token1,
      aux_sym_select_expression_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
      aux_sym_identifier_token1,
  [312] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 1,
      aux_sym_select_expression_token1,
    ACTIONS(54), 1,
      aux_sym_identifier_token1,
    ACTIONS(56), 1,
      aux_sym_identifier_token2,
    STATE(50), 1,
      sym_identifier,
    ACTIONS(44), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(52), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(48), 6,
      anon_sym_STAR,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
    ACTIONS(46), 7,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [356] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(28), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(26), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_DOT,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_order_expression_token1,
      aux_sym_order_expression_token2,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
  [387] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_DOT,
    STATE(13), 1,
      aux_sym_path_expression_repeat1,
    ACTIONS(17), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(15), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_STAR,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_order_expression_token1,
      aux_sym_order_expression_token2,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
  [421] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_DOT,
    STATE(15), 1,
      aux_sym_path_expression_repeat1,
    ACTIONS(24), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(22), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_STAR,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_order_expression_token1,
      aux_sym_order_expression_token2,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
  [455] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_DOT,
    STATE(13), 1,
      aux_sym_path_expression_repeat1,
    ACTIONS(11), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(9), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_STAR,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_order_expression_token1,
      aux_sym_order_expression_token2,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
  [489] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(15), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_DOT,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_order_expression_token1,
      aux_sym_order_expression_token2,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
  [518] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(38), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(36), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_STAR,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_order_expression_token1,
      aux_sym_order_expression_token2,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
  [546] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(40), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_STAR,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_order_expression_token1,
      aux_sym_order_expression_token2,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
  [574] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(32), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_STAR,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_order_expression_token1,
      aux_sym_order_expression_token2,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
  [602] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_COMMA,
    STATE(71), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(69), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(63), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
    ACTIONS(67), 6,
      anon_sym_STAR,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
  [634] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 2,
      aux_sym_order_expression_token1,
      aux_sym_order_expression_token2,
    ACTIONS(69), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(71), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      aux_sym_limit_clause_token1,
    ACTIONS(67), 6,
      anon_sym_STAR,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
  [663] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(67), 6,
      anon_sym_STAR,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
    ACTIONS(75), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [690] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(67), 6,
      anon_sym_STAR,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
    ACTIONS(77), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [717] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_SEMI,
    ACTIONS(83), 1,
      aux_sym_from_clause_token1,
    ACTIONS(85), 1,
      aux_sym_where_clause_token1,
    ACTIONS(87), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(89), 1,
      aux_sym_having_clause_token1,
    ACTIONS(91), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(93), 1,
      aux_sym_limit_clause_token1,
    STATE(30), 1,
      sym_from_clause,
    STATE(41), 1,
      sym_where_clause,
    STATE(66), 1,
      sym_group_by_clause,
    STATE(74), 1,
      sym_having_clause,
    STATE(88), 1,
      sym_order_by_clause,
    STATE(103), 1,
      sym_limit_clause,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      aux_sym_select_clause_token1,
  [764] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(95), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
    ACTIONS(67), 6,
      anon_sym_STAR,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
  [789] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_STAR,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 1,
      aux_sym_identifier_token1,
    ACTIONS(105), 1,
      aux_sym_identifier_token2,
    STATE(7), 1,
      sym_identifier,
    STATE(11), 1,
      sym_expression,
    STATE(39), 1,
      sym_select_expression,
    STATE(55), 1,
      sym_select_list,
    ACTIONS(97), 2,
      aux_sym_select_clause_token2,
      aux_sym_select_clause_token3,
    ACTIONS(107), 2,
      sym_number,
      sym_string,
    STATE(9), 2,
      sym_path_expression,
      sym_binary_expression,
  [829] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_DOT,
    STATE(28), 1,
      aux_sym_path_expression_repeat1,
    ACTIONS(22), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      aux_sym_identifier_token2,
    ACTIONS(24), 8,
      aux_sym_select_clause_token1,
      aux_sym_select_expression_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_identifier_token1,
  [855] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_DOT,
    STATE(29), 1,
      aux_sym_path_expression_repeat1,
    ACTIONS(9), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      aux_sym_identifier_token2,
    ACTIONS(11), 8,
      aux_sym_select_clause_token1,
      aux_sym_select_expression_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_identifier_token1,
  [881] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_DOT,
    STATE(29), 1,
      aux_sym_path_expression_repeat1,
    ACTIONS(15), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      aux_sym_identifier_token2,
    ACTIONS(17), 8,
      aux_sym_select_clause_token1,
      aux_sym_select_expression_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_identifier_token1,
  [907] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      aux_sym_where_clause_token1,
    ACTIONS(87), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(89), 1,
      aux_sym_having_clause_token1,
    ACTIONS(91), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(93), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(116), 1,
      anon_sym_SEMI,
    STATE(44), 1,
      sym_where_clause,
    STATE(69), 1,
      sym_group_by_clause,
    STATE(76), 1,
      sym_having_clause,
    STATE(92), 1,
      sym_order_by_clause,
    STATE(98), 1,
      sym_limit_clause,
    ACTIONS(114), 2,
      ts_builtin_sym_end,
      aux_sym_select_clause_token1,
  [948] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(26), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_DOT,
      aux_sym_identifier_token2,
    ACTIONS(28), 8,
      aux_sym_select_clause_token1,
      aux_sym_select_expression_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_identifier_token1,
  [969] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOT,
    STATE(2), 1,
      aux_sym_path_expression_repeat1,
    ACTIONS(24), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(22), 7,
      anon_sym_STAR,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
  [994] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 1,
      aux_sym_identifier_token1,
    ACTIONS(56), 1,
      aux_sym_identifier_token2,
    ACTIONS(122), 1,
      aux_sym_select_expression_token1,
    STATE(63), 1,
      sym_identifier,
    ACTIONS(118), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(120), 6,
      aux_sym_select_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [1023] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_DOT,
      aux_sym_identifier_token2,
    ACTIONS(17), 8,
      aux_sym_select_clause_token1,
      aux_sym_select_expression_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_identifier_token1,
  [1044] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_STAR,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    STATE(7), 1,
      sym_identifier,
    STATE(11), 1,
      sym_expression,
    STATE(39), 1,
      sym_select_expression,
    STATE(61), 1,
      sym_select_list,
    ACTIONS(105), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(107), 2,
      sym_number,
      sym_string,
    STATE(9), 2,
      sym_path_expression,
      sym_binary_expression,
  [1078] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      aux_sym_identifier_token2,
    ACTIONS(126), 8,
      aux_sym_select_clause_token1,
      aux_sym_select_expression_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_identifier_token1,
  [1098] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_COMMA,
    STATE(37), 1,
      aux_sym_select_list_repeat1,
    ACTIONS(128), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [1119] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    STATE(14), 1,
      sym_identifier,
    STATE(21), 1,
      sym_expression,
    STATE(78), 1,
      sym_order_expression,
    STATE(94), 1,
      sym_order_expression_list,
    ACTIONS(56), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(135), 2,
      sym_number,
      sym_string,
    STATE(17), 2,
      sym_path_expression,
      sym_binary_expression,
  [1150] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_COMMA,
    STATE(42), 1,
      aux_sym_select_list_repeat1,
    ACTIONS(137), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [1171] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_RPAREN,
    ACTIONS(145), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(141), 6,
      anon_sym_STAR,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
  [1192] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(89), 1,
      aux_sym_having_clause_token1,
    ACTIONS(91), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(93), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(116), 1,
      anon_sym_SEMI,
    STATE(69), 1,
      sym_group_by_clause,
    STATE(76), 1,
      sym_having_clause,
    STATE(92), 1,
      sym_order_by_clause,
    STATE(98), 1,
      sym_limit_clause,
    ACTIONS(114), 2,
      ts_builtin_sym_end,
      aux_sym_select_clause_token1,
  [1227] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_COMMA,
    STATE(37), 1,
      aux_sym_select_list_repeat1,
    ACTIONS(147), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [1248] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_STAR,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    STATE(7), 1,
      sym_identifier,
    STATE(11), 1,
      sym_expression,
    STATE(53), 1,
      sym_select_expression,
    ACTIONS(105), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(107), 2,
      sym_number,
      sym_string,
    STATE(9), 2,
      sym_path_expression,
      sym_binary_expression,
  [1279] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(89), 1,
      aux_sym_having_clause_token1,
    ACTIONS(91), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(93), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(151), 1,
      anon_sym_SEMI,
    STATE(56), 1,
      sym_group_by_clause,
    STATE(73), 1,
      sym_having_clause,
    STATE(86), 1,
      sym_order_by_clause,
    STATE(97), 1,
      sym_limit_clause,
    ACTIONS(149), 2,
      ts_builtin_sym_end,
      aux_sym_select_clause_token1,
  [1314] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_RPAREN,
    ACTIONS(145), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(141), 6,
      anon_sym_STAR,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
  [1335] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [1351] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_COMMA,
    STATE(51), 1,
      aux_sym_from_clause_repeat1,
    ACTIONS(155), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [1371] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    STATE(14), 1,
      sym_identifier,
    STATE(21), 1,
      sym_expression,
    STATE(89), 1,
      sym_order_expression,
    ACTIONS(56), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(135), 2,
      sym_number,
      sym_string,
    STATE(17), 2,
      sym_path_expression,
      sym_binary_expression,
  [1399] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_COMMA,
    STATE(49), 1,
      aux_sym_from_clause_repeat1,
    ACTIONS(159), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [1419] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [1435] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_COMMA,
    STATE(49), 1,
      aux_sym_from_clause_repeat1,
    ACTIONS(166), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [1455] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    STATE(14), 1,
      sym_identifier,
    STATE(20), 1,
      sym_expression,
    STATE(80), 1,
      sym_expression_list,
    ACTIONS(56), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(135), 2,
      sym_number,
      sym_string,
    STATE(17), 2,
      sym_path_expression,
      sym_binary_expression,
  [1483] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [1499] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [1515] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [1530] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      aux_sym_having_clause_token1,
    ACTIONS(91), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(93), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(174), 1,
      anon_sym_SEMI,
    STATE(75), 1,
      sym_having_clause,
    STATE(87), 1,
      sym_order_by_clause,
    STATE(104), 1,
      sym_limit_clause,
    ACTIONS(172), 2,
      ts_builtin_sym_end,
      aux_sym_select_clause_token1,
  [1559] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    STATE(32), 1,
      sym_identifier,
    STATE(40), 1,
      sym_expression,
    ACTIONS(105), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(107), 2,
      sym_number,
      sym_string,
    STATE(9), 2,
      sym_path_expression,
      sym_binary_expression,
  [1584] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    STATE(14), 1,
      sym_identifier,
    STATE(25), 1,
      sym_expression,
    ACTIONS(56), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(135), 2,
      sym_number,
      sym_string,
    STATE(17), 2,
      sym_path_expression,
      sym_binary_expression,
  [1609] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    STATE(14), 1,
      sym_identifier,
    STATE(22), 1,
      sym_expression,
    ACTIONS(56), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(135), 2,
      sym_number,
      sym_string,
    STATE(17), 2,
      sym_path_expression,
      sym_binary_expression,
  [1634] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    STATE(4), 1,
      sym_identifier,
    STATE(10), 1,
      sym_expression,
    ACTIONS(105), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(107), 2,
      sym_number,
      sym_string,
    STATE(9), 2,
      sym_path_expression,
      sym_binary_expression,
  [1659] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [1674] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    STATE(14), 1,
      sym_identifier,
    STATE(18), 1,
      sym_expression,
    ACTIONS(56), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(135), 2,
      sym_number,
      sym_string,
    STATE(17), 2,
      sym_path_expression,
      sym_binary_expression,
  [1699] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [1714] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    STATE(32), 1,
      sym_identifier,
    STATE(45), 1,
      sym_expression,
    ACTIONS(105), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(107), 2,
      sym_number,
      sym_string,
    STATE(9), 2,
      sym_path_expression,
      sym_binary_expression,
  [1739] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    STATE(10), 1,
      sym_expression,
    STATE(32), 1,
      sym_identifier,
    ACTIONS(105), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(107), 2,
      sym_number,
      sym_string,
    STATE(9), 2,
      sym_path_expression,
      sym_binary_expression,
  [1764] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      aux_sym_having_clause_token1,
    ACTIONS(91), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(93), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(116), 1,
      anon_sym_SEMI,
    STATE(76), 1,
      sym_having_clause,
    STATE(92), 1,
      sym_order_by_clause,
    STATE(98), 1,
      sym_limit_clause,
    ACTIONS(114), 2,
      ts_builtin_sym_end,
      aux_sym_select_clause_token1,
  [1793] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    STATE(14), 1,
      sym_identifier,
    STATE(23), 1,
      sym_expression,
    ACTIONS(56), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
    ACTIONS(135), 2,
      sym_number,
      sym_string,
    STATE(17), 2,
      sym_path_expression,
      sym_binary_expression,
  [1818] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [1833] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      aux_sym_having_clause_token1,
    ACTIONS(91), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(93), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(151), 1,
      anon_sym_SEMI,
    STATE(73), 1,
      sym_having_clause,
    STATE(86), 1,
      sym_order_by_clause,
    STATE(97), 1,
      sym_limit_clause,
    ACTIONS(149), 2,
      ts_builtin_sym_end,
      aux_sym_select_clause_token1,
  [1862] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [1877] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_COMMA,
    STATE(72), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(182), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [1895] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_COMMA,
    STATE(72), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(77), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [1913] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(93), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(174), 1,
      anon_sym_SEMI,
    STATE(87), 1,
      sym_order_by_clause,
    STATE(104), 1,
      sym_limit_clause,
    ACTIONS(172), 2,
      ts_builtin_sym_end,
      aux_sym_select_clause_token1,
  [1936] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(93), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(116), 1,
      anon_sym_SEMI,
    STATE(92), 1,
      sym_order_by_clause,
    STATE(98), 1,
      sym_limit_clause,
    ACTIONS(114), 2,
      ts_builtin_sym_end,
      aux_sym_select_clause_token1,
  [1959] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(93), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(189), 1,
      anon_sym_SEMI,
    STATE(91), 1,
      sym_order_by_clause,
    STATE(101), 1,
      sym_limit_clause,
    ACTIONS(187), 2,
      ts_builtin_sym_end,
      aux_sym_select_clause_token1,
  [1982] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(93), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(151), 1,
      anon_sym_SEMI,
    STATE(86), 1,
      sym_order_by_clause,
    STATE(97), 1,
      sym_limit_clause,
    ACTIONS(149), 2,
      ts_builtin_sym_end,
      aux_sym_select_clause_token1,
  [2005] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      ts_builtin_sym_end,
    ACTIONS(193), 1,
      aux_sym_select_clause_token1,
    STATE(24), 1,
      sym_select_clause,
    STATE(113), 1,
      sym_select_statement,
    STATE(77), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
  [2025] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_COMMA,
    STATE(82), 1,
      aux_sym_order_expression_list_repeat1,
    ACTIONS(196), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      aux_sym_limit_clause_token1,
  [2041] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_select_clause_token1,
    ACTIONS(200), 1,
      ts_builtin_sym_end,
    STATE(24), 1,
      sym_select_clause,
    STATE(113), 1,
      sym_select_statement,
    STATE(77), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
  [2061] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [2073] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(27), 1,
      sym_identifier,
    STATE(33), 1,
      sym_table_expression,
    STATE(36), 1,
      sym_path_expression,
    STATE(47), 1,
      sym_from_item,
    ACTIONS(204), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [2093] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_COMMA,
    STATE(84), 1,
      aux_sym_order_expression_list_repeat1,
    ACTIONS(206), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      aux_sym_limit_clause_token1,
  [2109] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(27), 1,
      sym_identifier,
    STATE(33), 1,
      sym_table_expression,
    STATE(36), 1,
      sym_path_expression,
    STATE(68), 1,
      sym_from_item,
    ACTIONS(204), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [2129] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_COMMA,
    STATE(84), 1,
      aux_sym_order_expression_list_repeat1,
    ACTIONS(208), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      aux_sym_limit_clause_token1,
  [2145] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      aux_sym_limit_clause_token1,
  [2156] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(174), 1,
      anon_sym_SEMI,
    STATE(104), 1,
      sym_limit_clause,
    ACTIONS(172), 2,
      ts_builtin_sym_end,
      aux_sym_select_clause_token1,
  [2173] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(189), 1,
      anon_sym_SEMI,
    STATE(101), 1,
      sym_limit_clause,
    ACTIONS(187), 2,
      ts_builtin_sym_end,
      aux_sym_select_clause_token1,
  [2190] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(116), 1,
      anon_sym_SEMI,
    STATE(98), 1,
      sym_limit_clause,
    ACTIONS(114), 2,
      ts_builtin_sym_end,
      aux_sym_select_clause_token1,
  [2207] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      aux_sym_limit_clause_token1,
  [2218] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_STAR,
    ACTIONS(217), 1,
      sym__identifier_after_dot,
    STATE(6), 1,
      sym_identifier,
    ACTIONS(105), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [2235] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(221), 1,
      anon_sym_SEMI,
    STATE(99), 1,
      sym_limit_clause,
    ACTIONS(219), 2,
      ts_builtin_sym_end,
      aux_sym_select_clause_token1,
  [2252] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(151), 1,
      anon_sym_SEMI,
    STATE(97), 1,
      sym_limit_clause,
    ACTIONS(149), 2,
      ts_builtin_sym_end,
      aux_sym_select_clause_token1,
  [2269] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      sym__identifier_after_dot,
    STATE(16), 1,
      sym_identifier,
    ACTIONS(56), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [2283] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      aux_sym_limit_clause_token1,
  [2293] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      sym__identifier_after_dot,
    STATE(34), 1,
      sym_identifier,
    ACTIONS(204), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [2307] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      sym__identifier_after_dot,
    STATE(6), 1,
      sym_identifier,
    ACTIONS(105), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [2321] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_SEMI,
    ACTIONS(172), 2,
      ts_builtin_sym_end,
      aux_sym_select_clause_token1,
  [2332] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_SEMI,
    ACTIONS(149), 2,
      ts_builtin_sym_end,
      aux_sym_select_clause_token1,
  [2343] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_SEMI,
    ACTIONS(229), 2,
      ts_builtin_sym_end,
      aux_sym_select_clause_token1,
  [2354] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
  [2363] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_SEMI,
    ACTIONS(219), 2,
      ts_builtin_sym_end,
      aux_sym_select_clause_token1,
  [2374] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(54), 1,
      sym_identifier,
    ACTIONS(56), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [2385] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_SEMI,
    ACTIONS(114), 2,
      ts_builtin_sym_end,
      aux_sym_select_clause_token1,
  [2396] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_SEMI,
    ACTIONS(187), 2,
      ts_builtin_sym_end,
      aux_sym_select_clause_token1,
  [2407] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(70), 1,
      sym_identifier,
    ACTIONS(56), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [2418] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 2,
      ts_builtin_sym_end,
      aux_sym_select_clause_token1,
  [2426] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 2,
      ts_builtin_sym_end,
      aux_sym_select_clause_token1,
  [2434] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 2,
      ts_builtin_sym_end,
      aux_sym_select_clause_token1,
  [2442] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 2,
      ts_builtin_sym_end,
      aux_sym_select_clause_token1,
  [2450] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 2,
      ts_builtin_sym_end,
      aux_sym_select_clause_token1,
  [2458] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 2,
      ts_builtin_sym_end,
      aux_sym_select_clause_token1,
  [2466] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 2,
      ts_builtin_sym_end,
      aux_sym_select_clause_token1,
  [2474] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 2,
      ts_builtin_sym_end,
      aux_sym_select_clause_token1,
  [2482] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      ts_builtin_sym_end,
  [2489] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      sym_number,
  [2496] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      aux_sym_group_by_clause_token2,
  [2503] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      aux_sym_group_by_clause_token2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 38,
  [SMALL_STATE(4)] = 76,
  [SMALL_STATE(5)] = 113,
  [SMALL_STATE(6)] = 146,
  [SMALL_STATE(7)] = 179,
  [SMALL_STATE(8)] = 216,
  [SMALL_STATE(9)] = 248,
  [SMALL_STATE(10)] = 280,
  [SMALL_STATE(11)] = 312,
  [SMALL_STATE(12)] = 356,
  [SMALL_STATE(13)] = 387,
  [SMALL_STATE(14)] = 421,
  [SMALL_STATE(15)] = 455,
  [SMALL_STATE(16)] = 489,
  [SMALL_STATE(17)] = 518,
  [SMALL_STATE(18)] = 546,
  [SMALL_STATE(19)] = 574,
  [SMALL_STATE(20)] = 602,
  [SMALL_STATE(21)] = 634,
  [SMALL_STATE(22)] = 663,
  [SMALL_STATE(23)] = 690,
  [SMALL_STATE(24)] = 717,
  [SMALL_STATE(25)] = 764,
  [SMALL_STATE(26)] = 789,
  [SMALL_STATE(27)] = 829,
  [SMALL_STATE(28)] = 855,
  [SMALL_STATE(29)] = 881,
  [SMALL_STATE(30)] = 907,
  [SMALL_STATE(31)] = 948,
  [SMALL_STATE(32)] = 969,
  [SMALL_STATE(33)] = 994,
  [SMALL_STATE(34)] = 1023,
  [SMALL_STATE(35)] = 1044,
  [SMALL_STATE(36)] = 1078,
  [SMALL_STATE(37)] = 1098,
  [SMALL_STATE(38)] = 1119,
  [SMALL_STATE(39)] = 1150,
  [SMALL_STATE(40)] = 1171,
  [SMALL_STATE(41)] = 1192,
  [SMALL_STATE(42)] = 1227,
  [SMALL_STATE(43)] = 1248,
  [SMALL_STATE(44)] = 1279,
  [SMALL_STATE(45)] = 1314,
  [SMALL_STATE(46)] = 1335,
  [SMALL_STATE(47)] = 1351,
  [SMALL_STATE(48)] = 1371,
  [SMALL_STATE(49)] = 1399,
  [SMALL_STATE(50)] = 1419,
  [SMALL_STATE(51)] = 1435,
  [SMALL_STATE(52)] = 1455,
  [SMALL_STATE(53)] = 1483,
  [SMALL_STATE(54)] = 1499,
  [SMALL_STATE(55)] = 1515,
  [SMALL_STATE(56)] = 1530,
  [SMALL_STATE(57)] = 1559,
  [SMALL_STATE(58)] = 1584,
  [SMALL_STATE(59)] = 1609,
  [SMALL_STATE(60)] = 1634,
  [SMALL_STATE(61)] = 1659,
  [SMALL_STATE(62)] = 1674,
  [SMALL_STATE(63)] = 1699,
  [SMALL_STATE(64)] = 1714,
  [SMALL_STATE(65)] = 1739,
  [SMALL_STATE(66)] = 1764,
  [SMALL_STATE(67)] = 1793,
  [SMALL_STATE(68)] = 1818,
  [SMALL_STATE(69)] = 1833,
  [SMALL_STATE(70)] = 1862,
  [SMALL_STATE(71)] = 1877,
  [SMALL_STATE(72)] = 1895,
  [SMALL_STATE(73)] = 1913,
  [SMALL_STATE(74)] = 1936,
  [SMALL_STATE(75)] = 1959,
  [SMALL_STATE(76)] = 1982,
  [SMALL_STATE(77)] = 2005,
  [SMALL_STATE(78)] = 2025,
  [SMALL_STATE(79)] = 2041,
  [SMALL_STATE(80)] = 2061,
  [SMALL_STATE(81)] = 2073,
  [SMALL_STATE(82)] = 2093,
  [SMALL_STATE(83)] = 2109,
  [SMALL_STATE(84)] = 2129,
  [SMALL_STATE(85)] = 2145,
  [SMALL_STATE(86)] = 2156,
  [SMALL_STATE(87)] = 2173,
  [SMALL_STATE(88)] = 2190,
  [SMALL_STATE(89)] = 2207,
  [SMALL_STATE(90)] = 2218,
  [SMALL_STATE(91)] = 2235,
  [SMALL_STATE(92)] = 2252,
  [SMALL_STATE(93)] = 2269,
  [SMALL_STATE(94)] = 2283,
  [SMALL_STATE(95)] = 2293,
  [SMALL_STATE(96)] = 2307,
  [SMALL_STATE(97)] = 2321,
  [SMALL_STATE(98)] = 2332,
  [SMALL_STATE(99)] = 2343,
  [SMALL_STATE(100)] = 2354,
  [SMALL_STATE(101)] = 2363,
  [SMALL_STATE(102)] = 2374,
  [SMALL_STATE(103)] = 2385,
  [SMALL_STATE(104)] = 2396,
  [SMALL_STATE(105)] = 2407,
  [SMALL_STATE(106)] = 2418,
  [SMALL_STATE(107)] = 2426,
  [SMALL_STATE(108)] = 2434,
  [SMALL_STATE(109)] = 2442,
  [SMALL_STATE(110)] = 2450,
  [SMALL_STATE(111)] = 2458,
  [SMALL_STATE(112)] = 2466,
  [SMALL_STATE(113)] = 2474,
  [SMALL_STATE(114)] = 2482,
  [SMALL_STATE(115)] = 2489,
  [SMALL_STATE(116)] = 2496,
  [SMALL_STATE(117)] = 2503,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_expression, 2),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_expression, 2),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_expression_repeat1, 2),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_expression_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_expression_repeat1, 2), SHIFT_REPEAT(96),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_expression, 1),
  [24] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_expression, 1),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [28] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_expression, 1),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_expression, 1),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_expression_repeat1, 2), SHIFT_REPEAT(93),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_having_clause, 2),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_expression_repeat1, 2), SHIFT_REPEAT(95),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_item, 1),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_item, 1),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 1),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_expression, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_list_repeat1, 2),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_list_repeat1, 2), SHIFT_REPEAT(43),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_list, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_list, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_clause_repeat1, 2),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_clause_repeat1, 2), SHIFT_REPEAT(83),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_expression, 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 3),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_expression, 3),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 4),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 3),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_item, 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_item, 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(67),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 5),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression_list, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by_clause, 3),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression_list, 2),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_order_expression_list_repeat1, 2),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_order_expression_list_repeat1, 2), SHIFT_REPEAT(48),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 6),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause, 3),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 7),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_clause, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 8),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [239] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_zetasql(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
