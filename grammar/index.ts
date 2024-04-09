import { commaSep, commaSep1 } from './common'
import base_types from './base_types'
import expr from './expr'
import literal from './literal'
import directive from './directive'
import rpc from './rpc'
import bitmask from './bitmask'
import annotation from './annotation'

declare var module: any

module.exports = grammar({
  name: 'idl',

  extras: $ => [/\s|\\\r?\n/, $.comment],
  externals: $ => [$._eof],
  inline: $ => [
    $.type_dcl,
    $.constr_type_dcl,
    $.struct_dcl,
    $.union_dcl,
    $.primary_expr,
  ],

  rules: {
    specification: $ => seq(repeat($.preproc_call), repeat($._definition)),
    ...base_types,
    ...expr,
    ...literal,
    ...directive,
    ...rpc,
    ...bitmask,
    ...annotation,
    _definition: $ =>
      choice(
        $.predefine,
        seq(
          choice(
            $.module_dcl,
            $.type_dcl,
            $.const_dcl,
            $.typedef_dcl,
            $.except_dcl,
            $.interface_dcl,
          ),
          ';',
        ),
      ),
    type_dcl: $ =>
      choice(
        $.annotation_dcl,
        $.bitset_dcl,
        $.bitmask_dcl,
        $.native_dcl,
        $.constr_type_dcl,
      ),
    constr_type_dcl: $ => choice($.struct_dcl, $.union_dcl, $.enum_dcl),
    native_dcl: $ => seq('native', $.simple_declarator),
    module_dcl: $ =>
      seq('module', $.identifier, '{', repeat($._definition), '}'),

    struct_dcl: $ => choice($.struct_forward_dcl, $.struct_def),
    struct_forward_dcl: $ => prec.left(1, seq('struct', $.identifier)),
    struct_def: $ =>
      prec.left(
        2,
        seq(
          repeat(choice($.data_representation, $.final)),
          'struct',
          $.identifier,
          optional(seq(':', field('parent', $.scoped_name))),
          '{',
          repeat($.member),
          '}',
        ),
      ),
    member: $ =>
      seq(
        repeat($.struct_modifier),
        field('type', $.type_spec),
        field('identifier', $.declarators),
        optional($.default),
        ';',
      ),

    default: $ => seq('default', $.const_expr),

    enum_dcl: $ =>
      seq(
        optional($.enum_anno),
        'enum',
        $.identifier,
        '{',
        commaSep($.enumerator),
        '}',
      ),
    enumerator: $ => seq(repeat($.enum_modifier), $.identifier),
    enum_modifier: $ => choice('@default_literal'),
    enum_anno: $ => choice('@ignore_literal_names'),

    union_dcl: $ => choice($.union_def, $.union_forward_dcl),
    union_forward_dcl: $ => seq('union', $.identifier),
    union_def: $ =>
      seq(
        'union',
        $.identifier,
        'switch',
        '(',
        $.switch_type_spec,
        ')',
        '{',
        repeat($.case),
        '}',
      ),
    case: $ => seq($.case_label, optional(seq($.element_spec, ';'))),
    case_label: $ => seq(choice(seq('case', $.const_expr), 'default'), ':'),
    element_spec: $ => seq($.type_spec, $.declarator),
    switch_type_spec: $ =>
      choice($.integer_type, $.char_type, $.boolean_type, $.scoped_name),

    typedef_dcl: $ => seq('typedef', $.type_declarator),
    predefine: $ => seq('#define', /[^\n]*/),
    dds_service: _ => '@DDSService',
    dds_request_topic: $ =>
      seq('@DDSRequestTopic', '(', 'name', '=', /\w+/, ')'),
    dds_reply_topic: $ => seq('@DDSReplyTopic', '(', 'name', '=', /\w+/, ')'),

    const_dcl: $ => seq('const', $.const_type, $.identifier, '=', $.const_expr),
    const_type: $ =>
      prec.left(
        1,
        choice(
          $.integer_type,
          $.floating_pt_type,
          $.fixed_pt_const_type,
          $.char_type,
          $.boolean_type,
          $.octet_type,
          $.string_type,
          $.scoped_name,
          $.sequence_type,
        ),
      ),
    // table 21
    optional: _ => '@optional',
    key: _ => '@key',
    must_understand: _ => '@must_understand',
    non_serialized: _ => '@non_serialized',
    id: _ => '@id',
    external: _ => '@external',
    hashid: $ => seq('@hashid', '("', alias($.identifier, $.hashid_value), '"'),
    try_construct: $ =>
      seq('@try_construct', alias($.identifier, $.try_construct_value)),
    extensibility: _ => '@extensibility',
    mutable: _ => '@mutable',
    appendable: _ => '@appendable',
    final: _ => '@final',
    nested: _ => '@nested',
    default_literal: _ => '@default_literal',
    value: _ => '@value',
    autoid: _ => '@autoid',
    verbatim: _ => '@verbatim',
    data_representation: $ =>
      seq(
        '@data_representation',
        '(',
        alias(repeat1(choice('XCDR', 'XCDR2')), $.data_rep),
        ')',
      ),

    struct_modifier: $ =>
      choice(
        $.optional,
        $.must_understand,
        $.non_serialized,
        $.id,
        $.hashid,
        $.external,
        $.try_construct,
        $.key,
      ),

    identifier: _ => /\w[\w\d_]*/, // 7.2.3
    simple_declarator: $ => $.identifier,
    declarator: $ => choice($.simple_declarator, $.array_declarator),
    declarators: $ => commaSep1($.declarator),
    array_declarator: $ => seq($.identifier, repeat1($.fixed_array_size)),
    positive_int_const: $ => $.const_expr,
    fixed_array_size: $ => seq('[', $.positive_int_const, ']'),
    type_declarator: $ =>
      seq(
        choice($.simple_type_spec, $.template_type_spec, $.constr_type_dcl),
        $.any_declarators,
      ),
    any_declarators: $ => commaSep1($.any_declarator),
    any_declarator: $ => choice($.simple_declarator, $.array_declarator),
    comment: _ => seq('//', /(\\+(.|\r?\n)|[^\\\n])*/),
  },
})
