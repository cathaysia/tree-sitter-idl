(comment) @comment

[
  "module"
  "enum"
  "struct"
  "union"
  "bitmask"
  "bitset"
  "exception"
  "switch"
  "default"
  "const"
  "interface"
  "@annotation"
  "void"
  "typedef"
  (struct_modifier)
  (preproc_directive)
] @keyword

(readonly_attr_spec ["readonly" "attribute"]@keyword )
(readonly_attr_declarator (simple_declarator)@property)
(attr_declarator)@property

(member
  identifier: (declarators)@property
)
(op_dcl
  (identifier)@function
)

(type_declarator
  (simple_type_spec)@type
  (any_declarators)@type
)
(param_dcl
  (simple_declarator)@variable.parameter
)
(attr_spec ["attribute"]@keyword)
(raises_expr
  "raises"@keyword
  (scoped_name)@type
)

(param_dcl
  (param_attribute)@keyword
)

(preproc_call
  directive: (preproc_directive) @keyword.directive
  argument: (_) @constant
)


[ "(" ")" "[" "[" "<" ">" "{" "}" ] @punctuation.bracket

[ "-" "*" "+" "<" ">" ] @operator

[ "::" ";" ] @delimiter

(enum_dcl
  (enumerator (identifier)@constant)
)
(case_label
  (const_expr)@constant
)

[
  "case"
  "switch"
] @keyword.conditional

(module_dcl
  (identifier) @type
)

(annotation_dcl
  (identifier) @type
)

(struct_def
  (identifier) @type
  parent: (scoped_name)?@type
)

(struct_forward_dcl
  (identifier) @type
)

(bitmask_dcl
  (identifier) @type
)

(bitset_dcl
  (identifier) @type
)

(enum_dcl
  (identifier) @type
)

(union_forward_dcl
  (identifier) @type
)

(interface_forward_dcl
  (identifier) @type
)

(interface_header
  (identifier) @type
)

(interface_inheritance_spec
  (interface_name) @type
)

(union_def
  (identifier) @type
  (switch_type_spec) @type
)

(except_dcl
  (identifier) @type
)

[
 (type_spec)
 (annotation_member_type)
] @type
