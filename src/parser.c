#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 85
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 77
#define ALIAS_COUNT 0
#define TOKEN_COUNT 53
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
  sym_escape_sequence = 35,
  anon_sym_DQUOTE = 36,
  aux_sym_string_section_token1 = 37,
  anon_sym_DQUOTE2 = 38,
  sym_raw_string_section = 39,
  anon_sym_export = 40,
  anon_sym_let = 41,
  anon_sym_COMMA = 42,
  anon_sym_ATthreadlocal = 43,
  anon_sym_COLON = 44,
  anon_sym_EQ = 45,
  anon_sym_ATsymbol = 46,
  anon_sym_LPAREN = 47,
  anon_sym_RPAREN = 48,
  anon_sym_use = 49,
  anon_sym_COLON_COLON = 50,
  anon_sym_LBRACE = 51,
  anon_sym_RBRACE = 52,
  sym_source_file = 53,
  sym__import_or_declaration = 54,
  sym_type = 55,
  sym__storage_class = 56,
  sym__primitive_type = 57,
  sym__integer_type = 58,
  sym__floating_type = 59,
  sym_pointer_type = 60,
  sym__expression = 61,
  sym_expression = 62,
  sym__plain_expression = 63,
  sym_literal = 64,
  sym_string_literal = 65,
  sym_string_section = 66,
  sym_declaration = 67,
  sym_global_declaration = 68,
  sym_global_binding = 69,
  sym_decl_attr = 70,
  sym_use_directive = 71,
  aux_sym_source_file_repeat1 = 72,
  aux_sym_string_literal_repeat1 = 73,
  aux_sym_string_section_repeat1 = 74,
  aux_sym_global_declaration_repeat1 = 75,
  aux_sym_use_directive_repeat1 = 76,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(46);
      ADVANCE_MAP(
        '!', 83,
        '"', 109,
        '(', 117,
        ')', 118,
        '*', 88,
        ',', 111,
        '/', 5,
        '0', 101,
        ':', 114,
        ';', 47,
        '=', 115,
        '@', 27,
        '\\', 11,
        '`', 12,
        'd', 76,
        'f', 66,
        'n', 80,
        't', 78,
        'v', 77,
        '{', 120,
        '}', 121,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(43);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(83);
      if (lookahead == '*') ADVANCE(88);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == '=') ADVANCE(115);
      if (lookahead == 'd') ADVANCE(76);
      if (lookahead == 'v') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '/') ADVANCE(107);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(106);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '"', 104,
        '/', 5,
        '0', 101,
        '`', 12,
        'd', 59,
        'f', 49,
        'n', 63,
        't', 61,
        'v', 60,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(3);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 4:
      if (lookahead == '+') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(48);
      END_STATE();
    case 6:
      if (lookahead == '2') ADVANCE(95);
      END_STATE();
    case 7:
      if (lookahead == '4') ADVANCE(95);
      END_STATE();
    case 8:
      if (lookahead == '6') ADVANCE(95);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(119);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(42);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        'U', 41,
        'u', 37,
        'x', 35,
        '"', 103,
        '\'', 103,
        '0', 103,
        '\\', 103,
        'a', 103,
        'b', 103,
        'f', 103,
        'n', 103,
        'r', 103,
        't', 103,
        'v', 103,
      );
      END_STATE();
    case 12:
      if (lookahead == '`') ADVANCE(110);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(21);
      END_STATE();
    case 15:
      if (lookahead == 'b') ADVANCE(24);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(14);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(22);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 19:
      if (lookahead == 'h') ADVANCE(26);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(112);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 23:
      if (lookahead == 'm') ADVANCE(15);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 26:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 27:
      if (lookahead == 's') ADVANCE(28);
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 28:
      if (lookahead == 'y') ADVANCE(23);
      END_STATE();
    case 29:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(97);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(98);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(103);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(99);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(33);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(37);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(38);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(39);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(40);
      END_STATE();
    case 42:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 43:
      if (eof) ADVANCE(46);
      ADVANCE_MAP(
        '!', 83,
        '"', 104,
        '(', 117,
        ')', 118,
        '*', 88,
        ',', 111,
        '/', 5,
        '0', 101,
        ':', 114,
        ';', 47,
        '=', 115,
        '@', 27,
        '`', 12,
        'd', 76,
        'f', 66,
        'n', 80,
        't', 78,
        'v', 77,
        '{', 120,
        '}', 121,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(43);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 44:
      if (eof) ADVANCE(46);
      ADVANCE_MAP(
        '"', 104,
        ')', 118,
        ',', 111,
        '/', 5,
        ':', 9,
        ';', 47,
        '=', 115,
        '`', 12,
        '}', 121,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 45:
      if (eof) ADVANCE(46);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ';') ADVANCE(47);
      if (lookahead == '@') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == 'a') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == 'd') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == 'e') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == 'e') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == 'e') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == 'i') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == 'l') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == 'l') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == 'l') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == 'n') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == 'o') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == 'o') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == 'r') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == 's') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == 'u') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == 'u') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_done);
      if (lookahead == ':') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_done);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_void);
      if (lookahead == ':') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == ':') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == ':') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_null);
      if (lookahead == ':') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_null);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_integer_literal);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '1') ADVANCE(8);
      if (lookahead == '3') ADVANCE(6);
      if (lookahead == '6') ADVANCE(7);
      if (lookahead == '8') ADVANCE(95);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '_') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead == 'u') ADVANCE(96);
      if (lookahead == 'z') ADVANCE(95);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead == 'u') ADVANCE(96);
      if (lookahead == 'z') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '_') ADVANCE(34);
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead == 'u') ADVANCE(96);
      if (lookahead == 'z') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead == 'u') ADVANCE(96);
      if (lookahead == 'z') ADVANCE(95);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_integer_literal);
      ADVANCE_MAP(
        'b', 29,
        'i', 96,
        'o', 30,
        'u', 96,
        'x', 34,
        'z', 95,
        'E', 4,
        'e', 4,
      );
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead == 'u') ADVANCE(96);
      if (lookahead == 'z') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_string_section_token1);
      if (lookahead == '\n') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_string_section_token1);
      if (lookahead == '/') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(108);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_string_section_token1);
      if (lookahead == '/') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_string_section_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_raw_string_section);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_ATthreadlocal);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(119);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_ATsymbol);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 121:
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
      if (lookahead == '\t' ||
          lookahead == '\n' ||
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
  [1] = {.lex_state = 44},
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
  [16] = {.lex_state = 44},
  [17] = {.lex_state = 44},
  [18] = {.lex_state = 44},
  [19] = {.lex_state = 44},
  [20] = {.lex_state = 44},
  [21] = {.lex_state = 45},
  [22] = {.lex_state = 45},
  [23] = {.lex_state = 44},
  [24] = {.lex_state = 44},
  [25] = {.lex_state = 45},
  [26] = {.lex_state = 44},
  [27] = {.lex_state = 45},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 44},
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
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 44},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 45},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 45},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 44},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 44},
  [74] = {.lex_state = 45},
  [75] = {.lex_state = 45},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 44},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 45},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 45},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 44},
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
    [sym_source_file] = STATE(83),
    [sym__import_or_declaration] = STATE(47),
    [sym_declaration] = STATE(47),
    [sym_global_declaration] = STATE(70),
    [sym_use_directive] = STATE(47),
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
    STATE(42), 1,
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
    STATE(33), 1,
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
    STATE(31), 1,
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
    STATE(38), 1,
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
    STATE(39), 5,
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
    ACTIONS(31), 1,
      anon_sym_uint,
    STATE(39), 5,
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
  [349] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_nullable,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(35), 1,
      anon_sym_uint,
    STATE(28), 5,
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
  [392] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(41), 1,
      sym_integer_literal,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_raw_string_section,
    STATE(53), 1,
      sym_string_literal,
    STATE(20), 2,
      sym_string_section,
      aux_sym_string_literal_repeat1,
    STATE(46), 2,
      sym__expression,
      sym_expression,
    STATE(49), 2,
      sym__plain_expression,
      sym_literal,
    ACTIONS(39), 5,
      anon_sym_done,
      anon_sym_void,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [430] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(41), 1,
      sym_integer_literal,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_raw_string_section,
    STATE(53), 1,
      sym_string_literal,
    STATE(20), 2,
      sym_string_section,
      aux_sym_string_literal_repeat1,
    STATE(49), 2,
      sym__plain_expression,
      sym_literal,
    STATE(55), 2,
      sym__expression,
      sym_expression,
    ACTIONS(39), 5,
      anon_sym_done,
      anon_sym_void,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [468] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(41), 1,
      sym_integer_literal,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_raw_string_section,
    STATE(53), 1,
      sym_string_literal,
    STATE(20), 2,
      sym_string_section,
      aux_sym_string_literal_repeat1,
    STATE(49), 2,
      sym__plain_expression,
      sym_literal,
    STATE(52), 2,
      sym__expression,
      sym_expression,
    ACTIONS(39), 5,
      anon_sym_done,
      anon_sym_void,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [506] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(41), 1,
      sym_integer_literal,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_raw_string_section,
    STATE(48), 1,
      sym_expression,
    STATE(53), 1,
      sym_string_literal,
    STATE(20), 2,
      sym_string_section,
      aux_sym_string_literal_repeat1,
    STATE(49), 2,
      sym__plain_expression,
      sym_literal,
    ACTIONS(39), 5,
      anon_sym_done,
      anon_sym_void,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [543] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(41), 1,
      sym_integer_literal,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_raw_string_section,
    STATE(46), 1,
      sym_expression,
    STATE(53), 1,
      sym_string_literal,
    STATE(20), 2,
      sym_string_section,
      aux_sym_string_literal_repeat1,
    STATE(49), 2,
      sym__plain_expression,
      sym_literal,
    ACTIONS(39), 5,
      anon_sym_done,
      anon_sym_void,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [580] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(41), 1,
      sym_integer_literal,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_raw_string_section,
    STATE(51), 1,
      sym_expression,
    STATE(53), 1,
      sym_string_literal,
    STATE(20), 2,
      sym_string_section,
      aux_sym_string_literal_repeat1,
    STATE(49), 2,
      sym__plain_expression,
      sym_literal,
    ACTIONS(39), 5,
      anon_sym_done,
      anon_sym_void,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [617] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(13), 1,
      anon_sym_use,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    STATE(70), 1,
      sym_global_declaration,
    ACTIONS(9), 2,
      anon_sym_const,
      anon_sym_let,
    STATE(69), 3,
      sym__import_or_declaration,
      sym_declaration,
      sym_use_directive,
  [642] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(13), 1,
      anon_sym_use,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    STATE(70), 1,
      sym_global_declaration,
    ACTIONS(9), 2,
      anon_sym_const,
      anon_sym_let,
    STATE(69), 3,
      sym__import_or_declaration,
      sym_declaration,
      sym_use_directive,
  [667] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(56), 1,
      sym_raw_string_section,
    STATE(18), 2,
      sym_string_section,
      aux_sym_string_literal_repeat1,
    ACTIONS(51), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [687] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_export,
    ACTIONS(13), 1,
      anon_sym_use,
    STATE(70), 1,
      sym_global_declaration,
    ACTIONS(9), 2,
      anon_sym_const,
      anon_sym_let,
    STATE(69), 3,
      sym__import_or_declaration,
      sym_declaration,
      sym_use_directive,
  [709] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      sym_raw_string_section,
    STATE(18), 2,
      sym_string_section,
      aux_sym_string_literal_repeat1,
    ACTIONS(59), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [729] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_ATthreadlocal,
    ACTIONS(69), 1,
      anon_sym_ATsymbol,
    STATE(44), 1,
      sym_global_binding,
    STATE(59), 1,
      sym_decl_attr,
    ACTIONS(63), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [752] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_ATthreadlocal,
    ACTIONS(69), 1,
      anon_sym_ATsymbol,
    STATE(44), 1,
      sym_global_binding,
    STATE(59), 1,
      sym_decl_attr,
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [775] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      sym_raw_string_section,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [787] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      sym_raw_string_section,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [799] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_ATthreadlocal,
    ACTIONS(69), 1,
      anon_sym_ATsymbol,
    STATE(44), 1,
      sym_global_binding,
    STATE(59), 1,
      sym_decl_attr,
  [818] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_raw_string_section,
    STATE(79), 1,
      sym_string_literal,
    STATE(20), 2,
      sym_string_section,
      aux_sym_string_literal_repeat1,
  [835] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_ATthreadlocal,
    ACTIONS(69), 1,
      anon_sym_ATsymbol,
    STATE(32), 1,
      sym_global_binding,
    STATE(59), 1,
      sym_decl_attr,
  [854] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [864] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_COMMA,
    STATE(41), 1,
      aux_sym_global_declaration_repeat1,
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [878] = 4,
    ACTIONS(81), 1,
      sym_comment,
    ACTIONS(86), 1,
      anon_sym_DQUOTE2,
    STATE(30), 1,
      aux_sym_string_section_repeat1,
    ACTIONS(83), 2,
      sym_escape_sequence,
      aux_sym_string_section_token1,
  [892] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_EQ,
    ACTIONS(88), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [904] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_COMMA,
    STATE(29), 1,
      aux_sym_global_declaration_repeat1,
    ACTIONS(92), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [918] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [928] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_EQ,
    ACTIONS(98), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [940] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [950] = 4,
    ACTIONS(81), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_DQUOTE2,
    STATE(30), 1,
      aux_sym_string_section_repeat1,
    ACTIONS(104), 2,
      sym_escape_sequence,
      aux_sym_string_section_token1,
  [964] = 4,
    ACTIONS(81), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_DQUOTE2,
    STATE(36), 1,
      aux_sym_string_section_repeat1,
    ACTIONS(108), 2,
      sym_escape_sequence,
      aux_sym_string_section_token1,
  [978] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [988] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [998] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      anon_sym_EQ,
    ACTIONS(120), 1,
      anon_sym_COLON_COLON,
    ACTIONS(116), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1012] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_COMMA,
    STATE(41), 1,
      aux_sym_global_declaration_repeat1,
    ACTIONS(122), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1026] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_EQ,
    ACTIONS(127), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1038] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_COMMA,
    ACTIONS(133), 1,
      anon_sym_RBRACE,
    STATE(50), 1,
      aux_sym_use_directive_repeat1,
  [1051] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1060] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(135), 1,
      anon_sym_SEMI,
    STATE(54), 1,
      aux_sym_source_file_repeat1,
  [1073] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1082] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
    ACTIONS(139), 1,
      anon_sym_SEMI,
    STATE(45), 1,
      aux_sym_source_file_repeat1,
  [1095] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1104] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1113] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_COMMA,
    ACTIONS(147), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      aux_sym_use_directive_repeat1,
  [1126] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1135] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1144] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1153] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
    ACTIONS(155), 1,
      anon_sym_SEMI,
    STATE(54), 1,
      aux_sym_source_file_repeat1,
  [1166] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1175] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_COMMA,
    ACTIONS(161), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      aux_sym_use_directive_repeat1,
  [1188] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(68), 1,
      sym_global_declaration,
    ACTIONS(9), 2,
      anon_sym_const,
      anon_sym_let,
  [1199] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_STAR,
    ACTIONS(165), 1,
      anon_sym_LBRACE,
  [1209] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      sym_identifier,
    ACTIONS(169), 1,
      anon_sym_ATthreadlocal,
  [1219] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_COLON,
    ACTIONS(173), 1,
      anon_sym_EQ,
  [1229] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 2,
      sym_identifier,
      anon_sym_ATthreadlocal,
  [1237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1245] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1253] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      sym_name,
    ACTIONS(183), 1,
      anon_sym_RBRACE,
  [1263] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_COLON,
    ACTIONS(187), 1,
      anon_sym_EQ,
  [1273] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1281] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1289] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1297] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1305] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1313] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_COLON,
    ACTIONS(197), 1,
      anon_sym_EQ,
  [1323] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1331] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_RBRACE,
    ACTIONS(181), 1,
      sym_name,
  [1341] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      sym_identifier,
  [1348] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      sym_identifier,
  [1355] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_STAR,
  [1362] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      sym_name,
  [1369] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
  [1376] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_RPAREN,
  [1383] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      sym_identifier,
  [1390] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
  [1397] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      sym_identifier,
  [1404] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      ts_builtin_sym_end,
  [1411] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
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
  [SMALL_STATE(11)] = 430,
  [SMALL_STATE(12)] = 468,
  [SMALL_STATE(13)] = 506,
  [SMALL_STATE(14)] = 543,
  [SMALL_STATE(15)] = 580,
  [SMALL_STATE(16)] = 617,
  [SMALL_STATE(17)] = 642,
  [SMALL_STATE(18)] = 667,
  [SMALL_STATE(19)] = 687,
  [SMALL_STATE(20)] = 709,
  [SMALL_STATE(21)] = 729,
  [SMALL_STATE(22)] = 752,
  [SMALL_STATE(23)] = 775,
  [SMALL_STATE(24)] = 787,
  [SMALL_STATE(25)] = 799,
  [SMALL_STATE(26)] = 818,
  [SMALL_STATE(27)] = 835,
  [SMALL_STATE(28)] = 854,
  [SMALL_STATE(29)] = 864,
  [SMALL_STATE(30)] = 878,
  [SMALL_STATE(31)] = 892,
  [SMALL_STATE(32)] = 904,
  [SMALL_STATE(33)] = 918,
  [SMALL_STATE(34)] = 928,
  [SMALL_STATE(35)] = 940,
  [SMALL_STATE(36)] = 950,
  [SMALL_STATE(37)] = 964,
  [SMALL_STATE(38)] = 978,
  [SMALL_STATE(39)] = 988,
  [SMALL_STATE(40)] = 998,
  [SMALL_STATE(41)] = 1012,
  [SMALL_STATE(42)] = 1026,
  [SMALL_STATE(43)] = 1038,
  [SMALL_STATE(44)] = 1051,
  [SMALL_STATE(45)] = 1060,
  [SMALL_STATE(46)] = 1073,
  [SMALL_STATE(47)] = 1082,
  [SMALL_STATE(48)] = 1095,
  [SMALL_STATE(49)] = 1104,
  [SMALL_STATE(50)] = 1113,
  [SMALL_STATE(51)] = 1126,
  [SMALL_STATE(52)] = 1135,
  [SMALL_STATE(53)] = 1144,
  [SMALL_STATE(54)] = 1153,
  [SMALL_STATE(55)] = 1166,
  [SMALL_STATE(56)] = 1175,
  [SMALL_STATE(57)] = 1188,
  [SMALL_STATE(58)] = 1199,
  [SMALL_STATE(59)] = 1209,
  [SMALL_STATE(60)] = 1219,
  [SMALL_STATE(61)] = 1229,
  [SMALL_STATE(62)] = 1237,
  [SMALL_STATE(63)] = 1245,
  [SMALL_STATE(64)] = 1253,
  [SMALL_STATE(65)] = 1263,
  [SMALL_STATE(66)] = 1273,
  [SMALL_STATE(67)] = 1281,
  [SMALL_STATE(68)] = 1289,
  [SMALL_STATE(69)] = 1297,
  [SMALL_STATE(70)] = 1305,
  [SMALL_STATE(71)] = 1313,
  [SMALL_STATE(72)] = 1323,
  [SMALL_STATE(73)] = 1331,
  [SMALL_STATE(74)] = 1341,
  [SMALL_STATE(75)] = 1348,
  [SMALL_STATE(76)] = 1355,
  [SMALL_STATE(77)] = 1362,
  [SMALL_STATE(78)] = 1369,
  [SMALL_STATE(79)] = 1376,
  [SMALL_STATE(80)] = 1383,
  [SMALL_STATE(81)] = 1390,
  [SMALL_STATE(82)] = 1397,
  [SMALL_STATE(83)] = 1404,
  [SMALL_STATE(84)] = 1411,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_declaration, 4, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_declaration, 3, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_section, 3, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_section, 2, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 3, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_section_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_section_repeat1, 2, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_binding, 4, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_declaration, 2, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_type, 3, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_binding, 3, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_type, 2, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_directive, 2, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_global_declaration_repeat1, 2, 0, 0),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_global_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_binding, 5, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_binding, 7, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_binding, 6, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_use_directive_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_use_directive_repeat1, 2, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_attr, 4, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_directive, 8, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_directive, 4, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_directive, 7, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 2, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_directive, 6, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [213] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
