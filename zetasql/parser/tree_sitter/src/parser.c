#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 231
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 78
#define ALIAS_COUNT 0
#define TOKEN_COUNT 44
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
  aux_sym_boolean_literal_token1 = 20,
  aux_sym_boolean_literal_token2 = 21,
  sym_null_literal = 22,
  aux_sym_between_expression_token1 = 23,
  aux_sym_between_expression_token2 = 24,
  aux_sym_between_expression_token3 = 25,
  aux_sym_clamped_between_modifier_token1 = 26,
  aux_sym_function_argument_token1 = 27,
  aux_sym_binary_expression_token1 = 28,
  anon_sym_EQ = 29,
  anon_sym_LT_GT = 30,
  anon_sym_LT = 31,
  anon_sym_GT = 32,
  anon_sym_LT_EQ = 33,
  anon_sym_GT_EQ = 34,
  anon_sym_PLUS = 35,
  anon_sym_DASH = 36,
  anon_sym_SLASH = 37,
  aux_sym_identifier_token1 = 38,
  aux_sym_identifier_token2 = 39,
  sym__identifier_after_dot = 40,
  sym_number = 41,
  sym_string = 42,
  sym_comment = 43,
  sym_source_file = 44,
  sym_statement = 45,
  sym_select_statement = 46,
  sym_select_clause = 47,
  sym_select_list = 48,
  sym_select_expression = 49,
  sym_from_clause = 50,
  sym_from_item = 51,
  sym_table_expression = 52,
  sym_where_clause = 53,
  sym_group_by_clause = 54,
  sym_having_clause = 55,
  sym_order_by_clause = 56,
  sym_limit_clause = 57,
  sym_expression_list = 58,
  sym_order_expression_list = 59,
  sym_order_expression = 60,
  sym_expression = 61,
  sym_boolean_literal = 62,
  sym_between_expression = 63,
  sym_function_call = 64,
  sym_clamped_between_modifier = 65,
  sym_function_arguments = 66,
  sym_function_argument = 67,
  sym_path_expression = 68,
  sym_binary_expression = 69,
  sym_identifier = 70,
  aux_sym_source_file_repeat1 = 71,
  aux_sym_select_list_repeat1 = 72,
  aux_sym_from_clause_repeat1 = 73,
  aux_sym_expression_list_repeat1 = 74,
  aux_sym_order_expression_list_repeat1 = 75,
  aux_sym_function_arguments_repeat1 = 76,
  aux_sym_path_expression_repeat1 = 77,
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
  [aux_sym_boolean_literal_token1] = "boolean_literal_token1",
  [aux_sym_boolean_literal_token2] = "boolean_literal_token2",
  [sym_null_literal] = "null_literal",
  [aux_sym_between_expression_token1] = "between_expression_token1",
  [aux_sym_between_expression_token2] = "between_expression_token2",
  [aux_sym_between_expression_token3] = "between_expression_token3",
  [aux_sym_clamped_between_modifier_token1] = "clamped_between_modifier_token1",
  [aux_sym_function_argument_token1] = "function_argument_token1",
  [aux_sym_binary_expression_token1] = "binary_expression_token1",
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
  [sym_boolean_literal] = "boolean_literal",
  [sym_between_expression] = "between_expression",
  [sym_function_call] = "function_call",
  [sym_clamped_between_modifier] = "clamped_between_modifier",
  [sym_function_arguments] = "function_arguments",
  [sym_function_argument] = "function_argument",
  [sym_path_expression] = "path_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_identifier] = "identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_select_list_repeat1] = "select_list_repeat1",
  [aux_sym_from_clause_repeat1] = "from_clause_repeat1",
  [aux_sym_expression_list_repeat1] = "expression_list_repeat1",
  [aux_sym_order_expression_list_repeat1] = "order_expression_list_repeat1",
  [aux_sym_function_arguments_repeat1] = "function_arguments_repeat1",
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
  [aux_sym_boolean_literal_token1] = aux_sym_boolean_literal_token1,
  [aux_sym_boolean_literal_token2] = aux_sym_boolean_literal_token2,
  [sym_null_literal] = sym_null_literal,
  [aux_sym_between_expression_token1] = aux_sym_between_expression_token1,
  [aux_sym_between_expression_token2] = aux_sym_between_expression_token2,
  [aux_sym_between_expression_token3] = aux_sym_between_expression_token3,
  [aux_sym_clamped_between_modifier_token1] = aux_sym_clamped_between_modifier_token1,
  [aux_sym_function_argument_token1] = aux_sym_function_argument_token1,
  [aux_sym_binary_expression_token1] = aux_sym_binary_expression_token1,
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
  [sym_boolean_literal] = sym_boolean_literal,
  [sym_between_expression] = sym_between_expression,
  [sym_function_call] = sym_function_call,
  [sym_clamped_between_modifier] = sym_clamped_between_modifier,
  [sym_function_arguments] = sym_function_arguments,
  [sym_function_argument] = sym_function_argument,
  [sym_path_expression] = sym_path_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_identifier] = sym_identifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_select_list_repeat1] = aux_sym_select_list_repeat1,
  [aux_sym_from_clause_repeat1] = aux_sym_from_clause_repeat1,
  [aux_sym_expression_list_repeat1] = aux_sym_expression_list_repeat1,
  [aux_sym_order_expression_list_repeat1] = aux_sym_order_expression_list_repeat1,
  [aux_sym_function_arguments_repeat1] = aux_sym_function_arguments_repeat1,
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
  [aux_sym_boolean_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_boolean_literal_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_null_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_between_expression_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_between_expression_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_between_expression_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_clamped_between_modifier_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_argument_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_binary_expression_token1] = {
    .visible = false,
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
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_between_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_clamped_between_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_function_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_function_argument] = {
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
  [aux_sym_function_arguments_repeat1] = {
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
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 7,
  [25] = 4,
  [26] = 3,
  [27] = 5,
  [28] = 5,
  [29] = 3,
  [30] = 4,
  [31] = 6,
  [32] = 7,
  [33] = 9,
  [34] = 6,
  [35] = 18,
  [36] = 12,
  [37] = 21,
  [38] = 10,
  [39] = 13,
  [40] = 16,
  [41] = 17,
  [42] = 11,
  [43] = 15,
  [44] = 14,
  [45] = 19,
  [46] = 9,
  [47] = 20,
  [48] = 23,
  [49] = 22,
  [50] = 11,
  [51] = 18,
  [52] = 13,
  [53] = 16,
  [54] = 17,
  [55] = 55,
  [56] = 12,
  [57] = 10,
  [58] = 21,
  [59] = 55,
  [60] = 19,
  [61] = 20,
  [62] = 55,
  [63] = 14,
  [64] = 15,
  [65] = 23,
  [66] = 22,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 73,
  [75] = 73,
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
  [91] = 84,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 89,
  [97] = 97,
  [98] = 87,
  [99] = 99,
  [100] = 100,
  [101] = 89,
  [102] = 102,
  [103] = 85,
  [104] = 88,
  [105] = 99,
  [106] = 99,
  [107] = 87,
  [108] = 102,
  [109] = 95,
  [110] = 110,
  [111] = 88,
  [112] = 94,
  [113] = 90,
  [114] = 84,
  [115] = 93,
  [116] = 94,
  [117] = 85,
  [118] = 95,
  [119] = 102,
  [120] = 120,
  [121] = 93,
  [122] = 90,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 5,
  [128] = 128,
  [129] = 4,
  [130] = 125,
  [131] = 125,
  [132] = 3,
  [133] = 128,
  [134] = 128,
  [135] = 135,
  [136] = 7,
  [137] = 6,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 183,
  [185] = 183,
  [186] = 183,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 191,
  [196] = 190,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 191,
  [201] = 201,
  [202] = 190,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 215,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 214,
  [222] = 215,
  [223] = 220,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 220,
  [228] = 214,
  [229] = 217,
  [230] = 217,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(91);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '(') ADVANCE(119);
      if (lookahead == ')') ADVANCE(120);
      if (lookahead == '*') ADVANCE(100);
      if (lookahead == '+') ADVANCE(145);
      if (lookahead == ',') ADVANCE(99);
      if (lookahead == '-') ADVANCE(146);
      if (lookahead == '.') ADVANCE(103);
      if (lookahead == '/') ADVANCE(147);
      if (lookahead == ';') ADVANCE(92);
      if (lookahead == '<') ADVANCE(141);
      if (lookahead == '=') ADVANCE(139);
      if (lookahead == '>') ADVANCE(142);
      if (lookahead == '`') ADVANCE(87);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(47);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(23);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(48);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(25);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(14);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(71);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(12);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(41);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(62);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(67);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(26);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(68);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      END_STATE();
    case 1:
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '(') ADVANCE(119);
      if (lookahead == ')') ADVANCE(120);
      if (lookahead == '*') ADVANCE(100);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '`') ADVANCE(87);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(178);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(172);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(149);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(212);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(159);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '(') ADVANCE(119);
      if (lookahead == '*') ADVANCE(100);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '`') ADVANCE(87);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(178);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(172);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(149);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(212);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '(') ADVANCE(119);
      if (lookahead == '*') ADVANCE(100);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '`') ADVANCE(87);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(149);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(212);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '(') ADVANCE(119);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '`') ADVANCE(87);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(149);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(212);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(159);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(220);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(100);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '`') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(221);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(222);
      END_STATE();
    case 11:
      if (lookahead == '`') ADVANCE(216);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 13:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 14:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(51);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 15:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(118);
      END_STATE();
    case 16:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(117);
      END_STATE();
    case 17:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(79);
      END_STATE();
    case 18:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(80);
      END_STATE();
    case 19:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(30);
      END_STATE();
    case 20:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(131);
      END_STATE();
    case 21:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(133);
      END_STATE();
    case 22:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 23:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(76);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(110);
      END_STATE();
    case 24:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 25:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(73);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(74);
      END_STATE();
    case 26:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 27:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 28:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 29:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 30:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 31:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 32:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 33:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 34:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 35:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 36:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 37:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 38:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 39:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(111);
      END_STATE();
    case 40:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(34);
      END_STATE();
    case 41:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 42:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 43:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 44:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(78);
      END_STATE();
    case 45:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(95);
      END_STATE();
    case 46:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(125);
      END_STATE();
    case 47:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(45);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(20);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(101);
      END_STATE();
    case 48:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 49:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 50:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(32);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(84);
      END_STATE();
    case 51:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 52:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 53:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(66);
      END_STATE();
    case 54:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(104);
      END_STATE();
    case 55:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(44);
      END_STATE();
    case 56:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(20);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(16);
      END_STATE();
    case 57:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 58:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(129);
      END_STATE();
    case 59:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 60:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 61:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 62:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(77);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 63:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 64:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 65:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(108);
      END_STATE();
    case 66:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(31);
      END_STATE();
    case 67:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(137);
      END_STATE();
    case 68:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 69:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 70:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(136);
      END_STATE();
    case 71:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 72:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 73:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(15);
      END_STATE();
    case 74:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(81);
      END_STATE();
    case 75:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(28);
      END_STATE();
    case 76:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(86);
      END_STATE();
    case 77:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(127);
      END_STATE();
    case 78:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(115);
      END_STATE();
    case 79:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(93);
      END_STATE();
    case 80:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(97);
      END_STATE();
    case 81:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(43);
      END_STATE();
    case 82:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 83:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 84:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 85:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(42);
      END_STATE();
    case 86:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(38);
      END_STATE();
    case 87:
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(11);
      END_STATE();
    case 88:
      if (eof) ADVANCE(91);
      if (lookahead == '(') ADVANCE(119);
      if (lookahead == ')') ADVANCE(120);
      if (lookahead == '*') ADVANCE(100);
      if (lookahead == '+') ADVANCE(145);
      if (lookahead == ',') ADVANCE(99);
      if (lookahead == '-') ADVANCE(146);
      if (lookahead == '.') ADVANCE(103);
      if (lookahead == '/') ADVANCE(147);
      if (lookahead == ';') ADVANCE(92);
      if (lookahead == '<') ADVANCE(141);
      if (lookahead == '=') ADVANCE(139);
      if (lookahead == '>') ADVANCE(142);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(56);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(22);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(48);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(24);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(41);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(61);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(70);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(88)
      END_STATE();
    case 89:
      if (eof) ADVANCE(91);
      if (lookahead == '(') ADVANCE(119);
      if (lookahead == '*') ADVANCE(100);
      if (lookahead == '+') ADVANCE(145);
      if (lookahead == ',') ADVANCE(99);
      if (lookahead == '-') ADVANCE(146);
      if (lookahead == '.') ADVANCE(103);
      if (lookahead == '/') ADVANCE(147);
      if (lookahead == ';') ADVANCE(92);
      if (lookahead == '<') ADVANCE(141);
      if (lookahead == '=') ADVANCE(139);
      if (lookahead == '>') ADVANCE(142);
      if (lookahead == '`') ADVANCE(87);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(183);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(155);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(195);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(197);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(148);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(170);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(189);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(193);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(156);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(89)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      if (('C' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 90:
      if (eof) ADVANCE(91);
      if (lookahead == ',') ADVANCE(99);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '.') ADVANCE(103);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ';') ADVANCE(92);
      if (lookahead == '`') ADVANCE(87);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(200);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(197);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(148);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(170);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(196);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(156);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(90)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_select_clause_token1);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_select_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_select_clause_token2);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_select_clause_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_select_clause_token3);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_select_clause_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_select_expression_token1);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_select_expression_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_from_clause_token1);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_from_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_where_clause_token1);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_where_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_group_by_clause_token1);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_group_by_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_group_by_clause_token2);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_having_clause_token1);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_having_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_order_by_clause_token1);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_order_by_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_limit_clause_token1);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_limit_clause_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_order_expression_token1);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_order_expression_token2);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_boolean_literal_token1);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_boolean_literal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_boolean_literal_token2);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_boolean_literal_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_null_literal);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_null_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_between_expression_token1);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_between_expression_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_between_expression_token2);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_between_expression_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_between_expression_token3);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_between_expression_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_clamped_between_modifier_token1);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_function_argument_token1);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_function_argument_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_binary_expression_token1);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_binary_expression_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(36);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_binary_expression_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(143);
      if (lookahead == '>') ADVANCE(140);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(144);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(222);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(9);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(153);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_identifier_token2);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__identifier_after_dot);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__identifier_after_dot);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(222);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 89},
  [3] = {.lex_state = 89},
  [4] = {.lex_state = 89},
  [5] = {.lex_state = 89},
  [6] = {.lex_state = 89},
  [7] = {.lex_state = 89},
  [8] = {.lex_state = 89},
  [9] = {.lex_state = 89},
  [10] = {.lex_state = 89},
  [11] = {.lex_state = 89},
  [12] = {.lex_state = 89},
  [13] = {.lex_state = 89},
  [14] = {.lex_state = 89},
  [15] = {.lex_state = 89},
  [16] = {.lex_state = 89},
  [17] = {.lex_state = 89},
  [18] = {.lex_state = 89},
  [19] = {.lex_state = 89},
  [20] = {.lex_state = 89},
  [21] = {.lex_state = 89},
  [22] = {.lex_state = 89},
  [23] = {.lex_state = 89},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 88},
  [26] = {.lex_state = 88},
  [27] = {.lex_state = 88},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 88},
  [32] = {.lex_state = 88},
  [33] = {.lex_state = 88},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 88},
  [36] = {.lex_state = 88},
  [37] = {.lex_state = 88},
  [38] = {.lex_state = 88},
  [39] = {.lex_state = 88},
  [40] = {.lex_state = 88},
  [41] = {.lex_state = 88},
  [42] = {.lex_state = 88},
  [43] = {.lex_state = 88},
  [44] = {.lex_state = 88},
  [45] = {.lex_state = 88},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 88},
  [48] = {.lex_state = 88},
  [49] = {.lex_state = 88},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 88},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 88},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 88},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 88},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 88},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 3},
  [113] = {.lex_state = 3},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 3},
  [116] = {.lex_state = 3},
  [117] = {.lex_state = 3},
  [118] = {.lex_state = 3},
  [119] = {.lex_state = 88},
  [120] = {.lex_state = 3},
  [121] = {.lex_state = 3},
  [122] = {.lex_state = 3},
  [123] = {.lex_state = 88},
  [124] = {.lex_state = 3},
  [125] = {.lex_state = 88},
  [126] = {.lex_state = 88},
  [127] = {.lex_state = 90},
  [128] = {.lex_state = 88},
  [129] = {.lex_state = 90},
  [130] = {.lex_state = 88},
  [131] = {.lex_state = 88},
  [132] = {.lex_state = 90},
  [133] = {.lex_state = 88},
  [134] = {.lex_state = 88},
  [135] = {.lex_state = 90},
  [136] = {.lex_state = 90},
  [137] = {.lex_state = 90},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 90},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 6},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 6},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 6},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 6},
  [184] = {.lex_state = 6},
  [185] = {.lex_state = 6},
  [186] = {.lex_state = 6},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 6},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 6},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 89},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
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
    [aux_sym_boolean_literal_token1] = ACTIONS(1),
    [aux_sym_boolean_literal_token2] = ACTIONS(1),
    [sym_null_literal] = ACTIONS(1),
    [aux_sym_between_expression_token1] = ACTIONS(1),
    [aux_sym_between_expression_token2] = ACTIONS(1),
    [aux_sym_between_expression_token3] = ACTIONS(1),
    [aux_sym_clamped_between_modifier_token1] = ACTIONS(1),
    [aux_sym_function_argument_token1] = ACTIONS(1),
    [aux_sym_binary_expression_token1] = ACTIONS(1),
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
    [sym_source_file] = STATE(219),
    [sym_statement] = STATE(173),
    [sym_select_statement] = STATE(208),
    [sym_select_clause] = STATE(86),
    [aux_sym_source_file_repeat1] = STATE(173),
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
    STATE(5), 1,
      aux_sym_path_expression_repeat1,
    ACTIONS(9), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      aux_sym_identifier_token2,
    ACTIONS(11), 17,
      aux_sym_select_clause_token1,
      aux_sym_select_expression_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_between_expression_token1,
      aux_sym_between_expression_token2,
      aux_sym_between_expression_token3,
      aux_sym_binary_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
      aux_sym_identifier_token1,
  [42] = 5,
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
      anon_sym_LPAREN,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      aux_sym_identifier_token2,
    ACTIONS(17), 17,
      aux_sym_select_clause_token1,
      aux_sym_select_expression_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_between_expression_token1,
      aux_sym_between_expression_token2,
      aux_sym_between_expression_token3,
      aux_sym_binary_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
      aux_sym_identifier_token1,
  [84] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(22), 1,
      anon_sym_DOT,
    STATE(5), 1,
      aux_sym_path_expression_repeat1,
    ACTIONS(9), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      aux_sym_identifier_token2,
    ACTIONS(11), 17,
      aux_sym_select_clause_token1,
      aux_sym_select_expression_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_between_expression_token1,
      aux_sym_between_expression_token2,
      aux_sym_between_expression_token3,
      aux_sym_binary_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
      aux_sym_identifier_token1,
  [126] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(22), 1,
      anon_sym_DOT,
    STATE(3), 1,
      aux_sym_path_expression_repeat1,
    ACTIONS(24), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_LPAREN,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      aux_sym_identifier_token2,
    ACTIONS(26), 17,
      aux_sym_select_clause_token1,
      aux_sym_select_expression_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_between_expression_token1,
      aux_sym_between_expression_token2,
      aux_sym_between_expression_token3,
      aux_sym_binary_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
      aux_sym_identifier_token1,
  [168] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 12,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      aux_sym_identifier_token2,
    ACTIONS(17), 17,
      aux_sym_select_clause_token1,
      aux_sym_select_expression_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_between_expression_token1,
      aux_sym_between_expression_token2,
      aux_sym_between_expression_token3,
      aux_sym_binary_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
      aux_sym_identifier_token1,
  [205] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(28), 12,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      aux_sym_identifier_token2,
    ACTIONS(30), 17,
      aux_sym_select_clause_token1,
      aux_sym_select_expression_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_between_expression_token1,
      aux_sym_between_expression_token2,
      aux_sym_between_expression_token3,
      aux_sym_binary_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
      aux_sym_identifier_token1,
  [242] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(36), 1,
      anon_sym_STAR,
    ACTIONS(38), 1,
      aux_sym_select_expression_token1,
    ACTIONS(40), 1,
      aux_sym_between_expression_token1,
    ACTIONS(42), 1,
      aux_sym_between_expression_token2,
    ACTIONS(44), 1,
      aux_sym_between_expression_token3,
    ACTIONS(46), 1,
      aux_sym_binary_expression_token1,
    ACTIONS(52), 1,
      anon_sym_PLUS,
    ACTIONS(54), 1,
      anon_sym_DASH,
    ACTIONS(56), 1,
      anon_sym_SLASH,
    ACTIONS(58), 1,
      aux_sym_identifier_token1,
    ACTIONS(60), 1,
      aux_sym_identifier_token2,
    STATE(145), 1,
      sym_identifier,
    ACTIONS(50), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(32), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(48), 4,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(34), 7,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [306] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_LPAREN,
    ACTIONS(62), 10,
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
    ACTIONS(64), 17,
      aux_sym_select_clause_token1,
      aux_sym_select_expression_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_between_expression_token1,
      aux_sym_between_expression_token2,
      aux_sym_between_expression_token3,
      aux_sym_binary_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
      aux_sym_identifier_token1,
  [344] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(36), 1,
      anon_sym_STAR,
    ACTIONS(52), 1,
      anon_sym_PLUS,
    ACTIONS(54), 1,
      anon_sym_DASH,
    ACTIONS(56), 1,
      anon_sym_SLASH,
    ACTIONS(68), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_identifier_token2,
    ACTIONS(70), 15,
      aux_sym_select_clause_token1,
      aux_sym_select_expression_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_between_expression_token1,
      aux_sym_between_expression_token2,
      aux_sym_between_expression_token3,
      aux_sym_binary_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_identifier_token1,
  [387] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 10,
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
    ACTIONS(74), 17,
      aux_sym_select_clause_token1,
      aux_sym_select_expression_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_between_expression_token1,
      aux_sym_between_expression_token2,
      aux_sym_between_expression_token3,
      aux_sym_binary_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
      aux_sym_identifier_token1,
  [422] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 10,
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
    ACTIONS(78), 17,
      aux_sym_select_clause_token1,
      aux_sym_select_expression_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_between_expression_token1,
      aux_sym_between_expression_token2,
      aux_sym_between_expression_token3,
      aux_sym_binary_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
      aux_sym_identifier_token1,
  [457] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(36), 1,
      anon_sym_STAR,
    ACTIONS(40), 1,
      aux_sym_between_expression_token1,
    ACTIONS(42), 1,
      aux_sym_between_expression_token2,
    ACTIONS(44), 1,
      aux_sym_between_expression_token3,
    ACTIONS(52), 1,
      anon_sym_PLUS,
    ACTIONS(54), 1,
      anon_sym_DASH,
    ACTIONS(56), 1,
      anon_sym_SLASH,
    ACTIONS(50), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(48), 4,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(68), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      aux_sym_identifier_token2,
    ACTIONS(70), 10,
      aux_sym_select_clause_token1,
      aux_sym_select_expression_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_binary_expression_token1,
      aux_sym_identifier_token1,
  [510] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 10,
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
    ACTIONS(82), 17,
      aux_sym_select_clause_token1,
      aux_sym_select_expression_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_between_expression_token1,
      aux_sym_between_expression_token2,
      aux_sym_between_expression_token3,
      aux_sym_binary_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
      aux_sym_identifier_token1,
  [545] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 10,
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
    ACTIONS(64), 17,
      aux_sym_select_clause_token1,
      aux_sym_select_expression_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_between_expression_token1,
      aux_sym_between_expression_token2,
      aux_sym_between_expression_token3,
      aux_sym_binary_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
      aux_sym_identifier_token1,
  [580] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(36), 1,
      anon_sym_STAR,
    ACTIONS(40), 1,
      aux_sym_between_expression_token1,
    ACTIONS(42), 1,
      aux_sym_between_expression_token2,
    ACTIONS(52), 1,
      anon_sym_PLUS,
    ACTIONS(54), 1,
      anon_sym_DASH,
    ACTIONS(56), 1,
      anon_sym_SLASH,
    ACTIONS(50), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(48), 4,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(68), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      aux_sym_identifier_token2,
    ACTIONS(70), 11,
      aux_sym_select_clause_token1,
      aux_sym_select_expression_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_between_expression_token3,
      aux_sym_binary_expression_token1,
      aux_sym_identifier_token1,
  [631] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 10,
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
    ACTIONS(70), 17,
      aux_sym_select_clause_token1,
      aux_sym_select_expression_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_between_expression_token1,
      aux_sym_between_expression_token2,
      aux_sym_between_expression_token3,
      aux_sym_binary_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
      aux_sym_identifier_token1,
  [666] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 10,
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
    ACTIONS(86), 17,
      aux_sym_select_clause_token1,
      aux_sym_select_expression_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_between_expression_token1,
      aux_sym_between_expression_token2,
      aux_sym_between_expression_token3,
      aux_sym_binary_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
      aux_sym_identifier_token1,
  [701] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 10,
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
    ACTIONS(90), 17,
      aux_sym_select_clause_token1,
      aux_sym_select_expression_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_between_expression_token1,
      aux_sym_between_expression_token2,
      aux_sym_between_expression_token3,
      aux_sym_binary_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
      aux_sym_identifier_token1,
  [736] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(36), 1,
      anon_sym_STAR,
    ACTIONS(52), 1,
      anon_sym_PLUS,
    ACTIONS(54), 1,
      anon_sym_DASH,
    ACTIONS(56), 1,
      anon_sym_SLASH,
    ACTIONS(92), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_identifier_token2,
    ACTIONS(94), 15,
      aux_sym_select_clause_token1,
      aux_sym_select_expression_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_between_expression_token1,
      aux_sym_between_expression_token2,
      aux_sym_between_expression_token3,
      aux_sym_binary_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_identifier_token1,
  [779] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(36), 1,
      anon_sym_STAR,
    ACTIONS(56), 1,
      anon_sym_SLASH,
    ACTIONS(68), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      aux_sym_identifier_token2,
    ACTIONS(70), 16,
      aux_sym_select_clause_token1,
      aux_sym_select_expression_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_between_expression_token1,
      aux_sym_between_expression_token2,
      aux_sym_between_expression_token3,
      aux_sym_binary_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      aux_sym_identifier_token1,
  [818] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 10,
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
    ACTIONS(98), 17,
      aux_sym_select_clause_token1,
      aux_sym_select_expression_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_between_expression_token1,
      aux_sym_between_expression_token2,
      aux_sym_between_expression_token3,
      aux_sym_binary_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
      aux_sym_identifier_token1,
  [853] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(36), 1,
      anon_sym_STAR,
    ACTIONS(52), 1,
      anon_sym_PLUS,
    ACTIONS(54), 1,
      anon_sym_DASH,
    ACTIONS(56), 1,
      anon_sym_SLASH,
    ACTIONS(100), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      aux_sym_identifier_token2,
    ACTIONS(102), 15,
      aux_sym_select_clause_token1,
      aux_sym_select_expression_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_between_expression_token1,
      aux_sym_between_expression_token2,
      aux_sym_between_expression_token3,
      aux_sym_binary_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      aux_sym_identifier_token1,
  [896] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(30), 5,
      aux_sym_binary_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(28), 21,
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
      anon_sym_LPAREN,
      aux_sym_between_expression_token1,
      aux_sym_between_expression_token2,
      aux_sym_between_expression_token3,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
  [930] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_DOT,
    STATE(27), 1,
      aux_sym_path_expression_repeat1,
    ACTIONS(11), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(9), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_STAR,
      aux_sym_limit_clause_token1,
      aux_sym_order_expression_token1,
      aux_sym_order_expression_token2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_between_expression_token1,
      aux_sym_between_expression_token2,
      aux_sym_between_expression_token3,
      aux_sym_clamped_between_modifier_token1,
      aux_sym_binary_expression_token1,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
  [968] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DOT,
    STATE(26), 1,
      aux_sym_path_expression_repeat1,
    ACTIONS(17), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(15), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_STAR,
      aux_sym_limit_clause_token1,
      aux_sym_order_expression_token1,
      aux_sym_order_expression_token2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_between_expression_token1,
      aux_sym_between_expression_token2,
      aux_sym_between_expression_token3,
      aux_sym_clamped_between_modifier_token1,
      aux_sym_binary_expression_token1,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
  [1006] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_DOT,
    STATE(26), 1,
      aux_sym_path_expression_repeat1,
    ACTIONS(26), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(24), 20,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_STAR,
      aux_sym_limit_clause_token1,
      aux_sym_order_expression_token1,
      aux_sym_order_expression_token2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_between_expression_token1,
      aux_sym_between_expression_token2,
      aux_sym_between_expression_token3,
      aux_sym_clamped_between_modifier_token1,
      aux_sym_binary_expression_token1,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
  [1044] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_DOT,
    STATE(29), 1,
      aux_sym_path_expression_repeat1,
    ACTIONS(26), 5,
      aux_sym_binary_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(24), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_STAR,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_LPAREN,
      aux_sym_between_expression_token1,
      aux_sym_between_expression_token2,
      aux_sym_between_expression_token3,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
  [1081] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_DOT,
    STATE(29), 1,
      aux_sym_path_expression_repeat1,
    ACTIONS(17), 5,
      aux_sym_binary_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(15), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_STAR,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_LPAREN,
      aux_sym_between_expression_token1,
      aux_sym_between_expression_token2,
      aux_sym_between_expression_token3,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
  [1118] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_DOT,
    STATE(28), 1,
      aux_sym_path_expression_repeat1,
    ACTIONS(11), 5,
      aux_sym_binary_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(9), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_STAR,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      anon_sym_LPAREN,
      aux_sym_between_expression_token1,
      aux_sym_between_expression_token2,
      aux_sym_between_expression_token3,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
  [1155] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(15), 21,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_DOT,
      aux_sym_limit_clause_token1,
      aux_sym_order_expression_token1,
      aux_sym_order_expression_token2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_between_expression_token1,
      aux_sym_between_expression_token2,
      aux_sym_between_expression_token3,
      aux_sym_clamped_between_modifier_token1,
      aux_sym_binary_expression_token1,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
  [1188] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(30), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(28), 21,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_DOT,
      aux_sym_limit_clause_token1,
      aux_sym_order_expression_token1,
      aux_sym_order_expression_token2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_between_expression_token1,
      aux_sym_between_expression_token2,
      aux_sym_between_expression_token3,
      aux_sym_clamped_between_modifier_token1,
      aux_sym_binary_expression_token1,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
  [1221] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(62), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_STAR,
      aux_sym_limit_clause_token1,
      aux_sym_order_expression_token1,
      aux_sym_order_expression_token2,
      anon_sym_RPAREN,
      aux_sym_between_expression_token1,
      aux_sym_between_expression_token2,
      aux_sym_between_expression_token3,
      aux_sym_clamped_between_modifier_token1,
      aux_sym_binary_expression_token1,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
  [1255] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 5,
      aux_sym_binary_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(15), 19,
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
      anon_sym_LPAREN,
      aux_sym_between_expression_token1,
      aux_sym_between_expression_token2,
      aux_sym_between_expression_token3,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
  [1287] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(84), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_STAR,
      aux_sym_limit_clause_token1,
      aux_sym_order_expression_token1,
      aux_sym_order_expression_token2,
      anon_sym_RPAREN,
      aux_sym_between_expression_token1,
      aux_sym_between_expression_token2,
      aux_sym_between_expression_token3,
      aux_sym_clamped_between_modifier_token1,
      aux_sym_binary_expression_token1,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
  [1318] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(76), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_STAR,
      aux_sym_limit_clause_token1,
      aux_sym_order_expression_token1,
      aux_sym_order_expression_token2,
      anon_sym_RPAREN,
      aux_sym_between_expression_token1,
      aux_sym_between_expression_token2,
      aux_sym_between_expression_token3,
      aux_sym_clamped_between_modifier_token1,
      aux_sym_binary_expression_token1,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
  [1349] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_STAR,
    ACTIONS(118), 1,
      anon_sym_SLASH,
    ACTIONS(70), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(68), 18,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      aux_sym_limit_clause_token1,
      aux_sym_order_expression_token1,
      aux_sym_order_expression_token2,
      anon_sym_RPAREN,
      aux_sym_between_expression_token1,
      aux_sym_between_expression_token2,
      aux_sym_between_expression_token3,
      aux_sym_clamped_between_modifier_token1,
      aux_sym_binary_expression_token1,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
  [1384] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_STAR,
    ACTIONS(118), 1,
      anon_sym_SLASH,
    ACTIONS(120), 1,
      anon_sym_PLUS,
    ACTIONS(122), 1,
      anon_sym_DASH,
    ACTIONS(70), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(68), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      aux_sym_limit_clause_token1,
      aux_sym_order_expression_token1,
      aux_sym_order_expression_token2,
      anon_sym_RPAREN,
      aux_sym_between_expression_token1,
      aux_sym_between_expression_token2,
      aux_sym_between_expression_token3,
      aux_sym_clamped_between_modifier_token1,
      aux_sym_binary_expression_token1,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1423] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_STAR,
    ACTIONS(118), 1,
      anon_sym_SLASH,
    ACTIONS(120), 1,
      anon_sym_PLUS,
    ACTIONS(122), 1,
      anon_sym_DASH,
    ACTIONS(124), 1,
      aux_sym_between_expression_token1,
    ACTIONS(126), 1,
      aux_sym_between_expression_token2,
    ACTIONS(128), 1,
      aux_sym_between_expression_token3,
    ACTIONS(132), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(130), 4,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(68), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      aux_sym_limit_clause_token1,
      aux_sym_order_expression_token1,
      aux_sym_order_expression_token2,
      anon_sym_RPAREN,
      aux_sym_clamped_between_modifier_token1,
      aux_sym_binary_expression_token1,
  [1470] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_STAR,
    ACTIONS(118), 1,
      anon_sym_SLASH,
    ACTIONS(120), 1,
      anon_sym_PLUS,
    ACTIONS(122), 1,
      anon_sym_DASH,
    ACTIONS(124), 1,
      aux_sym_between_expression_token1,
    ACTIONS(126), 1,
      aux_sym_between_expression_token2,
    ACTIONS(132), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(130), 4,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(68), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      aux_sym_limit_clause_token1,
      aux_sym_order_expression_token1,
      aux_sym_order_expression_token2,
      anon_sym_RPAREN,
      aux_sym_between_expression_token3,
      aux_sym_clamped_between_modifier_token1,
      aux_sym_binary_expression_token1,
  [1515] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(68), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_STAR,
      aux_sym_limit_clause_token1,
      aux_sym_order_expression_token1,
      aux_sym_order_expression_token2,
      anon_sym_RPAREN,
      aux_sym_between_expression_token1,
      aux_sym_between_expression_token2,
      aux_sym_between_expression_token3,
      aux_sym_clamped_between_modifier_token1,
      aux_sym_binary_expression_token1,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
  [1546] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(72), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_STAR,
      aux_sym_limit_clause_token1,
      aux_sym_order_expression_token1,
      aux_sym_order_expression_token2,
      anon_sym_RPAREN,
      aux_sym_between_expression_token1,
      aux_sym_between_expression_token2,
      aux_sym_between_expression_token3,
      aux_sym_clamped_between_modifier_token1,
      aux_sym_binary_expression_token1,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
  [1577] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(62), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_STAR,
      aux_sym_limit_clause_token1,
      aux_sym_order_expression_token1,
      aux_sym_order_expression_token2,
      anon_sym_RPAREN,
      aux_sym_between_expression_token1,
      aux_sym_between_expression_token2,
      aux_sym_between_expression_token3,
      aux_sym_clamped_between_modifier_token1,
      aux_sym_binary_expression_token1,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
  [1608] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(80), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_STAR,
      aux_sym_limit_clause_token1,
      aux_sym_order_expression_token1,
      aux_sym_order_expression_token2,
      anon_sym_RPAREN,
      aux_sym_between_expression_token1,
      aux_sym_between_expression_token2,
      aux_sym_between_expression_token3,
      aux_sym_clamped_between_modifier_token1,
      aux_sym_binary_expression_token1,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
  [1639] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(88), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_STAR,
      aux_sym_limit_clause_token1,
      aux_sym_order_expression_token1,
      aux_sym_order_expression_token2,
      anon_sym_RPAREN,
      aux_sym_between_expression_token1,
      aux_sym_between_expression_token2,
      aux_sym_between_expression_token3,
      aux_sym_clamped_between_modifier_token1,
      aux_sym_binary_expression_token1,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
  [1670] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 5,
      aux_sym_binary_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(62), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_STAR,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_between_expression_token1,
      aux_sym_between_expression_token2,
      aux_sym_between_expression_token3,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
  [1703] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_STAR,
    ACTIONS(118), 1,
      anon_sym_SLASH,
    ACTIONS(120), 1,
      anon_sym_PLUS,
    ACTIONS(122), 1,
      anon_sym_DASH,
    ACTIONS(94), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(92), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      aux_sym_limit_clause_token1,
      aux_sym_order_expression_token1,
      aux_sym_order_expression_token2,
      anon_sym_RPAREN,
      aux_sym_between_expression_token1,
      aux_sym_between_expression_token2,
      aux_sym_between_expression_token3,
      aux_sym_clamped_between_modifier_token1,
      aux_sym_binary_expression_token1,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1742] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_STAR,
    ACTIONS(118), 1,
      anon_sym_SLASH,
    ACTIONS(120), 1,
      anon_sym_PLUS,
    ACTIONS(122), 1,
      anon_sym_DASH,
    ACTIONS(102), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(100), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      aux_sym_limit_clause_token1,
      aux_sym_order_expression_token1,
      aux_sym_order_expression_token2,
      anon_sym_RPAREN,
      aux_sym_between_expression_token1,
      aux_sym_between_expression_token2,
      aux_sym_between_expression_token3,
      aux_sym_clamped_between_modifier_token1,
      aux_sym_binary_expression_token1,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1781] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(96), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_STAR,
      aux_sym_limit_clause_token1,
      aux_sym_order_expression_token1,
      aux_sym_order_expression_token2,
      anon_sym_RPAREN,
      aux_sym_between_expression_token1,
      aux_sym_between_expression_token2,
      aux_sym_between_expression_token3,
      aux_sym_clamped_between_modifier_token1,
      aux_sym_binary_expression_token1,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
  [1812] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 5,
      aux_sym_binary_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(72), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_STAR,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_between_expression_token1,
      aux_sym_between_expression_token2,
      aux_sym_between_expression_token3,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
  [1842] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 5,
      aux_sym_binary_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(84), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_STAR,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_between_expression_token1,
      aux_sym_between_expression_token2,
      aux_sym_between_expression_token3,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
  [1872] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      aux_sym_binary_expression_token1,
    ACTIONS(136), 1,
      anon_sym_STAR,
    ACTIONS(138), 1,
      aux_sym_between_expression_token1,
    ACTIONS(140), 1,
      aux_sym_between_expression_token2,
    ACTIONS(142), 1,
      aux_sym_between_expression_token3,
    ACTIONS(148), 1,
      anon_sym_PLUS,
    ACTIONS(150), 1,
      anon_sym_DASH,
    ACTIONS(152), 1,
      anon_sym_SLASH,
    ACTIONS(146), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(144), 4,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(68), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [1920] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      aux_sym_binary_expression_token1,
    ACTIONS(136), 1,
      anon_sym_STAR,
    ACTIONS(138), 1,
      aux_sym_between_expression_token1,
    ACTIONS(140), 1,
      aux_sym_between_expression_token2,
    ACTIONS(148), 1,
      anon_sym_PLUS,
    ACTIONS(150), 1,
      anon_sym_DASH,
    ACTIONS(152), 1,
      anon_sym_SLASH,
    ACTIONS(146), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(144), 4,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(68), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_between_expression_token3,
  [1966] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 5,
      aux_sym_binary_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(68), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_STAR,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_between_expression_token1,
      aux_sym_between_expression_token2,
      aux_sym_between_expression_token3,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
  [1996] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_STAR,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(160), 1,
      anon_sym_RPAREN,
    ACTIONS(164), 1,
      sym_null_literal,
    ACTIONS(166), 1,
      aux_sym_function_argument_token1,
    ACTIONS(168), 1,
      aux_sym_identifier_token1,
    ACTIONS(170), 1,
      aux_sym_identifier_token2,
    STATE(25), 1,
      sym_identifier,
    STATE(33), 1,
      sym_path_expression,
    STATE(78), 1,
      sym_expression,
    STATE(189), 1,
      sym_function_argument,
    STATE(200), 1,
      sym_function_arguments,
    ACTIONS(154), 2,
      aux_sym_select_clause_token2,
      aux_sym_select_clause_token3,
    ACTIONS(162), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(172), 2,
      sym_number,
      sym_string,
    STATE(43), 4,
      sym_boolean_literal,
      sym_between_expression,
      sym_function_call,
      sym_binary_expression,
  [2054] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 5,
      aux_sym_binary_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(76), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_STAR,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_between_expression_token1,
      aux_sym_between_expression_token2,
      aux_sym_between_expression_token3,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
  [2084] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_STAR,
    ACTIONS(148), 1,
      anon_sym_PLUS,
    ACTIONS(150), 1,
      anon_sym_DASH,
    ACTIONS(152), 1,
      anon_sym_SLASH,
    ACTIONS(70), 3,
      aux_sym_binary_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(68), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_between_expression_token1,
      aux_sym_between_expression_token2,
      aux_sym_between_expression_token3,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2122] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_STAR,
    ACTIONS(152), 1,
      anon_sym_SLASH,
    ACTIONS(70), 4,
      aux_sym_binary_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
    ACTIONS(68), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_between_expression_token1,
      aux_sym_between_expression_token2,
      aux_sym_between_expression_token3,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
  [2156] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(164), 1,
      sym_null_literal,
    ACTIONS(166), 1,
      aux_sym_function_argument_token1,
    ACTIONS(168), 1,
      aux_sym_identifier_token1,
    ACTIONS(170), 1,
      aux_sym_identifier_token2,
    ACTIONS(176), 1,
      anon_sym_STAR,
    ACTIONS(178), 1,
      anon_sym_RPAREN,
    STATE(25), 1,
      sym_identifier,
    STATE(33), 1,
      sym_path_expression,
    STATE(78), 1,
      sym_expression,
    STATE(189), 1,
      sym_function_argument,
    STATE(195), 1,
      sym_function_arguments,
    ACTIONS(162), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(172), 2,
      sym_number,
      sym_string,
    ACTIONS(174), 2,
      aux_sym_select_clause_token2,
      aux_sym_select_clause_token3,
    STATE(43), 4,
      sym_boolean_literal,
      sym_between_expression,
      sym_function_call,
      sym_binary_expression,
  [2214] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 5,
      aux_sym_binary_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(88), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_STAR,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_between_expression_token1,
      aux_sym_between_expression_token2,
      aux_sym_between_expression_token3,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
  [2244] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_STAR,
    ACTIONS(148), 1,
      anon_sym_PLUS,
    ACTIONS(150), 1,
      anon_sym_DASH,
    ACTIONS(152), 1,
      anon_sym_SLASH,
    ACTIONS(94), 3,
      aux_sym_binary_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(92), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_between_expression_token1,
      aux_sym_between_expression_token2,
      aux_sym_between_expression_token3,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2282] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(164), 1,
      sym_null_literal,
    ACTIONS(166), 1,
      aux_sym_function_argument_token1,
    ACTIONS(168), 1,
      aux_sym_identifier_token1,
    ACTIONS(170), 1,
      aux_sym_identifier_token2,
    ACTIONS(182), 1,
      anon_sym_STAR,
    ACTIONS(184), 1,
      anon_sym_RPAREN,
    STATE(25), 1,
      sym_identifier,
    STATE(33), 1,
      sym_path_expression,
    STATE(78), 1,
      sym_expression,
    STATE(189), 1,
      sym_function_argument,
    STATE(191), 1,
      sym_function_arguments,
    ACTIONS(162), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(172), 2,
      sym_number,
      sym_string,
    ACTIONS(180), 2,
      aux_sym_select_clause_token2,
      aux_sym_select_clause_token3,
    STATE(43), 4,
      sym_boolean_literal,
      sym_between_expression,
      sym_function_call,
      sym_binary_expression,
  [2340] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 5,
      aux_sym_binary_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(80), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_STAR,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_between_expression_token1,
      aux_sym_between_expression_token2,
      aux_sym_between_expression_token3,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
  [2370] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 5,
      aux_sym_binary_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(62), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_STAR,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_between_expression_token1,
      aux_sym_between_expression_token2,
      aux_sym_between_expression_token3,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
  [2400] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_STAR,
    ACTIONS(148), 1,
      anon_sym_PLUS,
    ACTIONS(150), 1,
      anon_sym_DASH,
    ACTIONS(152), 1,
      anon_sym_SLASH,
    ACTIONS(102), 3,
      aux_sym_binary_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(100), 15,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_between_expression_token1,
      aux_sym_between_expression_token2,
      aux_sym_between_expression_token3,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2438] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 5,
      aux_sym_binary_expression_token1,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(96), 17,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      anon_sym_STAR,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_between_expression_token1,
      aux_sym_between_expression_token2,
      aux_sym_between_expression_token3,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
  [2468] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_STAR,
    ACTIONS(138), 1,
      aux_sym_between_expression_token1,
    ACTIONS(140), 1,
      aux_sym_between_expression_token2,
    ACTIONS(142), 1,
      aux_sym_between_expression_token3,
    ACTIONS(148), 1,
      anon_sym_PLUS,
    ACTIONS(150), 1,
      anon_sym_DASH,
    ACTIONS(152), 1,
      anon_sym_SLASH,
    ACTIONS(188), 1,
      anon_sym_COMMA,
    ACTIONS(190), 1,
      aux_sym_binary_expression_token1,
    STATE(160), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(146), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(144), 4,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(186), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [2520] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_STAR,
    ACTIONS(118), 1,
      anon_sym_SLASH,
    ACTIONS(120), 1,
      anon_sym_PLUS,
    ACTIONS(122), 1,
      anon_sym_DASH,
    ACTIONS(124), 1,
      aux_sym_between_expression_token1,
    ACTIONS(126), 1,
      aux_sym_between_expression_token2,
    ACTIONS(128), 1,
      aux_sym_between_expression_token3,
    ACTIONS(196), 1,
      aux_sym_binary_expression_token1,
    ACTIONS(132), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(194), 2,
      aux_sym_order_expression_token1,
      aux_sym_order_expression_token2,
    ACTIONS(130), 4,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(192), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      aux_sym_limit_clause_token1,
  [2569] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_STAR,
    ACTIONS(138), 1,
      aux_sym_between_expression_token1,
    ACTIONS(140), 1,
      aux_sym_between_expression_token2,
    ACTIONS(142), 1,
      aux_sym_between_expression_token3,
    ACTIONS(148), 1,
      anon_sym_PLUS,
    ACTIONS(150), 1,
      anon_sym_DASH,
    ACTIONS(152), 1,
      anon_sym_SLASH,
    ACTIONS(190), 1,
      aux_sym_binary_expression_token1,
    ACTIONS(146), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(144), 4,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(198), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [2616] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_STAR,
    ACTIONS(138), 1,
      aux_sym_between_expression_token1,
    ACTIONS(140), 1,
      aux_sym_between_expression_token2,
    ACTIONS(142), 1,
      aux_sym_between_expression_token3,
    ACTIONS(148), 1,
      anon_sym_PLUS,
    ACTIONS(150), 1,
      anon_sym_DASH,
    ACTIONS(152), 1,
      anon_sym_SLASH,
    ACTIONS(190), 1,
      aux_sym_binary_expression_token1,
    ACTIONS(146), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(144), 4,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(200), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [2663] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_STAR,
    ACTIONS(206), 1,
      anon_sym_LPAREN,
    ACTIONS(210), 1,
      sym_null_literal,
    ACTIONS(212), 1,
      aux_sym_identifier_token1,
    ACTIONS(214), 1,
      aux_sym_identifier_token2,
    STATE(2), 1,
      sym_identifier,
    STATE(8), 1,
      sym_expression,
    STATE(9), 1,
      sym_path_expression,
    STATE(141), 1,
      sym_select_expression,
    STATE(156), 1,
      sym_select_list,
    ACTIONS(202), 2,
      aux_sym_select_clause_token2,
      aux_sym_select_clause_token3,
    ACTIONS(208), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(216), 2,
      sym_number,
      sym_string,
    STATE(15), 4,
      sym_boolean_literal,
      sym_between_expression,
      sym_function_call,
      sym_binary_expression,
  [2715] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_STAR,
    ACTIONS(138), 1,
      aux_sym_between_expression_token1,
    ACTIONS(140), 1,
      aux_sym_between_expression_token2,
    ACTIONS(142), 1,
      aux_sym_between_expression_token3,
    ACTIONS(148), 1,
      anon_sym_PLUS,
    ACTIONS(150), 1,
      anon_sym_DASH,
    ACTIONS(152), 1,
      anon_sym_SLASH,
    ACTIONS(190), 1,
      aux_sym_binary_expression_token1,
    ACTIONS(146), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(144), 4,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(218), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [2760] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(164), 1,
      sym_null_literal,
    ACTIONS(166), 1,
      aux_sym_function_argument_token1,
    ACTIONS(168), 1,
      aux_sym_identifier_token1,
    ACTIONS(170), 1,
      aux_sym_identifier_token2,
    STATE(25), 1,
      sym_identifier,
    STATE(33), 1,
      sym_path_expression,
    STATE(78), 1,
      sym_expression,
    STATE(189), 1,
      sym_function_argument,
    STATE(202), 1,
      sym_function_arguments,
    ACTIONS(162), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(172), 2,
      sym_number,
      sym_string,
    STATE(43), 4,
      sym_boolean_literal,
      sym_between_expression,
      sym_function_call,
      sym_binary_expression,
  [2808] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(164), 1,
      sym_null_literal,
    ACTIONS(166), 1,
      aux_sym_function_argument_token1,
    ACTIONS(168), 1,
      aux_sym_identifier_token1,
    ACTIONS(170), 1,
      aux_sym_identifier_token2,
    STATE(25), 1,
      sym_identifier,
    STATE(33), 1,
      sym_path_expression,
    STATE(78), 1,
      sym_expression,
    STATE(189), 1,
      sym_function_argument,
    STATE(190), 1,
      sym_function_arguments,
    ACTIONS(162), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(172), 2,
      sym_number,
      sym_string,
    STATE(43), 4,
      sym_boolean_literal,
      sym_between_expression,
      sym_function_call,
      sym_binary_expression,
  [2856] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(164), 1,
      sym_null_literal,
    ACTIONS(166), 1,
      aux_sym_function_argument_token1,
    ACTIONS(168), 1,
      aux_sym_identifier_token1,
    ACTIONS(170), 1,
      aux_sym_identifier_token2,
    STATE(25), 1,
      sym_identifier,
    STATE(33), 1,
      sym_path_expression,
    STATE(78), 1,
      sym_expression,
    STATE(189), 1,
      sym_function_argument,
    STATE(196), 1,
      sym_function_arguments,
    ACTIONS(162), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(172), 2,
      sym_number,
      sym_string,
    STATE(43), 4,
      sym_boolean_literal,
      sym_between_expression,
      sym_function_call,
      sym_binary_expression,
  [2904] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_STAR,
    ACTIONS(206), 1,
      anon_sym_LPAREN,
    ACTIONS(210), 1,
      sym_null_literal,
    ACTIONS(212), 1,
      aux_sym_identifier_token1,
    ACTIONS(214), 1,
      aux_sym_identifier_token2,
    STATE(2), 1,
      sym_identifier,
    STATE(8), 1,
      sym_expression,
    STATE(9), 1,
      sym_path_expression,
    STATE(141), 1,
      sym_select_expression,
    STATE(152), 1,
      sym_select_list,
    ACTIONS(208), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(216), 2,
      sym_number,
      sym_string,
    STATE(15), 4,
      sym_boolean_literal,
      sym_between_expression,
      sym_function_call,
      sym_binary_expression,
  [2952] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(164), 1,
      sym_null_literal,
    ACTIONS(166), 1,
      aux_sym_function_argument_token1,
    ACTIONS(168), 1,
      aux_sym_identifier_token1,
    ACTIONS(170), 1,
      aux_sym_identifier_token2,
    STATE(25), 1,
      sym_identifier,
    STATE(33), 1,
      sym_path_expression,
    STATE(78), 1,
      sym_expression,
    STATE(203), 1,
      sym_function_argument,
    ACTIONS(162), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(172), 2,
      sym_number,
      sym_string,
    STATE(43), 4,
      sym_boolean_literal,
      sym_between_expression,
      sym_function_call,
      sym_binary_expression,
  [2997] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_STAR,
    ACTIONS(118), 1,
      anon_sym_SLASH,
    ACTIONS(120), 1,
      anon_sym_PLUS,
    ACTIONS(122), 1,
      anon_sym_DASH,
    ACTIONS(124), 1,
      aux_sym_between_expression_token1,
    ACTIONS(126), 1,
      aux_sym_between_expression_token2,
    ACTIONS(128), 1,
      aux_sym_between_expression_token3,
    ACTIONS(196), 1,
      aux_sym_binary_expression_token1,
    ACTIONS(132), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(220), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_clamped_between_modifier_token1,
    ACTIONS(130), 4,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3040] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_STAR,
    ACTIONS(206), 1,
      anon_sym_LPAREN,
    ACTIONS(210), 1,
      sym_null_literal,
    ACTIONS(212), 1,
      aux_sym_identifier_token1,
    ACTIONS(214), 1,
      aux_sym_identifier_token2,
    STATE(2), 1,
      sym_identifier,
    STATE(8), 1,
      sym_expression,
    STATE(9), 1,
      sym_path_expression,
    STATE(151), 1,
      sym_select_expression,
    ACTIONS(208), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(216), 2,
      sym_number,
      sym_string,
    STATE(15), 4,
      sym_boolean_literal,
      sym_between_expression,
      sym_function_call,
      sym_binary_expression,
  [3085] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_STAR,
    ACTIONS(118), 1,
      anon_sym_SLASH,
    ACTIONS(120), 1,
      anon_sym_PLUS,
    ACTIONS(122), 1,
      anon_sym_DASH,
    ACTIONS(124), 1,
      aux_sym_between_expression_token1,
    ACTIONS(126), 1,
      aux_sym_between_expression_token2,
    ACTIONS(128), 1,
      aux_sym_between_expression_token3,
    ACTIONS(196), 1,
      aux_sym_binary_expression_token1,
    ACTIONS(132), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(222), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_clamped_between_modifier_token1,
    ACTIONS(130), 4,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3128] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(164), 1,
      sym_null_literal,
    ACTIONS(168), 1,
      aux_sym_identifier_token1,
    ACTIONS(170), 1,
      aux_sym_identifier_token2,
    STATE(25), 1,
      sym_identifier,
    STATE(33), 1,
      sym_path_expression,
    STATE(68), 1,
      sym_expression,
    STATE(167), 1,
      sym_order_expression,
    STATE(188), 1,
      sym_order_expression_list,
    ACTIONS(162), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(172), 2,
      sym_number,
      sym_string,
    STATE(43), 4,
      sym_boolean_literal,
      sym_between_expression,
      sym_function_call,
      sym_binary_expression,
  [3173] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      aux_sym_identifier_token1,
    ACTIONS(60), 1,
      aux_sym_identifier_token2,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
    ACTIONS(228), 1,
      sym_null_literal,
    STATE(30), 1,
      sym_identifier,
    STATE(46), 1,
      sym_path_expression,
    STATE(67), 1,
      sym_expression,
    STATE(169), 1,
      sym_expression_list,
    ACTIONS(226), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(230), 2,
      sym_number,
      sym_string,
    STATE(64), 4,
      sym_boolean_literal,
      sym_between_expression,
      sym_function_call,
      sym_binary_expression,
  [3215] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(164), 1,
      sym_null_literal,
    ACTIONS(168), 1,
      aux_sym_identifier_token1,
    ACTIONS(170), 1,
      aux_sym_identifier_token2,
    STATE(25), 1,
      sym_identifier,
    STATE(33), 1,
      sym_path_expression,
    STATE(68), 1,
      sym_expression,
    STATE(177), 1,
      sym_order_expression,
    ACTIONS(162), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(172), 2,
      sym_number,
      sym_string,
    STATE(43), 4,
      sym_boolean_literal,
      sym_between_expression,
      sym_function_call,
      sym_binary_expression,
  [3257] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LPAREN,
    ACTIONS(210), 1,
      sym_null_literal,
    ACTIONS(212), 1,
      aux_sym_identifier_token1,
    ACTIONS(214), 1,
      aux_sym_identifier_token2,
    STATE(4), 1,
      sym_identifier,
    STATE(9), 1,
      sym_path_expression,
    STATE(10), 1,
      sym_expression,
    ACTIONS(208), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(216), 2,
      sym_number,
      sym_string,
    STATE(15), 4,
      sym_boolean_literal,
      sym_between_expression,
      sym_function_call,
      sym_binary_expression,
  [3296] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(164), 1,
      sym_null_literal,
    ACTIONS(168), 1,
      aux_sym_identifier_token1,
    ACTIONS(170), 1,
      aux_sym_identifier_token2,
    STATE(25), 1,
      sym_identifier,
    STATE(33), 1,
      sym_path_expression,
    STATE(47), 1,
      sym_expression,
    ACTIONS(162), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(172), 2,
      sym_number,
      sym_string,
    STATE(43), 4,
      sym_boolean_literal,
      sym_between_expression,
      sym_function_call,
      sym_binary_expression,
  [3335] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_SEMI,
    ACTIONS(236), 1,
      aux_sym_from_clause_token1,
    ACTIONS(238), 1,
      aux_sym_where_clause_token1,
    ACTIONS(240), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(242), 1,
      aux_sym_having_clause_token1,
    ACTIONS(244), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(246), 1,
      aux_sym_limit_clause_token1,
    STATE(138), 1,
      sym_from_clause,
    STATE(140), 1,
      sym_where_clause,
    STATE(154), 1,
      sym_group_by_clause,
    STATE(164), 1,
      sym_having_clause,
    STATE(175), 1,
      sym_order_by_clause,
    STATE(192), 1,
      sym_limit_clause,
    ACTIONS(232), 2,
      ts_builtin_sym_end,
      aux_sym_select_clause_token1,
  [3382] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(164), 1,
      sym_null_literal,
    ACTIONS(168), 1,
      aux_sym_identifier_token1,
    ACTIONS(170), 1,
      aux_sym_identifier_token2,
    STATE(25), 1,
      sym_identifier,
    STATE(33), 1,
      sym_path_expression,
    STATE(108), 1,
      sym_expression,
    ACTIONS(162), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(172), 2,
      sym_number,
      sym_string,
    STATE(43), 4,
      sym_boolean_literal,
      sym_between_expression,
      sym_function_call,
      sym_binary_expression,
  [3421] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(164), 1,
      sym_null_literal,
    ACTIONS(168), 1,
      aux_sym_identifier_token1,
    ACTIONS(170), 1,
      aux_sym_identifier_token2,
    STATE(25), 1,
      sym_identifier,
    STATE(33), 1,
      sym_path_expression,
    STATE(134), 1,
      sym_expression,
    ACTIONS(162), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(172), 2,
      sym_number,
      sym_string,
    STATE(43), 4,
      sym_boolean_literal,
      sym_between_expression,
      sym_function_call,
      sym_binary_expression,
  [3460] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(164), 1,
      sym_null_literal,
    ACTIONS(168), 1,
      aux_sym_identifier_token1,
    ACTIONS(170), 1,
      aux_sym_identifier_token2,
    STATE(25), 1,
      sym_identifier,
    STATE(33), 1,
      sym_path_expression,
    STATE(125), 1,
      sym_expression,
    ACTIONS(162), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(172), 2,
      sym_number,
      sym_string,
    STATE(43), 4,
      sym_boolean_literal,
      sym_between_expression,
      sym_function_call,
      sym_binary_expression,
  [3499] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      aux_sym_identifier_token1,
    ACTIONS(60), 1,
      aux_sym_identifier_token2,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
    ACTIONS(228), 1,
      sym_null_literal,
    STATE(30), 1,
      sym_identifier,
    STATE(46), 1,
      sym_path_expression,
    STATE(58), 1,
      sym_expression,
    ACTIONS(226), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(230), 2,
      sym_number,
      sym_string,
    STATE(64), 4,
      sym_boolean_literal,
      sym_between_expression,
      sym_function_call,
      sym_binary_expression,
  [3538] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      aux_sym_identifier_token1,
    ACTIONS(60), 1,
      aux_sym_identifier_token2,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
    ACTIONS(228), 1,
      sym_null_literal,
    STATE(30), 1,
      sym_identifier,
    STATE(46), 1,
      sym_path_expression,
    STATE(57), 1,
      sym_expression,
    ACTIONS(226), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(230), 2,
      sym_number,
      sym_string,
    STATE(64), 4,
      sym_boolean_literal,
      sym_between_expression,
      sym_function_call,
      sym_binary_expression,
  [3577] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(164), 1,
      sym_null_literal,
    ACTIONS(168), 1,
      aux_sym_identifier_token1,
    ACTIONS(170), 1,
      aux_sym_identifier_token2,
    STATE(25), 1,
      sym_identifier,
    STATE(33), 1,
      sym_path_expression,
    STATE(80), 1,
      sym_expression,
    ACTIONS(162), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(172), 2,
      sym_number,
      sym_string,
    STATE(43), 4,
      sym_boolean_literal,
      sym_between_expression,
      sym_function_call,
      sym_binary_expression,
  [3616] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      aux_sym_identifier_token1,
    ACTIONS(60), 1,
      aux_sym_identifier_token2,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
    ACTIONS(228), 1,
      sym_null_literal,
    STATE(30), 1,
      sym_identifier,
    STATE(46), 1,
      sym_path_expression,
    STATE(52), 1,
      sym_expression,
    ACTIONS(226), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(230), 2,
      sym_number,
      sym_string,
    STATE(64), 4,
      sym_boolean_literal,
      sym_between_expression,
      sym_function_call,
      sym_binary_expression,
  [3655] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      aux_sym_identifier_token1,
    ACTIONS(60), 1,
      aux_sym_identifier_token2,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
    ACTIONS(228), 1,
      sym_null_literal,
    STATE(30), 1,
      sym_identifier,
    STATE(46), 1,
      sym_path_expression,
    STATE(53), 1,
      sym_expression,
    ACTIONS(226), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(230), 2,
      sym_number,
      sym_string,
    STATE(64), 4,
      sym_boolean_literal,
      sym_between_expression,
      sym_function_call,
      sym_binary_expression,
  [3694] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      aux_sym_identifier_token1,
    ACTIONS(60), 1,
      aux_sym_identifier_token2,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
    ACTIONS(228), 1,
      sym_null_literal,
    STATE(30), 1,
      sym_identifier,
    STATE(46), 1,
      sym_path_expression,
    STATE(54), 1,
      sym_expression,
    ACTIONS(226), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(230), 2,
      sym_number,
      sym_string,
    STATE(64), 4,
      sym_boolean_literal,
      sym_between_expression,
      sym_function_call,
      sym_binary_expression,
  [3733] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(164), 1,
      sym_null_literal,
    ACTIONS(168), 1,
      aux_sym_identifier_token1,
    ACTIONS(170), 1,
      aux_sym_identifier_token2,
    STATE(25), 1,
      sym_identifier,
    STATE(33), 1,
      sym_path_expression,
    STATE(131), 1,
      sym_expression,
    ACTIONS(162), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(172), 2,
      sym_number,
      sym_string,
    STATE(43), 4,
      sym_boolean_literal,
      sym_between_expression,
      sym_function_call,
      sym_binary_expression,
  [3772] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      aux_sym_identifier_token1,
    ACTIONS(60), 1,
      aux_sym_identifier_token2,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
    ACTIONS(228), 1,
      sym_null_literal,
    STATE(30), 1,
      sym_identifier,
    STATE(46), 1,
      sym_path_expression,
    STATE(69), 1,
      sym_expression,
    ACTIONS(226), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(230), 2,
      sym_number,
      sym_string,
    STATE(64), 4,
      sym_boolean_literal,
      sym_between_expression,
      sym_function_call,
      sym_binary_expression,
  [3811] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(164), 1,
      sym_null_literal,
    ACTIONS(168), 1,
      aux_sym_identifier_token1,
    ACTIONS(170), 1,
      aux_sym_identifier_token2,
    STATE(25), 1,
      sym_identifier,
    STATE(33), 1,
      sym_path_expression,
    STATE(119), 1,
      sym_expression,
    ACTIONS(162), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(172), 2,
      sym_number,
      sym_string,
    STATE(43), 4,
      sym_boolean_literal,
      sym_between_expression,
      sym_function_call,
      sym_binary_expression,
  [3850] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LPAREN,
    ACTIONS(210), 1,
      sym_null_literal,
    ACTIONS(212), 1,
      aux_sym_identifier_token1,
    ACTIONS(214), 1,
      aux_sym_identifier_token2,
    STATE(4), 1,
      sym_identifier,
    STATE(9), 1,
      sym_path_expression,
    STATE(23), 1,
      sym_expression,
    ACTIONS(208), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(216), 2,
      sym_number,
      sym_string,
    STATE(15), 4,
      sym_boolean_literal,
      sym_between_expression,
      sym_function_call,
      sym_binary_expression,
  [3889] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      aux_sym_identifier_token1,
    ACTIONS(60), 1,
      aux_sym_identifier_token2,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
    ACTIONS(228), 1,
      sym_null_literal,
    STATE(30), 1,
      sym_identifier,
    STATE(46), 1,
      sym_path_expression,
    STATE(72), 1,
      sym_expression,
    ACTIONS(226), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(230), 2,
      sym_number,
      sym_string,
    STATE(64), 4,
      sym_boolean_literal,
      sym_between_expression,
      sym_function_call,
      sym_binary_expression,
  [3928] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(164), 1,
      sym_null_literal,
    ACTIONS(168), 1,
      aux_sym_identifier_token1,
    ACTIONS(170), 1,
      aux_sym_identifier_token2,
    STATE(25), 1,
      sym_identifier,
    STATE(33), 1,
      sym_path_expression,
    STATE(130), 1,
      sym_expression,
    ACTIONS(162), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(172), 2,
      sym_number,
      sym_string,
    STATE(43), 4,
      sym_boolean_literal,
      sym_between_expression,
      sym_function_call,
      sym_binary_expression,
  [3967] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_STAR,
    ACTIONS(118), 1,
      anon_sym_SLASH,
    ACTIONS(120), 1,
      anon_sym_PLUS,
    ACTIONS(122), 1,
      anon_sym_DASH,
    ACTIONS(124), 1,
      aux_sym_between_expression_token1,
    ACTIONS(126), 1,
      aux_sym_between_expression_token2,
    ACTIONS(128), 1,
      aux_sym_between_expression_token3,
    ACTIONS(196), 1,
      aux_sym_binary_expression_token1,
    ACTIONS(248), 1,
      anon_sym_RPAREN,
    ACTIONS(132), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(130), 4,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4008] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      aux_sym_identifier_token1,
    ACTIONS(60), 1,
      aux_sym_identifier_token2,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
    ACTIONS(228), 1,
      sym_null_literal,
    STATE(30), 1,
      sym_identifier,
    STATE(46), 1,
      sym_path_expression,
    STATE(61), 1,
      sym_expression,
    ACTIONS(226), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(230), 2,
      sym_number,
      sym_string,
    STATE(64), 4,
      sym_boolean_literal,
      sym_between_expression,
      sym_function_call,
      sym_binary_expression,
  [4047] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(164), 1,
      sym_null_literal,
    ACTIONS(168), 1,
      aux_sym_identifier_token1,
    ACTIONS(170), 1,
      aux_sym_identifier_token2,
    STATE(25), 1,
      sym_identifier,
    STATE(33), 1,
      sym_path_expression,
    STATE(133), 1,
      sym_expression,
    ACTIONS(162), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(172), 2,
      sym_number,
      sym_string,
    STATE(43), 4,
      sym_boolean_literal,
      sym_between_expression,
      sym_function_call,
      sym_binary_expression,
  [4086] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(164), 1,
      sym_null_literal,
    ACTIONS(168), 1,
      aux_sym_identifier_token1,
    ACTIONS(170), 1,
      aux_sym_identifier_token2,
    STATE(25), 1,
      sym_identifier,
    STATE(33), 1,
      sym_path_expression,
    STATE(48), 1,
      sym_expression,
    ACTIONS(162), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(172), 2,
      sym_number,
      sym_string,
    STATE(43), 4,
      sym_boolean_literal,
      sym_between_expression,
      sym_function_call,
      sym_binary_expression,
  [4125] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      aux_sym_identifier_token1,
    ACTIONS(60), 1,
      aux_sym_identifier_token2,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
    ACTIONS(228), 1,
      sym_null_literal,
    STATE(30), 1,
      sym_identifier,
    STATE(46), 1,
      sym_path_expression,
    STATE(65), 1,
      sym_expression,
    ACTIONS(226), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(230), 2,
      sym_number,
      sym_string,
    STATE(64), 4,
      sym_boolean_literal,
      sym_between_expression,
      sym_function_call,
      sym_binary_expression,
  [4164] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(164), 1,
      sym_null_literal,
    ACTIONS(168), 1,
      aux_sym_identifier_token1,
    ACTIONS(170), 1,
      aux_sym_identifier_token2,
    STATE(25), 1,
      sym_identifier,
    STATE(33), 1,
      sym_path_expression,
    STATE(102), 1,
      sym_expression,
    ACTIONS(162), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(172), 2,
      sym_number,
      sym_string,
    STATE(43), 4,
      sym_boolean_literal,
      sym_between_expression,
      sym_function_call,
      sym_binary_expression,
  [4203] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_STAR,
    ACTIONS(118), 1,
      anon_sym_SLASH,
    ACTIONS(120), 1,
      anon_sym_PLUS,
    ACTIONS(122), 1,
      anon_sym_DASH,
    ACTIONS(124), 1,
      aux_sym_between_expression_token1,
    ACTIONS(126), 1,
      aux_sym_between_expression_token2,
    ACTIONS(128), 1,
      aux_sym_between_expression_token3,
    ACTIONS(196), 1,
      aux_sym_binary_expression_token1,
    ACTIONS(250), 1,
      anon_sym_RPAREN,
    ACTIONS(132), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(130), 4,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4244] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LPAREN,
    ACTIONS(210), 1,
      sym_null_literal,
    ACTIONS(212), 1,
      aux_sym_identifier_token1,
    ACTIONS(214), 1,
      aux_sym_identifier_token2,
    STATE(4), 1,
      sym_identifier,
    STATE(9), 1,
      sym_path_expression,
    STATE(17), 1,
      sym_expression,
    ACTIONS(208), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(216), 2,
      sym_number,
      sym_string,
    STATE(15), 4,
      sym_boolean_literal,
      sym_between_expression,
      sym_function_call,
      sym_binary_expression,
  [4283] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      aux_sym_identifier_token1,
    ACTIONS(60), 1,
      aux_sym_identifier_token2,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
    ACTIONS(228), 1,
      sym_null_literal,
    STATE(30), 1,
      sym_identifier,
    STATE(46), 1,
      sym_path_expression,
    STATE(70), 1,
      sym_expression,
    ACTIONS(226), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(230), 2,
      sym_number,
      sym_string,
    STATE(64), 4,
      sym_boolean_literal,
      sym_between_expression,
      sym_function_call,
      sym_binary_expression,
  [4322] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(164), 1,
      sym_null_literal,
    ACTIONS(168), 1,
      aux_sym_identifier_token1,
    ACTIONS(170), 1,
      aux_sym_identifier_token2,
    STATE(25), 1,
      sym_identifier,
    STATE(33), 1,
      sym_path_expression,
    STATE(128), 1,
      sym_expression,
    ACTIONS(162), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(172), 2,
      sym_number,
      sym_string,
    STATE(43), 4,
      sym_boolean_literal,
      sym_between_expression,
      sym_function_call,
      sym_binary_expression,
  [4361] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LPAREN,
    ACTIONS(210), 1,
      sym_null_literal,
    ACTIONS(212), 1,
      aux_sym_identifier_token1,
    ACTIONS(214), 1,
      aux_sym_identifier_token2,
    STATE(4), 1,
      sym_identifier,
    STATE(9), 1,
      sym_path_expression,
    STATE(16), 1,
      sym_expression,
    ACTIONS(208), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(216), 2,
      sym_number,
      sym_string,
    STATE(15), 4,
      sym_boolean_literal,
      sym_between_expression,
      sym_function_call,
      sym_binary_expression,
  [4400] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(164), 1,
      sym_null_literal,
    ACTIONS(168), 1,
      aux_sym_identifier_token1,
    ACTIONS(170), 1,
      aux_sym_identifier_token2,
    STATE(25), 1,
      sym_identifier,
    STATE(33), 1,
      sym_path_expression,
    STATE(37), 1,
      sym_expression,
    ACTIONS(162), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(172), 2,
      sym_number,
      sym_string,
    STATE(43), 4,
      sym_boolean_literal,
      sym_between_expression,
      sym_function_call,
      sym_binary_expression,
  [4439] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(164), 1,
      sym_null_literal,
    ACTIONS(168), 1,
      aux_sym_identifier_token1,
    ACTIONS(170), 1,
      aux_sym_identifier_token2,
    STATE(25), 1,
      sym_identifier,
    STATE(33), 1,
      sym_path_expression,
    STATE(38), 1,
      sym_expression,
    ACTIONS(162), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(172), 2,
      sym_number,
      sym_string,
    STATE(43), 4,
      sym_boolean_literal,
      sym_between_expression,
      sym_function_call,
      sym_binary_expression,
  [4478] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(164), 1,
      sym_null_literal,
    ACTIONS(168), 1,
      aux_sym_identifier_token1,
    ACTIONS(170), 1,
      aux_sym_identifier_token2,
    STATE(25), 1,
      sym_identifier,
    STATE(33), 1,
      sym_path_expression,
    STATE(39), 1,
      sym_expression,
    ACTIONS(162), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(172), 2,
      sym_number,
      sym_string,
    STATE(43), 4,
      sym_boolean_literal,
      sym_between_expression,
      sym_function_call,
      sym_binary_expression,
  [4517] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(164), 1,
      sym_null_literal,
    ACTIONS(168), 1,
      aux_sym_identifier_token1,
    ACTIONS(170), 1,
      aux_sym_identifier_token2,
    STATE(25), 1,
      sym_identifier,
    STATE(33), 1,
      sym_path_expression,
    STATE(40), 1,
      sym_expression,
    ACTIONS(162), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(172), 2,
      sym_number,
      sym_string,
    STATE(43), 4,
      sym_boolean_literal,
      sym_between_expression,
      sym_function_call,
      sym_binary_expression,
  [4556] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LPAREN,
    ACTIONS(210), 1,
      sym_null_literal,
    ACTIONS(212), 1,
      aux_sym_identifier_token1,
    ACTIONS(214), 1,
      aux_sym_identifier_token2,
    STATE(4), 1,
      sym_identifier,
    STATE(9), 1,
      sym_path_expression,
    STATE(20), 1,
      sym_expression,
    ACTIONS(208), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(216), 2,
      sym_number,
      sym_string,
    STATE(15), 4,
      sym_boolean_literal,
      sym_between_expression,
      sym_function_call,
      sym_binary_expression,
  [4595] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(164), 1,
      sym_null_literal,
    ACTIONS(168), 1,
      aux_sym_identifier_token1,
    ACTIONS(170), 1,
      aux_sym_identifier_token2,
    STATE(25), 1,
      sym_identifier,
    STATE(33), 1,
      sym_path_expression,
    STATE(41), 1,
      sym_expression,
    ACTIONS(162), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(172), 2,
      sym_number,
      sym_string,
    STATE(43), 4,
      sym_boolean_literal,
      sym_between_expression,
      sym_function_call,
      sym_binary_expression,
  [4634] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_STAR,
    ACTIONS(118), 1,
      anon_sym_SLASH,
    ACTIONS(120), 1,
      anon_sym_PLUS,
    ACTIONS(122), 1,
      anon_sym_DASH,
    ACTIONS(124), 1,
      aux_sym_between_expression_token1,
    ACTIONS(126), 1,
      aux_sym_between_expression_token2,
    ACTIONS(128), 1,
      aux_sym_between_expression_token3,
    ACTIONS(196), 1,
      aux_sym_binary_expression_token1,
    ACTIONS(252), 1,
      anon_sym_RPAREN,
    ACTIONS(132), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(130), 4,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4675] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(164), 1,
      sym_null_literal,
    ACTIONS(168), 1,
      aux_sym_identifier_token1,
    ACTIONS(170), 1,
      aux_sym_identifier_token2,
    STATE(25), 1,
      sym_identifier,
    STATE(33), 1,
      sym_path_expression,
    STATE(126), 1,
      sym_expression,
    ACTIONS(162), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(172), 2,
      sym_number,
      sym_string,
    STATE(43), 4,
      sym_boolean_literal,
      sym_between_expression,
      sym_function_call,
      sym_binary_expression,
  [4714] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LPAREN,
    ACTIONS(210), 1,
      sym_null_literal,
    ACTIONS(212), 1,
      aux_sym_identifier_token1,
    ACTIONS(214), 1,
      aux_sym_identifier_token2,
    STATE(4), 1,
      sym_identifier,
    STATE(9), 1,
      sym_path_expression,
    STATE(13), 1,
      sym_expression,
    ACTIONS(208), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(216), 2,
      sym_number,
      sym_string,
    STATE(15), 4,
      sym_boolean_literal,
      sym_between_expression,
      sym_function_call,
      sym_binary_expression,
  [4753] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LPAREN,
    ACTIONS(210), 1,
      sym_null_literal,
    ACTIONS(212), 1,
      aux_sym_identifier_token1,
    ACTIONS(214), 1,
      aux_sym_identifier_token2,
    STATE(4), 1,
      sym_identifier,
    STATE(9), 1,
      sym_path_expression,
    STATE(21), 1,
      sym_expression,
    ACTIONS(208), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(216), 2,
      sym_number,
      sym_string,
    STATE(15), 4,
      sym_boolean_literal,
      sym_between_expression,
      sym_function_call,
      sym_binary_expression,
  [4792] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_STAR,
    ACTIONS(118), 1,
      anon_sym_SLASH,
    ACTIONS(120), 1,
      anon_sym_PLUS,
    ACTIONS(122), 1,
      anon_sym_DASH,
    ACTIONS(124), 1,
      aux_sym_between_expression_token1,
    ACTIONS(126), 1,
      aux_sym_between_expression_token2,
    ACTIONS(254), 1,
      anon_sym_RPAREN,
    ACTIONS(68), 2,
      aux_sym_between_expression_token3,
      aux_sym_binary_expression_token1,
    ACTIONS(132), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(130), 4,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4831] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(164), 1,
      sym_null_literal,
    ACTIONS(168), 1,
      aux_sym_identifier_token1,
    ACTIONS(170), 1,
      aux_sym_identifier_token2,
    STATE(25), 1,
      sym_identifier,
    STATE(33), 1,
      sym_path_expression,
    STATE(123), 1,
      sym_expression,
    ACTIONS(162), 2,
      aux_sym_boolean_literal_token1,
      aux_sym_boolean_literal_token2,
    ACTIONS(172), 2,
      sym_number,
      sym_string,
    STATE(43), 4,
      sym_boolean_literal,
      sym_between_expression,
      sym_function_call,
      sym_binary_expression,
  [4870] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_STAR,
    ACTIONS(118), 1,
      anon_sym_SLASH,
    ACTIONS(120), 1,
      anon_sym_PLUS,
    ACTIONS(122), 1,
      anon_sym_DASH,
    ACTIONS(124), 1,
      aux_sym_between_expression_token1,
    ACTIONS(126), 1,
      aux_sym_between_expression_token2,
    ACTIONS(196), 1,
      aux_sym_binary_expression_token1,
    ACTIONS(256), 1,
      aux_sym_between_expression_token3,
    ACTIONS(132), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(130), 4,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4908] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_STAR,
    ACTIONS(118), 1,
      anon_sym_SLASH,
    ACTIONS(120), 1,
      anon_sym_PLUS,
    ACTIONS(122), 1,
      anon_sym_DASH,
    ACTIONS(124), 1,
      aux_sym_between_expression_token1,
    ACTIONS(126), 1,
      aux_sym_between_expression_token2,
    ACTIONS(196), 1,
      aux_sym_binary_expression_token1,
    ACTIONS(258), 1,
      aux_sym_between_expression_token3,
    ACTIONS(132), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(130), 4,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4946] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_DOT,
    STATE(132), 1,
      aux_sym_path_expression_repeat1,
    ACTIONS(24), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      aux_sym_identifier_token2,
    ACTIONS(26), 8,
      aux_sym_select_clause_token1,
      aux_sym_select_expression_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_identifier_token1,
  [4972] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_STAR,
    ACTIONS(118), 1,
      anon_sym_SLASH,
    ACTIONS(120), 1,
      anon_sym_PLUS,
    ACTIONS(122), 1,
      anon_sym_DASH,
    ACTIONS(124), 1,
      aux_sym_between_expression_token1,
    ACTIONS(126), 1,
      aux_sym_between_expression_token2,
    ACTIONS(196), 1,
      aux_sym_binary_expression_token1,
    ACTIONS(262), 1,
      aux_sym_between_expression_token3,
    ACTIONS(132), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(130), 4,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5010] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_DOT,
    STATE(127), 1,
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
  [5036] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_STAR,
    ACTIONS(118), 1,
      anon_sym_SLASH,
    ACTIONS(120), 1,
      anon_sym_PLUS,
    ACTIONS(122), 1,
      anon_sym_DASH,
    ACTIONS(124), 1,
      aux_sym_between_expression_token1,
    ACTIONS(126), 1,
      aux_sym_between_expression_token2,
    ACTIONS(196), 1,
      aux_sym_binary_expression_token1,
    ACTIONS(264), 1,
      aux_sym_between_expression_token3,
    ACTIONS(132), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(130), 4,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5074] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_STAR,
    ACTIONS(118), 1,
      anon_sym_SLASH,
    ACTIONS(120), 1,
      anon_sym_PLUS,
    ACTIONS(122), 1,
      anon_sym_DASH,
    ACTIONS(124), 1,
      aux_sym_between_expression_token1,
    ACTIONS(126), 1,
      aux_sym_between_expression_token2,
    ACTIONS(196), 1,
      aux_sym_binary_expression_token1,
    ACTIONS(266), 1,
      aux_sym_between_expression_token3,
    ACTIONS(132), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(130), 4,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5112] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_DOT,
    STATE(132), 1,
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
  [5138] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_STAR,
    ACTIONS(118), 1,
      anon_sym_SLASH,
    ACTIONS(120), 1,
      anon_sym_PLUS,
    ACTIONS(122), 1,
      anon_sym_DASH,
    ACTIONS(124), 1,
      aux_sym_between_expression_token1,
    ACTIONS(126), 1,
      aux_sym_between_expression_token2,
    ACTIONS(196), 1,
      aux_sym_binary_expression_token1,
    ACTIONS(271), 1,
      aux_sym_between_expression_token3,
    ACTIONS(132), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(130), 4,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5176] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_STAR,
    ACTIONS(118), 1,
      anon_sym_SLASH,
    ACTIONS(120), 1,
      anon_sym_PLUS,
    ACTIONS(122), 1,
      anon_sym_DASH,
    ACTIONS(124), 1,
      aux_sym_between_expression_token1,
    ACTIONS(126), 1,
      aux_sym_between_expression_token2,
    ACTIONS(196), 1,
      aux_sym_binary_expression_token1,
    ACTIONS(273), 1,
      aux_sym_between_expression_token3,
    ACTIONS(132), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(130), 4,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5214] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      aux_sym_identifier_token1,
    ACTIONS(60), 1,
      aux_sym_identifier_token2,
    ACTIONS(279), 1,
      aux_sym_select_expression_token1,
    STATE(153), 1,
      sym_identifier,
    ACTIONS(275), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(277), 6,
      aux_sym_select_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [5243] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(28), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_DOT,
      aux_sym_identifier_token2,
    ACTIONS(30), 8,
      aux_sym_select_clause_token1,
      aux_sym_select_expression_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_identifier_token1,
  [5264] = 3,
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
  [5285] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      aux_sym_where_clause_token1,
    ACTIONS(240), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(242), 1,
      aux_sym_having_clause_token1,
    ACTIONS(244), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(246), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(283), 1,
      anon_sym_SEMI,
    STATE(143), 1,
      sym_where_clause,
    STATE(158), 1,
      sym_group_by_clause,
    STATE(162), 1,
      sym_having_clause,
    STATE(178), 1,
      sym_order_by_clause,
    STATE(204), 1,
      sym_limit_clause,
    ACTIONS(281), 2,
      ts_builtin_sym_end,
      aux_sym_select_clause_token1,
  [5326] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      aux_sym_identifier_token2,
    ACTIONS(287), 8,
      aux_sym_select_clause_token1,
      aux_sym_select_expression_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
      aux_sym_identifier_token1,
  [5346] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(242), 1,
      aux_sym_having_clause_token1,
    ACTIONS(244), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(246), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(283), 1,
      anon_sym_SEMI,
    STATE(158), 1,
      sym_group_by_clause,
    STATE(162), 1,
      sym_having_clause,
    STATE(178), 1,
      sym_order_by_clause,
    STATE(204), 1,
      sym_limit_clause,
    ACTIONS(281), 2,
      ts_builtin_sym_end,
      aux_sym_select_clause_token1,
  [5381] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    STATE(142), 1,
      aux_sym_select_list_repeat1,
    ACTIONS(289), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [5402] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    STATE(144), 1,
      aux_sym_select_list_repeat1,
    ACTIONS(293), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [5423] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      aux_sym_group_by_clause_token1,
    ACTIONS(242), 1,
      aux_sym_having_clause_token1,
    ACTIONS(244), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(246), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(297), 1,
      anon_sym_SEMI,
    STATE(157), 1,
      sym_group_by_clause,
    STATE(163), 1,
      sym_having_clause,
    STATE(181), 1,
      sym_order_by_clause,
    STATE(197), 1,
      sym_limit_clause,
    ACTIONS(295), 2,
      ts_builtin_sym_end,
      aux_sym_select_clause_token1,
  [5458] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_COMMA,
    STATE(144), 1,
      aux_sym_select_list_repeat1,
    ACTIONS(299), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [5479] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 10,
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
  [5495] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(32), 10,
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
  [5511] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_COMMA,
    STATE(147), 1,
      aux_sym_from_clause_repeat1,
    ACTIONS(306), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [5531] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 10,
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
  [5547] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_COMMA,
    STATE(150), 1,
      aux_sym_from_clause_repeat1,
    ACTIONS(313), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [5567] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_COMMA,
    STATE(147), 1,
      aux_sym_from_clause_repeat1,
    ACTIONS(317), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [5587] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 10,
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
  [5603] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [5618] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [5633] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      aux_sym_having_clause_token1,
    ACTIONS(244), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(246), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(283), 1,
      anon_sym_SEMI,
    STATE(162), 1,
      sym_having_clause,
    STATE(178), 1,
      sym_order_by_clause,
    STATE(204), 1,
      sym_limit_clause,
    ACTIONS(281), 2,
      ts_builtin_sym_end,
      aux_sym_select_clause_token1,
  [5662] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [5677] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      aux_sym_from_clause_token1,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [5692] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      aux_sym_having_clause_token1,
    ACTIONS(244), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(246), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(327), 1,
      anon_sym_SEMI,
    STATE(165), 1,
      sym_having_clause,
    STATE(180), 1,
      sym_order_by_clause,
    STATE(198), 1,
      sym_limit_clause,
    ACTIONS(325), 2,
      ts_builtin_sym_end,
      aux_sym_select_clause_token1,
  [5721] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      aux_sym_having_clause_token1,
    ACTIONS(244), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(246), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(297), 1,
      anon_sym_SEMI,
    STATE(163), 1,
      sym_having_clause,
    STATE(181), 1,
      sym_order_by_clause,
    STATE(197), 1,
      sym_limit_clause,
    ACTIONS(295), 2,
      ts_builtin_sym_end,
      aux_sym_select_clause_token1,
  [5750] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      aux_sym_where_clause_token1,
      aux_sym_group_by_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [5765] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_COMMA,
    STATE(161), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(331), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [5783] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_COMMA,
    STATE(161), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(200), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [5801] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(246), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(297), 1,
      anon_sym_SEMI,
    STATE(181), 1,
      sym_order_by_clause,
    STATE(197), 1,
      sym_limit_clause,
    ACTIONS(295), 2,
      ts_builtin_sym_end,
      aux_sym_select_clause_token1,
  [5824] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(246), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(327), 1,
      anon_sym_SEMI,
    STATE(180), 1,
      sym_order_by_clause,
    STATE(198), 1,
      sym_limit_clause,
    ACTIONS(325), 2,
      ts_builtin_sym_end,
      aux_sym_select_clause_token1,
  [5847] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(246), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(283), 1,
      anon_sym_SEMI,
    STATE(178), 1,
      sym_order_by_clause,
    STATE(204), 1,
      sym_limit_clause,
    ACTIONS(281), 2,
      ts_builtin_sym_end,
      aux_sym_select_clause_token1,
  [5870] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      aux_sym_order_by_clause_token1,
    ACTIONS(246), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(338), 1,
      anon_sym_SEMI,
    STATE(179), 1,
      sym_order_by_clause,
    STATE(205), 1,
      sym_limit_clause,
    ACTIONS(336), 2,
      ts_builtin_sym_end,
      aux_sym_select_clause_token1,
  [5893] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(129), 1,
      sym_identifier,
    STATE(135), 1,
      sym_table_expression,
    STATE(139), 1,
      sym_path_expression,
    STATE(155), 1,
      sym_from_item,
    ACTIONS(340), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [5913] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_COMMA,
    STATE(172), 1,
      aux_sym_order_expression_list_repeat1,
    ACTIONS(342), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      aux_sym_limit_clause_token1,
  [5929] = 6,
    ACTIONS(3), 1,
      sym_comment,
    STATE(129), 1,
      sym_identifier,
    STATE(135), 1,
      sym_table_expression,
    STATE(139), 1,
      sym_path_expression,
    STATE(149), 1,
      sym_from_item,
    ACTIONS(340), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [5949] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      aux_sym_having_clause_token1,
      aux_sym_order_by_clause_token1,
      aux_sym_limit_clause_token1,
  [5961] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_COMMA,
    STATE(170), 1,
      aux_sym_order_expression_list_repeat1,
    ACTIONS(348), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      aux_sym_limit_clause_token1,
  [5977] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      ts_builtin_sym_end,
    ACTIONS(355), 1,
      aux_sym_select_clause_token1,
    STATE(86), 1,
      sym_select_clause,
    STATE(208), 1,
      sym_select_statement,
    STATE(171), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
  [5997] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_COMMA,
    STATE(170), 1,
      aux_sym_order_expression_list_repeat1,
    ACTIONS(358), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      aux_sym_limit_clause_token1,
  [6013] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_select_clause_token1,
    ACTIONS(360), 1,
      ts_builtin_sym_end,
    STATE(86), 1,
      sym_select_clause,
    STATE(208), 1,
      sym_select_statement,
    STATE(171), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
  [6033] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      aux_sym_limit_clause_token1,
  [6044] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(283), 1,
      anon_sym_SEMI,
    STATE(204), 1,
      sym_limit_clause,
    ACTIONS(281), 2,
      ts_builtin_sym_end,
      aux_sym_select_clause_token1,
  [6061] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_STAR,
    ACTIONS(366), 1,
      sym__identifier_after_dot,
    STATE(6), 1,
      sym_identifier,
    ACTIONS(214), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [6078] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      anon_sym_COMMA,
      aux_sym_limit_clause_token1,
  [6089] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(297), 1,
      anon_sym_SEMI,
    STATE(197), 1,
      sym_limit_clause,
    ACTIONS(295), 2,
      ts_builtin_sym_end,
      aux_sym_select_clause_token1,
  [6106] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(370), 1,
      anon_sym_SEMI,
    STATE(194), 1,
      sym_limit_clause,
    ACTIONS(368), 2,
      ts_builtin_sym_end,
      aux_sym_select_clause_token1,
  [6123] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(338), 1,
      anon_sym_SEMI,
    STATE(205), 1,
      sym_limit_clause,
    ACTIONS(336), 2,
      ts_builtin_sym_end,
      aux_sym_select_clause_token1,
  [6140] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      aux_sym_limit_clause_token1,
    ACTIONS(327), 1,
      anon_sym_SEMI,
    STATE(198), 1,
      sym_limit_clause,
    ACTIONS(325), 2,
      ts_builtin_sym_end,
      aux_sym_select_clause_token1,
  [6157] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_COMMA,
    STATE(187), 1,
      aux_sym_function_arguments_repeat1,
    ACTIONS(374), 2,
      anon_sym_RPAREN,
      aux_sym_clamped_between_modifier_token1,
  [6171] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      sym__identifier_after_dot,
    STATE(6), 1,
      sym_identifier,
    ACTIONS(214), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [6185] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      sym__identifier_after_dot,
    STATE(34), 1,
      sym_identifier,
    ACTIONS(60), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [6199] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      sym__identifier_after_dot,
    STATE(137), 1,
      sym_identifier,
    ACTIONS(340), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [6213] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      sym__identifier_after_dot,
    STATE(31), 1,
      sym_identifier,
    ACTIONS(170), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [6227] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_COMMA,
    STATE(187), 1,
      aux_sym_function_arguments_repeat1,
    ACTIONS(385), 2,
      anon_sym_RPAREN,
      aux_sym_clamped_between_modifier_token1,
  [6241] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
      aux_sym_limit_clause_token1,
  [6251] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_COMMA,
    STATE(182), 1,
      aux_sym_function_arguments_repeat1,
    ACTIONS(389), 2,
      anon_sym_RPAREN,
      aux_sym_clamped_between_modifier_token1,
  [6265] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_RPAREN,
    ACTIONS(393), 1,
      aux_sym_clamped_between_modifier_token1,
    STATE(220), 1,
      sym_clamped_between_modifier,
  [6278] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      aux_sym_clamped_between_modifier_token1,
    ACTIONS(395), 1,
      anon_sym_RPAREN,
    STATE(228), 1,
      sym_clamped_between_modifier,
  [6291] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_SEMI,
    ACTIONS(281), 2,
      ts_builtin_sym_end,
      aux_sym_select_clause_token1,
  [6302] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(148), 1,
      sym_identifier,
    ACTIONS(60), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [6313] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_SEMI,
    ACTIONS(397), 2,
      ts_builtin_sym_end,
      aux_sym_select_clause_token1,
  [6324] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      aux_sym_clamped_between_modifier_token1,
    ACTIONS(401), 1,
      anon_sym_RPAREN,
    STATE(214), 1,
      sym_clamped_between_modifier,
  [6337] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      aux_sym_clamped_between_modifier_token1,
    ACTIONS(403), 1,
      anon_sym_RPAREN,
    STATE(223), 1,
      sym_clamped_between_modifier,
  [6350] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_SEMI,
    ACTIONS(325), 2,
      ts_builtin_sym_end,
      aux_sym_select_clause_token1,
  [6361] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_SEMI,
    ACTIONS(336), 2,
      ts_builtin_sym_end,
      aux_sym_select_clause_token1,
  [6372] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(159), 1,
      sym_identifier,
    ACTIONS(60), 2,
      aux_sym_identifier_token1,
      aux_sym_identifier_token2,
  [6383] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      aux_sym_clamped_between_modifier_token1,
    ACTIONS(405), 1,
      anon_sym_RPAREN,
    STATE(221), 1,
      sym_clamped_between_modifier,
  [6396] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_clause_token1,
  [6405] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      aux_sym_clamped_between_modifier_token1,
    ACTIONS(409), 1,
      anon_sym_RPAREN,
    STATE(227), 1,
      sym_clamped_between_modifier,
  [6418] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_clamped_between_modifier_token1,
  [6427] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      anon_sym_SEMI,
    ACTIONS(295), 2,
      ts_builtin_sym_end,
      aux_sym_select_clause_token1,
  [6438] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_SEMI,
    ACTIONS(368), 2,
      ts_builtin_sym_end,
      aux_sym_select_clause_token1,
  [6449] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 2,
      ts_builtin_sym_end,
      aux_sym_select_clause_token1,
  [6457] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 2,
      ts_builtin_sym_end,
      aux_sym_select_clause_token1,
  [6465] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 2,
      ts_builtin_sym_end,
      aux_sym_select_clause_token1,
  [6473] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 2,
      ts_builtin_sym_end,
      aux_sym_select_clause_token1,
  [6481] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 2,
      ts_builtin_sym_end,
      aux_sym_select_clause_token1,
  [6489] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 2,
      ts_builtin_sym_end,
      aux_sym_select_clause_token1,
  [6497] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 2,
      ts_builtin_sym_end,
      aux_sym_select_clause_token1,
  [6505] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 2,
      ts_builtin_sym_end,
      aux_sym_select_clause_token1,
  [6513] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_RPAREN,
  [6520] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_RPAREN,
  [6527] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_RPAREN,
  [6534] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      aux_sym_between_expression_token2,
  [6541] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      aux_sym_between_expression_token2,
  [6548] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      ts_builtin_sym_end,
  [6555] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_RPAREN,
  [6562] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_RPAREN,
  [6569] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_RPAREN,
  [6576] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_RPAREN,
  [6583] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      sym_number,
  [6590] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      aux_sym_group_by_clause_token2,
  [6597] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      aux_sym_group_by_clause_token2,
  [6604] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_RPAREN,
  [6611] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_RPAREN,
  [6618] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      aux_sym_between_expression_token2,
  [6625] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      aux_sym_between_expression_token2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 42,
  [SMALL_STATE(4)] = 84,
  [SMALL_STATE(5)] = 126,
  [SMALL_STATE(6)] = 168,
  [SMALL_STATE(7)] = 205,
  [SMALL_STATE(8)] = 242,
  [SMALL_STATE(9)] = 306,
  [SMALL_STATE(10)] = 344,
  [SMALL_STATE(11)] = 387,
  [SMALL_STATE(12)] = 422,
  [SMALL_STATE(13)] = 457,
  [SMALL_STATE(14)] = 510,
  [SMALL_STATE(15)] = 545,
  [SMALL_STATE(16)] = 580,
  [SMALL_STATE(17)] = 631,
  [SMALL_STATE(18)] = 666,
  [SMALL_STATE(19)] = 701,
  [SMALL_STATE(20)] = 736,
  [SMALL_STATE(21)] = 779,
  [SMALL_STATE(22)] = 818,
  [SMALL_STATE(23)] = 853,
  [SMALL_STATE(24)] = 896,
  [SMALL_STATE(25)] = 930,
  [SMALL_STATE(26)] = 968,
  [SMALL_STATE(27)] = 1006,
  [SMALL_STATE(28)] = 1044,
  [SMALL_STATE(29)] = 1081,
  [SMALL_STATE(30)] = 1118,
  [SMALL_STATE(31)] = 1155,
  [SMALL_STATE(32)] = 1188,
  [SMALL_STATE(33)] = 1221,
  [SMALL_STATE(34)] = 1255,
  [SMALL_STATE(35)] = 1287,
  [SMALL_STATE(36)] = 1318,
  [SMALL_STATE(37)] = 1349,
  [SMALL_STATE(38)] = 1384,
  [SMALL_STATE(39)] = 1423,
  [SMALL_STATE(40)] = 1470,
  [SMALL_STATE(41)] = 1515,
  [SMALL_STATE(42)] = 1546,
  [SMALL_STATE(43)] = 1577,
  [SMALL_STATE(44)] = 1608,
  [SMALL_STATE(45)] = 1639,
  [SMALL_STATE(46)] = 1670,
  [SMALL_STATE(47)] = 1703,
  [SMALL_STATE(48)] = 1742,
  [SMALL_STATE(49)] = 1781,
  [SMALL_STATE(50)] = 1812,
  [SMALL_STATE(51)] = 1842,
  [SMALL_STATE(52)] = 1872,
  [SMALL_STATE(53)] = 1920,
  [SMALL_STATE(54)] = 1966,
  [SMALL_STATE(55)] = 1996,
  [SMALL_STATE(56)] = 2054,
  [SMALL_STATE(57)] = 2084,
  [SMALL_STATE(58)] = 2122,
  [SMALL_STATE(59)] = 2156,
  [SMALL_STATE(60)] = 2214,
  [SMALL_STATE(61)] = 2244,
  [SMALL_STATE(62)] = 2282,
  [SMALL_STATE(63)] = 2340,
  [SMALL_STATE(64)] = 2370,
  [SMALL_STATE(65)] = 2400,
  [SMALL_STATE(66)] = 2438,
  [SMALL_STATE(67)] = 2468,
  [SMALL_STATE(68)] = 2520,
  [SMALL_STATE(69)] = 2569,
  [SMALL_STATE(70)] = 2616,
  [SMALL_STATE(71)] = 2663,
  [SMALL_STATE(72)] = 2715,
  [SMALL_STATE(73)] = 2760,
  [SMALL_STATE(74)] = 2808,
  [SMALL_STATE(75)] = 2856,
  [SMALL_STATE(76)] = 2904,
  [SMALL_STATE(77)] = 2952,
  [SMALL_STATE(78)] = 2997,
  [SMALL_STATE(79)] = 3040,
  [SMALL_STATE(80)] = 3085,
  [SMALL_STATE(81)] = 3128,
  [SMALL_STATE(82)] = 3173,
  [SMALL_STATE(83)] = 3215,
  [SMALL_STATE(84)] = 3257,
  [SMALL_STATE(85)] = 3296,
  [SMALL_STATE(86)] = 3335,
  [SMALL_STATE(87)] = 3382,
  [SMALL_STATE(88)] = 3421,
  [SMALL_STATE(89)] = 3460,
  [SMALL_STATE(90)] = 3499,
  [SMALL_STATE(91)] = 3538,
  [SMALL_STATE(92)] = 3577,
  [SMALL_STATE(93)] = 3616,
  [SMALL_STATE(94)] = 3655,
  [SMALL_STATE(95)] = 3694,
  [SMALL_STATE(96)] = 3733,
  [SMALL_STATE(97)] = 3772,
  [SMALL_STATE(98)] = 3811,
  [SMALL_STATE(99)] = 3850,
  [SMALL_STATE(100)] = 3889,
  [SMALL_STATE(101)] = 3928,
  [SMALL_STATE(102)] = 3967,
  [SMALL_STATE(103)] = 4008,
  [SMALL_STATE(104)] = 4047,
  [SMALL_STATE(105)] = 4086,
  [SMALL_STATE(106)] = 4125,
  [SMALL_STATE(107)] = 4164,
  [SMALL_STATE(108)] = 4203,
  [SMALL_STATE(109)] = 4244,
  [SMALL_STATE(110)] = 4283,
  [SMALL_STATE(111)] = 4322,
  [SMALL_STATE(112)] = 4361,
  [SMALL_STATE(113)] = 4400,
  [SMALL_STATE(114)] = 4439,
  [SMALL_STATE(115)] = 4478,
  [SMALL_STATE(116)] = 4517,
  [SMALL_STATE(117)] = 4556,
  [SMALL_STATE(118)] = 4595,
  [SMALL_STATE(119)] = 4634,
  [SMALL_STATE(120)] = 4675,
  [SMALL_STATE(121)] = 4714,
  [SMALL_STATE(122)] = 4753,
  [SMALL_STATE(123)] = 4792,
  [SMALL_STATE(124)] = 4831,
  [SMALL_STATE(125)] = 4870,
  [SMALL_STATE(126)] = 4908,
  [SMALL_STATE(127)] = 4946,
  [SMALL_STATE(128)] = 4972,
  [SMALL_STATE(129)] = 5010,
  [SMALL_STATE(130)] = 5036,
  [SMALL_STATE(131)] = 5074,
  [SMALL_STATE(132)] = 5112,
  [SMALL_STATE(133)] = 5138,
  [SMALL_STATE(134)] = 5176,
  [SMALL_STATE(135)] = 5214,
  [SMALL_STATE(136)] = 5243,
  [SMALL_STATE(137)] = 5264,
  [SMALL_STATE(138)] = 5285,
  [SMALL_STATE(139)] = 5326,
  [SMALL_STATE(140)] = 5346,
  [SMALL_STATE(141)] = 5381,
  [SMALL_STATE(142)] = 5402,
  [SMALL_STATE(143)] = 5423,
  [SMALL_STATE(144)] = 5458,
  [SMALL_STATE(145)] = 5479,
  [SMALL_STATE(146)] = 5495,
  [SMALL_STATE(147)] = 5511,
  [SMALL_STATE(148)] = 5531,
  [SMALL_STATE(149)] = 5547,
  [SMALL_STATE(150)] = 5567,
  [SMALL_STATE(151)] = 5587,
  [SMALL_STATE(152)] = 5603,
  [SMALL_STATE(153)] = 5618,
  [SMALL_STATE(154)] = 5633,
  [SMALL_STATE(155)] = 5662,
  [SMALL_STATE(156)] = 5677,
  [SMALL_STATE(157)] = 5692,
  [SMALL_STATE(158)] = 5721,
  [SMALL_STATE(159)] = 5750,
  [SMALL_STATE(160)] = 5765,
  [SMALL_STATE(161)] = 5783,
  [SMALL_STATE(162)] = 5801,
  [SMALL_STATE(163)] = 5824,
  [SMALL_STATE(164)] = 5847,
  [SMALL_STATE(165)] = 5870,
  [SMALL_STATE(166)] = 5893,
  [SMALL_STATE(167)] = 5913,
  [SMALL_STATE(168)] = 5929,
  [SMALL_STATE(169)] = 5949,
  [SMALL_STATE(170)] = 5961,
  [SMALL_STATE(171)] = 5977,
  [SMALL_STATE(172)] = 5997,
  [SMALL_STATE(173)] = 6013,
  [SMALL_STATE(174)] = 6033,
  [SMALL_STATE(175)] = 6044,
  [SMALL_STATE(176)] = 6061,
  [SMALL_STATE(177)] = 6078,
  [SMALL_STATE(178)] = 6089,
  [SMALL_STATE(179)] = 6106,
  [SMALL_STATE(180)] = 6123,
  [SMALL_STATE(181)] = 6140,
  [SMALL_STATE(182)] = 6157,
  [SMALL_STATE(183)] = 6171,
  [SMALL_STATE(184)] = 6185,
  [SMALL_STATE(185)] = 6199,
  [SMALL_STATE(186)] = 6213,
  [SMALL_STATE(187)] = 6227,
  [SMALL_STATE(188)] = 6241,
  [SMALL_STATE(189)] = 6251,
  [SMALL_STATE(190)] = 6265,
  [SMALL_STATE(191)] = 6278,
  [SMALL_STATE(192)] = 6291,
  [SMALL_STATE(193)] = 6302,
  [SMALL_STATE(194)] = 6313,
  [SMALL_STATE(195)] = 6324,
  [SMALL_STATE(196)] = 6337,
  [SMALL_STATE(197)] = 6350,
  [SMALL_STATE(198)] = 6361,
  [SMALL_STATE(199)] = 6372,
  [SMALL_STATE(200)] = 6383,
  [SMALL_STATE(201)] = 6396,
  [SMALL_STATE(202)] = 6405,
  [SMALL_STATE(203)] = 6418,
  [SMALL_STATE(204)] = 6427,
  [SMALL_STATE(205)] = 6438,
  [SMALL_STATE(206)] = 6449,
  [SMALL_STATE(207)] = 6457,
  [SMALL_STATE(208)] = 6465,
  [SMALL_STATE(209)] = 6473,
  [SMALL_STATE(210)] = 6481,
  [SMALL_STATE(211)] = 6489,
  [SMALL_STATE(212)] = 6497,
  [SMALL_STATE(213)] = 6505,
  [SMALL_STATE(214)] = 6513,
  [SMALL_STATE(215)] = 6520,
  [SMALL_STATE(216)] = 6527,
  [SMALL_STATE(217)] = 6534,
  [SMALL_STATE(218)] = 6541,
  [SMALL_STATE(219)] = 6548,
  [SMALL_STATE(220)] = 6555,
  [SMALL_STATE(221)] = 6562,
  [SMALL_STATE(222)] = 6569,
  [SMALL_STATE(223)] = 6576,
  [SMALL_STATE(224)] = 6583,
  [SMALL_STATE(225)] = 6590,
  [SMALL_STATE(226)] = 6597,
  [SMALL_STATE(227)] = 6604,
  [SMALL_STATE(228)] = 6611,
  [SMALL_STATE(229)] = 6618,
  [SMALL_STATE(230)] = 6625,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_expression, 1),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_expression, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_expression_repeat1, 2),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_expression_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_expression_repeat1, 2), SHIFT_REPEAT(183),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_expression, 2),
  [26] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path_expression, 2),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_expression, 1),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_expression, 1),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 6),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 6),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_between_expression, 6),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_between_expression, 6),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_between_expression, 5),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_between_expression, 5),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_expression_repeat1, 2), SHIFT_REPEAT(186),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_expression_repeat1, 2), SHIFT_REPEAT(184),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_having_clause, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_argument, 1),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_argument, 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clamped_between_modifier, 5),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_expression_repeat1, 2), SHIFT_REPEAT(185),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_item, 1),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_item, 1),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 2),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_expression, 1),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_expression, 1),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_list, 1),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_list, 2),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_list_repeat1, 2),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_list_repeat1, 2), SHIFT_REPEAT(79),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_expression, 2),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_from_clause_repeat1, 2),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_from_clause_repeat1, 2), SHIFT_REPEAT(166),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_expression, 3),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 3),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 3),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_item, 2),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 2),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 4),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_item, 3),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(110),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 5),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression_list, 1),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by_clause, 3),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_order_expression_list_repeat1, 2),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_order_expression_list_repeat1, 2), SHIFT_REPEAT(83),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(71),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression_list, 2),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_expression, 2),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 6),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 2),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_arguments_repeat1, 2), SHIFT_REPEAT(77),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_arguments_repeat1, 2),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_order_by_clause, 3),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 1),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 7),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_clause, 2),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 8),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [419] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
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
