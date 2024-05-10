const { commaSep, commaSep1 } = require('./common')

exports.rules = {
  type_id_dcl: $ => seq('typeid', $.scoped_name, $.string_literal),
  type_prefix_dcl: $ => seq('typeprefix', $.scoped_name, $.string_literal),
  import_dcl: $ => seq('import', $.imported_scope),
  imported_scope: $ => choice($.scoped_name, $.string_literal),
  object_type: _ => 'Object',
  op_oneway_dcl: $ =>
    seq(
      'oneway',
      'void',
      $.identifier,
      '(',
      optional($.in_parameter_dcls),
      ')',
    ),
  in_parameter_dcls: $ => commaSep1($.in_param_dcl),
  in_param_dcl: $ => seq('in', $.type_spec, $.simple_declarator),
  op_with_context: $ => seq(choice($.op_dcl, $.op_oneway_dcl), $.context_expr),
  context_expr: $ => seq('context', '(', commaSep($.string_literal), ')'),
}
