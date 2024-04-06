const shapes = [
  "rectangle",
  "cylinder",
  "diamond",
  "document",
  "ellipse",
  "hexagon",
  "oval",
  "parallelogram",
  "star",
  "trapezoid",
  "triangle",
];
module.exports = grammar({
  name: "eraserdiagram",
  extras: ($) => [/\s|\r?\n/, $.comment],
  word: ($) => $.identifier,
  rules: {
    source_file: ($) => seq($.heading, $.stmt_list),
    /**
     * extras
     */
    comment: ($) => seq("//", /.*/),
    /**
     * Reserved
     */
    heading: ($) =>
      choice(
        "sequence-diagram",
        "entity-relationship-diagram",
        "cloud-architecture-diagram",
        "flowchart-diagram",
      ),
    /**
     * Statements
     */
    stmt_list: ($) => repeat1($.stmt),
    stmt: ($) =>
      choice($.directive_stmt, $.node_stmt, $.group_stmt, $.relation_stmt),
    /**
     * Directives
     */
    directive_stmt: ($) => choice($.direction, $.title),
    direction: ($) => seq("direction", choice("left", "right", "up", "down")),
    title: ($) => seq("title", /\w+/),
    /**
     * Nodes
     */
    node_stmt: ($) => seq($.node, optional("\n")),
    node: ($) =>
      seq(
        field("name", $.identifier),
        optional(field("modifiers", $.node_properties)),
      ),
    identifier: ($) => /[\w-]+/,
    node_properties: ($) => seq("[", commaSep($.property), "]"),
    property: ($) =>
      seq(field("name", $.identifier), ":", field("value", /\w+/)),
    /**
     * Groups
     */
    group_stmt: ($) =>
      seq(
        field("name", $.identifier),
        optional(field("modifiers", $.group_properties)),
        $.group_block,
      ),
    group_block: ($) => seq("{", repeat(seq($.group_item, optional(","))), "}"),
    group_item: ($) => choice($.node, $.group_stmt),
    // TODO: restrict group properties
    group_properties: ($) => $.node_properties,
    /**
     * Properties
     */
    node_properties: ($) => seq("[", commaSep($.property), "]"),
    property: ($) =>
      choice(
        property("label", $.identifier),
        property("shape", $.shape),
        property("icon", $.identifier),
        property("color", $.color),
      ),
    shape: ($) => choice(...shapes),
    color: ($) => choice($.color_name, $.color_hex),
    color_name: ($) => /\w+/,
    color_hex: ($) => /#[\da-fA-F]{6}/,
    /**
     * Relationships
     */
    relation_stmt: ($) =>
      seq(
        $.relation_target,
        repeat1(
          seq(
            $.relation_connector,
            seq($.relation_target, optional($.relation_label)),
          ),
        ),
      ),
    relation_target: ($) => choice($.node),
    relation_connector: ($) => choice(">", "<", "<>", "-", "--", "-->", "<--"),
    relation_label: ($) => seq(":", /\w+/),
  },
});

/**
 * Creates a rule to optionally match one or more of the rules separated by a new line
 *
 * @param {Rule} rule
 *
 * @return {ChoiceRule}
 *
 */
function lineSep(rule) {
  return optional(seq(rule, repeat(seq("\n", rule))));
}
function commaSep(rule) {
  return optional(seq(rule, repeat(seq(",", rule))));
}
function property(name, value) {
  return seq(name, ":", value);
}
