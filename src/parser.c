#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 77
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 72
#define ALIAS_COUNT 0
#define TOKEN_COUNT 45
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_SLASH_SLASH = 2,
  aux_sym_comment_token1 = 3,
  anon_sym_sequence_DASHdiagram = 4,
  anon_sym_entity_DASHrelationship_DASHdiagram = 5,
  anon_sym_cloud_DASHarchitecture_DASHdiagram = 6,
  anon_sym_flowchart_DASHdiagram = 7,
  anon_sym_direction = 8,
  anon_sym_left = 9,
  anon_sym_right = 10,
  anon_sym_up = 11,
  anon_sym_down = 12,
  anon_sym_title = 13,
  aux_sym_title_token1 = 14,
  anon_sym_LF = 15,
  anon_sym_LBRACK = 16,
  anon_sym_COMMA = 17,
  anon_sym_RBRACK = 18,
  anon_sym_label = 19,
  anon_sym_COLON = 20,
  anon_sym_shape = 21,
  anon_sym_icon = 22,
  anon_sym_color = 23,
  anon_sym_LBRACE = 24,
  anon_sym_RBRACE = 25,
  anon_sym_rectangle = 26,
  anon_sym_cylinder = 27,
  anon_sym_diamond = 28,
  anon_sym_document = 29,
  anon_sym_ellipse = 30,
  anon_sym_hexagon = 31,
  anon_sym_oval = 32,
  anon_sym_parallelogram = 33,
  anon_sym_star = 34,
  anon_sym_trapezoid = 35,
  anon_sym_triangle = 36,
  sym_color_hex = 37,
  anon_sym_GT = 38,
  anon_sym_LT = 39,
  anon_sym_LT_GT = 40,
  anon_sym_DASH = 41,
  anon_sym_DASH_DASH = 42,
  anon_sym_DASH_DASH_GT = 43,
  anon_sym_LT_DASH_DASH = 44,
  sym_source_file = 45,
  sym_comment = 46,
  sym_heading = 47,
  sym_stmt_list = 48,
  sym_stmt = 49,
  sym_directive_stmt = 50,
  sym_direction = 51,
  sym_title = 52,
  sym_node_stmt = 53,
  sym_node = 54,
  sym_node_properties = 55,
  sym_property = 56,
  sym_group_stmt = 57,
  sym_group_block = 58,
  sym_group_item = 59,
  sym_group_properties = 60,
  sym_shape = 61,
  sym_color = 62,
  sym_color_name = 63,
  sym_relation_stmt = 64,
  sym_relation_target = 65,
  sym_relation_connector = 66,
  sym_relation_label = 67,
  aux_sym_stmt_list_repeat1 = 68,
  aux_sym_node_properties_repeat1 = 69,
  aux_sym_group_block_repeat1 = 70,
  aux_sym_relation_stmt_repeat1 = 71,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_sequence_DASHdiagram] = "sequence-diagram",
  [anon_sym_entity_DASHrelationship_DASHdiagram] = "entity-relationship-diagram",
  [anon_sym_cloud_DASHarchitecture_DASHdiagram] = "cloud-architecture-diagram",
  [anon_sym_flowchart_DASHdiagram] = "flowchart-diagram",
  [anon_sym_direction] = "direction",
  [anon_sym_left] = "left",
  [anon_sym_right] = "right",
  [anon_sym_up] = "up",
  [anon_sym_down] = "down",
  [anon_sym_title] = "title",
  [aux_sym_title_token1] = "title_token1",
  [anon_sym_LF] = "\n",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_label] = "label",
  [anon_sym_COLON] = ":",
  [anon_sym_shape] = "shape",
  [anon_sym_icon] = "icon",
  [anon_sym_color] = "color",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_rectangle] = "rectangle",
  [anon_sym_cylinder] = "cylinder",
  [anon_sym_diamond] = "diamond",
  [anon_sym_document] = "document",
  [anon_sym_ellipse] = "ellipse",
  [anon_sym_hexagon] = "hexagon",
  [anon_sym_oval] = "oval",
  [anon_sym_parallelogram] = "parallelogram",
  [anon_sym_star] = "star",
  [anon_sym_trapezoid] = "trapezoid",
  [anon_sym_triangle] = "triangle",
  [sym_color_hex] = "color_hex",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_LT_GT] = "<>",
  [anon_sym_DASH] = "-",
  [anon_sym_DASH_DASH] = "--",
  [anon_sym_DASH_DASH_GT] = "-->",
  [anon_sym_LT_DASH_DASH] = "<--",
  [sym_source_file] = "source_file",
  [sym_comment] = "comment",
  [sym_heading] = "heading",
  [sym_stmt_list] = "stmt_list",
  [sym_stmt] = "stmt",
  [sym_directive_stmt] = "directive_stmt",
  [sym_direction] = "direction",
  [sym_title] = "title",
  [sym_node_stmt] = "node_stmt",
  [sym_node] = "node",
  [sym_node_properties] = "node_properties",
  [sym_property] = "property",
  [sym_group_stmt] = "group_stmt",
  [sym_group_block] = "group_block",
  [sym_group_item] = "group_item",
  [sym_group_properties] = "group_properties",
  [sym_shape] = "shape",
  [sym_color] = "color",
  [sym_color_name] = "color_name",
  [sym_relation_stmt] = "relation_stmt",
  [sym_relation_target] = "relation_target",
  [sym_relation_connector] = "relation_connector",
  [sym_relation_label] = "relation_label",
  [aux_sym_stmt_list_repeat1] = "stmt_list_repeat1",
  [aux_sym_node_properties_repeat1] = "node_properties_repeat1",
  [aux_sym_group_block_repeat1] = "group_block_repeat1",
  [aux_sym_relation_stmt_repeat1] = "relation_stmt_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_sequence_DASHdiagram] = anon_sym_sequence_DASHdiagram,
  [anon_sym_entity_DASHrelationship_DASHdiagram] = anon_sym_entity_DASHrelationship_DASHdiagram,
  [anon_sym_cloud_DASHarchitecture_DASHdiagram] = anon_sym_cloud_DASHarchitecture_DASHdiagram,
  [anon_sym_flowchart_DASHdiagram] = anon_sym_flowchart_DASHdiagram,
  [anon_sym_direction] = anon_sym_direction,
  [anon_sym_left] = anon_sym_left,
  [anon_sym_right] = anon_sym_right,
  [anon_sym_up] = anon_sym_up,
  [anon_sym_down] = anon_sym_down,
  [anon_sym_title] = anon_sym_title,
  [aux_sym_title_token1] = aux_sym_title_token1,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_label] = anon_sym_label,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_shape] = anon_sym_shape,
  [anon_sym_icon] = anon_sym_icon,
  [anon_sym_color] = anon_sym_color,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_rectangle] = anon_sym_rectangle,
  [anon_sym_cylinder] = anon_sym_cylinder,
  [anon_sym_diamond] = anon_sym_diamond,
  [anon_sym_document] = anon_sym_document,
  [anon_sym_ellipse] = anon_sym_ellipse,
  [anon_sym_hexagon] = anon_sym_hexagon,
  [anon_sym_oval] = anon_sym_oval,
  [anon_sym_parallelogram] = anon_sym_parallelogram,
  [anon_sym_star] = anon_sym_star,
  [anon_sym_trapezoid] = anon_sym_trapezoid,
  [anon_sym_triangle] = anon_sym_triangle,
  [sym_color_hex] = sym_color_hex,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [anon_sym_DASH_DASH_GT] = anon_sym_DASH_DASH_GT,
  [anon_sym_LT_DASH_DASH] = anon_sym_LT_DASH_DASH,
  [sym_source_file] = sym_source_file,
  [sym_comment] = sym_comment,
  [sym_heading] = sym_heading,
  [sym_stmt_list] = sym_stmt_list,
  [sym_stmt] = sym_stmt,
  [sym_directive_stmt] = sym_directive_stmt,
  [sym_direction] = sym_direction,
  [sym_title] = sym_title,
  [sym_node_stmt] = sym_node_stmt,
  [sym_node] = sym_node,
  [sym_node_properties] = sym_node_properties,
  [sym_property] = sym_property,
  [sym_group_stmt] = sym_group_stmt,
  [sym_group_block] = sym_group_block,
  [sym_group_item] = sym_group_item,
  [sym_group_properties] = sym_group_properties,
  [sym_shape] = sym_shape,
  [sym_color] = sym_color,
  [sym_color_name] = sym_color_name,
  [sym_relation_stmt] = sym_relation_stmt,
  [sym_relation_target] = sym_relation_target,
  [sym_relation_connector] = sym_relation_connector,
  [sym_relation_label] = sym_relation_label,
  [aux_sym_stmt_list_repeat1] = aux_sym_stmt_list_repeat1,
  [aux_sym_node_properties_repeat1] = aux_sym_node_properties_repeat1,
  [aux_sym_group_block_repeat1] = aux_sym_group_block_repeat1,
  [aux_sym_relation_stmt_repeat1] = aux_sym_relation_stmt_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_sequence_DASHdiagram] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_entity_DASHrelationship_DASHdiagram] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cloud_DASHarchitecture_DASHdiagram] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_flowchart_DASHdiagram] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_direction] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_left] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_right] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_up] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_down] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_title] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_title_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_label] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shape] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_icon] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_color] = {
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
  [anon_sym_rectangle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cylinder] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_diamond] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_document] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ellipse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hexagon] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_oval] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_parallelogram] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_star] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trapezoid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_triangle] = {
    .visible = true,
    .named = false,
  },
  [sym_color_hex] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_heading] = {
    .visible = true,
    .named = true,
  },
  [sym_stmt_list] = {
    .visible = true,
    .named = true,
  },
  [sym_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_direction] = {
    .visible = true,
    .named = true,
  },
  [sym_title] = {
    .visible = true,
    .named = true,
  },
  [sym_node_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_node] = {
    .visible = true,
    .named = true,
  },
  [sym_node_properties] = {
    .visible = true,
    .named = true,
  },
  [sym_property] = {
    .visible = true,
    .named = true,
  },
  [sym_group_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_group_block] = {
    .visible = true,
    .named = true,
  },
  [sym_group_item] = {
    .visible = true,
    .named = true,
  },
  [sym_group_properties] = {
    .visible = true,
    .named = true,
  },
  [sym_shape] = {
    .visible = true,
    .named = true,
  },
  [sym_color] = {
    .visible = true,
    .named = true,
  },
  [sym_color_name] = {
    .visible = true,
    .named = true,
  },
  [sym_relation_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_relation_target] = {
    .visible = true,
    .named = true,
  },
  [sym_relation_connector] = {
    .visible = true,
    .named = true,
  },
  [sym_relation_label] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_stmt_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_node_properties_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_group_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_relation_stmt_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_modifiers = 1,
  field_name = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_modifiers] = "modifiers",
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_modifiers, 1},
    {field_name, 0},
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
  [17] = 8,
  [18] = 18,
  [19] = 12,
  [20] = 9,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 2,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 27,
  [29] = 29,
  [30] = 27,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 12,
  [37] = 8,
  [38] = 38,
  [39] = 9,
  [40] = 11,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 48,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 51,
  [54] = 48,
  [55] = 51,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '\r') SKIP(0)
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == ',') ADVANCE(22);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == ':') ADVANCE(24);
      if (lookahead == '<') ADVANCE(29);
      if (lookahead == '>') ADVANCE(28);
      if (lookahead == '[') ADVANCE(21);
      if (lookahead == ']') ADVANCE(23);
      if (lookahead == '{') ADVANCE(25);
      if (lookahead == '}') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 1:
      if (lookahead == '-') ADVANCE(36);
      END_STATE();
    case 2:
      if (lookahead == '/') ADVANCE(13);
      END_STATE();
    case 3:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(3)
      if (lookahead == '\r') SKIP(3)
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '<') ADVANCE(29);
      if (lookahead == '>') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 4:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      END_STATE();
    case 5:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(4);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(5);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(6);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(7);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(8);
      END_STATE();
    case 10:
      if (eof) ADVANCE(12);
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '\r') SKIP(10)
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '<') ADVANCE(29);
      if (lookahead == '>') ADVANCE(28);
      if (lookahead == '[') ADVANCE(21);
      if (lookahead == '{') ADVANCE(25);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 11:
      if (eof) ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(11)
      if (lookahead == '\r') SKIP(11)
      if (lookahead == ',') ADVANCE(22);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '[') ADVANCE(21);
      if (lookahead == ']') ADVANCE(23);
      if (lookahead == '{') ADVANCE(25);
      if (lookahead == '}') ADVANCE(26);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_title_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_color_hex);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '-') ADVANCE(1);
      if (lookahead == '>') ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead == '>') ADVANCE(35);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead == '>') ADVANCE(35);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH);
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
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '\r') SKIP(0)
      if (lookahead == 'c') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(2);
      if (lookahead == 'e') ADVANCE(3);
      if (lookahead == 'f') ADVANCE(4);
      if (lookahead == 'h') ADVANCE(5);
      if (lookahead == 'i') ADVANCE(6);
      if (lookahead == 'l') ADVANCE(7);
      if (lookahead == 'o') ADVANCE(8);
      if (lookahead == 'p') ADVANCE(9);
      if (lookahead == 'r') ADVANCE(10);
      if (lookahead == 's') ADVANCE(11);
      if (lookahead == 't') ADVANCE(12);
      if (lookahead == 'u') ADVANCE(13);
      END_STATE();
    case 1:
      if (lookahead == 'l') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(15);
      if (lookahead == 'y') ADVANCE(16);
      END_STATE();
    case 2:
      if (lookahead == 'i') ADVANCE(17);
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 3:
      if (lookahead == 'l') ADVANCE(19);
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 4:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 6:
      if (lookahead == 'c') ADVANCE(23);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(24);
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 8:
      if (lookahead == 'v') ADVANCE(26);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(30);
      if (lookahead == 'h') ADVANCE(31);
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 12:
      if (lookahead == 'i') ADVANCE(33);
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 13:
      if (lookahead == 'p') ADVANCE(35);
      END_STATE();
    case 14:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(39);
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(41);
      if (lookahead == 'w') ADVANCE(42);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 20:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 21:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 22:
      if (lookahead == 'x') ADVANCE(46);
      END_STATE();
    case 23:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 24:
      if (lookahead == 'b') ADVANCE(48);
      END_STATE();
    case 25:
      if (lookahead == 'f') ADVANCE(49);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 27:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(52);
      END_STATE();
    case 29:
      if (lookahead == 'g') ADVANCE(53);
      END_STATE();
    case 30:
      if (lookahead == 'q') ADVANCE(54);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(58);
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_up);
      END_STATE();
    case 36:
      if (lookahead == 'u') ADVANCE(60);
      END_STATE();
    case 37:
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 39:
      if (lookahead == 'm') ADVANCE(63);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 41:
      if (lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 45:
      if (lookahead == 'w') ADVANCE(69);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 53:
      if (lookahead == 'h') ADVANCE(77);
      END_STATE();
    case 54:
      if (lookahead == 'u') ADVANCE(78);
      END_STATE();
    case 55:
      if (lookahead == 'p') ADVANCE(79);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 58:
      if (lookahead == 'p') ADVANCE(82);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(84);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 63:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(88);
      END_STATE();
    case 65:
      if (lookahead == 'm') ADVANCE(89);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_down);
      END_STATE();
    case 67:
      if (lookahead == 'p') ADVANCE(90);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(92);
      END_STATE();
    case 70:
      if (lookahead == 'g') ADVANCE(93);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_icon);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_oval);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(95);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_star);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 84:
      if (lookahead == '-') ADVANCE(103);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_color);
      END_STATE();
    case 86:
      if (lookahead == 'd') ADVANCE(104);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 90:
      if (lookahead == 's') ADVANCE(108);
      END_STATE();
    case 91:
      if (lookahead == 'y') ADVANCE(109);
      END_STATE();
    case 92:
      if (lookahead == 'h') ADVANCE(110);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 95:
      if (lookahead == 'l') ADVANCE(112);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_shape);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_title);
      END_STATE();
    case 101:
      if (lookahead == 'z') ADVANCE(115);
      END_STATE();
    case 102:
      if (lookahead == 'g') ADVANCE(116);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 105:
      if (lookahead == 'd') ADVANCE(119);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 109:
      if (lookahead == '-') ADVANCE(123);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(124);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 113:
      if (lookahead == 'g') ADVANCE(127);
      END_STATE();
    case 114:
      if (lookahead == 'c') ADVANCE(128);
      END_STATE();
    case 115:
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 116:
      if (lookahead == 'l') ADVANCE(130);
      END_STATE();
    case 117:
      if (lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 118:
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_diamond);
      END_STATE();
    case 120:
      if (lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_ellipse);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(136);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_hexagon);
      END_STATE();
    case 126:
      if (lookahead == 'l') ADVANCE(137);
      END_STATE();
    case 127:
      if (lookahead == 'l') ADVANCE(138);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(140);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 131:
      if (lookahead == 'c') ADVANCE(142);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_cylinder);
      END_STATE();
    case 133:
      if (lookahead == 'n') ADVANCE(143);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_document);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 137:
      if (lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 139:
      if (lookahead == '-') ADVANCE(148);
      END_STATE();
    case 140:
      if (lookahead == 'd') ADVANCE(149);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_triangle);
      END_STATE();
    case 142:
      if (lookahead == 'h') ADVANCE(150);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_direction);
      END_STATE();
    case 144:
      if (lookahead == 'l') ADVANCE(151);
      END_STATE();
    case 145:
      if (lookahead == '-') ADVANCE(152);
      END_STATE();
    case 146:
      if (lookahead == 'g') ADVANCE(153);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_rectangle);
      END_STATE();
    case 148:
      if (lookahead == 'd') ADVANCE(154);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_trapezoid);
      END_STATE();
    case 150:
      if (lookahead == 'i') ADVANCE(155);
      END_STATE();
    case 151:
      if (lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 152:
      if (lookahead == 'd') ADVANCE(157);
      END_STATE();
    case 153:
      if (lookahead == 'r') ADVANCE(158);
      END_STATE();
    case 154:
      if (lookahead == 'i') ADVANCE(159);
      END_STATE();
    case 155:
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 156:
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 157:
      if (lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 158:
      if (lookahead == 'a') ADVANCE(163);
      END_STATE();
    case 159:
      if (lookahead == 'a') ADVANCE(164);
      END_STATE();
    case 160:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 161:
      if (lookahead == 'i') ADVANCE(166);
      END_STATE();
    case 162:
      if (lookahead == 'a') ADVANCE(167);
      END_STATE();
    case 163:
      if (lookahead == 'm') ADVANCE(168);
      END_STATE();
    case 164:
      if (lookahead == 'g') ADVANCE(169);
      END_STATE();
    case 165:
      if (lookahead == 'c') ADVANCE(170);
      END_STATE();
    case 166:
      if (lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 167:
      if (lookahead == 'g') ADVANCE(172);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_parallelogram);
      END_STATE();
    case 169:
      if (lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 170:
      if (lookahead == 't') ADVANCE(174);
      END_STATE();
    case 171:
      if (lookahead == 'n') ADVANCE(175);
      END_STATE();
    case 172:
      if (lookahead == 'r') ADVANCE(176);
      END_STATE();
    case 173:
      if (lookahead == 'a') ADVANCE(177);
      END_STATE();
    case 174:
      if (lookahead == 'u') ADVANCE(178);
      END_STATE();
    case 175:
      if (lookahead == 's') ADVANCE(179);
      END_STATE();
    case 176:
      if (lookahead == 'a') ADVANCE(180);
      END_STATE();
    case 177:
      if (lookahead == 'm') ADVANCE(181);
      END_STATE();
    case 178:
      if (lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 179:
      if (lookahead == 'h') ADVANCE(183);
      END_STATE();
    case 180:
      if (lookahead == 'm') ADVANCE(184);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_sequence_DASHdiagram);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 183:
      if (lookahead == 'i') ADVANCE(186);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_flowchart_DASHdiagram);
      END_STATE();
    case 185:
      if (lookahead == '-') ADVANCE(187);
      END_STATE();
    case 186:
      if (lookahead == 'p') ADVANCE(188);
      END_STATE();
    case 187:
      if (lookahead == 'd') ADVANCE(189);
      END_STATE();
    case 188:
      if (lookahead == '-') ADVANCE(190);
      END_STATE();
    case 189:
      if (lookahead == 'i') ADVANCE(191);
      END_STATE();
    case 190:
      if (lookahead == 'd') ADVANCE(192);
      END_STATE();
    case 191:
      if (lookahead == 'a') ADVANCE(193);
      END_STATE();
    case 192:
      if (lookahead == 'i') ADVANCE(194);
      END_STATE();
    case 193:
      if (lookahead == 'g') ADVANCE(195);
      END_STATE();
    case 194:
      if (lookahead == 'a') ADVANCE(196);
      END_STATE();
    case 195:
      if (lookahead == 'r') ADVANCE(197);
      END_STATE();
    case 196:
      if (lookahead == 'g') ADVANCE(198);
      END_STATE();
    case 197:
      if (lookahead == 'a') ADVANCE(199);
      END_STATE();
    case 198:
      if (lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 199:
      if (lookahead == 'm') ADVANCE(201);
      END_STATE();
    case 200:
      if (lookahead == 'a') ADVANCE(202);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_cloud_DASHarchitecture_DASHdiagram);
      END_STATE();
    case 202:
      if (lookahead == 'm') ADVANCE(203);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_entity_DASHrelationship_DASHdiagram);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 11},
  [2] = {.lex_state = 10},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 11},
  [5] = {.lex_state = 11},
  [6] = {.lex_state = 11},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 11},
  [16] = {.lex_state = 10},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 11},
  [25] = {.lex_state = 11},
  [26] = {.lex_state = 11},
  [27] = {.lex_state = 11},
  [28] = {.lex_state = 11},
  [29] = {.lex_state = 11},
  [30] = {.lex_state = 11},
  [31] = {.lex_state = 11},
  [32] = {.lex_state = 11},
  [33] = {.lex_state = 11},
  [34] = {.lex_state = 11},
  [35] = {.lex_state = 11},
  [36] = {.lex_state = 11},
  [37] = {.lex_state = 11},
  [38] = {.lex_state = 11},
  [39] = {.lex_state = 11},
  [40] = {.lex_state = 11},
  [41] = {.lex_state = 11},
  [42] = {.lex_state = 11},
  [43] = {.lex_state = 11},
  [44] = {.lex_state = 11},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 11},
  [47] = {.lex_state = 11},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 11},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 11},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 11},
  [57] = {.lex_state = 11},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 11},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 11},
  [73] = {.lex_state = 15},
  [74] = {.lex_state = 11},
  [75] = {.lex_state = 3},
  [76] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_sequence_DASHdiagram] = ACTIONS(1),
    [anon_sym_entity_DASHrelationship_DASHdiagram] = ACTIONS(1),
    [anon_sym_cloud_DASHarchitecture_DASHdiagram] = ACTIONS(1),
    [anon_sym_flowchart_DASHdiagram] = ACTIONS(1),
    [anon_sym_direction] = ACTIONS(1),
    [anon_sym_left] = ACTIONS(1),
    [anon_sym_right] = ACTIONS(1),
    [anon_sym_up] = ACTIONS(1),
    [anon_sym_down] = ACTIONS(1),
    [anon_sym_title] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_label] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_shape] = ACTIONS(1),
    [anon_sym_icon] = ACTIONS(1),
    [anon_sym_color] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_rectangle] = ACTIONS(1),
    [anon_sym_cylinder] = ACTIONS(1),
    [anon_sym_diamond] = ACTIONS(1),
    [anon_sym_document] = ACTIONS(1),
    [anon_sym_ellipse] = ACTIONS(1),
    [anon_sym_hexagon] = ACTIONS(1),
    [anon_sym_oval] = ACTIONS(1),
    [anon_sym_parallelogram] = ACTIONS(1),
    [anon_sym_star] = ACTIONS(1),
    [anon_sym_trapezoid] = ACTIONS(1),
    [anon_sym_triangle] = ACTIONS(1),
    [sym_color_hex] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_DASH_DASH_GT] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(67),
    [sym_comment] = STATE(1),
    [sym_heading] = STATE(5),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_sequence_DASHdiagram] = ACTIONS(5),
    [anon_sym_entity_DASHrelationship_DASHdiagram] = ACTIONS(5),
    [anon_sym_cloud_DASHarchitecture_DASHdiagram] = ACTIONS(5),
    [anon_sym_flowchart_DASHdiagram] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    STATE(2), 1,
      sym_comment,
    STATE(11), 1,
      sym_node_properties,
    STATE(32), 1,
      sym_group_block,
    STATE(65), 1,
      sym_group_properties,
    ACTIONS(7), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(9), 10,
      anon_sym_direction,
      anon_sym_title,
      sym_identifier,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_GT,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      anon_sym_DASH_DASH_GT,
      anon_sym_LT_DASH_DASH,
  [38] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    STATE(3), 1,
      sym_comment,
    STATE(14), 1,
      sym_node_properties,
    ACTIONS(7), 6,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_GT,
      anon_sym_LT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_LT_DASH_DASH,
    ACTIONS(9), 6,
      anon_sym_direction,
      anon_sym_title,
      sym_identifier,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
  [67] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(24), 1,
      anon_sym_direction,
    ACTIONS(27), 1,
      anon_sym_title,
    STATE(16), 1,
      sym_node,
    STATE(23), 1,
      sym_relation_target,
    STATE(43), 1,
      sym_stmt,
    STATE(4), 2,
      sym_comment,
      aux_sym_stmt_list_repeat1,
    STATE(47), 2,
      sym_direction,
      sym_title,
    STATE(46), 4,
      sym_directive_stmt,
      sym_node_stmt,
      sym_group_stmt,
      sym_relation_stmt,
  [106] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(30), 1,
      sym_identifier,
    ACTIONS(32), 1,
      anon_sym_direction,
    ACTIONS(34), 1,
      anon_sym_title,
    STATE(5), 1,
      sym_comment,
    STATE(6), 1,
      aux_sym_stmt_list_repeat1,
    STATE(16), 1,
      sym_node,
    STATE(23), 1,
      sym_relation_target,
    STATE(43), 1,
      sym_stmt,
    STATE(66), 1,
      sym_stmt_list,
    STATE(47), 2,
      sym_direction,
      sym_title,
    STATE(46), 4,
      sym_directive_stmt,
      sym_node_stmt,
      sym_group_stmt,
      sym_relation_stmt,
  [147] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(30), 1,
      sym_identifier,
    ACTIONS(32), 1,
      anon_sym_direction,
    ACTIONS(34), 1,
      anon_sym_title,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      aux_sym_stmt_list_repeat1,
    STATE(6), 1,
      sym_comment,
    STATE(16), 1,
      sym_node,
    STATE(23), 1,
      sym_relation_target,
    STATE(43), 1,
      sym_stmt,
    STATE(47), 2,
      sym_direction,
      sym_title,
    STATE(46), 4,
      sym_directive_stmt,
      sym_node_stmt,
      sym_group_stmt,
      sym_relation_stmt,
  [188] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(42), 1,
      anon_sym_COLON,
    STATE(7), 1,
      sym_comment,
    STATE(22), 1,
      sym_relation_label,
    ACTIONS(38), 5,
      ts_builtin_sym_end,
      anon_sym_GT,
      anon_sym_LT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_LT_DASH_DASH,
    ACTIONS(40), 6,
      anon_sym_direction,
      anon_sym_title,
      sym_identifier,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
  [216] = 4,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    STATE(8), 1,
      sym_comment,
    ACTIONS(44), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(46), 11,
      anon_sym_direction,
      anon_sym_title,
      sym_identifier,
      anon_sym_LBRACE,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_GT,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      anon_sym_DASH_DASH_GT,
      anon_sym_LT_DASH_DASH,
  [240] = 4,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    STATE(9), 1,
      sym_comment,
    ACTIONS(48), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(50), 11,
      anon_sym_direction,
      anon_sym_title,
      sym_identifier,
      anon_sym_LBRACE,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_GT,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      anon_sym_DASH_DASH_GT,
      anon_sym_LT_DASH_DASH,
  [264] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
    STATE(50), 1,
      sym_relation_connector,
    STATE(10), 2,
      sym_comment,
      aux_sym_relation_stmt_repeat1,
    ACTIONS(40), 3,
      anon_sym_direction,
      anon_sym_title,
      sym_identifier,
    ACTIONS(55), 3,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
    ACTIONS(52), 4,
      anon_sym_GT,
      anon_sym_LT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_LT_DASH_DASH,
  [294] = 5,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(62), 1,
      anon_sym_LBRACE,
    STATE(11), 1,
      sym_comment,
    ACTIONS(58), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(60), 10,
      anon_sym_direction,
      anon_sym_title,
      sym_identifier,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_GT,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      anon_sym_DASH_DASH_GT,
      anon_sym_LT_DASH_DASH,
  [320] = 4,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    STATE(12), 1,
      sym_comment,
    ACTIONS(64), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(66), 11,
      anon_sym_direction,
      anon_sym_title,
      sym_identifier,
      anon_sym_LBRACE,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_GT,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      anon_sym_DASH_DASH_GT,
      anon_sym_LT_DASH_DASH,
  [344] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
    STATE(10), 1,
      aux_sym_relation_stmt_repeat1,
    STATE(13), 1,
      sym_comment,
    STATE(50), 1,
      sym_relation_connector,
    ACTIONS(70), 3,
      anon_sym_direction,
      anon_sym_title,
      sym_identifier,
    ACTIONS(74), 3,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
    ACTIONS(72), 4,
      anon_sym_GT,
      anon_sym_LT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_LT_DASH_DASH,
  [376] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(14), 1,
      sym_comment,
    ACTIONS(58), 6,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_GT,
      anon_sym_LT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_LT_DASH_DASH,
    ACTIONS(60), 6,
      anon_sym_direction,
      anon_sym_title,
      sym_identifier,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
  [399] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(15), 1,
      sym_comment,
    STATE(64), 1,
      sym_shape,
    ACTIONS(76), 11,
      anon_sym_rectangle,
      anon_sym_cylinder,
      anon_sym_diamond,
      anon_sym_document,
      anon_sym_ellipse,
      anon_sym_hexagon,
      anon_sym_oval,
      anon_sym_parallelogram,
      anon_sym_star,
      anon_sym_trapezoid,
      anon_sym_triangle,
  [422] = 6,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
    ACTIONS(82), 1,
      anon_sym_LF,
    STATE(16), 1,
      sym_comment,
    ACTIONS(80), 3,
      anon_sym_direction,
      anon_sym_title,
      sym_identifier,
    ACTIONS(84), 7,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_GT,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      anon_sym_DASH_DASH_GT,
      anon_sym_LT_DASH_DASH,
  [449] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(17), 1,
      sym_comment,
    ACTIONS(44), 6,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_GT,
      anon_sym_LT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_LT_DASH_DASH,
    ACTIONS(46), 6,
      anon_sym_direction,
      anon_sym_title,
      sym_identifier,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
  [472] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(18), 1,
      sym_comment,
    ACTIONS(84), 6,
      anon_sym_direction,
      anon_sym_title,
      sym_identifier,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
    ACTIONS(86), 6,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_GT,
      anon_sym_LT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_LT_DASH_DASH,
  [495] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(19), 1,
      sym_comment,
    ACTIONS(64), 6,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_GT,
      anon_sym_LT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_LT_DASH_DASH,
    ACTIONS(66), 6,
      anon_sym_direction,
      anon_sym_title,
      sym_identifier,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
  [518] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(20), 1,
      sym_comment,
    ACTIONS(48), 6,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_GT,
      anon_sym_LT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_LT_DASH_DASH,
    ACTIONS(50), 6,
      anon_sym_direction,
      anon_sym_title,
      sym_identifier,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
  [541] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(21), 1,
      sym_comment,
    ACTIONS(88), 5,
      ts_builtin_sym_end,
      anon_sym_GT,
      anon_sym_LT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_LT_DASH_DASH,
    ACTIONS(90), 6,
      anon_sym_direction,
      anon_sym_title,
      sym_identifier,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
  [563] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(22), 1,
      sym_comment,
    ACTIONS(92), 5,
      ts_builtin_sym_end,
      anon_sym_GT,
      anon_sym_LT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_LT_DASH_DASH,
    ACTIONS(94), 6,
      anon_sym_direction,
      anon_sym_title,
      sym_identifier,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
  [585] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(13), 1,
      aux_sym_relation_stmt_repeat1,
    STATE(23), 1,
      sym_comment,
    STATE(50), 1,
      sym_relation_connector,
    ACTIONS(74), 3,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
    ACTIONS(72), 4,
      anon_sym_GT,
      anon_sym_LT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_LT_DASH_DASH,
  [609] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(96), 1,
      anon_sym_LBRACK,
    ACTIONS(98), 1,
      anon_sym_LBRACE,
    STATE(24), 1,
      sym_comment,
    STATE(32), 1,
      sym_group_block,
    STATE(40), 1,
      sym_node_properties,
    STATE(65), 1,
      sym_group_properties,
    ACTIONS(7), 3,
      sym_identifier,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [636] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(100), 1,
      sym_identifier,
    ACTIONS(102), 1,
      anon_sym_RBRACE,
    STATE(25), 1,
      sym_comment,
    STATE(26), 1,
      aux_sym_group_block_repeat1,
    STATE(52), 1,
      sym_group_item,
    STATE(57), 2,
      sym_node,
      sym_group_stmt,
  [659] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(104), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      sym_group_item,
    STATE(26), 2,
      sym_comment,
      aux_sym_group_block_repeat1,
    STATE(57), 2,
      sym_node,
      sym_group_stmt,
  [680] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(109), 1,
      anon_sym_RBRACK,
    ACTIONS(113), 1,
      anon_sym_shape,
    ACTIONS(115), 1,
      anon_sym_color,
    STATE(27), 1,
      sym_comment,
    STATE(51), 1,
      sym_property,
    ACTIONS(111), 2,
      anon_sym_label,
      anon_sym_icon,
  [703] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(113), 1,
      anon_sym_shape,
    ACTIONS(115), 1,
      anon_sym_color,
    ACTIONS(117), 1,
      anon_sym_RBRACK,
    STATE(28), 1,
      sym_comment,
    STATE(55), 1,
      sym_property,
    ACTIONS(111), 2,
      anon_sym_label,
      anon_sym_icon,
  [726] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(29), 1,
      sym_comment,
    ACTIONS(119), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(121), 3,
      anon_sym_direction,
      anon_sym_title,
      sym_identifier,
  [743] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(113), 1,
      anon_sym_shape,
    ACTIONS(115), 1,
      anon_sym_color,
    ACTIONS(123), 1,
      anon_sym_RBRACK,
    STATE(30), 1,
      sym_comment,
    STATE(53), 1,
      sym_property,
    ACTIONS(111), 2,
      anon_sym_label,
      anon_sym_icon,
  [766] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(100), 1,
      sym_identifier,
    ACTIONS(125), 1,
      anon_sym_RBRACE,
    STATE(25), 1,
      aux_sym_group_block_repeat1,
    STATE(31), 1,
      sym_comment,
    STATE(52), 1,
      sym_group_item,
    STATE(57), 2,
      sym_node,
      sym_group_stmt,
  [789] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(32), 1,
      sym_comment,
    ACTIONS(127), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(129), 3,
      anon_sym_direction,
      anon_sym_title,
      sym_identifier,
  [806] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(33), 1,
      sym_comment,
    ACTIONS(131), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(133), 3,
      anon_sym_direction,
      anon_sym_title,
      sym_identifier,
  [823] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(34), 1,
      sym_comment,
    ACTIONS(135), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(137), 3,
      anon_sym_direction,
      anon_sym_title,
      sym_identifier,
  [840] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(113), 1,
      anon_sym_shape,
    ACTIONS(115), 1,
      anon_sym_color,
    STATE(35), 1,
      sym_comment,
    STATE(61), 1,
      sym_property,
    ACTIONS(111), 2,
      anon_sym_label,
      anon_sym_icon,
  [860] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(36), 1,
      sym_comment,
    ACTIONS(64), 4,
      sym_identifier,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [873] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(37), 1,
      sym_comment,
    ACTIONS(44), 4,
      sym_identifier,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [886] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(139), 1,
      ts_builtin_sym_end,
    STATE(38), 1,
      sym_comment,
    ACTIONS(141), 3,
      anon_sym_direction,
      anon_sym_title,
      sym_identifier,
  [901] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(39), 1,
      sym_comment,
    ACTIONS(48), 4,
      sym_identifier,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [914] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(143), 1,
      anon_sym_LBRACE,
    STATE(40), 1,
      sym_comment,
    ACTIONS(58), 3,
      sym_identifier,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [929] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(41), 1,
      sym_comment,
    ACTIONS(145), 4,
      anon_sym_left,
      anon_sym_right,
      anon_sym_up,
      anon_sym_down,
  [942] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(147), 1,
      ts_builtin_sym_end,
    STATE(42), 1,
      sym_comment,
    ACTIONS(149), 3,
      anon_sym_direction,
      anon_sym_title,
      sym_identifier,
  [957] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(151), 1,
      ts_builtin_sym_end,
    STATE(43), 1,
      sym_comment,
    ACTIONS(153), 3,
      anon_sym_direction,
      anon_sym_title,
      sym_identifier,
  [972] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
    STATE(44), 1,
      sym_comment,
    ACTIONS(157), 3,
      anon_sym_direction,
      anon_sym_title,
      sym_identifier,
  [987] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(159), 1,
      aux_sym_title_token1,
    ACTIONS(161), 1,
      sym_color_hex,
    STATE(45), 1,
      sym_comment,
    STATE(59), 1,
      sym_color_name,
    STATE(64), 1,
      sym_color,
  [1006] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(163), 1,
      ts_builtin_sym_end,
    STATE(46), 1,
      sym_comment,
    ACTIONS(165), 3,
      anon_sym_direction,
      anon_sym_title,
      sym_identifier,
  [1021] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(167), 1,
      ts_builtin_sym_end,
    STATE(47), 1,
      sym_comment,
    ACTIONS(169), 3,
      anon_sym_direction,
      anon_sym_title,
      sym_identifier,
  [1036] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(173), 1,
      anon_sym_RBRACK,
    STATE(48), 1,
      sym_comment,
    STATE(58), 1,
      aux_sym_node_properties_repeat1,
  [1052] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(175), 1,
      anon_sym_RBRACK,
    STATE(49), 1,
      sym_comment,
    STATE(58), 1,
      aux_sym_node_properties_repeat1,
  [1068] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(177), 1,
      sym_identifier,
    STATE(7), 1,
      sym_relation_target,
    STATE(18), 1,
      sym_node,
    STATE(50), 1,
      sym_comment,
  [1084] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(179), 1,
      anon_sym_RBRACK,
    STATE(49), 1,
      aux_sym_node_properties_repeat1,
    STATE(51), 1,
      sym_comment,
  [1100] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(183), 1,
      anon_sym_COMMA,
    STATE(52), 1,
      sym_comment,
    ACTIONS(181), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [1114] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(185), 1,
      anon_sym_RBRACK,
    STATE(48), 1,
      aux_sym_node_properties_repeat1,
    STATE(53), 1,
      sym_comment,
  [1130] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(187), 1,
      anon_sym_RBRACK,
    STATE(54), 1,
      sym_comment,
    STATE(58), 1,
      aux_sym_node_properties_repeat1,
  [1146] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(189), 1,
      anon_sym_RBRACK,
    STATE(54), 1,
      aux_sym_node_properties_repeat1,
    STATE(55), 1,
      sym_comment,
  [1162] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(56), 1,
      sym_comment,
    ACTIONS(191), 3,
      anon_sym_direction,
      anon_sym_title,
      sym_identifier,
  [1174] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(57), 1,
      sym_comment,
    ACTIONS(193), 3,
      sym_identifier,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1186] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(195), 1,
      anon_sym_COMMA,
    ACTIONS(198), 1,
      anon_sym_RBRACK,
    STATE(58), 2,
      sym_comment,
      aux_sym_node_properties_repeat1,
  [1200] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(59), 1,
      sym_comment,
    ACTIONS(200), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1211] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(60), 1,
      sym_comment,
    ACTIONS(202), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1222] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(61), 1,
      sym_comment,
    ACTIONS(198), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1233] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(62), 1,
      sym_comment,
    ACTIONS(107), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [1244] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(63), 1,
      sym_comment,
    ACTIONS(204), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1255] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(64), 1,
      sym_comment,
    ACTIONS(206), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1266] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(98), 1,
      anon_sym_LBRACE,
    STATE(33), 1,
      sym_group_block,
    STATE(65), 1,
      sym_comment,
  [1279] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(208), 1,
      ts_builtin_sym_end,
    STATE(66), 1,
      sym_comment,
  [1289] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(210), 1,
      ts_builtin_sym_end,
    STATE(67), 1,
      sym_comment,
  [1299] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(212), 1,
      anon_sym_COLON,
    STATE(68), 1,
      sym_comment,
  [1309] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(214), 1,
      anon_sym_COLON,
    STATE(69), 1,
      sym_comment,
  [1319] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(216), 1,
      aux_sym_title_token1,
    STATE(70), 1,
      sym_comment,
  [1329] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(218), 1,
      anon_sym_COLON,
    STATE(71), 1,
      sym_comment,
  [1339] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(220), 1,
      sym_identifier,
    STATE(72), 1,
      sym_comment,
  [1349] = 3,
    ACTIONS(11), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(222), 1,
      aux_sym_comment_token1,
    STATE(73), 1,
      sym_comment,
  [1359] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(224), 1,
      sym_identifier,
    STATE(74), 1,
      sym_comment,
  [1369] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(226), 1,
      aux_sym_title_token1,
    STATE(75), 1,
      sym_comment,
  [1379] = 1,
    ACTIONS(228), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 38,
  [SMALL_STATE(4)] = 67,
  [SMALL_STATE(5)] = 106,
  [SMALL_STATE(6)] = 147,
  [SMALL_STATE(7)] = 188,
  [SMALL_STATE(8)] = 216,
  [SMALL_STATE(9)] = 240,
  [SMALL_STATE(10)] = 264,
  [SMALL_STATE(11)] = 294,
  [SMALL_STATE(12)] = 320,
  [SMALL_STATE(13)] = 344,
  [SMALL_STATE(14)] = 376,
  [SMALL_STATE(15)] = 399,
  [SMALL_STATE(16)] = 422,
  [SMALL_STATE(17)] = 449,
  [SMALL_STATE(18)] = 472,
  [SMALL_STATE(19)] = 495,
  [SMALL_STATE(20)] = 518,
  [SMALL_STATE(21)] = 541,
  [SMALL_STATE(22)] = 563,
  [SMALL_STATE(23)] = 585,
  [SMALL_STATE(24)] = 609,
  [SMALL_STATE(25)] = 636,
  [SMALL_STATE(26)] = 659,
  [SMALL_STATE(27)] = 680,
  [SMALL_STATE(28)] = 703,
  [SMALL_STATE(29)] = 726,
  [SMALL_STATE(30)] = 743,
  [SMALL_STATE(31)] = 766,
  [SMALL_STATE(32)] = 789,
  [SMALL_STATE(33)] = 806,
  [SMALL_STATE(34)] = 823,
  [SMALL_STATE(35)] = 840,
  [SMALL_STATE(36)] = 860,
  [SMALL_STATE(37)] = 873,
  [SMALL_STATE(38)] = 886,
  [SMALL_STATE(39)] = 901,
  [SMALL_STATE(40)] = 914,
  [SMALL_STATE(41)] = 929,
  [SMALL_STATE(42)] = 942,
  [SMALL_STATE(43)] = 957,
  [SMALL_STATE(44)] = 972,
  [SMALL_STATE(45)] = 987,
  [SMALL_STATE(46)] = 1006,
  [SMALL_STATE(47)] = 1021,
  [SMALL_STATE(48)] = 1036,
  [SMALL_STATE(49)] = 1052,
  [SMALL_STATE(50)] = 1068,
  [SMALL_STATE(51)] = 1084,
  [SMALL_STATE(52)] = 1100,
  [SMALL_STATE(53)] = 1114,
  [SMALL_STATE(54)] = 1130,
  [SMALL_STATE(55)] = 1146,
  [SMALL_STATE(56)] = 1162,
  [SMALL_STATE(57)] = 1174,
  [SMALL_STATE(58)] = 1186,
  [SMALL_STATE(59)] = 1200,
  [SMALL_STATE(60)] = 1211,
  [SMALL_STATE(61)] = 1222,
  [SMALL_STATE(62)] = 1233,
  [SMALL_STATE(63)] = 1244,
  [SMALL_STATE(64)] = 1255,
  [SMALL_STATE(65)] = 1266,
  [SMALL_STATE(66)] = 1279,
  [SMALL_STATE(67)] = 1289,
  [SMALL_STATE(68)] = 1299,
  [SMALL_STATE(69)] = 1309,
  [SMALL_STATE(70)] = 1319,
  [SMALL_STATE(71)] = 1329,
  [SMALL_STATE(72)] = 1339,
  [SMALL_STATE(73)] = 1349,
  [SMALL_STATE(74)] = 1359,
  [SMALL_STATE(75)] = 1369,
  [SMALL_STATE(76)] = 1379,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 1, .production_id = 1),
  [9] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 1, .production_id = 1),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stmt_list_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stmt_list_repeat1, 2), SHIFT_REPEAT(2),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stmt_list_repeat1, 2), SHIFT_REPEAT(41),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stmt_list_repeat1, 2), SHIFT_REPEAT(70),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt_list, 1),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_stmt_repeat1, 2),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_relation_stmt_repeat1, 2),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_properties, 4),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_properties, 4),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_properties, 3),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_properties, 3),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_stmt_repeat1, 2), SHIFT_REPEAT(72),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_relation_stmt_repeat1, 2), SHIFT_REPEAT(72),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 2, .production_id = 2),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 2, .production_id = 2),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_properties, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_properties, 2),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_properties, 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_stmt, 2),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_stmt, 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_stmt, 1),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_stmt, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_target, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_target, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_label, 2),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_label, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_stmt_repeat1, 3),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_relation_stmt_repeat1, 3),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_block_repeat1, 2), SHIFT_REPEAT(24),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_block_repeat1, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_block, 3),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_block, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_stmt, 2, .production_id = 1),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_stmt, 2, .production_id = 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_stmt, 3, .production_id = 2),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_stmt, 3, .production_id = 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_block, 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_block, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_stmt, 2),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_stmt, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_properties, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title, 2),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stmt_list_repeat1, 1),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_stmt_list_repeat1, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction, 2),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt, 1),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stmt, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_stmt, 1),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_stmt, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_block_repeat1, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_item, 1),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_properties_repeat1, 2), SHIFT_REPEAT(35),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_properties_repeat1, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shape, 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_name, 1),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 3),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [210] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_connector, 1),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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

TS_PUBLIC const TSLanguage *tree_sitter_eraserdiagram() {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
