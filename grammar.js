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

    source_file: $ => sepo($._import_or_declaration, ';'),

    _import_or_declaration: $ => choice(
      // §6.13 Units
      $.use_directive,
      // §6.12 Declarations
      seq(optional('export'), $.declaration),
      // $.static_assertion_expression,
    ),

    // §6.5 Identifiers

    identifier: $ => token(sep1(name, '::')),

    name: $ => name,

    // §6.7 Expressions

    _expression: $ => choice(
      // $.assignment,
      $.expression,
      // $.if_expression,
      // $.for_loop,
      // $.control_expression,
    ),

    expression: $ => choice(
      '1' // FIXME
    ),

    // §6.12 Declarations

    declaration: $ => choice(
      $.global_declaration,
      // $.constant_declaration,
      // $.type_declaration,
      // $.function_declaration,
    ),

    global_declaration: $ => seq(
      choice('let', 'const'),
      sep1o($.global_binding, ','),
    ),

    global_binding: $ => seq(
      // optional($.decl_attr),
      optional('@threadlocal'),
      choice(
        // seq($.identifier, ':', $.type),
        // seq($.identifier, ':', $.type, '=', $.expression),
        seq($.identifier, '=', $._expression),
      ),
    ),

    // §6.13 Units

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
  }
});
