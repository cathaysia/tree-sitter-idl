const { commaSep, commaSep1 } = require('./common')

exports.rules = {
  template_module_dcl: $ =>
    prec.left(
      1,
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
