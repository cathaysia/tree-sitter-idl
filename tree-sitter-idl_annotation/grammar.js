// ../common/base_types.ts
var rules = {
  signed_short_int: _ =>
    choice(
      'short',
      'int16',
      // idl 7.4.13
    ),
  signed_long_int: _ =>
    choice(
      'long',
      'int32',
      // idl 7.4.13
    ),
  signed_longlong_int: _ =>
    choice(
      'long long',
      'int64',
      // idl 7.4.13
    ),
  unsigned_int: $ =>
    choice(
      $.unsigned_short_int,
      $.unsigned_long_int,
      $.unsigned_longlong_int,
      $.unsigned_tiny_int,
      // idl 7.4.13
    ),
  unsigned_tiny_int: _ => 'uint8',
  // idl 7.4.13
  boolean_type: _ => 'boolean',
  fixed_pt_const_type: $ => 'fixed',
  octet_type: _ => 'octet',
  integer_type: $ => choice($.signed_int, $.unsigned_int),
  signed_int: $ =>
    choice(
      $.signed_short_int,
      $.signed_long_int,
      $.signed_longlong_int,
      $.signed_tiny_int,
      // idl 7.4.13
    ),
  signed_tiny_int: _ => 'int8',
  // idl 7.4.13
  unsigned_short_int: _ =>
    choice(
      'unsigned short',
      'uint16',
      //  idl 7.4.13
    ),
  unsigned_long_int: _ =>
    choice(
      'unsigned long',
      'uint32',
      // idl 7.4.13
    ),
  unsigned_longlong_int: _ =>
    choice(
      'unsigned long long',
      'uint64',
      // idl 7.4.13
    ),
  floating_pt_type: _ => choice('float', 'double', 'long double'),
  char_type: _ => choice('char', 'wchar'),
  scoped_name: $ =>
    choice(
      $.identifier,
      seq('::', $.identifier),
      seq($.scoped_name, '::', $.identifier),
    ),
  string_type: $ =>
    seq(
      choice('string', 'wstring'),
      optional(seq('<', $.positive_int_const, '>')),
    ),
  type_spec: $ =>
    choice(
      $.simple_type_spec,
      $.template_type_spec,
      // 7.4.14
    ),
  simple_type_spec: $ => prec.left(1, choice($.base_type_spec, $.scoped_name)),
  base_type_spec: $ =>
    choice(
      $.integer_type,
      $.floating_pt_type,
      $.char_type,
      $.boolean_type,
      $.octet_type,
      $.any_type,
      // IDL 7.4.2
    ),
  any_type: _ => 'any',
  fixed_pt_type: $ =>
    seq('fixed', '<', $.positive_int_const, ',', $.positive_int_const, '>'),
  template_type_spec: $ =>
    choice(
      $.sequence_type,
      $.string_type,
      $.fixed_pt_type,
      $.map_type,
      // idl 7.4.13
    ),
  sequence_type: $ =>
    seq(
      'sequence',
      '<',
      choice($.type_spec, optional(seq(',', $.positive_int_const))),
      '>',
    ),
  map_type: $ =>
    seq(
      'map',
      '<',
      $.type_spec,
      ',',
      $.type_spec,
      optional(seq(',', $.positive_int_const)),
      '>',
    ),
}
var base_types_default = {
  rules,
}

// ../common/expr.ts
var PREC = {
  LOGICAL_OR: 1,
  LOGICAL_AND: 2,
  INCLUSIVE_OR: 3,
  EXCLUSIVE_OR: 4,
  BITWISE_AND: 5,
  EQUAL: 6,
  RELATIONAL: 7,
  SHIFT: 9,
  ADD: 10,
  MULTIPLY: 11,
  UNARY: 14,
}
var rules2 = {
  positive_int_const: $ => $.const_expr,
  const_expr: $ => $.or_expr,
  or_expr: $ =>
    prec.left(
      PREC.INCLUSIVE_OR,
      choice($.xor_expr, seq($.or_expr, '|', $.xor_expr)),
    ),
  xor_expr: $ =>
    prec.left(
      PREC.EXCLUSIVE_OR,
      choice($.and_expr, seq($.xor_expr, '^', $.and_expr)),
    ),
  and_expr: $ =>
    prec.left(
      PREC.BITWISE_AND,
      choice($.shift_expr, seq($.and_expr, '$', $.shift_expr)),
    ),
  shift_expr: $ =>
    prec.left(
      PREC.SHIFT,
      choice(
        $.add_expr,
        seq($.shift_expr, '>>', $.add_expr),
        seq($.shift_expr, '<<', $.add_expr),
      ),
    ),
  add_expr: $ =>
    prec.left(
      PREC.ADD,
      choice(
        $.mult_expr,
        seq($.add_expr, '+', $.mult_expr),
        seq($.add_expr, '-', $.mult_expr),
      ),
    ),
  mult_expr: $ =>
    prec.left(
      PREC.MULTIPLY,
      choice(
        $.unary_expr,
        seq($.mult_expr, '*', $.unary_expr),
        seq($.mult_expr, '/', $.unary_expr),
        seq($.mult_expr, '%', $.unary_expr),
      ),
    ),
  unary_expr: $ =>
    choice(seq($.unary_operator, $.primary_expr), $.primary_expr),
  primary_expr: $ =>
    choice($.scoped_name, $.literal, seq('(', $.const_expr, ')')),
  unary_operator: _ => prec.left(PREC.UNARY, choice('-', '+', '~')),
}
var expr_default = {
  rules: rules2,
}

