#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 33
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 23
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 8

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
  field_name = 3,
  field_path = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_members] = "members",
  [field_name] = "name",
  [field_path] = "path",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 3},
  [7] = {.index = 11, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_path, 0},
  [2] =
    {field_name, 1},
    {field_path, 0},
  [4] =
    {field_alias, 0},
    {field_path, 2},
  [6] =
    {field_members, 2},
    {field_path, 0},
  [8] =
    {field_members, 2},
    {field_members, 3},
    {field_path, 0},
  [11] =
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
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 1},
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
    [sym_source_file] = STATE(28),
    [sym__sub_unit] = STATE(4),
    [sym__imports] = STATE(4),
    [sym_use_directive] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_use] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(7), 1,
      sym_name,
    STATE(8), 1,
      sym__path,
    STATE(21), 5,
      sym__use_clause,
      sym_use_alias,
      sym_use_list,
      sym_use_wildcard,
      sym_identifier,
  [14] = 3,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      anon_sym_use,
    STATE(3), 4,
      sym__sub_unit,
      sym__imports,
      sym_use_directive,
      aux_sym_source_file_repeat1,
  [27] = 3,
    ACTIONS(5), 1,
      anon_sym_use,
    ACTIONS(14), 1,
      ts_builtin_sym_end,
    STATE(3), 4,
      sym__sub_unit,
      sym__imports,
      sym_use_directive,
      aux_sym_source_file_repeat1,
  [40] = 4,
    ACTIONS(16), 1,
      anon_sym_SEMI,
    ACTIONS(18), 1,
      anon_sym_EQ,
    ACTIONS(20), 1,
      anon_sym_COLON_COLON,
    STATE(14), 1,
      aux_sym__path_repeat1,
  [53] = 3,
    ACTIONS(16), 1,
      anon_sym_SEMI,
    ACTIONS(20), 1,
      anon_sym_COLON_COLON,
    STATE(14), 1,
      aux_sym__path_repeat1,
  [63] = 1,
    ACTIONS(22), 3,
      anon_sym_LBRACE,
      anon_sym_STAR,
      sym_name,
  [69] = 3,
    ACTIONS(24), 1,
      anon_sym_LBRACE,
    ACTIONS(26), 1,
      anon_sym_STAR,
    ACTIONS(28), 1,
      sym_name,
  [79] = 3,
    ACTIONS(30), 1,
      sym_name,
    STATE(24), 1,
      sym__path,
    STATE(26), 1,
      sym_identifier,
  [89] = 1,
    ACTIONS(32), 3,
      anon_sym_LBRACE,
      anon_sym_STAR,
      sym_name,
  [95] = 3,
    ACTIONS(34), 1,
      anon_sym_COMMA,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    STATE(11), 1,
      aux_sym_use_list_repeat1,
  [105] = 3,
    ACTIONS(39), 1,
      anon_sym_COMMA,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    STATE(11), 1,
      aux_sym_use_list_repeat1,
  [115] = 3,
    ACTIONS(43), 1,
      anon_sym_COMMA,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      aux_sym_use_list_repeat1,
  [125] = 2,
    ACTIONS(47), 1,
      anon_sym_COLON_COLON,
    STATE(19), 1,
      aux_sym__path_repeat1,
  [132] = 1,
    ACTIONS(49), 2,
      ts_builtin_sym_end,
      anon_sym_use,
  [137] = 2,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    ACTIONS(53), 1,
      sym_name,
  [144] = 1,
    ACTIONS(37), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [149] = 2,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    ACTIONS(53), 1,
      sym_name,
  [156] = 2,
    ACTIONS(55), 1,
      anon_sym_COLON_COLON,
    STATE(19), 1,
      aux_sym__path_repeat1,
  [163] = 1,
    ACTIONS(58), 1,
      anon_sym_COLON_COLON,
  [167] = 1,
    ACTIONS(60), 1,
      anon_sym_SEMI,
  [171] = 1,
    ACTIONS(62), 1,
      sym_name,
  [175] = 1,
    ACTIONS(64), 1,
      sym_name,
  [179] = 1,
    ACTIONS(28), 1,
      sym_name,
  [183] = 1,
    ACTIONS(66), 1,
      anon_sym_SEMI,
  [187] = 1,
    ACTIONS(68), 1,
      anon_sym_SEMI,
  [191] = 1,
    ACTIONS(70), 1,
      anon_sym_SEMI,
  [195] = 1,
    ACTIONS(72), 1,
      ts_builtin_sym_end,
  [199] = 1,
    ACTIONS(74), 1,
      anon_sym_SEMI,
  [203] = 1,
    ACTIONS(76), 1,
      anon_sym_SEMI,
  [207] = 1,
    ACTIONS(78), 1,
      anon_sym_SEMI,
  [211] = 1,
    ACTIONS(53), 1,
      sym_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 14,
  [SMALL_STATE(4)] = 27,
  [SMALL_STATE(5)] = 40,
  [SMALL_STATE(6)] = 53,
  [SMALL_STATE(7)] = 63,
  [SMALL_STATE(8)] = 69,
  [SMALL_STATE(9)] = 79,
  [SMALL_STATE(10)] = 89,
  [SMALL_STATE(11)] = 95,
  [SMALL_STATE(12)] = 105,
  [SMALL_STATE(13)] = 115,
  [SMALL_STATE(14)] = 125,
  [SMALL_STATE(15)] = 132,
  [SMALL_STATE(16)] = 137,
  [SMALL_STATE(17)] = 144,
  [SMALL_STATE(18)] = 149,
  [SMALL_STATE(19)] = 156,
  [SMALL_STATE(20)] = 163,
  [SMALL_STATE(21)] = 167,
  [SMALL_STATE(22)] = 171,
  [SMALL_STATE(23)] = 175,
  [SMALL_STATE(24)] = 179,
  [SMALL_STATE(25)] = 183,
  [SMALL_STATE(26)] = 187,
  [SMALL_STATE(27)] = 191,
  [SMALL_STATE(28)] = 195,
  [SMALL_STATE(29)] = 199,
  [SMALL_STATE(30)] = 203,
  [SMALL_STATE(31)] = 207,
  [SMALL_STATE(32)] = 211,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [14] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [16] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 1),
  [18] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [20] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__path, 3, 0, 0),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__path, 2, 0, 0),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_use_list_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_use_list_repeat1, 2, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_directive, 3, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__path_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__path_repeat1, 2, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_list, 4, 0, 5),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_alias, 3, 0, 4),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_list, 5, 0, 6),
  [72] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 2, 0, 3),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_wildcard, 2, 0, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_list, 6, 0, 7),
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
