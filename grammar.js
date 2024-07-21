// Copyright 2024 Masanori Ogino
// SPDX-License-Identifier: MIT

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const sepo = (rule, s) => seq(sep(rule, s), optional(s));
const sep1o = (rule, s) => seq(sep1(rule, s), optional(s));
const sep = (rule, s) => optional(sep1(rule, s));
const sep1 = (rule, s) => seq(rule, repeat(seq(s, rule)));

const name = /[a-zA-Z_][0-9a-zA-Z_]*/;

module.exports = grammar({
  name: 'hare',

  rules: {

    // NOTE: This parser permits use directives after declarations on purpose.
    //       For instance, it accepts the following example:
    //
    // ```hare
    // // Before
    // use foo;
    // fn f(...): ... = ...;
    //
    // // After
    // use bar;
    // fn g(...): ... = ...;
    // ```

    source_file: $ => sepo($._sub_unit, ';'),

    _sub_unit: $ => choice(
      $.use_directive,
      // $.declaration,
    ),

    use_directive: $ => seq(
      'use',
      choice(
        $.identifier,
        // XXX: In the spec, it is seq($.name, '=', $.identifier). The rule
        //      below accepts `use foo::bar = baz;` but it is harmless to us.
        seq($.identifier, '=', $.identifier),
        seq($.identifier, '::', '{', sep1o($.name, ','), '}'),
        seq($.identifier, '::', '*'),
      ),
    ),

    identifier: $ => token(sep1(name, '::')),

    name: $ => name,
  }
});