// ../common/literal.ts
var rules3 = {
  literal: $ =>
    choice(
      $.number_literal,
      $.char_literal,
      $.string_literal,
      $.boolean_literal,
    ),
  string_literal: $ => seq(optional('L'), '"', /\w+/, '"'),
  char_literal: $ => seq(optional('L'), "'", field('value', /\w/), "'"),
  boolean_literal: _ => choice('TRUE', 'FALSE'),
  number_literal: _ => {
    const separator = "'"
    const hex = /[0-9a-fA-F]/
    const decimal = /[0-9]/
    const hexDigits = seq(repeat1(hex), repeat(seq(separator, repeat1(hex))))
    const decimalDigits = seq(
      repeat1(decimal),
      repeat(seq(separator, repeat1(decimal))),
    )
    return token(
      seq(
        optional(/[-\+]/),
        optional(choice(/0[xX]/, /0[bB]/)),
        choice(
          seq(
            choice(
              decimalDigits,
              seq(/0[bB]/, decimalDigits),
              seq(/0[xX]/, hexDigits),
            ),
            optional(seq('.', optional(hexDigits))),
          ),
          seq('.', decimalDigits),
        ),
        optional(seq(/[eEpP]/, optional(seq(optional(/[-\+]/), hexDigits)))),
        /[uUlLwWfFbBdD]*/,
      ),
    )
  },
}
var literal_default = {
  rules: rules3,
}

// ../common/directive.ts
var rules4 = {
  preproc_call: $ =>
    seq(
      field('directive', $.preproc_directive),
      field('argument', optional($.preproc_arg)),
      token.immediate(/\r?\n/),
    ),
  preproc_directive: _ => /#[ \t]*[a-zA-Z0-9]\w*/,
  preproc_arg: _ => token(prec(-1, /\S([^/\n]|\/[^*]|\\\r?\n)*/)),
}
var directive_default = {
  rules: rules4,
}

// ../common/common.ts
function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)))
}
function commaSep(rule) {
  return optional(commaSep1(rule))
}

// ../common/rpc.ts
var rules5 = {
  except_dcl: $ => seq('exception', $.identifier, '{', repeat($.member), '}'),
  interface_dcl: $ => choice($.interface_def, $.interface_forward_dcl),
  interface_forward_dcl: $ => seq('interface', $.identifier),
  interface_def: $ =>
    seq(
      repeat($.annotation_appl),
      optional('local'),
      $.interface_header,
      '{',
      optional($.interface_body),
      '}',
    ),
  interface_header: $ =>
    seq('interface', $.identifier, optional($.interface_inheritance_spec)),
  interface_inheritance_spec: $ => seq(':', commaSep1($.interface_name)),
  interface_name: $ => $.scoped_name,
  interface_body: $ => repeat1($.export),
  export: $ =>
    seq(
      choice(
        $.op_dcl,
        $.attr_dcl,
        $.type_dcl,
        // idl 7.4.4
        $.const_dcl,
        // idl 7.4.4
        $.except_dcl,
        // idl 7.4.4
      ),
      ';',
    ),
  op_dcl: $ =>
    seq(
      $.op_type_spec,
      $.identifier,
      '(',
      optional($.parameter_dcls),
      ')',
      optional($.raises_expr),
    ),
  op_type_spec: $ => choice($.type_spec, 'void'),
  parameter_dcls: $ => commaSep1($.param_dcl),
  param_dcl: $ => seq($.param_attribute, $.type_spec, $.simple_declarator),
  param_attribute: $ => choice('in', 'out', 'inout'),
  raises_expr: $ => seq('raises', '(', commaSep1($.scoped_name), ')'),
  attr_dcl: $ => choice($.readonly_attr_spec, $.attr_spec),
  readonly_attr_spec: $ =>
    seq('readonly', 'attribute', $.type_spec, $.readonly_attr_declarator),
  readonly_attr_declarator: $ =>
    choice(
      seq($.simple_declarator, $.raises_expr),
      commaSep1($.simple_declarator),
    ),
  attr_spec: $ => seq('attribute', $.type_spec, $.attr_declarator),
  attr_declarator: $ =>
    choice(
      seq($.simple_declarator, $.attr_raises_expr),
      commaSep1($.simple_declarator),
    ),
  attr_raises_expr: $ =>
    choice(seq($.get_excep_expr, optional($.set_excep_expr)), $.set_excep_expr),
  get_excep_expr: $ => seq('getraises', $.exception_list),
  set_excep_expr: $ => seq('setraises', $.exception_list),
  exception_list: $ => seq('(', commaSep1($.scoped_name), ')'),
}
var rpc_default = {
  rules: rules5,
}

