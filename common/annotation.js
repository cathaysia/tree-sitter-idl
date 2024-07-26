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
      seq(
        $.scoped_name,
        optional(seq('(', optional($.annotation_appl_params), ')')),
      ),
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

      $.annotation_appl_hashid,
      $.annotation_appl_default_nested,
      $.annotation_appl_ignore_literal_names,
      $.annotation_appl_try_construct,
      $.try_construct_fail_action,
      $.annotation_appl_non_serialized,
      $.annotation_appl_data_representation,
      $.data_representation_mask,
      $.annotation_appl_topic,
    ),

  // IDL 4.2 8.3 Standardized Groups of Annotations
  annotation_appl_id: $ => create_anno($, /id/i, false, $.integer_literal),
  annotation_appl_autoid: $ =>
    create_anno($, /autoid/i, true, optional($.autoid_kind)),
  autoid_kind: _ => choice(/SEQUENTIAL/i, /HASH/i),
  annotation_appl_optional: $ =>
    create_anno($, /optional/i, true, optional($.positive_int_const)),
  annotation_appl_position: $ =>
    create_anno($, /position/i, false, $.positive_int_const),
  annotation_appl_value: $ => create_anno($, /value/i, false, $.const_expr),
  annotation_appl_extensibility: $ =>
    create_anno($, /extensibility/i, false, $.extensibility_kind),
  extensibility_kind: _ => choice(/FINAL/i, /APPENDABLE/i, /MUTABLE/i),
  annotation_appl_final: $ => create_anno($, /final/i),
  annotation_appl_appendable: $ => create_anno($, /appendable/i),
  annotation_appl_mutable: $ => create_anno($, /mutable/i),
  annotation_appl_key: $ => create_anno($, /key/i, true, $.positive_int_const),
  annotation_appl_must_understand: $ =>
    create_anno($, /must_understand/i, true, $.positive_int_const),
  annotation_appl_default_literal: $ => create_anno($, /default_literal/i),
  annotation_appl_default: $ => create_anno($, /default/i, false, $.const_expr),
  annotation_appl_range: $ =>
    create_anno(
      $,
      /range/i,
      false,
      field('min', $.min_expr),
      ',',
      field('max', $.max_expr),
    ),
  min_expr: $ => seq(alias(/min/i, $.range_kind), '=', $.positive_int_const),
  max_expr: $ => seq(alias(/max/i, $.range_kind), '=', $.positive_int_const),
  annotation_appl_min: $ => create_anno($, /min/i, false, $.positive_int_const),
  annotation_appl_max: $ => create_anno($, /max/i, false, $.positive_int_const),
  annotation_appl_unit: $ => create_anno($, /unit/i, false, $.const_expr),
  annotation_appl_bit_bound: $ =>
    create_anno($, /bit_bound/i, false, $.positive_int_const),
  annotation_appl_external: $ =>
    create_anno($, /external/i, true, $.positive_int_const),
  annotation_appl_nested: $ =>
    create_anno($, /nested/i, true, $.positive_int_const),
  annotation_appl_verbatim: $ =>
    create_anno(
      $,
      /verbatim/i,
      false,
      field('language', optional(seq($.verbatim_language, ','))),
      field('placement', optional(seq($.placement_kind, ','))),
      field('text', $.const_expr),
    ),
  verbatim_language: $ => choice(/c/i, /c+i+/, /java/i, /idl/i, '*'),
  placement_kind: $ =>
    choice(
      /BEGIN_FILE/i,
      /BEFORE_DECLARATION/i,
      /BEGIN_DECLARATION/i,
      /END_DECLARATION/i,
      /AFTER_DECLARATION/i,
      /END_FILE/i,
    ),
  annotation_appl_service: $ =>
    create_anno($, /service/i, true, $.service_platform),
  service_platform: $ => choice(/CORBA/i, /DDS/i, '*'),
  annotation_appl_oneway: $ => create_anno($, /oneway/i, true, $.const_expr),
  annotation_appl_ami: $ => create_anno($, /ami/i, true, $.const_expr),

  annotation_appl_hashid: $ => create_anno($, 'hashid', true, $.const_expr), // 7.3.1.2.1.1 Member IDs
  annotation_appl_default_nested: $ =>
    create_anno($, /default_nested/i, true, $.const_expr), // 7.3.1.2.1.7 Nested Types
  annotation_appl_ignore_literal_names: $ =>
    create_anno($, /ignore_literal_names/i, true, $.const_expr), // 7.3.1.2.1.11 Ignore Literal Names for Enumeration
  annotation_appl_try_construct: $ =>
    create_anno($, /try_construct/i, true, $.try_construct_fail_action), // 7.3.1.2.1.12 TryConstruct Elements and Members
  try_construct_fail_action: _ => choice(/DISCARD/i, /USE_DEFAULT/i, /TRIM/i),
  annotation_appl_non_serialized: $ =>
    create_anno($, /non_serialized/i, true, $.positive_int_const), // 7.3.1.2.1.14 Non-serialized Members
  annotation_appl_data_representation: $ =>
    create_anno(
      $,
      field('name', /data_representation/i),
      false,
      $.data_representation_mask,
      repeat(seq('|', $.data_representation_mask)),
    ), // 7.3.1.2.1.15 Constrained Data Representations
  data_representation_mask: _ =>
    choice(
      /XCDR/i, // extend
      /XCDR1/i,
      /XML/i,
      /XCDR2/i,
    ),
  annotation_appl_topic: $ =>
    seq(
      field('name', /topic/i),
      optional(
        seq(
          '(',
          choice(
            field('name', $.const_expr),
            field('platform', $.topic_platform),
            seq(
              field('name', $.const_expr),
              ',',
              field('platform', $.topic_platform),
            ),
          ),
          ')',
        ),
      ),
    ),
  topic_platform: $ => choice(/DDS/i, '*'),
}

function create_anno($, name, is_optional, ...args) {
  if (args.length == 0) {
    return seq(field('name', alias(name, $.anno_name)))
  }

  if (is_optional) {
    return seq(
      field('name', alias(name, $.anno_name)),
      optional(seq('(', ...args, ')')),
    )
  }

  return seq(field('name', alias(name, $.anno_name)), '(', ...args, ')')
}
