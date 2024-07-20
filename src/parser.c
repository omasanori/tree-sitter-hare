#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 35
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 23
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 6

enum ts_symbol_identifiers {
  anon_sym_use = 1,
  anon_sym_SEMI = 2,
  anon_sym_EQ = 3,
  anon_sym_LBRACE = 4,
  anon_sym_COMMA = 5,
  anon_sym_RBRACE = 6,
  anon_sym_STAR = 7,
  anon_sym_COLON_COLON = 8,
  sym_name = 9,
  sym_source_file = 10,
  sym__sub_unit = 11,
  sym__imports = 12,
  sym_use_directive = 13,
  sym__use_clause = 14,
  sym_use_alias = 15,
  sym_use_list = 16,
  sym_use_wildcard = 17,
  sym_identifier = 18,
  sym__path = 19,
  aux_sym_source_file_repeat1 = 20,
  aux_sym_use_list_repeat1 = 21,
  aux_sym__path_repeat1 = 22,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_use] = "use",
  [anon_sym_SEMI] = ";",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_STAR] = "*",
  [anon_sym_COLON_COLON] = "::",
  [sym_name] = "name",
  [sym_source_file] = "source_file",
  [sym__sub_unit] = "_sub_unit",
  [sym__imports] = "_imports",
  [sym_use_directive] = "use_directive",
  [sym__use_clause] = "_use_clause",
  [sym_use_alias] = "use_alias",
  [sym_use_list] = "use_list",
  [sym_use_wildcard] = "use_wildcard",
  [sym_identifier] = "identifier",
  [sym__path] = "_path",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_use_list_repeat1] = "use_list_repeat1",
  [aux_sym__path_repeat1] = "_path_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_use] = anon_sym_use,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [sym_name] = sym_name,
  [sym_source_file] = sym_source_file,
  [sym__sub_unit] = sym__sub_unit,
  [sym__imports] = sym__imports,
  [sym_use_directive] = sym_use_directive,
  [sym__use_clause] = sym__use_clause,
  [sym_use_alias] = sym_use_alias,
  [sym_use_list] = sym_use_list,
  [sym_use_wildcard] = sym_use_wildcard,
  [sym_identifier] = sym_identifier,
  [sym__path] = sym__path,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_use_list_repeat1] = aux_sym_use_list_repeat1,
  [aux_sym__path_repeat1] = aux_sym__path_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_use] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__sub_unit] = {
    .visible = false,
    .named = true,
  },
  [sym__imports] = {
    .visible = false,
    .named = true,
  },
  [sym_use_directive] = {
    .visible = true,
    .named = true,
  },
  [sym__use_clause] = {
    .visible = false,
    .named = true,
  },
  [sym_use_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_use_list] = {
    .visible = true,
    .named = true,
  },
  [sym_use_wildcard] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__path] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_use_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__path_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_alias = 1,
  field_members = 2,
  field_path = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_members] = "members",
  [field_path] = "path",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 3},
  [5] = {.index = 8, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_path, 0},
  [1] =
    {field_alias, 0},
    {field_path, 2},
  [3] =
    {field_members, 2},
    {field_path, 0},
  [5] =
    {field_members, 2},
    {field_members, 3},
    {field_path, 0},
  [8] =
    {field_members, 2},
    {field_members, 3},
    {field_members, 4},
    {field_path, 0},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(5);
      ADVANCE_MAP(
        '*', 12,
        ',', 10,
        ':', 2,
        ';', 7,
        '=', 8,
        'u', 4,
        '{', 9,
        '}', 11,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '{') ADVANCE(9);
      if (lookahead == '}') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 2:
      if (lookahead == ':') ADVANCE(13);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == 's') ADVANCE(3);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_use] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(30),
    [sym__sub_unit] = STATE(3),
    [sym__imports] = STATE(3),
    [sym_use_directive] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_use] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(7), 1,
      sym_name,
    STATE(15), 1,
      sym__use_clause,
    STATE(21), 1,
      sym__path,
    STATE(27), 4,
      sym_use_alias,
      sym_use_list,
      sym_use_wildcard,
      sym_identifier,
  [16] = 3,
    ACTIONS(5), 1,
      anon_sym_use,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    STATE(4), 4,
      sym__sub_unit,
      sym__imports,
      sym_use_directive,
      aux_sym_source_file_repeat1,
  [29] = 3,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      anon_sym_use,
    STATE(4), 4,
      sym__sub_unit,
      sym__imports,
      sym_use_directive,
      aux_sym_source_file_repeat1,
  [42] = 4,
    ACTIONS(16), 1,
      anon_sym_SEMI,
    ACTIONS(18), 1,
      anon_sym_EQ,
    ACTIONS(20), 1,
      anon_sym_COLON_COLON,
    STATE(13), 1,
      aux_sym__path_repeat1,
  [55] = 2,
    ACTIONS(24), 1,
      sym_name,
    ACTIONS(22), 2,
      anon_sym_LBRACE,
      anon_sym_STAR,
  [63] = 3,
    ACTIONS(26), 1,
      anon_sym_COMMA,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      aux_sym_use_list_repeat1,
  [73] = 3,
    ACTIONS(31), 1,
      anon_sym_COMMA,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      aux_sym_use_list_repeat1,
  [83] = 3,
    ACTIONS(35), 1,
      anon_sym_COMMA,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      aux_sym_use_list_repeat1,
  [93] = 2,
    ACTIONS(41), 1,
      sym_name,
    ACTIONS(39), 2,
      anon_sym_LBRACE,
      anon_sym_STAR,
  [101] = 2,
    ACTIONS(16), 1,
      anon_sym_SEMI,
    ACTIONS(43), 1,
      anon_sym_COLON_COLON,
  [108] = 2,
    ACTIONS(45), 1,
      sym_name,
    STATE(31), 1,
      sym_identifier,
  [115] = 2,
    ACTIONS(47), 1,
      anon_sym_COLON_COLON,
    STATE(20), 1,
      aux_sym__path_repeat1,
  [122] = 1,
    ACTIONS(49), 2,
      ts_builtin_sym_end,
      anon_sym_use,
  [127] = 1,
    ACTIONS(51), 2,
      ts_builtin_sym_end,
      anon_sym_use,
  [132] = 2,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    ACTIONS(55), 1,
      sym_name,
  [139] = 1,
    ACTIONS(29), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [144] = 2,
    ACTIONS(57), 1,
      anon_sym_SEMI,
    ACTIONS(59), 1,
      anon_sym_COLON_COLON,
  [151] = 2,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    ACTIONS(55), 1,
      sym_name,
  [158] = 2,
    ACTIONS(61), 1,
      anon_sym_COLON_COLON,
    STATE(20), 1,
      aux_sym__path_repeat1,
  [165] = 2,
    ACTIONS(64), 1,
      anon_sym_LBRACE,
    ACTIONS(66), 1,
      anon_sym_STAR,
  [172] = 1,
    ACTIONS(68), 1,
      sym_name,
  [176] = 1,
    ACTIONS(59), 1,
      anon_sym_COLON_COLON,
  [180] = 1,
    ACTIONS(41), 1,
      sym_name,
  [184] = 1,
    ACTIONS(70), 1,
      sym_name,
  [188] = 1,
    ACTIONS(72), 1,
      anon_sym_SEMI,
  [192] = 1,
    ACTIONS(74), 1,
      anon_sym_SEMI,
  [196] = 1,
    ACTIONS(57), 1,
      anon_sym_SEMI,
  [200] = 1,
    ACTIONS(76), 1,
      anon_sym_SEMI,
  [204] = 1,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
  [208] = 1,
    ACTIONS(80), 1,
      anon_sym_SEMI,
  [212] = 1,
    ACTIONS(82), 1,
      anon_sym_SEMI,
  [216] = 1,
    ACTIONS(84), 1,
      anon_sym_SEMI,
  [220] = 1,
    ACTIONS(55), 1,
      sym_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 16,
  [SMALL_STATE(4)] = 29,
  [SMALL_STATE(5)] = 42,
  [SMALL_STATE(6)] = 55,
  [SMALL_STATE(7)] = 63,
  [SMALL_STATE(8)] = 73,
  [SMALL_STATE(9)] = 83,
  [SMALL_STATE(10)] = 93,
  [SMALL_STATE(11)] = 101,
  [SMALL_STATE(12)] = 108,
  [SMALL_STATE(13)] = 115,
  [SMALL_STATE(14)] = 122,
  [SMALL_STATE(15)] = 127,
  [SMALL_STATE(16)] = 132,
  [SMALL_STATE(17)] = 139,
  [SMALL_STATE(18)] = 144,
  [SMALL_STATE(19)] = 151,
  [SMALL_STATE(20)] = 158,
  [SMALL_STATE(21)] = 165,
  [SMALL_STATE(22)] = 172,
  [SMALL_STATE(23)] = 176,
  [SMALL_STATE(24)] = 180,
  [SMALL_STATE(25)] = 184,
  [SMALL_STATE(26)] = 188,
  [SMALL_STATE(27)] = 192,
  [SMALL_STATE(28)] = 196,
  [SMALL_STATE(29)] = 200,
  [SMALL_STATE(30)] = 204,
  [SMALL_STATE(31)] = 208,
  [SMALL_STATE(32)] = 212,
  [SMALL_STATE(33)] = 216,
  [SMALL_STATE(34)] = 220,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [16] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [18] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [20] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__path, 2, 0, 0),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_use_list_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_use_list_repeat1, 2, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__path, 3, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__use_clause, 2, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_directive, 2, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 3, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__path_repeat1, 2, 0, 0),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__path_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_list, 4, 0, 3),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_list, 5, 0, 4),
  [78] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_alias, 3, 0, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_wildcard, 2, 0, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_list, 6, 0, 5),
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
