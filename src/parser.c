#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 150
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 92
#define ALIAS_COUNT 0
#define TOKEN_COUNT 56
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_rules_version = 1,
  anon_sym_EQ = 2,
  anon_sym_SEMI = 3,
  anon_sym_service = 4,
  anon_sym_LBRACE = 5,
  anon_sym_RBRACE = 6,
  anon_sym_match = 7,
  anon_sym_SLASH = 8,
  anon_sym_EQ_STAR_STAR = 9,
  anon_sym_allow = 10,
  anon_sym_COLON = 11,
  anon_sym_if = 12,
  anon_sym_COMMA = 13,
  anon_sym_read = 14,
  anon_sym_write = 15,
  anon_sym_create = 16,
  anon_sym_update = 17,
  anon_sym_delete = 18,
  anon_sym_get = 19,
  anon_sym_list = 20,
  anon_sym_function = 21,
  anon_sym_LPAREN = 22,
  anon_sym_RPAREN = 23,
  anon_sym_let = 24,
  anon_sym_const = 25,
  anon_sym_return = 26,
  anon_sym_AMP_AMP = 27,
  anon_sym_PIPE_PIPE = 28,
  anon_sym_EQ_EQ = 29,
  anon_sym_BANG_EQ = 30,
  anon_sym_LT = 31,
  anon_sym_GT = 32,
  anon_sym_LT_EQ = 33,
  anon_sym_GT_EQ = 34,
  anon_sym_PLUS = 35,
  anon_sym_DASH = 36,
  anon_sym_STAR = 37,
  anon_sym_PERCENT = 38,
  anon_sym_in = 39,
  anon_sym_is = 40,
  anon_sym_QMARK = 41,
  anon_sym_LBRACK = 42,
  anon_sym_RBRACK = 43,
  anon_sym_SLASHdatabases_SLASH = 44,
  anon_sym_DOLLAR_LPARENdatabase_RPAREN = 45,
  anon_sym_DOLLAR_LPAREN = 46,
  anon_sym_DOT = 47,
  aux_sym_identifier_token1 = 48,
  sym_string = 49,
  sym_number = 50,
  anon_sym_true = 51,
  anon_sym_false = 52,
  anon_sym_cloud_DOTfirestore = 53,
  anon_sym_firebase_DOTstorage = 54,
  sym_comment = 55,
  sym_source_file = 56,
  sym_rule_declaration = 57,
  sym_service_declaration = 58,
  sym_match_block = 59,
  sym_path = 60,
  sym_segment = 61,
  sym_rule = 62,
  sym_allow_rule = 63,
  sym_operation_list = 64,
  sym_operation = 65,
  sym_function_declaration = 66,
  sym_parameter_list = 67,
  sym_statement = 68,
  sym_variable_declaration = 69,
  sym_return_statement = 70,
  sym_expression = 71,
  sym_binary_expression = 72,
  sym_ternary_expression = 73,
  sym_function_call = 74,
  sym_index_call = 75,
  sym_argument_list = 76,
  sym_database_path = 77,
  sym_field_access = 78,
  sym_identifier = 79,
  sym_boolean = 80,
  sym_array = 81,
  sym_service_name = 82,
  aux_sym_service_declaration_repeat1 = 83,
  aux_sym_match_block_repeat1 = 84,
  aux_sym_path_repeat1 = 85,
  aux_sym_operation_list_repeat1 = 86,
  aux_sym_function_declaration_repeat1 = 87,
  aux_sym_parameter_list_repeat1 = 88,
  aux_sym_argument_list_repeat1 = 89,
  aux_sym_database_path_repeat1 = 90,
  aux_sym_field_access_repeat1 = 91,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_rules_version] = "rules_version",
  [anon_sym_EQ] = "=",
  [anon_sym_SEMI] = ";",
  [anon_sym_service] = "service",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_match] = "match",
  [anon_sym_SLASH] = "/",
  [anon_sym_EQ_STAR_STAR] = "=**",
  [anon_sym_allow] = "allow",
  [anon_sym_COLON] = ":",
  [anon_sym_if] = "if",
  [anon_sym_COMMA] = ",",
  [anon_sym_read] = "read",
  [anon_sym_write] = "write",
  [anon_sym_create] = "create",
  [anon_sym_update] = "update",
  [anon_sym_delete] = "delete",
  [anon_sym_get] = "get",
  [anon_sym_list] = "list",
  [anon_sym_function] = "function",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_let] = "let",
  [anon_sym_const] = "const",
  [anon_sym_return] = "return",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_PERCENT] = "%",
  [anon_sym_in] = "in",
  [anon_sym_is] = "is",
  [anon_sym_QMARK] = "\?",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_SLASHdatabases_SLASH] = "/databases/",
  [anon_sym_DOLLAR_LPARENdatabase_RPAREN] = "$(database)",
  [anon_sym_DOLLAR_LPAREN] = "$(",
  [anon_sym_DOT] = ".",
  [aux_sym_identifier_token1] = "identifier_token1",
  [sym_string] = "string",
  [sym_number] = "number",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_cloud_DOTfirestore] = "cloud.firestore",
  [anon_sym_firebase_DOTstorage] = "firebase.storage",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_rule_declaration] = "rule_declaration",
  [sym_service_declaration] = "service_declaration",
  [sym_match_block] = "match_block",
  [sym_path] = "path",
  [sym_segment] = "segment",
  [sym_rule] = "rule",
  [sym_allow_rule] = "allow_rule",
  [sym_operation_list] = "operation_list",
  [sym_operation] = "operation",
  [sym_function_declaration] = "function_declaration",
  [sym_parameter_list] = "parameter_list",
  [sym_statement] = "statement",
  [sym_variable_declaration] = "variable_declaration",
  [sym_return_statement] = "return_statement",
  [sym_expression] = "expression",
  [sym_binary_expression] = "binary_expression",
  [sym_ternary_expression] = "ternary_expression",
  [sym_function_call] = "function_call",
  [sym_index_call] = "index_call",
  [sym_argument_list] = "argument_list",
  [sym_database_path] = "database_path",
  [sym_field_access] = "field_access",
  [sym_identifier] = "identifier",
  [sym_boolean] = "boolean",
  [sym_array] = "array",
  [sym_service_name] = "service_name",
  [aux_sym_service_declaration_repeat1] = "service_declaration_repeat1",
  [aux_sym_match_block_repeat1] = "match_block_repeat1",
  [aux_sym_path_repeat1] = "path_repeat1",
  [aux_sym_operation_list_repeat1] = "operation_list_repeat1",
  [aux_sym_function_declaration_repeat1] = "function_declaration_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [aux_sym_database_path_repeat1] = "database_path_repeat1",
  [aux_sym_field_access_repeat1] = "field_access_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_rules_version] = anon_sym_rules_version,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_service] = anon_sym_service,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_match] = anon_sym_match,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_EQ_STAR_STAR] = anon_sym_EQ_STAR_STAR,
  [anon_sym_allow] = anon_sym_allow,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_read] = anon_sym_read,
  [anon_sym_write] = anon_sym_write,
  [anon_sym_create] = anon_sym_create,
  [anon_sym_update] = anon_sym_update,
  [anon_sym_delete] = anon_sym_delete,
  [anon_sym_get] = anon_sym_get,
  [anon_sym_list] = anon_sym_list,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_is] = anon_sym_is,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_SLASHdatabases_SLASH] = anon_sym_SLASHdatabases_SLASH,
  [anon_sym_DOLLAR_LPARENdatabase_RPAREN] = anon_sym_DOLLAR_LPARENdatabase_RPAREN,
  [anon_sym_DOLLAR_LPAREN] = anon_sym_DOLLAR_LPAREN,
  [anon_sym_DOT] = anon_sym_DOT,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [sym_string] = sym_string,
  [sym_number] = sym_number,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_cloud_DOTfirestore] = anon_sym_cloud_DOTfirestore,
  [anon_sym_firebase_DOTstorage] = anon_sym_firebase_DOTstorage,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_rule_declaration] = sym_rule_declaration,
  [sym_service_declaration] = sym_service_declaration,
  [sym_match_block] = sym_match_block,
  [sym_path] = sym_path,
  [sym_segment] = sym_segment,
  [sym_rule] = sym_rule,
  [sym_allow_rule] = sym_allow_rule,
  [sym_operation_list] = sym_operation_list,
  [sym_operation] = sym_operation,
  [sym_function_declaration] = sym_function_declaration,
  [sym_parameter_list] = sym_parameter_list,
  [sym_statement] = sym_statement,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_return_statement] = sym_return_statement,
  [sym_expression] = sym_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_ternary_expression] = sym_ternary_expression,
  [sym_function_call] = sym_function_call,
  [sym_index_call] = sym_index_call,
  [sym_argument_list] = sym_argument_list,
  [sym_database_path] = sym_database_path,
  [sym_field_access] = sym_field_access,
  [sym_identifier] = sym_identifier,
  [sym_boolean] = sym_boolean,
  [sym_array] = sym_array,
  [sym_service_name] = sym_service_name,
  [aux_sym_service_declaration_repeat1] = aux_sym_service_declaration_repeat1,
  [aux_sym_match_block_repeat1] = aux_sym_match_block_repeat1,
  [aux_sym_path_repeat1] = aux_sym_path_repeat1,
  [aux_sym_operation_list_repeat1] = aux_sym_operation_list_repeat1,
  [aux_sym_function_declaration_repeat1] = aux_sym_function_declaration_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
  [aux_sym_database_path_repeat1] = aux_sym_database_path_repeat1,
  [aux_sym_field_access_repeat1] = aux_sym_field_access_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_rules_version] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_service] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_match] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_STAR_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_allow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_read] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_write] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_create] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_update] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_delete] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_get] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_list] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_function] = {
    .visible = true,
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
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
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
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASHdatabases_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_LPARENdatabase_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cloud_DOTfirestore] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_firebase_DOTstorage] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_service_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_match_block] = {
    .visible = true,
    .named = true,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [sym_segment] = {
    .visible = true,
    .named = true,
  },
  [sym_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_allow_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_operation_list] = {
    .visible = true,
    .named = true,
  },
  [sym_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_function_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_ternary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_index_call] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_database_path] = {
    .visible = true,
    .named = true,
  },
  [sym_field_access] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_service_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_service_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_match_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_operation_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_database_path_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_field_access_repeat1] = {
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
  [8] = 4,
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
  [21] = 2,
  [22] = 5,
  [23] = 23,
  [24] = 6,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 7,
  [30] = 3,
  [31] = 11,
  [32] = 9,
  [33] = 10,
  [34] = 19,
  [35] = 18,
  [36] = 17,
  [37] = 13,
  [38] = 14,
  [39] = 15,
  [40] = 16,
  [41] = 20,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 43,
  [47] = 42,
  [48] = 48,
  [49] = 48,
  [50] = 50,
  [51] = 51,
  [52] = 51,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 50,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 59,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 62,
  [67] = 67,
  [68] = 65,
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
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 93,
  [100] = 100,
  [101] = 96,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 100,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 133,
  [148] = 148,
  [149] = 149,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(139);
      ADVANCE_MAP(
        '!', 21,
        '"', 5,
        '$', 9,
        '%', 181,
        '&', 7,
        '\'', 8,
        '(', 162,
        ')', 163,
        '*', 180,
        '+', 178,
        ',', 153,
        '-', 179,
        '.', 192,
        '/', 148,
        ':', 151,
        ';', 143,
        '<', 174,
        '=', 142,
        '>', 175,
        '?', 186,
        '[', 187,
        ']', 188,
        'a', 80,
        'c', 79,
        'd', 62,
        'f', 27,
        'g', 47,
        'i', 70,
        'l', 60,
        'm', 26,
        'r', 48,
        's', 64,
        't', 98,
        'u', 97,
        'w', 99,
        '{', 145,
        '|', 138,
        '}', 146,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(214);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '!', 21,
        '"', 5,
        '$', 10,
        '%', 181,
        '&', 7,
        '\'', 8,
        '(', 162,
        '*', 180,
        '+', 178,
        '-', 179,
        '.', 192,
        '/', 148,
        '<', 174,
        '=', 14,
        '>', 175,
        '?', 186,
        '[', 187,
        'c', 202,
        'f', 193,
        'i', 199,
        'l', 194,
        'r', 197,
        't', 203,
        '|', 138,
        '}', 146,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(214);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '!', 21,
        '%', 181,
        '&', 7,
        '(', 162,
        ')', 163,
        '*', 180,
        '+', 178,
        ',', 153,
        '-', 179,
        '.', 192,
        '/', 148,
        ':', 151,
        ';', 143,
        '<', 174,
        '=', 22,
        '>', 175,
        '?', 186,
        '[', 187,
        ']', 188,
        'i', 85,
        '|', 138,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '"', 5,
        '\'', 8,
        ')', 163,
        ',', 153,
        '/', 13,
        '[', 187,
        ']', 188,
        'f', 193,
        't', 203,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(214);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '"', 5,
        '\'', 8,
        '/', 12,
        '=', 141,
        '[', 187,
        'c', 202,
        'f', 193,
        'l', 194,
        'r', 197,
        't', 203,
        '}', 146,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(214);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(213);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '$') ADVANCE(9);
      if (lookahead == ')') ADVANCE(163);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '{') ADVANCE(145);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 7:
      if (lookahead == '&') ADVANCE(170);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(213);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(191);
      END_STATE();
    case 10:
      if (lookahead == '(') ADVANCE(45);
      END_STATE();
    case 11:
      if (lookahead == ')') ADVANCE(190);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '/') ADVANCE(222);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '/') ADVANCE(222);
      if (lookahead == 'd') ADVANCE(36);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '=') ADVANCE(172);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(221);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(149);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(71);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(111);
      END_STATE();
    case 20:
      if (lookahead == '/') ADVANCE(189);
      END_STATE();
    case 21:
      if (lookahead == '=') ADVANCE(173);
      END_STATE();
    case 22:
      if (lookahead == '=') ADVANCE(172);
      END_STATE();
    case 23:
      if (lookahead == '_') ADVANCE(136);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(43);
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(82);
      if (lookahead == 'i') ADVANCE(104);
      if (lookahead == 'u') ADVANCE(86);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(124);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(114);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(128);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(130);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 37:
      if (lookahead == 'b') ADVANCE(29);
      END_STATE();
    case 38:
      if (lookahead == 'b') ADVANCE(31);
      END_STATE();
    case 39:
      if (lookahead == 'b') ADVANCE(32);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(73);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(123);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(56);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(154);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(18);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(33);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(25);
      if (lookahead == 'u') ADVANCE(84);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(119);
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 70:
      if (lookahead == 'f') ADVANCE(152);
      if (lookahead == 'n') ADVANCE(182);
      if (lookahead == 's') ADVANCE(184);
      END_STATE();
    case 71:
      if (lookahead == 'f') ADVANCE(77);
      END_STATE();
    case 72:
      if (lookahead == 'g') ADVANCE(58);
      END_STATE();
    case 73:
      if (lookahead == 'h') ADVANCE(147);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(127);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(92);
      if (lookahead == 'o') ADVANCE(90);
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(91);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(112);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(182);
      if (lookahead == 's') ADVANCE(184);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(168);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(161);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 91:
      if (lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 97:
      if (lookahead == 'p') ADVANCE(46);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 100:
      if (lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 101:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 104:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 105:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 106:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 107:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 108:
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 109:
      if (lookahead == 's') ADVANCE(120);
      END_STATE();
    case 110:
      if (lookahead == 's') ADVANCE(121);
      END_STATE();
    case 111:
      if (lookahead == 's') ADVANCE(125);
      END_STATE();
    case 112:
      if (lookahead == 's') ADVANCE(51);
      END_STATE();
    case 113:
      if (lookahead == 's') ADVANCE(126);
      END_STATE();
    case 114:
      if (lookahead == 's') ADVANCE(61);
      END_STATE();
    case 115:
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 116:
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 117:
      if (lookahead == 's') ADVANCE(78);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(159);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(164);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(166);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 130:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 131:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 132:
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 133:
      if (lookahead == 'u') ADVANCE(102);
      END_STATE();
    case 134:
      if (lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 135:
      if (lookahead == 'v') ADVANCE(75);
      END_STATE();
    case 136:
      if (lookahead == 'v') ADVANCE(66);
      END_STATE();
    case 137:
      if (lookahead == 'w') ADVANCE(150);
      END_STATE();
    case 138:
      if (lookahead == '|') ADVANCE(171);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_rules_version);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '=') ADVANCE(172);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_service);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '/') ADVANCE(222);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_EQ_STAR_STAR);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_allow);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_read);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_write);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_create);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_update);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_get);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_list);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_const);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(176);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(177);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_in);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_is);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_SLASHdatabases_SLASH);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LPARENdatabase_RPAREN);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LPAREN);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(183);
      if (lookahead == 's') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(214);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_cloud_DOTfirestore);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_firebase_DOTstorage);
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
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 6},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 6},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 6},
  [113] = {.lex_state = 6},
  [114] = {.lex_state = 6},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 6},
  [123] = {.lex_state = 6},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 4},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 4},
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
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_rules_version] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_service] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_match] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_EQ_STAR_STAR] = ACTIONS(1),
    [anon_sym_allow] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_read] = ACTIONS(1),
    [anon_sym_write] = ACTIONS(1),
    [anon_sym_create] = ACTIONS(1),
    [anon_sym_update] = ACTIONS(1),
    [anon_sym_delete] = ACTIONS(1),
    [anon_sym_get] = ACTIONS(1),
    [anon_sym_list] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DOLLAR_LPAREN] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_cloud_DOTfirestore] = ACTIONS(1),
    [anon_sym_firebase_DOTstorage] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(149),
    [sym_rule_declaration] = STATE(118),
    [anon_sym_rules_version] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DOT,
    STATE(7), 1,
      aux_sym_field_access_repeat1,
    ACTIONS(9), 11,
      anon_sym_SLASH,
      anon_sym_let,
      anon_sym_const,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
      anon_sym_is,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(7), 15,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      sym_string,
      sym_number,
  [43] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 11,
      anon_sym_SLASH,
      anon_sym_let,
      anon_sym_const,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
      anon_sym_is,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(15), 16,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_DOT,
      sym_string,
      sym_number,
  [81] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 11,
      anon_sym_SLASH,
      anon_sym_let,
      anon_sym_const,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
      anon_sym_is,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(19), 17,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_DOT,
      sym_string,
      sym_number,
  [117] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOT,
    STATE(7), 1,
      aux_sym_field_access_repeat1,
    ACTIONS(9), 11,
      anon_sym_SLASH,
      anon_sym_let,
      anon_sym_const,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
      anon_sym_is,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(7), 15,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      sym_string,
      sym_number,
  [157] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_DOT,
    STATE(6), 1,
      aux_sym_field_access_repeat1,
    ACTIONS(17), 11,
      anon_sym_SLASH,
      anon_sym_let,
      anon_sym_const,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
      anon_sym_is,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(15), 15,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      sym_string,
      sym_number,
  [197] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOT,
    STATE(6), 1,
      aux_sym_field_access_repeat1,
    ACTIONS(28), 11,
      anon_sym_SLASH,
      anon_sym_let,
      anon_sym_const,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
      anon_sym_is,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(26), 15,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      sym_string,
      sym_number,
  [237] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(19), 24,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ_STAR_STAR,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_in,
      anon_sym_is,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
  [273] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(32), 11,
      anon_sym_SLASH,
      anon_sym_let,
      anon_sym_const,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
      anon_sym_is,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(30), 16,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_DOT,
      sym_string,
      sym_number,
  [308] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(36), 11,
      anon_sym_SLASH,
      anon_sym_let,
      anon_sym_const,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
      anon_sym_is,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(34), 16,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_DOT,
      sym_string,
      sym_number,
  [343] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 11,
      anon_sym_SLASH,
      anon_sym_let,
      anon_sym_const,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
      anon_sym_is,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(15), 16,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      anon_sym_DOT,
      sym_string,
      sym_number,
  [378] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 1,
      anon_sym_QMARK,
    ACTIONS(38), 4,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_string,
      sym_number,
    ACTIONS(40), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
      anon_sym_is,
    ACTIONS(42), 6,
      anon_sym_let,
      anon_sym_const,
      anon_sym_return,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(44), 10,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [418] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 11,
      anon_sym_SLASH,
      anon_sym_let,
      anon_sym_const,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
      anon_sym_is,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(48), 15,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      sym_string,
      sym_number,
  [452] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 11,
      anon_sym_SLASH,
      anon_sym_let,
      anon_sym_const,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
      anon_sym_is,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(52), 15,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      sym_string,
      sym_number,
  [486] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 11,
      anon_sym_SLASH,
      anon_sym_let,
      anon_sym_const,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
      anon_sym_is,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(56), 15,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      sym_string,
      sym_number,
  [520] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 11,
      anon_sym_SLASH,
      anon_sym_let,
      anon_sym_const,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
      anon_sym_is,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(60), 15,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      sym_string,
      sym_number,
  [554] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 11,
      anon_sym_SLASH,
      anon_sym_let,
      anon_sym_const,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
      anon_sym_is,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(64), 15,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      sym_string,
      sym_number,
  [588] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 11,
      anon_sym_SLASH,
      anon_sym_let,
      anon_sym_const,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
      anon_sym_is,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(68), 15,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      sym_string,
      sym_number,
  [622] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 11,
      anon_sym_SLASH,
      anon_sym_let,
      anon_sym_const,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
      anon_sym_is,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(72), 15,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      sym_string,
      sym_number,
  [656] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 11,
      anon_sym_SLASH,
      anon_sym_let,
      anon_sym_const,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
      anon_sym_is,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(7), 15,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_QMARK,
      anon_sym_LBRACK,
      sym_string,
      sym_number,
  [690] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_LPAREN,
    ACTIONS(78), 1,
      anon_sym_LBRACK,
    ACTIONS(80), 1,
      anon_sym_DOT,
    STATE(29), 1,
      aux_sym_field_access_repeat1,
    ACTIONS(9), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(7), 18,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_in,
      anon_sym_is,
      anon_sym_QMARK,
      anon_sym_RBRACK,
  [731] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_DOT,
    STATE(29), 1,
      aux_sym_field_access_repeat1,
    ACTIONS(9), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(7), 18,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_in,
      anon_sym_is,
      anon_sym_QMARK,
      anon_sym_RBRACK,
  [766] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_RBRACE,
    ACTIONS(86), 1,
      anon_sym_return,
    ACTIONS(88), 1,
      anon_sym_LBRACK,
    ACTIONS(90), 1,
      aux_sym_identifier_token1,
    STATE(2), 1,
      sym_identifier,
    STATE(5), 1,
      sym_function_call,
    STATE(12), 1,
      sym_expression,
    ACTIONS(84), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(92), 2,
      sym_string,
      sym_number,
    ACTIONS(94), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(26), 2,
      sym_statement,
      aux_sym_function_declaration_repeat1,
    STATE(72), 2,
      sym_variable_declaration,
      sym_return_statement,
    STATE(20), 6,
      sym_binary_expression,
      sym_ternary_expression,
      sym_index_call,
      sym_field_access,
      sym_boolean,
      sym_array,
  [819] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_DOT,
    STATE(24), 1,
      aux_sym_field_access_repeat1,
    ACTIONS(17), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(15), 18,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_in,
      anon_sym_is,
      anon_sym_QMARK,
      anon_sym_RBRACK,
  [854] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    ACTIONS(104), 1,
      anon_sym_return,
    ACTIONS(107), 1,
      anon_sym_LBRACK,
    ACTIONS(110), 1,
      aux_sym_identifier_token1,
    STATE(2), 1,
      sym_identifier,
    STATE(5), 1,
      sym_function_call,
    STATE(12), 1,
      sym_expression,
    ACTIONS(101), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(113), 2,
      sym_string,
      sym_number,
    ACTIONS(116), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 2,
      sym_statement,
      aux_sym_function_declaration_repeat1,
    STATE(72), 2,
      sym_variable_declaration,
      sym_return_statement,
    STATE(20), 6,
      sym_binary_expression,
      sym_ternary_expression,
      sym_index_call,
      sym_field_access,
      sym_boolean,
      sym_array,
  [907] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_return,
    ACTIONS(88), 1,
      anon_sym_LBRACK,
    ACTIONS(90), 1,
      aux_sym_identifier_token1,
    ACTIONS(119), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      sym_identifier,
    STATE(5), 1,
      sym_function_call,
    STATE(12), 1,
      sym_expression,
    ACTIONS(84), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(92), 2,
      sym_string,
      sym_number,
    ACTIONS(94), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 2,
      sym_statement,
      aux_sym_function_declaration_repeat1,
    STATE(72), 2,
      sym_variable_declaration,
      sym_return_statement,
    STATE(20), 6,
      sym_binary_expression,
      sym_ternary_expression,
      sym_index_call,
      sym_field_access,
      sym_boolean,
      sym_array,
  [960] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_return,
    ACTIONS(88), 1,
      anon_sym_LBRACK,
    ACTIONS(90), 1,
      aux_sym_identifier_token1,
    ACTIONS(119), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      sym_identifier,
    STATE(5), 1,
      sym_function_call,
    STATE(12), 1,
      sym_expression,
    ACTIONS(84), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(92), 2,
      sym_string,
      sym_number,
    ACTIONS(94), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(28), 2,
      sym_statement,
      aux_sym_function_declaration_repeat1,
    STATE(72), 2,
      sym_variable_declaration,
      sym_return_statement,
    STATE(20), 6,
      sym_binary_expression,
      sym_ternary_expression,
      sym_index_call,
      sym_field_access,
      sym_boolean,
      sym_array,
  [1013] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_return,
    ACTIONS(88), 1,
      anon_sym_LBRACK,
    ACTIONS(90), 1,
      aux_sym_identifier_token1,
    ACTIONS(121), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      sym_identifier,
    STATE(5), 1,
      sym_function_call,
    STATE(12), 1,
      sym_expression,
    ACTIONS(84), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(92), 2,
      sym_string,
      sym_number,
    ACTIONS(94), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 2,
      sym_statement,
      aux_sym_function_declaration_repeat1,
    STATE(72), 2,
      sym_variable_declaration,
      sym_return_statement,
    STATE(20), 6,
      sym_binary_expression,
      sym_ternary_expression,
      sym_index_call,
      sym_field_access,
      sym_boolean,
      sym_array,
  [1066] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_DOT,
    STATE(24), 1,
      aux_sym_field_access_repeat1,
    ACTIONS(28), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(26), 18,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_in,
      anon_sym_is,
      anon_sym_QMARK,
      anon_sym_RBRACK,
  [1101] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(15), 19,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_in,
      anon_sym_is,
      anon_sym_QMARK,
      anon_sym_RBRACK,
      anon_sym_DOT,
  [1134] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(15), 19,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_in,
      anon_sym_is,
      anon_sym_QMARK,
      anon_sym_RBRACK,
      anon_sym_DOT,
  [1164] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(32), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(30), 19,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_in,
      anon_sym_is,
      anon_sym_QMARK,
      anon_sym_RBRACK,
      anon_sym_DOT,
  [1194] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(36), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(34), 19,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_in,
      anon_sym_is,
      anon_sym_QMARK,
      anon_sym_RBRACK,
      anon_sym_DOT,
  [1224] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(72), 18,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_in,
      anon_sym_is,
      anon_sym_QMARK,
      anon_sym_RBRACK,
  [1253] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(68), 18,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_in,
      anon_sym_is,
      anon_sym_QMARK,
      anon_sym_RBRACK,
  [1282] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(64), 18,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_in,
      anon_sym_is,
      anon_sym_QMARK,
      anon_sym_RBRACK,
  [1311] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(48), 18,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_in,
      anon_sym_is,
      anon_sym_QMARK,
      anon_sym_RBRACK,
  [1340] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(52), 18,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_in,
      anon_sym_is,
      anon_sym_QMARK,
      anon_sym_RBRACK,
  [1369] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(56), 18,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_in,
      anon_sym_is,
      anon_sym_QMARK,
      anon_sym_RBRACK,
  [1398] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(60), 18,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_in,
      anon_sym_is,
      anon_sym_QMARK,
      anon_sym_RBRACK,
  [1427] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(7), 18,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_in,
      anon_sym_is,
      anon_sym_QMARK,
      anon_sym_RBRACK,
  [1456] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_COMMA,
    ACTIONS(129), 1,
      anon_sym_QMARK,
    ACTIONS(131), 1,
      anon_sym_RBRACK,
    STATE(100), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(123), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(127), 12,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_in,
      anon_sym_is,
  [1491] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_RPAREN,
    ACTIONS(135), 1,
      anon_sym_LBRACK,
    ACTIONS(137), 1,
      anon_sym_SLASHdatabases_SLASH,
    ACTIONS(139), 1,
      aux_sym_identifier_token1,
    STATE(21), 1,
      sym_identifier,
    STATE(22), 1,
      sym_function_call,
    STATE(45), 1,
      sym_expression,
    ACTIONS(141), 2,
      sym_string,
      sym_number,
    ACTIONS(143), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(147), 2,
      sym_argument_list,
      sym_database_path,
    STATE(41), 6,
      sym_binary_expression,
      sym_ternary_expression,
      sym_index_call,
      sym_field_access,
      sym_boolean,
      sym_array,
  [1536] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_QMARK,
    ACTIONS(123), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(145), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(127), 12,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_in,
      anon_sym_is,
  [1567] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_COMMA,
    ACTIONS(129), 1,
      anon_sym_QMARK,
    ACTIONS(147), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(123), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(127), 12,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_in,
      anon_sym_is,
  [1602] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_LBRACK,
    ACTIONS(137), 1,
      anon_sym_SLASHdatabases_SLASH,
    ACTIONS(139), 1,
      aux_sym_identifier_token1,
    ACTIONS(149), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      sym_identifier,
    STATE(22), 1,
      sym_function_call,
    STATE(45), 1,
      sym_expression,
    ACTIONS(141), 2,
      sym_string,
      sym_number,
    ACTIONS(143), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(133), 2,
      sym_argument_list,
      sym_database_path,
    STATE(41), 6,
      sym_binary_expression,
      sym_ternary_expression,
      sym_index_call,
      sym_field_access,
      sym_boolean,
      sym_array,
  [1647] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_COMMA,
    ACTIONS(129), 1,
      anon_sym_QMARK,
    ACTIONS(151), 1,
      anon_sym_RBRACK,
    STATE(108), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(123), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(127), 12,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_in,
      anon_sym_is,
  [1682] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_COMMA,
    ACTIONS(135), 1,
      anon_sym_LBRACK,
    ACTIONS(139), 1,
      aux_sym_identifier_token1,
    ACTIONS(153), 1,
      anon_sym_RBRACK,
    STATE(21), 1,
      sym_identifier,
    STATE(22), 1,
      sym_function_call,
    STATE(47), 1,
      sym_expression,
    STATE(93), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(141), 2,
      sym_string,
      sym_number,
    ACTIONS(143), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(41), 6,
      sym_binary_expression,
      sym_ternary_expression,
      sym_index_call,
      sym_field_access,
      sym_boolean,
      sym_array,
  [1726] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_COMMA,
    ACTIONS(135), 1,
      anon_sym_LBRACK,
    ACTIONS(139), 1,
      aux_sym_identifier_token1,
    ACTIONS(155), 1,
      anon_sym_RBRACK,
    STATE(21), 1,
      sym_identifier,
    STATE(22), 1,
      sym_function_call,
    STATE(42), 1,
      sym_expression,
    STATE(99), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(141), 2,
      sym_string,
      sym_number,
    ACTIONS(143), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(41), 6,
      sym_binary_expression,
      sym_ternary_expression,
      sym_index_call,
      sym_field_access,
      sym_boolean,
      sym_array,
  [1770] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_QMARK,
    ACTIONS(157), 1,
      anon_sym_COLON,
    ACTIONS(123), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(127), 12,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_in,
      anon_sym_is,
  [1799] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_QMARK,
    ACTIONS(159), 1,
      anon_sym_RBRACK,
    ACTIONS(123), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(127), 12,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_in,
      anon_sym_is,
  [1828] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_QMARK,
    ACTIONS(161), 1,
      anon_sym_RBRACK,
    ACTIONS(123), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(127), 12,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_in,
      anon_sym_is,
  [1857] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_QMARK,
    ACTIONS(163), 1,
      anon_sym_SEMI,
    ACTIONS(123), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(127), 12,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_in,
      anon_sym_is,
  [1886] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_QMARK,
    ACTIONS(165), 1,
      anon_sym_RPAREN,
    ACTIONS(123), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(127), 12,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_in,
      anon_sym_is,
  [1915] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_QMARK,
    ACTIONS(167), 1,
      anon_sym_SEMI,
    ACTIONS(123), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(127), 12,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_in,
      anon_sym_is,
  [1944] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_QMARK,
    ACTIONS(169), 1,
      anon_sym_SEMI,
    ACTIONS(123), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(127), 12,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_in,
      anon_sym_is,
  [1973] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_QMARK,
    ACTIONS(171), 1,
      anon_sym_COLON,
    ACTIONS(123), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(127), 12,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_in,
      anon_sym_is,
  [2002] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_LBRACK,
    ACTIONS(139), 1,
      aux_sym_identifier_token1,
    STATE(21), 1,
      sym_identifier,
    STATE(22), 1,
      sym_function_call,
    STATE(44), 1,
      sym_expression,
    ACTIONS(141), 2,
      sym_string,
      sym_number,
    ACTIONS(143), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(41), 6,
      sym_binary_expression,
      sym_ternary_expression,
      sym_index_call,
      sym_field_access,
      sym_boolean,
      sym_array,
  [2037] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_LBRACK,
    ACTIONS(139), 1,
      aux_sym_identifier_token1,
    STATE(21), 1,
      sym_identifier,
    STATE(22), 1,
      sym_function_call,
    STATE(37), 1,
      sym_expression,
    ACTIONS(141), 2,
      sym_string,
      sym_number,
    ACTIONS(143), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(41), 6,
      sym_binary_expression,
      sym_ternary_expression,
      sym_index_call,
      sym_field_access,
      sym_boolean,
      sym_array,
  [2072] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_LBRACK,
    ACTIONS(139), 1,
      aux_sym_identifier_token1,
    STATE(21), 1,
      sym_identifier,
    STATE(22), 1,
      sym_function_call,
    STATE(55), 1,
      sym_expression,
    ACTIONS(141), 2,
      sym_string,
      sym_number,
    ACTIONS(143), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(41), 6,
      sym_binary_expression,
      sym_ternary_expression,
      sym_index_call,
      sym_field_access,
      sym_boolean,
      sym_array,
  [2107] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_LBRACK,
    ACTIONS(90), 1,
      aux_sym_identifier_token1,
    STATE(2), 1,
      sym_identifier,
    STATE(5), 1,
      sym_function_call,
    STATE(13), 1,
      sym_expression,
    ACTIONS(92), 2,
      sym_string,
      sym_number,
    ACTIONS(94), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(20), 6,
      sym_binary_expression,
      sym_ternary_expression,
      sym_index_call,
      sym_field_access,
      sym_boolean,
      sym_array,
  [2142] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_LBRACK,
    ACTIONS(139), 1,
      aux_sym_identifier_token1,
    STATE(21), 1,
      sym_identifier,
    STATE(22), 1,
      sym_function_call,
    STATE(57), 1,
      sym_expression,
    ACTIONS(141), 2,
      sym_string,
      sym_number,
    ACTIONS(143), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(41), 6,
      sym_binary_expression,
      sym_ternary_expression,
      sym_index_call,
      sym_field_access,
      sym_boolean,
      sym_array,
  [2177] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_LBRACK,
    ACTIONS(139), 1,
      aux_sym_identifier_token1,
    STATE(21), 1,
      sym_identifier,
    STATE(22), 1,
      sym_function_call,
    STATE(56), 1,
      sym_expression,
    ACTIONS(141), 2,
      sym_string,
      sym_number,
    ACTIONS(143), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(41), 6,
      sym_binary_expression,
      sym_ternary_expression,
      sym_index_call,
      sym_field_access,
      sym_boolean,
      sym_array,
  [2212] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_LBRACK,
    ACTIONS(139), 1,
      aux_sym_identifier_token1,
    STATE(21), 1,
      sym_identifier,
    STATE(22), 1,
      sym_function_call,
    STATE(54), 1,
      sym_expression,
    ACTIONS(141), 2,
      sym_string,
      sym_number,
    ACTIONS(143), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(41), 6,
      sym_binary_expression,
      sym_ternary_expression,
      sym_index_call,
      sym_field_access,
      sym_boolean,
      sym_array,
  [2247] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_LBRACK,
    ACTIONS(139), 1,
      aux_sym_identifier_token1,
    STATE(21), 1,
      sym_identifier,
    STATE(22), 1,
      sym_function_call,
    STATE(35), 1,
      sym_expression,
    ACTIONS(141), 2,
      sym_string,
      sym_number,
    ACTIONS(143), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(41), 6,
      sym_binary_expression,
      sym_ternary_expression,
      sym_index_call,
      sym_field_access,
      sym_boolean,
      sym_array,
  [2282] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_LBRACK,
    ACTIONS(139), 1,
      aux_sym_identifier_token1,
    STATE(21), 1,
      sym_identifier,
    STATE(22), 1,
      sym_function_call,
    STATE(50), 1,
      sym_expression,
    ACTIONS(141), 2,
      sym_string,
      sym_number,
    ACTIONS(143), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(41), 6,
      sym_binary_expression,
      sym_ternary_expression,
      sym_index_call,
      sym_field_access,
      sym_boolean,
      sym_array,
  [2317] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_LBRACK,
    ACTIONS(139), 1,
      aux_sym_identifier_token1,
    STATE(21), 1,
      sym_identifier,
    STATE(22), 1,
      sym_function_call,
    STATE(52), 1,
      sym_expression,
    ACTIONS(141), 2,
      sym_string,
      sym_number,
    ACTIONS(143), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(41), 6,
      sym_binary_expression,
      sym_ternary_expression,
      sym_index_call,
      sym_field_access,
      sym_boolean,
      sym_array,
  [2352] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_LBRACK,
    ACTIONS(90), 1,
      aux_sym_identifier_token1,
    STATE(2), 1,
      sym_identifier,
    STATE(5), 1,
      sym_function_call,
    STATE(18), 1,
      sym_expression,
    ACTIONS(92), 2,
      sym_string,
      sym_number,
    ACTIONS(94), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(20), 6,
      sym_binary_expression,
      sym_ternary_expression,
      sym_index_call,
      sym_field_access,
      sym_boolean,
      sym_array,
  [2387] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_LBRACK,
    ACTIONS(139), 1,
      aux_sym_identifier_token1,
    STATE(21), 1,
      sym_identifier,
    STATE(22), 1,
      sym_function_call,
    STATE(53), 1,
      sym_expression,
    ACTIONS(141), 2,
      sym_string,
      sym_number,
    ACTIONS(143), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(41), 6,
      sym_binary_expression,
      sym_ternary_expression,
      sym_index_call,
      sym_field_access,
      sym_boolean,
      sym_array,
  [2422] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 4,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_string,
      sym_number,
    ACTIONS(175), 6,
      anon_sym_let,
      anon_sym_const,
      anon_sym_return,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
  [2440] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 4,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_string,
      sym_number,
    ACTIONS(179), 6,
      anon_sym_let,
      anon_sym_const,
      anon_sym_return,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
  [2458] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(38), 4,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_string,
      sym_number,
    ACTIONS(42), 6,
      anon_sym_let,
      anon_sym_const,
      anon_sym_return,
      aux_sym_identifier_token1,
      anon_sym_true,
      anon_sym_false,
  [2476] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_RBRACE,
    ACTIONS(183), 1,
      anon_sym_match,
    ACTIONS(186), 1,
      anon_sym_allow,
    ACTIONS(189), 1,
      anon_sym_function,
    STATE(73), 2,
      sym_rule,
      aux_sym_match_block_repeat1,
    STATE(80), 3,
      sym_match_block,
      sym_allow_rule,
      sym_function_declaration,
  [2501] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_RBRACE,
    ACTIONS(194), 1,
      anon_sym_match,
    ACTIONS(196), 1,
      anon_sym_allow,
    ACTIONS(198), 1,
      anon_sym_function,
    STATE(73), 2,
      sym_rule,
      aux_sym_match_block_repeat1,
    STATE(80), 3,
      sym_match_block,
      sym_allow_rule,
      sym_function_declaration,
  [2526] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(109), 1,
      sym_operation,
    STATE(148), 1,
      sym_operation_list,
    ACTIONS(200), 7,
      anon_sym_read,
      anon_sym_write,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_get,
      anon_sym_list,
  [2545] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_match,
    ACTIONS(196), 1,
      anon_sym_allow,
    ACTIONS(198), 1,
      anon_sym_function,
    ACTIONS(202), 1,
      anon_sym_RBRACE,
    STATE(74), 2,
      sym_rule,
      aux_sym_match_block_repeat1,
    STATE(80), 3,
      sym_match_block,
      sym_allow_rule,
      sym_function_declaration,
  [2570] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(127), 1,
      sym_operation,
    ACTIONS(200), 7,
      anon_sym_read,
      anon_sym_write,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_get,
      anon_sym_list,
  [2586] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 4,
      anon_sym_RBRACE,
      anon_sym_match,
      anon_sym_allow,
      anon_sym_function,
  [2596] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_RBRACE,
    ACTIONS(208), 1,
      anon_sym_match,
    STATE(79), 2,
      sym_match_block,
      aux_sym_service_declaration_repeat1,
  [2610] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 4,
      anon_sym_RBRACE,
      anon_sym_match,
      anon_sym_allow,
      anon_sym_function,
  [2620] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 4,
      anon_sym_RBRACE,
      anon_sym_match,
      anon_sym_allow,
      anon_sym_function,
  [2630] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 4,
      anon_sym_RBRACE,
      anon_sym_match,
      anon_sym_allow,
      anon_sym_function,
  [2640] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 4,
      anon_sym_RBRACE,
      anon_sym_match,
      anon_sym_allow,
      anon_sym_function,
  [2650] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_RPAREN,
    ACTIONS(221), 1,
      aux_sym_identifier_token1,
    STATE(92), 1,
      sym_identifier,
    STATE(134), 1,
      sym_parameter_list,
  [2666] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      aux_sym_identifier_token1,
    ACTIONS(223), 1,
      anon_sym_LBRACE,
    STATE(115), 2,
      sym_segment,
      sym_identifier,
  [2680] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    STATE(86), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(145), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [2694] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 4,
      anon_sym_RBRACE,
      anon_sym_match,
      anon_sym_allow,
      anon_sym_function,
  [2704] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 4,
      anon_sym_RBRACE,
      anon_sym_match,
      anon_sym_allow,
      anon_sym_function,
  [2714] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      aux_sym_identifier_token1,
    ACTIONS(223), 1,
      anon_sym_LBRACE,
    STATE(97), 2,
      sym_segment,
      sym_identifier,
  [2728] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_match,
    ACTIONS(232), 1,
      anon_sym_RBRACE,
    STATE(79), 2,
      sym_match_block,
      aux_sym_service_declaration_repeat1,
  [2742] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_match,
    ACTIONS(234), 1,
      anon_sym_RBRACE,
    STATE(90), 2,
      sym_match_block,
      aux_sym_service_declaration_repeat1,
  [2756] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_COMMA,
    ACTIONS(238), 1,
      anon_sym_RPAREN,
    STATE(94), 1,
      aux_sym_parameter_list_repeat1,
  [2769] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_COMMA,
    ACTIONS(151), 1,
      anon_sym_RBRACK,
    STATE(86), 1,
      aux_sym_argument_list_repeat1,
  [2782] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_COMMA,
    ACTIONS(240), 1,
      anon_sym_RPAREN,
    STATE(106), 1,
      aux_sym_parameter_list_repeat1,
  [2795] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_SLASH,
    ACTIONS(244), 1,
      anon_sym_RPAREN,
    STATE(110), 1,
      aux_sym_database_path_repeat1,
  [2808] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      aux_sym_identifier_token1,
    STATE(3), 1,
      sym_identifier,
    STATE(11), 1,
      sym_function_call,
  [2821] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_LBRACE,
    ACTIONS(250), 1,
      anon_sym_SLASH,
    STATE(103), 1,
      aux_sym_path_repeat1,
  [2834] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_COLON,
    ACTIONS(254), 1,
      anon_sym_COMMA,
    STATE(98), 1,
      aux_sym_operation_list_repeat1,
  [2847] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_COMMA,
    ACTIONS(131), 1,
      anon_sym_RBRACK,
    STATE(86), 1,
      aux_sym_argument_list_repeat1,
  [2860] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_COMMA,
    ACTIONS(257), 1,
      anon_sym_RBRACK,
    STATE(86), 1,
      aux_sym_argument_list_repeat1,
  [2873] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      aux_sym_identifier_token1,
    STATE(30), 1,
      sym_identifier,
    STATE(31), 1,
      sym_function_call,
  [2886] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_COLON,
    ACTIONS(261), 1,
      anon_sym_COMMA,
    STATE(98), 1,
      aux_sym_operation_list_repeat1,
  [2899] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_SLASH,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    STATE(111), 1,
      aux_sym_path_repeat1,
  [2912] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_SLASH,
    ACTIONS(265), 1,
      anon_sym_RPAREN,
    STATE(95), 1,
      aux_sym_database_path_repeat1,
  [2925] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_COMMA,
    ACTIONS(267), 1,
      anon_sym_RPAREN,
    STATE(86), 1,
      aux_sym_argument_list_repeat1,
  [2938] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    ACTIONS(272), 1,
      anon_sym_RPAREN,
    STATE(106), 1,
      aux_sym_parameter_list_repeat1,
  [2951] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(129), 1,
      sym_service_name,
    ACTIONS(274), 2,
      anon_sym_cloud_DOTfirestore,
      anon_sym_firebase_DOTstorage,
  [2962] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_COMMA,
    ACTIONS(276), 1,
      anon_sym_RBRACK,
    STATE(86), 1,
      aux_sym_argument_list_repeat1,
  [2975] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_COMMA,
    ACTIONS(278), 1,
      anon_sym_COLON,
    STATE(102), 1,
      aux_sym_operation_list_repeat1,
  [2988] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_SLASH,
    ACTIONS(283), 1,
      anon_sym_RPAREN,
    STATE(110), 1,
      aux_sym_database_path_repeat1,
  [3001] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_LBRACE,
    ACTIONS(287), 1,
      anon_sym_SLASH,
    STATE(111), 1,
      aux_sym_path_repeat1,
  [3014] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      aux_sym_identifier_token1,
    ACTIONS(290), 1,
      anon_sym_DOLLAR_LPAREN,
    STATE(116), 1,
      sym_identifier,
  [3027] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      aux_sym_identifier_token1,
    STATE(126), 1,
      sym_identifier,
  [3037] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      aux_sym_identifier_token1,
    STATE(139), 1,
      sym_identifier,
  [3047] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_LBRACE,
    ACTIONS(292), 1,
      anon_sym_SLASH,
  [3057] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_RPAREN,
    ACTIONS(294), 1,
      anon_sym_SLASH,
  [3067] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 2,
      anon_sym_COLON,
      anon_sym_COMMA,
  [3075] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_service,
    STATE(142), 1,
      sym_service_declaration,
  [3085] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_LBRACE,
    ACTIONS(302), 1,
      anon_sym_SLASH,
  [3095] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_SLASH,
    ACTIONS(306), 1,
      anon_sym_RPAREN,
  [3105] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3113] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      aux_sym_identifier_token1,
    STATE(145), 1,
      sym_identifier,
  [3123] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      aux_sym_identifier_token1,
    STATE(121), 1,
      sym_identifier,
  [3133] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_LBRACE,
    ACTIONS(310), 1,
      anon_sym_SLASH,
  [3143] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_SLASH,
    STATE(128), 1,
      sym_path,
  [3153] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_RBRACE,
    ACTIONS(316), 1,
      anon_sym_EQ_STAR_STAR,
  [3163] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 2,
      anon_sym_COLON,
      anon_sym_COMMA,
  [3171] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_LBRACE,
  [3178] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_LBRACE,
  [3185] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_EQ,
  [3192] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      anon_sym_LBRACE,
  [3199] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      ts_builtin_sym_end,
  [3206] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_RPAREN,
  [3213] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_RPAREN,
  [3220] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_RBRACE,
  [3227] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      ts_builtin_sym_end,
  [3234] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_DOLLAR_LPARENdatabase_RPAREN,
  [3241] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_service,
  [3248] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_EQ,
  [3255] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_LBRACE,
  [3262] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_SEMI,
  [3269] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      ts_builtin_sym_end,
  [3276] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      anon_sym_LBRACE,
  [3283] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_if,
  [3290] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_LPAREN,
  [3297] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      sym_string,
  [3304] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_RPAREN,
  [3311] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      anon_sym_COLON,
  [3318] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 43,
  [SMALL_STATE(4)] = 81,
  [SMALL_STATE(5)] = 117,
  [SMALL_STATE(6)] = 157,
  [SMALL_STATE(7)] = 197,
  [SMALL_STATE(8)] = 237,
  [SMALL_STATE(9)] = 273,
  [SMALL_STATE(10)] = 308,
  [SMALL_STATE(11)] = 343,
  [SMALL_STATE(12)] = 378,
  [SMALL_STATE(13)] = 418,
  [SMALL_STATE(14)] = 452,
  [SMALL_STATE(15)] = 486,
  [SMALL_STATE(16)] = 520,
  [SMALL_STATE(17)] = 554,
  [SMALL_STATE(18)] = 588,
  [SMALL_STATE(19)] = 622,
  [SMALL_STATE(20)] = 656,
  [SMALL_STATE(21)] = 690,
  [SMALL_STATE(22)] = 731,
  [SMALL_STATE(23)] = 766,
  [SMALL_STATE(24)] = 819,
  [SMALL_STATE(25)] = 854,
  [SMALL_STATE(26)] = 907,
  [SMALL_STATE(27)] = 960,
  [SMALL_STATE(28)] = 1013,
  [SMALL_STATE(29)] = 1066,
  [SMALL_STATE(30)] = 1101,
  [SMALL_STATE(31)] = 1134,
  [SMALL_STATE(32)] = 1164,
  [SMALL_STATE(33)] = 1194,
  [SMALL_STATE(34)] = 1224,
  [SMALL_STATE(35)] = 1253,
  [SMALL_STATE(36)] = 1282,
  [SMALL_STATE(37)] = 1311,
  [SMALL_STATE(38)] = 1340,
  [SMALL_STATE(39)] = 1369,
  [SMALL_STATE(40)] = 1398,
  [SMALL_STATE(41)] = 1427,
  [SMALL_STATE(42)] = 1456,
  [SMALL_STATE(43)] = 1491,
  [SMALL_STATE(44)] = 1536,
  [SMALL_STATE(45)] = 1567,
  [SMALL_STATE(46)] = 1602,
  [SMALL_STATE(47)] = 1647,
  [SMALL_STATE(48)] = 1682,
  [SMALL_STATE(49)] = 1726,
  [SMALL_STATE(50)] = 1770,
  [SMALL_STATE(51)] = 1799,
  [SMALL_STATE(52)] = 1828,
  [SMALL_STATE(53)] = 1857,
  [SMALL_STATE(54)] = 1886,
  [SMALL_STATE(55)] = 1915,
  [SMALL_STATE(56)] = 1944,
  [SMALL_STATE(57)] = 1973,
  [SMALL_STATE(58)] = 2002,
  [SMALL_STATE(59)] = 2037,
  [SMALL_STATE(60)] = 2072,
  [SMALL_STATE(61)] = 2107,
  [SMALL_STATE(62)] = 2142,
  [SMALL_STATE(63)] = 2177,
  [SMALL_STATE(64)] = 2212,
  [SMALL_STATE(65)] = 2247,
  [SMALL_STATE(66)] = 2282,
  [SMALL_STATE(67)] = 2317,
  [SMALL_STATE(68)] = 2352,
  [SMALL_STATE(69)] = 2387,
  [SMALL_STATE(70)] = 2422,
  [SMALL_STATE(71)] = 2440,
  [SMALL_STATE(72)] = 2458,
  [SMALL_STATE(73)] = 2476,
  [SMALL_STATE(74)] = 2501,
  [SMALL_STATE(75)] = 2526,
  [SMALL_STATE(76)] = 2545,
  [SMALL_STATE(77)] = 2570,
  [SMALL_STATE(78)] = 2586,
  [SMALL_STATE(79)] = 2596,
  [SMALL_STATE(80)] = 2610,
  [SMALL_STATE(81)] = 2620,
  [SMALL_STATE(82)] = 2630,
  [SMALL_STATE(83)] = 2640,
  [SMALL_STATE(84)] = 2650,
  [SMALL_STATE(85)] = 2666,
  [SMALL_STATE(86)] = 2680,
  [SMALL_STATE(87)] = 2694,
  [SMALL_STATE(88)] = 2704,
  [SMALL_STATE(89)] = 2714,
  [SMALL_STATE(90)] = 2728,
  [SMALL_STATE(91)] = 2742,
  [SMALL_STATE(92)] = 2756,
  [SMALL_STATE(93)] = 2769,
  [SMALL_STATE(94)] = 2782,
  [SMALL_STATE(95)] = 2795,
  [SMALL_STATE(96)] = 2808,
  [SMALL_STATE(97)] = 2821,
  [SMALL_STATE(98)] = 2834,
  [SMALL_STATE(99)] = 2847,
  [SMALL_STATE(100)] = 2860,
  [SMALL_STATE(101)] = 2873,
  [SMALL_STATE(102)] = 2886,
  [SMALL_STATE(103)] = 2899,
  [SMALL_STATE(104)] = 2912,
  [SMALL_STATE(105)] = 2925,
  [SMALL_STATE(106)] = 2938,
  [SMALL_STATE(107)] = 2951,
  [SMALL_STATE(108)] = 2962,
  [SMALL_STATE(109)] = 2975,
  [SMALL_STATE(110)] = 2988,
  [SMALL_STATE(111)] = 3001,
  [SMALL_STATE(112)] = 3014,
  [SMALL_STATE(113)] = 3027,
  [SMALL_STATE(114)] = 3037,
  [SMALL_STATE(115)] = 3047,
  [SMALL_STATE(116)] = 3057,
  [SMALL_STATE(117)] = 3067,
  [SMALL_STATE(118)] = 3075,
  [SMALL_STATE(119)] = 3085,
  [SMALL_STATE(120)] = 3095,
  [SMALL_STATE(121)] = 3105,
  [SMALL_STATE(122)] = 3113,
  [SMALL_STATE(123)] = 3123,
  [SMALL_STATE(124)] = 3133,
  [SMALL_STATE(125)] = 3143,
  [SMALL_STATE(126)] = 3153,
  [SMALL_STATE(127)] = 3163,
  [SMALL_STATE(128)] = 3171,
  [SMALL_STATE(129)] = 3178,
  [SMALL_STATE(130)] = 3185,
  [SMALL_STATE(131)] = 3192,
  [SMALL_STATE(132)] = 3199,
  [SMALL_STATE(133)] = 3206,
  [SMALL_STATE(134)] = 3213,
  [SMALL_STATE(135)] = 3220,
  [SMALL_STATE(136)] = 3227,
  [SMALL_STATE(137)] = 3234,
  [SMALL_STATE(138)] = 3241,
  [SMALL_STATE(139)] = 3248,
  [SMALL_STATE(140)] = 3255,
  [SMALL_STATE(141)] = 3262,
  [SMALL_STATE(142)] = 3269,
  [SMALL_STATE(143)] = 3276,
  [SMALL_STATE(144)] = 3283,
  [SMALL_STATE(145)] = 3290,
  [SMALL_STATE(146)] = 3297,
  [SMALL_STATE(147)] = 3304,
  [SMALL_STATE(148)] = 3311,
  [SMALL_STATE(149)] = 3318,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_access_repeat1, 2, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_field_access_repeat1, 2, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_access_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_access, 2, 0, 0),
  [28] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_access, 2, 0, 0),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 0),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, 0, 0),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, 0, 0),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, 0, 0),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ternary_expression, 5, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ternary_expression, 5, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_call, 4, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_call, 4, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 4, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_access_repeat1, 2, 0, 0), SHIFT_REPEAT(101),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_declaration_repeat1, 2, 0, 0),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(114),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 1, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 5, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_match_block_repeat1, 2, 0, 0),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_block_repeat1, 2, 0, 0), SHIFT_REPEAT(125),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_block_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_block_repeat1, 2, 0, 0), SHIFT_REPEAT(122),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 8, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_service_declaration_repeat1, 2, 0, 0),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(125),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 1, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_block, 5, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_block, 4, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 6, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_allow_rule, 6, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 7, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 1, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_database_path, 3, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operation_list_repeat1, 2, 0, 0),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operation_list_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation_list, 2, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 3, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_database_path, 2, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2, 0, 0),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0), SHIFT_REPEAT(123),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation_list, 1, 0, 0),
  [280] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_database_path_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_database_path_repeat1, 2, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0),
  [287] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_database_path_repeat1, 2, 0, 0),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation, 1, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_segment, 3, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_segment, 3, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_database_path_repeat1, 4, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_database_path_repeat1, 4, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_segment, 4, 0, 0),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_segment, 4, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service_declaration, 5, 0, 0),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service_declaration, 4, 0, 0),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_declaration, 4, 0, 0),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service_name, 1, 0, 0),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [360] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_firebase_rules(void) {
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
