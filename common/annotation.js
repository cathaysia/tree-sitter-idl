const { commaSep, commaSep1 } = require('./common')

exports.rules = {
  annotation_dcl: $ =>
    seq(
      token(prec(2, '@annotation')),
      $.identifier,
      '{',
      repeat($.annotation_body),
      '}',
    ),
  annotation_body: $ =>
    choice(
      $.annotation_member,
      seq(choice($.enum_dcl, $.const_dcl, $.typedef_dcl), ';'),
    ),
  annotation_member: $ =>
    seq(
      $.annotation_member_type,
      $.simple_declarator,
      optional(seq('default', $.const_expr)),
      ';',
    ),
  annotation_member_type: $ =>
    choice($.const_type, $.any_const_type, $.scoped_name),
  any_const_type: _ => 'any',
  annotation_appl: $ =>
    choice(
      seq(
        '@',
        choice($.annotation_appl_custom_body, $.annotation_appl_builtin_body),
      ),
      $.extend_annotation_appl,
    ),
  extend_annotation_appl: $ =>
    prec.left(
      seq(
        token(prec(1, '//@')),
        choice($.annotation_appl_custom_body, $.annotation_appl_builtin_body),
        repeat($.annotation_appl),
        /\r?\n/,
      ),
    ),
  annotation_appl_custom_body: $ =>
    prec.left(
      seq($.scoped_name, optional(seq('(', $.annotation_appl_params, ')'))),
    ),
  annotation_appl_params: $ =>
    choice($.const_expr, commaSep1($.annotation_appl_param)),
  annotation_appl_param: $ => seq($.identifier, '=', $.const_expr),

  annotation_appl_builtin_body: $ =>
    choice(
      $.annotation_appl_id,
      $.annotation_appl_autoid,
      $.annotation_appl_optional,
      $.annotation_appl_position,
      $.annotation_appl_value,
      $.annotation_appl_extensibility,
      $.annotation_appl_final,
      $.annotation_appl_appendable,
      $.annotation_appl_mutable,
      $.annotation_appl_key,
      $.annotation_appl_must_understand,
      $.annotation_appl_default_literal,
      $.annotation_appl_default,
      $.annotation_appl_range,
      $.annotation_appl_min,
      $.annotation_appl_max,
      $.annotation_appl_unit,
      $.annotation_appl_bit_bound,
      $.annotation_appl_external,
      $.annotation_appl_nested,
      $.annotation_appl_verbatim,
      $.annotation_appl_service,
      $.annotation_appl_oneway,
      $.annotation_appl_ami,
    ),

  // IDL 4.2 8.3 Standardized Groups of Annotations
  annotation_appl_id: $ => create_anno('id', false, $.integer_literal),
  annotation_appl_autoid: $ =>
    create_anno('autoid', true, optional($.autoid_kind)),
  autoid_kind: _ => choice('SEQUENTIAL', 'HASH'),
  annotation_appl_optional: $ =>
    create_anno('optional', true, optional($.boolean_literal)),
  annotation_appl_position: $ =>
    create_anno('position', false, $.integer_literal),
  annotation_appl_value: $ => create_anno('value', false, $.literal),
  annotation_appl_extensibility: $ =>
    create_anno('extensibility', false, $.extensibility_kind),
  extensibility_kind: _ => choice('FINAL', 'APPENDABLE', 'MUTABLE'),
  annotation_appl_final: $ => create_anno('final'),
  annotation_appl_appendable: $ => create_anno('appendable'),
  annotation_appl_mutable: $ => create_anno('mutable'),
  annotation_appl_key: $ => create_anno('key', true, $.boolean_literal),
  annotation_appl_must_understand: $ =>
    create_anno('must_understand', true, $.boolean_literal),
  annotation_appl_default_literal: $ => create_anno('default_literal'),
  annotation_appl_default: $ => create_anno('default', false, $.literal),
  annotation_appl_range: $ =>
    create_anno(
      'range',
      false,
      field('min', $.min_expr),
      ',',
      field('max', $.max_expr),
    ),
  min_expr: $ => seq('min', '=', $.literal),
  max_expr: $ => seq('max', '=', $.literal),
  annotation_appl_min: $ => create_anno('min', false, $.literal),
  annotation_appl_max: $ => create_anno('max', false, $.literal),
  annotation_appl_unit: $ => create_anno('unit', false, $.string_literal),
  annotation_appl_bit_bound: $ =>
    create_anno('bit_bound', false, $.integer_literal),
  annotation_appl_external: $ =>
    create_anno('external', true, $.boolean_literal),
  annotation_appl_nested: $ => create_anno('nested', true, $.boolean_literal),
  annotation_appl_verbatim: $ =>
    create_anno(
      'verbatim',
      false,
      field('language', optional(seq($.verbatim_language, ','))),
      field('placement', optional(seq($.placement_kind, ','))),
      field('text', $.string_literal),
    ),
  verbatim_language: $ => choice('c', 'c++', 'java', 'idl', '*'),
  placement_kind: $ =>
    choice(
      'BEGIN_FILE',
      'BEFORE_DECLARATION',
      'BEGIN_DECLARATION',
      'END_DECLARATION',
      'AFTER_DECLARATION',
      'END_FILE',
    ),
  annotation_appl_service: $ =>
    create_anno('service', true, $.service_platform),
  service_platform: $ => choice('CORBA', 'DDS', '*'),
  annotation_appl_oneway: $ => create_anno('oneway', true, $.boolean_literal),
  annotation_appl_ami: $ => create_anno('ami', true, $.boolean_literal),
}

function create_anno(name, is_optional, ...args) {
  if (args.length == 0) {
    return seq(field('name', name))
  }

  if (is_optional) {
    return seq(field('name', name), optional(seq('(', ...args, ')')))
  }

  return seq(field('name', name), '(', ...args, ')')
}
