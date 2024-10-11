#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 79
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 63
#define ALIAS_COUNT 0
#define TOKEN_COUNT 39
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_rules_version = 1,
  anon_sym_EQ = 2,
  anon_sym_SEMI = 3,
  anon_sym_service = 4,
  anon_sym_LBRACE = 5,
  anon_sym_RBRACE = 6,
  anon_sym_match = 7,
  sym_path = 8,
  anon_sym_allow = 9,
  anon_sym_COLON = 10,
  anon_sym_if = 11,
  anon_sym_COMMA = 12,
  anon_sym_read = 13,
  anon_sym_write = 14,
  anon_sym_create = 15,
  anon_sym_update = 16,
  anon_sym_delete = 17,
  anon_sym_get = 18,
  anon_sym_list = 19,
  anon_sym_function = 20,
  anon_sym_LPAREN = 21,
  anon_sym_RPAREN = 22,
  anon_sym_let = 23,
  anon_sym_const = 24,
  anon_sym_return = 25,
  anon_sym_AMP_AMP = 26,
  anon_sym_PIPE_PIPE = 27,
  anon_sym_EQ_EQ = 28,
  anon_sym_BANG_EQ = 29,
  anon_sym_LT = 30,
  anon_sym_GT = 31,
  anon_sym_LT_EQ = 32,
  anon_sym_GT_EQ = 33,
  sym_identifier = 34,
  sym_string = 35,
  sym_number = 36,
  anon_sym_true = 37,
  anon_sym_false = 38,
  sym_source_file = 39,
  sym_rule_declaration = 40,
  sym_match_block = 41,
  sym_rule = 42,
  sym_allow_rule = 43,
  sym_operation_list = 44,
  sym_operation = 45,
  sym_function_declaration = 46,
  sym_parameter_list = 47,
  sym_statement = 48,
  sym_variable_declaration = 49,
  sym_return_statement = 50,
  sym_expression = 51,
  sym_binary_expression = 52,
  sym_function_call = 53,
  sym_argument_list = 54,
  sym_boolean = 55,
  aux_sym_source_file_repeat1 = 56,
  aux_sym_rule_declaration_repeat1 = 57,
  aux_sym_match_block_repeat1 = 58,
  aux_sym_operation_list_repeat1 = 59,
  aux_sym_function_declaration_repeat1 = 60,
  aux_sym_parameter_list_repeat1 = 61,
  aux_sym_argument_list_repeat1 = 62,
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
  [sym_path] = "path",
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
  [sym_identifier] = "identifier",
  [sym_string] = "string",
  [sym_number] = "number",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_source_file] = "source_file",
  [sym_rule_declaration] = "rule_declaration",
  [sym_match_block] = "match_block",
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
  [sym_function_call] = "function_call",
  [sym_argument_list] = "argument_list",
  [sym_boolean] = "boolean",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_rule_declaration_repeat1] = "rule_declaration_repeat1",
  [aux_sym_match_block_repeat1] = "match_block_repeat1",
  [aux_sym_operation_list_repeat1] = "operation_list_repeat1",
  [aux_sym_function_declaration_repeat1] = "function_declaration_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
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
  [sym_path] = sym_path,
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
  [sym_identifier] = sym_identifier,
  [sym_string] = sym_string,
  [sym_number] = sym_number,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_source_file] = sym_source_file,
  [sym_rule_declaration] = sym_rule_declaration,
  [sym_match_block] = sym_match_block,
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
  [sym_function_call] = sym_function_call,
  [sym_argument_list] = sym_argument_list,
  [sym_boolean] = sym_boolean,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_rule_declaration_repeat1] = aux_sym_rule_declaration_repeat1,
  [aux_sym_match_block_repeat1] = aux_sym_match_block_repeat1,
  [aux_sym_operation_list_repeat1] = aux_sym_operation_list_repeat1,
  [aux_sym_function_declaration_repeat1] = aux_sym_function_declaration_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
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
  [sym_path] = {
    .visible = true,
    .named = true,
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
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
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_match_block] = {
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
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rule_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_match_block_repeat1] = {
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
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
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
  [45] = 45,
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
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(84);
      ADVANCE_MAP(
        '!', 7,
        '"', 3,
        '&', 4,
        '\'', 5,
        '(', 106,
        ')', 107,
        ',', 97,
        '/', 83,
        ':', 95,
        ';', 88,
        '<', 118,
        '=', 87,
        '>', 119,
        'a', 43,
        'c', 52,
        'd', 30,
        'f', 12,
        'g', 20,
        'i', 36,
        'l', 29,
        'm', 11,
        'r', 21,
        's', 31,
        't', 57,
        'u', 56,
        'w', 58,
        '{', 90,
        '|', 82,
        '}', 91,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '!', 7,
        '"', 3,
        '&', 4,
        '\'', 5,
        '(', 106,
        ')', 107,
        ',', 97,
        ';', 88,
        '<', 118,
        '=', 8,
        '>', 119,
        'c', 130,
        'f', 122,
        'l', 123,
        'r', 126,
        't', 131,
        '|', 82,
        '}', 91,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == ')') ADVANCE(107);
      if (lookahead == '=') ADVANCE(86);
      if (lookahead == 'f') ADVANCE(122);
      if (lookahead == 't') ADVANCE(131);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(141);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '&') ADVANCE(114);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(141);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == ')') ADVANCE(107);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(117);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(116);
      END_STATE();
    case 9:
      if (lookahead == '_') ADVANCE(80);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(18);
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(44);
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(37);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(72);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(28);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(98);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(14);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(10);
      if (lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(68);
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 36:
      if (lookahead == 'f') ADVANCE(96);
      END_STATE();
    case 37:
      if (lookahead == 'h') ADVANCE(92);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(51);
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 55:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 56:
      if (lookahead == 'p') ADVANCE(19);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 62:
      if (lookahead == 's') ADVANCE(9);
      END_STATE();
    case 63:
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 64:
      if (lookahead == 's') ADVANCE(70);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 66:
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 77:
      if (lookahead == 'u') ADVANCE(60);
      END_STATE();
    case 78:
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 79:
      if (lookahead == 'v') ADVANCE(39);
      END_STATE();
    case 80:
      if (lookahead == 'v') ADVANCE(33);
      END_STATE();
    case 81:
      if (lookahead == 'w') ADVANCE(94);
      END_STATE();
    case 82:
      if (lookahead == '|') ADVANCE(115);
      END_STATE();
    case 83:
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(93);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_rules_version);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(116);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_service);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_path);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_allow);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_read);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_write);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_create);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_update);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_get);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_list);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_const);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(120);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(121);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
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
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
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
    [sym_path] = ACTIONS(1),
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
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(78),
    [sym_rule_declaration] = STATE(35),
    [aux_sym_source_file_repeat1] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_rules_version] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 8,
      anon_sym_let,
      anon_sym_const,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(7), 12,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_string,
      sym_number,
  [28] = 2,
    ACTIONS(15), 8,
      anon_sym_let,
      anon_sym_const,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(13), 12,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_string,
      sym_number,
  [53] = 2,
    ACTIONS(19), 8,
      anon_sym_let,
      anon_sym_const,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(17), 12,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_string,
      sym_number,
  [78] = 2,
    ACTIONS(23), 8,
      anon_sym_let,
      anon_sym_const,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(21), 12,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_string,
      sym_number,
  [103] = 2,
    ACTIONS(27), 8,
      anon_sym_let,
      anon_sym_const,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 12,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_string,
      sym_number,
  [128] = 2,
    ACTIONS(11), 8,
      anon_sym_let,
      anon_sym_const,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(7), 12,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_string,
      sym_number,
  [153] = 10,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(9), 1,
      sym_expression,
    ACTIONS(31), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(37), 2,
      sym_string,
      sym_number,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(10), 2,
      sym_statement,
      aux_sym_function_declaration_repeat1,
    STATE(22), 2,
      sym_variable_declaration,
      sym_return_statement,
    STATE(7), 3,
      sym_binary_expression,
      sym_function_call,
      sym_boolean,
  [191] = 4,
    ACTIONS(47), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 3,
      anon_sym_RBRACE,
      sym_string,
      sym_number,
    ACTIONS(43), 6,
      anon_sym_let,
      anon_sym_const,
      anon_sym_return,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 6,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [217] = 10,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    STATE(9), 1,
      sym_expression,
    ACTIONS(31), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(37), 2,
      sym_string,
      sym_number,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(13), 2,
      sym_statement,
      aux_sym_function_declaration_repeat1,
    STATE(22), 2,
      sym_variable_declaration,
      sym_return_statement,
    STATE(7), 3,
      sym_binary_expression,
      sym_function_call,
      sym_boolean,
  [255] = 10,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    STATE(9), 1,
      sym_expression,
    ACTIONS(31), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(37), 2,
      sym_string,
      sym_number,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(12), 2,
      sym_statement,
      aux_sym_function_declaration_repeat1,
    STATE(22), 2,
      sym_variable_declaration,
      sym_return_statement,
    STATE(7), 3,
      sym_binary_expression,
      sym_function_call,
      sym_boolean,
  [293] = 10,
    ACTIONS(33), 1,
      anon_sym_return,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    STATE(9), 1,
      sym_expression,
    ACTIONS(31), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(37), 2,
      sym_string,
      sym_number,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(13), 2,
      sym_statement,
      aux_sym_function_declaration_repeat1,
    STATE(22), 2,
      sym_variable_declaration,
      sym_return_statement,
    STATE(7), 3,
      sym_binary_expression,
      sym_function_call,
      sym_boolean,
  [331] = 10,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    ACTIONS(58), 1,
      anon_sym_return,
    ACTIONS(61), 1,
      sym_identifier,
    STATE(9), 1,
      sym_expression,
    ACTIONS(55), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(64), 2,
      sym_string,
      sym_number,
    ACTIONS(67), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(13), 2,
      sym_statement,
      aux_sym_function_declaration_repeat1,
    STATE(22), 2,
      sym_variable_declaration,
      sym_return_statement,
    STATE(7), 3,
      sym_binary_expression,
      sym_function_call,
      sym_boolean,
  [369] = 7,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(70), 1,
      anon_sym_RPAREN,
    STATE(15), 1,
      sym_expression,
    STATE(62), 1,
      sym_argument_list,
    ACTIONS(37), 2,
      sym_string,
      sym_number,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(7), 3,
      sym_binary_expression,
      sym_function_call,
      sym_boolean,
  [395] = 5,
    ACTIONS(72), 1,
      anon_sym_COMMA,
    ACTIONS(74), 1,
      anon_sym_RPAREN,
    STATE(46), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(47), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(45), 6,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [417] = 3,
    ACTIONS(47), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(76), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(45), 6,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [434] = 6,
    ACTIONS(78), 1,
      anon_sym_RBRACE,
    ACTIONS(80), 1,
      anon_sym_match,
    ACTIONS(82), 1,
      anon_sym_allow,
    ACTIONS(84), 1,
      anon_sym_function,
    STATE(28), 2,
      sym_rule,
      aux_sym_match_block_repeat1,
    STATE(36), 3,
      sym_match_block,
      sym_allow_rule,
      sym_function_declaration,
  [456] = 5,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(3), 1,
      sym_expression,
    ACTIONS(37), 2,
      sym_string,
      sym_number,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(7), 3,
      sym_binary_expression,
      sym_function_call,
      sym_boolean,
  [476] = 3,
    ACTIONS(86), 1,
      anon_sym_SEMI,
    ACTIONS(47), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(45), 6,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [492] = 3,
    STATE(49), 1,
      sym_operation,
    STATE(63), 1,
      sym_operation_list,
    ACTIONS(88), 7,
      anon_sym_read,
      anon_sym_write,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_get,
      anon_sym_list,
  [508] = 3,
    ACTIONS(90), 1,
      anon_sym_SEMI,
    ACTIONS(47), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(45), 6,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [524] = 2,
    ACTIONS(41), 3,
      anon_sym_RBRACE,
      sym_string,
      sym_number,
    ACTIONS(43), 6,
      anon_sym_let,
      anon_sym_const,
      anon_sym_return,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
  [538] = 6,
    ACTIONS(80), 1,
      anon_sym_match,
    ACTIONS(82), 1,
      anon_sym_allow,
    ACTIONS(84), 1,
      anon_sym_function,
    ACTIONS(92), 1,
      anon_sym_RBRACE,
    STATE(17), 2,
      sym_rule,
      aux_sym_match_block_repeat1,
    STATE(36), 3,
      sym_match_block,
      sym_allow_rule,
      sym_function_declaration,
  [560] = 5,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(19), 1,
      sym_expression,
    ACTIONS(37), 2,
      sym_string,
      sym_number,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(7), 3,
      sym_binary_expression,
      sym_function_call,
      sym_boolean,
  [580] = 5,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(21), 1,
      sym_expression,
    ACTIONS(37), 2,
      sym_string,
      sym_number,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(7), 3,
      sym_binary_expression,
      sym_function_call,
      sym_boolean,
  [600] = 2,
    ACTIONS(94), 3,
      anon_sym_RBRACE,
      sym_string,
      sym_number,
    ACTIONS(96), 6,
      anon_sym_let,
      anon_sym_const,
      anon_sym_return,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
  [614] = 5,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(16), 1,
      sym_expression,
    ACTIONS(37), 2,
      sym_string,
      sym_number,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(7), 3,
      sym_binary_expression,
      sym_function_call,
      sym_boolean,
  [634] = 6,
    ACTIONS(98), 1,
      anon_sym_RBRACE,
    ACTIONS(100), 1,
      anon_sym_match,
    ACTIONS(103), 1,
      anon_sym_allow,
    ACTIONS(106), 1,
      anon_sym_function,
    STATE(28), 2,
      sym_rule,
      aux_sym_match_block_repeat1,
    STATE(36), 3,
      sym_match_block,
      sym_allow_rule,
      sym_function_declaration,
  [656] = 3,
    ACTIONS(109), 1,
      anon_sym_SEMI,
    ACTIONS(47), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(45), 6,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [672] = 5,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(29), 1,
      sym_expression,
    ACTIONS(37), 2,
      sym_string,
      sym_number,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(7), 3,
      sym_binary_expression,
      sym_function_call,
      sym_boolean,
  [692] = 2,
    ACTIONS(111), 3,
      anon_sym_RBRACE,
      sym_string,
      sym_number,
    ACTIONS(113), 6,
      anon_sym_let,
      anon_sym_const,
      anon_sym_return,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
  [706] = 2,
    STATE(55), 1,
      sym_operation,
    ACTIONS(88), 7,
      anon_sym_read,
      anon_sym_write,
      anon_sym_create,
      anon_sym_update,
      anon_sym_delete,
      anon_sym_get,
      anon_sym_list,
  [719] = 3,
    ACTIONS(80), 1,
      anon_sym_match,
    ACTIONS(115), 1,
      anon_sym_RBRACE,
    STATE(42), 2,
      sym_match_block,
      aux_sym_rule_declaration_repeat1,
  [730] = 1,
    ACTIONS(117), 4,
      anon_sym_RBRACE,
      anon_sym_match,
      anon_sym_allow,
      anon_sym_function,
  [737] = 3,
    ACTIONS(5), 1,
      anon_sym_rules_version,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    STATE(44), 2,
      sym_rule_declaration,
      aux_sym_source_file_repeat1,
  [748] = 1,
    ACTIONS(121), 4,
      anon_sym_RBRACE,
      anon_sym_match,
      anon_sym_allow,
      anon_sym_function,
  [755] = 1,
    ACTIONS(123), 4,
      anon_sym_RBRACE,
      anon_sym_match,
      anon_sym_allow,
      anon_sym_function,
  [762] = 1,
    ACTIONS(125), 4,
      anon_sym_RBRACE,
      anon_sym_match,
      anon_sym_allow,
      anon_sym_function,
  [769] = 1,
    ACTIONS(127), 4,
      anon_sym_RBRACE,
      anon_sym_match,
      anon_sym_allow,
      anon_sym_function,
  [776] = 3,
    ACTIONS(129), 1,
      anon_sym_RBRACE,
    ACTIONS(131), 1,
      anon_sym_match,
    STATE(40), 2,
      sym_match_block,
      aux_sym_rule_declaration_repeat1,
  [787] = 1,
    ACTIONS(134), 4,
      anon_sym_RBRACE,
      anon_sym_match,
      anon_sym_allow,
      anon_sym_function,
  [794] = 3,
    ACTIONS(80), 1,
      anon_sym_match,
    ACTIONS(136), 1,
      anon_sym_RBRACE,
    STATE(40), 2,
      sym_match_block,
      aux_sym_rule_declaration_repeat1,
  [805] = 1,
    ACTIONS(138), 4,
      anon_sym_RBRACE,
      anon_sym_match,
      anon_sym_allow,
      anon_sym_function,
  [812] = 3,
    ACTIONS(140), 1,
      ts_builtin_sym_end,
    ACTIONS(142), 1,
      anon_sym_rules_version,
    STATE(44), 2,
      sym_rule_declaration,
      aux_sym_source_file_repeat1,
  [823] = 3,
    ACTIONS(145), 1,
      anon_sym_COMMA,
    ACTIONS(148), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      aux_sym_parameter_list_repeat1,
  [833] = 3,
    ACTIONS(72), 1,
      anon_sym_COMMA,
    ACTIONS(150), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      aux_sym_argument_list_repeat1,
  [843] = 3,
    ACTIONS(76), 1,
      anon_sym_RPAREN,
    ACTIONS(152), 1,
      anon_sym_COMMA,
    STATE(47), 1,
      aux_sym_argument_list_repeat1,
  [853] = 3,
    ACTIONS(155), 1,
      anon_sym_COMMA,
    ACTIONS(157), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      aux_sym_parameter_list_repeat1,
  [863] = 3,
    ACTIONS(159), 1,
      anon_sym_COLON,
    ACTIONS(161), 1,
      anon_sym_COMMA,
    STATE(50), 1,
      aux_sym_operation_list_repeat1,
  [873] = 3,
    ACTIONS(161), 1,
      anon_sym_COMMA,
    ACTIONS(163), 1,
      anon_sym_COLON,
    STATE(53), 1,
      aux_sym_operation_list_repeat1,
  [883] = 3,
    ACTIONS(155), 1,
      anon_sym_COMMA,
    ACTIONS(165), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      aux_sym_parameter_list_repeat1,
  [893] = 3,
    ACTIONS(167), 1,
      anon_sym_RPAREN,
    ACTIONS(169), 1,
      sym_identifier,
    STATE(71), 1,
      sym_parameter_list,
  [903] = 3,
    ACTIONS(171), 1,
      anon_sym_COLON,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    STATE(53), 1,
      aux_sym_operation_list_repeat1,
  [913] = 1,
    ACTIONS(176), 2,
      anon_sym_COLON,
      anon_sym_COMMA,
  [918] = 1,
    ACTIONS(171), 2,
      anon_sym_COLON,
      anon_sym_COMMA,
  [923] = 1,
    ACTIONS(178), 2,
      ts_builtin_sym_end,
      anon_sym_rules_version,
  [928] = 1,
    ACTIONS(148), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [933] = 1,
    ACTIONS(180), 2,
      ts_builtin_sym_end,
      anon_sym_rules_version,
  [938] = 1,
    ACTIONS(182), 1,
      sym_identifier,
  [942] = 1,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
  [946] = 1,
    ACTIONS(186), 1,
      anon_sym_EQ,
  [950] = 1,
    ACTIONS(188), 1,
      anon_sym_RPAREN,
  [954] = 1,
    ACTIONS(190), 1,
      anon_sym_COLON,
  [958] = 1,
    ACTIONS(192), 1,
      anon_sym_EQ,
  [962] = 1,
    ACTIONS(194), 1,
      sym_identifier,
  [966] = 1,
    ACTIONS(196), 1,
      anon_sym_LBRACE,
  [970] = 1,
    ACTIONS(198), 1,
      anon_sym_if,
  [974] = 1,
    ACTIONS(200), 1,
      anon_sym_LBRACE,
  [978] = 1,
    ACTIONS(202), 1,
      sym_path,
  [982] = 1,
    ACTIONS(204), 1,
      sym_identifier,
  [986] = 1,
    ACTIONS(206), 1,
      anon_sym_RPAREN,
  [990] = 1,
    ACTIONS(208), 1,
      anon_sym_LBRACE,
  [994] = 1,
    ACTIONS(210), 1,
      sym_identifier,
  [998] = 1,
    ACTIONS(212), 1,
      anon_sym_service,
  [1002] = 1,
    ACTIONS(214), 1,
      anon_sym_SEMI,
  [1006] = 1,
    ACTIONS(216), 1,
      anon_sym_LBRACE,
  [1010] = 1,
    ACTIONS(218), 1,
      sym_string,
  [1014] = 1,
    ACTIONS(220), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 53,
  [SMALL_STATE(5)] = 78,
  [SMALL_STATE(6)] = 103,
  [SMALL_STATE(7)] = 128,
  [SMALL_STATE(8)] = 153,
  [SMALL_STATE(9)] = 191,
  [SMALL_STATE(10)] = 217,
  [SMALL_STATE(11)] = 255,
  [SMALL_STATE(12)] = 293,
  [SMALL_STATE(13)] = 331,
  [SMALL_STATE(14)] = 369,
  [SMALL_STATE(15)] = 395,
  [SMALL_STATE(16)] = 417,
  [SMALL_STATE(17)] = 434,
  [SMALL_STATE(18)] = 456,
  [SMALL_STATE(19)] = 476,
  [SMALL_STATE(20)] = 492,
  [SMALL_STATE(21)] = 508,
  [SMALL_STATE(22)] = 524,
  [SMALL_STATE(23)] = 538,
  [SMALL_STATE(24)] = 560,
  [SMALL_STATE(25)] = 580,
  [SMALL_STATE(26)] = 600,
  [SMALL_STATE(27)] = 614,
  [SMALL_STATE(28)] = 634,
  [SMALL_STATE(29)] = 656,
  [SMALL_STATE(30)] = 672,
  [SMALL_STATE(31)] = 692,
  [SMALL_STATE(32)] = 706,
  [SMALL_STATE(33)] = 719,
  [SMALL_STATE(34)] = 730,
  [SMALL_STATE(35)] = 737,
  [SMALL_STATE(36)] = 748,
  [SMALL_STATE(37)] = 755,
  [SMALL_STATE(38)] = 762,
  [SMALL_STATE(39)] = 769,
  [SMALL_STATE(40)] = 776,
  [SMALL_STATE(41)] = 787,
  [SMALL_STATE(42)] = 794,
  [SMALL_STATE(43)] = 805,
  [SMALL_STATE(44)] = 812,
  [SMALL_STATE(45)] = 823,
  [SMALL_STATE(46)] = 833,
  [SMALL_STATE(47)] = 843,
  [SMALL_STATE(48)] = 853,
  [SMALL_STATE(49)] = 863,
  [SMALL_STATE(50)] = 873,
  [SMALL_STATE(51)] = 883,
  [SMALL_STATE(52)] = 893,
  [SMALL_STATE(53)] = 903,
  [SMALL_STATE(54)] = 913,
  [SMALL_STATE(55)] = 918,
  [SMALL_STATE(56)] = 923,
  [SMALL_STATE(57)] = 928,
  [SMALL_STATE(58)] = 933,
  [SMALL_STATE(59)] = 938,
  [SMALL_STATE(60)] = 942,
  [SMALL_STATE(61)] = 946,
  [SMALL_STATE(62)] = 950,
  [SMALL_STATE(63)] = 954,
  [SMALL_STATE(64)] = 958,
  [SMALL_STATE(65)] = 962,
  [SMALL_STATE(66)] = 966,
  [SMALL_STATE(67)] = 970,
  [SMALL_STATE(68)] = 974,
  [SMALL_STATE(69)] = 978,
  [SMALL_STATE(70)] = 982,
  [SMALL_STATE(71)] = 986,
  [SMALL_STATE(72)] = 990,
  [SMALL_STATE(73)] = 994,
  [SMALL_STATE(74)] = 998,
  [SMALL_STATE(75)] = 1002,
  [SMALL_STATE(76)] = 1006,
  [SMALL_STATE(77)] = 1010,
  [SMALL_STATE(78)] = 1014,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_declaration_repeat1, 2, 0, 0),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 1, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 5, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_match_block_repeat1, 2, 0, 0),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_block_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_block_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_block_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_block, 5, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 1, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 6, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_block, 4, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_allow_rule, 6, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_declaration_repeat1, 2, 0, 0),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(69),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 7, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 8, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2, 0, 0),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation_list, 1, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation_list, 2, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 1, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operation_list_repeat1, 2, 0, 0),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operation_list_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation, 1, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_declaration, 8, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_declaration, 9, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [220] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