// ../common/bitmask.ts
var rules6 = {
  bitset_dcl: $ =>
    seq(
      'bitset',
      $.identifier,
      optional(seq(':', $.scoped_name)),
      '{',
      repeat($.bitfield),
      '}',
    ),
  bitfield: $ => seq($.bitfield_spec, repeat($.identifier), ';'),
  bitfield_spec: $ =>
    seq(
      'bitfield',
      '<',
      $.positive_int_const,
      optional(seq(',', $.destination_type)),
      '>',
    ),
  destination_type: $ => choice($.boolean_type, $.octet_type, $.integer_type),
  bitmask_dcl: $ =>
    seq(
      repeat($.annotation_appl),
      'bitmask',
      $.identifier,
      '{',
      commaSep(seq(repeat($.annotation_appl), $.bit_value)),
      '}',
    ),
  bit_value: $ => $.identifier,
}
var bitmask_default = {
  rules: rules6,
}

// ../common/annotation.ts
var rules7 = {
  annotation_dcl: $ =>
    seq('@annotation', $.identifier, '{', repeat($.annotation_body), '}'),
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
    prec.left(
      1,
      seq(
        '@',
        $.scoped_name,
        optional(seq('(', $.annotation_appl_params, ')')),
      ),
    ),
  annotation_appl_params: $ =>
    choice($.const_expr, commaSep1($.annotation_appl_param)),
  annotation_appl_param: $ => seq($.identifier, '=', $.const_expr),
}
var annotation_default = {
  rules: rules7,
}

// ../common/template.ts
var rules8 = {
  template_module_dcl: $ =>
    prec.left(
      2,
      seq(
        'module',
        $.identifier,
        '<',
        $.formal_parameters,
        '>',
        '{',
        repeat($.tpl_definition),
        '}',
      ),
    ),
  formal_parameters: $ => commaSep1($.formal_parameter),
  formal_parameter: $ => seq($.formal_parameter_type, $.identifier),
  formal_parameter_type: $ =>
    choice(
      'typename',
      'interface',
      'valuetype',
      'eventtype',
      'struct',
      'union',
      'exception',
      'enum',
      'sequence',
      seq('const', $.const_type),
      $.sequence_type,
      $.simple_type_spec,
    ),
  tpl_definition: $ => choice($._definition, seq($.template_module_ref, ';')),
  template_module_inst: $ =>
    seq('module', $.scoped_name, '<', $.actual_parameters, '>', $.identifier),
  actual_parameters: $ => commaSep1($.actual_parameter),
  actual_parameter: $ => choice($.type_spec, $.const_expr),
  template_module_ref: $ =>
    seq(
      'alias',
      $.scoped_name,
      '<',
      $.formal_parameter_names,
      '>',
      $.identifier,
    ),
  formal_parameter_names: $ => commaSep1($.identifier),
}
var template_default = {
  rules: rules8,
}

