#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 88
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 82
#define ALIAS_COUNT 0
#define TOKEN_COUNT 57
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_name = 1,
  anon_sym_SEMI = 2,
  sym_comment = 3,
  sym_identifier = 4,
  anon_sym_const = 5,
  anon_sym_BANG = 6,
  anon_sym_bool = 7,
  anon_sym_done = 8,
  anon_sym_never = 9,
  anon_sym_opaque = 10,
  anon_sym_rune = 11,
  anon_sym_str = 12,
  anon_sym_valist = 13,
  anon_sym_void = 14,
  anon_sym_i8 = 15,
  anon_sym_i16 = 16,
  anon_sym_i32 = 17,
  anon_sym_i64 = 18,
  anon_sym_u8 = 19,
  anon_sym_u16 = 20,
  anon_sym_u32 = 21,
  anon_sym_u64 = 22,
  anon_sym_int = 23,
  anon_sym_uint = 24,
  anon_sym_size = 25,
  anon_sym_uintptr = 26,
  anon_sym_f32 = 27,
  anon_sym_f64 = 28,
  anon_sym_nullable = 29,
  anon_sym_STAR = 30,
  anon_sym_true = 31,
  anon_sym_false = 32,
  anon_sym_null = 33,
  sym_integer_literal = 34,
  sym_floating_literal = 35,
  anon_sym_SQUOTE = 36,
  aux_sym_rune_literal_token1 = 37,
  anon_sym_SQUOTE2 = 38,
  sym_escape_sequence = 39,
  anon_sym_DQUOTE = 40,
  aux_sym_string_section_token1 = 41,
  anon_sym_DQUOTE2 = 42,
  sym_raw_string_section = 43,
  anon_sym_export = 44,
  anon_sym_let = 45,
  anon_sym_COMMA = 46,
  anon_sym_ATthreadlocal = 47,
  anon_sym_COLON = 48,
  anon_sym_EQ = 49,
  anon_sym_ATsymbol = 50,
  anon_sym_LPAREN = 51,
  anon_sym_RPAREN = 52,
  anon_sym_use = 53,
  anon_sym_COLON_COLON = 54,
  anon_sym_LBRACE = 55,
  anon_sym_RBRACE = 56,
  sym_source_file = 57,
  sym__import_or_declaration = 58,
  sym_type = 59,
  sym__storage_class = 60,
  sym__primitive_type = 61,
  sym__integer_type = 62,
  sym__floating_type = 63,
  sym_pointer_type = 64,
  sym__expression = 65,
  sym_expression = 66,
  sym__plain_expression = 67,
  sym_literal = 68,
  sym_rune_literal = 69,
  sym_string_literal = 70,
  sym_string_section = 71,
  sym_declaration = 72,
  sym_global_declaration = 73,
  sym_global_binding = 74,
  sym_decl_attr = 75,
  sym_use_directive = 76,
  aux_sym_source_file_repeat1 = 77,
  aux_sym_string_literal_repeat1 = 78,
  aux_sym_string_section_repeat1 = 79,
  aux_sym_global_declaration_repeat1 = 80,
  aux_sym_use_directive_repeat1 = 81,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_name] = "name",
  [anon_sym_SEMI] = ";",
  [sym_comment] = "comment",
  [sym_identifier] = "identifier",
  [anon_sym_const] = "const",
  [anon_sym_BANG] = "!",
  [anon_sym_bool] = "bool",
  [anon_sym_done] = "done",
  [anon_sym_never] = "never",
  [anon_sym_opaque] = "opaque",
  [anon_sym_rune] = "rune",
  [anon_sym_str] = "str",
  [anon_sym_valist] = "valist",
  [anon_sym_void] = "void",
  [anon_sym_i8] = "i8",
  [anon_sym_i16] = "i16",
  [anon_sym_i32] = "i32",
  [anon_sym_i64] = "i64",
  [anon_sym_u8] = "u8",
  [anon_sym_u16] = "u16",
  [anon_sym_u32] = "u32",
  [anon_sym_u64] = "u64",
  [anon_sym_int] = "int",
  [anon_sym_uint] = "uint",
  [anon_sym_size] = "size",
  [anon_sym_uintptr] = "uintptr",
  [anon_sym_f32] = "f32",
  [anon_sym_f64] = "f64",
  [anon_sym_nullable] = "nullable",
  [anon_sym_STAR] = "*",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_null] = "null",
  [sym_integer_literal] = "integer_literal",
  [sym_floating_literal] = "floating_literal",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_rune_literal_token1] = "rune_literal_token1",
  [anon_sym_SQUOTE2] = "'",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_section_token1] = "string_section_token1",
  [anon_sym_DQUOTE2] = "\"",
  [sym_raw_string_section] = "raw_string_section",
  [anon_sym_export] = "export",
  [anon_sym_let] = "let",
  [anon_sym_COMMA] = ",",
  [anon_sym_ATthreadlocal] = "@threadlocal",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
  [anon_sym_ATsymbol] = "@symbol",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_use] = "use",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_source_file] = "source_file",
  [sym__import_or_declaration] = "_import_or_declaration",
  [sym_type] = "type",
  [sym__storage_class] = "_storage_class",
  [sym__primitive_type] = "_primitive_type",
  [sym__integer_type] = "_integer_type",
  [sym__floating_type] = "_floating_type",
  [sym_pointer_type] = "pointer_type",
  [sym__expression] = "_expression",
  [sym_expression] = "expression",
  [sym__plain_expression] = "_plain_expression",
  [sym_literal] = "literal",
  [sym_rune_literal] = "rune_literal",
  [sym_string_literal] = "string_literal",
  [sym_string_section] = "string_section",
  [sym_declaration] = "declaration",
  [sym_global_declaration] = "global_declaration",
  [sym_global_binding] = "global_binding",
  [sym_decl_attr] = "decl_attr",
  [sym_use_directive] = "use_directive",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [aux_sym_string_section_repeat1] = "string_section_repeat1",
  [aux_sym_global_declaration_repeat1] = "global_declaration_repeat1",
  [aux_sym_use_directive_repeat1] = "use_directive_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_name] = sym_name,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_comment] = sym_comment,
  [sym_identifier] = sym_identifier,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_done] = anon_sym_done,
  [anon_sym_never] = anon_sym_never,
  [anon_sym_opaque] = anon_sym_opaque,
  [anon_sym_rune] = anon_sym_rune,
  [anon_sym_str] = anon_sym_str,
  [anon_sym_valist] = anon_sym_valist,
  [anon_sym_void] = anon_sym_void,
  [anon_sym_i8] = anon_sym_i8,
  [anon_sym_i16] = anon_sym_i16,
  [anon_sym_i32] = anon_sym_i32,
  [anon_sym_i64] = anon_sym_i64,
  [anon_sym_u8] = anon_sym_u8,
  [anon_sym_u16] = anon_sym_u16,
  [anon_sym_u32] = anon_sym_u32,
  [anon_sym_u64] = anon_sym_u64,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_uint] = anon_sym_uint,
  [anon_sym_size] = anon_sym_size,
  [anon_sym_uintptr] = anon_sym_uintptr,
  [anon_sym_f32] = anon_sym_f32,
  [anon_sym_f64] = anon_sym_f64,
  [anon_sym_nullable] = anon_sym_nullable,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_null] = anon_sym_null,
  [sym_integer_literal] = sym_integer_literal,
  [sym_floating_literal] = sym_floating_literal,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_rune_literal_token1] = aux_sym_rune_literal_token1,
  [anon_sym_SQUOTE2] = anon_sym_SQUOTE,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_section_token1] = aux_sym_string_section_token1,
  [anon_sym_DQUOTE2] = anon_sym_DQUOTE,
  [sym_raw_string_section] = sym_raw_string_section,
  [anon_sym_export] = anon_sym_export,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_ATthreadlocal] = anon_sym_ATthreadlocal,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_ATsymbol] = anon_sym_ATsymbol,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_use] = anon_sym_use,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_source_file] = sym_source_file,
  [sym__import_or_declaration] = sym__import_or_declaration,
  [sym_type] = sym_type,
  [sym__storage_class] = sym__storage_class,
  [sym__primitive_type] = sym__primitive_type,
  [sym__integer_type] = sym__integer_type,
  [sym__floating_type] = sym__floating_type,
  [sym_pointer_type] = sym_pointer_type,
  [sym__expression] = sym__expression,
  [sym_expression] = sym_expression,
  [sym__plain_expression] = sym__plain_expression,
  [sym_literal] = sym_literal,
  [sym_rune_literal] = sym_rune_literal,
  [sym_string_literal] = sym_string_literal,
  [sym_string_section] = sym_string_section,
  [sym_declaration] = sym_declaration,
  [sym_global_declaration] = sym_global_declaration,
  [sym_global_binding] = sym_global_binding,
  [sym_decl_attr] = sym_decl_attr,
  [sym_use_directive] = sym_use_directive,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
  [aux_sym_string_section_repeat1] = aux_sym_string_section_repeat1,
  [aux_sym_global_declaration_repeat1] = aux_sym_global_declaration_repeat1,
  [aux_sym_use_directive_repeat1] = aux_sym_use_directive_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_done] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_never] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_opaque] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rune] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_str] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_valist] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_void] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_size] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uintptr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nullable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [sym_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_floating_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_rune_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_section_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [sym_raw_string_section] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_export] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATthreadlocal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATsymbol] = {
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
  [anon_sym_use] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
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
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__import_or_declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym__storage_class] = {
    .visible = false,
    .named = true,
  },
  [sym__primitive_type] = {
    .visible = false,
    .named = true,
  },
  [sym__integer_type] = {
    .visible = false,
    .named = true,
  },
  [sym__floating_type] = {
    .visible = false,
    .named = true,
  },
  [sym_pointer_type] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__plain_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_rune_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_section] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_global_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_global_binding] = {
    .visible = true,
    .named = true,
  },
  [sym_decl_attr] = {
    .visible = true,
    .named = true,
  },
  [sym_use_directive] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_global_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_use_directive_repeat1] = {
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
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(58);
      ADVANCE_MAP(
        '!', 95,
        '"', 129,
        '\'', 122,
        '(', 137,
        ')', 138,
        '*', 100,
        ',', 131,
        '/', 5,
        '0', 109,
        ':', 134,
        ';', 59,
        '=', 135,
        '@', 33,
        '\\', 15,
        '`', 17,
        'd', 88,
        'f', 78,
        'n', 92,
        't', 90,
        'v', 89,
        '{', 140,
        '}', 141,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(54);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(95);
      if (lookahead == '*') ADVANCE(100);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ':') ADVANCE(133);
      if (lookahead == '=') ADVANCE(135);
      if (lookahead == 'd') ADVANCE(88);
      if (lookahead == 'v') ADVANCE(89);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(129);
      if (lookahead == '/') ADVANCE(127);
      if (lookahead == '\\') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(126);
      if (lookahead != 0) ADVANCE(128);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '"', 124,
        '\'', 118,
        '/', 5,
        '0', 109,
        '`', 17,
        'd', 71,
        'f', 61,
        'n', 75,
        't', 73,
        'v', 72,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 4:
      if (lookahead == '+') ADVANCE(40);
      if (lookahead == '-') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(60);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(120);
      if (lookahead == '\\') ADVANCE(121);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(119);
      END_STATE();
    case 7:
      if (lookahead == '2') ADVANCE(107);
      END_STATE();
    case 8:
      if (lookahead == '2') ADVANCE(115);
      END_STATE();
    case 9:
      if (lookahead == '3') ADVANCE(8);
      if (lookahead == '6') ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == '4') ADVANCE(107);
      END_STATE();
    case 11:
      if (lookahead == '4') ADVANCE(115);
      END_STATE();
    case 12:
      if (lookahead == '6') ADVANCE(107);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(139);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(53);
      END_STATE();
    case 15:
      ADVANCE_MAP(
        'U', 52,
        'u', 48,
        'x', 46,
        '"', 123,
        '\'', 123,
        '0', 123,
        '\\', 123,
        'a', 123,
        'b', 123,
        'f', 123,
        'n', 123,
        'r', 123,
        't', 123,
        'v', 123,
      );
      END_STATE();
    case 16:
      if (lookahead == '_') ADVANCE(45);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '`') ADVANCE(130);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 20:
      if (lookahead == 'b') ADVANCE(30);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(19);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 24:
      if (lookahead == 'f') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == 'h') ADVANCE(32);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(136);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(132);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 29:
      if (lookahead == 'm') ADVANCE(20);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 31:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 33:
      if (lookahead == 's') ADVANCE(34);
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 34:
      if (lookahead == 'y') ADVANCE(29);
      END_STATE();
    case 35:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 36:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(112);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(113);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(123);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(110);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 53:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 54:
      if (eof) ADVANCE(58);
      ADVANCE_MAP(
        '!', 95,
        '"', 124,
        '\'', 118,
        '(', 137,
        ')', 138,
        '*', 100,
        ',', 131,
        '/', 5,
        '0', 109,
        ':', 134,
        ';', 59,
        '=', 135,
        '@', 33,
        '`', 17,
        'd', 88,
        'f', 78,
        'n', 92,
        't', 90,
        'v', 89,
        '{', 140,
        '}', 141,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(54);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 55:
      if (eof) ADVANCE(58);
      ADVANCE_MAP(
        '"', 124,
        '\'', 122,
        ')', 138,
        ',', 131,
        '/', 5,
        ':', 13,
        ';', 59,
        '=', 135,
        '`', 17,
        '}', 141,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 56:
      if (eof) ADVANCE(58);
      ADVANCE_MAP(
        '"', 124,
        ')', 138,
        ',', 131,
        '/', 5,
        ':', 13,
        ';', 59,
        '=', 135,
        '`', 17,
        '}', 141,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 57:
      if (eof) ADVANCE(58);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ';') ADVANCE(59);
      if (lookahead == '@') ADVANCE(33);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == 'a') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == 'd') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == 'l') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == 'l') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == 'l') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == 'n') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == 'r') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == 's') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == 'u') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == 'u') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_done);
      if (lookahead == ':') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_done);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_void);
      if (lookahead == ':') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == ':') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == ':') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_null);
      if (lookahead == ':') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_null);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_integer_literal);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_integer_literal);
      ADVANCE_MAP(
        '.', 39,
        '_', 38,
        'f', 9,
        'i', 111,
        'u', 111,
        'z', 107,
        'E', 4,
        'e', 4,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_integer_literal);
      ADVANCE_MAP(
        '.', 39,
        'b', 36,
        'f', 9,
        'i', 111,
        'o', 37,
        'u', 111,
        'x', 44,
        'z', 107,
        'E', 4,
        'e', 4,
      );
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == 'i') ADVANCE(111);
      if (lookahead == 'u') ADVANCE(111);
      if (lookahead == 'z') ADVANCE(107);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '1') ADVANCE(12);
      if (lookahead == '3') ADVANCE(7);
      if (lookahead == '6') ADVANCE(10);
      if (lookahead == '8') ADVANCE(107);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(111);
      if (lookahead == 'u') ADVANCE(111);
      if (lookahead == 'z') ADVANCE(107);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == 'i') ADVANCE(111);
      if (lookahead == 'u') ADVANCE(111);
      if (lookahead == 'z') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'f') ADVANCE(9);
      if (lookahead == 'i') ADVANCE(111);
      if (lookahead == 'u') ADVANCE(111);
      if (lookahead == 'z') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_floating_literal);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_floating_literal);
      if (lookahead == '_') ADVANCE(39);
      if (lookahead == 'f') ADVANCE(9);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_floating_literal);
      if (lookahead == 'f') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_rune_literal_token1);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_rune_literal_token1);
      if (lookahead == '/') ADVANCE(60);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_rune_literal_token1);
      ADVANCE_MAP(
        'U', 52,
        'u', 48,
        'x', 46,
        '"', 123,
        '\'', 123,
        '0', 123,
        '\\', 123,
        'a', 123,
        'b', 123,
        'f', 123,
        'n', 123,
        'r', 123,
        't', 123,
        'v', 123,
      );
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_string_section_token1);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(60);
      if (lookahead != 0) ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_string_section_token1);
      if (lookahead == '/') ADVANCE(127);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(128);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_string_section_token1);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(128);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_string_section_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_raw_string_section);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_ATthreadlocal);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(139);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_ATsymbol);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ADVANCE_MAP(
        'b', 1,
        'c', 2,
        'e', 3,
        'f', 4,
        'i', 5,
        'l', 6,
        'n', 7,
        'o', 8,
        'r', 9,
        's', 10,
        'u', 11,
        'v', 12,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 3:
      if (lookahead == 'x') ADVANCE(15);
      END_STATE();
    case 4:
      if (lookahead == '3') ADVANCE(16);
      if (lookahead == '6') ADVANCE(17);
      END_STATE();
    case 5:
      if (lookahead == '1') ADVANCE(18);
      if (lookahead == '3') ADVANCE(19);
      if (lookahead == '6') ADVANCE(20);
      if (lookahead == '8') ADVANCE(21);
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(24);
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 8:
      if (lookahead == 'p') ADVANCE(26);
      END_STATE();
    case 9:
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 10:
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 11:
      if (lookahead == '1') ADVANCE(30);
      if (lookahead == '3') ADVANCE(31);
      if (lookahead == '6') ADVANCE(32);
      if (lookahead == '8') ADVANCE(33);
      if (lookahead == 'i') ADVANCE(34);
      if (lookahead == 's') ADVANCE(35);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 13:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 14:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 15:
      if (lookahead == 'p') ADVANCE(39);
      END_STATE();
    case 16:
      if (lookahead == '2') ADVANCE(40);
      END_STATE();
    case 17:
      if (lookahead == '4') ADVANCE(41);
      END_STATE();
    case 18:
      if (lookahead == '6') ADVANCE(42);
      END_STATE();
    case 19:
      if (lookahead == '2') ADVANCE(43);
      END_STATE();
    case 20:
      if (lookahead == '4') ADVANCE(44);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 24:
      if (lookahead == 'v') ADVANCE(47);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 28:
      if (lookahead == 'z') ADVANCE(51);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 30:
      if (lookahead == '6') ADVANCE(53);
      END_STATE();
    case 31:
      if (lookahead == '2') ADVANCE(54);
      END_STATE();
    case 32:
      if (lookahead == '4') ADVANCE(55);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 38:
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_f32);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_f64);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 49:
      if (lookahead == 'q') ADVANCE(64);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_str);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 64:
      if (lookahead == 'u') ADVANCE(73);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_rune);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_size);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_uint);
      if (lookahead == 'p') ADVANCE(74);
      END_STATE();
    case 68:
      if (lookahead == 's') ADVANCE(75);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_never);
      END_STATE();
    case 72:
      if (lookahead == 'b') ADVANCE(77);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_opaque);
      END_STATE();
    case 79:
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_valist);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_uintptr);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_nullable);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 55},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 55},
  [17] = {.lex_state = 55},
  [18] = {.lex_state = 55},
  [19] = {.lex_state = 55},
  [20] = {.lex_state = 55},
  [21] = {.lex_state = 57},
  [22] = {.lex_state = 57},
  [23] = {.lex_state = 55},
  [24] = {.lex_state = 55},
  [25] = {.lex_state = 55},
  [26] = {.lex_state = 57},
  [27] = {.lex_state = 57},
  [28] = {.lex_state = 55},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
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
  [49] = {.lex_state = 55},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 57},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 55},
  [66] = {.lex_state = 57},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 55},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 57},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 57},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 57},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 55},
  [83] = {.lex_state = 57},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 55},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 55},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_done] = ACTIONS(1),
    [anon_sym_never] = ACTIONS(1),
    [anon_sym_opaque] = ACTIONS(1),
    [anon_sym_rune] = ACTIONS(1),
    [anon_sym_str] = ACTIONS(1),
    [anon_sym_valist] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_i8] = ACTIONS(1),
    [anon_sym_i16] = ACTIONS(1),
    [anon_sym_i32] = ACTIONS(1),
    [anon_sym_i64] = ACTIONS(1),
    [anon_sym_u8] = ACTIONS(1),
    [anon_sym_u16] = ACTIONS(1),
    [anon_sym_u32] = ACTIONS(1),
    [anon_sym_u64] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_uint] = ACTIONS(1),
    [anon_sym_size] = ACTIONS(1),
    [anon_sym_uintptr] = ACTIONS(1),
    [anon_sym_f32] = ACTIONS(1),
    [anon_sym_f64] = ACTIONS(1),
    [anon_sym_nullable] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [sym_integer_literal] = ACTIONS(1),
    [sym_floating_literal] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE2] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE2] = ACTIONS(1),
    [sym_raw_string_section] = ACTIONS(1),
    [anon_sym_export] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_ATthreadlocal] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_ATsymbol] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_use] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(77),
    [sym__import_or_declaration] = STATE(54),
    [sym_declaration] = STATE(54),
    [sym_global_declaration] = STATE(60),
    [sym_use_directive] = STATE(54),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_const] = ACTIONS(9),
    [anon_sym_export] = ACTIONS(11),
    [anon_sym_let] = ACTIONS(9),
    [anon_sym_use] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_const,
    ACTIONS(17), 1,
      anon_sym_BANG,
    ACTIONS(21), 1,
      anon_sym_uint,
    ACTIONS(23), 1,
      anon_sym_nullable,
    ACTIONS(25), 1,
      anon_sym_STAR,
    STATE(34), 1,
      sym_type,
    STATE(35), 5,
      sym__storage_class,
      sym__primitive_type,
      sym__integer_type,
      sym__floating_type,
      sym_pointer_type,
    ACTIONS(19), 21,
      anon_sym_bool,
      anon_sym_done,
      anon_sym_never,
      anon_sym_opaque,
      anon_sym_rune,
      anon_sym_str,
      anon_sym_valist,
      anon_sym_void,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_int,
      anon_sym_size,
      anon_sym_uintptr,
      anon_sym_f32,
      anon_sym_f64,
  [52] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_const,
    ACTIONS(17), 1,
      anon_sym_BANG,
    ACTIONS(21), 1,
      anon_sym_uint,
    ACTIONS(23), 1,
      anon_sym_nullable,
    ACTIONS(25), 1,
      anon_sym_STAR,
    STATE(39), 1,
      sym_type,
    STATE(35), 5,
      sym__storage_class,
      sym__primitive_type,
      sym__integer_type,
      sym__floating_type,
      sym_pointer_type,
    ACTIONS(19), 21,
      anon_sym_bool,
      anon_sym_done,
      anon_sym_never,
      anon_sym_opaque,
      anon_sym_rune,
      anon_sym_str,
      anon_sym_valist,
      anon_sym_void,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_int,
      anon_sym_size,
      anon_sym_uintptr,
      anon_sym_f32,
      anon_sym_f64,
  [104] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_const,
    ACTIONS(17), 1,
      anon_sym_BANG,
    ACTIONS(21), 1,
      anon_sym_uint,
    ACTIONS(23), 1,
      anon_sym_nullable,
    ACTIONS(25), 1,
      anon_sym_STAR,
    STATE(36), 1,
      sym_type,
    STATE(35), 5,
      sym__storage_class,
      sym__primitive_type,
      sym__integer_type,
      sym__floating_type,
      sym_pointer_type,
    ACTIONS(19), 21,
      anon_sym_bool,
      anon_sym_done,
      anon_sym_never,
      anon_sym_opaque,
      anon_sym_rune,
      anon_sym_str,
      anon_sym_valist,
      anon_sym_void,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_int,
      anon_sym_size,
      anon_sym_uintptr,
      anon_sym_f32,
      anon_sym_f64,
  [156] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_const,
    ACTIONS(17), 1,
      anon_sym_BANG,
    ACTIONS(21), 1,
      anon_sym_uint,
    ACTIONS(23), 1,
      anon_sym_nullable,
    ACTIONS(25), 1,
      anon_sym_STAR,
    STATE(32), 1,
      sym_type,
    STATE(35), 5,
      sym__storage_class,
      sym__primitive_type,
      sym__integer_type,
      sym__floating_type,
      sym_pointer_type,
    ACTIONS(19), 21,
      anon_sym_bool,
      anon_sym_done,
      anon_sym_never,
      anon_sym_opaque,
      anon_sym_rune,
      anon_sym_str,
      anon_sym_valist,
      anon_sym_void,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_int,
      anon_sym_size,
      anon_sym_uintptr,
      anon_sym_f32,
      anon_sym_f64,
  [208] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_const,
    ACTIONS(17), 1,
      anon_sym_BANG,
    ACTIONS(21), 1,
      anon_sym_uint,
    ACTIONS(23), 1,
      anon_sym_nullable,
    ACTIONS(25), 1,
      anon_sym_STAR,
    STATE(30), 1,
      sym_type,
    STATE(35), 5,
      sym__storage_class,
      sym__primitive_type,
      sym__integer_type,
      sym__floating_type,
      sym_pointer_type,
    ACTIONS(19), 21,
      anon_sym_bool,
      anon_sym_done,
      anon_sym_never,
      anon_sym_opaque,
      anon_sym_rune,
      anon_sym_str,
      anon_sym_valist,
      anon_sym_void,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_int,
      anon_sym_size,
      anon_sym_uintptr,
      anon_sym_f32,
      anon_sym_f64,
  [260] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_nullable,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(31), 1,
      anon_sym_uint,
    STATE(42), 5,
      sym__storage_class,
      sym__primitive_type,
      sym__integer_type,
      sym__floating_type,
      sym_pointer_type,
    ACTIONS(29), 21,
      anon_sym_bool,
      anon_sym_done,
      anon_sym_never,
      anon_sym_opaque,
      anon_sym_rune,
      anon_sym_str,
      anon_sym_valist,
      anon_sym_void,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_int,
      anon_sym_size,
      anon_sym_uintptr,
      anon_sym_f32,
      anon_sym_f64,
  [306] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_nullable,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(35), 1,
      anon_sym_uint,
    STATE(33), 5,
      sym__storage_class,
      sym__primitive_type,
      sym__integer_type,
      sym__floating_type,
      sym_pointer_type,
    ACTIONS(33), 21,
      anon_sym_bool,
      anon_sym_done,
      anon_sym_never,
      anon_sym_opaque,
      anon_sym_rune,
      anon_sym_str,
      anon_sym_valist,
      anon_sym_void,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_int,
      anon_sym_size,
      anon_sym_uintptr,
      anon_sym_f32,
      anon_sym_f64,
  [349] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_nullable,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(31), 1,
      anon_sym_uint,
    STATE(42), 5,
      sym__storage_class,
      sym__primitive_type,
      sym__integer_type,
      sym__floating_type,
      sym_pointer_type,
    ACTIONS(29), 21,
      anon_sym_bool,
      anon_sym_done,
      anon_sym_never,
      anon_sym_opaque,
      anon_sym_rune,
      anon_sym_str,
      anon_sym_valist,
      anon_sym_void,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_int,
      anon_sym_size,
      anon_sym_uintptr,
      anon_sym_f32,
      anon_sym_f64,
  [392] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(41), 1,
      sym_floating_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      sym_raw_string_section,
    STATE(19), 2,
      sym_string_section,
      aux_sym_string_literal_repeat1,
    STATE(55), 2,
      sym__plain_expression,
      sym_literal,
    STATE(56), 2,
      sym_rune_literal,
      sym_string_literal,
    STATE(57), 2,
      sym__expression,
      sym_expression,
    ACTIONS(39), 6,
      anon_sym_done,
      anon_sym_void,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      sym_integer_literal,
  [435] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(41), 1,
      sym_floating_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      sym_raw_string_section,
    STATE(19), 2,
      sym_string_section,
      aux_sym_string_literal_repeat1,
    STATE(44), 2,
      sym__expression,
      sym_expression,
    STATE(55), 2,
      sym__plain_expression,
      sym_literal,
    STATE(56), 2,
      sym_rune_literal,
      sym_string_literal,
    ACTIONS(39), 6,
      anon_sym_done,
      anon_sym_void,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      sym_integer_literal,
  [478] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(41), 1,
      sym_floating_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      sym_raw_string_section,
    STATE(19), 2,
      sym_string_section,
      aux_sym_string_literal_repeat1,
    STATE(55), 2,
      sym__plain_expression,
      sym_literal,
    STATE(56), 2,
      sym_rune_literal,
      sym_string_literal,
    STATE(58), 2,
      sym__expression,
      sym_expression,
    ACTIONS(39), 6,
      anon_sym_done,
      anon_sym_void,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      sym_integer_literal,
  [521] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(41), 1,
      sym_floating_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      sym_raw_string_section,
    STATE(50), 1,
      sym_expression,
    STATE(19), 2,
      sym_string_section,
      aux_sym_string_literal_repeat1,
    STATE(55), 2,
      sym__plain_expression,
      sym_literal,
    STATE(56), 2,
      sym_rune_literal,
      sym_string_literal,
    ACTIONS(39), 6,
      anon_sym_done,
      anon_sym_void,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      sym_integer_literal,
  [563] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(41), 1,
      sym_floating_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      sym_raw_string_section,
    STATE(44), 1,
      sym_expression,
    STATE(19), 2,
      sym_string_section,
      aux_sym_string_literal_repeat1,
    STATE(55), 2,
      sym__plain_expression,
      sym_literal,
    STATE(56), 2,
      sym_rune_literal,
      sym_string_literal,
    ACTIONS(39), 6,
      anon_sym_done,
      anon_sym_void,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      sym_integer_literal,
  [605] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(41), 1,
      sym_floating_literal,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      sym_raw_string_section,
    STATE(47), 1,
      sym_expression,
    STATE(19), 2,
      sym_string_section,
      aux_sym_string_literal_repeat1,
    STATE(55), 2,
      sym__plain_expression,
      sym_literal,
    STATE(56), 2,
      sym_rune_literal,
      sym_string_literal,
    ACTIONS(39), 6,
      anon_sym_done,
      anon_sym_void,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      sym_integer_literal,
  [647] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(13), 1,
      anon_sym_use,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    STATE(60), 1,
      sym_global_declaration,
    ACTIONS(9), 2,
      anon_sym_const,
      anon_sym_let,
    STATE(70), 3,
      sym__import_or_declaration,
      sym_declaration,
      sym_use_directive,
  [672] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(13), 1,
      anon_sym_use,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    STATE(60), 1,
      sym_global_declaration,
    ACTIONS(9), 2,
      anon_sym_const,
      anon_sym_let,
    STATE(70), 3,
      sym__import_or_declaration,
      sym_declaration,
      sym_use_directive,
  [697] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(58), 1,
      sym_raw_string_section,
    STATE(18), 2,
      sym_string_section,
      aux_sym_string_literal_repeat1,
    ACTIONS(53), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [717] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      sym_raw_string_section,
    STATE(18), 2,
      sym_string_section,
      aux_sym_string_literal_repeat1,
    ACTIONS(61), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [737] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(13), 1,
      anon_sym_use,
    STATE(60), 1,
      sym_global_declaration,
    ACTIONS(9), 2,
      anon_sym_const,
      anon_sym_let,
    STATE(70), 3,
      sym__import_or_declaration,
      sym_declaration,
      sym_use_directive,
  [759] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      anon_sym_ATthreadlocal,
    ACTIONS(71), 1,
      anon_sym_ATsymbol,
    STATE(48), 1,
      sym_global_binding,
    STATE(66), 1,
      sym_decl_attr,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [782] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      anon_sym_ATthreadlocal,
    ACTIONS(71), 1,
      anon_sym_ATsymbol,
    STATE(48), 1,
      sym_global_binding,
    STATE(66), 1,
      sym_decl_attr,
    ACTIONS(73), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [805] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      sym_raw_string_section,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [817] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      sym_raw_string_section,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [829] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      sym_raw_string_section,
    STATE(86), 1,
      sym_string_literal,
    STATE(19), 2,
      sym_string_section,
      aux_sym_string_literal_repeat1,
  [846] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      anon_sym_ATthreadlocal,
    ACTIONS(71), 1,
      anon_sym_ATsymbol,
    STATE(41), 1,
      sym_global_binding,
    STATE(66), 1,
      sym_decl_attr,
  [865] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(69), 1,
      anon_sym_ATthreadlocal,
    ACTIONS(71), 1,
      anon_sym_ATsymbol,
    STATE(48), 1,
      sym_global_binding,
    STATE(66), 1,
      sym_decl_attr,
  [884] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_EQ,
    ACTIONS(83), 1,
      anon_sym_COLON_COLON,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [898] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_COMMA,
    STATE(40), 1,
      aux_sym_global_declaration_repeat1,
    ACTIONS(73), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [912] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_EQ,
    ACTIONS(87), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [924] = 5,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_escape_sequence,
    ACTIONS(96), 1,
      aux_sym_string_section_token1,
    ACTIONS(99), 1,
      anon_sym_DQUOTE2,
    STATE(31), 1,
      aux_sym_string_section_repeat1,
  [940] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [950] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [960] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_EQ,
    ACTIONS(105), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [972] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [982] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_EQ,
    ACTIONS(111), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [994] = 5,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(115), 1,
      sym_escape_sequence,
    ACTIONS(117), 1,
      aux_sym_string_section_token1,
    ACTIONS(119), 1,
      anon_sym_DQUOTE2,
    STATE(31), 1,
      aux_sym_string_section_repeat1,
  [1010] = 5,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(121), 1,
      sym_escape_sequence,
    ACTIONS(123), 1,
      aux_sym_string_section_token1,
    ACTIONS(125), 1,
      anon_sym_DQUOTE2,
    STATE(37), 1,
      aux_sym_string_section_repeat1,
  [1026] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [1036] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_COMMA,
    STATE(40), 1,
      aux_sym_global_declaration_repeat1,
    ACTIONS(129), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1050] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_COMMA,
    STATE(29), 1,
      aux_sym_global_declaration_repeat1,
    ACTIONS(134), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1064] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [1074] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1083] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1092] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_COMMA,
    ACTIONS(144), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      aux_sym_use_directive_repeat1,
  [1105] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(146), 1,
      anon_sym_SEMI,
    STATE(51), 1,
      aux_sym_source_file_repeat1,
  [1118] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1127] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1136] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(71), 1,
      sym_global_declaration,
    ACTIONS(9), 2,
      anon_sym_const,
      anon_sym_let,
  [1147] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1156] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      ts_builtin_sym_end,
    ACTIONS(154), 1,
      anon_sym_SEMI,
    STATE(51), 1,
      aux_sym_source_file_repeat1,
  [1169] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_COMMA,
    ACTIONS(160), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      aux_sym_use_directive_repeat1,
  [1182] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_COMMA,
    ACTIONS(164), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      aux_sym_use_directive_repeat1,
  [1195] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      ts_builtin_sym_end,
    ACTIONS(168), 1,
      anon_sym_SEMI,
    STATE(46), 1,
      aux_sym_source_file_repeat1,
  [1208] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1217] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1226] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1235] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1244] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_COLON,
    ACTIONS(176), 1,
      anon_sym_EQ,
  [1254] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1262] = 3,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(180), 1,
      aux_sym_rune_literal_token1,
    ACTIONS(182), 1,
      sym_escape_sequence,
  [1272] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1280] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 2,
      sym_identifier,
      anon_sym_ATthreadlocal,
  [1288] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1296] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      sym_name,
    ACTIONS(190), 1,
      anon_sym_RBRACE,
  [1306] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      sym_identifier,
    ACTIONS(194), 1,
      anon_sym_ATthreadlocal,
  [1316] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1324] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_COLON,
    ACTIONS(200), 1,
      anon_sym_EQ,
  [1334] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_COLON,
    ACTIONS(204), 1,
      anon_sym_EQ,
  [1344] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1352] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1360] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_STAR,
    ACTIONS(210), 1,
      anon_sym_LBRACE,
  [1370] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      anon_sym_RBRACE,
    ACTIONS(188), 1,
      sym_name,
  [1380] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1388] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1396] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      sym_identifier,
  [1403] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      ts_builtin_sym_end,
  [1410] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      sym_identifier,
  [1417] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_STAR,
  [1424] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      sym_identifier,
  [1431] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      ts_builtin_sym_end,
  [1438] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_SQUOTE2,
  [1445] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      sym_identifier,
  [1452] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
  [1459] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      sym_name,
  [1466] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_RPAREN,
  [1473] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      sym_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 52,
  [SMALL_STATE(4)] = 104,
  [SMALL_STATE(5)] = 156,
  [SMALL_STATE(6)] = 208,
  [SMALL_STATE(7)] = 260,
  [SMALL_STATE(8)] = 306,
  [SMALL_STATE(9)] = 349,
  [SMALL_STATE(10)] = 392,
  [SMALL_STATE(11)] = 435,
  [SMALL_STATE(12)] = 478,
  [SMALL_STATE(13)] = 521,
  [SMALL_STATE(14)] = 563,
  [SMALL_STATE(15)] = 605,
  [SMALL_STATE(16)] = 647,
  [SMALL_STATE(17)] = 672,
  [SMALL_STATE(18)] = 697,
  [SMALL_STATE(19)] = 717,
  [SMALL_STATE(20)] = 737,
  [SMALL_STATE(21)] = 759,
  [SMALL_STATE(22)] = 782,
  [SMALL_STATE(23)] = 805,
  [SMALL_STATE(24)] = 817,
  [SMALL_STATE(25)] = 829,
  [SMALL_STATE(26)] = 846,
  [SMALL_STATE(27)] = 865,
  [SMALL_STATE(28)] = 884,
  [SMALL_STATE(29)] = 898,
  [SMALL_STATE(30)] = 912,
  [SMALL_STATE(31)] = 924,
  [SMALL_STATE(32)] = 940,
  [SMALL_STATE(33)] = 950,
  [SMALL_STATE(34)] = 960,
  [SMALL_STATE(35)] = 972,
  [SMALL_STATE(36)] = 982,
  [SMALL_STATE(37)] = 994,
  [SMALL_STATE(38)] = 1010,
  [SMALL_STATE(39)] = 1026,
  [SMALL_STATE(40)] = 1036,
  [SMALL_STATE(41)] = 1050,
  [SMALL_STATE(42)] = 1064,
  [SMALL_STATE(43)] = 1074,
  [SMALL_STATE(44)] = 1083,
  [SMALL_STATE(45)] = 1092,
  [SMALL_STATE(46)] = 1105,
  [SMALL_STATE(47)] = 1118,
  [SMALL_STATE(48)] = 1127,
  [SMALL_STATE(49)] = 1136,
  [SMALL_STATE(50)] = 1147,
  [SMALL_STATE(51)] = 1156,
  [SMALL_STATE(52)] = 1169,
  [SMALL_STATE(53)] = 1182,
  [SMALL_STATE(54)] = 1195,
  [SMALL_STATE(55)] = 1208,
  [SMALL_STATE(56)] = 1217,
  [SMALL_STATE(57)] = 1226,
  [SMALL_STATE(58)] = 1235,
  [SMALL_STATE(59)] = 1244,
  [SMALL_STATE(60)] = 1254,
  [SMALL_STATE(61)] = 1262,
  [SMALL_STATE(62)] = 1272,
  [SMALL_STATE(63)] = 1280,
  [SMALL_STATE(64)] = 1288,
  [SMALL_STATE(65)] = 1296,
  [SMALL_STATE(66)] = 1306,
  [SMALL_STATE(67)] = 1316,
  [SMALL_STATE(68)] = 1324,
  [SMALL_STATE(69)] = 1334,
  [SMALL_STATE(70)] = 1344,
  [SMALL_STATE(71)] = 1352,
  [SMALL_STATE(72)] = 1360,
  [SMALL_STATE(73)] = 1370,
  [SMALL_STATE(74)] = 1380,
  [SMALL_STATE(75)] = 1388,
  [SMALL_STATE(76)] = 1396,
  [SMALL_STATE(77)] = 1403,
  [SMALL_STATE(78)] = 1410,
  [SMALL_STATE(79)] = 1417,
  [SMALL_STATE(80)] = 1424,
  [SMALL_STATE(81)] = 1431,
  [SMALL_STATE(82)] = 1438,
  [SMALL_STATE(83)] = 1445,
  [SMALL_STATE(84)] = 1452,
  [SMALL_STATE(85)] = 1459,
  [SMALL_STATE(86)] = 1466,
  [SMALL_STATE(87)] = 1473,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_declaration, 4, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_declaration, 3, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_section, 2, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_section, 3, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_directive, 2, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_binding, 5, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_section_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_section_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_section_repeat1, 2, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_type, 3, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 3, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_binding, 3, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_binding, 4, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_type, 2, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_global_declaration_repeat1, 2, 0, 0),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_global_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_declaration, 2, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rune_literal, 3, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_binding, 7, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_binding, 6, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_use_directive_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_use_directive_repeat1, 2, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_attr, 4, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_directive, 7, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_directive, 4, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 2, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_directive, 6, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_directive, 8, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [218] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
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

TS_PUBLIC const TSLanguage *tree_sitter_hare(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_name,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
