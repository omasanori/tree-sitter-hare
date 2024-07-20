// Copyright 2023-2024 Amaan Qureshi
// Copyright 2024      Masanori Ogino
// SPDX-License-Identifier: MIT

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'hare',

  rules: {
    source_file: $ => repeat($._sub_unit),

    _sub_unit: $ => seq(
      $._imports
      // TODO: Implement declarations
    ),

    _imports: $ => seq($.use_directive),

    use_directive: $ => seq(
      'use',
      $._use_clause,
      ';',
    ),

    _use_clause: $ => choice(
      $.identifier,
      $.use_alias,
      $.use_list,
      $.use_wildcard,
    ),

    use_alias: $ => seq(
      field('alias', $.name),
      '=',
      field('path', $.identifier),
    ),

    use_list: $ => seq(
      field('path', $._path),
      '{',
      field('members', optionalCommaSep1($.name)),
      '}',
    ),

    use_wildcard: $ => seq(
      field('path', $._path),
      '*',
    ),

    identifier: $ => seq(
      field('path', optional($._path)),
      field('name', $.name),
    ),

    _path: $ => prec.left(seq(
      $.name,
      optional(repeat(seq('::', $.name))),
      '::',
    )),

    name: $ => /[a-zA-Z_][0-9a-zA-Z_]*/,
  }
});

/**
 * Creates a rule to match optionally match one or more of the rules
 * separated by a comma  and optionally ending with a comma
 *
 * @param {Rule} rule
 *
 * @return {SeqRule}
 *
 */
function optionalCommaSep(rule) {
  return seq(commaSep(rule), optional(','));
}

/**
 * Creates a rule to match one or more of the rules separated by a comma
 * and optionally ending with a comma
 *
 * @param {Rule} rule
 *
 * @return {SeqRule}
 *
 */
function optionalCommaSep1(rule) {
  return seq(commaSep1(rule), optional(','));
}

/**
 * Creates a rule to optionally match one or more of the rules separated by a comma
 *
 * @param {Rule} rule
 *
 * @return {ChoiceRule}
 *
 */
function commaSep(rule) {
  return optional(commaSep1(rule));
}

/**
 * Creates a rule to match one or more of the rules separated by a comma
 *
 * @param {Rule} rule
 *
 * @return {SeqRule}
 *
 */
function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)));
}
