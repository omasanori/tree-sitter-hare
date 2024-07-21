#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 57
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 58
#define ALIAS_COUNT 0
#define TOKEN_COUNT 42
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_SEMI = 1,
  sym_identifier = 2,
  sym_name = 3,
  anon_sym_const = 4,
  anon_sym_BANG = 5,
  anon_sym_i8 = 6,
  anon_sym_i16 = 7,
  anon_sym_i32 = 8,
  anon_sym_i64 = 9,
  anon_sym_u8 = 10,
  anon_sym_u16 = 11,
  anon_sym_u32 = 12,
  anon_sym_u64 = 13,
  anon_sym_int = 14,
  anon_sym_uint = 15,
  anon_sym_size = 16,
  anon_sym_uintptr = 17,
  anon_sym_f32 = 18,
  anon_sym_f64 = 19,
  anon_sym_bool = 20,
  anon_sym_done = 21,
  anon_sym_never = 22,
  anon_sym_opaque = 23,
  anon_sym_rune = 24,
  anon_sym_str = 25,
  anon_sym_valist = 26,
  anon_sym_void = 27,
  anon_sym_nullable = 28,
  anon_sym_STAR = 29,
  anon_sym_true = 30,
  anon_sym_false = 31,
  anon_sym_null = 32,
  anon_sym_export = 33,
  anon_sym_let = 34,
  anon_sym_COMMA = 35,
  anon_sym_COLON = 36,
  anon_sym_EQ = 37,
  anon_sym_use = 38,
  anon_sym_COLON_COLON = 39,
  anon_sym_LBRACE = 40,
  anon_sym_RBRACE = 41,
  sym_source_file = 42,
  sym__import_or_declaration = 43,
  sym_type = 44,
  sym__storage_class = 45,
  sym__primitive_type = 46,
  sym_pointer_type = 47,
  sym__expression = 48,
  sym_expression = 49,
  sym_literal = 50,
  sym__declaration = 51,
  sym_global_declaration = 52,
  sym_global_binding = 53,
  sym_use_directive = 54,
  aux_sym_source_file_repeat1 = 55,
  aux_sym_global_declaration_repeat1 = 56,
  aux_sym_use_directive_repeat1 = 57,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [sym_identifier] = "identifier",
  [sym_name] = "name",
  [anon_sym_const] = "const",
  [anon_sym_BANG] = "!",
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
  [anon_sym_bool] = "bool",
  [anon_sym_done] = "done",
  [anon_sym_never] = "never",
  [anon_sym_opaque] = "opaque",
  [anon_sym_rune] = "rune",
  [anon_sym_str] = "str",
  [anon_sym_valist] = "valist",
  [anon_sym_void] = "void",
  [anon_sym_nullable] = "nullable",
  [anon_sym_STAR] = "*",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_null] = "null",
  [anon_sym_export] = "export",
  [anon_sym_let] = "let",
  [anon_sym_COMMA] = ",",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
  [anon_sym_use] = "use",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_source_file] = "source_file",
  [sym__import_or_declaration] = "_import_or_declaration",
  [sym_type] = "type",
  [sym__storage_class] = "_storage_class",
  [sym__primitive_type] = "_primitive_type",
  [sym_pointer_type] = "pointer_type",
  [sym__expression] = "_expression",
  [sym_expression] = "expression",
  [sym_literal] = "literal",
  [sym__declaration] = "_declaration",
  [sym_global_declaration] = "global_declaration",
  [sym_global_binding] = "global_binding",
  [sym_use_directive] = "use_directive",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_global_declaration_repeat1] = "global_declaration_repeat1",
  [aux_sym_use_directive_repeat1] = "use_directive_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_identifier] = sym_identifier,
  [sym_name] = sym_name,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_BANG] = anon_sym_BANG,
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
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_done] = anon_sym_done,
  [anon_sym_never] = anon_sym_never,
  [anon_sym_opaque] = anon_sym_opaque,
  [anon_sym_rune] = anon_sym_rune,
  [anon_sym_str] = anon_sym_str,
  [anon_sym_valist] = anon_sym_valist,
  [anon_sym_void] = anon_sym_void,
  [anon_sym_nullable] = anon_sym_nullable,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_export] = anon_sym_export,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_use] = anon_sym_use,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_source_file] = sym_source_file,
  [sym__import_or_declaration] = sym__import_or_declaration,
  [sym_type] = sym_type,
  [sym__storage_class] = sym__storage_class,
  [sym__primitive_type] = sym__primitive_type,
  [sym_pointer_type] = sym_pointer_type,
  [sym__expression] = sym__expression,
  [sym_expression] = sym_expression,
  [sym_literal] = sym_literal,
  [sym__declaration] = sym__declaration,
  [sym_global_declaration] = sym_global_declaration,
  [sym_global_binding] = sym_global_binding,
  [sym_use_directive] = sym_use_directive,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_global_declaration_repeat1] = aux_sym_global_declaration_repeat1,
  [aux_sym_use_directive_repeat1] = aux_sym_use_directive_repeat1,
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
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
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__declaration] = {
    .visible = false,
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
  [sym_use_directive] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(87);
      ADVANCE_MAP(
        '!', 92,
        '*', 116,
        ',', 123,
        ':', 125,
        ';', 88,
        '=', 126,
        'b', 56,
        'c', 52,
        'd', 54,
        'e', 81,
        'f', 8,
        'i', 1,
        'l', 33,
        'n', 23,
        'o', 58,
        'r', 78,
        's', 35,
        't', 64,
        'u', 3,
        'v', 20,
        '{', 129,
        '}', 130,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '1') ADVANCE(12);
      if (lookahead == '3') ADVANCE(5);
      if (lookahead == '6') ADVANCE(10);
      if (lookahead == '8') ADVANCE(93);
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 2:
      if (lookahead == '1') ADVANCE(13);
      if (lookahead == '3') ADVANCE(6);
      if (lookahead == '6') ADVANCE(11);
      if (lookahead == '8') ADVANCE(97);
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 3:
      if (lookahead == '1') ADVANCE(13);
      if (lookahead == '3') ADVANCE(6);
      if (lookahead == '6') ADVANCE(11);
      if (lookahead == '8') ADVANCE(97);
      if (lookahead == 'i') ADVANCE(50);
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 4:
      if (lookahead == '2') ADVANCE(105);
      END_STATE();
    case 5:
      if (lookahead == '2') ADVANCE(95);
      END_STATE();
    case 6:
      if (lookahead == '2') ADVANCE(99);
      END_STATE();
    case 7:
      if (lookahead == '3') ADVANCE(4);
      if (lookahead == '6') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == '3') ADVANCE(4);
      if (lookahead == '6') ADVANCE(9);
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 9:
      if (lookahead == '4') ADVANCE(106);
      END_STATE();
    case 10:
      if (lookahead == '4') ADVANCE(96);
      END_STATE();
    case 11:
      if (lookahead == '4') ADVANCE(100);
      END_STATE();
    case 12:
      if (lookahead == '6') ADVANCE(94);
      END_STATE();
    case 13:
      if (lookahead == '6') ADVANCE(98);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(128);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == '=') ADVANCE(126);
      if (lookahead == 'd') ADVANCE(54);
      if (lookahead == 'f') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(79);
      if (lookahead == 't') ADVANCE(64);
      if (lookahead == 'v') ADVANCE(53);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(84);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(21);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(42);
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 21:
      if (lookahead == 'b') ADVANCE(47);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(114);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(80);
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(80);
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(82);
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(120);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 55:
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 58:
      if (lookahead == 'p') ADVANCE(18);
      END_STATE();
    case 59:
      if (lookahead == 'p') ADVANCE(55);
      END_STATE();
    case 60:
      if (lookahead == 'q') ADVANCE(77);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 65:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 66:
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 67:
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 68:
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 76:
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 77:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 78:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 79:
      if (lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 80:
      if (lookahead == 'v') ADVANCE(34);
      END_STATE();
    case 81:
      if (lookahead == 'x') ADVANCE(59);
      END_STATE();
    case 82:
      if (lookahead == 'z') ADVANCE(28);
      END_STATE();
    case 83:
      if (lookahead == '}') ADVANCE(130);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 84:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 85:
      if (eof) ADVANCE(87);
      ADVANCE_MAP(
        '!', 92,
        '*', 116,
        ':', 14,
        ';', 88,
        '=', 126,
        'b', 56,
        'c', 52,
        'd', 54,
        'f', 7,
        'i', 1,
        'n', 24,
        'o', 58,
        'r', 78,
        's', 35,
        'u', 2,
        'v', 20,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(85);
      END_STATE();
    case 86:
      if (eof) ADVANCE(87);
      if (lookahead == ';') ADVANCE(88);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_uint);
      if (lookahead == 'p') ADVANCE(75);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_size);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_uintptr);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_f32);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_f64);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_done);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_never);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_opaque);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_rune);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_str);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_valist);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_nullable);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_null);
      if (lookahead == 'a') ADVANCE(21);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(128);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 85},
  [3] = {.lex_state = 85},
  [4] = {.lex_state = 85},
  [5] = {.lex_state = 85},
  [6] = {.lex_state = 85},
  [7] = {.lex_state = 85},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 15},
  [12] = {.lex_state = 15},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 85},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 86},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 86},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 15},
  [40] = {.lex_state = 86},
  [41] = {.lex_state = 86},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 83},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 83},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 86},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 86},
  [54] = {.lex_state = 83},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 83},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
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
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_done] = ACTIONS(1),
    [anon_sym_never] = ACTIONS(1),
    [anon_sym_opaque] = ACTIONS(1),
    [anon_sym_rune] = ACTIONS(1),
    [anon_sym_str] = ACTIONS(1),
    [anon_sym_valist] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_nullable] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_export] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_use] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(52),
    [sym__import_or_declaration] = STATE(28),
    [sym__declaration] = STATE(28),
    [sym_global_declaration] = STATE(28),
    [sym_use_directive] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(7),
    [anon_sym_export] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(7),
    [anon_sym_use] = ACTIONS(11),
  },
  [2] = {
    [sym_type] = STATE(16),
    [sym__storage_class] = STATE(13),
    [sym__primitive_type] = STATE(13),
    [sym_pointer_type] = STATE(13),
    [anon_sym_const] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_i8] = ACTIONS(17),
    [anon_sym_i16] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(17),
    [anon_sym_i64] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(17),
    [anon_sym_u16] = ACTIONS(17),
    [anon_sym_u32] = ACTIONS(17),
    [anon_sym_u64] = ACTIONS(17),
    [anon_sym_int] = ACTIONS(17),
    [anon_sym_uint] = ACTIONS(19),
    [anon_sym_size] = ACTIONS(17),
    [anon_sym_uintptr] = ACTIONS(17),
    [anon_sym_f32] = ACTIONS(17),
    [anon_sym_f64] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_done] = ACTIONS(17),
    [anon_sym_never] = ACTIONS(17),
    [anon_sym_opaque] = ACTIONS(17),
    [anon_sym_rune] = ACTIONS(17),
    [anon_sym_str] = ACTIONS(17),
    [anon_sym_valist] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_nullable] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
  },
  [3] = {
    [sym_type] = STATE(20),
    [sym__storage_class] = STATE(13),
    [sym__primitive_type] = STATE(13),
    [sym_pointer_type] = STATE(13),
    [anon_sym_const] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_i8] = ACTIONS(17),
    [anon_sym_i16] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(17),
    [anon_sym_i64] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(17),
    [anon_sym_u16] = ACTIONS(17),
    [anon_sym_u32] = ACTIONS(17),
    [anon_sym_u64] = ACTIONS(17),
    [anon_sym_int] = ACTIONS(17),
    [anon_sym_uint] = ACTIONS(19),
    [anon_sym_size] = ACTIONS(17),
    [anon_sym_uintptr] = ACTIONS(17),
    [anon_sym_f32] = ACTIONS(17),
    [anon_sym_f64] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_done] = ACTIONS(17),
    [anon_sym_never] = ACTIONS(17),
    [anon_sym_opaque] = ACTIONS(17),
    [anon_sym_rune] = ACTIONS(17),
    [anon_sym_str] = ACTIONS(17),
    [anon_sym_valist] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_nullable] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
  },
  [4] = {
    [sym_type] = STATE(23),
    [sym__storage_class] = STATE(13),
    [sym__primitive_type] = STATE(13),
    [sym_pointer_type] = STATE(13),
    [anon_sym_const] = ACTIONS(13),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_i8] = ACTIONS(17),
    [anon_sym_i16] = ACTIONS(17),
    [anon_sym_i32] = ACTIONS(17),
    [anon_sym_i64] = ACTIONS(17),
    [anon_sym_u8] = ACTIONS(17),
    [anon_sym_u16] = ACTIONS(17),
    [anon_sym_u32] = ACTIONS(17),
    [anon_sym_u64] = ACTIONS(17),
    [anon_sym_int] = ACTIONS(17),
    [anon_sym_uint] = ACTIONS(19),
    [anon_sym_size] = ACTIONS(17),
    [anon_sym_uintptr] = ACTIONS(17),
    [anon_sym_f32] = ACTIONS(17),
    [anon_sym_f64] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_done] = ACTIONS(17),
    [anon_sym_never] = ACTIONS(17),
    [anon_sym_opaque] = ACTIONS(17),
    [anon_sym_rune] = ACTIONS(17),
    [anon_sym_str] = ACTIONS(17),
    [anon_sym_valist] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [anon_sym_nullable] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(21), 1,
      anon_sym_nullable,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(29), 1,
      anon_sym_uint,
    STATE(21), 3,
      sym__storage_class,
      sym__primitive_type,
      sym_pointer_type,
    ACTIONS(27), 21,
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
      anon_sym_bool,
      anon_sym_done,
      anon_sym_never,
      anon_sym_opaque,
      anon_sym_rune,
      anon_sym_str,
      anon_sym_valist,
      anon_sym_void,
  [41] = 5,
    ACTIONS(21), 1,
      anon_sym_nullable,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(33), 1,
      anon_sym_uint,
    STATE(19), 3,
      sym__storage_class,
      sym__primitive_type,
      sym_pointer_type,
    ACTIONS(31), 21,
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
      anon_sym_bool,
      anon_sym_done,
      anon_sym_never,
      anon_sym_opaque,
      anon_sym_rune,
      anon_sym_str,
      anon_sym_valist,
      anon_sym_void,
  [79] = 5,
    ACTIONS(21), 1,
      anon_sym_nullable,
    ACTIONS(23), 1,
      anon_sym_STAR,
    ACTIONS(29), 1,
      anon_sym_uint,
    STATE(21), 3,
      sym__storage_class,
      sym__primitive_type,
      sym_pointer_type,
    ACTIONS(27), 21,
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
      anon_sym_bool,
      anon_sym_done,
      anon_sym_never,
      anon_sym_opaque,
      anon_sym_rune,
      anon_sym_str,
      anon_sym_valist,
      anon_sym_void,
  [117] = 5,
    ACTIONS(9), 1,
      anon_sym_export,
    ACTIONS(11), 1,
      anon_sym_use,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(7), 2,
      anon_sym_const,
      anon_sym_let,
    STATE(38), 4,
      sym__import_or_declaration,
      sym__declaration,
      sym_global_declaration,
      sym_use_directive,
  [137] = 5,
    ACTIONS(9), 1,
      anon_sym_export,
    ACTIONS(11), 1,
      anon_sym_use,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(7), 2,
      anon_sym_const,
      anon_sym_let,
    STATE(38), 4,
      sym__import_or_declaration,
      sym__declaration,
      sym_global_declaration,
      sym_use_directive,
  [157] = 4,
    ACTIONS(9), 1,
      anon_sym_export,
    ACTIONS(11), 1,
      anon_sym_use,
    ACTIONS(7), 2,
      anon_sym_const,
      anon_sym_let,
    STATE(38), 4,
      sym__import_or_declaration,
      sym__declaration,
      sym_global_declaration,
      sym_use_directive,
  [174] = 3,
    STATE(31), 1,
      sym_literal,
    STATE(30), 2,
      sym__expression,
      sym_expression,
    ACTIONS(39), 5,
      anon_sym_done,
      anon_sym_void,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [189] = 3,
    STATE(31), 1,
      sym_literal,
    STATE(34), 1,
      sym_expression,
    ACTIONS(39), 5,
      anon_sym_done,
      anon_sym_void,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
  [203] = 1,
    ACTIONS(41), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [210] = 3,
    ACTIONS(45), 1,
      anon_sym_COMMA,
    STATE(14), 1,
      aux_sym_global_declaration_repeat1,
    ACTIONS(43), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [221] = 3,
    ACTIONS(50), 1,
      anon_sym_EQ,
    ACTIONS(52), 1,
      anon_sym_COLON_COLON,
    ACTIONS(48), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [232] = 1,
    ACTIONS(54), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [239] = 3,
    ACTIONS(58), 1,
      sym_identifier,
    STATE(32), 1,
      sym_global_binding,
    ACTIONS(56), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [250] = 3,
    ACTIONS(60), 1,
      anon_sym_COMMA,
    STATE(14), 1,
      aux_sym_global_declaration_repeat1,
    ACTIONS(56), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [261] = 1,
    ACTIONS(62), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [268] = 1,
    ACTIONS(64), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [275] = 1,
    ACTIONS(66), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_EQ,
  [282] = 3,
    ACTIONS(58), 1,
      sym_identifier,
    STATE(32), 1,
      sym_global_binding,
    ACTIONS(68), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [293] = 2,
    ACTIONS(72), 1,
      anon_sym_EQ,
    ACTIONS(70), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [302] = 3,
    ACTIONS(76), 1,
      anon_sym_COMMA,
    STATE(18), 1,
      aux_sym_global_declaration_repeat1,
    ACTIONS(74), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [313] = 2,
    STATE(45), 1,
      sym_global_declaration,
    ACTIONS(7), 2,
      anon_sym_const,
      anon_sym_let,
  [321] = 3,
    ACTIONS(78), 1,
      anon_sym_COMMA,
    ACTIONS(81), 1,
      anon_sym_RBRACE,
    STATE(26), 1,
      aux_sym_use_directive_repeat1,
  [331] = 3,
    ACTIONS(83), 1,
      anon_sym_COMMA,
    ACTIONS(85), 1,
      anon_sym_RBRACE,
    STATE(26), 1,
      aux_sym_use_directive_repeat1,
  [341] = 3,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(89), 1,
      anon_sym_SEMI,
    STATE(35), 1,
      aux_sym_source_file_repeat1,
  [351] = 1,
    ACTIONS(91), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [357] = 1,
    ACTIONS(70), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [363] = 1,
    ACTIONS(93), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [369] = 1,
    ACTIONS(43), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [375] = 3,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    ACTIONS(97), 1,
      anon_sym_SEMI,
    STATE(33), 1,
      aux_sym_source_file_repeat1,
  [385] = 1,
    ACTIONS(100), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [391] = 3,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(102), 1,
      anon_sym_SEMI,
    STATE(33), 1,
      aux_sym_source_file_repeat1,
  [401] = 3,
    ACTIONS(104), 1,
      anon_sym_COMMA,
    ACTIONS(106), 1,
      anon_sym_RBRACE,
    STATE(27), 1,
      aux_sym_use_directive_repeat1,
  [411] = 2,
    ACTIONS(108), 1,
      anon_sym_STAR,
    ACTIONS(110), 1,
      anon_sym_LBRACE,
  [418] = 1,
    ACTIONS(95), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [423] = 2,
    ACTIONS(112), 1,
      anon_sym_COLON,
    ACTIONS(114), 1,
      anon_sym_EQ,
  [430] = 2,
    ACTIONS(58), 1,
      sym_identifier,
    STATE(24), 1,
      sym_global_binding,
  [437] = 2,
    ACTIONS(58), 1,
      sym_identifier,
    STATE(32), 1,
      sym_global_binding,
  [444] = 1,
    ACTIONS(116), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [449] = 2,
    ACTIONS(85), 1,
      anon_sym_RBRACE,
    ACTIONS(118), 1,
      sym_name,
  [456] = 1,
    ACTIONS(120), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [461] = 1,
    ACTIONS(122), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [466] = 1,
    ACTIONS(81), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [471] = 1,
    ACTIONS(124), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [476] = 2,
    ACTIONS(118), 1,
      sym_name,
    ACTIONS(126), 1,
      anon_sym_RBRACE,
  [483] = 1,
    ACTIONS(128), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [488] = 1,
    ACTIONS(130), 1,
      sym_identifier,
  [492] = 1,
    ACTIONS(132), 1,
      anon_sym_STAR,
  [496] = 1,
    ACTIONS(134), 1,
      ts_builtin_sym_end,
  [500] = 1,
    ACTIONS(108), 1,
      sym_identifier,
  [504] = 1,
    ACTIONS(136), 1,
      sym_name,
  [508] = 1,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
  [512] = 1,
    ACTIONS(118), 1,
      sym_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 41,
  [SMALL_STATE(7)] = 79,
  [SMALL_STATE(8)] = 117,
  [SMALL_STATE(9)] = 137,
  [SMALL_STATE(10)] = 157,
  [SMALL_STATE(11)] = 174,
  [SMALL_STATE(12)] = 189,
  [SMALL_STATE(13)] = 203,
  [SMALL_STATE(14)] = 210,
  [SMALL_STATE(15)] = 221,
  [SMALL_STATE(16)] = 232,
  [SMALL_STATE(17)] = 239,
  [SMALL_STATE(18)] = 250,
  [SMALL_STATE(19)] = 261,
  [SMALL_STATE(20)] = 268,
  [SMALL_STATE(21)] = 275,
  [SMALL_STATE(22)] = 282,
  [SMALL_STATE(23)] = 293,
  [SMALL_STATE(24)] = 302,
  [SMALL_STATE(25)] = 313,
  [SMALL_STATE(26)] = 321,
  [SMALL_STATE(27)] = 331,
  [SMALL_STATE(28)] = 341,
  [SMALL_STATE(29)] = 351,
  [SMALL_STATE(30)] = 357,
  [SMALL_STATE(31)] = 363,
  [SMALL_STATE(32)] = 369,
  [SMALL_STATE(33)] = 375,
  [SMALL_STATE(34)] = 385,
  [SMALL_STATE(35)] = 391,
  [SMALL_STATE(36)] = 401,
  [SMALL_STATE(37)] = 411,
  [SMALL_STATE(38)] = 418,
  [SMALL_STATE(39)] = 423,
  [SMALL_STATE(40)] = 430,
  [SMALL_STATE(41)] = 437,
  [SMALL_STATE(42)] = 444,
  [SMALL_STATE(43)] = 449,
  [SMALL_STATE(44)] = 456,
  [SMALL_STATE(45)] = 461,
  [SMALL_STATE(46)] = 466,
  [SMALL_STATE(47)] = 471,
  [SMALL_STATE(48)] = 476,
  [SMALL_STATE(49)] = 483,
  [SMALL_STATE(50)] = 488,
  [SMALL_STATE(51)] = 492,
  [SMALL_STATE(52)] = 496,
  [SMALL_STATE(53)] = 500,
  [SMALL_STATE(54)] = 504,
  [SMALL_STATE(55)] = 508,
  [SMALL_STATE(56)] = 512,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_global_declaration_repeat1, 2, 0, 0),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_global_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_directive, 2, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_type, 3, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_declaration, 3, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 3, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_type, 2, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_declaration, 4, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_binding, 3, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_declaration, 2, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_use_directive_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_use_directive_repeat1, 2, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_binding, 5, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_directive, 4, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_directive, 6, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declaration, 2, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_directive, 7, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_directive, 8, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [134] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