// ../common/value_type.ts
var rules9 = {
  value_dcl: $ => choice($.value_def, $.value_forward_dcl),
  value_def: $ => seq($.value_header, '{', repeat($.value_element), '}'),
  value_header: $ =>
    seq('valuetype', $.identifier, optional($.value_inheritance_spec)),
  value_inheritance_spec: $ =>
    choice(
      $.value_inheritance,
      $.value_supports,
      seq($.value_inheritance, $.value_supports),
    ),
  value_inheritance: $ => seq(':', $.value_name),
  value_supports: $ => seq('supports', $.interface_name),
  value_name: $ => $.scoped_name,
  value_element: $ => choice($.export, $.state_member, $.init_dcl),
  state_member: $ =>
    seq(choice('public', 'private'), $.type_spec, $.declarators, ';'),
  init_dcl: $ =>
    seq(
      'factory',
      $.identifier,
      '(',
      optional($.init_param_dcls),
      ')',
      optional($.raises_expr),
      ';',
    ),
  init_param_dcls: $ => commaSep1($.init_param_dcl),
  init_param_dcl: $ => seq('in', $.type_spec, $.simple_declarator),
  value_forward_dcl: $ => seq('valuetype', $.identifier),
}
var value_type_default = {
  rules: rules9,
}

// ../common/typedef_dcl.ts
var rules10 = {
  typedef_dcl: $ => seq('typedef', $.type_declarator),
  type_declarator: $ =>
    seq(
      choice($.simple_type_spec, $.template_type_spec, $.constr_type_dcl),
      $.any_declarators,
    ),
  any_declarators: $ => commaSep1($.any_declarator),
  any_declarator: $ => choice($.simple_declarator, $.array_declarator),
  simple_declarator: $ => $.identifier,
  declarator: $ =>
    choice(
      $.simple_declarator,
      $.array_declarator,
      // 7.4.14
    ),
  declarators: $ => commaSep1($.declarator),
  array_declarator: $ => seq($.identifier, repeat1($.fixed_array_size)),
  fixed_array_size: $ => seq('[', $.positive_int_const, ']'),
}
var typedef_dcl_default = {
  rules: rules10,
}

// ../common/union_dcl.ts
var rules11 = {
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
  element_spec: $ =>
    seq(
      choice(
        $.type_spec,
        $.constr_type_dcl,
        // additional
      ),
      $.declarator,
    ),
  switch_type_spec: $ =>
    choice($.integer_type, $.char_type, $.boolean_type, $.scoped_name),
}
var union_dcl_default = {
  rules: rules11,
}

// index.ts
module.exports = grammar({
  name: 'idl_annotation',
  inline: $ => [
    $.type_dcl,
    $.constr_type_dcl,
    $.struct_dcl,
    $.union_dcl,
    $.primary_expr,
    $.value_inheritance,
    $.value_supports,
  ],
  rules: {
    specification: $ => repeat1($.annotation_comment),
    ...base_types_default.rules,
    ...expr_default.rules,
    ...literal_default.rules,
    ...directive_default.rules,
    ...rpc_default.rules,
    ...bitmask_default.rules,
    ...annotation_default.rules,
    ...template_default.rules,
    ...value_type_default.rules,
    ...typedef_dcl_default.rules,
    ...union_dcl_default.rules,
    annotation_comment: $ => seq('//', repeat1($.annotation_appl)),
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
            $.annotation_dcl,
            // 7.4.15
            $.template_module_dcl,
            // idl 7.4.12
            $.template_module_inst,
            // idl 7.4.12
            $.value_dcl,
            // idl 7.4.5
          ),
          ';',
        ),
      ),
    type_dcl: $ => choice($.constr_type_dcl, $.native_dcl, $.typedef_dcl),
    constr_type_dcl: $ =>
      choice(
        $.struct_dcl,
        $.union_dcl,
        $.enum_dcl,
        $.bitset_dcl,
        // idl 7.4.13
        $.bitmask_dcl,
        // idl 7.4.13
      ),
    native_dcl: $ => seq('native', $.simple_declarator),
    module_dcl: $ =>
      seq('module', $.identifier, '{', repeat($._definition), '}'),
    struct_dcl: $ => choice($.struct_forward_dcl, $.struct_def),
    struct_forward_dcl: $ => prec.left(1, seq('struct', $.identifier)),
    struct_def: $ =>
      prec.left(
        2,
        seq(
          repeat($.annotation_appl),
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
        repeat($.annotation_appl),
        field('type', $.type_spec),
        field('identifier', $.declarators),
        optional($.default),
        ';',
      ),
    default: $ => seq('default', $.const_expr),
    predefine: $ => seq('#define', /[^\n]*/),
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
    identifier: _ => /\w[\w\d_]*/,
    // 7.2.3
  },
})
