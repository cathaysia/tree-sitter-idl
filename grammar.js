const base_types = require('./common/base_types');
const expr = require('./common/expr');
const literal = require('./common/literal');
const directive = require('./common/directive');
const interface_ = require('./common/interface');
const bitmask = require('./common/bitmask');
const annotation = require('./common/annotation');
const template = require('./common/template');
const value_type = require('./common/value_type');
const typedef_dcl = require('./common/typedef_dcl');
const union_dcl = require('./common/union_dcl');
const corba_interface = require('./common/corba_interface');
const corba_value = require('./common/corba_value');
const component_basic = require('./common/component_basic'); // idl 7.4.8
const component_homes = require('./common/component_homes'); // idl 7.4.9
const event_dcl = require('./common/event_dcl'); // idl 7.4.10
const component_port = require('./common/component_port'); // idl 7.4.11

module.exports = grammar({
  name: 'idl',

  extras: $ => [/\s|\\\r?\n/, $.comment],
  inline: _ => [],
  precedences: $ => [
    [$.annotation_appl, $.scoped_name],
    [$.simple_type_spec, $.unary_expr],
    [$.annotation_member_type, $.const_type],
    [$.simple_type_spec, $.primary_expr],
    [$.definition, $.type_dcl],
    [$.value_inheritance_spec, $.value_supports],
    [$.value_inheritance_spec, $.value_inheritance],
    [$.scoped_name, $.annotation_appl_param],
  ],

  rules: {
    specification: $ => repeat($.definition),
    ...base_types.rules,
    ...expr.rules,
    ...literal.rules,
    ...directive.rules,
    ...interface_.rules,
    ...bitmask.rules,
    ...annotation.rules,
    ...template.rules,
    ...value_type.rules,
    ...typedef_dcl.rules,
    ...union_dcl.rules,
    ...corba_interface.rules,
    ...corba_value.rules,
    ...component_basic.rules,
    ...component_homes.rules,
    ...event_dcl.rules,
    ...component_port.rules, // idl 7.4.11
    definition: $ =>
      choice(
        seq(
          choice(
            $.module_dcl,
            $.type_dcl,
            $.const_dcl,
            $.except_dcl,
            $.interface_dcl,
            $.annotation_dcl, // 7.4.15
            $.template_module_dcl, // idl 7.4.12
            $.template_module_inst, // idl 7.4.12
            $.value_dcl, // idl 7.4.5
            $.type_id_dcl, // idl 7.4.6
            $.type_prefix_dcl, // idl 7.4.6
            $.import_dcl, // idl 7.4.6
            $.component_dcl, // idl 7.4.8
            $.home_dcl, // idl 7.4.9
            $.event_dcl, // idl 7.4.10
            $.porttype_dcl, // idl 7.4.11
            $.connector_dcl, // idl 7.4.11
          ),
          ';',
        ),
        $.preproc_include,
        $.preproc_call,
        $.preproc_define,
      ),
    type_dcl: $ =>
      seq(
        repeat($.annotation_appl),
        choice($.constr_type_dcl, $.native_dcl, $.typedef_dcl),
      ),
    constr_type_dcl: $ =>
      choice(
        $.struct_dcl,
        $.union_dcl,
        $.enum_dcl,
        $.bitset_dcl, // idl 7.4.13
        $.bitmask_dcl, // idl 7.4.13
      ),
    native_dcl: $ => seq('native', $.simple_declarator),
    module_dcl: $ =>
      seq(
        repeat($.annotation_appl),
        'module',
        $.identifier,
        '{',
        repeat($.definition),
        '}',
      ),

    struct_dcl: $ => choice($.struct_forward_dcl, $.struct_def),
    struct_forward_dcl: $ => seq('struct', $.identifier),
    struct_def: $ =>
      seq(
        'struct',
        $.identifier,
        optional(seq(':', field('parent', $.scoped_name))),
        '{',
        repeat($.member),
        '}',
      ),
    member: $ =>
      prec.left(
        seq(
          repeat($.annotation_appl),
          field('type', $.type_spec),
          field('identifier', $.declarators),
          optional($.default),
          ';',
          optional($.extend_annotation_appl),
        ),
      ),
    default: $ => seq('default', $.const_expr),

    const_dcl: $ => seq('const', $.const_type, $.identifier, '=', $.const_expr),
    const_type: $ =>
      choice(
        $.integer_type,
        $.floating_pt_type,
        $.fixed_pt_const_type,
        $.char_type,
        $.wide_char_type,
        $.boolean_type,
        $.octet_type,
        $.string_type,
        $.wide_string_type,
        $.scoped_name,
        $.sequence_type,
      ),
    // table 21

    identifier: _ => /[a-zA-Z_][\w_]*/, // 7.2.3
    comment: _ =>
      choice(
        seq('//', /(\\+(.|\r?\n)|[^\\\n])*/),
        seq('/*', /[^*]*\*+([^/*][^*]*\*+)*/, '/'),
      ),
  },
});
