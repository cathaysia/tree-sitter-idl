; https://neovim.io/doc/user/treesitter.html#treesitter-highlight-groups
(comment) @comment

[
 "enum"
 "struct"
 "union"
 "bitmask"
 "bitset"
 "@annotation"
 "interface"
 "sequence"
 "exception"
] @keyword.type

[
  "module"
  "switch"
  "case"
  "default"
  "const"
  "void"
  "typedef"
  "readonly"
  "attribute"
  (preproc_directive)
] @keyword

[
  "short"
  "int16"
  "long"
  "int32"
  "long long"
  "int64"

  ; "uint8"
  ; "boolean"
  "fixed"
  ; "octet"
  ; "int8"
  "unsigned short"
  "uint16"
  "unsigned long"
  "uint32"
  "unsigned long long"
  "uint64"
  "float"
  "double"
  "long double"
  "char"
  "wchar"
  "string"
  "wstring"
  "any"
  "fixed"
  "sequence"
  "map"
] @type.builtin

(boolean_literal) @boolean
(number_literal) @number
[ (char_literal) (string_literal) ] @character

[ "(" ")" "[" "[" "<" ">" "{" "}" ] @punctuation.bracket

[ "-" "*" "+" "<" ">" "="] @operator

[ "::" ";" ":" ","] @punctuation.delimiter

(readonly_attr_declarator (simple_declarator)@property)
(attr_declarator)@property

(annotation_appl
  "@" @property
  (scoped_name)@property
)

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
  "raises" @keyword.exception
  (scoped_name
    (identifier)@type
  )
)

(param_dcl
  (param_attribute)@keyword.modifier
)

(preproc_call
  directive: (preproc_directive) @keyword.directive
  argument: (_) @constant
)

(module_dcl
  (identifier) @module
)

(struct_def
  (identifier) @type
  parent: (scoped_name)?@type
)

(enum_dcl
  (enumerator (identifier)@constant)
)

(annotation_dcl
  (identifier) @type
)

(struct_forward_dcl
  (identifier) @type
)

(bitmask_dcl
  (identifier) @type
)

(bitset_dcl
  (identifier) @type
  (scoped_name)* @type
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

(element_spec
  (declarator)@attribute
)

(bitfield
  (bitfield_spec
    "bitfield" @keyword.modifier
    (positive_int_const)@number
    (destination_type)*@type
  )
  (identifier)@variable.parameter
)

(bit_value)@constant
(annotation_member
  (annotation_member_type)@type
  (simple_declarator)@property
)

(const_dcl
  (const_type)@type
  (identifier)@variable
  (const_expr)@constant
)

(case_label
  (const_expr)@constant
)
