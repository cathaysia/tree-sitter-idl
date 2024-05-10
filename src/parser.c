#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 649
#define LARGE_STATE_COUNT 26
#define SYMBOL_COUNT 300
#define ALIAS_COUNT 0
#define TOKEN_COUNT 121
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 9

enum ts_symbol_identifiers {
    anon_sym_short = 1,
    anon_sym_int16 = 2,
    anon_sym_long = 3,
    anon_sym_int32 = 4,
    anon_sym_longlong = 5,
    anon_sym_int64 = 6,
    sym_unsigned_tiny_int = 7,
    sym_boolean_type = 8,
    anon_sym_fixed = 9,
    sym_octet_type = 10,
    sym_signed_tiny_int = 11,
    anon_sym_unsignedshort = 12,
    anon_sym_uint16 = 13,
    anon_sym_unsignedlong = 14,
    anon_sym_uint32 = 15,
    anon_sym_unsignedlonglong = 16,
    anon_sym_uint64 = 17,
    anon_sym_float = 18,
    anon_sym_double = 19,
    anon_sym_longdouble = 20,
    anon_sym_char = 21,
    anon_sym_wchar = 22,
    anon_sym_COLON_COLON = 23,
    anon_sym_string = 24,
    anon_sym_wstring = 25,
    anon_sym_LT = 26,
    anon_sym_GT = 27,
    anon_sym_any = 28,
    anon_sym_COMMA = 29,
    anon_sym_sequence = 30,
    anon_sym_map = 31,
    anon_sym_PIPE = 32,
    anon_sym_CARET = 33,
    anon_sym_DOLLAR = 34,
    anon_sym_GT_GT = 35,
    anon_sym_LT_LT = 36,
    anon_sym_PLUS = 37,
    anon_sym_DASH = 38,
    anon_sym_STAR = 39,
    anon_sym_SLASH = 40,
    anon_sym_PERCENT = 41,
    anon_sym_LPAREN = 42,
    anon_sym_RPAREN = 43,
    anon_sym_TILDE = 44,
    anon_sym_L = 45,
    anon_sym_DQUOTE = 46,
    aux_sym_string_literal_token1 = 47,
    anon_sym_SQUOTE = 48,
    aux_sym_char_literal_token1 = 49,
    anon_sym_TRUE = 50,
    anon_sym_FALSE = 51,
    sym_number_literal = 52,
    aux_sym_preproc_call_token1 = 53,
    sym_preproc_directive = 54,
    sym_preproc_arg = 55,
    anon_sym_exception = 56,
    anon_sym_LBRACE = 57,
    anon_sym_RBRACE = 58,
    anon_sym_local = 59,
    anon_sym_abstract = 60,
    anon_sym_interface = 61,
    anon_sym_COLON = 62,
    anon_sym_SEMI = 63,
    anon_sym_void = 64,
    anon_sym_in = 65,
    anon_sym_out = 66,
    anon_sym_inout = 67,
    anon_sym_raises = 68,
    anon_sym_readonly = 69,
    anon_sym_attribute = 70,
    anon_sym_getraises = 71,
    anon_sym_setraises = 72,
    anon_sym_bitset = 73,
    anon_sym_bitfield = 74,
    anon_sym_bitmask = 75,
    anon_sym_ATannotation = 76,
    anon_sym_default = 77,
    anon_sym_AT = 78,
    anon_sym_EQ = 79,
    anon_sym_module = 80,
    anon_sym_typename = 81,
    anon_sym_valuetype = 82,
    anon_sym_eventtype = 83,
    anon_sym_struct = 84,
    anon_sym_union = 85,
    anon_sym_enum = 86,
    anon_sym_const = 87,
    anon_sym_alias = 88,
    anon_sym_custom = 89,
    anon_sym_truncatable = 90,
    anon_sym_supports = 91,
    anon_sym_public = 92,
    anon_sym_private = 93,
    anon_sym_factory = 94,
    anon_sym_typedef = 95,
    anon_sym_LBRACK = 96,
    anon_sym_RBRACK = 97,
    anon_sym_ATdefault_literal = 98,
    anon_sym_ATignore_literal_names = 99,
    anon_sym_switch = 100,
    anon_sym_case = 101,
    anon_sym_typeid = 102,
    anon_sym_typeprefix = 103,
    anon_sym_import = 104,
    sym_object_type = 105,
    anon_sym_oneway = 106,
    anon_sym_context = 107,
    sym_value_base_type = 108,
    anon_sym_component = 109,
    anon_sym_provides = 110,
    anon_sym_uses = 111,
    anon_sym_native = 112,
    anon_sym_POUNDdefine = 113,
    aux_sym_predefine_token1 = 114,
    sym_identifier = 115,
    anon_sym_SLASH_SLASH = 116,
    aux_sym_comment_token1 = 117,
    aux_sym_comment_token2 = 118,
    anon_sym_SLASH_STAR = 119,
    aux_sym_comment_token3 = 120,
    sym_specification = 121,
    sym_signed_short_int = 122,
    sym_signed_long_int = 123,
    sym_signed_longlong_int = 124,
    sym_unsigned_int = 125,
    sym_fixed_pt_const_type = 126,
    sym_integer_type = 127,
    sym_signed_int = 128,
    sym_unsigned_short_int = 129,
    sym_unsigned_long_int = 130,
    sym_unsigned_longlong_int = 131,
    sym_floating_pt_type = 132,
    sym_char_type = 133,
    sym_scoped_name = 134,
    sym_string_type = 135,
    sym_type_spec = 136,
    sym_simple_type_spec = 137,
    sym_base_type_spec = 138,
    sym_any_type = 139,
    sym_fixed_pt_type = 140,
    sym_template_type_spec = 141,
    sym_sequence_type = 142,
    sym_map_type = 143,
    sym_positive_int_const = 144,
    sym_const_expr = 145,
    sym_or_expr = 146,
    sym_xor_expr = 147,
    sym_and_expr = 148,
    sym_shift_expr = 149,
    sym_add_expr = 150,
    sym_mult_expr = 151,
    sym_unary_expr = 152,
    sym_unary_operator = 153,
    sym_literal = 154,
    sym_string_literal = 155,
    sym_char_literal = 156,
    sym_boolean_literal = 157,
    sym_preproc_call = 158,
    sym_except_dcl = 159,
    sym_interface_dcl = 160,
    sym_interface_kind = 161,
    sym_interface_forward_dcl = 162,
    sym_interface_def = 163,
    sym_interface_header = 164,
    sym_interface_inheritance_spec = 165,
    sym_interface_name = 166,
    sym_interface_body = 167,
    sym_export = 168,
    sym_op_dcl = 169,
    sym_op_type_spec = 170,
    sym_parameter_dcls = 171,
    sym_param_dcl = 172,
    sym_param_attribute = 173,
    sym_raises_expr = 174,
    sym_attr_dcl = 175,
    sym_readonly_attr_spec = 176,
    sym_readonly_attr_declarator = 177,
    sym_attr_spec = 178,
    sym_attr_declarator = 179,
    sym_attr_raises_expr = 180,
    sym_get_excep_expr = 181,
    sym_set_excep_expr = 182,
    sym_exception_list = 183,
    sym_bitset_dcl = 184,
    sym_bitfield = 185,
    sym_bitfield_spec = 186,
    sym_destination_type = 187,
    sym_bitmask_dcl = 188,
    sym_bit_value = 189,
    sym_annotation_dcl = 190,
    sym_annotation_body = 191,
    sym_annotation_member = 192,
    sym_annotation_member_type = 193,
    sym_any_const_type = 194,
    sym_annotation_appl = 195,
    sym_annotation_appl_params = 196,
    sym_annotation_appl_param = 197,
    sym_template_module_dcl = 198,
    sym_formal_parameters = 199,
    sym_formal_parameter = 200,
    sym_formal_parameter_type = 201,
    sym_tpl_definition = 202,
    sym_template_module_inst = 203,
    sym_actual_parameters = 204,
    sym_actual_parameter = 205,
    sym_template_module_ref = 206,
    sym_formal_parameter_names = 207,
    sym_value_dcl = 208,
    sym_value_def = 209,
    sym_value_kind = 210,
    sym_value_header = 211,
    sym_value_inheritance_spec = 212,
    sym_value_name = 213,
    sym_value_element = 214,
    sym_state_member = 215,
    sym_init_dcl = 216,
    sym_init_param_dcls = 217,
    sym_init_param_dcl = 218,
    sym_value_forward_dcl = 219,
    sym_typedef_dcl = 220,
    sym_type_declarator = 221,
    sym_any_declarators = 222,
    sym_any_declarator = 223,
    sym_simple_declarator = 224,
    sym_declarator = 225,
    sym_declarators = 226,
    sym_array_declarator = 227,
    sym_fixed_array_size = 228,
    sym_enum_dcl = 229,
    sym_enumerator = 230,
    sym_enum_modifier = 231,
    sym_enum_anno = 232,
    sym_union_forward_dcl = 233,
    sym_union_def = 234,
    sym_case = 235,
    sym_case_label = 236,
    sym_element_spec = 237,
    sym_switch_type_spec = 238,
    sym_type_id_dcl = 239,
    sym_type_prefix_dcl = 240,
    sym_import_dcl = 241,
    sym_imported_scope = 242,
    sym_op_oneway_dcl = 243,
    sym_in_parameter_dcls = 244,
    sym_in_param_dcl = 245,
    sym_op_with_context = 246,
    sym_context_expr = 247,
    sym_value_abs_def = 248,
    sym_component_dcl = 249,
    sym_component_forward_dcl = 250,
    sym_component_def = 251,
    sym_component_header = 252,
    sym_component_inheritance_spec = 253,
    sym_component_body = 254,
    sym_component_export = 255,
    sym_provides_dcl = 256,
    sym_interface_type = 257,
    sym_uses_dcl = 258,
    sym__definition = 259,
    sym_native_dcl = 260,
    sym_module_dcl = 261,
    sym_struct_forward_dcl = 262,
    sym_struct_def = 263,
    sym_member = 264,
    sym_default = 265,
    sym_predefine = 266,
    sym_const_dcl = 267,
    sym_const_type = 268,
    sym_comment = 269,
    aux_sym_specification_repeat1 = 270,
    aux_sym_specification_repeat2 = 271,
    aux_sym_except_dcl_repeat1 = 272,
    aux_sym_interface_def_repeat1 = 273,
    aux_sym_interface_inheritance_spec_repeat1 = 274,
    aux_sym_interface_body_repeat1 = 275,
    aux_sym_parameter_dcls_repeat1 = 276,
    aux_sym_raises_expr_repeat1 = 277,
    aux_sym_readonly_attr_declarator_repeat1 = 278,
    aux_sym_bitset_dcl_repeat1 = 279,
    aux_sym_bitfield_repeat1 = 280,
    aux_sym_bitmask_dcl_repeat1 = 281,
    aux_sym_annotation_dcl_repeat1 = 282,
    aux_sym_annotation_appl_params_repeat1 = 283,
    aux_sym_template_module_dcl_repeat1 = 284,
    aux_sym_formal_parameters_repeat1 = 285,
    aux_sym_actual_parameters_repeat1 = 286,
    aux_sym_formal_parameter_names_repeat1 = 287,
    aux_sym_value_def_repeat1 = 288,
    aux_sym_value_inheritance_spec_repeat1 = 289,
    aux_sym_init_param_dcls_repeat1 = 290,
    aux_sym_any_declarators_repeat1 = 291,
    aux_sym_declarators_repeat1 = 292,
    aux_sym_array_declarator_repeat1 = 293,
    aux_sym_enum_dcl_repeat1 = 294,
    aux_sym_enumerator_repeat1 = 295,
    aux_sym_union_def_repeat1 = 296,
    aux_sym_in_parameter_dcls_repeat1 = 297,
    aux_sym_context_expr_repeat1 = 298,
    aux_sym_component_body_repeat1 = 299,
};

static const char *const ts_symbol_names[] = {
    [ts_builtin_sym_end] = "end",
    [anon_sym_short] = "short",
    [anon_sym_int16] = "int16",
    [anon_sym_long] = "long",
    [anon_sym_int32] = "int32",
    [anon_sym_longlong] = "long long",
    [anon_sym_int64] = "int64",
    [sym_unsigned_tiny_int] = "unsigned_tiny_int",
    [sym_boolean_type] = "boolean_type",
    [anon_sym_fixed] = "fixed",
    [sym_octet_type] = "octet_type",
    [sym_signed_tiny_int] = "signed_tiny_int",
    [anon_sym_unsignedshort] = "unsigned short",
    [anon_sym_uint16] = "uint16",
    [anon_sym_unsignedlong] = "unsigned long",
    [anon_sym_uint32] = "uint32",
    [anon_sym_unsignedlonglong] = "unsigned long long",
    [anon_sym_uint64] = "uint64",
    [anon_sym_float] = "float",
    [anon_sym_double] = "double",
    [anon_sym_longdouble] = "long double",
    [anon_sym_char] = "char",
    [anon_sym_wchar] = "wchar",
    [anon_sym_COLON_COLON] = "::",
    [anon_sym_string] = "string",
    [anon_sym_wstring] = "wstring",
    [anon_sym_LT] = "<",
    [anon_sym_GT] = ">",
    [anon_sym_any] = "any",
    [anon_sym_COMMA] = ",",
    [anon_sym_sequence] = "sequence",
    [anon_sym_map] = "map",
    [anon_sym_PIPE] = "|",
    [anon_sym_CARET] = "^",
    [anon_sym_DOLLAR] = "$",
    [anon_sym_GT_GT] = ">>",
    [anon_sym_LT_LT] = "<<",
    [anon_sym_PLUS] = "+",
    [anon_sym_DASH] = "-",
    [anon_sym_STAR] = "*",
    [anon_sym_SLASH] = "/",
    [anon_sym_PERCENT] = "%",
    [anon_sym_LPAREN] = "(",
    [anon_sym_RPAREN] = ")",
    [anon_sym_TILDE] = "~",
    [anon_sym_L] = "L",
    [anon_sym_DQUOTE] = "\"",
    [aux_sym_string_literal_token1] = "string_literal_token1",
    [anon_sym_SQUOTE] = "'",
    [aux_sym_char_literal_token1] = "char_literal_token1",
    [anon_sym_TRUE] = "TRUE",
    [anon_sym_FALSE] = "FALSE",
    [sym_number_literal] = "number_literal",
    [aux_sym_preproc_call_token1] = "preproc_call_token1",
    [sym_preproc_directive] = "preproc_directive",
    [sym_preproc_arg] = "preproc_arg",
    [anon_sym_exception] = "exception",
    [anon_sym_LBRACE] = "{",
    [anon_sym_RBRACE] = "}",
    [anon_sym_local] = "local",
    [anon_sym_abstract] = "abstract",
    [anon_sym_interface] = "interface",
    [anon_sym_COLON] = ":",
    [anon_sym_SEMI] = ";",
    [anon_sym_void] = "void",
    [anon_sym_in] = "in",
    [anon_sym_out] = "out",
    [anon_sym_inout] = "inout",
    [anon_sym_raises] = "raises",
    [anon_sym_readonly] = "readonly",
    [anon_sym_attribute] = "attribute",
    [anon_sym_getraises] = "getraises",
    [anon_sym_setraises] = "setraises",
    [anon_sym_bitset] = "bitset",
    [anon_sym_bitfield] = "bitfield",
    [anon_sym_bitmask] = "bitmask",
    [anon_sym_ATannotation] = "@annotation",
    [anon_sym_default] = "default",
    [anon_sym_AT] = "@",
    [anon_sym_EQ] = "=",
    [anon_sym_module] = "module",
    [anon_sym_typename] = "typename",
    [anon_sym_valuetype] = "valuetype",
    [anon_sym_eventtype] = "eventtype",
    [anon_sym_struct] = "struct",
    [anon_sym_union] = "union",
    [anon_sym_enum] = "enum",
    [anon_sym_const] = "const",
    [anon_sym_alias] = "alias",
    [anon_sym_custom] = "custom",
    [anon_sym_truncatable] = "truncatable",
    [anon_sym_supports] = "supports",
    [anon_sym_public] = "public",
    [anon_sym_private] = "private",
    [anon_sym_factory] = "factory",
    [anon_sym_typedef] = "typedef",
    [anon_sym_LBRACK] = "[",
    [anon_sym_RBRACK] = "]",
    [anon_sym_ATdefault_literal] = "@default_literal",
    [anon_sym_ATignore_literal_names] = "@ignore_literal_names",
    [anon_sym_switch] = "switch",
    [anon_sym_case] = "case",
    [anon_sym_typeid] = "typeid",
    [anon_sym_typeprefix] = "typeprefix",
    [anon_sym_import] = "import",
    [sym_object_type] = "object_type",
    [anon_sym_oneway] = "oneway",
    [anon_sym_context] = "context",
    [sym_value_base_type] = "value_base_type",
    [anon_sym_component] = "component",
    [anon_sym_provides] = "provides",
    [anon_sym_uses] = "uses",
    [anon_sym_native] = "native",
    [anon_sym_POUNDdefine] = "#define",
    [aux_sym_predefine_token1] = "predefine_token1",
    [sym_identifier] = "identifier",
    [anon_sym_SLASH_SLASH] = "//",
    [aux_sym_comment_token1] = "comment_token1",
    [aux_sym_comment_token2] = "comment_token2",
    [anon_sym_SLASH_STAR] = "/*",
    [aux_sym_comment_token3] = "comment_token3",
    [sym_specification] = "specification",
    [sym_signed_short_int] = "signed_short_int",
    [sym_signed_long_int] = "signed_long_int",
    [sym_signed_longlong_int] = "signed_longlong_int",
    [sym_unsigned_int] = "unsigned_int",
    [sym_fixed_pt_const_type] = "fixed_pt_const_type",
    [sym_integer_type] = "integer_type",
    [sym_signed_int] = "signed_int",
    [sym_unsigned_short_int] = "unsigned_short_int",
    [sym_unsigned_long_int] = "unsigned_long_int",
    [sym_unsigned_longlong_int] = "unsigned_longlong_int",
    [sym_floating_pt_type] = "floating_pt_type",
    [sym_char_type] = "char_type",
    [sym_scoped_name] = "scoped_name",
    [sym_string_type] = "string_type",
    [sym_type_spec] = "type_spec",
    [sym_simple_type_spec] = "simple_type_spec",
    [sym_base_type_spec] = "base_type_spec",
    [sym_any_type] = "any_type",
    [sym_fixed_pt_type] = "fixed_pt_type",
    [sym_template_type_spec] = "template_type_spec",
    [sym_sequence_type] = "sequence_type",
    [sym_map_type] = "map_type",
    [sym_positive_int_const] = "positive_int_const",
    [sym_const_expr] = "const_expr",
    [sym_or_expr] = "or_expr",
    [sym_xor_expr] = "xor_expr",
    [sym_and_expr] = "and_expr",
    [sym_shift_expr] = "shift_expr",
    [sym_add_expr] = "add_expr",
    [sym_mult_expr] = "mult_expr",
    [sym_unary_expr] = "unary_expr",
    [sym_unary_operator] = "unary_operator",
    [sym_literal] = "literal",
    [sym_string_literal] = "string_literal",
    [sym_char_literal] = "char_literal",
    [sym_boolean_literal] = "boolean_literal",
    [sym_preproc_call] = "preproc_call",
    [sym_except_dcl] = "except_dcl",
    [sym_interface_dcl] = "interface_dcl",
    [sym_interface_kind] = "interface_kind",
    [sym_interface_forward_dcl] = "interface_forward_dcl",
    [sym_interface_def] = "interface_def",
    [sym_interface_header] = "interface_header",
    [sym_interface_inheritance_spec] = "interface_inheritance_spec",
    [sym_interface_name] = "interface_name",
    [sym_interface_body] = "interface_body",
    [sym_export] = "export",
    [sym_op_dcl] = "op_dcl",
    [sym_op_type_spec] = "op_type_spec",
    [sym_parameter_dcls] = "parameter_dcls",
    [sym_param_dcl] = "param_dcl",
    [sym_param_attribute] = "param_attribute",
    [sym_raises_expr] = "raises_expr",
    [sym_attr_dcl] = "attr_dcl",
    [sym_readonly_attr_spec] = "readonly_attr_spec",
    [sym_readonly_attr_declarator] = "readonly_attr_declarator",
    [sym_attr_spec] = "attr_spec",
    [sym_attr_declarator] = "attr_declarator",
    [sym_attr_raises_expr] = "attr_raises_expr",
    [sym_get_excep_expr] = "get_excep_expr",
    [sym_set_excep_expr] = "set_excep_expr",
    [sym_exception_list] = "exception_list",
    [sym_bitset_dcl] = "bitset_dcl",
    [sym_bitfield] = "bitfield",
    [sym_bitfield_spec] = "bitfield_spec",
    [sym_destination_type] = "destination_type",
    [sym_bitmask_dcl] = "bitmask_dcl",
    [sym_bit_value] = "bit_value",
    [sym_annotation_dcl] = "annotation_dcl",
    [sym_annotation_body] = "annotation_body",
    [sym_annotation_member] = "annotation_member",
    [sym_annotation_member_type] = "annotation_member_type",
    [sym_any_const_type] = "any_const_type",
    [sym_annotation_appl] = "annotation_appl",
    [sym_annotation_appl_params] = "annotation_appl_params",
    [sym_annotation_appl_param] = "annotation_appl_param",
    [sym_template_module_dcl] = "template_module_dcl",
    [sym_formal_parameters] = "formal_parameters",
    [sym_formal_parameter] = "formal_parameter",
    [sym_formal_parameter_type] = "formal_parameter_type",
    [sym_tpl_definition] = "tpl_definition",
    [sym_template_module_inst] = "template_module_inst",
    [sym_actual_parameters] = "actual_parameters",
    [sym_actual_parameter] = "actual_parameter",
    [sym_template_module_ref] = "template_module_ref",
    [sym_formal_parameter_names] = "formal_parameter_names",
    [sym_value_dcl] = "value_dcl",
    [sym_value_def] = "value_def",
    [sym_value_kind] = "value_kind",
    [sym_value_header] = "value_header",
    [sym_value_inheritance_spec] = "value_inheritance_spec",
    [sym_value_name] = "value_name",
    [sym_value_element] = "value_element",
    [sym_state_member] = "state_member",
    [sym_init_dcl] = "init_dcl",
    [sym_init_param_dcls] = "init_param_dcls",
    [sym_init_param_dcl] = "init_param_dcl",
    [sym_value_forward_dcl] = "value_forward_dcl",
    [sym_typedef_dcl] = "typedef_dcl",
    [sym_type_declarator] = "type_declarator",
    [sym_any_declarators] = "any_declarators",
    [sym_any_declarator] = "any_declarator",
    [sym_simple_declarator] = "simple_declarator",
    [sym_declarator] = "declarator",
    [sym_declarators] = "declarators",
    [sym_array_declarator] = "array_declarator",
    [sym_fixed_array_size] = "fixed_array_size",
    [sym_enum_dcl] = "enum_dcl",
    [sym_enumerator] = "enumerator",
    [sym_enum_modifier] = "enum_modifier",
    [sym_enum_anno] = "enum_anno",
    [sym_union_forward_dcl] = "union_forward_dcl",
    [sym_union_def] = "union_def",
    [sym_case] = "case",
    [sym_case_label] = "case_label",
    [sym_element_spec] = "element_spec",
    [sym_switch_type_spec] = "switch_type_spec",
    [sym_type_id_dcl] = "type_id_dcl",
    [sym_type_prefix_dcl] = "type_prefix_dcl",
    [sym_import_dcl] = "import_dcl",
    [sym_imported_scope] = "imported_scope",
    [sym_op_oneway_dcl] = "op_oneway_dcl",
    [sym_in_parameter_dcls] = "in_parameter_dcls",
    [sym_in_param_dcl] = "in_param_dcl",
    [sym_op_with_context] = "op_with_context",
    [sym_context_expr] = "context_expr",
    [sym_value_abs_def] = "value_abs_def",
    [sym_component_dcl] = "component_dcl",
    [sym_component_forward_dcl] = "component_forward_dcl",
    [sym_component_def] = "component_def",
    [sym_component_header] = "component_header",
    [sym_component_inheritance_spec] = "component_inheritance_spec",
    [sym_component_body] = "component_body",
    [sym_component_export] = "component_export",
    [sym_provides_dcl] = "provides_dcl",
    [sym_interface_type] = "interface_type",
    [sym_uses_dcl] = "uses_dcl",
    [sym__definition] = "_definition",
    [sym_native_dcl] = "native_dcl",
    [sym_module_dcl] = "module_dcl",
    [sym_struct_forward_dcl] = "struct_forward_dcl",
    [sym_struct_def] = "struct_def",
    [sym_member] = "member",
    [sym_default] = "default",
    [sym_predefine] = "predefine",
    [sym_const_dcl] = "const_dcl",
    [sym_const_type] = "const_type",
    [sym_comment] = "comment",
    [aux_sym_specification_repeat1] = "specification_repeat1",
    [aux_sym_specification_repeat2] = "specification_repeat2",
    [aux_sym_except_dcl_repeat1] = "except_dcl_repeat1",
    [aux_sym_interface_def_repeat1] = "interface_def_repeat1",
    [aux_sym_interface_inheritance_spec_repeat1] = "interface_inheritance_spec_repeat1",
    [aux_sym_interface_body_repeat1] = "interface_body_repeat1",
    [aux_sym_parameter_dcls_repeat1] = "parameter_dcls_repeat1",
    [aux_sym_raises_expr_repeat1] = "raises_expr_repeat1",
    [aux_sym_readonly_attr_declarator_repeat1] = "readonly_attr_declarator_repeat1",
    [aux_sym_bitset_dcl_repeat1] = "bitset_dcl_repeat1",
    [aux_sym_bitfield_repeat1] = "bitfield_repeat1",
    [aux_sym_bitmask_dcl_repeat1] = "bitmask_dcl_repeat1",
    [aux_sym_annotation_dcl_repeat1] = "annotation_dcl_repeat1",
    [aux_sym_annotation_appl_params_repeat1] = "annotation_appl_params_repeat1",
    [aux_sym_template_module_dcl_repeat1] = "template_module_dcl_repeat1",
    [aux_sym_formal_parameters_repeat1] = "formal_parameters_repeat1",
    [aux_sym_actual_parameters_repeat1] = "actual_parameters_repeat1",
    [aux_sym_formal_parameter_names_repeat1] = "formal_parameter_names_repeat1",
    [aux_sym_value_def_repeat1] = "value_def_repeat1",
    [aux_sym_value_inheritance_spec_repeat1] = "value_inheritance_spec_repeat1",
    [aux_sym_init_param_dcls_repeat1] = "init_param_dcls_repeat1",
    [aux_sym_any_declarators_repeat1] = "any_declarators_repeat1",
    [aux_sym_declarators_repeat1] = "declarators_repeat1",
    [aux_sym_array_declarator_repeat1] = "array_declarator_repeat1",
    [aux_sym_enum_dcl_repeat1] = "enum_dcl_repeat1",
    [aux_sym_enumerator_repeat1] = "enumerator_repeat1",
    [aux_sym_union_def_repeat1] = "union_def_repeat1",
    [aux_sym_in_parameter_dcls_repeat1] = "in_parameter_dcls_repeat1",
    [aux_sym_context_expr_repeat1] = "context_expr_repeat1",
    [aux_sym_component_body_repeat1] = "component_body_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
    [ts_builtin_sym_end] = ts_builtin_sym_end,
    [anon_sym_short] = anon_sym_short,
    [anon_sym_int16] = anon_sym_int16,
    [anon_sym_long] = anon_sym_long,
    [anon_sym_int32] = anon_sym_int32,
    [anon_sym_longlong] = anon_sym_longlong,
    [anon_sym_int64] = anon_sym_int64,
    [sym_unsigned_tiny_int] = sym_unsigned_tiny_int,
    [sym_boolean_type] = sym_boolean_type,
    [anon_sym_fixed] = anon_sym_fixed,
    [sym_octet_type] = sym_octet_type,
    [sym_signed_tiny_int] = sym_signed_tiny_int,
    [anon_sym_unsignedshort] = anon_sym_unsignedshort,
    [anon_sym_uint16] = anon_sym_uint16,
    [anon_sym_unsignedlong] = anon_sym_unsignedlong,
    [anon_sym_uint32] = anon_sym_uint32,
    [anon_sym_unsignedlonglong] = anon_sym_unsignedlonglong,
    [anon_sym_uint64] = anon_sym_uint64,
    [anon_sym_float] = anon_sym_float,
    [anon_sym_double] = anon_sym_double,
    [anon_sym_longdouble] = anon_sym_longdouble,
    [anon_sym_char] = anon_sym_char,
    [anon_sym_wchar] = anon_sym_wchar,
    [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
    [anon_sym_string] = anon_sym_string,
    [anon_sym_wstring] = anon_sym_wstring,
    [anon_sym_LT] = anon_sym_LT,
    [anon_sym_GT] = anon_sym_GT,
    [anon_sym_any] = anon_sym_any,
    [anon_sym_COMMA] = anon_sym_COMMA,
    [anon_sym_sequence] = anon_sym_sequence,
    [anon_sym_map] = anon_sym_map,
    [anon_sym_PIPE] = anon_sym_PIPE,
    [anon_sym_CARET] = anon_sym_CARET,
    [anon_sym_DOLLAR] = anon_sym_DOLLAR,
    [anon_sym_GT_GT] = anon_sym_GT_GT,
    [anon_sym_LT_LT] = anon_sym_LT_LT,
    [anon_sym_PLUS] = anon_sym_PLUS,
    [anon_sym_DASH] = anon_sym_DASH,
    [anon_sym_STAR] = anon_sym_STAR,
    [anon_sym_SLASH] = anon_sym_SLASH,
    [anon_sym_PERCENT] = anon_sym_PERCENT,
    [anon_sym_LPAREN] = anon_sym_LPAREN,
    [anon_sym_RPAREN] = anon_sym_RPAREN,
    [anon_sym_TILDE] = anon_sym_TILDE,
    [anon_sym_L] = anon_sym_L,
    [anon_sym_DQUOTE] = anon_sym_DQUOTE,
    [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
    [anon_sym_SQUOTE] = anon_sym_SQUOTE,
    [aux_sym_char_literal_token1] = aux_sym_char_literal_token1,
    [anon_sym_TRUE] = anon_sym_TRUE,
    [anon_sym_FALSE] = anon_sym_FALSE,
    [sym_number_literal] = sym_number_literal,
    [aux_sym_preproc_call_token1] = aux_sym_preproc_call_token1,
    [sym_preproc_directive] = sym_preproc_directive,
    [sym_preproc_arg] = sym_preproc_arg,
    [anon_sym_exception] = anon_sym_exception,
    [anon_sym_LBRACE] = anon_sym_LBRACE,
    [anon_sym_RBRACE] = anon_sym_RBRACE,
    [anon_sym_local] = anon_sym_local,
    [anon_sym_abstract] = anon_sym_abstract,
    [anon_sym_interface] = anon_sym_interface,
    [anon_sym_COLON] = anon_sym_COLON,
    [anon_sym_SEMI] = anon_sym_SEMI,
    [anon_sym_void] = anon_sym_void,
    [anon_sym_in] = anon_sym_in,
    [anon_sym_out] = anon_sym_out,
    [anon_sym_inout] = anon_sym_inout,
    [anon_sym_raises] = anon_sym_raises,
    [anon_sym_readonly] = anon_sym_readonly,
    [anon_sym_attribute] = anon_sym_attribute,
    [anon_sym_getraises] = anon_sym_getraises,
    [anon_sym_setraises] = anon_sym_setraises,
    [anon_sym_bitset] = anon_sym_bitset,
    [anon_sym_bitfield] = anon_sym_bitfield,
    [anon_sym_bitmask] = anon_sym_bitmask,
    [anon_sym_ATannotation] = anon_sym_ATannotation,
    [anon_sym_default] = anon_sym_default,
    [anon_sym_AT] = anon_sym_AT,
    [anon_sym_EQ] = anon_sym_EQ,
    [anon_sym_module] = anon_sym_module,
    [anon_sym_typename] = anon_sym_typename,
    [anon_sym_valuetype] = anon_sym_valuetype,
    [anon_sym_eventtype] = anon_sym_eventtype,
    [anon_sym_struct] = anon_sym_struct,
    [anon_sym_union] = anon_sym_union,
    [anon_sym_enum] = anon_sym_enum,
    [anon_sym_const] = anon_sym_const,
    [anon_sym_alias] = anon_sym_alias,
    [anon_sym_custom] = anon_sym_custom,
    [anon_sym_truncatable] = anon_sym_truncatable,
    [anon_sym_supports] = anon_sym_supports,
    [anon_sym_public] = anon_sym_public,
    [anon_sym_private] = anon_sym_private,
    [anon_sym_factory] = anon_sym_factory,
    [anon_sym_typedef] = anon_sym_typedef,
    [anon_sym_LBRACK] = anon_sym_LBRACK,
    [anon_sym_RBRACK] = anon_sym_RBRACK,
    [anon_sym_ATdefault_literal] = anon_sym_ATdefault_literal,
    [anon_sym_ATignore_literal_names] = anon_sym_ATignore_literal_names,
    [anon_sym_switch] = anon_sym_switch,
    [anon_sym_case] = anon_sym_case,
    [anon_sym_typeid] = anon_sym_typeid,
    [anon_sym_typeprefix] = anon_sym_typeprefix,
    [anon_sym_import] = anon_sym_import,
    [sym_object_type] = sym_object_type,
    [anon_sym_oneway] = anon_sym_oneway,
    [anon_sym_context] = anon_sym_context,
    [sym_value_base_type] = sym_value_base_type,
    [anon_sym_component] = anon_sym_component,
    [anon_sym_provides] = anon_sym_provides,
    [anon_sym_uses] = anon_sym_uses,
    [anon_sym_native] = anon_sym_native,
    [anon_sym_POUNDdefine] = anon_sym_POUNDdefine,
    [aux_sym_predefine_token1] = aux_sym_predefine_token1,
    [sym_identifier] = sym_identifier,
    [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
    [aux_sym_comment_token1] = aux_sym_comment_token1,
    [aux_sym_comment_token2] = aux_sym_comment_token2,
    [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
    [aux_sym_comment_token3] = aux_sym_comment_token3,
    [sym_specification] = sym_specification,
    [sym_signed_short_int] = sym_signed_short_int,
    [sym_signed_long_int] = sym_signed_long_int,
    [sym_signed_longlong_int] = sym_signed_longlong_int,
    [sym_unsigned_int] = sym_unsigned_int,
    [sym_fixed_pt_const_type] = sym_fixed_pt_const_type,
    [sym_integer_type] = sym_integer_type,
    [sym_signed_int] = sym_signed_int,
    [sym_unsigned_short_int] = sym_unsigned_short_int,
    [sym_unsigned_long_int] = sym_unsigned_long_int,
    [sym_unsigned_longlong_int] = sym_unsigned_longlong_int,
    [sym_floating_pt_type] = sym_floating_pt_type,
    [sym_char_type] = sym_char_type,
    [sym_scoped_name] = sym_scoped_name,
    [sym_string_type] = sym_string_type,
    [sym_type_spec] = sym_type_spec,
    [sym_simple_type_spec] = sym_simple_type_spec,
    [sym_base_type_spec] = sym_base_type_spec,
    [sym_any_type] = sym_any_type,
    [sym_fixed_pt_type] = sym_fixed_pt_type,
    [sym_template_type_spec] = sym_template_type_spec,
    [sym_sequence_type] = sym_sequence_type,
    [sym_map_type] = sym_map_type,
    [sym_positive_int_const] = sym_positive_int_const,
    [sym_const_expr] = sym_const_expr,
    [sym_or_expr] = sym_or_expr,
    [sym_xor_expr] = sym_xor_expr,
    [sym_and_expr] = sym_and_expr,
    [sym_shift_expr] = sym_shift_expr,
    [sym_add_expr] = sym_add_expr,
    [sym_mult_expr] = sym_mult_expr,
    [sym_unary_expr] = sym_unary_expr,
    [sym_unary_operator] = sym_unary_operator,
    [sym_literal] = sym_literal,
    [sym_string_literal] = sym_string_literal,
    [sym_char_literal] = sym_char_literal,
    [sym_boolean_literal] = sym_boolean_literal,
    [sym_preproc_call] = sym_preproc_call,
    [sym_except_dcl] = sym_except_dcl,
    [sym_interface_dcl] = sym_interface_dcl,
    [sym_interface_kind] = sym_interface_kind,
    [sym_interface_forward_dcl] = sym_interface_forward_dcl,
    [sym_interface_def] = sym_interface_def,
    [sym_interface_header] = sym_interface_header,
    [sym_interface_inheritance_spec] = sym_interface_inheritance_spec,
    [sym_interface_name] = sym_interface_name,
    [sym_interface_body] = sym_interface_body,
    [sym_export] = sym_export,
    [sym_op_dcl] = sym_op_dcl,
    [sym_op_type_spec] = sym_op_type_spec,
    [sym_parameter_dcls] = sym_parameter_dcls,
    [sym_param_dcl] = sym_param_dcl,
    [sym_param_attribute] = sym_param_attribute,
    [sym_raises_expr] = sym_raises_expr,
    [sym_attr_dcl] = sym_attr_dcl,
    [sym_readonly_attr_spec] = sym_readonly_attr_spec,
    [sym_readonly_attr_declarator] = sym_readonly_attr_declarator,
    [sym_attr_spec] = sym_attr_spec,
    [sym_attr_declarator] = sym_attr_declarator,
    [sym_attr_raises_expr] = sym_attr_raises_expr,
    [sym_get_excep_expr] = sym_get_excep_expr,
    [sym_set_excep_expr] = sym_set_excep_expr,
    [sym_exception_list] = sym_exception_list,
    [sym_bitset_dcl] = sym_bitset_dcl,
    [sym_bitfield] = sym_bitfield,
    [sym_bitfield_spec] = sym_bitfield_spec,
    [sym_destination_type] = sym_destination_type,
    [sym_bitmask_dcl] = sym_bitmask_dcl,
    [sym_bit_value] = sym_bit_value,
    [sym_annotation_dcl] = sym_annotation_dcl,
    [sym_annotation_body] = sym_annotation_body,
    [sym_annotation_member] = sym_annotation_member,
    [sym_annotation_member_type] = sym_annotation_member_type,
    [sym_any_const_type] = sym_any_const_type,
    [sym_annotation_appl] = sym_annotation_appl,
    [sym_annotation_appl_params] = sym_annotation_appl_params,
    [sym_annotation_appl_param] = sym_annotation_appl_param,
    [sym_template_module_dcl] = sym_template_module_dcl,
    [sym_formal_parameters] = sym_formal_parameters,
    [sym_formal_parameter] = sym_formal_parameter,
    [sym_formal_parameter_type] = sym_formal_parameter_type,
    [sym_tpl_definition] = sym_tpl_definition,
    [sym_template_module_inst] = sym_template_module_inst,
    [sym_actual_parameters] = sym_actual_parameters,
    [sym_actual_parameter] = sym_actual_parameter,
    [sym_template_module_ref] = sym_template_module_ref,
    [sym_formal_parameter_names] = sym_formal_parameter_names,
    [sym_value_dcl] = sym_value_dcl,
    [sym_value_def] = sym_value_def,
    [sym_value_kind] = sym_value_kind,
    [sym_value_header] = sym_value_header,
    [sym_value_inheritance_spec] = sym_value_inheritance_spec,
    [sym_value_name] = sym_value_name,
    [sym_value_element] = sym_value_element,
    [sym_state_member] = sym_state_member,
    [sym_init_dcl] = sym_init_dcl,
    [sym_init_param_dcls] = sym_init_param_dcls,
    [sym_init_param_dcl] = sym_init_param_dcl,
    [sym_value_forward_dcl] = sym_value_forward_dcl,
    [sym_typedef_dcl] = sym_typedef_dcl,
    [sym_type_declarator] = sym_type_declarator,
    [sym_any_declarators] = sym_any_declarators,
    [sym_any_declarator] = sym_any_declarator,
    [sym_simple_declarator] = sym_simple_declarator,
    [sym_declarator] = sym_declarator,
    [sym_declarators] = sym_declarators,
    [sym_array_declarator] = sym_array_declarator,
    [sym_fixed_array_size] = sym_fixed_array_size,
    [sym_enum_dcl] = sym_enum_dcl,
    [sym_enumerator] = sym_enumerator,
    [sym_enum_modifier] = sym_enum_modifier,
    [sym_enum_anno] = sym_enum_anno,
    [sym_union_forward_dcl] = sym_union_forward_dcl,
    [sym_union_def] = sym_union_def,
    [sym_case] = sym_case,
    [sym_case_label] = sym_case_label,
    [sym_element_spec] = sym_element_spec,
    [sym_switch_type_spec] = sym_switch_type_spec,
    [sym_type_id_dcl] = sym_type_id_dcl,
    [sym_type_prefix_dcl] = sym_type_prefix_dcl,
    [sym_import_dcl] = sym_import_dcl,
    [sym_imported_scope] = sym_imported_scope,
    [sym_op_oneway_dcl] = sym_op_oneway_dcl,
    [sym_in_parameter_dcls] = sym_in_parameter_dcls,
    [sym_in_param_dcl] = sym_in_param_dcl,
    [sym_op_with_context] = sym_op_with_context,
    [sym_context_expr] = sym_context_expr,
    [sym_value_abs_def] = sym_value_abs_def,
    [sym_component_dcl] = sym_component_dcl,
    [sym_component_forward_dcl] = sym_component_forward_dcl,
    [sym_component_def] = sym_component_def,
    [sym_component_header] = sym_component_header,
    [sym_component_inheritance_spec] = sym_component_inheritance_spec,
    [sym_component_body] = sym_component_body,
    [sym_component_export] = sym_component_export,
    [sym_provides_dcl] = sym_provides_dcl,
    [sym_interface_type] = sym_interface_type,
    [sym_uses_dcl] = sym_uses_dcl,
    [sym__definition] = sym__definition,
    [sym_native_dcl] = sym_native_dcl,
    [sym_module_dcl] = sym_module_dcl,
    [sym_struct_forward_dcl] = sym_struct_forward_dcl,
    [sym_struct_def] = sym_struct_def,
    [sym_member] = sym_member,
    [sym_default] = sym_default,
    [sym_predefine] = sym_predefine,
    [sym_const_dcl] = sym_const_dcl,
    [sym_const_type] = sym_const_type,
    [sym_comment] = sym_comment,
    [aux_sym_specification_repeat1] = aux_sym_specification_repeat1,
    [aux_sym_specification_repeat2] = aux_sym_specification_repeat2,
    [aux_sym_except_dcl_repeat1] = aux_sym_except_dcl_repeat1,
    [aux_sym_interface_def_repeat1] = aux_sym_interface_def_repeat1,
    [aux_sym_interface_inheritance_spec_repeat1] = aux_sym_interface_inheritance_spec_repeat1,
    [aux_sym_interface_body_repeat1] = aux_sym_interface_body_repeat1,
    [aux_sym_parameter_dcls_repeat1] = aux_sym_parameter_dcls_repeat1,
    [aux_sym_raises_expr_repeat1] = aux_sym_raises_expr_repeat1,
    [aux_sym_readonly_attr_declarator_repeat1] = aux_sym_readonly_attr_declarator_repeat1,
    [aux_sym_bitset_dcl_repeat1] = aux_sym_bitset_dcl_repeat1,
    [aux_sym_bitfield_repeat1] = aux_sym_bitfield_repeat1,
    [aux_sym_bitmask_dcl_repeat1] = aux_sym_bitmask_dcl_repeat1,
    [aux_sym_annotation_dcl_repeat1] = aux_sym_annotation_dcl_repeat1,
    [aux_sym_annotation_appl_params_repeat1] = aux_sym_annotation_appl_params_repeat1,
    [aux_sym_template_module_dcl_repeat1] = aux_sym_template_module_dcl_repeat1,
    [aux_sym_formal_parameters_repeat1] = aux_sym_formal_parameters_repeat1,
    [aux_sym_actual_parameters_repeat1] = aux_sym_actual_parameters_repeat1,
    [aux_sym_formal_parameter_names_repeat1] = aux_sym_formal_parameter_names_repeat1,
    [aux_sym_value_def_repeat1] = aux_sym_value_def_repeat1,
    [aux_sym_value_inheritance_spec_repeat1] = aux_sym_value_inheritance_spec_repeat1,
    [aux_sym_init_param_dcls_repeat1] = aux_sym_init_param_dcls_repeat1,
    [aux_sym_any_declarators_repeat1] = aux_sym_any_declarators_repeat1,
    [aux_sym_declarators_repeat1] = aux_sym_declarators_repeat1,
    [aux_sym_array_declarator_repeat1] = aux_sym_array_declarator_repeat1,
    [aux_sym_enum_dcl_repeat1] = aux_sym_enum_dcl_repeat1,
    [aux_sym_enumerator_repeat1] = aux_sym_enumerator_repeat1,
    [aux_sym_union_def_repeat1] = aux_sym_union_def_repeat1,
    [aux_sym_in_parameter_dcls_repeat1] = aux_sym_in_parameter_dcls_repeat1,
    [aux_sym_context_expr_repeat1] = aux_sym_context_expr_repeat1,
    [aux_sym_component_body_repeat1] = aux_sym_component_body_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
    [ts_builtin_sym_end] = {
        .visible = false,
        .named = true,
    },
    [anon_sym_short] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_int16] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_long] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_int32] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_longlong] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_int64] = {
        .visible = true,
        .named = false,
    },
    [sym_unsigned_tiny_int] = {
        .visible = true,
        .named = true,
    },
    [sym_boolean_type] = {
        .visible = true,
        .named = true,
    },
    [anon_sym_fixed] = {
        .visible = true,
        .named = false,
    },
    [sym_octet_type] = {
        .visible = true,
        .named = true,
    },
    [sym_signed_tiny_int] = {
        .visible = true,
        .named = true,
    },
    [anon_sym_unsignedshort] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_uint16] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_unsignedlong] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_uint32] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_unsignedlonglong] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_uint64] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_float] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_double] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_longdouble] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_char] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_wchar] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_COLON_COLON] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_string] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_wstring] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_LT] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_GT] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_any] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_COMMA] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_sequence] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_map] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_PIPE] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_CARET] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_DOLLAR] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_GT_GT] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_LT_LT] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_PLUS] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_DASH] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_STAR] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_SLASH] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_PERCENT] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_LPAREN] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_RPAREN] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_TILDE] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_L] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_DQUOTE] = {
        .visible = true,
        .named = false,
    },
    [aux_sym_string_literal_token1] = {
        .visible = false,
        .named = false,
    },
    [anon_sym_SQUOTE] = {
        .visible = true,
        .named = false,
    },
    [aux_sym_char_literal_token1] = {
        .visible = false,
        .named = false,
    },
    [anon_sym_TRUE] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_FALSE] = {
        .visible = true,
        .named = false,
    },
    [sym_number_literal] = {
        .visible = true,
        .named = true,
    },
    [aux_sym_preproc_call_token1] = {
        .visible = false,
        .named = false,
    },
    [sym_preproc_directive] = {
        .visible = true,
        .named = true,
    },
    [sym_preproc_arg] = {
        .visible = true,
        .named = true,
    },
    [anon_sym_exception] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_LBRACE] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_RBRACE] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_local] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_abstract] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_interface] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_COLON] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_SEMI] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_void] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_in] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_out] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_inout] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_raises] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_readonly] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_attribute] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_getraises] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_setraises] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_bitset] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_bitfield] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_bitmask] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_ATannotation] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_default] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_AT] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_EQ] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_module] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_typename] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_valuetype] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_eventtype] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_struct] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_union] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_enum] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_const] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_alias] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_custom] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_truncatable] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_supports] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_public] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_private] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_factory] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_typedef] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_LBRACK] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_RBRACK] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_ATdefault_literal] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_ATignore_literal_names] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_switch] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_case] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_typeid] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_typeprefix] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_import] = {
        .visible = true,
        .named = false,
    },
    [sym_object_type] = {
        .visible = true,
        .named = true,
    },
    [anon_sym_oneway] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_context] = {
        .visible = true,
        .named = false,
    },
    [sym_value_base_type] = {
        .visible = true,
        .named = true,
    },
    [anon_sym_component] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_provides] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_uses] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_native] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_POUNDdefine] = {
        .visible = true,
        .named = false,
    },
    [aux_sym_predefine_token1] = {
        .visible = false,
        .named = false,
    },
    [sym_identifier] = {
        .visible = true,
        .named = true,
    },
    [anon_sym_SLASH_SLASH] = {
        .visible = true,
        .named = false,
    },
    [aux_sym_comment_token1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_comment_token2] = {
        .visible = false,
        .named = false,
    },
    [anon_sym_SLASH_STAR] = {
        .visible = true,
        .named = false,
    },
    [aux_sym_comment_token3] = {
        .visible = false,
        .named = false,
    },
    [sym_specification] = {
        .visible = true,
        .named = true,
    },
    [sym_signed_short_int] = {
        .visible = true,
        .named = true,
    },
    [sym_signed_long_int] = {
        .visible = true,
        .named = true,
    },
    [sym_signed_longlong_int] = {
        .visible = true,
        .named = true,
    },
    [sym_unsigned_int] = {
        .visible = true,
        .named = true,
    },
    [sym_fixed_pt_const_type] = {
        .visible = true,
        .named = true,
    },
    [sym_integer_type] = {
        .visible = true,
        .named = true,
    },
    [sym_signed_int] = {
        .visible = true,
        .named = true,
    },
    [sym_unsigned_short_int] = {
        .visible = true,
        .named = true,
    },
    [sym_unsigned_long_int] = {
        .visible = true,
        .named = true,
    },
    [sym_unsigned_longlong_int] = {
        .visible = true,
        .named = true,
    },
    [sym_floating_pt_type] = {
        .visible = true,
        .named = true,
    },
    [sym_char_type] = {
        .visible = true,
        .named = true,
    },
    [sym_scoped_name] = {
        .visible = true,
        .named = true,
    },
    [sym_string_type] = {
        .visible = true,
        .named = true,
    },
    [sym_type_spec] = {
        .visible = true,
        .named = true,
    },
    [sym_simple_type_spec] = {
        .visible = true,
        .named = true,
    },
    [sym_base_type_spec] = {
        .visible = true,
        .named = true,
    },
    [sym_any_type] = {
        .visible = true,
        .named = true,
    },
    [sym_fixed_pt_type] = {
        .visible = true,
        .named = true,
    },
    [sym_template_type_spec] = {
        .visible = true,
        .named = true,
    },
    [sym_sequence_type] = {
        .visible = true,
        .named = true,
    },
    [sym_map_type] = {
        .visible = true,
        .named = true,
    },
    [sym_positive_int_const] = {
        .visible = true,
        .named = true,
    },
    [sym_const_expr] = {
        .visible = true,
        .named = true,
    },
    [sym_or_expr] = {
        .visible = true,
        .named = true,
    },
    [sym_xor_expr] = {
        .visible = true,
        .named = true,
    },
    [sym_and_expr] = {
        .visible = true,
        .named = true,
    },
    [sym_shift_expr] = {
        .visible = true,
        .named = true,
    },
    [sym_add_expr] = {
        .visible = true,
        .named = true,
    },
    [sym_mult_expr] = {
        .visible = true,
        .named = true,
    },
    [sym_unary_expr] = {
        .visible = true,
        .named = true,
    },
    [sym_unary_operator] = {
        .visible = true,
        .named = true,
    },
    [sym_literal] = {
        .visible = true,
        .named = true,
    },
    [sym_string_literal] = {
        .visible = true,
        .named = true,
    },
    [sym_char_literal] = {
        .visible = true,
        .named = true,
    },
    [sym_boolean_literal] = {
        .visible = true,
        .named = true,
    },
    [sym_preproc_call] = {
        .visible = true,
        .named = true,
    },
    [sym_except_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_interface_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_interface_kind] = {
        .visible = true,
        .named = true,
    },
    [sym_interface_forward_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_interface_def] = {
        .visible = true,
        .named = true,
    },
    [sym_interface_header] = {
        .visible = true,
        .named = true,
    },
    [sym_interface_inheritance_spec] = {
        .visible = true,
        .named = true,
    },
    [sym_interface_name] = {
        .visible = true,
        .named = true,
    },
    [sym_interface_body] = {
        .visible = true,
        .named = true,
    },
    [sym_export] = {
        .visible = true,
        .named = true,
    },
    [sym_op_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_op_type_spec] = {
        .visible = true,
        .named = true,
    },
    [sym_parameter_dcls] = {
        .visible = true,
        .named = true,
    },
    [sym_param_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_param_attribute] = {
        .visible = true,
        .named = true,
    },
    [sym_raises_expr] = {
        .visible = true,
        .named = true,
    },
    [sym_attr_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_readonly_attr_spec] = {
        .visible = true,
        .named = true,
    },
    [sym_readonly_attr_declarator] = {
        .visible = true,
        .named = true,
    },
    [sym_attr_spec] = {
        .visible = true,
        .named = true,
    },
    [sym_attr_declarator] = {
        .visible = true,
        .named = true,
    },
    [sym_attr_raises_expr] = {
        .visible = true,
        .named = true,
    },
    [sym_get_excep_expr] = {
        .visible = true,
        .named = true,
    },
    [sym_set_excep_expr] = {
        .visible = true,
        .named = true,
    },
    [sym_exception_list] = {
        .visible = true,
        .named = true,
    },
    [sym_bitset_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_bitfield] = {
        .visible = true,
        .named = true,
    },
    [sym_bitfield_spec] = {
        .visible = true,
        .named = true,
    },
    [sym_destination_type] = {
        .visible = true,
        .named = true,
    },
    [sym_bitmask_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_bit_value] = {
        .visible = true,
        .named = true,
    },
    [sym_annotation_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_annotation_body] = {
        .visible = true,
        .named = true,
    },
    [sym_annotation_member] = {
        .visible = true,
        .named = true,
    },
    [sym_annotation_member_type] = {
        .visible = true,
        .named = true,
    },
    [sym_any_const_type] = {
        .visible = true,
        .named = true,
    },
    [sym_annotation_appl] = {
        .visible = true,
        .named = true,
    },
    [sym_annotation_appl_params] = {
        .visible = true,
        .named = true,
    },
    [sym_annotation_appl_param] = {
        .visible = true,
        .named = true,
    },
    [sym_template_module_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_formal_parameters] = {
        .visible = true,
        .named = true,
    },
    [sym_formal_parameter] = {
        .visible = true,
        .named = true,
    },
    [sym_formal_parameter_type] = {
        .visible = true,
        .named = true,
    },
    [sym_tpl_definition] = {
        .visible = true,
        .named = true,
    },
    [sym_template_module_inst] = {
        .visible = true,
        .named = true,
    },
    [sym_actual_parameters] = {
        .visible = true,
        .named = true,
    },
    [sym_actual_parameter] = {
        .visible = true,
        .named = true,
    },
    [sym_template_module_ref] = {
        .visible = true,
        .named = true,
    },
    [sym_formal_parameter_names] = {
        .visible = true,
        .named = true,
    },
    [sym_value_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_value_def] = {
        .visible = true,
        .named = true,
    },
    [sym_value_kind] = {
        .visible = true,
        .named = true,
    },
    [sym_value_header] = {
        .visible = true,
        .named = true,
    },
    [sym_value_inheritance_spec] = {
        .visible = true,
        .named = true,
    },
    [sym_value_name] = {
        .visible = true,
        .named = true,
    },
    [sym_value_element] = {
        .visible = true,
        .named = true,
    },
    [sym_state_member] = {
        .visible = true,
        .named = true,
    },
    [sym_init_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_init_param_dcls] = {
        .visible = true,
        .named = true,
    },
    [sym_init_param_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_value_forward_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_typedef_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_type_declarator] = {
        .visible = true,
        .named = true,
    },
    [sym_any_declarators] = {
        .visible = true,
        .named = true,
    },
    [sym_any_declarator] = {
        .visible = true,
        .named = true,
    },
    [sym_simple_declarator] = {
        .visible = true,
        .named = true,
    },
    [sym_declarator] = {
        .visible = true,
        .named = true,
    },
    [sym_declarators] = {
        .visible = true,
        .named = true,
    },
    [sym_array_declarator] = {
        .visible = true,
        .named = true,
    },
    [sym_fixed_array_size] = {
        .visible = true,
        .named = true,
    },
    [sym_enum_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_enumerator] = {
        .visible = true,
        .named = true,
    },
    [sym_enum_modifier] = {
        .visible = true,
        .named = true,
    },
    [sym_enum_anno] = {
        .visible = true,
        .named = true,
    },
    [sym_union_forward_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_union_def] = {
        .visible = true,
        .named = true,
    },
    [sym_case] = {
        .visible = true,
        .named = true,
    },
    [sym_case_label] = {
        .visible = true,
        .named = true,
    },
    [sym_element_spec] = {
        .visible = true,
        .named = true,
    },
    [sym_switch_type_spec] = {
        .visible = true,
        .named = true,
    },
    [sym_type_id_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_type_prefix_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_import_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_imported_scope] = {
        .visible = true,
        .named = true,
    },
    [sym_op_oneway_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_in_parameter_dcls] = {
        .visible = true,
        .named = true,
    },
    [sym_in_param_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_op_with_context] = {
        .visible = true,
        .named = true,
    },
    [sym_context_expr] = {
        .visible = true,
        .named = true,
    },
    [sym_value_abs_def] = {
        .visible = true,
        .named = true,
    },
    [sym_component_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_component_forward_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_component_def] = {
        .visible = true,
        .named = true,
    },
    [sym_component_header] = {
        .visible = true,
        .named = true,
    },
    [sym_component_inheritance_spec] = {
        .visible = true,
        .named = true,
    },
    [sym_component_body] = {
        .visible = true,
        .named = true,
    },
    [sym_component_export] = {
        .visible = true,
        .named = true,
    },
    [sym_provides_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_interface_type] = {
        .visible = true,
        .named = true,
    },
    [sym_uses_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym__definition] = {
        .visible = false,
        .named = true,
    },
    [sym_native_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_module_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_struct_forward_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_struct_def] = {
        .visible = true,
        .named = true,
    },
    [sym_member] = {
        .visible = true,
        .named = true,
    },
    [sym_default] = {
        .visible = true,
        .named = true,
    },
    [sym_predefine] = {
        .visible = true,
        .named = true,
    },
    [sym_const_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_const_type] = {
        .visible = true,
        .named = true,
    },
    [sym_comment] = {
        .visible = true,
        .named = true,
    },
    [aux_sym_specification_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_specification_repeat2] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_except_dcl_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_interface_def_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_interface_inheritance_spec_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_interface_body_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_parameter_dcls_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_raises_expr_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_readonly_attr_declarator_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_bitset_dcl_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_bitfield_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_bitmask_dcl_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_annotation_dcl_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_annotation_appl_params_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_template_module_dcl_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_formal_parameters_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_actual_parameters_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_formal_parameter_names_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_value_def_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_value_inheritance_spec_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_init_param_dcls_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_any_declarators_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_declarators_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_array_declarator_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_enum_dcl_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_enumerator_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_union_def_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_in_parameter_dcls_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_context_expr_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_component_body_repeat1] = {
        .visible = false,
        .named = false,
    },
};

enum ts_field_identifiers {
    field_argument = 1,
    field_directive = 2,
    field_identifier = 3,
    field_parent = 4,
    field_type = 5,
    field_value = 6,
};

static const char *const ts_field_names[] = {
    [0] = NULL,
    [field_argument] = "argument",
    [field_directive] = "directive",
    [field_identifier] = "identifier",
    [field_parent] = "parent",
    [field_type] = "type",
    [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
    [1] = { .index = 0, .length = 1 },
    [2] = { .index = 1, .length = 2 },
    [3] = { .index = 3, .length = 2 },
    [4] = { .index = 5, .length = 1 },
    [5] = { .index = 6, .length = 1 },
    [6] = { .index = 7, .length = 2 },
    [7] = { .index = 9, .length = 1 },
    [8] = { .index = 10, .length = 1 },
};

static const TSFieldMapEntry ts_field_map_entries[] = {
    [0] = { field_directive, 0 },
    [1] = { field_argument, 1 },
    { field_directive, 0 },
    [3] = { field_identifier, 1 },
    { field_type, 0 },
    [5] = { field_value, 1 },
    [6] = { field_parent, 3 },
    [7] = { field_identifier, 2 },
    { field_type, 1 },
    [9] = { field_value, 2 },
    [10] = { field_parent, 4 },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
    [0] = { 0 },
};

static const uint16_t ts_non_terminal_alias_map[] = {
    0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
    [0] = 0,
    [1] = 1,
    [2] = 2,
    [3] = 3,
    [4] = 4,
    [5] = 5,
    [6] = 6,
    [7] = 7,
    [8] = 8,
    [9] = 9,
    [10] = 10,
    [11] = 11,
    [12] = 12,
    [13] = 13,
    [14] = 14,
    [15] = 15,
    [16] = 16,
    [17] = 17,
    [18] = 18,
    [19] = 19,
    [20] = 20,
    [21] = 21,
    [22] = 22,
    [23] = 23,
    [24] = 24,
    [25] = 25,
    [26] = 26,
    [27] = 27,
    [28] = 28,
    [29] = 29,
    [30] = 30,
    [31] = 31,
    [32] = 32,
    [33] = 33,
    [34] = 34,
    [35] = 35,
    [36] = 36,
    [37] = 37,
    [38] = 38,
    [39] = 39,
    [40] = 40,
    [41] = 41,
    [42] = 42,
    [43] = 43,
    [44] = 44,
    [45] = 45,
    [46] = 46,
    [47] = 47,
    [48] = 48,
    [49] = 49,
    [50] = 50,
    [51] = 51,
    [52] = 52,
    [53] = 53,
    [54] = 54,
    [55] = 55,
    [56] = 56,
    [57] = 57,
    [58] = 58,
    [59] = 42,
    [60] = 60,
    [61] = 61,
    [62] = 62,
    [63] = 63,
    [64] = 64,
    [65] = 65,
    [66] = 66,
    [67] = 67,
    [68] = 68,
    [69] = 69,
    [70] = 70,
    [71] = 71,
    [72] = 72,
    [73] = 73,
    [74] = 74,
    [75] = 75,
    [76] = 76,
    [77] = 77,
    [78] = 78,
    [79] = 79,
    [80] = 80,
    [81] = 81,
    [82] = 82,
    [83] = 83,
    [84] = 72,
    [85] = 67,
    [86] = 68,
    [87] = 87,
    [88] = 87,
    [89] = 87,
    [90] = 87,
    [91] = 91,
    [92] = 92,
    [93] = 93,
    [94] = 94,
    [95] = 95,
    [96] = 96,
    [97] = 97,
    [98] = 98,
    [99] = 99,
    [100] = 100,
    [101] = 101,
    [102] = 102,
    [103] = 103,
    [104] = 104,
    [105] = 105,
    [106] = 106,
    [107] = 107,
    [108] = 108,
    [109] = 109,
    [110] = 110,
    [111] = 111,
    [112] = 112,
    [113] = 113,
    [114] = 114,
    [115] = 115,
    [116] = 116,
    [117] = 117,
    [118] = 118,
    [119] = 119,
    [120] = 120,
    [121] = 121,
    [122] = 122,
    [123] = 123,
    [124] = 124,
    [125] = 125,
    [126] = 126,
    [127] = 127,
    [128] = 128,
    [129] = 129,
    [130] = 130,
    [131] = 131,
    [132] = 132,
    [133] = 133,
    [134] = 134,
    [135] = 135,
    [136] = 136,
    [137] = 137,
    [138] = 138,
    [139] = 139,
    [140] = 140,
    [141] = 141,
    [142] = 142,
    [143] = 143,
    [144] = 144,
    [145] = 145,
    [146] = 146,
    [147] = 147,
    [148] = 148,
    [149] = 149,
    [150] = 150,
    [151] = 151,
    [152] = 152,
    [153] = 65,
    [154] = 154,
    [155] = 69,
    [156] = 156,
    [157] = 157,
    [158] = 158,
    [159] = 159,
    [160] = 160,
    [161] = 161,
    [162] = 81,
    [163] = 163,
    [164] = 80,
    [165] = 165,
    [166] = 166,
    [167] = 67,
    [168] = 168,
    [169] = 169,
    [170] = 170,
    [171] = 171,
    [172] = 172,
    [173] = 72,
    [174] = 68,
    [175] = 175,
    [176] = 176,
    [177] = 177,
    [178] = 178,
    [179] = 179,
    [180] = 180,
    [181] = 181,
    [182] = 182,
    [183] = 183,
    [184] = 184,
    [185] = 185,
    [186] = 186,
    [187] = 187,
    [188] = 188,
    [189] = 189,
    [190] = 190,
    [191] = 191,
    [192] = 192,
    [193] = 193,
    [194] = 194,
    [195] = 195,
    [196] = 196,
    [197] = 197,
    [198] = 198,
    [199] = 69,
    [200] = 200,
    [201] = 201,
    [202] = 202,
    [203] = 203,
    [204] = 204,
    [205] = 205,
    [206] = 206,
    [207] = 207,
    [208] = 208,
    [209] = 209,
    [210] = 210,
    [211] = 211,
    [212] = 212,
    [213] = 213,
    [214] = 214,
    [215] = 215,
    [216] = 216,
    [217] = 65,
    [218] = 218,
    [219] = 219,
    [220] = 67,
    [221] = 221,
    [222] = 222,
    [223] = 223,
    [224] = 224,
    [225] = 68,
    [226] = 72,
    [227] = 69,
    [228] = 65,
    [229] = 229,
    [230] = 230,
    [231] = 231,
    [232] = 232,
    [233] = 233,
    [234] = 234,
    [235] = 235,
    [236] = 236,
    [237] = 237,
    [238] = 238,
    [239] = 239,
    [240] = 240,
    [241] = 241,
    [242] = 242,
    [243] = 243,
    [244] = 244,
    [245] = 245,
    [246] = 246,
    [247] = 247,
    [248] = 248,
    [249] = 249,
    [250] = 250,
    [251] = 251,
    [252] = 252,
    [253] = 253,
    [254] = 254,
    [255] = 255,
    [256] = 256,
    [257] = 257,
    [258] = 258,
    [259] = 259,
    [260] = 260,
    [261] = 261,
    [262] = 262,
    [263] = 263,
    [264] = 264,
    [265] = 265,
    [266] = 266,
    [267] = 267,
    [268] = 268,
    [269] = 269,
    [270] = 270,
    [271] = 271,
    [272] = 272,
    [273] = 273,
    [274] = 274,
    [275] = 275,
    [276] = 276,
    [277] = 277,
    [278] = 278,
    [279] = 279,
    [280] = 280,
    [281] = 281,
    [282] = 282,
    [283] = 283,
    [284] = 284,
    [285] = 285,
    [286] = 286,
    [287] = 287,
    [288] = 288,
    [289] = 289,
    [290] = 290,
    [291] = 291,
    [292] = 292,
    [293] = 293,
    [294] = 294,
    [295] = 295,
    [296] = 296,
    [297] = 297,
    [298] = 298,
    [299] = 299,
    [300] = 300,
    [301] = 301,
    [302] = 302,
    [303] = 303,
    [304] = 304,
    [305] = 305,
    [306] = 306,
    [307] = 307,
    [308] = 308,
    [309] = 309,
    [310] = 310,
    [311] = 311,
    [312] = 312,
    [313] = 313,
    [314] = 314,
    [315] = 315,
    [316] = 316,
    [317] = 317,
    [318] = 318,
    [319] = 319,
    [320] = 320,
    [321] = 321,
    [322] = 322,
    [323] = 323,
    [324] = 324,
    [325] = 325,
    [326] = 326,
    [327] = 327,
    [328] = 328,
    [329] = 329,
    [330] = 330,
    [331] = 331,
    [332] = 332,
    [333] = 333,
    [334] = 334,
    [335] = 335,
    [336] = 336,
    [337] = 337,
    [338] = 338,
    [339] = 339,
    [340] = 340,
    [341] = 341,
    [342] = 342,
    [343] = 343,
    [344] = 344,
    [345] = 345,
    [346] = 342,
    [347] = 347,
    [348] = 348,
    [349] = 349,
    [350] = 339,
    [351] = 342,
    [352] = 352,
    [353] = 353,
    [354] = 342,
    [355] = 355,
    [356] = 356,
    [357] = 357,
    [358] = 358,
    [359] = 359,
    [360] = 360,
    [361] = 361,
    [362] = 362,
    [363] = 363,
    [364] = 364,
    [365] = 365,
    [366] = 366,
    [367] = 219,
    [368] = 368,
    [369] = 369,
    [370] = 80,
    [371] = 371,
    [372] = 81,
    [373] = 373,
    [374] = 374,
    [375] = 80,
    [376] = 376,
    [377] = 81,
    [378] = 378,
    [379] = 379,
    [380] = 380,
    [381] = 381,
    [382] = 382,
    [383] = 383,
    [384] = 384,
    [385] = 385,
    [386] = 386,
    [387] = 387,
    [388] = 388,
    [389] = 389,
    [390] = 390,
    [391] = 391,
    [392] = 392,
    [393] = 393,
    [394] = 394,
    [395] = 395,
    [396] = 396,
    [397] = 397,
    [398] = 398,
    [399] = 399,
    [400] = 400,
    [401] = 401,
    [402] = 402,
    [403] = 403,
    [404] = 404,
    [405] = 405,
    [406] = 406,
    [407] = 407,
    [408] = 408,
    [409] = 409,
    [410] = 410,
    [411] = 411,
    [412] = 412,
    [413] = 413,
    [414] = 414,
    [415] = 415,
    [416] = 416,
    [417] = 417,
    [418] = 418,
    [419] = 419,
    [420] = 420,
    [421] = 421,
    [422] = 422,
    [423] = 423,
    [424] = 424,
    [425] = 425,
    [426] = 426,
    [427] = 427,
    [428] = 428,
    [429] = 429,
    [430] = 430,
    [431] = 431,
    [432] = 432,
    [433] = 433,
    [434] = 434,
    [435] = 435,
    [436] = 436,
    [437] = 437,
    [438] = 438,
    [439] = 439,
    [440] = 440,
    [441] = 441,
    [442] = 442,
    [443] = 443,
    [444] = 444,
    [445] = 445,
    [446] = 446,
    [447] = 447,
    [448] = 448,
    [449] = 449,
    [450] = 450,
    [451] = 451,
    [452] = 452,
    [453] = 453,
    [454] = 454,
    [455] = 455,
    [456] = 456,
    [457] = 457,
    [458] = 458,
    [459] = 459,
    [460] = 460,
    [461] = 461,
    [462] = 462,
    [463] = 463,
    [464] = 464,
    [465] = 465,
    [466] = 466,
    [467] = 467,
    [468] = 468,
    [469] = 469,
    [470] = 470,
    [471] = 471,
    [472] = 472,
    [473] = 473,
    [474] = 474,
    [475] = 475,
    [476] = 476,
    [477] = 477,
    [478] = 478,
    [479] = 479,
    [480] = 480,
    [481] = 481,
    [482] = 482,
    [483] = 483,
    [484] = 484,
    [485] = 485,
    [486] = 486,
    [487] = 487,
    [488] = 488,
    [489] = 489,
    [490] = 490,
    [491] = 491,
    [492] = 492,
    [493] = 493,
    [494] = 494,
    [495] = 495,
    [496] = 496,
    [497] = 497,
    [498] = 498,
    [499] = 499,
    [500] = 500,
    [501] = 501,
    [502] = 502,
    [503] = 503,
    [504] = 504,
    [505] = 505,
    [506] = 506,
    [507] = 507,
    [508] = 508,
    [509] = 509,
    [510] = 510,
    [511] = 511,
    [512] = 512,
    [513] = 513,
    [514] = 514,
    [515] = 515,
    [516] = 516,
    [517] = 517,
    [518] = 518,
    [519] = 519,
    [520] = 520,
    [521] = 521,
    [522] = 522,
    [523] = 523,
    [524] = 524,
    [525] = 525,
    [526] = 526,
    [527] = 527,
    [528] = 528,
    [529] = 529,
    [530] = 530,
    [531] = 531,
    [532] = 532,
    [533] = 533,
    [534] = 534,
    [535] = 535,
    [536] = 536,
    [537] = 537,
    [538] = 538,
    [539] = 539,
    [540] = 540,
    [541] = 541,
    [542] = 542,
    [543] = 543,
    [544] = 544,
    [545] = 545,
    [546] = 546,
    [547] = 547,
    [548] = 548,
    [549] = 549,
    [550] = 550,
    [551] = 551,
    [552] = 552,
    [553] = 553,
    [554] = 554,
    [555] = 555,
    [556] = 556,
    [557] = 557,
    [558] = 558,
    [559] = 559,
    [560] = 560,
    [561] = 561,
    [562] = 562,
    [563] = 563,
    [564] = 564,
    [565] = 565,
    [566] = 566,
    [567] = 567,
    [568] = 568,
    [569] = 569,
    [570] = 570,
    [571] = 571,
    [572] = 572,
    [573] = 573,
    [574] = 574,
    [575] = 575,
    [576] = 576,
    [577] = 577,
    [578] = 578,
    [579] = 579,
    [580] = 580,
    [581] = 581,
    [582] = 582,
    [583] = 583,
    [584] = 584,
    [585] = 585,
    [586] = 586,
    [587] = 587,
    [588] = 588,
    [589] = 589,
    [590] = 590,
    [591] = 591,
    [592] = 592,
    [593] = 593,
    [594] = 594,
    [595] = 595,
    [596] = 596,
    [597] = 597,
    [598] = 598,
    [599] = 599,
    [600] = 600,
    [601] = 601,
    [602] = 602,
    [603] = 603,
    [604] = 604,
    [605] = 605,
    [606] = 606,
    [607] = 607,
    [608] = 608,
    [609] = 609,
    [610] = 610,
    [611] = 611,
    [612] = 612,
    [613] = 613,
    [614] = 614,
    [615] = 615,
    [616] = 616,
    [617] = 617,
    [618] = 618,
    [619] = 619,
    [620] = 620,
    [621] = 621,
    [622] = 622,
    [623] = 623,
    [624] = 624,
    [625] = 625,
    [626] = 626,
    [627] = 627,
    [628] = 628,
    [629] = 629,
    [630] = 630,
    [631] = 631,
    [632] = 632,
    [633] = 585,
    [634] = 535,
    [635] = 464,
    [636] = 636,
    [637] = 475,
    [638] = 638,
    [639] = 585,
    [640] = 535,
    [641] = 475,
    [642] = 642,
    [643] = 585,
    [644] = 475,
    [645] = 645,
    [646] = 646,
    [647] = 647,
    [648] = 648,
};

static TSCharacterRange sym_number_literal_character_set_13[] = {
    { '0', '9' },
    { 'B', 'B' },
    { 'D', 'D' },
    { 'F', 'F' },
    { 'L', 'L' },
    { 'U', 'U' },
    { 'W', 'W' },
    { 'b', 'b' },
    { 'd', 'd' },
    { 'f', 'f' },
    { 'l', 'l' },
    { 'u', 'u' },
    { 'w', 'w' },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
    START_LEXER();
    eof = lexer->eof(lexer);
    switch(state) {
        case 0:
            if(eof)
                ADVANCE(486);
            ADVANCE_MAP(
                '"', 561,
                '#', 155,
                '$', 546,
                '%', 555,
                '\'', 563,
                '(', 556,
                ')', 557,
                '*', 553,
                '+', 549,
                ',', 539,
                '-', 551,
                '/', 554,
                ':', 645,
                ';', 646,
                '<', 534,
                '=', 670,
                '>', 536,
                '@', 669,
                'F', 565,
                'L', 559,
                'O', 574,
                'T', 566,
                'V', 567,
                '[', 700,
            );
            if(lookahead == '\\')
                SKIP(479);
            if(lookahead == ']')
                ADVANCE(701);
            if(lookahead == '^')
                ADVANCE(545);
            if(lookahead == 'a')
                ADVANCE(575);
            if(lookahead == 'b')
                ADVANCE(582);
            if(lookahead == 'c')
                ADVANCE(568);
            if(lookahead == 'd')
                ADVANCE(578);
            if(lookahead == 'e')
                ADVANCE(584);
            if(lookahead == 'f')
                ADVANCE(570);
            if(lookahead == 'g')
                ADVANCE(580);
            if(lookahead == 'i')
                ADVANCE(583);
            if(lookahead == 'l')
                ADVANCE(585);
            if(lookahead == 'm')
                ADVANCE(571);
            if(lookahead == 'n')
                ADVANCE(572);
            if(lookahead == 'o')
                ADVANCE(577);
            if(lookahead == 'p')
                ADVANCE(586);
            if(lookahead == 'r')
                ADVANCE(569);
            if(lookahead == 's')
                ADVANCE(579);
            if(lookahead == 't')
                ADVANCE(587);
            if(lookahead == 'u')
                ADVANCE(581);
            if(lookahead == 'v')
                ADVANCE(573);
            if(lookahead == 'w')
                ADVANCE(576);
            if(lookahead == '{')
                ADVANCE(637);
            if(lookahead == '|')
                ADVANCE(544);
            if(lookahead == '}')
                ADVANCE(638);
            if(lookahead == '~')
                ADVANCE(558);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(0);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= '_') ||
               ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(564);
            END_STATE();
        case 1:
            if(lookahead == '\n')
                SKIP(69);
            END_STATE();
        case 2:
            if(lookahead == '\n')
                SKIP(69);
            if(lookahead == '\r')
                SKIP(1);
            END_STATE();
        case 3:
            if(lookahead == '\n')
                SKIP(71);
            END_STATE();
        case 4:
            if(lookahead == '\n')
                SKIP(71);
            if(lookahead == '\r')
                SKIP(3);
            END_STATE();
        case 5:
            if(lookahead == '\n')
                SKIP(58);
            END_STATE();
        case 6:
            if(lookahead == '\n')
                SKIP(58);
            if(lookahead == '\r')
                SKIP(5);
            END_STATE();
        case 7:
            if(lookahead == '\n')
                SKIP(72);
            END_STATE();
        case 8:
            if(lookahead == '\n')
                SKIP(72);
            if(lookahead == '\r')
                SKIP(7);
            END_STATE();
        case 9:
            if(lookahead == '\n')
                SKIP(73);
            END_STATE();
        case 10:
            if(lookahead == '\n')
                SKIP(73);
            if(lookahead == '\r')
                SKIP(9);
            END_STATE();
        case 11:
            if(lookahead == '\n')
                SKIP(63);
            END_STATE();
        case 12:
            if(lookahead == '\n')
                SKIP(63);
            if(lookahead == '\r')
                SKIP(11);
            END_STATE();
        case 13:
            if(lookahead == '\n')
                SKIP(74);
            END_STATE();
        case 14:
            if(lookahead == '\n')
                SKIP(74);
            if(lookahead == '\r')
                SKIP(13);
            END_STATE();
        case 15:
            if(lookahead == '\n')
                SKIP(75);
            END_STATE();
        case 16:
            if(lookahead == '\n')
                SKIP(75);
            if(lookahead == '\r')
                SKIP(15);
            END_STATE();
        case 17:
            if(lookahead == '\n')
                SKIP(76);
            END_STATE();
        case 18:
            if(lookahead == '\n')
                SKIP(76);
            if(lookahead == '\r')
                SKIP(17);
            END_STATE();
        case 19:
            if(lookahead == '\n')
                SKIP(77);
            END_STATE();
        case 20:
            if(lookahead == '\n')
                SKIP(77);
            if(lookahead == '\r')
                SKIP(19);
            END_STATE();
        case 21:
            if(lookahead == '\n')
                SKIP(57);
            END_STATE();
        case 22:
            if(lookahead == '\n')
                SKIP(57);
            if(lookahead == '\r')
                SKIP(21);
            END_STATE();
        case 23:
            if(lookahead == '\n')
                SKIP(59);
            END_STATE();
        case 24:
            if(lookahead == '\n')
                SKIP(59);
            if(lookahead == '\r')
                SKIP(23);
            END_STATE();
        case 25:
            if(lookahead == '\n')
                SKIP(61);
            END_STATE();
        case 26:
            if(lookahead == '\n')
                SKIP(61);
            if(lookahead == '\r')
                SKIP(25);
            END_STATE();
        case 27:
            if(lookahead == '\n')
                SKIP(60);
            END_STATE();
        case 28:
            if(lookahead == '\n')
                SKIP(60);
            if(lookahead == '\r')
                SKIP(27);
            END_STATE();
        case 29:
            if(lookahead == '\n')
                SKIP(62);
            END_STATE();
        case 30:
            if(lookahead == '\n')
                SKIP(62);
            if(lookahead == '\r')
                SKIP(29);
            END_STATE();
        case 31:
            if(lookahead == '\n')
                SKIP(79);
            END_STATE();
        case 32:
            if(lookahead == '\n')
                SKIP(79);
            if(lookahead == '\r')
                SKIP(31);
            END_STATE();
        case 33:
            if(lookahead == '\n')
                SKIP(78);
            END_STATE();
        case 34:
            if(lookahead == '\n')
                SKIP(78);
            if(lookahead == '\r')
                SKIP(33);
            END_STATE();
        case 35:
            if(lookahead == '\n')
                SKIP(37);
            END_STATE();
        case 36:
            if(lookahead == '\n')
                SKIP(37);
            if(lookahead == '\r')
                SKIP(35);
            END_STATE();
        case 37:
            if(lookahead == '\n')
                ADVANCE(1000);
            if(lookahead == '\r')
                ADVANCE(37);
            if(lookahead == '(')
                ADVANCE(556);
            if(lookahead == '/')
                ADVANCE(65);
            if(lookahead == ':')
                ADVANCE(93);
            if(lookahead == '@')
                ADVANCE(668);
            if(lookahead == '\\')
                SKIP(36);
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                SKIP(37);
            END_STATE();
        case 38:
            if(lookahead == '\n')
                SKIP(64);
            END_STATE();
        case 39:
            if(lookahead == '\n')
                SKIP(64);
            if(lookahead == '\r')
                SKIP(38);
            END_STATE();
        case 40:
            if(lookahead == '\n')
                ADVANCE(1004);
            if(lookahead == '\r')
                ADVANCE(1001);
            if(lookahead == '\\')
                ADVANCE(1002);
            if(lookahead != 0)
                ADVANCE(1005);
            END_STATE();
        case 41:
            if(lookahead == '\n')
                SKIP(80);
            END_STATE();
        case 42:
            if(lookahead == '\n')
                SKIP(80);
            if(lookahead == '\r')
                SKIP(41);
            END_STATE();
        case 43:
            if(lookahead == '\n')
                ADVANCE(622);
            if(lookahead == '\r')
                ADVANCE(46);
            if(lookahead == '/')
                ADVANCE(632);
            if(lookahead == '\\')
                ADVANCE(629);
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                SKIP(84);
            if(lookahead != 0)
                ADVANCE(633);
            END_STATE();
        case 44:
            if(lookahead == '\n')
                ADVANCE(622);
            if(lookahead == '\r')
                ADVANCE(45);
            if(lookahead == '/')
                ADVANCE(65);
            if(lookahead == '\\')
                SKIP(52);
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                SKIP(83);
            END_STATE();
        case 45:
            if(lookahead == '\n')
                ADVANCE(622);
            if(lookahead == '/')
                ADVANCE(65);
            if(lookahead == '\\')
                SKIP(52);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(83);
            END_STATE();
        case 46:
            if(lookahead == '\n')
                ADVANCE(622);
            if(lookahead == '/')
                ADVANCE(632);
            if(lookahead == '\\')
                ADVANCE(629);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(84);
            if(lookahead != 0)
                ADVANCE(633);
            END_STATE();
        case 47:
            if(lookahead == '\n')
                SKIP(81);
            END_STATE();
        case 48:
            if(lookahead == '\n')
                SKIP(81);
            if(lookahead == '\r')
                SKIP(47);
            END_STATE();
        case 49:
            if(lookahead == '\n')
                ADVANCE(66);
            if(lookahead == '\r')
                ADVANCE(50);
            if(lookahead == '*')
                ADVANCE(1011);
            if(lookahead != 0)
                ADVANCE(67);
            END_STATE();
        case 50:
            if(lookahead == '\n')
                ADVANCE(66);
            if(lookahead == '*')
                ADVANCE(1011);
            if(lookahead != 0)
                ADVANCE(67);
            END_STATE();
        case 51:
            if(lookahead == '\n')
                SKIP(83);
            END_STATE();
        case 52:
            if(lookahead == '\n')
                SKIP(83);
            if(lookahead == '\r')
                SKIP(51);
            END_STATE();
        case 53:
            if(lookahead == '\n')
                SKIP(82);
            END_STATE();
        case 54:
            if(lookahead == '\n')
                SKIP(82);
            if(lookahead == '\r')
                SKIP(53);
            END_STATE();
        case 55:
            if(lookahead == '\r')
                ADVANCE(1006);
            if(lookahead == '\\')
                ADVANCE(1002);
            if(lookahead != 0)
                ADVANCE(1005);
            END_STATE();
        case 56:
            if(lookahead == ' ')
                ADVANCE(284);
            END_STATE();
        case 57:
            ADVANCE_MAP(
                '"', 561,
                '$', 546,
                '%', 555,
                '(', 556,
                ')', 557,
                '*', 553,
                '+', 549,
                ',', 539,
                '-', 551,
                '/', 554,
                ':', 645,
                ';', 646,
                '<', 534,
                '>', 536,
                '@', 668,
                'L', 559,
            );
            if(lookahead == '\\')
                SKIP(22);
            if(lookahead == ']')
                ADVANCE(701);
            if(lookahead == '^')
                ADVANCE(545);
            if(lookahead == 'a')
                ADVANCE(133);
            if(lookahead == 'b')
                ADVANCE(255);
            if(lookahead == 'i')
                ADVANCE(322);
            if(lookahead == 'l')
                ADVANCE(341);
            if(lookahead == 's')
                ADVANCE(425);
            if(lookahead == '{')
                ADVANCE(637);
            if(lookahead == '|')
                ADVANCE(544);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(57);
            END_STATE();
        case 58:
            ADVANCE_MAP(
                '"', 561,
                '\'', 563,
                '(', 556,
                '+', 550,
                '-', 552,
                '.', 472,
                '/', 65,
                '0', 599,
                ':', 93,
                'F', 742,
                'L', 560,
                'O', 772,
                'T', 747,
                'V', 750,
            );
            if(lookahead == '\\')
                SKIP(6);
            if(lookahead == 'a')
                ADVANCE(882);
            if(lookahead == 'b')
                ADVANCE(903);
            if(lookahead == 'c')
                ADVANCE(843);
            if(lookahead == 'd')
                ADVANCE(899);
            if(lookahead == 'f')
                ADVANCE(846);
            if(lookahead == 'i')
                ADVANCE(886);
            if(lookahead == 'l')
                ADVANCE(901);
            if(lookahead == 'm')
                ADVANCE(754);
            if(lookahead == 'o')
                ADVANCE(784);
            if(lookahead == 's')
                ADVANCE(801);
            if(lookahead == 'u')
                ADVANCE(854);
            if(lookahead == 'w')
                ADVANCE(778);
            if(lookahead == '~')
                ADVANCE(558);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(58);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(603);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 59:
            ADVANCE_MAP(
                '"', 561,
                '\'', 563,
                '(', 556,
                '+', 550,
                '-', 552,
                '.', 472,
                '/', 65,
                '0', 599,
                ':', 93,
                'F', 742,
                'L', 560,
                'T', 747,
            );
            if(lookahead == '\\')
                SKIP(24);
            if(lookahead == '~')
                ADVANCE(558);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(59);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(603);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 60:
            if(lookahead == '"')
                ADVANCE(561);
            if(lookahead == '/')
                ADVANCE(65);
            if(lookahead == ':')
                ADVANCE(93);
            if(lookahead == 'L')
                ADVANCE(560);
            if(lookahead == '\\')
                SKIP(28);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(60);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 61:
            if(lookahead == '$')
                ADVANCE(546);
            if(lookahead == ')')
                ADVANCE(557);
            if(lookahead == ',')
                ADVANCE(539);
            if(lookahead == '/')
                ADVANCE(65);
            if(lookahead == ':')
                ADVANCE(644);
            if(lookahead == ';')
                ADVANCE(646);
            if(lookahead == '>')
                ADVANCE(535);
            if(lookahead == '\\')
                SKIP(26);
            if(lookahead == ']')
                ADVANCE(701);
            if(lookahead == '^')
                ADVANCE(545);
            if(lookahead == 'i')
                ADVANCE(297);
            if(lookahead == 'o')
                ADVANCE(445);
            if(lookahead == '|')
                ADVANCE(544);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(61);
            END_STATE();
        case 62:
            ADVANCE_MAP(
                '(', 556,
                ')', 557,
                ',', 539,
                '/', 65,
                ':', 93,
                ';', 646,
                '<', 533,
                '>', 535,
                '@', 668,
            );
            if(lookahead == '\\')
                SKIP(30);
            if(lookahead == '}')
                ADVANCE(638);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(62);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 63:
            ADVANCE_MAP(
                '(', 556,
                ',', 539,
                '/', 65,
                ':', 93,
                '>', 535,
                '@', 668,
                'O', 772,
                'V', 750,
            );
            if(lookahead == '\\')
                SKIP(12);
            if(lookahead == 'a')
                ADVANCE(882);
            if(lookahead == 'b')
                ADVANCE(903);
            if(lookahead == 'c')
                ADVANCE(843);
            if(lookahead == 'd')
                ADVANCE(899);
            if(lookahead == 'f')
                ADVANCE(846);
            if(lookahead == 'i')
                ADVANCE(886);
            if(lookahead == 'l')
                ADVANCE(901);
            if(lookahead == 'm')
                ADVANCE(754);
            if(lookahead == 'o')
                ADVANCE(784);
            if(lookahead == 's')
                ADVANCE(801);
            if(lookahead == 'u')
                ADVANCE(854);
            if(lookahead == 'w')
                ADVANCE(778);
            if(lookahead == '}')
                ADVANCE(638);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(63);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 64:
            if(lookahead == ')')
                ADVANCE(557);
            if(lookahead == '/')
                ADVANCE(65);
            if(lookahead == '\\')
                SKIP(39);
            if(lookahead == 'i')
                ADVANCE(302);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(64);
            END_STATE();
        case 65:
            if(lookahead == '*')
                ADVANCE(1007);
            if(lookahead == '/')
                ADVANCE(996);
            END_STATE();
        case 66:
            if(lookahead == '*')
                ADVANCE(1011);
            if(lookahead == '/')
                ADVANCE(68);
            if(lookahead == '\\')
                ADVANCE(49);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(66);
            if(lookahead != 0)
                ADVANCE(67);
            END_STATE();
        case 67:
            if(lookahead == '*')
                ADVANCE(1011);
            if(lookahead != 0)
                ADVANCE(67);
            END_STATE();
        case 68:
            if(lookahead == '*')
                ADVANCE(1008);
            if(lookahead == '/')
                ADVANCE(997);
            if(lookahead != 0)
                ADVANCE(67);
            END_STATE();
        case 69:
            ADVANCE_MAP(
                ',', 539,
                '/', 65,
                ':', 93,
                '<', 533,
                '>', 535,
                '@', 668,
                'O', 772,
                'V', 750,
            );
            if(lookahead == '\\')
                SKIP(2);
            if(lookahead == ']')
                ADVANCE(701);
            if(lookahead == 'a')
                ADVANCE(773);
            if(lookahead == 'b')
                ADVANCE(848);
            if(lookahead == 'c')
                ADVANCE(841);
            if(lookahead == 'd')
                ADVANCE(899);
            if(lookahead == 'e')
                ADVANCE(884);
            if(lookahead == 'f')
                ADVANCE(753);
            if(lookahead == 'i')
                ADVANCE(873);
            if(lookahead == 'l')
                ADVANCE(901);
            if(lookahead == 'm')
                ADVANCE(754);
            if(lookahead == 'n')
                ADVANCE(759);
            if(lookahead == 'o')
                ADVANCE(783);
            if(lookahead == 'p')
                ADVANCE(921);
            if(lookahead == 'r')
                ADVANCE(821);
            if(lookahead == 's')
                ADVANCE(799);
            if(lookahead == 't')
                ADVANCE(989);
            if(lookahead == 'u')
                ADVANCE(853);
            if(lookahead == 'v')
                ADVANCE(770);
            if(lookahead == 'w')
                ADVANCE(778);
            if(lookahead == '{')
                ADVANCE(637);
            if(lookahead == '}')
                ADVANCE(638);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(69);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 70:
            if(lookahead == '.')
                ADVANCE(472);
            if(lookahead == '0')
                ADVANCE(596);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(598);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(612);
            END_STATE();
        case 71:
            if(lookahead == '/')
                ADVANCE(65);
            if(lookahead == ':')
                ADVANCE(93);
            if(lookahead == '@')
                ADVANCE(668);
            if(lookahead == 'O')
                ADVANCE(772);
            if(lookahead == 'V')
                ADVANCE(750);
            if(lookahead == '\\')
                SKIP(4);
            if(lookahead == 'a')
                ADVANCE(773);
            if(lookahead == 'b')
                ADVANCE(848);
            if(lookahead == 'c')
                ADVANCE(841);
            if(lookahead == 'd')
                ADVANCE(899);
            if(lookahead == 'e')
                ADVANCE(884);
            if(lookahead == 'f')
                ADVANCE(846);
            if(lookahead == 'i')
                ADVANCE(873);
            if(lookahead == 'l')
                ADVANCE(901);
            if(lookahead == 'm')
                ADVANCE(754);
            if(lookahead == 'n')
                ADVANCE(759);
            if(lookahead == 'o')
                ADVANCE(783);
            if(lookahead == 'r')
                ADVANCE(821);
            if(lookahead == 's')
                ADVANCE(799);
            if(lookahead == 't')
                ADVANCE(989);
            if(lookahead == 'u')
                ADVANCE(853);
            if(lookahead == 'v')
                ADVANCE(770);
            if(lookahead == 'w')
                ADVANCE(778);
            if(lookahead == '}')
                ADVANCE(638);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(71);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 72:
            if(lookahead == '/')
                ADVANCE(65);
            if(lookahead == ':')
                ADVANCE(93);
            if(lookahead == '@')
                ADVANCE(668);
            if(lookahead == 'O')
                ADVANCE(772);
            if(lookahead == 'V')
                ADVANCE(750);
            if(lookahead == '\\')
                SKIP(8);
            if(lookahead == 'a')
                ADVANCE(882);
            if(lookahead == 'b')
                ADVANCE(848);
            if(lookahead == 'c')
                ADVANCE(765);
            if(lookahead == 'd')
                ADVANCE(818);
            if(lookahead == 'e')
                ADVANCE(885);
            if(lookahead == 'f')
                ADVANCE(846);
            if(lookahead == 'i')
                ADVANCE(886);
            if(lookahead == 'l')
                ADVANCE(901);
            if(lookahead == 'm')
                ADVANCE(754);
            if(lookahead == 'o')
                ADVANCE(784);
            if(lookahead == 's')
                ADVANCE(799);
            if(lookahead == 'u')
                ADVANCE(853);
            if(lookahead == 'w')
                ADVANCE(778);
            if(lookahead == '}')
                ADVANCE(638);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(72);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 73:
            if(lookahead == '/')
                ADVANCE(65);
            if(lookahead == ':')
                ADVANCE(93);
            if(lookahead == '@')
                ADVANCE(668);
            if(lookahead == 'O')
                ADVANCE(772);
            if(lookahead == 'V')
                ADVANCE(750);
            if(lookahead == '\\')
                SKIP(10);
            if(lookahead == 'a')
                ADVANCE(882);
            if(lookahead == 'b')
                ADVANCE(848);
            if(lookahead == 'c')
                ADVANCE(843);
            if(lookahead == 'd')
                ADVANCE(899);
            if(lookahead == 'e')
                ADVANCE(885);
            if(lookahead == 'f')
                ADVANCE(846);
            if(lookahead == 'i')
                ADVANCE(886);
            if(lookahead == 'l')
                ADVANCE(901);
            if(lookahead == 'm')
                ADVANCE(754);
            if(lookahead == 'o')
                ADVANCE(784);
            if(lookahead == 's')
                ADVANCE(799);
            if(lookahead == 'u')
                ADVANCE(853);
            if(lookahead == 'w')
                ADVANCE(778);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(73);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 74:
            if(lookahead == '/')
                ADVANCE(65);
            if(lookahead == ':')
                ADVANCE(93);
            if(lookahead == '@')
                ADVANCE(257);
            if(lookahead == '\\')
                SKIP(14);
            if(lookahead == 'a')
                ADVANCE(882);
            if(lookahead == 'b')
                ADVANCE(903);
            if(lookahead == 'c')
                ADVANCE(842);
            if(lookahead == 'd')
                ADVANCE(899);
            if(lookahead == 'e')
                ADVANCE(885);
            if(lookahead == 'f')
                ADVANCE(846);
            if(lookahead == 'i')
                ADVANCE(886);
            if(lookahead == 'l')
                ADVANCE(901);
            if(lookahead == 'o')
                ADVANCE(784);
            if(lookahead == 's')
                ADVANCE(801);
            if(lookahead == 't')
                ADVANCE(991);
            if(lookahead == 'u')
                ADVANCE(854);
            if(lookahead == 'w')
                ADVANCE(778);
            if(lookahead == '}')
                ADVANCE(638);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(74);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 75:
            if(lookahead == '/')
                ADVANCE(65);
            if(lookahead == ':')
                ADVANCE(93);
            if(lookahead == 'O')
                ADVANCE(772);
            if(lookahead == 'V')
                ADVANCE(750);
            if(lookahead == '\\')
                SKIP(16);
            if(lookahead == 'a')
                ADVANCE(882);
            if(lookahead == 'b')
                ADVANCE(903);
            if(lookahead == 'c')
                ADVANCE(842);
            if(lookahead == 'd')
                ADVANCE(899);
            if(lookahead == 'e')
                ADVANCE(883);
            if(lookahead == 'f')
                ADVANCE(865);
            if(lookahead == 'i')
                ADVANCE(894);
            if(lookahead == 'l')
                ADVANCE(901);
            if(lookahead == 'o')
                ADVANCE(784);
            if(lookahead == 's')
                ADVANCE(800);
            if(lookahead == 't')
                ADVANCE(992);
            if(lookahead == 'u')
                ADVANCE(853);
            if(lookahead == 'v')
                ADVANCE(771);
            if(lookahead == 'w')
                ADVANCE(779);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(75);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 76:
            if(lookahead == '/')
                ADVANCE(65);
            if(lookahead == ':')
                ADVANCE(93);
            if(lookahead == '\\')
                SKIP(18);
            if(lookahead == 'b')
                ADVANCE(903);
            if(lookahead == 'c')
                ADVANCE(843);
            if(lookahead == 'd')
                ADVANCE(899);
            if(lookahead == 'f')
                ADVANCE(846);
            if(lookahead == 'i')
                ADVANCE(886);
            if(lookahead == 'l')
                ADVANCE(901);
            if(lookahead == 'o')
                ADVANCE(784);
            if(lookahead == 's')
                ADVANCE(801);
            if(lookahead == 'u')
                ADVANCE(854);
            if(lookahead == 'w')
                ADVANCE(778);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(76);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 77:
            if(lookahead == '/')
                ADVANCE(65);
            if(lookahead == ':')
                ADVANCE(93);
            if(lookahead == '\\')
                SKIP(20);
            if(lookahead == 'b')
                ADVANCE(903);
            if(lookahead == 'c')
                ADVANCE(843);
            if(lookahead == 'i')
                ADVANCE(886);
            if(lookahead == 'l')
                ADVANCE(909);
            if(lookahead == 's')
                ADVANCE(844);
            if(lookahead == 'u')
                ADVANCE(854);
            if(lookahead == 'w')
                ADVANCE(779);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(77);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 78:
            if(lookahead == '/')
                ADVANCE(65);
            if(lookahead == ':')
                ADVANCE(93);
            if(lookahead == '\\')
                SKIP(34);
            if(lookahead == 't')
                ADVANCE(929);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(78);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 79:
            if(lookahead == '/')
                ADVANCE(65);
            if(lookahead == ':')
                ADVANCE(644);
            if(lookahead == ';')
                ADVANCE(646);
            if(lookahead == '@')
                ADVANCE(168);
            if(lookahead == '\\')
                SKIP(32);
            if(lookahead == '{')
                ADVANCE(637);
            if(lookahead == '}')
                ADVANCE(638);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(79);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 80:
            if(lookahead == '/')
                ADVANCE(65);
            if(lookahead == ';')
                ADVANCE(646);
            if(lookahead == '\\')
                SKIP(42);
            if(lookahead == 's')
                ADVANCE(983);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(80);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 81:
            if(lookahead == '/')
                ADVANCE(65);
            if(lookahead == '\\')
                SKIP(48);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(81);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(564);
            END_STATE();
        case 82:
            if(lookahead == '/')
                ADVANCE(65);
            if(lookahead == '\\')
                SKIP(54);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(82);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(562);
            END_STATE();
        case 83:
            if(lookahead == '/')
                ADVANCE(65);
            if(lookahead == '\\')
                SKIP(52);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(83);
            END_STATE();
        case 84:
            if(lookahead == '/')
                ADVANCE(632);
            if(lookahead == '\\')
                ADVANCE(629);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(84);
            if(lookahead != 0)
                ADVANCE(633);
            END_STATE();
        case 85:
            if(lookahead == '1')
                ADVANCE(91);
            if(lookahead == '3')
                ADVANCE(87);
            if(lookahead == '6')
                ADVANCE(89);
            if(lookahead == '8')
                ADVANCE(500);
            END_STATE();
        case 86:
            if(lookahead == '1')
                ADVANCE(92);
            if(lookahead == '3')
                ADVANCE(88);
            if(lookahead == '6')
                ADVANCE(90);
            if(lookahead == '8')
                ADVANCE(508);
            if(lookahead == 'e')
                ADVANCE(377);
            END_STATE();
        case 87:
            if(lookahead == '2')
                ADVANCE(514);
            END_STATE();
        case 88:
            if(lookahead == '2')
                ADVANCE(495);
            END_STATE();
        case 89:
            if(lookahead == '4')
                ADVANCE(517);
            END_STATE();
        case 90:
            if(lookahead == '4')
                ADVANCE(498);
            END_STATE();
        case 91:
            if(lookahead == '6')
                ADVANCE(511);
            END_STATE();
        case 92:
            if(lookahead == '6')
                ADVANCE(489);
            END_STATE();
        case 93:
            if(lookahead == ':')
                ADVANCE(528);
            END_STATE();
        case 94:
            if(lookahead == '<')
                ADVANCE(548);
            END_STATE();
        case 95:
            if(lookahead == 'B')
                ADVANCE(126);
            END_STATE();
        case 96:
            if(lookahead == 'E')
                ADVANCE(588);
            END_STATE();
        case 97:
            if(lookahead == 'E')
                ADVANCE(590);
            END_STATE();
        case 98:
            if(lookahead == 'L')
                ADVANCE(99);
            END_STATE();
        case 99:
            if(lookahead == 'S')
                ADVANCE(97);
            END_STATE();
        case 100:
            if(lookahead == 'U')
                ADVANCE(96);
            END_STATE();
        case 101:
            if(lookahead == '_')
                ADVANCE(320);
            END_STATE();
        case 102:
            if(lookahead == '_')
                ADVANCE(282);
            END_STATE();
        case 103:
            if(lookahead == '_')
                ADVANCE(286);
            END_STATE();
        case 104:
            if(lookahead == 'a')
                ADVANCE(388);
            if(lookahead == 'o')
                ADVANCE(293);
            if(lookahead == 'u')
                ADVANCE(389);
            END_STATE();
        case 105:
            if(lookahead == 'a')
                ADVANCE(256);
            if(lookahead == 'e')
                ADVANCE(107);
            END_STATE();
        case 106:
            if(lookahead == 'a')
                ADVANCE(464);
            END_STATE();
        case 107:
            if(lookahead == 'a')
                ADVANCE(167);
            END_STATE();
        case 108:
            if(lookahead == 'a')
                ADVANCE(421);
            END_STATE();
        case 109:
            if(lookahead == 'a')
                ADVANCE(360);
            END_STATE();
        case 110:
            if(lookahead == 'a')
                ADVANCE(291);
            END_STATE();
        case 111:
            if(lookahead == 'a')
                ADVANCE(267);
            END_STATE();
        case 112:
            if(lookahead == 'a')
                ADVANCE(380);
            END_STATE();
        case 113:
            if(lookahead == 'a')
                ADVANCE(381);
            END_STATE();
        case 114:
            if(lookahead == 'a')
                ADVANCE(361);
            END_STATE();
        case 115:
            if(lookahead == 'a')
                ADVANCE(444);
            END_STATE();
        case 116:
            if(lookahead == 'a')
                ADVANCE(269);
            END_STATE();
        case 117:
            if(lookahead == 'a')
                ADVANCE(268);
            END_STATE();
        case 118:
            if(lookahead == 'a')
                ADVANCE(299);
            END_STATE();
        case 119:
            if(lookahead == 'a')
                ADVANCE(401);
            END_STATE();
        case 120:
            if(lookahead == 'a')
                ADVANCE(428);
            END_STATE();
        case 121:
            if(lookahead == 'a')
                ADVANCE(292);
            END_STATE();
        case 122:
            if(lookahead == 'a')
                ADVANCE(430);
            END_STATE();
        case 123:
            if(lookahead == 'a')
                ADVANCE(450);
            END_STATE();
        case 124:
            if(lookahead == 'a')
                ADVANCE(153);
            END_STATE();
        case 125:
            if(lookahead == 'a')
                ADVANCE(152);
            END_STATE();
        case 126:
            if(lookahead == 'a')
                ADVANCE(395);
            END_STATE();
        case 127:
            if(lookahead == 'a')
                ADVANCE(281);
            END_STATE();
        case 128:
            if(lookahead == 'a')
                ADVANCE(281);
            if(lookahead == 'o')
                ADVANCE(244);
            END_STATE();
        case 129:
            if(lookahead == 'a')
                ADVANCE(259);
            END_STATE();
        case 130:
            if(lookahead == 'a')
                ADVANCE(438);
            END_STATE();
        case 131:
            if(lookahead == 'a')
                ADVANCE(260);
            END_STATE();
        case 132:
            if(lookahead == 'a')
                ADVANCE(140);
            END_STATE();
        case 133:
            if(lookahead == 'b')
                ADVANCE(396);
            END_STATE();
        case 134:
            if(lookahead == 'b')
                ADVANCE(396);
            if(lookahead == 'l')
                ADVANCE(242);
            END_STATE();
        case 135:
            if(lookahead == 'b')
                ADVANCE(396);
            if(lookahead == 't')
                ADVANCE(416);
            END_STATE();
        case 136:
            if(lookahead == 'b')
                ADVANCE(273);
            END_STATE();
        case 137:
            if(lookahead == 'b')
                ADVANCE(453);
            END_STATE();
        case 138:
            if(lookahead == 'b')
                ADVANCE(275);
            END_STATE();
        case 139:
            if(lookahead == 'b')
                ADVANCE(278);
            END_STATE();
        case 140:
            if(lookahead == 'b')
                ADVANCE(280);
            END_STATE();
        case 141:
            if(lookahead == 'c')
                ADVANCE(692);
            END_STATE();
        case 142:
            if(lookahead == 'c')
                ADVANCE(234);
            END_STATE();
        case 143:
            if(lookahead == 'c')
                ADVANCE(424);
            END_STATE();
        case 144:
            if(lookahead == 'c')
                ADVANCE(111);
            END_STATE();
        case 145:
            if(lookahead == 'c')
                ADVANCE(111);
            if(lookahead == 'n')
                ADVANCE(225);
            END_STATE();
        case 146:
            if(lookahead == 'c')
                ADVANCE(111);
            if(lookahead == 'n')
                ADVANCE(231);
            END_STATE();
        case 147:
            if(lookahead == 'c')
                ADVANCE(195);
            END_STATE();
        case 148:
            if(lookahead == 'c')
                ADVANCE(435);
            END_STATE();
        case 149:
            if(lookahead == 'c')
                ADVANCE(405);
            END_STATE();
        case 150:
            if(lookahead == 'c')
                ADVANCE(408);
            END_STATE();
        case 151:
            if(lookahead == 'c')
                ADVANCE(178);
            END_STATE();
        case 152:
            if(lookahead == 'c')
                ADVANCE(411);
            END_STATE();
        case 153:
            if(lookahead == 'c')
                ADVANCE(187);
            END_STATE();
        case 154:
            if(lookahead == 'c')
                ADVANCE(120);
            END_STATE();
        case 155:
            if(lookahead == 'd')
                ADVANCE(623);
            if(lookahead == '\t' ||
               lookahead == ' ')
                ADVANCE(470);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(628);
            END_STATE();
        case 156:
            if(lookahead == 'd')
                ADVANCE(647);
            END_STATE();
        case 157:
            if(lookahead == 'd')
                ADVANCE(504);
            END_STATE();
        case 158:
            if(lookahead == 'd')
                ADVANCE(708);
            END_STATE();
        case 159:
            if(lookahead == 'd')
                ADVANCE(662);
            END_STATE();
        case 160:
            if(lookahead == 'd')
                ADVANCE(56);
            END_STATE();
        case 161:
            if(lookahead == 'd')
                ADVANCE(451);
            END_STATE();
        case 162:
            if(lookahead == 'd')
                ADVANCE(347);
            if(lookahead == 'l')
                ADVANCE(335);
            END_STATE();
        case 163:
            if(lookahead == 'd')
                ADVANCE(190);
            if(lookahead == 'i')
                ADVANCE(158);
            if(lookahead == 'n')
                ADVANCE(110);
            if(lookahead == 'p')
                ADVANCE(373);
            END_STATE();
        case 164:
            if(lookahead == 'd')
                ADVANCE(190);
            if(lookahead == 'i')
                ADVANCE(158);
            if(lookahead == 'p')
                ADVANCE(373);
            END_STATE();
        case 165:
            if(lookahead == 'd')
                ADVANCE(198);
            END_STATE();
        case 166:
            if(lookahead == 'd')
                ADVANCE(211);
            END_STATE();
        case 167:
            if(lookahead == 'd')
                ADVANCE(334);
            END_STATE();
        case 168:
            if(lookahead == 'd')
                ADVANCE(216);
            END_STATE();
        case 169:
            if(lookahead == 'e')
                ADVANCE(219);
            END_STATE();
        case 170:
            if(lookahead == 'e')
                ADVANCE(459);
            END_STATE();
        case 171:
            if(lookahead == 'e')
                ADVANCE(706);
            END_STATE();
        case 172:
            if(lookahead == 'e')
                ADVANCE(163);
            END_STATE();
        case 173:
            if(lookahead == 'e')
                ADVANCE(95);
            END_STATE();
        case 174:
            if(lookahead == 'e')
                ADVANCE(521);
            END_STATE();
        case 175:
            if(lookahead == 'e')
                ADVANCE(671);
            END_STATE();
        case 176:
            if(lookahead == 'e')
                ADVANCE(723);
            END_STATE();
        case 177:
            if(lookahead == 'e')
                ADVANCE(694);
            END_STATE();
        case 178:
            if(lookahead == 'e')
                ADVANCE(540);
            END_STATE();
        case 179:
            if(lookahead == 'e')
                ADVANCE(672);
            END_STATE();
        case 180:
            if(lookahead == 'e')
                ADVANCE(718);
            END_STATE();
        case 181:
            if(lookahead == 'e')
                ADVANCE(656);
            END_STATE();
        case 182:
            if(lookahead == 'e')
                ADVANCE(676);
            END_STATE();
        case 183:
            if(lookahead == 'e')
                ADVANCE(674);
            END_STATE();
        case 184:
            if(lookahead == 'e')
                ADVANCE(523);
            END_STATE();
        case 185:
            if(lookahead == 'e')
                ADVANCE(689);
            END_STATE();
        case 186:
            if(lookahead == 'e')
                ADVANCE(164);
            END_STATE();
        case 187:
            if(lookahead == 'e')
                ADVANCE(642);
            END_STATE();
        case 188:
            if(lookahead == 'e')
                ADVANCE(725);
            END_STATE();
        case 189:
            if(lookahead == 'e')
                ADVANCE(102);
            END_STATE();
        case 190:
            if(lookahead == 'e')
                ADVANCE(218);
            END_STATE();
        case 191:
            if(lookahead == 'e')
                ADVANCE(462);
            END_STATE();
        case 192:
            if(lookahead == 'e')
                ADVANCE(379);
            END_STATE();
        case 193:
            if(lookahead == 'e')
                ADVANCE(221);
            END_STATE();
        case 194:
            if(lookahead == 'e')
                ADVANCE(157);
            END_STATE();
        case 195:
            if(lookahead == 'e')
                ADVANCE(353);
            END_STATE();
        case 196:
            if(lookahead == 'e')
                ADVANCE(272);
            END_STATE();
        case 197:
            if(lookahead == 'e')
                ADVANCE(382);
            END_STATE();
        case 198:
            if(lookahead == 'e')
                ADVANCE(383);
            END_STATE();
        case 199:
            if(lookahead == 'e')
                ADVANCE(160);
            END_STATE();
        case 200:
            if(lookahead == 'e')
                ADVANCE(318);
            END_STATE();
        case 201:
            if(lookahead == 'e')
                ADVANCE(385);
            END_STATE();
        case 202:
            if(lookahead == 'e')
                ADVANCE(386);
            END_STATE();
        case 203:
            if(lookahead == 'e')
                ADVANCE(387);
            END_STATE();
        case 204:
            if(lookahead == 'e')
                ADVANCE(118);
            END_STATE();
        case 205:
            if(lookahead == 'e')
                ADVANCE(377);
            END_STATE();
        case 206:
            if(lookahead == 'e')
                ADVANCE(403);
            END_STATE();
        case 207:
            if(lookahead == 'e')
                ADVANCE(406);
            END_STATE();
        case 208:
            if(lookahead == 'e')
                ADVANCE(419);
            END_STATE();
        case 209:
            if(lookahead == 'e')
                ADVANCE(314);
            END_STATE();
        case 210:
            if(lookahead == 'e')
                ADVANCE(149);
            END_STATE();
        case 211:
            if(lookahead == 'e')
                ADVANCE(222);
            END_STATE();
        case 212:
            if(lookahead == 'e')
                ADVANCE(316);
            END_STATE();
        case 213:
            if(lookahead == 'e')
                ADVANCE(370);
            END_STATE();
        case 214:
            if(lookahead == 'e')
                ADVANCE(371);
            END_STATE();
        case 215:
            if(lookahead == 'e')
                ADVANCE(437);
            END_STATE();
        case 216:
            if(lookahead == 'e')
                ADVANCE(224);
            END_STATE();
        case 217:
            if(lookahead == 'e')
                ADVANCE(440);
            if(lookahead == 'h')
                ADVANCE(330);
            if(lookahead == 't')
                ADVANCE(367);
            if(lookahead == 'u')
                ADVANCE(357);
            END_STATE();
        case 218:
            if(lookahead == 'f')
                ADVANCE(698);
            END_STATE();
        case 219:
            if(lookahead == 'f')
                ADVANCE(115);
            END_STATE();
        case 220:
            if(lookahead == 'f')
                ADVANCE(253);
            if(lookahead == 'm')
                ADVANCE(113);
            if(lookahead == 's')
                ADVANCE(207);
            END_STATE();
        case 221:
            if(lookahead == 'f')
                ADVANCE(243);
            END_STATE();
        case 222:
            if(lookahead == 'f')
                ADVANCE(258);
            END_STATE();
        case 223:
            if(lookahead == 'f')
                ADVANCE(124);
            END_STATE();
        case 224:
            if(lookahead == 'f')
                ADVANCE(123);
            END_STATE();
        case 225:
            if(lookahead == 'g')
                ADVANCE(491);
            END_STATE();
        case 226:
            if(lookahead == 'g')
                ADVANCE(529);
            END_STATE();
        case 227:
            if(lookahead == 'g')
                ADVANCE(531);
            END_STATE();
        case 228:
            if(lookahead == 'g')
                ADVANCE(497);
            END_STATE();
        case 229:
            if(lookahead == 'g')
                ADVANCE(513);
            END_STATE();
        case 230:
            if(lookahead == 'g')
                ADVANCE(516);
            END_STATE();
        case 231:
            if(lookahead == 'g')
                ADVANCE(493);
            END_STATE();
        case 232:
            if(lookahead == 'g')
                ADVANCE(315);
            END_STATE();
        case 233:
            if(lookahead == 'g')
                ADVANCE(321);
            END_STATE();
        case 234:
            if(lookahead == 'h')
                ADVANCE(704);
            END_STATE();
        case 235:
            if(lookahead == 'h')
                ADVANCE(114);
            END_STATE();
        case 236:
            if(lookahead == 'h')
                ADVANCE(345);
            END_STATE();
        case 237:
            if(lookahead == 'i')
                ADVANCE(457);
            if(lookahead == 'o')
                ADVANCE(456);
            END_STATE();
        case 238:
            if(lookahead == 'i')
                ADVANCE(313);
            if(lookahead == 'n')
                ADVANCE(247);
            if(lookahead == 's')
                ADVANCE(192);
            END_STATE();
        case 239:
            if(lookahead == 'i')
                ADVANCE(397);
            if(lookahead == 'o')
                ADVANCE(325);
            END_STATE();
        case 240:
            if(lookahead == 'i')
                ADVANCE(137);
            END_STATE();
        case 241:
            if(lookahead == 'i')
                ADVANCE(232);
            END_STATE();
        case 242:
            if(lookahead == 'i')
                ADVANCE(112);
            END_STATE();
        case 243:
            if(lookahead == 'i')
                ADVANCE(460);
            END_STATE();
        case 244:
            if(lookahead == 'i')
                ADVANCE(156);
            END_STATE();
        case 245:
            if(lookahead == 'i')
                ADVANCE(458);
            END_STATE();
        case 246:
            if(lookahead == 'i')
                ADVANCE(331);
            END_STATE();
        case 247:
            if(lookahead == 'i')
                ADVANCE(331);
            if(lookahead == 's')
                ADVANCE(241);
            END_STATE();
        case 248:
            if(lookahead == 'i')
                ADVANCE(305);
            if(lookahead == 'u')
                ADVANCE(150);
            END_STATE();
        case 249:
            if(lookahead == 'i')
                ADVANCE(141);
            END_STATE();
        case 250:
            if(lookahead == 'i')
                ADVANCE(165);
            END_STATE();
        case 251:
            if(lookahead == 'i')
                ADVANCE(418);
            END_STATE();
        case 252:
            if(lookahead == 'i')
                ADVANCE(307);
            END_STATE();
        case 253:
            if(lookahead == 'i')
                ADVANCE(196);
            END_STATE();
        case 254:
            if(lookahead == 'i')
                ADVANCE(415);
            END_STATE();
        case 255:
            if(lookahead == 'i')
                ADVANCE(420);
            END_STATE();
        case 256:
            if(lookahead == 'i')
                ADVANCE(392);
            END_STATE();
        case 257:
            if(lookahead == 'i')
                ADVANCE(233);
            END_STATE();
        case 258:
            if(lookahead == 'i')
                ADVANCE(317);
            END_STATE();
        case 259:
            if(lookahead == 'i')
                ADVANCE(393);
            END_STATE();
        case 260:
            if(lookahead == 'i')
                ADVANCE(394);
            END_STATE();
        case 261:
            if(lookahead == 'i')
                ADVANCE(433);
            END_STATE();
        case 262:
            if(lookahead == 'i')
                ADVANCE(336);
            END_STATE();
        case 263:
            if(lookahead == 'i')
                ADVANCE(337);
            END_STATE();
        case 264:
            if(lookahead == 'i')
                ADVANCE(439);
            END_STATE();
        case 265:
            if(lookahead == 'j')
                ADVANCE(210);
            END_STATE();
        case 266:
            if(lookahead == 'k')
                ADVANCE(663);
            END_STATE();
        case 267:
            if(lookahead == 'l')
                ADVANCE(639);
            END_STATE();
        case 268:
            if(lookahead == 'l')
                ADVANCE(702);
            END_STATE();
        case 269:
            if(lookahead == 'l')
                ADVANCE(101);
            END_STATE();
        case 270:
            if(lookahead == 'l')
                ADVANCE(446);
            END_STATE();
        case 271:
            if(lookahead == 'l')
                ADVANCE(466);
            END_STATE();
        case 272:
            if(lookahead == 'l')
                ADVANCE(159);
            END_STATE();
        case 273:
            if(lookahead == 'l')
                ADVANCE(249);
            END_STATE();
        case 274:
            if(lookahead == 'l')
                ADVANCE(204);
            END_STATE();
        case 275:
            if(lookahead == 'l')
                ADVANCE(174);
            END_STATE();
        case 276:
            if(lookahead == 'l')
                ADVANCE(175);
            END_STATE();
        case 277:
            if(lookahead == 'l')
                ADVANCE(410);
            END_STATE();
        case 278:
            if(lookahead == 'l')
                ADVANCE(184);
            END_STATE();
        case 279:
            if(lookahead == 'l')
                ADVANCE(441);
            END_STATE();
        case 280:
            if(lookahead == 'l')
                ADVANCE(185);
            END_STATE();
        case 281:
            if(lookahead == 'l')
                ADVANCE(454);
            END_STATE();
        case 282:
            if(lookahead == 'l')
                ADVANCE(261);
            END_STATE();
        case 283:
            if(lookahead == 'l')
                ADVANCE(335);
            END_STATE();
        case 284:
            if(lookahead == 'l')
                ADVANCE(338);
            if(lookahead == 's')
                ADVANCE(236);
            END_STATE();
        case 285:
            if(lookahead == 'l')
                ADVANCE(340);
            END_STATE();
        case 286:
            if(lookahead == 'l')
                ADVANCE(264);
            END_STATE();
        case 287:
            if(lookahead == 'm')
                ADVANCE(355);
            if(lookahead == 'n')
                ADVANCE(414);
            END_STATE();
        case 288:
            if(lookahead == 'm')
                ADVANCE(355);
            if(lookahead == 'n')
                ADVANCE(432);
            END_STATE();
        case 289:
            if(lookahead == 'm')
                ADVANCE(682);
            END_STATE();
        case 290:
            if(lookahead == 'm')
                ADVANCE(687);
            END_STATE();
        case 291:
            if(lookahead == 'm')
                ADVANCE(179);
            END_STATE();
        case 292:
            if(lookahead == 'm')
                ADVANCE(203);
            END_STATE();
        case 293:
            if(lookahead == 'm')
                ADVANCE(354);
            if(lookahead == 'n')
                ADVANCE(391);
            END_STATE();
        case 294:
            if(lookahead == 'm')
                ADVANCE(354);
            if(lookahead == 'n')
                ADVANCE(390);
            END_STATE();
        case 295:
            if(lookahead == 'm')
                ADVANCE(113);
            END_STATE();
        case 296:
            if(lookahead == 'm')
                ADVANCE(113);
            if(lookahead == 's')
                ADVANCE(207);
            END_STATE();
        case 297:
            if(lookahead == 'n')
                ADVANCE(650);
            END_STATE();
        case 298:
            if(lookahead == 'n')
                ADVANCE(680);
            END_STATE();
        case 299:
            if(lookahead == 'n')
                ADVANCE(502);
            END_STATE();
        case 300:
            if(lookahead == 'n')
                ADVANCE(635);
            END_STATE();
        case 301:
            if(lookahead == 'n')
                ADVANCE(665);
            END_STATE();
        case 302:
            if(lookahead == 'n')
                ADVANCE(649);
            END_STATE();
        case 303:
            if(lookahead == 'n')
                ADVANCE(442);
            if(lookahead == 'x')
                ADVANCE(147);
            END_STATE();
        case 304:
            if(lookahead == 'n')
                ADVANCE(308);
            END_STATE();
        case 305:
            if(lookahead == 'n')
                ADVANCE(226);
            END_STATE();
        case 306:
            if(lookahead == 'n')
                ADVANCE(154);
            END_STATE();
        case 307:
            if(lookahead == 'n')
                ADVANCE(227);
            END_STATE();
        case 308:
            if(lookahead == 'n')
                ADVANCE(339);
            END_STATE();
        case 309:
            if(lookahead == 'n')
                ADVANCE(228);
            END_STATE();
        case 310:
            if(lookahead == 'n')
                ADVANCE(229);
            END_STATE();
        case 311:
            if(lookahead == 'n')
                ADVANCE(271);
            END_STATE();
        case 312:
            if(lookahead == 'n')
                ADVANCE(230);
            END_STATE();
        case 313:
            if(lookahead == 'n')
                ADVANCE(399);
            END_STATE();
        case 314:
            if(lookahead == 'n')
                ADVANCE(429);
            END_STATE();
        case 315:
            if(lookahead == 'n')
                ADVANCE(199);
            END_STATE();
        case 316:
            if(lookahead == 'n')
                ADVANCE(412);
            END_STATE();
        case 317:
            if(lookahead == 'n')
                ADVANCE(188);
            END_STATE();
        case 318:
            if(lookahead == 'n')
                ADVANCE(151);
            END_STATE();
        case 319:
            if(lookahead == 'n')
                ADVANCE(246);
            END_STATE();
        case 320:
            if(lookahead == 'n')
                ADVANCE(121);
            END_STATE();
        case 321:
            if(lookahead == 'n')
                ADVANCE(343);
            END_STATE();
        case 322:
            if(lookahead == 'n')
                ADVANCE(432);
            END_STATE();
        case 323:
            if(lookahead == 'n')
                ADVANCE(212);
            END_STATE();
        case 324:
            if(lookahead == 'o')
                ADVANCE(161);
            END_STATE();
        case 325:
            if(lookahead == 'o')
                ADVANCE(274);
            END_STATE();
        case 326:
            if(lookahead == 'o')
                ADVANCE(290);
            END_STATE();
        case 327:
            if(lookahead == 'o')
                ADVANCE(456);
            END_STATE();
        case 328:
            if(lookahead == 'o')
                ADVANCE(294);
            if(lookahead == 'u')
                ADVANCE(389);
            END_STATE();
        case 329:
            if(lookahead == 'o')
                ADVANCE(119);
            END_STATE();
        case 330:
            if(lookahead == 'o')
                ADVANCE(369);
            END_STATE();
        case 331:
            if(lookahead == 'o')
                ADVANCE(298);
            END_STATE();
        case 332:
            if(lookahead == 'o')
                ADVANCE(323);
            END_STATE();
        case 333:
            if(lookahead == 'o')
                ADVANCE(362);
            END_STATE();
        case 334:
            if(lookahead == 'o')
                ADVANCE(311);
            END_STATE();
        case 335:
            if(lookahead == 'o')
                ADVANCE(309);
            END_STATE();
        case 336:
            if(lookahead == 'o')
                ADVANCE(300);
            END_STATE();
        case 337:
            if(lookahead == 'o')
                ADVANCE(301);
            END_STATE();
        case 338:
            if(lookahead == 'o')
                ADVANCE(310);
            END_STATE();
        case 339:
            if(lookahead == 'o')
                ADVANCE(427);
            END_STATE();
        case 340:
            if(lookahead == 'o')
                ADVANCE(312);
            END_STATE();
        case 341:
            if(lookahead == 'o')
                ADVANCE(144);
            END_STATE();
        case 342:
            if(lookahead == 'o')
                ADVANCE(372);
            END_STATE();
        case 343:
            if(lookahead == 'o')
                ADVANCE(376);
            END_STATE();
        case 344:
            if(lookahead == 'o')
                ADVANCE(374);
            END_STATE();
        case 345:
            if(lookahead == 'o')
                ADVANCE(375);
            END_STATE();
        case 346:
            if(lookahead == 'o')
                ADVANCE(146);
            END_STATE();
        case 347:
            if(lookahead == 'o')
                ADVANCE(455);
            END_STATE();
        case 348:
            if(lookahead == 'p')
                ADVANCE(542);
            END_STATE();
        case 349:
            if(lookahead == 'p')
                ADVANCE(172);
            END_STATE();
        case 350:
            if(lookahead == 'p')
                ADVANCE(182);
            END_STATE();
        case 351:
            if(lookahead == 'p')
                ADVANCE(183);
            END_STATE();
        case 352:
            if(lookahead == 'p')
                ADVANCE(186);
            END_STATE();
        case 353:
            if(lookahead == 'p')
                ADVANCE(426);
            END_STATE();
        case 354:
            if(lookahead == 'p')
                ADVANCE(332);
            END_STATE();
        case 355:
            if(lookahead == 'p')
                ADVANCE(342);
            END_STATE();
        case 356:
            if(lookahead == 'p')
                ADVANCE(344);
            END_STATE();
        case 357:
            if(lookahead == 'p')
                ADVANCE(356);
            END_STATE();
        case 358:
            if(lookahead == 'q')
                ADVANCE(448);
            if(lookahead == 't')
                ADVANCE(378);
            END_STATE();
        case 359:
            if(lookahead == 'r')
                ADVANCE(248);
            END_STATE();
        case 360:
            if(lookahead == 'r')
                ADVANCE(524);
            END_STATE();
        case 361:
            if(lookahead == 'r')
                ADVANCE(526);
            END_STATE();
        case 362:
            if(lookahead == 'r')
                ADVANCE(465);
            END_STATE();
        case 363:
            if(lookahead == 'r')
                ADVANCE(240);
            END_STATE();
        case 364:
            if(lookahead == 'r')
                ADVANCE(129);
            END_STATE();
        case 365:
            if(lookahead == 'r')
                ADVANCE(327);
            END_STATE();
        case 366:
            if(lookahead == 'r')
                ADVANCE(125);
            END_STATE();
        case 367:
            if(lookahead == 'r')
                ADVANCE(452);
            END_STATE();
        case 368:
            if(lookahead == 'r')
                ADVANCE(252);
            END_STATE();
        case 369:
            if(lookahead == 'r')
                ADVANCE(404);
            END_STATE();
        case 370:
            if(lookahead == 'r')
                ADVANCE(116);
            END_STATE();
        case 371:
            if(lookahead == 'r')
                ADVANCE(117);
            END_STATE();
        case 372:
            if(lookahead == 'r')
                ADVANCE(407);
            END_STATE();
        case 373:
            if(lookahead == 'r')
                ADVANCE(193);
            END_STATE();
        case 374:
            if(lookahead == 'r')
                ADVANCE(423);
            END_STATE();
        case 375:
            if(lookahead == 'r')
                ADVANCE(413);
            END_STATE();
        case 376:
            if(lookahead == 'r')
                ADVANCE(189);
            END_STATE();
        case 377:
            if(lookahead == 'r')
                ADVANCE(223);
            END_STATE();
        case 378:
            if(lookahead == 'r')
                ADVANCE(131);
            END_STATE();
        case 379:
            if(lookahead == 's')
                ADVANCE(722);
            END_STATE();
        case 380:
            if(lookahead == 's')
                ADVANCE(686);
            END_STATE();
        case 381:
            if(lookahead == 's')
                ADVANCE(266);
            END_STATE();
        case 382:
            if(lookahead == 's')
                ADVANCE(653);
            END_STATE();
        case 383:
            if(lookahead == 's')
                ADVANCE(721);
            END_STATE();
        case 384:
            if(lookahead == 's')
                ADVANCE(691);
            END_STATE();
        case 385:
            if(lookahead == 's')
                ADVANCE(658);
            END_STATE();
        case 386:
            if(lookahead == 's')
                ADVANCE(659);
            END_STATE();
        case 387:
            if(lookahead == 's')
                ADVANCE(703);
            END_STATE();
        case 388:
            if(lookahead == 's')
                ADVANCE(171);
            END_STATE();
        case 389:
            if(lookahead == 's')
                ADVANCE(422);
            END_STATE();
        case 390:
            if(lookahead == 's')
                ADVANCE(400);
            END_STATE();
        case 391:
            if(lookahead == 's')
                ADVANCE(400);
            if(lookahead == 't')
                ADVANCE(191);
            END_STATE();
        case 392:
            if(lookahead == 's')
                ADVANCE(197);
            END_STATE();
        case 393:
            if(lookahead == 's')
                ADVANCE(201);
            END_STATE();
        case 394:
            if(lookahead == 's')
                ADVANCE(202);
            END_STATE();
        case 395:
            if(lookahead == 's')
                ADVANCE(180);
            END_STATE();
        case 396:
            if(lookahead == 's')
                ADVANCE(436);
            END_STATE();
        case 397:
            if(lookahead == 't')
                ADVANCE(220);
            END_STATE();
        case 398:
            if(lookahead == 't')
                ADVANCE(651);
            END_STATE();
        case 399:
            if(lookahead == 't')
                ADVANCE(85);
            END_STATE();
        case 400:
            if(lookahead == 't')
                ADVANCE(684);
            END_STATE();
        case 401:
            if(lookahead == 't')
                ADVANCE(519);
            END_STATE();
        case 402:
            if(lookahead == 't')
                ADVANCE(652);
            END_STATE();
        case 403:
            if(lookahead == 't')
                ADVANCE(506);
            END_STATE();
        case 404:
            if(lookahead == 't')
                ADVANCE(487);
            END_STATE();
        case 405:
            if(lookahead == 't')
                ADVANCE(713);
            END_STATE();
        case 406:
            if(lookahead == 't')
                ADVANCE(660);
            END_STATE();
        case 407:
            if(lookahead == 't')
                ADVANCE(711);
            END_STATE();
        case 408:
            if(lookahead == 't')
                ADVANCE(678);
            END_STATE();
        case 409:
            if(lookahead == 't')
                ADVANCE(717);
            END_STATE();
        case 410:
            if(lookahead == 't')
                ADVANCE(666);
            END_STATE();
        case 411:
            if(lookahead == 't')
                ADVANCE(640);
            END_STATE();
        case 412:
            if(lookahead == 't')
                ADVANCE(720);
            END_STATE();
        case 413:
            if(lookahead == 't')
                ADVANCE(510);
            END_STATE();
        case 414:
            if(lookahead == 't')
                ADVANCE(86);
            END_STATE();
        case 415:
            if(lookahead == 't')
                ADVANCE(296);
            END_STATE();
        case 416:
            if(lookahead == 't')
                ADVANCE(363);
            END_STATE();
        case 417:
            if(lookahead == 't')
                ADVANCE(467);
            END_STATE();
        case 418:
            if(lookahead == 't')
                ADVANCE(142);
            END_STATE();
        case 419:
            if(lookahead == 't')
                ADVANCE(364);
            END_STATE();
        case 420:
            if(lookahead == 't')
                ADVANCE(295);
            END_STATE();
        case 421:
            if(lookahead == 't')
                ADVANCE(245);
            END_STATE();
        case 422:
            if(lookahead == 't')
                ADVANCE(326);
            END_STATE();
        case 423:
            if(lookahead == 't')
                ADVANCE(384);
            END_STATE();
        case 424:
            if(lookahead == 't')
                ADVANCE(206);
            END_STATE();
        case 425:
            if(lookahead == 't')
                ADVANCE(367);
            if(lookahead == 'u')
                ADVANCE(357);
            END_STATE();
        case 426:
            if(lookahead == 't')
                ADVANCE(262);
            END_STATE();
        case 427:
            if(lookahead == 't')
                ADVANCE(130);
            END_STATE();
        case 428:
            if(lookahead == 't')
                ADVANCE(132);
            END_STATE();
        case 429:
            if(lookahead == 't')
                ADVANCE(417);
            END_STATE();
        case 430:
            if(lookahead == 't')
                ADVANCE(177);
            END_STATE();
        case 431:
            if(lookahead == 't')
                ADVANCE(181);
            END_STATE();
        case 432:
            if(lookahead == 't')
                ADVANCE(205);
            END_STATE();
        case 433:
            if(lookahead == 't')
                ADVANCE(213);
            END_STATE();
        case 434:
            if(lookahead == 't')
                ADVANCE(368);
            END_STATE();
        case 435:
            if(lookahead == 't')
                ADVANCE(333);
            END_STATE();
        case 436:
            if(lookahead == 't')
                ADVANCE(366);
            END_STATE();
        case 437:
            if(lookahead == 't')
                ADVANCE(468);
            END_STATE();
        case 438:
            if(lookahead == 't')
                ADVANCE(263);
            END_STATE();
        case 439:
            if(lookahead == 't')
                ADVANCE(214);
            END_STATE();
        case 440:
            if(lookahead == 't')
                ADVANCE(378);
            END_STATE();
        case 441:
            if(lookahead == 't')
                ADVANCE(103);
            END_STATE();
        case 442:
            if(lookahead == 'u')
                ADVANCE(289);
            END_STATE();
        case 443:
            if(lookahead == 'u')
                ADVANCE(306);
            END_STATE();
        case 444:
            if(lookahead == 'u')
                ADVANCE(277);
            END_STATE();
        case 445:
            if(lookahead == 'u')
                ADVANCE(398);
            END_STATE();
        case 446:
            if(lookahead == 'u')
                ADVANCE(173);
            END_STATE();
        case 447:
            if(lookahead == 'u')
                ADVANCE(402);
            END_STATE();
        case 448:
            if(lookahead == 'u')
                ADVANCE(200);
            END_STATE();
        case 449:
            if(lookahead == 'u')
                ADVANCE(138);
            END_STATE();
        case 450:
            if(lookahead == 'u')
                ADVANCE(279);
            END_STATE();
        case 451:
            if(lookahead == 'u')
                ADVANCE(276);
            END_STATE();
        case 452:
            if(lookahead == 'u')
                ADVANCE(150);
            END_STATE();
        case 453:
            if(lookahead == 'u')
                ADVANCE(431);
            END_STATE();
        case 454:
            if(lookahead == 'u')
                ADVANCE(215);
            END_STATE();
        case 455:
            if(lookahead == 'u')
                ADVANCE(139);
            END_STATE();
        case 456:
            if(lookahead == 'v')
                ADVANCE(250);
            END_STATE();
        case 457:
            if(lookahead == 'v')
                ADVANCE(122);
            END_STATE();
        case 458:
            if(lookahead == 'v')
                ADVANCE(176);
            END_STATE();
        case 459:
            if(lookahead == 'w')
                ADVANCE(106);
            END_STATE();
        case 460:
            if(lookahead == 'x')
                ADVANCE(710);
            END_STATE();
        case 461:
            if(lookahead == 'x')
                ADVANCE(194);
            END_STATE();
        case 462:
            if(lookahead == 'x')
                ADVANCE(409);
            END_STATE();
        case 463:
            if(lookahead == 'y')
                ADVANCE(537);
            END_STATE();
        case 464:
            if(lookahead == 'y')
                ADVANCE(715);
            END_STATE();
        case 465:
            if(lookahead == 'y')
                ADVANCE(696);
            END_STATE();
        case 466:
            if(lookahead == 'y')
                ADVANCE(654);
            END_STATE();
        case 467:
            if(lookahead == 'y')
                ADVANCE(350);
            END_STATE();
        case 468:
            if(lookahead == 'y')
                ADVANCE(351);
            END_STATE();
        case 469:
            if(lookahead == 'y')
                ADVANCE(352);
            END_STATE();
        case 470:
            if(lookahead == '\t' ||
               lookahead == ' ')
                ADVANCE(470);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(628);
            END_STATE();
        case 471:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(604);
            END_STATE();
        case 472:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(592);
            END_STATE();
        case 473:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(598);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(612);
            END_STATE();
        case 474:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(606);
            END_STATE();
        case 475:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(612);
            END_STATE();
        case 476:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(594);
            END_STATE();
        case 477:
            if(lookahead != 0 &&
               lookahead != '*')
                ADVANCE(633);
            END_STATE();
        case 478:
            if(eof)
                ADVANCE(486);
            if(lookahead == '\n')
                SKIP(0);
            END_STATE();
        case 479:
            if(eof)
                ADVANCE(486);
            if(lookahead == '\n')
                SKIP(0);
            if(lookahead == '\r')
                SKIP(478);
            END_STATE();
        case 480:
            if(eof)
                ADVANCE(486);
            if(lookahead == '\n')
                SKIP(484);
            END_STATE();
        case 481:
            if(eof)
                ADVANCE(486);
            if(lookahead == '\n')
                SKIP(484);
            if(lookahead == '\r')
                SKIP(480);
            END_STATE();
        case 482:
            if(eof)
                ADVANCE(486);
            if(lookahead == '\n')
                SKIP(485);
            END_STATE();
        case 483:
            if(eof)
                ADVANCE(486);
            if(lookahead == '\n')
                SKIP(485);
            if(lookahead == '\r')
                SKIP(482);
            END_STATE();
        case 484:
            if(eof)
                ADVANCE(486);
            ADVANCE_MAP(
                '"', 561,
                '#', 155,
                '$', 546,
                '%', 555,
                ')', 557,
                '*', 553,
                '+', 549,
                ',', 539,
                '-', 551,
                '/', 554,
                ':', 645,
                ';', 646,
                '<', 94,
                '=', 670,
                '>', 536,
                '@', 669,
                'L', 559,
                '[', 700,
            );
            if(lookahead == '\\')
                SKIP(481);
            if(lookahead == ']')
                ADVANCE(701);
            if(lookahead == '^')
                ADVANCE(545);
            if(lookahead == 'a')
                ADVANCE(135);
            if(lookahead == 'b')
                ADVANCE(239);
            if(lookahead == 'c')
                ADVANCE(104);
            if(lookahead == 'd')
                ADVANCE(169);
            if(lookahead == 'e')
                ADVANCE(303);
            if(lookahead == 'g')
                ADVANCE(208);
            if(lookahead == 'i')
                ADVANCE(287);
            if(lookahead == 'l')
                ADVANCE(346);
            if(lookahead == 'm')
                ADVANCE(324);
            if(lookahead == 'n')
                ADVANCE(108);
            if(lookahead == 'o')
                ADVANCE(143);
            if(lookahead == 'p')
                ADVANCE(365);
            if(lookahead == 'r')
                ADVANCE(105);
            if(lookahead == 's')
                ADVANCE(217);
            if(lookahead == 't')
                ADVANCE(469);
            if(lookahead == 'u')
                ADVANCE(238);
            if(lookahead == 'v')
                ADVANCE(128);
            if(lookahead == '{')
                ADVANCE(637);
            if(lookahead == '|')
                ADVANCE(544);
            if(lookahead == '}')
                ADVANCE(638);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(484);
            END_STATE();
        case 485:
            if(eof)
                ADVANCE(486);
            ADVANCE_MAP(
                '#', 166,
                '$', 546,
                '%', 555,
                ')', 557,
                '*', 553,
                '+', 549,
                ',', 539,
                '-', 551,
                '/', 554,
                ':', 644,
                ';', 646,
                '<', 94,
                '>', 536,
                '@', 669,
            );
            if(lookahead == '\\')
                SKIP(483);
            if(lookahead == ']')
                ADVANCE(701);
            if(lookahead == '^')
                ADVANCE(545);
            if(lookahead == 'a')
                ADVANCE(134);
            if(lookahead == 'b')
                ADVANCE(254);
            if(lookahead == 'c')
                ADVANCE(328);
            if(lookahead == 'e')
                ADVANCE(303);
            if(lookahead == 'i')
                ADVANCE(288);
            if(lookahead == 'l')
                ADVANCE(341);
            if(lookahead == 'm')
                ADVANCE(324);
            if(lookahead == 'n')
                ADVANCE(108);
            if(lookahead == 's')
                ADVANCE(425);
            if(lookahead == 't')
                ADVANCE(469);
            if(lookahead == 'u')
                ADVANCE(319);
            if(lookahead == 'v')
                ADVANCE(127);
            if(lookahead == '{')
                ADVANCE(637);
            if(lookahead == '|')
                ADVANCE(544);
            if(lookahead == '}')
                ADVANCE(638);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(485);
            END_STATE();
        case 486:
            ACCEPT_TOKEN(ts_builtin_sym_end);
            END_STATE();
        case 487:
            ACCEPT_TOKEN(anon_sym_short);
            END_STATE();
        case 488:
            ACCEPT_TOKEN(anon_sym_short);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 489:
            ACCEPT_TOKEN(anon_sym_int16);
            END_STATE();
        case 490:
            ACCEPT_TOKEN(anon_sym_int16);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 491:
            ACCEPT_TOKEN(anon_sym_long);
            if(lookahead == ' ')
                ADVANCE(162);
            END_STATE();
        case 492:
            ACCEPT_TOKEN(anon_sym_long);
            if(lookahead == ' ')
                ADVANCE(162);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 493:
            ACCEPT_TOKEN(anon_sym_long);
            if(lookahead == ' ')
                ADVANCE(283);
            END_STATE();
        case 494:
            ACCEPT_TOKEN(anon_sym_long);
            if(lookahead == ' ')
                ADVANCE(283);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 495:
            ACCEPT_TOKEN(anon_sym_int32);
            END_STATE();
        case 496:
            ACCEPT_TOKEN(anon_sym_int32);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 497:
            ACCEPT_TOKEN(anon_sym_longlong);
            END_STATE();
        case 498:
            ACCEPT_TOKEN(anon_sym_int64);
            END_STATE();
        case 499:
            ACCEPT_TOKEN(anon_sym_int64);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 500:
            ACCEPT_TOKEN(sym_unsigned_tiny_int);
            END_STATE();
        case 501:
            ACCEPT_TOKEN(sym_unsigned_tiny_int);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 502:
            ACCEPT_TOKEN(sym_boolean_type);
            END_STATE();
        case 503:
            ACCEPT_TOKEN(sym_boolean_type);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 504:
            ACCEPT_TOKEN(anon_sym_fixed);
            END_STATE();
        case 505:
            ACCEPT_TOKEN(anon_sym_fixed);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 506:
            ACCEPT_TOKEN(sym_octet_type);
            END_STATE();
        case 507:
            ACCEPT_TOKEN(sym_octet_type);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 508:
            ACCEPT_TOKEN(sym_signed_tiny_int);
            END_STATE();
        case 509:
            ACCEPT_TOKEN(sym_signed_tiny_int);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 510:
            ACCEPT_TOKEN(anon_sym_unsignedshort);
            END_STATE();
        case 511:
            ACCEPT_TOKEN(anon_sym_uint16);
            END_STATE();
        case 512:
            ACCEPT_TOKEN(anon_sym_uint16);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 513:
            ACCEPT_TOKEN(anon_sym_unsignedlong);
            if(lookahead == ' ')
                ADVANCE(285);
            END_STATE();
        case 514:
            ACCEPT_TOKEN(anon_sym_uint32);
            END_STATE();
        case 515:
            ACCEPT_TOKEN(anon_sym_uint32);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 516:
            ACCEPT_TOKEN(anon_sym_unsignedlonglong);
            END_STATE();
        case 517:
            ACCEPT_TOKEN(anon_sym_uint64);
            END_STATE();
        case 518:
            ACCEPT_TOKEN(anon_sym_uint64);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 519:
            ACCEPT_TOKEN(anon_sym_float);
            END_STATE();
        case 520:
            ACCEPT_TOKEN(anon_sym_float);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 521:
            ACCEPT_TOKEN(anon_sym_double);
            END_STATE();
        case 522:
            ACCEPT_TOKEN(anon_sym_double);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 523:
            ACCEPT_TOKEN(anon_sym_longdouble);
            END_STATE();
        case 524:
            ACCEPT_TOKEN(anon_sym_char);
            END_STATE();
        case 525:
            ACCEPT_TOKEN(anon_sym_char);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 526:
            ACCEPT_TOKEN(anon_sym_wchar);
            END_STATE();
        case 527:
            ACCEPT_TOKEN(anon_sym_wchar);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 528:
            ACCEPT_TOKEN(anon_sym_COLON_COLON);
            END_STATE();
        case 529:
            ACCEPT_TOKEN(anon_sym_string);
            END_STATE();
        case 530:
            ACCEPT_TOKEN(anon_sym_string);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 531:
            ACCEPT_TOKEN(anon_sym_wstring);
            END_STATE();
        case 532:
            ACCEPT_TOKEN(anon_sym_wstring);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 533:
            ACCEPT_TOKEN(anon_sym_LT);
            END_STATE();
        case 534:
            ACCEPT_TOKEN(anon_sym_LT);
            if(lookahead == '<')
                ADVANCE(548);
            END_STATE();
        case 535:
            ACCEPT_TOKEN(anon_sym_GT);
            END_STATE();
        case 536:
            ACCEPT_TOKEN(anon_sym_GT);
            if(lookahead == '>')
                ADVANCE(547);
            END_STATE();
        case 537:
            ACCEPT_TOKEN(anon_sym_any);
            END_STATE();
        case 538:
            ACCEPT_TOKEN(anon_sym_any);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 539:
            ACCEPT_TOKEN(anon_sym_COMMA);
            END_STATE();
        case 540:
            ACCEPT_TOKEN(anon_sym_sequence);
            END_STATE();
        case 541:
            ACCEPT_TOKEN(anon_sym_sequence);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 542:
            ACCEPT_TOKEN(anon_sym_map);
            END_STATE();
        case 543:
            ACCEPT_TOKEN(anon_sym_map);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 544:
            ACCEPT_TOKEN(anon_sym_PIPE);
            END_STATE();
        case 545:
            ACCEPT_TOKEN(anon_sym_CARET);
            END_STATE();
        case 546:
            ACCEPT_TOKEN(anon_sym_DOLLAR);
            END_STATE();
        case 547:
            ACCEPT_TOKEN(anon_sym_GT_GT);
            END_STATE();
        case 548:
            ACCEPT_TOKEN(anon_sym_LT_LT);
            END_STATE();
        case 549:
            ACCEPT_TOKEN(anon_sym_PLUS);
            END_STATE();
        case 550:
            ACCEPT_TOKEN(anon_sym_PLUS);
            if(lookahead == '.')
                ADVANCE(472);
            if(lookahead == '0')
                ADVANCE(600);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(604);
            END_STATE();
        case 551:
            ACCEPT_TOKEN(anon_sym_DASH);
            END_STATE();
        case 552:
            ACCEPT_TOKEN(anon_sym_DASH);
            if(lookahead == '.')
                ADVANCE(472);
            if(lookahead == '0')
                ADVANCE(600);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(604);
            END_STATE();
        case 553:
            ACCEPT_TOKEN(anon_sym_STAR);
            END_STATE();
        case 554:
            ACCEPT_TOKEN(anon_sym_SLASH);
            if(lookahead == '*')
                ADVANCE(1007);
            if(lookahead == '/')
                ADVANCE(996);
            END_STATE();
        case 555:
            ACCEPT_TOKEN(anon_sym_PERCENT);
            END_STATE();
        case 556:
            ACCEPT_TOKEN(anon_sym_LPAREN);
            END_STATE();
        case 557:
            ACCEPT_TOKEN(anon_sym_RPAREN);
            END_STATE();
        case 558:
            ACCEPT_TOKEN(anon_sym_TILDE);
            END_STATE();
        case 559:
            ACCEPT_TOKEN(anon_sym_L);
            END_STATE();
        case 560:
            ACCEPT_TOKEN(anon_sym_L);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 561:
            ACCEPT_TOKEN(anon_sym_DQUOTE);
            END_STATE();
        case 562:
            ACCEPT_TOKEN(aux_sym_string_literal_token1);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(562);
            END_STATE();
        case 563:
            ACCEPT_TOKEN(anon_sym_SQUOTE);
            END_STATE();
        case 564:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            END_STATE();
        case 565:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'A')
                ADVANCE(98);
            END_STATE();
        case 566:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'R')
                ADVANCE(100);
            END_STATE();
        case 567:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(270);
            END_STATE();
        case 568:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(388);
            if(lookahead == 'h')
                ADVANCE(109);
            if(lookahead == 'o')
                ADVANCE(293);
            if(lookahead == 'u')
                ADVANCE(389);
            END_STATE();
        case 569:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(256);
            if(lookahead == 'e')
                ADVANCE(107);
            END_STATE();
        case 570:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(148);
            if(lookahead == 'i')
                ADVANCE(461);
            if(lookahead == 'l')
                ADVANCE(329);
            END_STATE();
        case 571:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(348);
            if(lookahead == 'o')
                ADVANCE(161);
            END_STATE();
        case 572:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(421);
            END_STATE();
        case 573:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(281);
            if(lookahead == 'o')
                ADVANCE(244);
            END_STATE();
        case 574:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'b')
                ADVANCE(265);
            END_STATE();
        case 575:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'b')
                ADVANCE(396);
            if(lookahead == 'l')
                ADVANCE(242);
            if(lookahead == 'n')
                ADVANCE(463);
            if(lookahead == 't')
                ADVANCE(416);
            END_STATE();
        case 576:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'c')
                ADVANCE(235);
            if(lookahead == 's')
                ADVANCE(434);
            END_STATE();
        case 577:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'c')
                ADVANCE(424);
            if(lookahead == 'n')
                ADVANCE(170);
            if(lookahead == 'u')
                ADVANCE(398);
            END_STATE();
        case 578:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'e')
                ADVANCE(219);
            if(lookahead == 'o')
                ADVANCE(449);
            END_STATE();
        case 579:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'e')
                ADVANCE(358);
            if(lookahead == 'h')
                ADVANCE(330);
            if(lookahead == 't')
                ADVANCE(359);
            if(lookahead == 'u')
                ADVANCE(357);
            if(lookahead == 'w')
                ADVANCE(251);
            END_STATE();
        case 580:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'e')
                ADVANCE(419);
            END_STATE();
        case 581:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'i')
                ADVANCE(313);
            if(lookahead == 'n')
                ADVANCE(247);
            if(lookahead == 's')
                ADVANCE(192);
            END_STATE();
        case 582:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'i')
                ADVANCE(397);
            if(lookahead == 'o')
                ADVANCE(325);
            END_STATE();
        case 583:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'm')
                ADVANCE(355);
            if(lookahead == 'n')
                ADVANCE(650);
            END_STATE();
        case 584:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'n')
                ADVANCE(442);
            if(lookahead == 'v')
                ADVANCE(209);
            if(lookahead == 'x')
                ADVANCE(147);
            END_STATE();
        case 585:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'o')
                ADVANCE(145);
            END_STATE();
        case 586:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'r')
                ADVANCE(237);
            if(lookahead == 'u')
                ADVANCE(136);
            END_STATE();
        case 587:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'r')
                ADVANCE(443);
            if(lookahead == 'y')
                ADVANCE(349);
            END_STATE();
        case 588:
            ACCEPT_TOKEN(anon_sym_TRUE);
            END_STATE();
        case 589:
            ACCEPT_TOKEN(anon_sym_TRUE);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 590:
            ACCEPT_TOKEN(anon_sym_FALSE);
            END_STATE();
        case 591:
            ACCEPT_TOKEN(anon_sym_FALSE);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 592:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(472);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(616);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(592);
            if(set_contains(sym_number_literal_character_set_13, 13, lookahead))
                ADVANCE(621);
            END_STATE();
        case 593:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 476,
                'B', 593,
                'D', 593,
                'F', 593,
                'b', 593,
                'd', 593,
                'f', 593,
                'L', 620,
                'U', 620,
                'W', 620,
                'l', 620,
                'u', 620,
                'w', 620,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(593);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 594:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 476,
                'B', 594,
                'D', 594,
                'F', 594,
                'b', 594,
                'd', 594,
                'f', 594,
                'L', 621,
                'U', 621,
                'W', 621,
                'l', 621,
                'u', 621,
                'w', 621,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(594);
            END_STATE();
        case 595:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 473,
                '.', 617,
                'B', 609,
                'b', 609,
                'E', 607,
                'e', 607,
                'P', 615,
                'p', 615,
                'X', 994,
                'x', 994,
                'A', 610,
                'C', 610,
                'a', 610,
                'c', 610,
                'D', 610,
                'F', 610,
                'd', 610,
                'f', 610,
                'L', 620,
                'U', 620,
                'W', 620,
                'l', 620,
                'u', 620,
                'w', 620,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(597);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 596:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 473,
                '.', 617,
                'B', 611,
                'b', 611,
                'E', 608,
                'e', 608,
                'P', 616,
                'p', 616,
                'X', 475,
                'x', 475,
                'A', 612,
                'C', 612,
                'a', 612,
                'c', 612,
                'D', 612,
                'F', 612,
                'd', 612,
                'f', 612,
                'L', 621,
                'U', 621,
                'W', 621,
                'l', 621,
                'u', 621,
                'w', 621,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(598);
            END_STATE();
        case 597:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 473,
                '.', 617,
                'E', 607,
                'e', 607,
                'P', 615,
                'p', 615,
                'A', 610,
                'C', 610,
                'a', 610,
                'c', 610,
                'B', 610,
                'D', 610,
                'F', 610,
                'b', 610,
                'd', 610,
                'f', 610,
                'L', 620,
                'U', 620,
                'W', 620,
                'l', 620,
                'u', 620,
                'w', 620,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(597);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 598:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 473,
                '.', 617,
                'E', 608,
                'e', 608,
                'P', 616,
                'p', 616,
                'A', 612,
                'C', 612,
                'a', 612,
                'c', 612,
                'B', 612,
                'D', 612,
                'F', 612,
                'b', 612,
                'd', 612,
                'f', 612,
                'L', 621,
                'U', 621,
                'W', 621,
                'l', 621,
                'u', 621,
                'w', 621,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(598);
            END_STATE();
        case 599:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 471,
                '.', 617,
                'B', 613,
                'b', 613,
                'X', 732,
                'x', 732,
                'E', 615,
                'P', 615,
                'e', 615,
                'p', 615,
                'D', 620,
                'F', 620,
                'L', 620,
                'U', 620,
                'W', 620,
                'd', 620,
                'f', 620,
                'l', 620,
                'u', 620,
                'w', 620,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(603);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 600:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 471,
                '.', 617,
                'B', 614,
                'b', 614,
                'X', 70,
                'x', 70,
                'E', 616,
                'P', 616,
                'e', 616,
                'p', 616,
                'D', 621,
                'F', 621,
                'L', 621,
                'U', 621,
                'W', 621,
                'd', 621,
                'f', 621,
                'l', 621,
                'u', 621,
                'w', 621,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(604);
            END_STATE();
        case 601:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 471,
                '.', 617,
                'B', 618,
                'b', 618,
                'X', 994,
                'x', 994,
                'E', 615,
                'P', 615,
                'e', 615,
                'p', 615,
                'D', 620,
                'F', 620,
                'L', 620,
                'U', 620,
                'W', 620,
                'd', 620,
                'f', 620,
                'l', 620,
                'u', 620,
                'w', 620,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(603);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 602:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 471,
                '.', 617,
                'B', 619,
                'b', 619,
                'X', 475,
                'x', 475,
                'E', 616,
                'P', 616,
                'e', 616,
                'p', 616,
                'D', 621,
                'F', 621,
                'L', 621,
                'U', 621,
                'W', 621,
                'd', 621,
                'f', 621,
                'l', 621,
                'u', 621,
                'w', 621,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(604);
            END_STATE();
        case 603:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(471);
            if(lookahead == '.')
                ADVANCE(617);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(615);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(603);
            if(set_contains(sym_number_literal_character_set_13, 13, lookahead))
                ADVANCE(620);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 604:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(471);
            if(lookahead == '.')
                ADVANCE(617);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(616);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(604);
            if(set_contains(sym_number_literal_character_set_13, 13, lookahead))
                ADVANCE(621);
            END_STATE();
        case 605:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 474,
                '+', 476,
                '-', 476,
                'E', 605,
                'e', 605,
                'P', 616,
                'p', 616,
                'B', 606,
                'D', 606,
                'F', 606,
                'b', 606,
                'd', 606,
                'f', 606,
                'L', 621,
                'U', 621,
                'W', 621,
                'l', 621,
                'u', 621,
                'w', 621,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(606);
            END_STATE();
        case 606:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 474,
                'E', 605,
                'e', 605,
                'P', 616,
                'p', 616,
                'B', 606,
                'D', 606,
                'F', 606,
                'b', 606,
                'd', 606,
                'f', 606,
                'L', 621,
                'U', 621,
                'W', 621,
                'l', 621,
                'u', 621,
                'w', 621,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(606);
            END_STATE();
        case 607:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 475,
                '.', 617,
                '+', 476,
                '-', 476,
                'E', 607,
                'e', 607,
                'P', 615,
                'p', 615,
                'B', 610,
                'D', 610,
                'F', 610,
                'b', 610,
                'd', 610,
                'f', 610,
                'L', 620,
                'U', 620,
                'W', 620,
                'l', 620,
                'u', 620,
                'w', 620,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(610);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 608:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 475,
                '.', 617,
                '+', 476,
                '-', 476,
                'E', 608,
                'e', 608,
                'P', 616,
                'p', 616,
                'B', 612,
                'D', 612,
                'F', 612,
                'b', 612,
                'd', 612,
                'f', 612,
                'L', 621,
                'U', 621,
                'W', 621,
                'l', 621,
                'u', 621,
                'w', 621,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(612);
            END_STATE();
        case 609:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 475,
                '.', 617,
                'E', 607,
                'e', 607,
                'P', 615,
                'p', 615,
                'A', 610,
                'C', 610,
                'a', 610,
                'c', 610,
                'B', 610,
                'D', 610,
                'F', 610,
                'b', 610,
                'd', 610,
                'f', 610,
                'L', 620,
                'U', 620,
                'W', 620,
                'l', 620,
                'u', 620,
                'w', 620,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(597);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 610:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 475,
                '.', 617,
                'E', 607,
                'e', 607,
                'P', 615,
                'p', 615,
                'B', 610,
                'D', 610,
                'F', 610,
                'b', 610,
                'd', 610,
                'f', 610,
                'L', 620,
                'U', 620,
                'W', 620,
                'l', 620,
                'u', 620,
                'w', 620,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(610);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 611:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 475,
                '.', 617,
                'E', 608,
                'e', 608,
                'P', 616,
                'p', 616,
                'A', 612,
                'C', 612,
                'a', 612,
                'c', 612,
                'B', 612,
                'D', 612,
                'F', 612,
                'b', 612,
                'd', 612,
                'f', 612,
                'L', 621,
                'U', 621,
                'W', 621,
                'l', 621,
                'u', 621,
                'w', 621,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(598);
            END_STATE();
        case 612:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 475,
                '.', 617,
                'E', 608,
                'e', 608,
                'P', 616,
                'p', 616,
                'B', 612,
                'D', 612,
                'F', 612,
                'b', 612,
                'd', 612,
                'f', 612,
                'L', 621,
                'U', 621,
                'W', 621,
                'l', 621,
                'u', 621,
                'w', 621,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(612);
            END_STATE();
        case 613:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '.')
                ADVANCE(472);
            if(lookahead == '0')
                ADVANCE(601);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(603);
            if(set_contains(sym_number_literal_character_set_13, 13, lookahead))
                ADVANCE(620);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 614:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '.')
                ADVANCE(472);
            if(lookahead == '0')
                ADVANCE(602);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(604);
            if(set_contains(sym_number_literal_character_set_13, 13, lookahead))
                ADVANCE(621);
            END_STATE();
        case 615:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '+', 476,
                '-', 476,
                'B', 593,
                'D', 593,
                'F', 593,
                'b', 593,
                'd', 593,
                'f', 593,
                'L', 620,
                'U', 620,
                'W', 620,
                'l', 620,
                'u', 620,
                'w', 620,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(593);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 616:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '+', 476,
                '-', 476,
                'B', 594,
                'D', 594,
                'F', 594,
                'b', 594,
                'd', 594,
                'f', 594,
                'L', 621,
                'U', 621,
                'W', 621,
                'l', 621,
                'u', 621,
                'w', 621,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(594);
            END_STATE();
        case 617:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                'E', 605,
                'e', 605,
                'P', 616,
                'p', 616,
                'B', 606,
                'D', 606,
                'F', 606,
                'b', 606,
                'd', 606,
                'f', 606,
                'L', 621,
                'U', 621,
                'W', 621,
                'l', 621,
                'u', 621,
                'w', 621,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(606);
            END_STATE();
        case 618:
            ACCEPT_TOKEN(sym_number_literal);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(603);
            if(set_contains(sym_number_literal_character_set_13, 13, lookahead))
                ADVANCE(620);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 619:
            ACCEPT_TOKEN(sym_number_literal);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(604);
            if(set_contains(sym_number_literal_character_set_13, 13, lookahead))
                ADVANCE(621);
            END_STATE();
        case 620:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                'B', 620,
                'D', 620,
                'F', 620,
                'L', 620,
                'U', 620,
                'W', 620,
                'b', 620,
                'd', 620,
                'f', 620,
                'l', 620,
                'u', 620,
                'w', 620,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 621:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                'B', 621,
                'D', 621,
                'F', 621,
                'L', 621,
                'U', 621,
                'W', 621,
                'b', 621,
                'd', 621,
                'f', 621,
                'l', 621,
                'u', 621,
                'w', 621,
            );
            END_STATE();
        case 622:
            ACCEPT_TOKEN(aux_sym_preproc_call_token1);
            END_STATE();
        case 623:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'e')
                ADVANCE(625);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(628);
            END_STATE();
        case 624:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'e')
                ADVANCE(726);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(628);
            END_STATE();
        case 625:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'f')
                ADVANCE(626);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(628);
            END_STATE();
        case 626:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'i')
                ADVANCE(627);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(628);
            END_STATE();
        case 627:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'n')
                ADVANCE(624);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(628);
            END_STATE();
        case 628:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(628);
            END_STATE();
        case 629:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '\n')
                SKIP(84);
            if(lookahead == '\r')
                ADVANCE(630);
            if(lookahead == '/')
                ADVANCE(477);
            if(lookahead == '\\')
                ADVANCE(631);
            if(lookahead != 0)
                ADVANCE(633);
            END_STATE();
        case 630:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '\n')
                SKIP(84);
            if(lookahead == '/')
                ADVANCE(477);
            if(lookahead == '\\')
                ADVANCE(631);
            if(lookahead != 0)
                ADVANCE(633);
            END_STATE();
        case 631:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '\r')
                ADVANCE(634);
            if(lookahead == '/')
                ADVANCE(477);
            if(lookahead == '\\')
                ADVANCE(631);
            if(lookahead != 0)
                ADVANCE(633);
            END_STATE();
        case 632:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '*')
                ADVANCE(1007);
            if(lookahead == '/')
                ADVANCE(996);
            if(lookahead == '\\')
                ADVANCE(631);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(633);
            END_STATE();
        case 633:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(477);
            if(lookahead == '\\')
                ADVANCE(631);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(633);
            END_STATE();
        case 634:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(477);
            if(lookahead == '\\')
                ADVANCE(631);
            if(lookahead != 0)
                ADVANCE(633);
            END_STATE();
        case 635:
            ACCEPT_TOKEN(anon_sym_exception);
            END_STATE();
        case 636:
            ACCEPT_TOKEN(anon_sym_exception);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 637:
            ACCEPT_TOKEN(anon_sym_LBRACE);
            END_STATE();
        case 638:
            ACCEPT_TOKEN(anon_sym_RBRACE);
            END_STATE();
        case 639:
            ACCEPT_TOKEN(anon_sym_local);
            END_STATE();
        case 640:
            ACCEPT_TOKEN(anon_sym_abstract);
            END_STATE();
        case 641:
            ACCEPT_TOKEN(anon_sym_abstract);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 642:
            ACCEPT_TOKEN(anon_sym_interface);
            END_STATE();
        case 643:
            ACCEPT_TOKEN(anon_sym_interface);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 644:
            ACCEPT_TOKEN(anon_sym_COLON);
            END_STATE();
        case 645:
            ACCEPT_TOKEN(anon_sym_COLON);
            if(lookahead == ':')
                ADVANCE(528);
            END_STATE();
        case 646:
            ACCEPT_TOKEN(anon_sym_SEMI);
            END_STATE();
        case 647:
            ACCEPT_TOKEN(anon_sym_void);
            END_STATE();
        case 648:
            ACCEPT_TOKEN(anon_sym_void);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 649:
            ACCEPT_TOKEN(anon_sym_in);
            END_STATE();
        case 650:
            ACCEPT_TOKEN(anon_sym_in);
            if(lookahead == 'o')
                ADVANCE(447);
            END_STATE();
        case 651:
            ACCEPT_TOKEN(anon_sym_out);
            END_STATE();
        case 652:
            ACCEPT_TOKEN(anon_sym_inout);
            END_STATE();
        case 653:
            ACCEPT_TOKEN(anon_sym_raises);
            END_STATE();
        case 654:
            ACCEPT_TOKEN(anon_sym_readonly);
            END_STATE();
        case 655:
            ACCEPT_TOKEN(anon_sym_readonly);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 656:
            ACCEPT_TOKEN(anon_sym_attribute);
            END_STATE();
        case 657:
            ACCEPT_TOKEN(anon_sym_attribute);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 658:
            ACCEPT_TOKEN(anon_sym_getraises);
            END_STATE();
        case 659:
            ACCEPT_TOKEN(anon_sym_setraises);
            END_STATE();
        case 660:
            ACCEPT_TOKEN(anon_sym_bitset);
            END_STATE();
        case 661:
            ACCEPT_TOKEN(anon_sym_bitset);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 662:
            ACCEPT_TOKEN(anon_sym_bitfield);
            END_STATE();
        case 663:
            ACCEPT_TOKEN(anon_sym_bitmask);
            END_STATE();
        case 664:
            ACCEPT_TOKEN(anon_sym_bitmask);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 665:
            ACCEPT_TOKEN(anon_sym_ATannotation);
            END_STATE();
        case 666:
            ACCEPT_TOKEN(anon_sym_default);
            END_STATE();
        case 667:
            ACCEPT_TOKEN(anon_sym_default);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 668:
            ACCEPT_TOKEN(anon_sym_AT);
            END_STATE();
        case 669:
            ACCEPT_TOKEN(anon_sym_AT);
            if(lookahead == 'a')
                ADVANCE(304);
            END_STATE();
        case 670:
            ACCEPT_TOKEN(anon_sym_EQ);
            END_STATE();
        case 671:
            ACCEPT_TOKEN(anon_sym_module);
            END_STATE();
        case 672:
            ACCEPT_TOKEN(anon_sym_typename);
            END_STATE();
        case 673:
            ACCEPT_TOKEN(anon_sym_typename);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 674:
            ACCEPT_TOKEN(anon_sym_valuetype);
            END_STATE();
        case 675:
            ACCEPT_TOKEN(anon_sym_valuetype);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 676:
            ACCEPT_TOKEN(anon_sym_eventtype);
            END_STATE();
        case 677:
            ACCEPT_TOKEN(anon_sym_eventtype);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 678:
            ACCEPT_TOKEN(anon_sym_struct);
            END_STATE();
        case 679:
            ACCEPT_TOKEN(anon_sym_struct);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 680:
            ACCEPT_TOKEN(anon_sym_union);
            END_STATE();
        case 681:
            ACCEPT_TOKEN(anon_sym_union);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 682:
            ACCEPT_TOKEN(anon_sym_enum);
            END_STATE();
        case 683:
            ACCEPT_TOKEN(anon_sym_enum);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 684:
            ACCEPT_TOKEN(anon_sym_const);
            END_STATE();
        case 685:
            ACCEPT_TOKEN(anon_sym_const);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 686:
            ACCEPT_TOKEN(anon_sym_alias);
            END_STATE();
        case 687:
            ACCEPT_TOKEN(anon_sym_custom);
            END_STATE();
        case 688:
            ACCEPT_TOKEN(anon_sym_custom);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 689:
            ACCEPT_TOKEN(anon_sym_truncatable);
            END_STATE();
        case 690:
            ACCEPT_TOKEN(anon_sym_truncatable);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 691:
            ACCEPT_TOKEN(anon_sym_supports);
            END_STATE();
        case 692:
            ACCEPT_TOKEN(anon_sym_public);
            END_STATE();
        case 693:
            ACCEPT_TOKEN(anon_sym_public);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 694:
            ACCEPT_TOKEN(anon_sym_private);
            END_STATE();
        case 695:
            ACCEPT_TOKEN(anon_sym_private);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 696:
            ACCEPT_TOKEN(anon_sym_factory);
            END_STATE();
        case 697:
            ACCEPT_TOKEN(anon_sym_factory);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 698:
            ACCEPT_TOKEN(anon_sym_typedef);
            END_STATE();
        case 699:
            ACCEPT_TOKEN(anon_sym_typedef);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 700:
            ACCEPT_TOKEN(anon_sym_LBRACK);
            END_STATE();
        case 701:
            ACCEPT_TOKEN(anon_sym_RBRACK);
            END_STATE();
        case 702:
            ACCEPT_TOKEN(anon_sym_ATdefault_literal);
            END_STATE();
        case 703:
            ACCEPT_TOKEN(anon_sym_ATignore_literal_names);
            END_STATE();
        case 704:
            ACCEPT_TOKEN(anon_sym_switch);
            END_STATE();
        case 705:
            ACCEPT_TOKEN(anon_sym_switch);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 706:
            ACCEPT_TOKEN(anon_sym_case);
            END_STATE();
        case 707:
            ACCEPT_TOKEN(anon_sym_case);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 708:
            ACCEPT_TOKEN(anon_sym_typeid);
            END_STATE();
        case 709:
            ACCEPT_TOKEN(anon_sym_typeid);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 710:
            ACCEPT_TOKEN(anon_sym_typeprefix);
            END_STATE();
        case 711:
            ACCEPT_TOKEN(anon_sym_import);
            END_STATE();
        case 712:
            ACCEPT_TOKEN(anon_sym_import);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 713:
            ACCEPT_TOKEN(sym_object_type);
            END_STATE();
        case 714:
            ACCEPT_TOKEN(sym_object_type);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 715:
            ACCEPT_TOKEN(anon_sym_oneway);
            END_STATE();
        case 716:
            ACCEPT_TOKEN(anon_sym_oneway);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 717:
            ACCEPT_TOKEN(anon_sym_context);
            END_STATE();
        case 718:
            ACCEPT_TOKEN(sym_value_base_type);
            END_STATE();
        case 719:
            ACCEPT_TOKEN(sym_value_base_type);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 720:
            ACCEPT_TOKEN(anon_sym_component);
            END_STATE();
        case 721:
            ACCEPT_TOKEN(anon_sym_provides);
            END_STATE();
        case 722:
            ACCEPT_TOKEN(anon_sym_uses);
            END_STATE();
        case 723:
            ACCEPT_TOKEN(anon_sym_native);
            END_STATE();
        case 724:
            ACCEPT_TOKEN(anon_sym_native);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 725:
            ACCEPT_TOKEN(anon_sym_POUNDdefine);
            END_STATE();
        case 726:
            ACCEPT_TOKEN(anon_sym_POUNDdefine);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(628);
            END_STATE();
        case 727:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '\r')
                ADVANCE(730);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(730);
            END_STATE();
        case 728:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '*')
                ADVANCE(1010);
            if(lookahead == '/')
                ADVANCE(999);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(730);
            END_STATE();
        case 729:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '/')
                ADVANCE(728);
            if(lookahead == '\\')
                ADVANCE(727);
            if(lookahead == '\t' ||
               (0x0b <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(729);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead))
                ADVANCE(730);
            END_STATE();
        case 730:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(730);
            END_STATE();
        case 731:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == ' ')
                ADVANCE(284);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 732:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '.')
                ADVANCE(472);
            if(lookahead == '0')
                ADVANCE(595);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(597);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(610);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 733:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '1')
                ADVANCE(740);
            if(lookahead == '3')
                ADVANCE(736);
            if(lookahead == '6')
                ADVANCE(738);
            if(lookahead == '8')
                ADVANCE(509);
            if(lookahead == 'e')
                ADVANCE(934);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 734:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '1')
                ADVANCE(740);
            if(lookahead == '3')
                ADVANCE(736);
            if(lookahead == '6')
                ADVANCE(738);
            if(lookahead == '8')
                ADVANCE(509);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 735:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '1')
                ADVANCE(741);
            if(lookahead == '3')
                ADVANCE(737);
            if(lookahead == '6')
                ADVANCE(739);
            if(lookahead == '8')
                ADVANCE(501);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 736:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '2')
                ADVANCE(496);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 737:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '2')
                ADVANCE(515);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 738:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '4')
                ADVANCE(499);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 739:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '4')
                ADVANCE(518);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 740:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '6')
                ADVANCE(490);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 741:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '6')
                ADVANCE(512);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 742:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'A')
                ADVANCE(746);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('B' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 743:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'B')
                ADVANCE(756);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 744:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'E')
                ADVANCE(589);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 745:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'E')
                ADVANCE(591);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 746:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'L')
                ADVANCE(748);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 747:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'R')
                ADVANCE(749);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 748:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'S')
                ADVANCE(745);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 749:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'U')
                ADVANCE(744);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 750:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(864);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 751:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(798);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 752:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(935);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 753:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(785);
            if(lookahead == 'i')
                ADVANCE(984);
            if(lookahead == 'l')
                ADVANCE(910);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 754:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(912);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 755:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(986);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 756:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(939);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 757:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(923);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 758:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(877);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 759:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(966);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 760:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(972);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 761:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(924);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 762:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(945);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 763:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(880);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 764:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(964);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 765:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(940);
            if(lookahead == 'h')
                ADVANCE(757);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 766:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(963);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 767:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(790);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 768:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(777);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 769:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(789);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 770:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(872);
            if(lookahead == 'o')
                ADVANCE(851);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 771:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(872);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 772:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(862);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 773:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(941);
            if(lookahead == 'n')
                ADVANCE(985);
            if(lookahead == 't')
                ADVANCE(955);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 774:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(867);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 775:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(868);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 776:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(978);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 777:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(870);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 778:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(845);
            if(lookahead == 's')
                ADVANCE(967);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 779:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(845);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 780:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(693);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 781:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(840);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 782:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(820);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 783:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(959);
            if(lookahead == 'n')
                ADVANCE(802);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 784:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(959);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 785:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(961);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 786:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(948);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 787:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(809);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 788:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(951);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 789:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(952);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 790:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(816);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 791:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(764);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 792:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(648);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 793:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(505);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 794:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(709);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 795:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(731);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 796:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(807);
            if(lookahead == 'i')
                ADVANCE(794);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 797:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(807);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 798:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(906);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 799:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(920);
            if(lookahead == 'h')
                ADVANCE(904);
            if(lookahead == 't')
                ADVANCE(922);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 800:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(920);
            if(lookahead == 'h')
                ADVANCE(904);
            if(lookahead == 't')
                ADVANCE(927);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 801:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(920);
            if(lookahead == 'h')
                ADVANCE(904);
            if(lookahead == 't')
                ADVANCE(930);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 802:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(982);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 803:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(796);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 804:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(743);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 805:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(522);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 806:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(724);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 807:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(832);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 808:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(695);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 809:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(541);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 810:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(719);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 811:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(657);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 812:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(675);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 813:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(707);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 814:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(673);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 815:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(677);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 816:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(643);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 817:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(690);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 818:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(833);
            if(lookahead == 'o')
                ADVANCE(976);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 819:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(793);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 820:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(914);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 821:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(751);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 822:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(795);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 823:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(797);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 824:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(896);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 825:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(763);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 826:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(946);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 827:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(949);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 828:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(892);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 829:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(968);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 830:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(786);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 831:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(895);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 832:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'f')
                ADVANCE(699);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 833:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'f')
                ADVANCE(760);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 834:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'f')
                ADVANCE(767);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 835:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(492);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 836:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(530);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 837:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(532);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 838:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(494);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 839:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(893);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 840:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(705);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 841:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(757);
            if(lookahead == 'o')
                ADVANCE(898);
            if(lookahead == 'u')
                ADVANCE(937);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 842:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(757);
            if(lookahead == 'o')
                ADVANCE(898);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 843:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(757);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 844:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(904);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 845:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(761);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 846:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(984);
            if(lookahead == 'l')
                ADVANCE(910);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 847:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(981);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 848:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(942);
            if(lookahead == 'o')
                ADVANCE(900);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 849:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(839);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 850:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(980);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 851:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(792);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 852:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(776);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 853:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(891);
            if(lookahead == 'n')
                ADVANCE(860);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 854:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(891);
            if(lookahead == 'n')
                ADVANCE(936);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 855:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(780);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 856:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(887);
            if(lookahead == 'u')
                ADVANCE(788);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 857:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(887);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 858:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(888);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 859:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(960);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 860:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(905);
            if(lookahead == 's')
                ADVANCE(849);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 861:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(908);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 862:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'j')
                ADVANCE(830);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 863:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'k')
                ADVANCE(664);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 864:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(973);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 865:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(910);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 866:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(988);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 867:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(855);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 868:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(805);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 869:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(953);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 870:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(817);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 871:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(825);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 872:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(979);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 873:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'm')
                ADVANCE(919);
            if(lookahead == 'n')
                ADVANCE(943);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 874:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'm')
                ADVANCE(683);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 875:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'm')
                ADVANCE(688);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 876:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'm')
                ADVANCE(752);
            if(lookahead == 's')
                ADVANCE(827);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 877:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'm')
                ADVANCE(814);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 878:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(835);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 879:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(681);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 880:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(503);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 881:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(636);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 882:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(985);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 883:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(971);
            if(lookahead == 'v')
                ADVANCE(831);
            if(lookahead == 'x')
                ADVANCE(782);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 884:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(971);
            if(lookahead == 'x')
                ADVANCE(782);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 885:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(971);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 886:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(943);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 887:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(836);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 888:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(837);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 889:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(866);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 890:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(791);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 891:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(956);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 892:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(758);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 893:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(822);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 894:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(954);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 895:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(970);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 896:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(787);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 897:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(838);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 898:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(938);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 899:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(976);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 900:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(871);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 901:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(878);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 902:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(875);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 903:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(900);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 904:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(932);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 905:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(879);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 906:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(889);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 907:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(925);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 908:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(881);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 909:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(897);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 910:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(762);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 911:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(933);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 912:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(543);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 913:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(803);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 914:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(962);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 915:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(812);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 916:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(823);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 917:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(828);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 918:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(815);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 919:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(911);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 920:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'q')
                ADVANCE(974);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 921:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(847);
            if(lookahead == 'u')
                ADVANCE(774);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 922:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(856);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 923:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(525);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 924:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(527);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 925:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(987);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 926:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(852);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 927:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(977);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 928:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(858);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 929:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(975);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 930:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(857);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 931:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(769);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 932:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(947);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 933:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(950);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 934:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(834);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 935:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(863);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 936:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(849);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 937:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(958);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 938:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(944);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 939:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(810);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 940:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(813);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 941:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(957);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 942:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(876);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 943:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(734);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 944:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(685);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 945:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(520);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 946:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(507);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 947:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(488);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 948:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(714);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 949:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(661);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 950:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(712);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 951:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(679);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 952:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(641);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 953:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(667);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 954:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(733);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 955:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(926);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 956:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(735);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 957:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(931);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 958:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(902);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 959:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(826);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 960:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(781);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 961:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(907);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 962:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(861);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 963:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(808);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 964:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(768);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 965:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(811);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 966:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(850);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 967:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(928);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 968:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(990);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 969:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(993);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 970:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(969);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 971:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(874);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 972:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(869);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 973:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(804);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 974:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(824);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 975:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(890);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 976:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(775);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 977:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(788);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 978:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(965);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 979:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(829);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 980:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'v')
                ADVANCE(806);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 981:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'v')
                ADVANCE(766);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 982:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'w')
                ADVANCE(755);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 983:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'w')
                ADVANCE(859);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 984:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'x')
                ADVANCE(819);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 985:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(538);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 986:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(716);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 987:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(697);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 988:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(655);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 989:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(913);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 990:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(915);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 991:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(916);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 992:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(917);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 993:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(918);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 994:
            ACCEPT_TOKEN(sym_identifier);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(610);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 995:
            ACCEPT_TOKEN(sym_identifier);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(995);
            END_STATE();
        case 996:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            END_STATE();
        case 997:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            if(lookahead == '*')
                ADVANCE(1011);
            if(lookahead != 0)
                ADVANCE(67);
            END_STATE();
        case 998:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            if(lookahead == '\\')
                ADVANCE(55);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(1005);
            END_STATE();
        case 999:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(730);
            END_STATE();
        case 1000:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '\n')
                ADVANCE(1000);
            if(lookahead == '\r')
                ADVANCE(37);
            if(lookahead == '@')
                ADVANCE(668);
            END_STATE();
        case 1001:
            ACCEPT_TOKEN(aux_sym_comment_token2);
            if(lookahead == '\n')
                ADVANCE(1004);
            if(lookahead == '\\')
                ADVANCE(55);
            if(lookahead != 0)
                ADVANCE(1005);
            END_STATE();
        case 1002:
            ACCEPT_TOKEN(aux_sym_comment_token2);
            if(lookahead == '\r')
                ADVANCE(1006);
            if(lookahead == '\\')
                ADVANCE(1002);
            if(lookahead != 0)
                ADVANCE(1005);
            END_STATE();
        case 1003:
            ACCEPT_TOKEN(aux_sym_comment_token2);
            if(lookahead == '*')
                ADVANCE(1009);
            if(lookahead == '/')
                ADVANCE(998);
            if(lookahead == '\\')
                ADVANCE(55);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(1005);
            END_STATE();
        case 1004:
            ACCEPT_TOKEN(aux_sym_comment_token2);
            if(lookahead == '/')
                ADVANCE(1003);
            if(lookahead == '@')
                ADVANCE(668);
            if(lookahead == '\\')
                ADVANCE(40);
            if(lookahead == '\t' ||
               (0x0b <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(1004);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead))
                ADVANCE(1005);
            END_STATE();
        case 1005:
            ACCEPT_TOKEN(aux_sym_comment_token2);
            if(lookahead == '\\')
                ADVANCE(55);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(1005);
            END_STATE();
        case 1006:
            ACCEPT_TOKEN(aux_sym_comment_token2);
            if(lookahead == '\\')
                ADVANCE(55);
            if(lookahead != 0)
                ADVANCE(1005);
            END_STATE();
        case 1007:
            ACCEPT_TOKEN(anon_sym_SLASH_STAR);
            END_STATE();
        case 1008:
            ACCEPT_TOKEN(anon_sym_SLASH_STAR);
            if(lookahead == '*')
                ADVANCE(1011);
            if(lookahead != 0 &&
               lookahead != '/')
                ADVANCE(67);
            END_STATE();
        case 1009:
            ACCEPT_TOKEN(anon_sym_SLASH_STAR);
            if(lookahead == '\\')
                ADVANCE(55);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(1005);
            END_STATE();
        case 1010:
            ACCEPT_TOKEN(anon_sym_SLASH_STAR);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(730);
            END_STATE();
        case 1011:
            ACCEPT_TOKEN(aux_sym_comment_token3);
            if(lookahead == '*')
                ADVANCE(1011);
            if(lookahead != 0 &&
               lookahead != '/')
                ADVANCE(67);
            END_STATE();
        default:
            return false;
    }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
    [0] = { .lex_state = 0 },
    [1] = { .lex_state = 484 },
    [2] = { .lex_state = 69 },
    [3] = { .lex_state = 69 },
    [4] = { .lex_state = 69 },
    [5] = { .lex_state = 71 },
    [6] = { .lex_state = 71 },
    [7] = { .lex_state = 71 },
    [8] = { .lex_state = 71 },
    [9] = { .lex_state = 71 },
    [10] = { .lex_state = 71 },
    [11] = { .lex_state = 71 },
    [12] = { .lex_state = 71 },
    [13] = { .lex_state = 58 },
    [14] = { .lex_state = 58 },
    [15] = { .lex_state = 72 },
    [16] = { .lex_state = 73 },
    [17] = { .lex_state = 485 },
    [18] = { .lex_state = 484 },
    [19] = { .lex_state = 485 },
    [20] = { .lex_state = 485 },
    [21] = { .lex_state = 485 },
    [22] = { .lex_state = 485 },
    [23] = { .lex_state = 485 },
    [24] = { .lex_state = 485 },
    [25] = { .lex_state = 485 },
    [26] = { .lex_state = 63 },
    [27] = { .lex_state = 63 },
    [28] = { .lex_state = 74 },
    [29] = { .lex_state = 63 },
    [30] = { .lex_state = 63 },
    [31] = { .lex_state = 63 },
    [32] = { .lex_state = 63 },
    [33] = { .lex_state = 74 },
    [34] = { .lex_state = 63 },
    [35] = { .lex_state = 63 },
    [36] = { .lex_state = 74 },
    [37] = { .lex_state = 63 },
    [38] = { .lex_state = 63 },
    [39] = { .lex_state = 63 },
    [40] = { .lex_state = 69 },
    [41] = { .lex_state = 69 },
    [42] = { .lex_state = 69 },
    [43] = { .lex_state = 69 },
    [44] = { .lex_state = 69 },
    [45] = { .lex_state = 69 },
    [46] = { .lex_state = 63 },
    [47] = { .lex_state = 75 },
    [48] = { .lex_state = 69 },
    [49] = { .lex_state = 63 },
    [50] = { .lex_state = 75 },
    [51] = { .lex_state = 63 },
    [52] = { .lex_state = 63 },
    [53] = { .lex_state = 63 },
    [54] = { .lex_state = 63 },
    [55] = { .lex_state = 63 },
    [56] = { .lex_state = 63 },
    [57] = { .lex_state = 63 },
    [58] = { .lex_state = 63 },
    [59] = { .lex_state = 71 },
    [60] = { .lex_state = 71 },
    [61] = { .lex_state = 76 },
    [62] = { .lex_state = 76 },
    [63] = { .lex_state = 72 },
    [64] = { .lex_state = 72 },
    [65] = { .lex_state = 63 },
    [66] = { .lex_state = 74 },
    [67] = { .lex_state = 63 },
    [68] = { .lex_state = 63 },
    [69] = { .lex_state = 63 },
    [70] = { .lex_state = 63 },
    [71] = { .lex_state = 63 },
    [72] = { .lex_state = 63 },
    [73] = { .lex_state = 74 },
    [74] = { .lex_state = 63 },
    [75] = { .lex_state = 74 },
    [76] = { .lex_state = 74 },
    [77] = { .lex_state = 63 },
    [78] = { .lex_state = 63 },
    [79] = { .lex_state = 74 },
    [80] = { .lex_state = 63 },
    [81] = { .lex_state = 63 },
    [82] = { .lex_state = 63 },
    [83] = { .lex_state = 77 },
    [84] = { .lex_state = 57 },
    [85] = { .lex_state = 57 },
    [86] = { .lex_state = 57 },
    [87] = { .lex_state = 59 },
    [88] = { .lex_state = 59 },
    [89] = { .lex_state = 59 },
    [90] = { .lex_state = 59 },
    [91] = { .lex_state = 59 },
    [92] = { .lex_state = 484 },
    [93] = { .lex_state = 59 },
    [94] = { .lex_state = 59 },
    [95] = { .lex_state = 59 },
    [96] = { .lex_state = 59 },
    [97] = { .lex_state = 59 },
    [98] = { .lex_state = 59 },
    [99] = { .lex_state = 485 },
    [100] = { .lex_state = 59 },
    [101] = { .lex_state = 59 },
    [102] = { .lex_state = 59 },
    [103] = { .lex_state = 485 },
    [104] = { .lex_state = 485 },
    [105] = { .lex_state = 59 },
    [106] = { .lex_state = 59 },
    [107] = { .lex_state = 59 },
    [108] = { .lex_state = 59 },
    [109] = { .lex_state = 484 },
    [110] = { .lex_state = 485 },
    [111] = { .lex_state = 484 },
    [112] = { .lex_state = 484 },
    [113] = { .lex_state = 484 },
    [114] = { .lex_state = 485 },
    [115] = { .lex_state = 485 },
    [116] = { .lex_state = 485 },
    [117] = { .lex_state = 59 },
    [118] = { .lex_state = 59 },
    [119] = { .lex_state = 59 },
    [120] = { .lex_state = 59 },
    [121] = { .lex_state = 59 },
    [122] = { .lex_state = 59 },
    [123] = { .lex_state = 484 },
    [124] = { .lex_state = 484 },
    [125] = { .lex_state = 485 },
    [126] = { .lex_state = 485 },
    [127] = { .lex_state = 485 },
    [128] = { .lex_state = 485 },
    [129] = { .lex_state = 485 },
    [130] = { .lex_state = 485 },
    [131] = { .lex_state = 485 },
    [132] = { .lex_state = 485 },
    [133] = { .lex_state = 485 },
    [134] = { .lex_state = 485 },
    [135] = { .lex_state = 485 },
    [136] = { .lex_state = 485 },
    [137] = { .lex_state = 485 },
    [138] = { .lex_state = 485 },
    [139] = { .lex_state = 59 },
    [140] = { .lex_state = 485 },
    [141] = { .lex_state = 484 },
    [142] = { .lex_state = 484 },
    [143] = { .lex_state = 485 },
    [144] = { .lex_state = 484 },
    [145] = { .lex_state = 484 },
    [146] = { .lex_state = 484 },
    [147] = { .lex_state = 485 },
    [148] = { .lex_state = 485 },
    [149] = { .lex_state = 57 },
    [150] = { .lex_state = 61 },
    [151] = { .lex_state = 59 },
    [152] = { .lex_state = 61 },
    [153] = { .lex_state = 57 },
    [154] = { .lex_state = 484 },
    [155] = { .lex_state = 57 },
    [156] = { .lex_state = 61 },
    [157] = { .lex_state = 61 },
    [158] = { .lex_state = 484 },
    [159] = { .lex_state = 61 },
    [160] = { .lex_state = 60 },
    [161] = { .lex_state = 61 },
    [162] = { .lex_state = 57 },
    [163] = { .lex_state = 484 },
    [164] = { .lex_state = 57 },
    [165] = { .lex_state = 484 },
    [166] = { .lex_state = 484 },
    [167] = { .lex_state = 62 },
    [168] = { .lex_state = 484 },
    [169] = { .lex_state = 79 },
    [170] = { .lex_state = 484 },
    [171] = { .lex_state = 484 },
    [172] = { .lex_state = 62 },
    [173] = { .lex_state = 62 },
    [174] = { .lex_state = 62 },
    [175] = { .lex_state = 79 },
    [176] = { .lex_state = 62 },
    [177] = { .lex_state = 484 },
    [178] = { .lex_state = 484 },
    [179] = { .lex_state = 79 },
    [180] = { .lex_state = 62 },
    [181] = { .lex_state = 484 },
    [182] = { .lex_state = 57 },
    [183] = { .lex_state = 484 },
    [184] = { .lex_state = 484 },
    [185] = { .lex_state = 484 },
    [186] = { .lex_state = 485 },
    [187] = { .lex_state = 62 },
    [188] = { .lex_state = 62 },
    [189] = { .lex_state = 62 },
    [190] = { .lex_state = 62 },
    [191] = { .lex_state = 62 },
    [192] = { .lex_state = 62 },
    [193] = { .lex_state = 61 },
    [194] = { .lex_state = 484 },
    [195] = { .lex_state = 62 },
    [196] = { .lex_state = 484 },
    [197] = { .lex_state = 78 },
    [198] = { .lex_state = 484 },
    [199] = { .lex_state = 62 },
    [200] = { .lex_state = 62 },
    [201] = { .lex_state = 62 },
    [202] = { .lex_state = 484 },
    [203] = { .lex_state = 484 },
    [204] = { .lex_state = 0 },
    [205] = { .lex_state = 484 },
    [206] = { .lex_state = 485 },
    [207] = { .lex_state = 484 },
    [208] = { .lex_state = 484 },
    [209] = { .lex_state = 485 },
    [210] = { .lex_state = 484 },
    [211] = { .lex_state = 485 },
    [212] = { .lex_state = 37 },
    [213] = { .lex_state = 484 },
    [214] = { .lex_state = 62 },
    [215] = { .lex_state = 62 },
    [216] = { .lex_state = 64 },
    [217] = { .lex_state = 37 },
    [218] = { .lex_state = 62 },
    [219] = { .lex_state = 62 },
    [220] = { .lex_state = 37 },
    [221] = { .lex_state = 62 },
    [222] = { .lex_state = 62 },
    [223] = { .lex_state = 484 },
    [224] = { .lex_state = 484 },
    [225] = { .lex_state = 37 },
    [226] = { .lex_state = 37 },
    [227] = { .lex_state = 37 },
    [228] = { .lex_state = 62 },
    [229] = { .lex_state = 1004 },
    [230] = { .lex_state = 62 },
    [231] = { .lex_state = 62 },
    [232] = { .lex_state = 0 },
    [233] = { .lex_state = 62 },
    [234] = { .lex_state = 62 },
    [235] = { .lex_state = 484 },
    [236] = { .lex_state = 484 },
    [237] = { .lex_state = 62 },
    [238] = { .lex_state = 62 },
    [239] = { .lex_state = 64 },
    [240] = { .lex_state = 484 },
    [241] = { .lex_state = 79 },
    [242] = { .lex_state = 62 },
    [243] = { .lex_state = 62 },
    [244] = { .lex_state = 62 },
    [245] = { .lex_state = 62 },
    [246] = { .lex_state = 62 },
    [247] = { .lex_state = 484 },
    [248] = { .lex_state = 484 },
    [249] = { .lex_state = 62 },
    [250] = { .lex_state = 484 },
    [251] = { .lex_state = 62 },
    [252] = { .lex_state = 62 },
    [253] = { .lex_state = 62 },
    [254] = { .lex_state = 62 },
    [255] = { .lex_state = 79 },
    [256] = { .lex_state = 79 },
    [257] = { .lex_state = 62 },
    [258] = { .lex_state = 0 },
    [259] = { .lex_state = 69 },
    [260] = { .lex_state = 62 },
    [261] = { .lex_state = 69 },
    [262] = { .lex_state = 0 },
    [263] = { .lex_state = 62 },
    [264] = { .lex_state = 69 },
    [265] = { .lex_state = 0 },
    [266] = { .lex_state = 80 },
    [267] = { .lex_state = 62 },
    [268] = { .lex_state = 69 },
    [269] = { .lex_state = 0 },
    [270] = { .lex_state = 0 },
    [271] = { .lex_state = 484 },
    [272] = { .lex_state = 62 },
    [273] = { .lex_state = 0 },
    [274] = { .lex_state = 0 },
    [275] = { .lex_state = 0 },
    [276] = { .lex_state = 69 },
    [277] = { .lex_state = 62 },
    [278] = { .lex_state = 69 },
    [279] = { .lex_state = 62 },
    [280] = { .lex_state = 0 },
    [281] = { .lex_state = 0 },
    [282] = { .lex_state = 62 },
    [283] = { .lex_state = 0 },
    [284] = { .lex_state = 0 },
    [285] = { .lex_state = 0 },
    [286] = { .lex_state = 0 },
    [287] = { .lex_state = 0 },
    [288] = { .lex_state = 0 },
    [289] = { .lex_state = 62 },
    [290] = { .lex_state = 0 },
    [291] = { .lex_state = 0 },
    [292] = { .lex_state = 69 },
    [293] = { .lex_state = 0 },
    [294] = { .lex_state = 62 },
    [295] = { .lex_state = 0 },
    [296] = { .lex_state = 62 },
    [297] = { .lex_state = 62 },
    [298] = { .lex_state = 484 },
    [299] = { .lex_state = 62 },
    [300] = { .lex_state = 484 },
    [301] = { .lex_state = 0 },
    [302] = { .lex_state = 62 },
    [303] = { .lex_state = 484 },
    [304] = { .lex_state = 484 },
    [305] = { .lex_state = 0 },
    [306] = { .lex_state = 484 },
    [307] = { .lex_state = 0 },
    [308] = { .lex_state = 0 },
    [309] = { .lex_state = 484 },
    [310] = { .lex_state = 0 },
    [311] = { .lex_state = 69 },
    [312] = { .lex_state = 69 },
    [313] = { .lex_state = 0 },
    [314] = { .lex_state = 0 },
    [315] = { .lex_state = 0 },
    [316] = { .lex_state = 62 },
    [317] = { .lex_state = 62 },
    [318] = { .lex_state = 0 },
    [319] = { .lex_state = 484 },
    [320] = { .lex_state = 62 },
    [321] = { .lex_state = 484 },
    [322] = { .lex_state = 0 },
    [323] = { .lex_state = 0 },
    [324] = { .lex_state = 0 },
    [325] = { .lex_state = 485 },
    [326] = { .lex_state = 0 },
    [327] = { .lex_state = 62 },
    [328] = { .lex_state = 62 },
    [329] = { .lex_state = 62 },
    [330] = { .lex_state = 0 },
    [331] = { .lex_state = 0 },
    [332] = { .lex_state = 0 },
    [333] = { .lex_state = 0 },
    [334] = { .lex_state = 62 },
    [335] = { .lex_state = 62 },
    [336] = { .lex_state = 0 },
    [337] = { .lex_state = 0 },
    [338] = { .lex_state = 62 },
    [339] = { .lex_state = 484 },
    [340] = { .lex_state = 62 },
    [341] = { .lex_state = 62 },
    [342] = { .lex_state = 62 },
    [343] = { .lex_state = 0 },
    [344] = { .lex_state = 484 },
    [345] = { .lex_state = 62 },
    [346] = { .lex_state = 62 },
    [347] = { .lex_state = 69 },
    [348] = { .lex_state = 0 },
    [349] = { .lex_state = 0 },
    [350] = { .lex_state = 484 },
    [351] = { .lex_state = 62 },
    [352] = { .lex_state = 69 },
    [353] = { .lex_state = 62 },
    [354] = { .lex_state = 62 },
    [355] = { .lex_state = 0 },
    [356] = { .lex_state = 62 },
    [357] = { .lex_state = 62 },
    [358] = { .lex_state = 0 },
    [359] = { .lex_state = 0 },
    [360] = { .lex_state = 0 },
    [361] = { .lex_state = 484 },
    [362] = { .lex_state = 0 },
    [363] = { .lex_state = 62 },
    [364] = { .lex_state = 62 },
    [365] = { .lex_state = 484 },
    [366] = { .lex_state = 43 },
    [367] = { .lex_state = 0 },
    [368] = { .lex_state = 62 },
    [369] = { .lex_state = 484 },
    [370] = { .lex_state = 62 },
    [371] = { .lex_state = 69 },
    [372] = { .lex_state = 62 },
    [373] = { .lex_state = 62 },
    [374] = { .lex_state = 62 },
    [375] = { .lex_state = 37 },
    [376] = { .lex_state = 0 },
    [377] = { .lex_state = 37 },
    [378] = { .lex_state = 62 },
    [379] = { .lex_state = 0 },
    [380] = { .lex_state = 69 },
    [381] = { .lex_state = 484 },
    [382] = { .lex_state = 484 },
    [383] = { .lex_state = 0 },
    [384] = { .lex_state = 484 },
    [385] = { .lex_state = 485 },
    [386] = { .lex_state = 0 },
    [387] = { .lex_state = 62 },
    [388] = { .lex_state = 0 },
    [389] = { .lex_state = 484 },
    [390] = { .lex_state = 69 },
    [391] = { .lex_state = 484 },
    [392] = { .lex_state = 62 },
    [393] = { .lex_state = 0 },
    [394] = { .lex_state = 62 },
    [395] = { .lex_state = 62 },
    [396] = { .lex_state = 62 },
    [397] = { .lex_state = 484 },
    [398] = { .lex_state = 62 },
    [399] = { .lex_state = 62 },
    [400] = { .lex_state = 62 },
    [401] = { .lex_state = 62 },
    [402] = { .lex_state = 0 },
    [403] = { .lex_state = 69 },
    [404] = { .lex_state = 484 },
    [405] = { .lex_state = 0 },
    [406] = { .lex_state = 62 },
    [407] = { .lex_state = 0 },
    [408] = { .lex_state = 0 },
    [409] = { .lex_state = 0 },
    [410] = { .lex_state = 62 },
    [411] = { .lex_state = 62 },
    [412] = { .lex_state = 484 },
    [413] = { .lex_state = 0 },
    [414] = { .lex_state = 64 },
    [415] = { .lex_state = 484 },
    [416] = { .lex_state = 62 },
    [417] = { .lex_state = 0 },
    [418] = { .lex_state = 0 },
    [419] = { .lex_state = 62 },
    [420] = { .lex_state = 69 },
    [421] = { .lex_state = 62 },
    [422] = { .lex_state = 0 },
    [423] = { .lex_state = 62 },
    [424] = { .lex_state = 64 },
    [425] = { .lex_state = 62 },
    [426] = { .lex_state = 0 },
    [427] = { .lex_state = 0 },
    [428] = { .lex_state = 62 },
    [429] = { .lex_state = 484 },
    [430] = { .lex_state = 69 },
    [431] = { .lex_state = 484 },
    [432] = { .lex_state = 484 },
    [433] = { .lex_state = 69 },
    [434] = { .lex_state = 79 },
    [435] = { .lex_state = 62 },
    [436] = { .lex_state = 0 },
    [437] = { .lex_state = 0 },
    [438] = { .lex_state = 0 },
    [439] = { .lex_state = 62 },
    [440] = { .lex_state = 79 },
    [441] = { .lex_state = 62 },
    [442] = { .lex_state = 62 },
    [443] = { .lex_state = 69 },
    [444] = { .lex_state = 0 },
    [445] = { .lex_state = 0 },
    [446] = { .lex_state = 62 },
    [447] = { .lex_state = 0 },
    [448] = { .lex_state = 62 },
    [449] = { .lex_state = 62 },
    [450] = { .lex_state = 0 },
    [451] = { .lex_state = 0 },
    [452] = { .lex_state = 62 },
    [453] = { .lex_state = 69 },
    [454] = { .lex_state = 62 },
    [455] = { .lex_state = 62 },
    [456] = { .lex_state = 0 },
    [457] = { .lex_state = 485 },
    [458] = { .lex_state = 62 },
    [459] = { .lex_state = 0 },
    [460] = { .lex_state = 62 },
    [461] = { .lex_state = 62 },
    [462] = { .lex_state = 0 },
    [463] = { .lex_state = 62 },
    [464] = { .lex_state = 0 },
    [465] = { .lex_state = 0 },
    [466] = { .lex_state = 69 },
    [467] = { .lex_state = 0 },
    [468] = { .lex_state = 0 },
    [469] = { .lex_state = 0 },
    [470] = { .lex_state = 62 },
    [471] = { .lex_state = 0 },
    [472] = { .lex_state = 69 },
    [473] = { .lex_state = 62 },
    [474] = { .lex_state = 0 },
    [475] = { .lex_state = 0 },
    [476] = { .lex_state = 0 },
    [477] = { .lex_state = 81 },
    [478] = { .lex_state = 0 },
    [479] = { .lex_state = 62 },
    [480] = { .lex_state = 0 },
    [481] = { .lex_state = 62 },
    [482] = { .lex_state = 0 },
    [483] = { .lex_state = 69 },
    [484] = { .lex_state = 0 },
    [485] = { .lex_state = 0 },
    [486] = { .lex_state = 0 },
    [487] = { .lex_state = 0 },
    [488] = { .lex_state = 0 },
    [489] = { .lex_state = 0 },
    [490] = { .lex_state = 0 },
    [491] = { .lex_state = 0 },
    [492] = { .lex_state = 0 },
    [493] = { .lex_state = 0 },
    [494] = { .lex_state = 0 },
    [495] = { .lex_state = 0 },
    [496] = { .lex_state = 0 },
    [497] = { .lex_state = 62 },
    [498] = { .lex_state = 0 },
    [499] = { .lex_state = 0 },
    [500] = { .lex_state = 0 },
    [501] = { .lex_state = 0 },
    [502] = { .lex_state = 62 },
    [503] = { .lex_state = 0 },
    [504] = { .lex_state = 0 },
    [505] = { .lex_state = 0 },
    [506] = { .lex_state = 0 },
    [507] = { .lex_state = 69 },
    [508] = { .lex_state = 484 },
    [509] = { .lex_state = 0 },
    [510] = { .lex_state = 0 },
    [511] = { .lex_state = 0 },
    [512] = { .lex_state = 484 },
    [513] = { .lex_state = 0 },
    [514] = { .lex_state = 62 },
    [515] = { .lex_state = 0 },
    [516] = { .lex_state = 484 },
    [517] = { .lex_state = 0 },
    [518] = { .lex_state = 0 },
    [519] = { .lex_state = 0 },
    [520] = { .lex_state = 69 },
    [521] = { .lex_state = 0 },
    [522] = { .lex_state = 0 },
    [523] = { .lex_state = 82 },
    [524] = { .lex_state = 81 },
    [525] = { .lex_state = 0 },
    [526] = { .lex_state = 0 },
    [527] = { .lex_state = 0 },
    [528] = { .lex_state = 0 },
    [529] = { .lex_state = 0 },
    [530] = { .lex_state = 0 },
    [531] = { .lex_state = 0 },
    [532] = { .lex_state = 0 },
    [533] = { .lex_state = 66 },
    [534] = { .lex_state = 0 },
    [535] = { .lex_state = 62 },
    [536] = { .lex_state = 0 },
    [537] = { .lex_state = 0 },
    [538] = { .lex_state = 0 },
    [539] = { .lex_state = 69 },
    [540] = { .lex_state = 69 },
    [541] = { .lex_state = 62 },
    [542] = { .lex_state = 62 },
    [543] = { .lex_state = 62 },
    [544] = { .lex_state = 0 },
    [545] = { .lex_state = 62 },
    [546] = { .lex_state = 0 },
    [547] = { .lex_state = 485 },
    [548] = { .lex_state = 62 },
    [549] = { .lex_state = 0 },
    [550] = { .lex_state = 0 },
    [551] = { .lex_state = 0 },
    [552] = { .lex_state = 69 },
    [553] = { .lex_state = 0 },
    [554] = { .lex_state = 82 },
    [555] = { .lex_state = 0 },
    [556] = { .lex_state = 0 },
    [557] = { .lex_state = 0 },
    [558] = { .lex_state = 0 },
    [559] = { .lex_state = 0 },
    [560] = { .lex_state = 0 },
    [561] = { .lex_state = 0 },
    [562] = { .lex_state = 0 },
    [563] = { .lex_state = 0 },
    [564] = { .lex_state = 69 },
    [565] = { .lex_state = 62 },
    [566] = { .lex_state = 69 },
    [567] = { .lex_state = 62 },
    [568] = { .lex_state = 62 },
    [569] = { .lex_state = 62 },
    [570] = { .lex_state = 0 },
    [571] = { .lex_state = 0 },
    [572] = { .lex_state = 0 },
    [573] = { .lex_state = 0 },
    [574] = { .lex_state = 0 },
    [575] = { .lex_state = 0 },
    [576] = { .lex_state = 0 },
    [577] = { .lex_state = 69 },
    [578] = { .lex_state = 485 },
    [579] = { .lex_state = 62 },
    [580] = { .lex_state = 0 },
    [581] = { .lex_state = 69 },
    [582] = { .lex_state = 62 },
    [583] = { .lex_state = 0 },
    [584] = { .lex_state = 0 },
    [585] = { .lex_state = 62 },
    [586] = { .lex_state = 0 },
    [587] = { .lex_state = 0 },
    [588] = { .lex_state = 0 },
    [589] = { .lex_state = 0 },
    [590] = { .lex_state = 0 },
    [591] = { .lex_state = 0 },
    [592] = { .lex_state = 62 },
    [593] = { .lex_state = 62 },
    [594] = { .lex_state = 69 },
    [595] = { .lex_state = 0 },
    [596] = { .lex_state = 0 },
    [597] = { .lex_state = 44 },
    [598] = { .lex_state = 0 },
    [599] = { .lex_state = 0 },
    [600] = { .lex_state = 62 },
    [601] = { .lex_state = 0 },
    [602] = { .lex_state = 0 },
    [603] = { .lex_state = 62 },
    [604] = { .lex_state = 0 },
    [605] = { .lex_state = 62 },
    [606] = { .lex_state = 0 },
    [607] = { .lex_state = 0 },
    [608] = { .lex_state = 484 },
    [609] = { .lex_state = 0 },
    [610] = { .lex_state = 69 },
    [611] = { .lex_state = 0 },
    [612] = { .lex_state = 62 },
    [613] = { .lex_state = 0 },
    [614] = { .lex_state = 0 },
    [615] = { .lex_state = 0 },
    [616] = { .lex_state = 62 },
    [617] = { .lex_state = 0 },
    [618] = { .lex_state = 0 },
    [619] = { .lex_state = 0 },
    [620] = { .lex_state = 729 },
    [621] = { .lex_state = 0 },
    [622] = { .lex_state = 62 },
    [623] = { .lex_state = 484 },
    [624] = { .lex_state = 484 },
    [625] = { .lex_state = 62 },
    [626] = { .lex_state = 62 },
    [627] = { .lex_state = 62 },
    [628] = { .lex_state = 62 },
    [629] = { .lex_state = 62 },
    [630] = { .lex_state = 62 },
    [631] = { .lex_state = 0 },
    [632] = { .lex_state = 62 },
    [633] = { .lex_state = 62 },
    [634] = { .lex_state = 62 },
    [635] = { .lex_state = 0 },
    [636] = { .lex_state = 62 },
    [637] = { .lex_state = 0 },
    [638] = { .lex_state = 62 },
    [639] = { .lex_state = 62 },
    [640] = { .lex_state = 62 },
    [641] = { .lex_state = 0 },
    [642] = { .lex_state = 0 },
    [643] = { .lex_state = 62 },
    [644] = { .lex_state = 0 },
    [645] = { .lex_state = 62 },
    [646] = { .lex_state = 484 },
    [647] = { (TSStateId)(-1) },
    [648] = { (TSStateId)(-1) },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
    [0] = {
        [sym_comment] = STATE(0),
        [ts_builtin_sym_end] = ACTIONS(1),
        [anon_sym_short] = ACTIONS(1),
        [anon_sym_long] = ACTIONS(1),
        [anon_sym_longlong] = ACTIONS(1),
        [sym_unsigned_tiny_int] = ACTIONS(1),
        [sym_boolean_type] = ACTIONS(1),
        [anon_sym_fixed] = ACTIONS(1),
        [sym_octet_type] = ACTIONS(1),
        [anon_sym_unsignedshort] = ACTIONS(1),
        [anon_sym_uint16] = ACTIONS(1),
        [anon_sym_unsignedlong] = ACTIONS(1),
        [anon_sym_uint32] = ACTIONS(1),
        [anon_sym_unsignedlonglong] = ACTIONS(1),
        [anon_sym_uint64] = ACTIONS(1),
        [anon_sym_float] = ACTIONS(1),
        [anon_sym_double] = ACTIONS(1),
        [anon_sym_longdouble] = ACTIONS(1),
        [anon_sym_char] = ACTIONS(1),
        [anon_sym_wchar] = ACTIONS(1),
        [anon_sym_COLON_COLON] = ACTIONS(1),
        [anon_sym_string] = ACTIONS(1),
        [anon_sym_wstring] = ACTIONS(1),
        [anon_sym_LT] = ACTIONS(1),
        [anon_sym_GT] = ACTIONS(1),
        [anon_sym_any] = ACTIONS(1),
        [anon_sym_COMMA] = ACTIONS(1),
        [anon_sym_sequence] = ACTIONS(1),
        [anon_sym_map] = ACTIONS(1),
        [anon_sym_PIPE] = ACTIONS(1),
        [anon_sym_CARET] = ACTIONS(1),
        [anon_sym_DOLLAR] = ACTIONS(1),
        [anon_sym_GT_GT] = ACTIONS(1),
        [anon_sym_LT_LT] = ACTIONS(1),
        [anon_sym_PLUS] = ACTIONS(1),
        [anon_sym_DASH] = ACTIONS(1),
        [anon_sym_STAR] = ACTIONS(1),
        [anon_sym_SLASH] = ACTIONS(1),
        [anon_sym_PERCENT] = ACTIONS(1),
        [anon_sym_LPAREN] = ACTIONS(1),
        [anon_sym_RPAREN] = ACTIONS(1),
        [anon_sym_TILDE] = ACTIONS(1),
        [anon_sym_L] = ACTIONS(1),
        [anon_sym_DQUOTE] = ACTIONS(1),
        [anon_sym_SQUOTE] = ACTIONS(1),
        [aux_sym_char_literal_token1] = ACTIONS(1),
        [anon_sym_TRUE] = ACTIONS(1),
        [anon_sym_FALSE] = ACTIONS(1),
        [sym_preproc_directive] = ACTIONS(1),
        [anon_sym_exception] = ACTIONS(1),
        [anon_sym_LBRACE] = ACTIONS(1),
        [anon_sym_RBRACE] = ACTIONS(1),
        [anon_sym_local] = ACTIONS(1),
        [anon_sym_abstract] = ACTIONS(1),
        [anon_sym_COLON] = ACTIONS(1),
        [anon_sym_SEMI] = ACTIONS(1),
        [anon_sym_void] = ACTIONS(1),
        [anon_sym_in] = ACTIONS(1),
        [anon_sym_out] = ACTIONS(1),
        [anon_sym_inout] = ACTIONS(1),
        [anon_sym_raises] = ACTIONS(1),
        [anon_sym_readonly] = ACTIONS(1),
        [anon_sym_attribute] = ACTIONS(1),
        [anon_sym_getraises] = ACTIONS(1),
        [anon_sym_setraises] = ACTIONS(1),
        [anon_sym_bitset] = ACTIONS(1),
        [anon_sym_bitfield] = ACTIONS(1),
        [anon_sym_bitmask] = ACTIONS(1),
        [anon_sym_ATannotation] = ACTIONS(1),
        [anon_sym_default] = ACTIONS(1),
        [anon_sym_AT] = ACTIONS(1),
        [anon_sym_EQ] = ACTIONS(1),
        [anon_sym_module] = ACTIONS(1),
        [anon_sym_typename] = ACTIONS(1),
        [anon_sym_valuetype] = ACTIONS(1),
        [anon_sym_eventtype] = ACTIONS(1),
        [anon_sym_struct] = ACTIONS(1),
        [anon_sym_union] = ACTIONS(1),
        [anon_sym_enum] = ACTIONS(1),
        [anon_sym_const] = ACTIONS(1),
        [anon_sym_alias] = ACTIONS(1),
        [anon_sym_custom] = ACTIONS(1),
        [anon_sym_truncatable] = ACTIONS(1),
        [anon_sym_supports] = ACTIONS(1),
        [anon_sym_public] = ACTIONS(1),
        [anon_sym_private] = ACTIONS(1),
        [anon_sym_factory] = ACTIONS(1),
        [anon_sym_typedef] = ACTIONS(1),
        [anon_sym_LBRACK] = ACTIONS(1),
        [anon_sym_RBRACK] = ACTIONS(1),
        [anon_sym_ATdefault_literal] = ACTIONS(1),
        [anon_sym_ATignore_literal_names] = ACTIONS(1),
        [anon_sym_switch] = ACTIONS(1),
        [anon_sym_case] = ACTIONS(1),
        [anon_sym_typeid] = ACTIONS(1),
        [anon_sym_typeprefix] = ACTIONS(1),
        [anon_sym_import] = ACTIONS(1),
        [sym_object_type] = ACTIONS(1),
        [anon_sym_oneway] = ACTIONS(1),
        [anon_sym_context] = ACTIONS(1),
        [sym_value_base_type] = ACTIONS(1),
        [anon_sym_component] = ACTIONS(1),
        [anon_sym_provides] = ACTIONS(1),
        [anon_sym_uses] = ACTIONS(1),
        [anon_sym_native] = ACTIONS(1),
        [anon_sym_POUNDdefine] = ACTIONS(1),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [1] = {
        [sym_specification] = STATE(619),
        [sym_preproc_call] = STATE(112),
        [sym_except_dcl] = STATE(618),
        [sym_interface_dcl] = STATE(618),
        [sym_interface_kind] = STATE(616),
        [sym_interface_forward_dcl] = STATE(615),
        [sym_interface_def] = STATE(615),
        [sym_interface_header] = STATE(614),
        [sym_bitset_dcl] = STATE(618),
        [sym_bitmask_dcl] = STATE(618),
        [sym_annotation_dcl] = STATE(618),
        [sym_annotation_appl] = STATE(162),
        [sym_template_module_dcl] = STATE(618),
        [sym_template_module_inst] = STATE(618),
        [sym_value_dcl] = STATE(618),
        [sym_value_def] = STATE(613),
        [sym_value_kind] = STATE(612),
        [sym_value_header] = STATE(611),
        [sym_value_forward_dcl] = STATE(613),
        [sym_typedef_dcl] = STATE(618),
        [sym_enum_dcl] = STATE(618),
        [sym_enum_anno] = STATE(608),
        [sym_union_forward_dcl] = STATE(618),
        [sym_union_def] = STATE(618),
        [sym_type_id_dcl] = STATE(618),
        [sym_type_prefix_dcl] = STATE(618),
        [sym_import_dcl] = STATE(618),
        [sym_value_abs_def] = STATE(613),
        [sym_component_dcl] = STATE(618),
        [sym_component_forward_dcl] = STATE(604),
        [sym_component_def] = STATE(604),
        [sym_component_header] = STATE(602),
        [sym__definition] = STATE(116),
        [sym_native_dcl] = STATE(618),
        [sym_module_dcl] = STATE(618),
        [sym_struct_forward_dcl] = STATE(618),
        [sym_struct_def] = STATE(618),
        [sym_predefine] = STATE(99),
        [sym_const_dcl] = STATE(618),
        [sym_comment] = STATE(1),
        [aux_sym_specification_repeat1] = STATE(18),
        [aux_sym_specification_repeat2] = STATE(22),
        [aux_sym_interface_def_repeat1] = STATE(149),
        [ts_builtin_sym_end] = ACTIONS(7),
        [sym_preproc_directive] = ACTIONS(9),
        [anon_sym_exception] = ACTIONS(11),
        [anon_sym_local] = ACTIONS(13),
        [anon_sym_abstract] = ACTIONS(15),
        [anon_sym_interface] = ACTIONS(17),
        [anon_sym_bitset] = ACTIONS(19),
        [anon_sym_bitmask] = ACTIONS(21),
        [anon_sym_ATannotation] = ACTIONS(23),
        [anon_sym_AT] = ACTIONS(25),
        [anon_sym_module] = ACTIONS(27),
        [anon_sym_valuetype] = ACTIONS(29),
        [anon_sym_struct] = ACTIONS(31),
        [anon_sym_union] = ACTIONS(33),
        [anon_sym_enum] = ACTIONS(35),
        [anon_sym_const] = ACTIONS(37),
        [anon_sym_custom] = ACTIONS(39),
        [anon_sym_typedef] = ACTIONS(41),
        [anon_sym_ATignore_literal_names] = ACTIONS(43),
        [anon_sym_typeid] = ACTIONS(45),
        [anon_sym_typeprefix] = ACTIONS(47),
        [anon_sym_import] = ACTIONS(49),
        [anon_sym_component] = ACTIONS(51),
        [anon_sym_native] = ACTIONS(53),
        [anon_sym_POUNDdefine] = ACTIONS(55),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [2] = {
        [sym_signed_short_int] = STATE(251),
        [sym_signed_long_int] = STATE(251),
        [sym_signed_longlong_int] = STATE(251),
        [sym_unsigned_int] = STATE(231),
        [sym_integer_type] = STATE(289),
        [sym_signed_int] = STATE(231),
        [sym_unsigned_short_int] = STATE(257),
        [sym_unsigned_long_int] = STATE(257),
        [sym_unsigned_longlong_int] = STATE(257),
        [sym_floating_pt_type] = STATE(289),
        [sym_char_type] = STATE(289),
        [sym_scoped_name] = STATE(219),
        [sym_string_type] = STATE(297),
        [sym_type_spec] = STATE(514),
        [sym_simple_type_spec] = STATE(345),
        [sym_base_type_spec] = STATE(299),
        [sym_any_type] = STATE(289),
        [sym_fixed_pt_type] = STATE(297),
        [sym_template_type_spec] = STATE(345),
        [sym_sequence_type] = STATE(297),
        [sym_map_type] = STATE(297),
        [sym_except_dcl] = STATE(635),
        [sym_export] = STATE(48),
        [sym_op_dcl] = STATE(350),
        [sym_op_type_spec] = STATE(502),
        [sym_attr_dcl] = STATE(635),
        [sym_readonly_attr_spec] = STATE(501),
        [sym_attr_spec] = STATE(501),
        [sym_bitset_dcl] = STATE(635),
        [sym_bitmask_dcl] = STATE(635),
        [sym_annotation_appl] = STATE(162),
        [sym_value_dcl] = STATE(635),
        [sym_value_def] = STATE(613),
        [sym_value_kind] = STATE(612),
        [sym_value_header] = STATE(611),
        [sym_value_element] = STATE(41),
        [sym_state_member] = STATE(48),
        [sym_init_dcl] = STATE(48),
        [sym_value_forward_dcl] = STATE(613),
        [sym_typedef_dcl] = STATE(635),
        [sym_enum_dcl] = STATE(635),
        [sym_enum_anno] = STATE(608),
        [sym_union_forward_dcl] = STATE(635),
        [sym_union_def] = STATE(635),
        [sym_type_id_dcl] = STATE(635),
        [sym_import_dcl] = STATE(635),
        [sym_op_oneway_dcl] = STATE(350),
        [sym_op_with_context] = STATE(635),
        [sym_value_abs_def] = STATE(613),
        [sym_native_dcl] = STATE(635),
        [sym_struct_forward_dcl] = STATE(635),
        [sym_struct_def] = STATE(635),
        [sym_const_dcl] = STATE(635),
        [sym_comment] = STATE(2),
        [aux_sym_interface_def_repeat1] = STATE(182),
        [aux_sym_value_def_repeat1] = STATE(2),
        [anon_sym_short] = ACTIONS(57),
        [anon_sym_int16] = ACTIONS(57),
        [anon_sym_long] = ACTIONS(60),
        [anon_sym_int32] = ACTIONS(60),
        [anon_sym_longlong] = ACTIONS(63),
        [anon_sym_int64] = ACTIONS(66),
        [sym_unsigned_tiny_int] = ACTIONS(69),
        [sym_boolean_type] = ACTIONS(72),
        [anon_sym_fixed] = ACTIONS(75),
        [sym_octet_type] = ACTIONS(72),
        [sym_signed_tiny_int] = ACTIONS(78),
        [anon_sym_unsignedshort] = ACTIONS(81),
        [anon_sym_uint16] = ACTIONS(84),
        [anon_sym_unsignedlong] = ACTIONS(87),
        [anon_sym_uint32] = ACTIONS(87),
        [anon_sym_unsignedlonglong] = ACTIONS(90),
        [anon_sym_uint64] = ACTIONS(93),
        [anon_sym_float] = ACTIONS(96),
        [anon_sym_double] = ACTIONS(96),
        [anon_sym_longdouble] = ACTIONS(99),
        [anon_sym_char] = ACTIONS(102),
        [anon_sym_wchar] = ACTIONS(102),
        [anon_sym_COLON_COLON] = ACTIONS(105),
        [anon_sym_string] = ACTIONS(108),
        [anon_sym_wstring] = ACTIONS(108),
        [anon_sym_any] = ACTIONS(111),
        [anon_sym_sequence] = ACTIONS(114),
        [anon_sym_map] = ACTIONS(117),
        [anon_sym_exception] = ACTIONS(120),
        [anon_sym_RBRACE] = ACTIONS(123),
        [anon_sym_abstract] = ACTIONS(125),
        [anon_sym_void] = ACTIONS(128),
        [anon_sym_readonly] = ACTIONS(131),
        [anon_sym_attribute] = ACTIONS(134),
        [anon_sym_bitset] = ACTIONS(137),
        [anon_sym_bitmask] = ACTIONS(140),
        [anon_sym_AT] = ACTIONS(143),
        [anon_sym_valuetype] = ACTIONS(146),
        [anon_sym_struct] = ACTIONS(149),
        [anon_sym_union] = ACTIONS(152),
        [anon_sym_enum] = ACTIONS(155),
        [anon_sym_const] = ACTIONS(158),
        [anon_sym_custom] = ACTIONS(161),
        [anon_sym_public] = ACTIONS(164),
        [anon_sym_private] = ACTIONS(164),
        [anon_sym_factory] = ACTIONS(167),
        [anon_sym_typedef] = ACTIONS(170),
        [anon_sym_ATignore_literal_names] = ACTIONS(173),
        [anon_sym_typeid] = ACTIONS(176),
        [anon_sym_import] = ACTIONS(179),
        [sym_object_type] = ACTIONS(72),
        [anon_sym_oneway] = ACTIONS(182),
        [sym_value_base_type] = ACTIONS(72),
        [anon_sym_native] = ACTIONS(185),
        [sym_identifier] = ACTIONS(188),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [3] = {
        [sym_signed_short_int] = STATE(251),
        [sym_signed_long_int] = STATE(251),
        [sym_signed_longlong_int] = STATE(251),
        [sym_unsigned_int] = STATE(231),
        [sym_integer_type] = STATE(289),
        [sym_signed_int] = STATE(231),
        [sym_unsigned_short_int] = STATE(257),
        [sym_unsigned_long_int] = STATE(257),
        [sym_unsigned_longlong_int] = STATE(257),
        [sym_floating_pt_type] = STATE(289),
        [sym_char_type] = STATE(289),
        [sym_scoped_name] = STATE(219),
        [sym_string_type] = STATE(297),
        [sym_type_spec] = STATE(514),
        [sym_simple_type_spec] = STATE(345),
        [sym_base_type_spec] = STATE(299),
        [sym_any_type] = STATE(289),
        [sym_fixed_pt_type] = STATE(297),
        [sym_template_type_spec] = STATE(345),
        [sym_sequence_type] = STATE(297),
        [sym_map_type] = STATE(297),
        [sym_except_dcl] = STATE(635),
        [sym_export] = STATE(48),
        [sym_op_dcl] = STATE(350),
        [sym_op_type_spec] = STATE(502),
        [sym_attr_dcl] = STATE(635),
        [sym_readonly_attr_spec] = STATE(501),
        [sym_attr_spec] = STATE(501),
        [sym_bitset_dcl] = STATE(635),
        [sym_bitmask_dcl] = STATE(635),
        [sym_annotation_appl] = STATE(162),
        [sym_value_dcl] = STATE(635),
        [sym_value_def] = STATE(613),
        [sym_value_kind] = STATE(612),
        [sym_value_header] = STATE(611),
        [sym_value_element] = STATE(41),
        [sym_state_member] = STATE(48),
        [sym_init_dcl] = STATE(48),
        [sym_value_forward_dcl] = STATE(613),
        [sym_typedef_dcl] = STATE(635),
        [sym_enum_dcl] = STATE(635),
        [sym_enum_anno] = STATE(608),
        [sym_union_forward_dcl] = STATE(635),
        [sym_union_def] = STATE(635),
        [sym_type_id_dcl] = STATE(635),
        [sym_import_dcl] = STATE(635),
        [sym_op_oneway_dcl] = STATE(350),
        [sym_op_with_context] = STATE(635),
        [sym_value_abs_def] = STATE(613),
        [sym_native_dcl] = STATE(635),
        [sym_struct_forward_dcl] = STATE(635),
        [sym_struct_def] = STATE(635),
        [sym_const_dcl] = STATE(635),
        [sym_comment] = STATE(3),
        [aux_sym_interface_def_repeat1] = STATE(182),
        [aux_sym_value_def_repeat1] = STATE(2),
        [anon_sym_short] = ACTIONS(191),
        [anon_sym_int16] = ACTIONS(191),
        [anon_sym_long] = ACTIONS(193),
        [anon_sym_int32] = ACTIONS(193),
        [anon_sym_longlong] = ACTIONS(195),
        [anon_sym_int64] = ACTIONS(197),
        [sym_unsigned_tiny_int] = ACTIONS(199),
        [sym_boolean_type] = ACTIONS(201),
        [anon_sym_fixed] = ACTIONS(203),
        [sym_octet_type] = ACTIONS(201),
        [sym_signed_tiny_int] = ACTIONS(205),
        [anon_sym_unsignedshort] = ACTIONS(207),
        [anon_sym_uint16] = ACTIONS(209),
        [anon_sym_unsignedlong] = ACTIONS(211),
        [anon_sym_uint32] = ACTIONS(211),
        [anon_sym_unsignedlonglong] = ACTIONS(213),
        [anon_sym_uint64] = ACTIONS(215),
        [anon_sym_float] = ACTIONS(217),
        [anon_sym_double] = ACTIONS(217),
        [anon_sym_longdouble] = ACTIONS(219),
        [anon_sym_char] = ACTIONS(221),
        [anon_sym_wchar] = ACTIONS(221),
        [anon_sym_COLON_COLON] = ACTIONS(223),
        [anon_sym_string] = ACTIONS(225),
        [anon_sym_wstring] = ACTIONS(225),
        [anon_sym_any] = ACTIONS(227),
        [anon_sym_sequence] = ACTIONS(229),
        [anon_sym_map] = ACTIONS(231),
        [anon_sym_exception] = ACTIONS(233),
        [anon_sym_RBRACE] = ACTIONS(235),
        [anon_sym_abstract] = ACTIONS(237),
        [anon_sym_void] = ACTIONS(239),
        [anon_sym_readonly] = ACTIONS(241),
        [anon_sym_attribute] = ACTIONS(243),
        [anon_sym_bitset] = ACTIONS(245),
        [anon_sym_bitmask] = ACTIONS(247),
        [anon_sym_AT] = ACTIONS(249),
        [anon_sym_valuetype] = ACTIONS(251),
        [anon_sym_struct] = ACTIONS(253),
        [anon_sym_union] = ACTIONS(255),
        [anon_sym_enum] = ACTIONS(257),
        [anon_sym_const] = ACTIONS(259),
        [anon_sym_custom] = ACTIONS(261),
        [anon_sym_public] = ACTIONS(263),
        [anon_sym_private] = ACTIONS(263),
        [anon_sym_factory] = ACTIONS(265),
        [anon_sym_typedef] = ACTIONS(267),
        [anon_sym_ATignore_literal_names] = ACTIONS(43),
        [anon_sym_typeid] = ACTIONS(269),
        [anon_sym_import] = ACTIONS(271),
        [sym_object_type] = ACTIONS(201),
        [anon_sym_oneway] = ACTIONS(273),
        [sym_value_base_type] = ACTIONS(201),
        [anon_sym_native] = ACTIONS(275),
        [sym_identifier] = ACTIONS(277),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [4] = {
        [sym_signed_short_int] = STATE(251),
        [sym_signed_long_int] = STATE(251),
        [sym_signed_longlong_int] = STATE(251),
        [sym_unsigned_int] = STATE(231),
        [sym_integer_type] = STATE(289),
        [sym_signed_int] = STATE(231),
        [sym_unsigned_short_int] = STATE(257),
        [sym_unsigned_long_int] = STATE(257),
        [sym_unsigned_longlong_int] = STATE(257),
        [sym_floating_pt_type] = STATE(289),
        [sym_char_type] = STATE(289),
        [sym_scoped_name] = STATE(219),
        [sym_string_type] = STATE(297),
        [sym_type_spec] = STATE(514),
        [sym_simple_type_spec] = STATE(345),
        [sym_base_type_spec] = STATE(299),
        [sym_any_type] = STATE(289),
        [sym_fixed_pt_type] = STATE(297),
        [sym_template_type_spec] = STATE(345),
        [sym_sequence_type] = STATE(297),
        [sym_map_type] = STATE(297),
        [sym_except_dcl] = STATE(635),
        [sym_export] = STATE(48),
        [sym_op_dcl] = STATE(350),
        [sym_op_type_spec] = STATE(502),
        [sym_attr_dcl] = STATE(635),
        [sym_readonly_attr_spec] = STATE(501),
        [sym_attr_spec] = STATE(501),
        [sym_bitset_dcl] = STATE(635),
        [sym_bitmask_dcl] = STATE(635),
        [sym_annotation_appl] = STATE(162),
        [sym_value_dcl] = STATE(635),
        [sym_value_def] = STATE(613),
        [sym_value_kind] = STATE(612),
        [sym_value_header] = STATE(611),
        [sym_value_element] = STATE(41),
        [sym_state_member] = STATE(48),
        [sym_init_dcl] = STATE(48),
        [sym_value_forward_dcl] = STATE(613),
        [sym_typedef_dcl] = STATE(635),
        [sym_enum_dcl] = STATE(635),
        [sym_enum_anno] = STATE(608),
        [sym_union_forward_dcl] = STATE(635),
        [sym_union_def] = STATE(635),
        [sym_type_id_dcl] = STATE(635),
        [sym_import_dcl] = STATE(635),
        [sym_op_oneway_dcl] = STATE(350),
        [sym_op_with_context] = STATE(635),
        [sym_value_abs_def] = STATE(613),
        [sym_native_dcl] = STATE(635),
        [sym_struct_forward_dcl] = STATE(635),
        [sym_struct_def] = STATE(635),
        [sym_const_dcl] = STATE(635),
        [sym_comment] = STATE(4),
        [aux_sym_interface_def_repeat1] = STATE(182),
        [aux_sym_value_def_repeat1] = STATE(3),
        [anon_sym_short] = ACTIONS(191),
        [anon_sym_int16] = ACTIONS(191),
        [anon_sym_long] = ACTIONS(193),
        [anon_sym_int32] = ACTIONS(193),
        [anon_sym_longlong] = ACTIONS(195),
        [anon_sym_int64] = ACTIONS(197),
        [sym_unsigned_tiny_int] = ACTIONS(199),
        [sym_boolean_type] = ACTIONS(201),
        [anon_sym_fixed] = ACTIONS(203),
        [sym_octet_type] = ACTIONS(201),
        [sym_signed_tiny_int] = ACTIONS(205),
        [anon_sym_unsignedshort] = ACTIONS(207),
        [anon_sym_uint16] = ACTIONS(209),
        [anon_sym_unsignedlong] = ACTIONS(211),
        [anon_sym_uint32] = ACTIONS(211),
        [anon_sym_unsignedlonglong] = ACTIONS(213),
        [anon_sym_uint64] = ACTIONS(215),
        [anon_sym_float] = ACTIONS(217),
        [anon_sym_double] = ACTIONS(217),
        [anon_sym_longdouble] = ACTIONS(219),
        [anon_sym_char] = ACTIONS(221),
        [anon_sym_wchar] = ACTIONS(221),
        [anon_sym_COLON_COLON] = ACTIONS(223),
        [anon_sym_string] = ACTIONS(225),
        [anon_sym_wstring] = ACTIONS(225),
        [anon_sym_any] = ACTIONS(227),
        [anon_sym_sequence] = ACTIONS(229),
        [anon_sym_map] = ACTIONS(231),
        [anon_sym_exception] = ACTIONS(233),
        [anon_sym_RBRACE] = ACTIONS(279),
        [anon_sym_abstract] = ACTIONS(237),
        [anon_sym_void] = ACTIONS(239),
        [anon_sym_readonly] = ACTIONS(241),
        [anon_sym_attribute] = ACTIONS(243),
        [anon_sym_bitset] = ACTIONS(245),
        [anon_sym_bitmask] = ACTIONS(247),
        [anon_sym_AT] = ACTIONS(249),
        [anon_sym_valuetype] = ACTIONS(251),
        [anon_sym_struct] = ACTIONS(253),
        [anon_sym_union] = ACTIONS(255),
        [anon_sym_enum] = ACTIONS(257),
        [anon_sym_const] = ACTIONS(259),
        [anon_sym_custom] = ACTIONS(261),
        [anon_sym_public] = ACTIONS(263),
        [anon_sym_private] = ACTIONS(263),
        [anon_sym_factory] = ACTIONS(265),
        [anon_sym_typedef] = ACTIONS(267),
        [anon_sym_ATignore_literal_names] = ACTIONS(43),
        [anon_sym_typeid] = ACTIONS(269),
        [anon_sym_import] = ACTIONS(271),
        [sym_object_type] = ACTIONS(201),
        [anon_sym_oneway] = ACTIONS(273),
        [sym_value_base_type] = ACTIONS(201),
        [anon_sym_native] = ACTIONS(275),
        [sym_identifier] = ACTIONS(277),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [5] = {
        [sym_signed_short_int] = STATE(251),
        [sym_signed_long_int] = STATE(251),
        [sym_signed_longlong_int] = STATE(251),
        [sym_unsigned_int] = STATE(231),
        [sym_integer_type] = STATE(289),
        [sym_signed_int] = STATE(231),
        [sym_unsigned_short_int] = STATE(257),
        [sym_unsigned_long_int] = STATE(257),
        [sym_unsigned_longlong_int] = STATE(257),
        [sym_floating_pt_type] = STATE(289),
        [sym_char_type] = STATE(289),
        [sym_scoped_name] = STATE(219),
        [sym_string_type] = STATE(297),
        [sym_type_spec] = STATE(514),
        [sym_simple_type_spec] = STATE(345),
        [sym_base_type_spec] = STATE(299),
        [sym_any_type] = STATE(289),
        [sym_fixed_pt_type] = STATE(297),
        [sym_template_type_spec] = STATE(345),
        [sym_sequence_type] = STATE(297),
        [sym_map_type] = STATE(297),
        [sym_except_dcl] = STATE(464),
        [sym_interface_body] = STATE(503),
        [sym_export] = STATE(60),
        [sym_op_dcl] = STATE(339),
        [sym_op_type_spec] = STATE(502),
        [sym_attr_dcl] = STATE(464),
        [sym_readonly_attr_spec] = STATE(501),
        [sym_attr_spec] = STATE(501),
        [sym_bitset_dcl] = STATE(464),
        [sym_bitmask_dcl] = STATE(464),
        [sym_annotation_appl] = STATE(162),
        [sym_value_dcl] = STATE(464),
        [sym_value_def] = STATE(613),
        [sym_value_kind] = STATE(612),
        [sym_value_header] = STATE(611),
        [sym_value_forward_dcl] = STATE(613),
        [sym_typedef_dcl] = STATE(464),
        [sym_enum_dcl] = STATE(464),
        [sym_enum_anno] = STATE(608),
        [sym_union_forward_dcl] = STATE(464),
        [sym_union_def] = STATE(464),
        [sym_type_id_dcl] = STATE(464),
        [sym_import_dcl] = STATE(464),
        [sym_op_oneway_dcl] = STATE(339),
        [sym_op_with_context] = STATE(464),
        [sym_value_abs_def] = STATE(613),
        [sym_native_dcl] = STATE(464),
        [sym_struct_forward_dcl] = STATE(464),
        [sym_struct_def] = STATE(464),
        [sym_const_dcl] = STATE(464),
        [sym_comment] = STATE(5),
        [aux_sym_interface_def_repeat1] = STATE(182),
        [aux_sym_interface_body_repeat1] = STATE(12),
        [anon_sym_short] = ACTIONS(191),
        [anon_sym_int16] = ACTIONS(191),
        [anon_sym_long] = ACTIONS(193),
        [anon_sym_int32] = ACTIONS(193),
        [anon_sym_longlong] = ACTIONS(195),
        [anon_sym_int64] = ACTIONS(197),
        [sym_unsigned_tiny_int] = ACTIONS(199),
        [sym_boolean_type] = ACTIONS(201),
        [anon_sym_fixed] = ACTIONS(203),
        [sym_octet_type] = ACTIONS(201),
        [sym_signed_tiny_int] = ACTIONS(205),
        [anon_sym_unsignedshort] = ACTIONS(207),
        [anon_sym_uint16] = ACTIONS(209),
        [anon_sym_unsignedlong] = ACTIONS(211),
        [anon_sym_uint32] = ACTIONS(211),
        [anon_sym_unsignedlonglong] = ACTIONS(213),
        [anon_sym_uint64] = ACTIONS(215),
        [anon_sym_float] = ACTIONS(217),
        [anon_sym_double] = ACTIONS(217),
        [anon_sym_longdouble] = ACTIONS(219),
        [anon_sym_char] = ACTIONS(221),
        [anon_sym_wchar] = ACTIONS(221),
        [anon_sym_COLON_COLON] = ACTIONS(223),
        [anon_sym_string] = ACTIONS(225),
        [anon_sym_wstring] = ACTIONS(225),
        [anon_sym_any] = ACTIONS(227),
        [anon_sym_sequence] = ACTIONS(229),
        [anon_sym_map] = ACTIONS(231),
        [anon_sym_exception] = ACTIONS(233),
        [anon_sym_RBRACE] = ACTIONS(281),
        [anon_sym_abstract] = ACTIONS(237),
        [anon_sym_void] = ACTIONS(239),
        [anon_sym_readonly] = ACTIONS(241),
        [anon_sym_attribute] = ACTIONS(243),
        [anon_sym_bitset] = ACTIONS(245),
        [anon_sym_bitmask] = ACTIONS(247),
        [anon_sym_AT] = ACTIONS(249),
        [anon_sym_valuetype] = ACTIONS(251),
        [anon_sym_struct] = ACTIONS(253),
        [anon_sym_union] = ACTIONS(255),
        [anon_sym_enum] = ACTIONS(257),
        [anon_sym_const] = ACTIONS(259),
        [anon_sym_custom] = ACTIONS(261),
        [anon_sym_typedef] = ACTIONS(267),
        [anon_sym_ATignore_literal_names] = ACTIONS(43),
        [anon_sym_typeid] = ACTIONS(269),
        [anon_sym_import] = ACTIONS(271),
        [sym_object_type] = ACTIONS(201),
        [anon_sym_oneway] = ACTIONS(273),
        [sym_value_base_type] = ACTIONS(201),
        [anon_sym_native] = ACTIONS(275),
        [sym_identifier] = ACTIONS(277),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [6] = {
        [sym_signed_short_int] = STATE(251),
        [sym_signed_long_int] = STATE(251),
        [sym_signed_longlong_int] = STATE(251),
        [sym_unsigned_int] = STATE(231),
        [sym_integer_type] = STATE(289),
        [sym_signed_int] = STATE(231),
        [sym_unsigned_short_int] = STATE(257),
        [sym_unsigned_long_int] = STATE(257),
        [sym_unsigned_longlong_int] = STATE(257),
        [sym_floating_pt_type] = STATE(289),
        [sym_char_type] = STATE(289),
        [sym_scoped_name] = STATE(219),
        [sym_string_type] = STATE(297),
        [sym_type_spec] = STATE(514),
        [sym_simple_type_spec] = STATE(345),
        [sym_base_type_spec] = STATE(299),
        [sym_any_type] = STATE(289),
        [sym_fixed_pt_type] = STATE(297),
        [sym_template_type_spec] = STATE(345),
        [sym_sequence_type] = STATE(297),
        [sym_map_type] = STATE(297),
        [sym_except_dcl] = STATE(464),
        [sym_interface_body] = STATE(572),
        [sym_export] = STATE(60),
        [sym_op_dcl] = STATE(339),
        [sym_op_type_spec] = STATE(502),
        [sym_attr_dcl] = STATE(464),
        [sym_readonly_attr_spec] = STATE(501),
        [sym_attr_spec] = STATE(501),
        [sym_bitset_dcl] = STATE(464),
        [sym_bitmask_dcl] = STATE(464),
        [sym_annotation_appl] = STATE(162),
        [sym_value_dcl] = STATE(464),
        [sym_value_def] = STATE(613),
        [sym_value_kind] = STATE(612),
        [sym_value_header] = STATE(611),
        [sym_value_forward_dcl] = STATE(613),
        [sym_typedef_dcl] = STATE(464),
        [sym_enum_dcl] = STATE(464),
        [sym_enum_anno] = STATE(608),
        [sym_union_forward_dcl] = STATE(464),
        [sym_union_def] = STATE(464),
        [sym_type_id_dcl] = STATE(464),
        [sym_import_dcl] = STATE(464),
        [sym_op_oneway_dcl] = STATE(339),
        [sym_op_with_context] = STATE(464),
        [sym_value_abs_def] = STATE(613),
        [sym_native_dcl] = STATE(464),
        [sym_struct_forward_dcl] = STATE(464),
        [sym_struct_def] = STATE(464),
        [sym_const_dcl] = STATE(464),
        [sym_comment] = STATE(6),
        [aux_sym_interface_def_repeat1] = STATE(182),
        [aux_sym_interface_body_repeat1] = STATE(12),
        [anon_sym_short] = ACTIONS(191),
        [anon_sym_int16] = ACTIONS(191),
        [anon_sym_long] = ACTIONS(193),
        [anon_sym_int32] = ACTIONS(193),
        [anon_sym_longlong] = ACTIONS(195),
        [anon_sym_int64] = ACTIONS(197),
        [sym_unsigned_tiny_int] = ACTIONS(199),
        [sym_boolean_type] = ACTIONS(201),
        [anon_sym_fixed] = ACTIONS(203),
        [sym_octet_type] = ACTIONS(201),
        [sym_signed_tiny_int] = ACTIONS(205),
        [anon_sym_unsignedshort] = ACTIONS(207),
        [anon_sym_uint16] = ACTIONS(209),
        [anon_sym_unsignedlong] = ACTIONS(211),
        [anon_sym_uint32] = ACTIONS(211),
        [anon_sym_unsignedlonglong] = ACTIONS(213),
        [anon_sym_uint64] = ACTIONS(215),
        [anon_sym_float] = ACTIONS(217),
        [anon_sym_double] = ACTIONS(217),
        [anon_sym_longdouble] = ACTIONS(219),
        [anon_sym_char] = ACTIONS(221),
        [anon_sym_wchar] = ACTIONS(221),
        [anon_sym_COLON_COLON] = ACTIONS(223),
        [anon_sym_string] = ACTIONS(225),
        [anon_sym_wstring] = ACTIONS(225),
        [anon_sym_any] = ACTIONS(227),
        [anon_sym_sequence] = ACTIONS(229),
        [anon_sym_map] = ACTIONS(231),
        [anon_sym_exception] = ACTIONS(233),
        [anon_sym_RBRACE] = ACTIONS(283),
        [anon_sym_abstract] = ACTIONS(237),
        [anon_sym_void] = ACTIONS(239),
        [anon_sym_readonly] = ACTIONS(241),
        [anon_sym_attribute] = ACTIONS(243),
        [anon_sym_bitset] = ACTIONS(245),
        [anon_sym_bitmask] = ACTIONS(247),
        [anon_sym_AT] = ACTIONS(249),
        [anon_sym_valuetype] = ACTIONS(251),
        [anon_sym_struct] = ACTIONS(253),
        [anon_sym_union] = ACTIONS(255),
        [anon_sym_enum] = ACTIONS(257),
        [anon_sym_const] = ACTIONS(259),
        [anon_sym_custom] = ACTIONS(261),
        [anon_sym_typedef] = ACTIONS(267),
        [anon_sym_ATignore_literal_names] = ACTIONS(43),
        [anon_sym_typeid] = ACTIONS(269),
        [anon_sym_import] = ACTIONS(271),
        [sym_object_type] = ACTIONS(201),
        [anon_sym_oneway] = ACTIONS(273),
        [sym_value_base_type] = ACTIONS(201),
        [anon_sym_native] = ACTIONS(275),
        [sym_identifier] = ACTIONS(277),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [7] = {
        [sym_signed_short_int] = STATE(251),
        [sym_signed_long_int] = STATE(251),
        [sym_signed_longlong_int] = STATE(251),
        [sym_unsigned_int] = STATE(231),
        [sym_integer_type] = STATE(289),
        [sym_signed_int] = STATE(231),
        [sym_unsigned_short_int] = STATE(257),
        [sym_unsigned_long_int] = STATE(257),
        [sym_unsigned_longlong_int] = STATE(257),
        [sym_floating_pt_type] = STATE(289),
        [sym_char_type] = STATE(289),
        [sym_scoped_name] = STATE(219),
        [sym_string_type] = STATE(297),
        [sym_type_spec] = STATE(514),
        [sym_simple_type_spec] = STATE(345),
        [sym_base_type_spec] = STATE(299),
        [sym_any_type] = STATE(289),
        [sym_fixed_pt_type] = STATE(297),
        [sym_template_type_spec] = STATE(345),
        [sym_sequence_type] = STATE(297),
        [sym_map_type] = STATE(297),
        [sym_except_dcl] = STATE(464),
        [sym_export] = STATE(60),
        [sym_op_dcl] = STATE(339),
        [sym_op_type_spec] = STATE(502),
        [sym_attr_dcl] = STATE(464),
        [sym_readonly_attr_spec] = STATE(501),
        [sym_attr_spec] = STATE(501),
        [sym_bitset_dcl] = STATE(464),
        [sym_bitmask_dcl] = STATE(464),
        [sym_annotation_appl] = STATE(162),
        [sym_value_dcl] = STATE(464),
        [sym_value_def] = STATE(613),
        [sym_value_kind] = STATE(612),
        [sym_value_header] = STATE(611),
        [sym_value_forward_dcl] = STATE(613),
        [sym_typedef_dcl] = STATE(464),
        [sym_enum_dcl] = STATE(464),
        [sym_enum_anno] = STATE(608),
        [sym_union_forward_dcl] = STATE(464),
        [sym_union_def] = STATE(464),
        [sym_type_id_dcl] = STATE(464),
        [sym_import_dcl] = STATE(464),
        [sym_op_oneway_dcl] = STATE(339),
        [sym_op_with_context] = STATE(464),
        [sym_value_abs_def] = STATE(613),
        [sym_native_dcl] = STATE(464),
        [sym_struct_forward_dcl] = STATE(464),
        [sym_struct_def] = STATE(464),
        [sym_const_dcl] = STATE(464),
        [sym_comment] = STATE(7),
        [aux_sym_interface_def_repeat1] = STATE(182),
        [aux_sym_interface_body_repeat1] = STATE(8),
        [anon_sym_short] = ACTIONS(191),
        [anon_sym_int16] = ACTIONS(191),
        [anon_sym_long] = ACTIONS(193),
        [anon_sym_int32] = ACTIONS(193),
        [anon_sym_longlong] = ACTIONS(195),
        [anon_sym_int64] = ACTIONS(197),
        [sym_unsigned_tiny_int] = ACTIONS(199),
        [sym_boolean_type] = ACTIONS(201),
        [anon_sym_fixed] = ACTIONS(203),
        [sym_octet_type] = ACTIONS(201),
        [sym_signed_tiny_int] = ACTIONS(205),
        [anon_sym_unsignedshort] = ACTIONS(207),
        [anon_sym_uint16] = ACTIONS(209),
        [anon_sym_unsignedlong] = ACTIONS(211),
        [anon_sym_uint32] = ACTIONS(211),
        [anon_sym_unsignedlonglong] = ACTIONS(213),
        [anon_sym_uint64] = ACTIONS(215),
        [anon_sym_float] = ACTIONS(217),
        [anon_sym_double] = ACTIONS(217),
        [anon_sym_longdouble] = ACTIONS(219),
        [anon_sym_char] = ACTIONS(221),
        [anon_sym_wchar] = ACTIONS(221),
        [anon_sym_COLON_COLON] = ACTIONS(223),
        [anon_sym_string] = ACTIONS(225),
        [anon_sym_wstring] = ACTIONS(225),
        [anon_sym_any] = ACTIONS(227),
        [anon_sym_sequence] = ACTIONS(229),
        [anon_sym_map] = ACTIONS(231),
        [anon_sym_exception] = ACTIONS(233),
        [anon_sym_RBRACE] = ACTIONS(285),
        [anon_sym_abstract] = ACTIONS(237),
        [anon_sym_void] = ACTIONS(239),
        [anon_sym_readonly] = ACTIONS(241),
        [anon_sym_attribute] = ACTIONS(243),
        [anon_sym_bitset] = ACTIONS(245),
        [anon_sym_bitmask] = ACTIONS(247),
        [anon_sym_AT] = ACTIONS(249),
        [anon_sym_valuetype] = ACTIONS(251),
        [anon_sym_struct] = ACTIONS(253),
        [anon_sym_union] = ACTIONS(255),
        [anon_sym_enum] = ACTIONS(257),
        [anon_sym_const] = ACTIONS(259),
        [anon_sym_custom] = ACTIONS(261),
        [anon_sym_typedef] = ACTIONS(267),
        [anon_sym_ATignore_literal_names] = ACTIONS(43),
        [anon_sym_typeid] = ACTIONS(269),
        [anon_sym_import] = ACTIONS(271),
        [sym_object_type] = ACTIONS(201),
        [anon_sym_oneway] = ACTIONS(273),
        [sym_value_base_type] = ACTIONS(201),
        [anon_sym_native] = ACTIONS(275),
        [sym_identifier] = ACTIONS(277),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [8] = {
        [sym_signed_short_int] = STATE(251),
        [sym_signed_long_int] = STATE(251),
        [sym_signed_longlong_int] = STATE(251),
        [sym_unsigned_int] = STATE(231),
        [sym_integer_type] = STATE(289),
        [sym_signed_int] = STATE(231),
        [sym_unsigned_short_int] = STATE(257),
        [sym_unsigned_long_int] = STATE(257),
        [sym_unsigned_longlong_int] = STATE(257),
        [sym_floating_pt_type] = STATE(289),
        [sym_char_type] = STATE(289),
        [sym_scoped_name] = STATE(219),
        [sym_string_type] = STATE(297),
        [sym_type_spec] = STATE(514),
        [sym_simple_type_spec] = STATE(345),
        [sym_base_type_spec] = STATE(299),
        [sym_any_type] = STATE(289),
        [sym_fixed_pt_type] = STATE(297),
        [sym_template_type_spec] = STATE(345),
        [sym_sequence_type] = STATE(297),
        [sym_map_type] = STATE(297),
        [sym_except_dcl] = STATE(464),
        [sym_export] = STATE(60),
        [sym_op_dcl] = STATE(339),
        [sym_op_type_spec] = STATE(502),
        [sym_attr_dcl] = STATE(464),
        [sym_readonly_attr_spec] = STATE(501),
        [sym_attr_spec] = STATE(501),
        [sym_bitset_dcl] = STATE(464),
        [sym_bitmask_dcl] = STATE(464),
        [sym_annotation_appl] = STATE(162),
        [sym_value_dcl] = STATE(464),
        [sym_value_def] = STATE(613),
        [sym_value_kind] = STATE(612),
        [sym_value_header] = STATE(611),
        [sym_value_forward_dcl] = STATE(613),
        [sym_typedef_dcl] = STATE(464),
        [sym_enum_dcl] = STATE(464),
        [sym_enum_anno] = STATE(608),
        [sym_union_forward_dcl] = STATE(464),
        [sym_union_def] = STATE(464),
        [sym_type_id_dcl] = STATE(464),
        [sym_import_dcl] = STATE(464),
        [sym_op_oneway_dcl] = STATE(339),
        [sym_op_with_context] = STATE(464),
        [sym_value_abs_def] = STATE(613),
        [sym_native_dcl] = STATE(464),
        [sym_struct_forward_dcl] = STATE(464),
        [sym_struct_def] = STATE(464),
        [sym_const_dcl] = STATE(464),
        [sym_comment] = STATE(8),
        [aux_sym_interface_def_repeat1] = STATE(182),
        [aux_sym_interface_body_repeat1] = STATE(8),
        [anon_sym_short] = ACTIONS(287),
        [anon_sym_int16] = ACTIONS(287),
        [anon_sym_long] = ACTIONS(290),
        [anon_sym_int32] = ACTIONS(290),
        [anon_sym_longlong] = ACTIONS(293),
        [anon_sym_int64] = ACTIONS(296),
        [sym_unsigned_tiny_int] = ACTIONS(299),
        [sym_boolean_type] = ACTIONS(302),
        [anon_sym_fixed] = ACTIONS(305),
        [sym_octet_type] = ACTIONS(302),
        [sym_signed_tiny_int] = ACTIONS(308),
        [anon_sym_unsignedshort] = ACTIONS(311),
        [anon_sym_uint16] = ACTIONS(314),
        [anon_sym_unsignedlong] = ACTIONS(317),
        [anon_sym_uint32] = ACTIONS(317),
        [anon_sym_unsignedlonglong] = ACTIONS(320),
        [anon_sym_uint64] = ACTIONS(323),
        [anon_sym_float] = ACTIONS(326),
        [anon_sym_double] = ACTIONS(326),
        [anon_sym_longdouble] = ACTIONS(329),
        [anon_sym_char] = ACTIONS(332),
        [anon_sym_wchar] = ACTIONS(332),
        [anon_sym_COLON_COLON] = ACTIONS(335),
        [anon_sym_string] = ACTIONS(338),
        [anon_sym_wstring] = ACTIONS(338),
        [anon_sym_any] = ACTIONS(341),
        [anon_sym_sequence] = ACTIONS(344),
        [anon_sym_map] = ACTIONS(347),
        [anon_sym_exception] = ACTIONS(350),
        [anon_sym_RBRACE] = ACTIONS(353),
        [anon_sym_abstract] = ACTIONS(355),
        [anon_sym_void] = ACTIONS(358),
        [anon_sym_readonly] = ACTIONS(361),
        [anon_sym_attribute] = ACTIONS(364),
        [anon_sym_bitset] = ACTIONS(367),
        [anon_sym_bitmask] = ACTIONS(370),
        [anon_sym_AT] = ACTIONS(373),
        [anon_sym_valuetype] = ACTIONS(376),
        [anon_sym_struct] = ACTIONS(379),
        [anon_sym_union] = ACTIONS(382),
        [anon_sym_enum] = ACTIONS(385),
        [anon_sym_const] = ACTIONS(388),
        [anon_sym_custom] = ACTIONS(391),
        [anon_sym_typedef] = ACTIONS(394),
        [anon_sym_ATignore_literal_names] = ACTIONS(397),
        [anon_sym_typeid] = ACTIONS(400),
        [anon_sym_import] = ACTIONS(403),
        [sym_object_type] = ACTIONS(302),
        [anon_sym_oneway] = ACTIONS(406),
        [sym_value_base_type] = ACTIONS(302),
        [anon_sym_native] = ACTIONS(409),
        [sym_identifier] = ACTIONS(412),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [9] = {
        [sym_signed_short_int] = STATE(251),
        [sym_signed_long_int] = STATE(251),
        [sym_signed_longlong_int] = STATE(251),
        [sym_unsigned_int] = STATE(231),
        [sym_integer_type] = STATE(289),
        [sym_signed_int] = STATE(231),
        [sym_unsigned_short_int] = STATE(257),
        [sym_unsigned_long_int] = STATE(257),
        [sym_unsigned_longlong_int] = STATE(257),
        [sym_floating_pt_type] = STATE(289),
        [sym_char_type] = STATE(289),
        [sym_scoped_name] = STATE(219),
        [sym_string_type] = STATE(297),
        [sym_type_spec] = STATE(514),
        [sym_simple_type_spec] = STATE(345),
        [sym_base_type_spec] = STATE(299),
        [sym_any_type] = STATE(289),
        [sym_fixed_pt_type] = STATE(297),
        [sym_template_type_spec] = STATE(345),
        [sym_sequence_type] = STATE(297),
        [sym_map_type] = STATE(297),
        [sym_except_dcl] = STATE(464),
        [sym_export] = STATE(60),
        [sym_op_dcl] = STATE(339),
        [sym_op_type_spec] = STATE(502),
        [sym_attr_dcl] = STATE(464),
        [sym_readonly_attr_spec] = STATE(501),
        [sym_attr_spec] = STATE(501),
        [sym_bitset_dcl] = STATE(464),
        [sym_bitmask_dcl] = STATE(464),
        [sym_annotation_appl] = STATE(162),
        [sym_value_dcl] = STATE(464),
        [sym_value_def] = STATE(613),
        [sym_value_kind] = STATE(612),
        [sym_value_header] = STATE(611),
        [sym_value_forward_dcl] = STATE(613),
        [sym_typedef_dcl] = STATE(464),
        [sym_enum_dcl] = STATE(464),
        [sym_enum_anno] = STATE(608),
        [sym_union_forward_dcl] = STATE(464),
        [sym_union_def] = STATE(464),
        [sym_type_id_dcl] = STATE(464),
        [sym_import_dcl] = STATE(464),
        [sym_op_oneway_dcl] = STATE(339),
        [sym_op_with_context] = STATE(464),
        [sym_value_abs_def] = STATE(613),
        [sym_native_dcl] = STATE(464),
        [sym_struct_forward_dcl] = STATE(464),
        [sym_struct_def] = STATE(464),
        [sym_const_dcl] = STATE(464),
        [sym_comment] = STATE(9),
        [aux_sym_interface_def_repeat1] = STATE(182),
        [aux_sym_interface_body_repeat1] = STATE(8),
        [anon_sym_short] = ACTIONS(191),
        [anon_sym_int16] = ACTIONS(191),
        [anon_sym_long] = ACTIONS(193),
        [anon_sym_int32] = ACTIONS(193),
        [anon_sym_longlong] = ACTIONS(195),
        [anon_sym_int64] = ACTIONS(197),
        [sym_unsigned_tiny_int] = ACTIONS(199),
        [sym_boolean_type] = ACTIONS(201),
        [anon_sym_fixed] = ACTIONS(203),
        [sym_octet_type] = ACTIONS(201),
        [sym_signed_tiny_int] = ACTIONS(205),
        [anon_sym_unsignedshort] = ACTIONS(207),
        [anon_sym_uint16] = ACTIONS(209),
        [anon_sym_unsignedlong] = ACTIONS(211),
        [anon_sym_uint32] = ACTIONS(211),
        [anon_sym_unsignedlonglong] = ACTIONS(213),
        [anon_sym_uint64] = ACTIONS(215),
        [anon_sym_float] = ACTIONS(217),
        [anon_sym_double] = ACTIONS(217),
        [anon_sym_longdouble] = ACTIONS(219),
        [anon_sym_char] = ACTIONS(221),
        [anon_sym_wchar] = ACTIONS(221),
        [anon_sym_COLON_COLON] = ACTIONS(223),
        [anon_sym_string] = ACTIONS(225),
        [anon_sym_wstring] = ACTIONS(225),
        [anon_sym_any] = ACTIONS(227),
        [anon_sym_sequence] = ACTIONS(229),
        [anon_sym_map] = ACTIONS(231),
        [anon_sym_exception] = ACTIONS(233),
        [anon_sym_RBRACE] = ACTIONS(415),
        [anon_sym_abstract] = ACTIONS(237),
        [anon_sym_void] = ACTIONS(239),
        [anon_sym_readonly] = ACTIONS(241),
        [anon_sym_attribute] = ACTIONS(243),
        [anon_sym_bitset] = ACTIONS(245),
        [anon_sym_bitmask] = ACTIONS(247),
        [anon_sym_AT] = ACTIONS(249),
        [anon_sym_valuetype] = ACTIONS(251),
        [anon_sym_struct] = ACTIONS(253),
        [anon_sym_union] = ACTIONS(255),
        [anon_sym_enum] = ACTIONS(257),
        [anon_sym_const] = ACTIONS(259),
        [anon_sym_custom] = ACTIONS(261),
        [anon_sym_typedef] = ACTIONS(267),
        [anon_sym_ATignore_literal_names] = ACTIONS(43),
        [anon_sym_typeid] = ACTIONS(269),
        [anon_sym_import] = ACTIONS(271),
        [sym_object_type] = ACTIONS(201),
        [anon_sym_oneway] = ACTIONS(273),
        [sym_value_base_type] = ACTIONS(201),
        [anon_sym_native] = ACTIONS(275),
        [sym_identifier] = ACTIONS(277),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [10] = {
        [sym_signed_short_int] = STATE(251),
        [sym_signed_long_int] = STATE(251),
        [sym_signed_longlong_int] = STATE(251),
        [sym_unsigned_int] = STATE(231),
        [sym_integer_type] = STATE(289),
        [sym_signed_int] = STATE(231),
        [sym_unsigned_short_int] = STATE(257),
        [sym_unsigned_long_int] = STATE(257),
        [sym_unsigned_longlong_int] = STATE(257),
        [sym_floating_pt_type] = STATE(289),
        [sym_char_type] = STATE(289),
        [sym_scoped_name] = STATE(219),
        [sym_string_type] = STATE(297),
        [sym_type_spec] = STATE(514),
        [sym_simple_type_spec] = STATE(345),
        [sym_base_type_spec] = STATE(299),
        [sym_any_type] = STATE(289),
        [sym_fixed_pt_type] = STATE(297),
        [sym_template_type_spec] = STATE(345),
        [sym_sequence_type] = STATE(297),
        [sym_map_type] = STATE(297),
        [sym_except_dcl] = STATE(464),
        [sym_export] = STATE(60),
        [sym_op_dcl] = STATE(339),
        [sym_op_type_spec] = STATE(502),
        [sym_attr_dcl] = STATE(464),
        [sym_readonly_attr_spec] = STATE(501),
        [sym_attr_spec] = STATE(501),
        [sym_bitset_dcl] = STATE(464),
        [sym_bitmask_dcl] = STATE(464),
        [sym_annotation_appl] = STATE(162),
        [sym_value_dcl] = STATE(464),
        [sym_value_def] = STATE(613),
        [sym_value_kind] = STATE(612),
        [sym_value_header] = STATE(611),
        [sym_value_forward_dcl] = STATE(613),
        [sym_typedef_dcl] = STATE(464),
        [sym_enum_dcl] = STATE(464),
        [sym_enum_anno] = STATE(608),
        [sym_union_forward_dcl] = STATE(464),
        [sym_union_def] = STATE(464),
        [sym_type_id_dcl] = STATE(464),
        [sym_import_dcl] = STATE(464),
        [sym_op_oneway_dcl] = STATE(339),
        [sym_op_with_context] = STATE(464),
        [sym_value_abs_def] = STATE(613),
        [sym_native_dcl] = STATE(464),
        [sym_struct_forward_dcl] = STATE(464),
        [sym_struct_def] = STATE(464),
        [sym_const_dcl] = STATE(464),
        [sym_comment] = STATE(10),
        [aux_sym_interface_def_repeat1] = STATE(182),
        [aux_sym_interface_body_repeat1] = STATE(9),
        [anon_sym_short] = ACTIONS(191),
        [anon_sym_int16] = ACTIONS(191),
        [anon_sym_long] = ACTIONS(193),
        [anon_sym_int32] = ACTIONS(193),
        [anon_sym_longlong] = ACTIONS(195),
        [anon_sym_int64] = ACTIONS(197),
        [sym_unsigned_tiny_int] = ACTIONS(199),
        [sym_boolean_type] = ACTIONS(201),
        [anon_sym_fixed] = ACTIONS(203),
        [sym_octet_type] = ACTIONS(201),
        [sym_signed_tiny_int] = ACTIONS(205),
        [anon_sym_unsignedshort] = ACTIONS(207),
        [anon_sym_uint16] = ACTIONS(209),
        [anon_sym_unsignedlong] = ACTIONS(211),
        [anon_sym_uint32] = ACTIONS(211),
        [anon_sym_unsignedlonglong] = ACTIONS(213),
        [anon_sym_uint64] = ACTIONS(215),
        [anon_sym_float] = ACTIONS(217),
        [anon_sym_double] = ACTIONS(217),
        [anon_sym_longdouble] = ACTIONS(219),
        [anon_sym_char] = ACTIONS(221),
        [anon_sym_wchar] = ACTIONS(221),
        [anon_sym_COLON_COLON] = ACTIONS(223),
        [anon_sym_string] = ACTIONS(225),
        [anon_sym_wstring] = ACTIONS(225),
        [anon_sym_any] = ACTIONS(227),
        [anon_sym_sequence] = ACTIONS(229),
        [anon_sym_map] = ACTIONS(231),
        [anon_sym_exception] = ACTIONS(233),
        [anon_sym_RBRACE] = ACTIONS(285),
        [anon_sym_abstract] = ACTIONS(237),
        [anon_sym_void] = ACTIONS(239),
        [anon_sym_readonly] = ACTIONS(241),
        [anon_sym_attribute] = ACTIONS(243),
        [anon_sym_bitset] = ACTIONS(245),
        [anon_sym_bitmask] = ACTIONS(247),
        [anon_sym_AT] = ACTIONS(249),
        [anon_sym_valuetype] = ACTIONS(251),
        [anon_sym_struct] = ACTIONS(253),
        [anon_sym_union] = ACTIONS(255),
        [anon_sym_enum] = ACTIONS(257),
        [anon_sym_const] = ACTIONS(259),
        [anon_sym_custom] = ACTIONS(261),
        [anon_sym_typedef] = ACTIONS(267),
        [anon_sym_ATignore_literal_names] = ACTIONS(43),
        [anon_sym_typeid] = ACTIONS(269),
        [anon_sym_import] = ACTIONS(271),
        [sym_object_type] = ACTIONS(201),
        [anon_sym_oneway] = ACTIONS(273),
        [sym_value_base_type] = ACTIONS(201),
        [anon_sym_native] = ACTIONS(275),
        [sym_identifier] = ACTIONS(277),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [11] = {
        [sym_signed_short_int] = STATE(251),
        [sym_signed_long_int] = STATE(251),
        [sym_signed_longlong_int] = STATE(251),
        [sym_unsigned_int] = STATE(231),
        [sym_integer_type] = STATE(289),
        [sym_signed_int] = STATE(231),
        [sym_unsigned_short_int] = STATE(257),
        [sym_unsigned_long_int] = STATE(257),
        [sym_unsigned_longlong_int] = STATE(257),
        [sym_floating_pt_type] = STATE(289),
        [sym_char_type] = STATE(289),
        [sym_scoped_name] = STATE(219),
        [sym_string_type] = STATE(297),
        [sym_type_spec] = STATE(514),
        [sym_simple_type_spec] = STATE(345),
        [sym_base_type_spec] = STATE(299),
        [sym_any_type] = STATE(289),
        [sym_fixed_pt_type] = STATE(297),
        [sym_template_type_spec] = STATE(345),
        [sym_sequence_type] = STATE(297),
        [sym_map_type] = STATE(297),
        [sym_except_dcl] = STATE(464),
        [sym_export] = STATE(60),
        [sym_op_dcl] = STATE(339),
        [sym_op_type_spec] = STATE(502),
        [sym_attr_dcl] = STATE(464),
        [sym_readonly_attr_spec] = STATE(501),
        [sym_attr_spec] = STATE(501),
        [sym_bitset_dcl] = STATE(464),
        [sym_bitmask_dcl] = STATE(464),
        [sym_annotation_appl] = STATE(162),
        [sym_value_dcl] = STATE(464),
        [sym_value_def] = STATE(613),
        [sym_value_kind] = STATE(612),
        [sym_value_header] = STATE(611),
        [sym_value_forward_dcl] = STATE(613),
        [sym_typedef_dcl] = STATE(464),
        [sym_enum_dcl] = STATE(464),
        [sym_enum_anno] = STATE(608),
        [sym_union_forward_dcl] = STATE(464),
        [sym_union_def] = STATE(464),
        [sym_type_id_dcl] = STATE(464),
        [sym_import_dcl] = STATE(464),
        [sym_op_oneway_dcl] = STATE(339),
        [sym_op_with_context] = STATE(464),
        [sym_value_abs_def] = STATE(613),
        [sym_native_dcl] = STATE(464),
        [sym_struct_forward_dcl] = STATE(464),
        [sym_struct_def] = STATE(464),
        [sym_const_dcl] = STATE(464),
        [sym_comment] = STATE(11),
        [aux_sym_interface_def_repeat1] = STATE(182),
        [aux_sym_interface_body_repeat1] = STATE(7),
        [anon_sym_short] = ACTIONS(191),
        [anon_sym_int16] = ACTIONS(191),
        [anon_sym_long] = ACTIONS(193),
        [anon_sym_int32] = ACTIONS(193),
        [anon_sym_longlong] = ACTIONS(195),
        [anon_sym_int64] = ACTIONS(197),
        [sym_unsigned_tiny_int] = ACTIONS(199),
        [sym_boolean_type] = ACTIONS(201),
        [anon_sym_fixed] = ACTIONS(203),
        [sym_octet_type] = ACTIONS(201),
        [sym_signed_tiny_int] = ACTIONS(205),
        [anon_sym_unsignedshort] = ACTIONS(207),
        [anon_sym_uint16] = ACTIONS(209),
        [anon_sym_unsignedlong] = ACTIONS(211),
        [anon_sym_uint32] = ACTIONS(211),
        [anon_sym_unsignedlonglong] = ACTIONS(213),
        [anon_sym_uint64] = ACTIONS(215),
        [anon_sym_float] = ACTIONS(217),
        [anon_sym_double] = ACTIONS(217),
        [anon_sym_longdouble] = ACTIONS(219),
        [anon_sym_char] = ACTIONS(221),
        [anon_sym_wchar] = ACTIONS(221),
        [anon_sym_COLON_COLON] = ACTIONS(223),
        [anon_sym_string] = ACTIONS(225),
        [anon_sym_wstring] = ACTIONS(225),
        [anon_sym_any] = ACTIONS(227),
        [anon_sym_sequence] = ACTIONS(229),
        [anon_sym_map] = ACTIONS(231),
        [anon_sym_exception] = ACTIONS(233),
        [anon_sym_RBRACE] = ACTIONS(417),
        [anon_sym_abstract] = ACTIONS(237),
        [anon_sym_void] = ACTIONS(239),
        [anon_sym_readonly] = ACTIONS(241),
        [anon_sym_attribute] = ACTIONS(243),
        [anon_sym_bitset] = ACTIONS(245),
        [anon_sym_bitmask] = ACTIONS(247),
        [anon_sym_AT] = ACTIONS(249),
        [anon_sym_valuetype] = ACTIONS(251),
        [anon_sym_struct] = ACTIONS(253),
        [anon_sym_union] = ACTIONS(255),
        [anon_sym_enum] = ACTIONS(257),
        [anon_sym_const] = ACTIONS(259),
        [anon_sym_custom] = ACTIONS(261),
        [anon_sym_typedef] = ACTIONS(267),
        [anon_sym_ATignore_literal_names] = ACTIONS(43),
        [anon_sym_typeid] = ACTIONS(269),
        [anon_sym_import] = ACTIONS(271),
        [sym_object_type] = ACTIONS(201),
        [anon_sym_oneway] = ACTIONS(273),
        [sym_value_base_type] = ACTIONS(201),
        [anon_sym_native] = ACTIONS(275),
        [sym_identifier] = ACTIONS(277),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [12] = {
        [sym_signed_short_int] = STATE(251),
        [sym_signed_long_int] = STATE(251),
        [sym_signed_longlong_int] = STATE(251),
        [sym_unsigned_int] = STATE(231),
        [sym_integer_type] = STATE(289),
        [sym_signed_int] = STATE(231),
        [sym_unsigned_short_int] = STATE(257),
        [sym_unsigned_long_int] = STATE(257),
        [sym_unsigned_longlong_int] = STATE(257),
        [sym_floating_pt_type] = STATE(289),
        [sym_char_type] = STATE(289),
        [sym_scoped_name] = STATE(219),
        [sym_string_type] = STATE(297),
        [sym_type_spec] = STATE(514),
        [sym_simple_type_spec] = STATE(345),
        [sym_base_type_spec] = STATE(299),
        [sym_any_type] = STATE(289),
        [sym_fixed_pt_type] = STATE(297),
        [sym_template_type_spec] = STATE(345),
        [sym_sequence_type] = STATE(297),
        [sym_map_type] = STATE(297),
        [sym_except_dcl] = STATE(464),
        [sym_export] = STATE(60),
        [sym_op_dcl] = STATE(339),
        [sym_op_type_spec] = STATE(502),
        [sym_attr_dcl] = STATE(464),
        [sym_readonly_attr_spec] = STATE(501),
        [sym_attr_spec] = STATE(501),
        [sym_bitset_dcl] = STATE(464),
        [sym_bitmask_dcl] = STATE(464),
        [sym_annotation_appl] = STATE(162),
        [sym_value_dcl] = STATE(464),
        [sym_value_def] = STATE(613),
        [sym_value_kind] = STATE(612),
        [sym_value_header] = STATE(611),
        [sym_value_forward_dcl] = STATE(613),
        [sym_typedef_dcl] = STATE(464),
        [sym_enum_dcl] = STATE(464),
        [sym_enum_anno] = STATE(608),
        [sym_union_forward_dcl] = STATE(464),
        [sym_union_def] = STATE(464),
        [sym_type_id_dcl] = STATE(464),
        [sym_import_dcl] = STATE(464),
        [sym_op_oneway_dcl] = STATE(339),
        [sym_op_with_context] = STATE(464),
        [sym_value_abs_def] = STATE(613),
        [sym_native_dcl] = STATE(464),
        [sym_struct_forward_dcl] = STATE(464),
        [sym_struct_def] = STATE(464),
        [sym_const_dcl] = STATE(464),
        [sym_comment] = STATE(12),
        [aux_sym_interface_def_repeat1] = STATE(182),
        [aux_sym_interface_body_repeat1] = STATE(8),
        [anon_sym_short] = ACTIONS(191),
        [anon_sym_int16] = ACTIONS(191),
        [anon_sym_long] = ACTIONS(193),
        [anon_sym_int32] = ACTIONS(193),
        [anon_sym_longlong] = ACTIONS(195),
        [anon_sym_int64] = ACTIONS(197),
        [sym_unsigned_tiny_int] = ACTIONS(199),
        [sym_boolean_type] = ACTIONS(201),
        [anon_sym_fixed] = ACTIONS(203),
        [sym_octet_type] = ACTIONS(201),
        [sym_signed_tiny_int] = ACTIONS(205),
        [anon_sym_unsignedshort] = ACTIONS(207),
        [anon_sym_uint16] = ACTIONS(209),
        [anon_sym_unsignedlong] = ACTIONS(211),
        [anon_sym_uint32] = ACTIONS(211),
        [anon_sym_unsignedlonglong] = ACTIONS(213),
        [anon_sym_uint64] = ACTIONS(215),
        [anon_sym_float] = ACTIONS(217),
        [anon_sym_double] = ACTIONS(217),
        [anon_sym_longdouble] = ACTIONS(219),
        [anon_sym_char] = ACTIONS(221),
        [anon_sym_wchar] = ACTIONS(221),
        [anon_sym_COLON_COLON] = ACTIONS(223),
        [anon_sym_string] = ACTIONS(225),
        [anon_sym_wstring] = ACTIONS(225),
        [anon_sym_any] = ACTIONS(227),
        [anon_sym_sequence] = ACTIONS(229),
        [anon_sym_map] = ACTIONS(231),
        [anon_sym_exception] = ACTIONS(233),
        [anon_sym_RBRACE] = ACTIONS(419),
        [anon_sym_abstract] = ACTIONS(237),
        [anon_sym_void] = ACTIONS(239),
        [anon_sym_readonly] = ACTIONS(241),
        [anon_sym_attribute] = ACTIONS(243),
        [anon_sym_bitset] = ACTIONS(245),
        [anon_sym_bitmask] = ACTIONS(247),
        [anon_sym_AT] = ACTIONS(249),
        [anon_sym_valuetype] = ACTIONS(251),
        [anon_sym_struct] = ACTIONS(253),
        [anon_sym_union] = ACTIONS(255),
        [anon_sym_enum] = ACTIONS(257),
        [anon_sym_const] = ACTIONS(259),
        [anon_sym_custom] = ACTIONS(261),
        [anon_sym_typedef] = ACTIONS(267),
        [anon_sym_ATignore_literal_names] = ACTIONS(43),
        [anon_sym_typeid] = ACTIONS(269),
        [anon_sym_import] = ACTIONS(271),
        [sym_object_type] = ACTIONS(201),
        [anon_sym_oneway] = ACTIONS(273),
        [sym_value_base_type] = ACTIONS(201),
        [anon_sym_native] = ACTIONS(275),
        [sym_identifier] = ACTIONS(277),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [13] = {
        [sym_signed_short_int] = STATE(251),
        [sym_signed_long_int] = STATE(251),
        [sym_signed_longlong_int] = STATE(251),
        [sym_unsigned_int] = STATE(231),
        [sym_integer_type] = STATE(289),
        [sym_signed_int] = STATE(231),
        [sym_unsigned_short_int] = STATE(257),
        [sym_unsigned_long_int] = STATE(257),
        [sym_unsigned_longlong_int] = STATE(257),
        [sym_floating_pt_type] = STATE(289),
        [sym_char_type] = STATE(289),
        [sym_scoped_name] = STATE(141),
        [sym_string_type] = STATE(297),
        [sym_type_spec] = STATE(453),
        [sym_simple_type_spec] = STATE(345),
        [sym_base_type_spec] = STATE(299),
        [sym_any_type] = STATE(289),
        [sym_fixed_pt_type] = STATE(297),
        [sym_template_type_spec] = STATE(345),
        [sym_sequence_type] = STATE(297),
        [sym_map_type] = STATE(297),
        [sym_const_expr] = STATE(453),
        [sym_or_expr] = STATE(161),
        [sym_xor_expr] = STATE(157),
        [sym_and_expr] = STATE(150),
        [sym_shift_expr] = STATE(148),
        [sym_add_expr] = STATE(140),
        [sym_mult_expr] = STATE(125),
        [sym_unary_expr] = STATE(137),
        [sym_unary_operator] = STATE(139),
        [sym_literal] = STATE(133),
        [sym_string_literal] = STATE(130),
        [sym_char_literal] = STATE(130),
        [sym_boolean_literal] = STATE(130),
        [sym_actual_parameters] = STATE(466),
        [sym_actual_parameter] = STATE(268),
        [sym_comment] = STATE(13),
        [anon_sym_short] = ACTIONS(191),
        [anon_sym_int16] = ACTIONS(191),
        [anon_sym_long] = ACTIONS(193),
        [anon_sym_int32] = ACTIONS(193),
        [anon_sym_longlong] = ACTIONS(195),
        [anon_sym_int64] = ACTIONS(197),
        [sym_unsigned_tiny_int] = ACTIONS(199),
        [sym_boolean_type] = ACTIONS(201),
        [anon_sym_fixed] = ACTIONS(203),
        [sym_octet_type] = ACTIONS(201),
        [sym_signed_tiny_int] = ACTIONS(205),
        [anon_sym_unsignedshort] = ACTIONS(207),
        [anon_sym_uint16] = ACTIONS(209),
        [anon_sym_unsignedlong] = ACTIONS(211),
        [anon_sym_uint32] = ACTIONS(211),
        [anon_sym_unsignedlonglong] = ACTIONS(213),
        [anon_sym_uint64] = ACTIONS(215),
        [anon_sym_float] = ACTIONS(217),
        [anon_sym_double] = ACTIONS(217),
        [anon_sym_longdouble] = ACTIONS(219),
        [anon_sym_char] = ACTIONS(221),
        [anon_sym_wchar] = ACTIONS(221),
        [anon_sym_COLON_COLON] = ACTIONS(421),
        [anon_sym_string] = ACTIONS(225),
        [anon_sym_wstring] = ACTIONS(225),
        [anon_sym_any] = ACTIONS(227),
        [anon_sym_sequence] = ACTIONS(229),
        [anon_sym_map] = ACTIONS(231),
        [anon_sym_PLUS] = ACTIONS(423),
        [anon_sym_DASH] = ACTIONS(423),
        [anon_sym_LPAREN] = ACTIONS(425),
        [anon_sym_TILDE] = ACTIONS(427),
        [anon_sym_L] = ACTIONS(429),
        [anon_sym_DQUOTE] = ACTIONS(431),
        [anon_sym_SQUOTE] = ACTIONS(433),
        [anon_sym_TRUE] = ACTIONS(435),
        [anon_sym_FALSE] = ACTIONS(435),
        [sym_number_literal] = ACTIONS(437),
        [sym_object_type] = ACTIONS(201),
        [sym_value_base_type] = ACTIONS(201),
        [sym_identifier] = ACTIONS(439),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [14] = {
        [sym_signed_short_int] = STATE(251),
        [sym_signed_long_int] = STATE(251),
        [sym_signed_longlong_int] = STATE(251),
        [sym_unsigned_int] = STATE(231),
        [sym_integer_type] = STATE(289),
        [sym_signed_int] = STATE(231),
        [sym_unsigned_short_int] = STATE(257),
        [sym_unsigned_long_int] = STATE(257),
        [sym_unsigned_longlong_int] = STATE(257),
        [sym_floating_pt_type] = STATE(289),
        [sym_char_type] = STATE(289),
        [sym_scoped_name] = STATE(141),
        [sym_string_type] = STATE(297),
        [sym_type_spec] = STATE(453),
        [sym_simple_type_spec] = STATE(345),
        [sym_base_type_spec] = STATE(299),
        [sym_any_type] = STATE(289),
        [sym_fixed_pt_type] = STATE(297),
        [sym_template_type_spec] = STATE(345),
        [sym_sequence_type] = STATE(297),
        [sym_map_type] = STATE(297),
        [sym_const_expr] = STATE(453),
        [sym_or_expr] = STATE(161),
        [sym_xor_expr] = STATE(157),
        [sym_and_expr] = STATE(150),
        [sym_shift_expr] = STATE(148),
        [sym_add_expr] = STATE(140),
        [sym_mult_expr] = STATE(125),
        [sym_unary_expr] = STATE(137),
        [sym_unary_operator] = STATE(139),
        [sym_literal] = STATE(133),
        [sym_string_literal] = STATE(130),
        [sym_char_literal] = STATE(130),
        [sym_boolean_literal] = STATE(130),
        [sym_actual_parameter] = STATE(433),
        [sym_comment] = STATE(14),
        [anon_sym_short] = ACTIONS(191),
        [anon_sym_int16] = ACTIONS(191),
        [anon_sym_long] = ACTIONS(193),
        [anon_sym_int32] = ACTIONS(193),
        [anon_sym_longlong] = ACTIONS(195),
        [anon_sym_int64] = ACTIONS(197),
        [sym_unsigned_tiny_int] = ACTIONS(199),
        [sym_boolean_type] = ACTIONS(201),
        [anon_sym_fixed] = ACTIONS(203),
        [sym_octet_type] = ACTIONS(201),
        [sym_signed_tiny_int] = ACTIONS(205),
        [anon_sym_unsignedshort] = ACTIONS(207),
        [anon_sym_uint16] = ACTIONS(209),
        [anon_sym_unsignedlong] = ACTIONS(211),
        [anon_sym_uint32] = ACTIONS(211),
        [anon_sym_unsignedlonglong] = ACTIONS(213),
        [anon_sym_uint64] = ACTIONS(215),
        [anon_sym_float] = ACTIONS(217),
        [anon_sym_double] = ACTIONS(217),
        [anon_sym_longdouble] = ACTIONS(219),
        [anon_sym_char] = ACTIONS(221),
        [anon_sym_wchar] = ACTIONS(221),
        [anon_sym_COLON_COLON] = ACTIONS(421),
        [anon_sym_string] = ACTIONS(225),
        [anon_sym_wstring] = ACTIONS(225),
        [anon_sym_any] = ACTIONS(227),
        [anon_sym_sequence] = ACTIONS(229),
        [anon_sym_map] = ACTIONS(231),
        [anon_sym_PLUS] = ACTIONS(423),
        [anon_sym_DASH] = ACTIONS(423),
        [anon_sym_LPAREN] = ACTIONS(425),
        [anon_sym_TILDE] = ACTIONS(427),
        [anon_sym_L] = ACTIONS(429),
        [anon_sym_DQUOTE] = ACTIONS(431),
        [anon_sym_SQUOTE] = ACTIONS(433),
        [anon_sym_TRUE] = ACTIONS(435),
        [anon_sym_FALSE] = ACTIONS(435),
        [sym_number_literal] = ACTIONS(437),
        [sym_object_type] = ACTIONS(201),
        [sym_value_base_type] = ACTIONS(201),
        [sym_identifier] = ACTIONS(439),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [15] = {
        [sym_signed_short_int] = STATE(251),
        [sym_signed_long_int] = STATE(251),
        [sym_signed_longlong_int] = STATE(251),
        [sym_unsigned_int] = STATE(231),
        [sym_integer_type] = STATE(289),
        [sym_signed_int] = STATE(231),
        [sym_unsigned_short_int] = STATE(257),
        [sym_unsigned_long_int] = STATE(257),
        [sym_unsigned_longlong_int] = STATE(257),
        [sym_floating_pt_type] = STATE(289),
        [sym_char_type] = STATE(289),
        [sym_scoped_name] = STATE(219),
        [sym_string_type] = STATE(297),
        [sym_type_spec] = STATE(253),
        [sym_simple_type_spec] = STATE(345),
        [sym_base_type_spec] = STATE(299),
        [sym_any_type] = STATE(289),
        [sym_fixed_pt_type] = STATE(297),
        [sym_template_type_spec] = STATE(345),
        [sym_sequence_type] = STATE(297),
        [sym_map_type] = STATE(297),
        [sym_bitset_dcl] = STATE(253),
        [sym_bitmask_dcl] = STATE(253),
        [sym_annotation_appl] = STATE(162),
        [sym_enum_dcl] = STATE(253),
        [sym_enum_anno] = STATE(608),
        [sym_union_forward_dcl] = STATE(253),
        [sym_union_def] = STATE(253),
        [sym_element_spec] = STATE(580),
        [sym_struct_forward_dcl] = STATE(253),
        [sym_struct_def] = STATE(253),
        [sym_comment] = STATE(15),
        [aux_sym_interface_def_repeat1] = STATE(182),
        [anon_sym_short] = ACTIONS(191),
        [anon_sym_int16] = ACTIONS(191),
        [anon_sym_long] = ACTIONS(193),
        [anon_sym_int32] = ACTIONS(193),
        [anon_sym_longlong] = ACTIONS(195),
        [anon_sym_int64] = ACTIONS(197),
        [sym_unsigned_tiny_int] = ACTIONS(199),
        [sym_boolean_type] = ACTIONS(201),
        [anon_sym_fixed] = ACTIONS(203),
        [sym_octet_type] = ACTIONS(201),
        [sym_signed_tiny_int] = ACTIONS(205),
        [anon_sym_unsignedshort] = ACTIONS(207),
        [anon_sym_uint16] = ACTIONS(209),
        [anon_sym_unsignedlong] = ACTIONS(211),
        [anon_sym_uint32] = ACTIONS(211),
        [anon_sym_unsignedlonglong] = ACTIONS(213),
        [anon_sym_uint64] = ACTIONS(215),
        [anon_sym_float] = ACTIONS(217),
        [anon_sym_double] = ACTIONS(217),
        [anon_sym_longdouble] = ACTIONS(219),
        [anon_sym_char] = ACTIONS(221),
        [anon_sym_wchar] = ACTIONS(221),
        [anon_sym_COLON_COLON] = ACTIONS(223),
        [anon_sym_string] = ACTIONS(225),
        [anon_sym_wstring] = ACTIONS(225),
        [anon_sym_any] = ACTIONS(227),
        [anon_sym_sequence] = ACTIONS(229),
        [anon_sym_map] = ACTIONS(231),
        [anon_sym_RBRACE] = ACTIONS(441),
        [anon_sym_bitset] = ACTIONS(245),
        [anon_sym_bitmask] = ACTIONS(247),
        [anon_sym_default] = ACTIONS(443),
        [anon_sym_AT] = ACTIONS(249),
        [anon_sym_struct] = ACTIONS(253),
        [anon_sym_union] = ACTIONS(255),
        [anon_sym_enum] = ACTIONS(257),
        [anon_sym_ATignore_literal_names] = ACTIONS(43),
        [anon_sym_case] = ACTIONS(443),
        [sym_object_type] = ACTIONS(201),
        [sym_value_base_type] = ACTIONS(201),
        [sym_identifier] = ACTIONS(277),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [16] = {
        [sym_signed_short_int] = STATE(251),
        [sym_signed_long_int] = STATE(251),
        [sym_signed_longlong_int] = STATE(251),
        [sym_unsigned_int] = STATE(231),
        [sym_integer_type] = STATE(289),
        [sym_signed_int] = STATE(231),
        [sym_unsigned_short_int] = STATE(257),
        [sym_unsigned_long_int] = STATE(257),
        [sym_unsigned_longlong_int] = STATE(257),
        [sym_floating_pt_type] = STATE(289),
        [sym_char_type] = STATE(289),
        [sym_scoped_name] = STATE(219),
        [sym_string_type] = STATE(297),
        [sym_simple_type_spec] = STATE(180),
        [sym_base_type_spec] = STATE(299),
        [sym_any_type] = STATE(289),
        [sym_fixed_pt_type] = STATE(297),
        [sym_template_type_spec] = STATE(180),
        [sym_sequence_type] = STATE(297),
        [sym_map_type] = STATE(297),
        [sym_bitset_dcl] = STATE(180),
        [sym_bitmask_dcl] = STATE(180),
        [sym_annotation_appl] = STATE(162),
        [sym_type_declarator] = STATE(561),
        [sym_enum_dcl] = STATE(180),
        [sym_enum_anno] = STATE(608),
        [sym_union_forward_dcl] = STATE(180),
        [sym_union_def] = STATE(180),
        [sym_struct_forward_dcl] = STATE(180),
        [sym_struct_def] = STATE(180),
        [sym_comment] = STATE(16),
        [aux_sym_interface_def_repeat1] = STATE(182),
        [anon_sym_short] = ACTIONS(191),
        [anon_sym_int16] = ACTIONS(191),
        [anon_sym_long] = ACTIONS(193),
        [anon_sym_int32] = ACTIONS(193),
        [anon_sym_longlong] = ACTIONS(195),
        [anon_sym_int64] = ACTIONS(197),
        [sym_unsigned_tiny_int] = ACTIONS(199),
        [sym_boolean_type] = ACTIONS(201),
        [anon_sym_fixed] = ACTIONS(203),
        [sym_octet_type] = ACTIONS(201),
        [sym_signed_tiny_int] = ACTIONS(205),
        [anon_sym_unsignedshort] = ACTIONS(207),
        [anon_sym_uint16] = ACTIONS(209),
        [anon_sym_unsignedlong] = ACTIONS(211),
        [anon_sym_uint32] = ACTIONS(211),
        [anon_sym_unsignedlonglong] = ACTIONS(213),
        [anon_sym_uint64] = ACTIONS(215),
        [anon_sym_float] = ACTIONS(217),
        [anon_sym_double] = ACTIONS(217),
        [anon_sym_longdouble] = ACTIONS(219),
        [anon_sym_char] = ACTIONS(221),
        [anon_sym_wchar] = ACTIONS(221),
        [anon_sym_COLON_COLON] = ACTIONS(223),
        [anon_sym_string] = ACTIONS(225),
        [anon_sym_wstring] = ACTIONS(225),
        [anon_sym_any] = ACTIONS(227),
        [anon_sym_sequence] = ACTIONS(229),
        [anon_sym_map] = ACTIONS(231),
        [anon_sym_bitset] = ACTIONS(245),
        [anon_sym_bitmask] = ACTIONS(247),
        [anon_sym_AT] = ACTIONS(249),
        [anon_sym_struct] = ACTIONS(253),
        [anon_sym_union] = ACTIONS(255),
        [anon_sym_enum] = ACTIONS(257),
        [anon_sym_ATignore_literal_names] = ACTIONS(43),
        [sym_object_type] = ACTIONS(201),
        [sym_value_base_type] = ACTIONS(201),
        [sym_identifier] = ACTIONS(277),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [17] = {
        [sym_except_dcl] = STATE(618),
        [sym_interface_dcl] = STATE(618),
        [sym_interface_kind] = STATE(616),
        [sym_interface_forward_dcl] = STATE(615),
        [sym_interface_def] = STATE(615),
        [sym_interface_header] = STATE(614),
        [sym_bitset_dcl] = STATE(618),
        [sym_bitmask_dcl] = STATE(618),
        [sym_annotation_dcl] = STATE(618),
        [sym_annotation_appl] = STATE(162),
        [sym_template_module_dcl] = STATE(618),
        [sym_tpl_definition] = STATE(114),
        [sym_template_module_inst] = STATE(618),
        [sym_template_module_ref] = STATE(496),
        [sym_value_dcl] = STATE(618),
        [sym_value_def] = STATE(613),
        [sym_value_kind] = STATE(612),
        [sym_value_header] = STATE(611),
        [sym_value_forward_dcl] = STATE(613),
        [sym_typedef_dcl] = STATE(618),
        [sym_enum_dcl] = STATE(618),
        [sym_enum_anno] = STATE(608),
        [sym_union_forward_dcl] = STATE(618),
        [sym_union_def] = STATE(618),
        [sym_type_id_dcl] = STATE(618),
        [sym_type_prefix_dcl] = STATE(618),
        [sym_import_dcl] = STATE(618),
        [sym_value_abs_def] = STATE(613),
        [sym_component_dcl] = STATE(618),
        [sym_component_forward_dcl] = STATE(604),
        [sym_component_def] = STATE(604),
        [sym_component_header] = STATE(602),
        [sym__definition] = STATE(115),
        [sym_native_dcl] = STATE(618),
        [sym_module_dcl] = STATE(618),
        [sym_struct_forward_dcl] = STATE(618),
        [sym_struct_def] = STATE(618),
        [sym_predefine] = STATE(99),
        [sym_const_dcl] = STATE(618),
        [sym_comment] = STATE(17),
        [aux_sym_interface_def_repeat1] = STATE(149),
        [aux_sym_template_module_dcl_repeat1] = STATE(19),
        [anon_sym_exception] = ACTIONS(11),
        [anon_sym_RBRACE] = ACTIONS(445),
        [anon_sym_local] = ACTIONS(13),
        [anon_sym_abstract] = ACTIONS(15),
        [anon_sym_interface] = ACTIONS(17),
        [anon_sym_bitset] = ACTIONS(19),
        [anon_sym_bitmask] = ACTIONS(21),
        [anon_sym_ATannotation] = ACTIONS(23),
        [anon_sym_AT] = ACTIONS(25),
        [anon_sym_module] = ACTIONS(27),
        [anon_sym_valuetype] = ACTIONS(29),
        [anon_sym_struct] = ACTIONS(31),
        [anon_sym_union] = ACTIONS(33),
        [anon_sym_enum] = ACTIONS(35),
        [anon_sym_const] = ACTIONS(37),
        [anon_sym_alias] = ACTIONS(447),
        [anon_sym_custom] = ACTIONS(39),
        [anon_sym_typedef] = ACTIONS(41),
        [anon_sym_ATignore_literal_names] = ACTIONS(43),
        [anon_sym_typeid] = ACTIONS(45),
        [anon_sym_typeprefix] = ACTIONS(47),
        [anon_sym_import] = ACTIONS(49),
        [anon_sym_component] = ACTIONS(51),
        [anon_sym_native] = ACTIONS(53),
        [anon_sym_POUNDdefine] = ACTIONS(449),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [18] = {
        [sym_preproc_call] = STATE(112),
        [sym_except_dcl] = STATE(618),
        [sym_interface_dcl] = STATE(618),
        [sym_interface_kind] = STATE(616),
        [sym_interface_forward_dcl] = STATE(615),
        [sym_interface_def] = STATE(615),
        [sym_interface_header] = STATE(614),
        [sym_bitset_dcl] = STATE(618),
        [sym_bitmask_dcl] = STATE(618),
        [sym_annotation_dcl] = STATE(618),
        [sym_annotation_appl] = STATE(162),
        [sym_template_module_dcl] = STATE(618),
        [sym_template_module_inst] = STATE(618),
        [sym_value_dcl] = STATE(618),
        [sym_value_def] = STATE(613),
        [sym_value_kind] = STATE(612),
        [sym_value_header] = STATE(611),
        [sym_value_forward_dcl] = STATE(613),
        [sym_typedef_dcl] = STATE(618),
        [sym_enum_dcl] = STATE(618),
        [sym_enum_anno] = STATE(608),
        [sym_union_forward_dcl] = STATE(618),
        [sym_union_def] = STATE(618),
        [sym_type_id_dcl] = STATE(618),
        [sym_type_prefix_dcl] = STATE(618),
        [sym_import_dcl] = STATE(618),
        [sym_value_abs_def] = STATE(613),
        [sym_component_dcl] = STATE(618),
        [sym_component_forward_dcl] = STATE(604),
        [sym_component_def] = STATE(604),
        [sym_component_header] = STATE(602),
        [sym__definition] = STATE(116),
        [sym_native_dcl] = STATE(618),
        [sym_module_dcl] = STATE(618),
        [sym_struct_forward_dcl] = STATE(618),
        [sym_struct_def] = STATE(618),
        [sym_predefine] = STATE(99),
        [sym_const_dcl] = STATE(618),
        [sym_comment] = STATE(18),
        [aux_sym_specification_repeat1] = STATE(92),
        [aux_sym_specification_repeat2] = STATE(23),
        [aux_sym_interface_def_repeat1] = STATE(149),
        [ts_builtin_sym_end] = ACTIONS(451),
        [sym_preproc_directive] = ACTIONS(9),
        [anon_sym_exception] = ACTIONS(11),
        [anon_sym_local] = ACTIONS(13),
        [anon_sym_abstract] = ACTIONS(15),
        [anon_sym_interface] = ACTIONS(17),
        [anon_sym_bitset] = ACTIONS(19),
        [anon_sym_bitmask] = ACTIONS(21),
        [anon_sym_ATannotation] = ACTIONS(23),
        [anon_sym_AT] = ACTIONS(25),
        [anon_sym_module] = ACTIONS(27),
        [anon_sym_valuetype] = ACTIONS(29),
        [anon_sym_struct] = ACTIONS(31),
        [anon_sym_union] = ACTIONS(33),
        [anon_sym_enum] = ACTIONS(35),
        [anon_sym_const] = ACTIONS(37),
        [anon_sym_custom] = ACTIONS(39),
        [anon_sym_typedef] = ACTIONS(41),
        [anon_sym_ATignore_literal_names] = ACTIONS(43),
        [anon_sym_typeid] = ACTIONS(45),
        [anon_sym_typeprefix] = ACTIONS(47),
        [anon_sym_import] = ACTIONS(49),
        [anon_sym_component] = ACTIONS(51),
        [anon_sym_native] = ACTIONS(53),
        [anon_sym_POUNDdefine] = ACTIONS(55),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [19] = {
        [sym_except_dcl] = STATE(618),
        [sym_interface_dcl] = STATE(618),
        [sym_interface_kind] = STATE(616),
        [sym_interface_forward_dcl] = STATE(615),
        [sym_interface_def] = STATE(615),
        [sym_interface_header] = STATE(614),
        [sym_bitset_dcl] = STATE(618),
        [sym_bitmask_dcl] = STATE(618),
        [sym_annotation_dcl] = STATE(618),
        [sym_annotation_appl] = STATE(162),
        [sym_template_module_dcl] = STATE(618),
        [sym_tpl_definition] = STATE(114),
        [sym_template_module_inst] = STATE(618),
        [sym_template_module_ref] = STATE(496),
        [sym_value_dcl] = STATE(618),
        [sym_value_def] = STATE(613),
        [sym_value_kind] = STATE(612),
        [sym_value_header] = STATE(611),
        [sym_value_forward_dcl] = STATE(613),
        [sym_typedef_dcl] = STATE(618),
        [sym_enum_dcl] = STATE(618),
        [sym_enum_anno] = STATE(608),
        [sym_union_forward_dcl] = STATE(618),
        [sym_union_def] = STATE(618),
        [sym_type_id_dcl] = STATE(618),
        [sym_type_prefix_dcl] = STATE(618),
        [sym_import_dcl] = STATE(618),
        [sym_value_abs_def] = STATE(613),
        [sym_component_dcl] = STATE(618),
        [sym_component_forward_dcl] = STATE(604),
        [sym_component_def] = STATE(604),
        [sym_component_header] = STATE(602),
        [sym__definition] = STATE(115),
        [sym_native_dcl] = STATE(618),
        [sym_module_dcl] = STATE(618),
        [sym_struct_forward_dcl] = STATE(618),
        [sym_struct_def] = STATE(618),
        [sym_predefine] = STATE(99),
        [sym_const_dcl] = STATE(618),
        [sym_comment] = STATE(19),
        [aux_sym_interface_def_repeat1] = STATE(149),
        [aux_sym_template_module_dcl_repeat1] = STATE(19),
        [anon_sym_exception] = ACTIONS(453),
        [anon_sym_RBRACE] = ACTIONS(456),
        [anon_sym_local] = ACTIONS(458),
        [anon_sym_abstract] = ACTIONS(461),
        [anon_sym_interface] = ACTIONS(464),
        [anon_sym_bitset] = ACTIONS(467),
        [anon_sym_bitmask] = ACTIONS(470),
        [anon_sym_ATannotation] = ACTIONS(473),
        [anon_sym_AT] = ACTIONS(476),
        [anon_sym_module] = ACTIONS(479),
        [anon_sym_valuetype] = ACTIONS(482),
        [anon_sym_struct] = ACTIONS(485),
        [anon_sym_union] = ACTIONS(488),
        [anon_sym_enum] = ACTIONS(491),
        [anon_sym_const] = ACTIONS(494),
        [anon_sym_alias] = ACTIONS(497),
        [anon_sym_custom] = ACTIONS(500),
        [anon_sym_typedef] = ACTIONS(503),
        [anon_sym_ATignore_literal_names] = ACTIONS(506),
        [anon_sym_typeid] = ACTIONS(509),
        [anon_sym_typeprefix] = ACTIONS(512),
        [anon_sym_import] = ACTIONS(515),
        [anon_sym_component] = ACTIONS(518),
        [anon_sym_native] = ACTIONS(521),
        [anon_sym_POUNDdefine] = ACTIONS(524),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [20] = {
        [sym_except_dcl] = STATE(618),
        [sym_interface_dcl] = STATE(618),
        [sym_interface_kind] = STATE(616),
        [sym_interface_forward_dcl] = STATE(615),
        [sym_interface_def] = STATE(615),
        [sym_interface_header] = STATE(614),
        [sym_bitset_dcl] = STATE(618),
        [sym_bitmask_dcl] = STATE(618),
        [sym_annotation_dcl] = STATE(618),
        [sym_annotation_appl] = STATE(162),
        [sym_template_module_dcl] = STATE(618),
        [sym_tpl_definition] = STATE(114),
        [sym_template_module_inst] = STATE(618),
        [sym_template_module_ref] = STATE(496),
        [sym_value_dcl] = STATE(618),
        [sym_value_def] = STATE(613),
        [sym_value_kind] = STATE(612),
        [sym_value_header] = STATE(611),
        [sym_value_forward_dcl] = STATE(613),
        [sym_typedef_dcl] = STATE(618),
        [sym_enum_dcl] = STATE(618),
        [sym_enum_anno] = STATE(608),
        [sym_union_forward_dcl] = STATE(618),
        [sym_union_def] = STATE(618),
        [sym_type_id_dcl] = STATE(618),
        [sym_type_prefix_dcl] = STATE(618),
        [sym_import_dcl] = STATE(618),
        [sym_value_abs_def] = STATE(613),
        [sym_component_dcl] = STATE(618),
        [sym_component_forward_dcl] = STATE(604),
        [sym_component_def] = STATE(604),
        [sym_component_header] = STATE(602),
        [sym__definition] = STATE(115),
        [sym_native_dcl] = STATE(618),
        [sym_module_dcl] = STATE(618),
        [sym_struct_forward_dcl] = STATE(618),
        [sym_struct_def] = STATE(618),
        [sym_predefine] = STATE(99),
        [sym_const_dcl] = STATE(618),
        [sym_comment] = STATE(20),
        [aux_sym_interface_def_repeat1] = STATE(149),
        [aux_sym_template_module_dcl_repeat1] = STATE(17),
        [anon_sym_exception] = ACTIONS(11),
        [anon_sym_RBRACE] = ACTIONS(527),
        [anon_sym_local] = ACTIONS(13),
        [anon_sym_abstract] = ACTIONS(15),
        [anon_sym_interface] = ACTIONS(17),
        [anon_sym_bitset] = ACTIONS(19),
        [anon_sym_bitmask] = ACTIONS(21),
        [anon_sym_ATannotation] = ACTIONS(23),
        [anon_sym_AT] = ACTIONS(25),
        [anon_sym_module] = ACTIONS(27),
        [anon_sym_valuetype] = ACTIONS(29),
        [anon_sym_struct] = ACTIONS(31),
        [anon_sym_union] = ACTIONS(33),
        [anon_sym_enum] = ACTIONS(35),
        [anon_sym_const] = ACTIONS(37),
        [anon_sym_alias] = ACTIONS(447),
        [anon_sym_custom] = ACTIONS(39),
        [anon_sym_typedef] = ACTIONS(41),
        [anon_sym_ATignore_literal_names] = ACTIONS(43),
        [anon_sym_typeid] = ACTIONS(45),
        [anon_sym_typeprefix] = ACTIONS(47),
        [anon_sym_import] = ACTIONS(49),
        [anon_sym_component] = ACTIONS(51),
        [anon_sym_native] = ACTIONS(53),
        [anon_sym_POUNDdefine] = ACTIONS(449),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [21] = {
        [sym_except_dcl] = STATE(618),
        [sym_interface_dcl] = STATE(618),
        [sym_interface_kind] = STATE(616),
        [sym_interface_forward_dcl] = STATE(615),
        [sym_interface_def] = STATE(615),
        [sym_interface_header] = STATE(614),
        [sym_bitset_dcl] = STATE(618),
        [sym_bitmask_dcl] = STATE(618),
        [sym_annotation_dcl] = STATE(618),
        [sym_annotation_appl] = STATE(162),
        [sym_template_module_dcl] = STATE(618),
        [sym_template_module_inst] = STATE(618),
        [sym_value_dcl] = STATE(618),
        [sym_value_def] = STATE(613),
        [sym_value_kind] = STATE(612),
        [sym_value_header] = STATE(611),
        [sym_value_forward_dcl] = STATE(613),
        [sym_typedef_dcl] = STATE(618),
        [sym_enum_dcl] = STATE(618),
        [sym_enum_anno] = STATE(608),
        [sym_union_forward_dcl] = STATE(618),
        [sym_union_def] = STATE(618),
        [sym_type_id_dcl] = STATE(618),
        [sym_type_prefix_dcl] = STATE(618),
        [sym_import_dcl] = STATE(618),
        [sym_value_abs_def] = STATE(613),
        [sym_component_dcl] = STATE(618),
        [sym_component_forward_dcl] = STATE(604),
        [sym_component_def] = STATE(604),
        [sym_component_header] = STATE(602),
        [sym__definition] = STATE(116),
        [sym_native_dcl] = STATE(618),
        [sym_module_dcl] = STATE(618),
        [sym_struct_forward_dcl] = STATE(618),
        [sym_struct_def] = STATE(618),
        [sym_predefine] = STATE(99),
        [sym_const_dcl] = STATE(618),
        [sym_comment] = STATE(21),
        [aux_sym_specification_repeat2] = STATE(21),
        [aux_sym_interface_def_repeat1] = STATE(149),
        [ts_builtin_sym_end] = ACTIONS(529),
        [anon_sym_exception] = ACTIONS(531),
        [anon_sym_RBRACE] = ACTIONS(529),
        [anon_sym_local] = ACTIONS(534),
        [anon_sym_abstract] = ACTIONS(537),
        [anon_sym_interface] = ACTIONS(540),
        [anon_sym_bitset] = ACTIONS(543),
        [anon_sym_bitmask] = ACTIONS(546),
        [anon_sym_ATannotation] = ACTIONS(549),
        [anon_sym_AT] = ACTIONS(552),
        [anon_sym_module] = ACTIONS(555),
        [anon_sym_valuetype] = ACTIONS(558),
        [anon_sym_struct] = ACTIONS(561),
        [anon_sym_union] = ACTIONS(564),
        [anon_sym_enum] = ACTIONS(567),
        [anon_sym_const] = ACTIONS(570),
        [anon_sym_custom] = ACTIONS(573),
        [anon_sym_typedef] = ACTIONS(576),
        [anon_sym_ATignore_literal_names] = ACTIONS(579),
        [anon_sym_typeid] = ACTIONS(582),
        [anon_sym_typeprefix] = ACTIONS(585),
        [anon_sym_import] = ACTIONS(588),
        [anon_sym_component] = ACTIONS(591),
        [anon_sym_native] = ACTIONS(594),
        [anon_sym_POUNDdefine] = ACTIONS(597),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [22] = {
        [sym_except_dcl] = STATE(618),
        [sym_interface_dcl] = STATE(618),
        [sym_interface_kind] = STATE(616),
        [sym_interface_forward_dcl] = STATE(615),
        [sym_interface_def] = STATE(615),
        [sym_interface_header] = STATE(614),
        [sym_bitset_dcl] = STATE(618),
        [sym_bitmask_dcl] = STATE(618),
        [sym_annotation_dcl] = STATE(618),
        [sym_annotation_appl] = STATE(162),
        [sym_template_module_dcl] = STATE(618),
        [sym_template_module_inst] = STATE(618),
        [sym_value_dcl] = STATE(618),
        [sym_value_def] = STATE(613),
        [sym_value_kind] = STATE(612),
        [sym_value_header] = STATE(611),
        [sym_value_forward_dcl] = STATE(613),
        [sym_typedef_dcl] = STATE(618),
        [sym_enum_dcl] = STATE(618),
        [sym_enum_anno] = STATE(608),
        [sym_union_forward_dcl] = STATE(618),
        [sym_union_def] = STATE(618),
        [sym_type_id_dcl] = STATE(618),
        [sym_type_prefix_dcl] = STATE(618),
        [sym_import_dcl] = STATE(618),
        [sym_value_abs_def] = STATE(613),
        [sym_component_dcl] = STATE(618),
        [sym_component_forward_dcl] = STATE(604),
        [sym_component_def] = STATE(604),
        [sym_component_header] = STATE(602),
        [sym__definition] = STATE(116),
        [sym_native_dcl] = STATE(618),
        [sym_module_dcl] = STATE(618),
        [sym_struct_forward_dcl] = STATE(618),
        [sym_struct_def] = STATE(618),
        [sym_predefine] = STATE(99),
        [sym_const_dcl] = STATE(618),
        [sym_comment] = STATE(22),
        [aux_sym_specification_repeat2] = STATE(21),
        [aux_sym_interface_def_repeat1] = STATE(149),
        [ts_builtin_sym_end] = ACTIONS(451),
        [anon_sym_exception] = ACTIONS(11),
        [anon_sym_local] = ACTIONS(13),
        [anon_sym_abstract] = ACTIONS(15),
        [anon_sym_interface] = ACTIONS(17),
        [anon_sym_bitset] = ACTIONS(19),
        [anon_sym_bitmask] = ACTIONS(21),
        [anon_sym_ATannotation] = ACTIONS(23),
        [anon_sym_AT] = ACTIONS(25),
        [anon_sym_module] = ACTIONS(27),
        [anon_sym_valuetype] = ACTIONS(29),
        [anon_sym_struct] = ACTIONS(31),
        [anon_sym_union] = ACTIONS(33),
        [anon_sym_enum] = ACTIONS(35),
        [anon_sym_const] = ACTIONS(37),
        [anon_sym_custom] = ACTIONS(39),
        [anon_sym_typedef] = ACTIONS(41),
        [anon_sym_ATignore_literal_names] = ACTIONS(43),
        [anon_sym_typeid] = ACTIONS(45),
        [anon_sym_typeprefix] = ACTIONS(47),
        [anon_sym_import] = ACTIONS(49),
        [anon_sym_component] = ACTIONS(51),
        [anon_sym_native] = ACTIONS(53),
        [anon_sym_POUNDdefine] = ACTIONS(449),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [23] = {
        [sym_except_dcl] = STATE(618),
        [sym_interface_dcl] = STATE(618),
        [sym_interface_kind] = STATE(616),
        [sym_interface_forward_dcl] = STATE(615),
        [sym_interface_def] = STATE(615),
        [sym_interface_header] = STATE(614),
        [sym_bitset_dcl] = STATE(618),
        [sym_bitmask_dcl] = STATE(618),
        [sym_annotation_dcl] = STATE(618),
        [sym_annotation_appl] = STATE(162),
        [sym_template_module_dcl] = STATE(618),
        [sym_template_module_inst] = STATE(618),
        [sym_value_dcl] = STATE(618),
        [sym_value_def] = STATE(613),
        [sym_value_kind] = STATE(612),
        [sym_value_header] = STATE(611),
        [sym_value_forward_dcl] = STATE(613),
        [sym_typedef_dcl] = STATE(618),
        [sym_enum_dcl] = STATE(618),
        [sym_enum_anno] = STATE(608),
        [sym_union_forward_dcl] = STATE(618),
        [sym_union_def] = STATE(618),
        [sym_type_id_dcl] = STATE(618),
        [sym_type_prefix_dcl] = STATE(618),
        [sym_import_dcl] = STATE(618),
        [sym_value_abs_def] = STATE(613),
        [sym_component_dcl] = STATE(618),
        [sym_component_forward_dcl] = STATE(604),
        [sym_component_def] = STATE(604),
        [sym_component_header] = STATE(602),
        [sym__definition] = STATE(116),
        [sym_native_dcl] = STATE(618),
        [sym_module_dcl] = STATE(618),
        [sym_struct_forward_dcl] = STATE(618),
        [sym_struct_def] = STATE(618),
        [sym_predefine] = STATE(99),
        [sym_const_dcl] = STATE(618),
        [sym_comment] = STATE(23),
        [aux_sym_specification_repeat2] = STATE(21),
        [aux_sym_interface_def_repeat1] = STATE(149),
        [ts_builtin_sym_end] = ACTIONS(600),
        [anon_sym_exception] = ACTIONS(11),
        [anon_sym_local] = ACTIONS(13),
        [anon_sym_abstract] = ACTIONS(15),
        [anon_sym_interface] = ACTIONS(17),
        [anon_sym_bitset] = ACTIONS(19),
        [anon_sym_bitmask] = ACTIONS(21),
        [anon_sym_ATannotation] = ACTIONS(23),
        [anon_sym_AT] = ACTIONS(25),
        [anon_sym_module] = ACTIONS(27),
        [anon_sym_valuetype] = ACTIONS(29),
        [anon_sym_struct] = ACTIONS(31),
        [anon_sym_union] = ACTIONS(33),
        [anon_sym_enum] = ACTIONS(35),
        [anon_sym_const] = ACTIONS(37),
        [anon_sym_custom] = ACTIONS(39),
        [anon_sym_typedef] = ACTIONS(41),
        [anon_sym_ATignore_literal_names] = ACTIONS(43),
        [anon_sym_typeid] = ACTIONS(45),
        [anon_sym_typeprefix] = ACTIONS(47),
        [anon_sym_import] = ACTIONS(49),
        [anon_sym_component] = ACTIONS(51),
        [anon_sym_native] = ACTIONS(53),
        [anon_sym_POUNDdefine] = ACTIONS(449),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [24] = {
        [sym_except_dcl] = STATE(618),
        [sym_interface_dcl] = STATE(618),
        [sym_interface_kind] = STATE(616),
        [sym_interface_forward_dcl] = STATE(615),
        [sym_interface_def] = STATE(615),
        [sym_interface_header] = STATE(614),
        [sym_bitset_dcl] = STATE(618),
        [sym_bitmask_dcl] = STATE(618),
        [sym_annotation_dcl] = STATE(618),
        [sym_annotation_appl] = STATE(162),
        [sym_template_module_dcl] = STATE(618),
        [sym_template_module_inst] = STATE(618),
        [sym_value_dcl] = STATE(618),
        [sym_value_def] = STATE(613),
        [sym_value_kind] = STATE(612),
        [sym_value_header] = STATE(611),
        [sym_value_forward_dcl] = STATE(613),
        [sym_typedef_dcl] = STATE(618),
        [sym_enum_dcl] = STATE(618),
        [sym_enum_anno] = STATE(608),
        [sym_union_forward_dcl] = STATE(618),
        [sym_union_def] = STATE(618),
        [sym_type_id_dcl] = STATE(618),
        [sym_type_prefix_dcl] = STATE(618),
        [sym_import_dcl] = STATE(618),
        [sym_value_abs_def] = STATE(613),
        [sym_component_dcl] = STATE(618),
        [sym_component_forward_dcl] = STATE(604),
        [sym_component_def] = STATE(604),
        [sym_component_header] = STATE(602),
        [sym__definition] = STATE(116),
        [sym_native_dcl] = STATE(618),
        [sym_module_dcl] = STATE(618),
        [sym_struct_forward_dcl] = STATE(618),
        [sym_struct_def] = STATE(618),
        [sym_predefine] = STATE(99),
        [sym_const_dcl] = STATE(618),
        [sym_comment] = STATE(24),
        [aux_sym_specification_repeat2] = STATE(21),
        [aux_sym_interface_def_repeat1] = STATE(149),
        [anon_sym_exception] = ACTIONS(11),
        [anon_sym_RBRACE] = ACTIONS(602),
        [anon_sym_local] = ACTIONS(13),
        [anon_sym_abstract] = ACTIONS(15),
        [anon_sym_interface] = ACTIONS(17),
        [anon_sym_bitset] = ACTIONS(19),
        [anon_sym_bitmask] = ACTIONS(21),
        [anon_sym_ATannotation] = ACTIONS(23),
        [anon_sym_AT] = ACTIONS(25),
        [anon_sym_module] = ACTIONS(27),
        [anon_sym_valuetype] = ACTIONS(29),
        [anon_sym_struct] = ACTIONS(31),
        [anon_sym_union] = ACTIONS(33),
        [anon_sym_enum] = ACTIONS(35),
        [anon_sym_const] = ACTIONS(37),
        [anon_sym_custom] = ACTIONS(39),
        [anon_sym_typedef] = ACTIONS(41),
        [anon_sym_ATignore_literal_names] = ACTIONS(43),
        [anon_sym_typeid] = ACTIONS(45),
        [anon_sym_typeprefix] = ACTIONS(47),
        [anon_sym_import] = ACTIONS(49),
        [anon_sym_component] = ACTIONS(51),
        [anon_sym_native] = ACTIONS(53),
        [anon_sym_POUNDdefine] = ACTIONS(449),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [25] = {
        [sym_except_dcl] = STATE(618),
        [sym_interface_dcl] = STATE(618),
        [sym_interface_kind] = STATE(616),
        [sym_interface_forward_dcl] = STATE(615),
        [sym_interface_def] = STATE(615),
        [sym_interface_header] = STATE(614),
        [sym_bitset_dcl] = STATE(618),
        [sym_bitmask_dcl] = STATE(618),
        [sym_annotation_dcl] = STATE(618),
        [sym_annotation_appl] = STATE(162),
        [sym_template_module_dcl] = STATE(618),
        [sym_template_module_inst] = STATE(618),
        [sym_value_dcl] = STATE(618),
        [sym_value_def] = STATE(613),
        [sym_value_kind] = STATE(612),
        [sym_value_header] = STATE(611),
        [sym_value_forward_dcl] = STATE(613),
        [sym_typedef_dcl] = STATE(618),
        [sym_enum_dcl] = STATE(618),
        [sym_enum_anno] = STATE(608),
        [sym_union_forward_dcl] = STATE(618),
        [sym_union_def] = STATE(618),
        [sym_type_id_dcl] = STATE(618),
        [sym_type_prefix_dcl] = STATE(618),
        [sym_import_dcl] = STATE(618),
        [sym_value_abs_def] = STATE(613),
        [sym_component_dcl] = STATE(618),
        [sym_component_forward_dcl] = STATE(604),
        [sym_component_def] = STATE(604),
        [sym_component_header] = STATE(602),
        [sym__definition] = STATE(116),
        [sym_native_dcl] = STATE(618),
        [sym_module_dcl] = STATE(618),
        [sym_struct_forward_dcl] = STATE(618),
        [sym_struct_def] = STATE(618),
        [sym_predefine] = STATE(99),
        [sym_const_dcl] = STATE(618),
        [sym_comment] = STATE(25),
        [aux_sym_specification_repeat2] = STATE(24),
        [aux_sym_interface_def_repeat1] = STATE(149),
        [anon_sym_exception] = ACTIONS(11),
        [anon_sym_RBRACE] = ACTIONS(604),
        [anon_sym_local] = ACTIONS(13),
        [anon_sym_abstract] = ACTIONS(15),
        [anon_sym_interface] = ACTIONS(17),
        [anon_sym_bitset] = ACTIONS(19),
        [anon_sym_bitmask] = ACTIONS(21),
        [anon_sym_ATannotation] = ACTIONS(23),
        [anon_sym_AT] = ACTIONS(25),
        [anon_sym_module] = ACTIONS(27),
        [anon_sym_valuetype] = ACTIONS(29),
        [anon_sym_struct] = ACTIONS(31),
        [anon_sym_union] = ACTIONS(33),
        [anon_sym_enum] = ACTIONS(35),
        [anon_sym_const] = ACTIONS(37),
        [anon_sym_custom] = ACTIONS(39),
        [anon_sym_typedef] = ACTIONS(41),
        [anon_sym_ATignore_literal_names] = ACTIONS(43),
        [anon_sym_typeid] = ACTIONS(45),
        [anon_sym_typeprefix] = ACTIONS(47),
        [anon_sym_import] = ACTIONS(49),
        [anon_sym_component] = ACTIONS(51),
        [anon_sym_native] = ACTIONS(53),
        [anon_sym_POUNDdefine] = ACTIONS(449),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
};

static const uint16_t ts_small_parse_table[] = {
    [0] = 40,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(195),
    1,
    anon_sym_longlong,
    ACTIONS(197),
    1,
    anon_sym_int64,
    ACTIONS(199),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(203),
    1,
    anon_sym_fixed,
    ACTIONS(205),
    1,
    sym_signed_tiny_int,
    ACTIONS(207),
    1,
    anon_sym_unsignedshort,
    ACTIONS(209),
    1,
    anon_sym_uint16,
    ACTIONS(213),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(215),
    1,
    anon_sym_uint64,
    ACTIONS(219),
    1,
    anon_sym_longdouble,
    ACTIONS(223),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(227),
    1,
    anon_sym_any,
    ACTIONS(229),
    1,
    anon_sym_sequence,
    ACTIONS(231),
    1,
    anon_sym_map,
    ACTIONS(277),
    1,
    sym_identifier,
    ACTIONS(606),
    1,
    anon_sym_RBRACE,
    ACTIONS(608),
    1,
    anon_sym_AT,
    STATE(26),
    1,
    sym_comment,
    STATE(29),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(46),
    1,
    aux_sym_interface_def_repeat1,
    STATE(74),
    1,
    sym_member,
    STATE(81),
    1,
    sym_annotation_appl,
    STATE(190),
    1,
    sym_type_spec,
    STATE(219),
    1,
    sym_scoped_name,
    STATE(299),
    1,
    sym_base_type_spec,
    ACTIONS(191),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(193),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(211),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(217),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(221),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(225),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(231),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(345),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(251),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(257),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    ACTIONS(201),
    4,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    sym_value_base_type,
    STATE(289),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(297),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [142] = 40,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(195),
    1,
    anon_sym_longlong,
    ACTIONS(197),
    1,
    anon_sym_int64,
    ACTIONS(199),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(203),
    1,
    anon_sym_fixed,
    ACTIONS(205),
    1,
    sym_signed_tiny_int,
    ACTIONS(207),
    1,
    anon_sym_unsignedshort,
    ACTIONS(209),
    1,
    anon_sym_uint16,
    ACTIONS(213),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(215),
    1,
    anon_sym_uint64,
    ACTIONS(219),
    1,
    anon_sym_longdouble,
    ACTIONS(223),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(227),
    1,
    anon_sym_any,
    ACTIONS(229),
    1,
    anon_sym_sequence,
    ACTIONS(231),
    1,
    anon_sym_map,
    ACTIONS(277),
    1,
    sym_identifier,
    ACTIONS(608),
    1,
    anon_sym_AT,
    ACTIONS(610),
    1,
    anon_sym_RBRACE,
    STATE(27),
    1,
    sym_comment,
    STATE(39),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(46),
    1,
    aux_sym_interface_def_repeat1,
    STATE(74),
    1,
    sym_member,
    STATE(81),
    1,
    sym_annotation_appl,
    STATE(190),
    1,
    sym_type_spec,
    STATE(219),
    1,
    sym_scoped_name,
    STATE(299),
    1,
    sym_base_type_spec,
    ACTIONS(191),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(193),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(211),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(217),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(221),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(225),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(231),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(345),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(251),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(257),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    ACTIONS(201),
    4,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    sym_value_base_type,
    STATE(289),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(297),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [284] = 41,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(195),
    1,
    anon_sym_longlong,
    ACTIONS(197),
    1,
    anon_sym_int64,
    ACTIONS(199),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(205),
    1,
    sym_signed_tiny_int,
    ACTIONS(207),
    1,
    anon_sym_unsignedshort,
    ACTIONS(209),
    1,
    anon_sym_uint16,
    ACTIONS(213),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(215),
    1,
    anon_sym_uint64,
    ACTIONS(219),
    1,
    anon_sym_longdouble,
    ACTIONS(223),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(229),
    1,
    anon_sym_sequence,
    ACTIONS(257),
    1,
    anon_sym_enum,
    ACTIONS(259),
    1,
    anon_sym_const,
    ACTIONS(267),
    1,
    anon_sym_typedef,
    ACTIONS(277),
    1,
    sym_identifier,
    ACTIONS(614),
    1,
    anon_sym_fixed,
    ACTIONS(616),
    1,
    anon_sym_any,
    ACTIONS(618),
    1,
    anon_sym_RBRACE,
    ACTIONS(620),
    1,
    anon_sym_ATignore_literal_names,
    STATE(28),
    1,
    sym_comment,
    STATE(36),
    1,
    aux_sym_annotation_dcl_repeat1,
    STATE(66),
    1,
    sym_annotation_member,
    STATE(73),
    1,
    sym_annotation_body,
    STATE(454),
    1,
    sym_annotation_member_type,
    STATE(455),
    1,
    sym_scoped_name,
    STATE(608),
    1,
    sym_enum_anno,
    ACTIONS(191),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(193),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(211),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(217),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(221),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(225),
    2,
    anon_sym_string,
    anon_sym_wstring,
    ACTIONS(612),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(231),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(479),
    2,
    sym_any_const_type,
    sym_const_type,
    STATE(251),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(257),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(478),
    3,
    sym_typedef_dcl,
    sym_enum_dcl,
    sym_const_dcl,
    STATE(582),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [428] = 40,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(195),
    1,
    anon_sym_longlong,
    ACTIONS(197),
    1,
    anon_sym_int64,
    ACTIONS(199),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(203),
    1,
    anon_sym_fixed,
    ACTIONS(205),
    1,
    sym_signed_tiny_int,
    ACTIONS(207),
    1,
    anon_sym_unsignedshort,
    ACTIONS(209),
    1,
    anon_sym_uint16,
    ACTIONS(213),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(215),
    1,
    anon_sym_uint64,
    ACTIONS(219),
    1,
    anon_sym_longdouble,
    ACTIONS(223),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(227),
    1,
    anon_sym_any,
    ACTIONS(229),
    1,
    anon_sym_sequence,
    ACTIONS(231),
    1,
    anon_sym_map,
    ACTIONS(277),
    1,
    sym_identifier,
    ACTIONS(608),
    1,
    anon_sym_AT,
    ACTIONS(622),
    1,
    anon_sym_RBRACE,
    STATE(29),
    1,
    sym_comment,
    STATE(37),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(46),
    1,
    aux_sym_interface_def_repeat1,
    STATE(74),
    1,
    sym_member,
    STATE(81),
    1,
    sym_annotation_appl,
    STATE(190),
    1,
    sym_type_spec,
    STATE(219),
    1,
    sym_scoped_name,
    STATE(299),
    1,
    sym_base_type_spec,
    ACTIONS(191),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(193),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(211),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(217),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(221),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(225),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(231),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(345),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(251),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(257),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    ACTIONS(201),
    4,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    sym_value_base_type,
    STATE(289),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(297),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [570] = 40,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(195),
    1,
    anon_sym_longlong,
    ACTIONS(197),
    1,
    anon_sym_int64,
    ACTIONS(199),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(203),
    1,
    anon_sym_fixed,
    ACTIONS(205),
    1,
    sym_signed_tiny_int,
    ACTIONS(207),
    1,
    anon_sym_unsignedshort,
    ACTIONS(209),
    1,
    anon_sym_uint16,
    ACTIONS(213),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(215),
    1,
    anon_sym_uint64,
    ACTIONS(219),
    1,
    anon_sym_longdouble,
    ACTIONS(223),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(227),
    1,
    anon_sym_any,
    ACTIONS(229),
    1,
    anon_sym_sequence,
    ACTIONS(231),
    1,
    anon_sym_map,
    ACTIONS(277),
    1,
    sym_identifier,
    ACTIONS(608),
    1,
    anon_sym_AT,
    ACTIONS(624),
    1,
    anon_sym_RBRACE,
    STATE(30),
    1,
    sym_comment,
    STATE(34),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(46),
    1,
    aux_sym_interface_def_repeat1,
    STATE(74),
    1,
    sym_member,
    STATE(81),
    1,
    sym_annotation_appl,
    STATE(190),
    1,
    sym_type_spec,
    STATE(219),
    1,
    sym_scoped_name,
    STATE(299),
    1,
    sym_base_type_spec,
    ACTIONS(191),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(193),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(211),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(217),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(221),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(225),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(231),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(345),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(251),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(257),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    ACTIONS(201),
    4,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    sym_value_base_type,
    STATE(289),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(297),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [712] = 40,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(195),
    1,
    anon_sym_longlong,
    ACTIONS(197),
    1,
    anon_sym_int64,
    ACTIONS(199),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(203),
    1,
    anon_sym_fixed,
    ACTIONS(205),
    1,
    sym_signed_tiny_int,
    ACTIONS(207),
    1,
    anon_sym_unsignedshort,
    ACTIONS(209),
    1,
    anon_sym_uint16,
    ACTIONS(213),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(215),
    1,
    anon_sym_uint64,
    ACTIONS(219),
    1,
    anon_sym_longdouble,
    ACTIONS(223),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(227),
    1,
    anon_sym_any,
    ACTIONS(229),
    1,
    anon_sym_sequence,
    ACTIONS(231),
    1,
    anon_sym_map,
    ACTIONS(277),
    1,
    sym_identifier,
    ACTIONS(608),
    1,
    anon_sym_AT,
    ACTIONS(626),
    1,
    anon_sym_RBRACE,
    STATE(31),
    1,
    sym_comment,
    STATE(32),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(46),
    1,
    aux_sym_interface_def_repeat1,
    STATE(74),
    1,
    sym_member,
    STATE(81),
    1,
    sym_annotation_appl,
    STATE(190),
    1,
    sym_type_spec,
    STATE(219),
    1,
    sym_scoped_name,
    STATE(299),
    1,
    sym_base_type_spec,
    ACTIONS(191),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(193),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(211),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(217),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(221),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(225),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(231),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(345),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(251),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(257),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    ACTIONS(201),
    4,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    sym_value_base_type,
    STATE(289),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(297),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [854] = 40,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(195),
    1,
    anon_sym_longlong,
    ACTIONS(197),
    1,
    anon_sym_int64,
    ACTIONS(199),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(203),
    1,
    anon_sym_fixed,
    ACTIONS(205),
    1,
    sym_signed_tiny_int,
    ACTIONS(207),
    1,
    anon_sym_unsignedshort,
    ACTIONS(209),
    1,
    anon_sym_uint16,
    ACTIONS(213),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(215),
    1,
    anon_sym_uint64,
    ACTIONS(219),
    1,
    anon_sym_longdouble,
    ACTIONS(223),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(227),
    1,
    anon_sym_any,
    ACTIONS(229),
    1,
    anon_sym_sequence,
    ACTIONS(231),
    1,
    anon_sym_map,
    ACTIONS(277),
    1,
    sym_identifier,
    ACTIONS(608),
    1,
    anon_sym_AT,
    ACTIONS(628),
    1,
    anon_sym_RBRACE,
    STATE(32),
    1,
    sym_comment,
    STATE(37),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(46),
    1,
    aux_sym_interface_def_repeat1,
    STATE(74),
    1,
    sym_member,
    STATE(81),
    1,
    sym_annotation_appl,
    STATE(190),
    1,
    sym_type_spec,
    STATE(219),
    1,
    sym_scoped_name,
    STATE(299),
    1,
    sym_base_type_spec,
    ACTIONS(191),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(193),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(211),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(217),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(221),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(225),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(231),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(345),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(251),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(257),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    ACTIONS(201),
    4,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    sym_value_base_type,
    STATE(289),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(297),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [996] = 40,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(636),
    1,
    anon_sym_longlong,
    ACTIONS(639),
    1,
    anon_sym_int64,
    ACTIONS(642),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(648),
    1,
    anon_sym_fixed,
    ACTIONS(651),
    1,
    sym_signed_tiny_int,
    ACTIONS(654),
    1,
    anon_sym_unsignedshort,
    ACTIONS(657),
    1,
    anon_sym_uint16,
    ACTIONS(663),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(666),
    1,
    anon_sym_uint64,
    ACTIONS(672),
    1,
    anon_sym_longdouble,
    ACTIONS(678),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(684),
    1,
    anon_sym_any,
    ACTIONS(687),
    1,
    anon_sym_sequence,
    ACTIONS(690),
    1,
    anon_sym_RBRACE,
    ACTIONS(692),
    1,
    anon_sym_enum,
    ACTIONS(695),
    1,
    anon_sym_const,
    ACTIONS(698),
    1,
    anon_sym_typedef,
    ACTIONS(701),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(704),
    1,
    sym_identifier,
    STATE(66),
    1,
    sym_annotation_member,
    STATE(73),
    1,
    sym_annotation_body,
    STATE(454),
    1,
    sym_annotation_member_type,
    STATE(455),
    1,
    sym_scoped_name,
    STATE(608),
    1,
    sym_enum_anno,
    ACTIONS(630),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(633),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(645),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(660),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(669),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(675),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(681),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(33),
    2,
    sym_comment,
    aux_sym_annotation_dcl_repeat1,
    STATE(231),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(479),
    2,
    sym_any_const_type,
    sym_const_type,
    STATE(251),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(257),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(478),
    3,
    sym_typedef_dcl,
    sym_enum_dcl,
    sym_const_dcl,
    STATE(582),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [1138] = 40,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(195),
    1,
    anon_sym_longlong,
    ACTIONS(197),
    1,
    anon_sym_int64,
    ACTIONS(199),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(203),
    1,
    anon_sym_fixed,
    ACTIONS(205),
    1,
    sym_signed_tiny_int,
    ACTIONS(207),
    1,
    anon_sym_unsignedshort,
    ACTIONS(209),
    1,
    anon_sym_uint16,
    ACTIONS(213),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(215),
    1,
    anon_sym_uint64,
    ACTIONS(219),
    1,
    anon_sym_longdouble,
    ACTIONS(223),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(227),
    1,
    anon_sym_any,
    ACTIONS(229),
    1,
    anon_sym_sequence,
    ACTIONS(231),
    1,
    anon_sym_map,
    ACTIONS(277),
    1,
    sym_identifier,
    ACTIONS(608),
    1,
    anon_sym_AT,
    ACTIONS(707),
    1,
    anon_sym_RBRACE,
    STATE(34),
    1,
    sym_comment,
    STATE(37),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(46),
    1,
    aux_sym_interface_def_repeat1,
    STATE(74),
    1,
    sym_member,
    STATE(81),
    1,
    sym_annotation_appl,
    STATE(190),
    1,
    sym_type_spec,
    STATE(219),
    1,
    sym_scoped_name,
    STATE(299),
    1,
    sym_base_type_spec,
    ACTIONS(191),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(193),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(211),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(217),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(221),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(225),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(231),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(345),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(251),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(257),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    ACTIONS(201),
    4,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    sym_value_base_type,
    STATE(289),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(297),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [1280] = 40,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(195),
    1,
    anon_sym_longlong,
    ACTIONS(197),
    1,
    anon_sym_int64,
    ACTIONS(199),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(203),
    1,
    anon_sym_fixed,
    ACTIONS(205),
    1,
    sym_signed_tiny_int,
    ACTIONS(207),
    1,
    anon_sym_unsignedshort,
    ACTIONS(209),
    1,
    anon_sym_uint16,
    ACTIONS(213),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(215),
    1,
    anon_sym_uint64,
    ACTIONS(219),
    1,
    anon_sym_longdouble,
    ACTIONS(223),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(227),
    1,
    anon_sym_any,
    ACTIONS(229),
    1,
    anon_sym_sequence,
    ACTIONS(231),
    1,
    anon_sym_map,
    ACTIONS(277),
    1,
    sym_identifier,
    ACTIONS(608),
    1,
    anon_sym_AT,
    ACTIONS(709),
    1,
    anon_sym_RBRACE,
    STATE(35),
    1,
    sym_comment,
    STATE(37),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(46),
    1,
    aux_sym_interface_def_repeat1,
    STATE(74),
    1,
    sym_member,
    STATE(81),
    1,
    sym_annotation_appl,
    STATE(190),
    1,
    sym_type_spec,
    STATE(219),
    1,
    sym_scoped_name,
    STATE(299),
    1,
    sym_base_type_spec,
    ACTIONS(191),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(193),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(211),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(217),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(221),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(225),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(231),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(345),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(251),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(257),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    ACTIONS(201),
    4,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    sym_value_base_type,
    STATE(289),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(297),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [1422] = 41,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(195),
    1,
    anon_sym_longlong,
    ACTIONS(197),
    1,
    anon_sym_int64,
    ACTIONS(199),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(205),
    1,
    sym_signed_tiny_int,
    ACTIONS(207),
    1,
    anon_sym_unsignedshort,
    ACTIONS(209),
    1,
    anon_sym_uint16,
    ACTIONS(213),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(215),
    1,
    anon_sym_uint64,
    ACTIONS(219),
    1,
    anon_sym_longdouble,
    ACTIONS(223),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(229),
    1,
    anon_sym_sequence,
    ACTIONS(257),
    1,
    anon_sym_enum,
    ACTIONS(259),
    1,
    anon_sym_const,
    ACTIONS(267),
    1,
    anon_sym_typedef,
    ACTIONS(277),
    1,
    sym_identifier,
    ACTIONS(614),
    1,
    anon_sym_fixed,
    ACTIONS(616),
    1,
    anon_sym_any,
    ACTIONS(620),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(711),
    1,
    anon_sym_RBRACE,
    STATE(33),
    1,
    aux_sym_annotation_dcl_repeat1,
    STATE(36),
    1,
    sym_comment,
    STATE(66),
    1,
    sym_annotation_member,
    STATE(73),
    1,
    sym_annotation_body,
    STATE(454),
    1,
    sym_annotation_member_type,
    STATE(455),
    1,
    sym_scoped_name,
    STATE(608),
    1,
    sym_enum_anno,
    ACTIONS(191),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(193),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(211),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(217),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(221),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(225),
    2,
    anon_sym_string,
    anon_sym_wstring,
    ACTIONS(612),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(231),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(479),
    2,
    sym_any_const_type,
    sym_const_type,
    STATE(251),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(257),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(478),
    3,
    sym_typedef_dcl,
    sym_enum_dcl,
    sym_const_dcl,
    STATE(582),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [1566] = 39,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(719),
    1,
    anon_sym_longlong,
    ACTIONS(722),
    1,
    anon_sym_int64,
    ACTIONS(725),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(731),
    1,
    anon_sym_fixed,
    ACTIONS(734),
    1,
    sym_signed_tiny_int,
    ACTIONS(737),
    1,
    anon_sym_unsignedshort,
    ACTIONS(740),
    1,
    anon_sym_uint16,
    ACTIONS(746),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(749),
    1,
    anon_sym_uint64,
    ACTIONS(755),
    1,
    anon_sym_longdouble,
    ACTIONS(761),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(767),
    1,
    anon_sym_any,
    ACTIONS(770),
    1,
    anon_sym_sequence,
    ACTIONS(773),
    1,
    anon_sym_map,
    ACTIONS(776),
    1,
    anon_sym_RBRACE,
    ACTIONS(778),
    1,
    anon_sym_AT,
    ACTIONS(781),
    1,
    sym_identifier,
    STATE(46),
    1,
    aux_sym_interface_def_repeat1,
    STATE(74),
    1,
    sym_member,
    STATE(81),
    1,
    sym_annotation_appl,
    STATE(190),
    1,
    sym_type_spec,
    STATE(219),
    1,
    sym_scoped_name,
    STATE(299),
    1,
    sym_base_type_spec,
    ACTIONS(713),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(716),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(743),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(752),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(758),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(764),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(37),
    2,
    sym_comment,
    aux_sym_except_dcl_repeat1,
    STATE(231),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(345),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(251),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(257),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    ACTIONS(728),
    4,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    sym_value_base_type,
    STATE(289),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(297),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [1706] = 40,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(195),
    1,
    anon_sym_longlong,
    ACTIONS(197),
    1,
    anon_sym_int64,
    ACTIONS(199),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(203),
    1,
    anon_sym_fixed,
    ACTIONS(205),
    1,
    sym_signed_tiny_int,
    ACTIONS(207),
    1,
    anon_sym_unsignedshort,
    ACTIONS(209),
    1,
    anon_sym_uint16,
    ACTIONS(213),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(215),
    1,
    anon_sym_uint64,
    ACTIONS(219),
    1,
    anon_sym_longdouble,
    ACTIONS(223),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(227),
    1,
    anon_sym_any,
    ACTIONS(229),
    1,
    anon_sym_sequence,
    ACTIONS(231),
    1,
    anon_sym_map,
    ACTIONS(277),
    1,
    sym_identifier,
    ACTIONS(608),
    1,
    anon_sym_AT,
    ACTIONS(707),
    1,
    anon_sym_RBRACE,
    STATE(35),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(38),
    1,
    sym_comment,
    STATE(46),
    1,
    aux_sym_interface_def_repeat1,
    STATE(74),
    1,
    sym_member,
    STATE(81),
    1,
    sym_annotation_appl,
    STATE(190),
    1,
    sym_type_spec,
    STATE(219),
    1,
    sym_scoped_name,
    STATE(299),
    1,
    sym_base_type_spec,
    ACTIONS(191),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(193),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(211),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(217),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(221),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(225),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(231),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(345),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(251),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(257),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    ACTIONS(201),
    4,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    sym_value_base_type,
    STATE(289),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(297),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [1848] = 40,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(195),
    1,
    anon_sym_longlong,
    ACTIONS(197),
    1,
    anon_sym_int64,
    ACTIONS(199),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(203),
    1,
    anon_sym_fixed,
    ACTIONS(205),
    1,
    sym_signed_tiny_int,
    ACTIONS(207),
    1,
    anon_sym_unsignedshort,
    ACTIONS(209),
    1,
    anon_sym_uint16,
    ACTIONS(213),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(215),
    1,
    anon_sym_uint64,
    ACTIONS(219),
    1,
    anon_sym_longdouble,
    ACTIONS(223),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(227),
    1,
    anon_sym_any,
    ACTIONS(229),
    1,
    anon_sym_sequence,
    ACTIONS(231),
    1,
    anon_sym_map,
    ACTIONS(277),
    1,
    sym_identifier,
    ACTIONS(608),
    1,
    anon_sym_AT,
    ACTIONS(784),
    1,
    anon_sym_RBRACE,
    STATE(37),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(39),
    1,
    sym_comment,
    STATE(46),
    1,
    aux_sym_interface_def_repeat1,
    STATE(74),
    1,
    sym_member,
    STATE(81),
    1,
    sym_annotation_appl,
    STATE(190),
    1,
    sym_type_spec,
    STATE(219),
    1,
    sym_scoped_name,
    STATE(299),
    1,
    sym_base_type_spec,
    ACTIONS(191),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(193),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(211),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(217),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(221),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(225),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(231),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(345),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(251),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(257),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    ACTIONS(201),
    4,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    sym_value_base_type,
    STATE(289),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(297),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [1990] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(40),
    1,
    sym_comment,
    ACTIONS(788),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(786),
    48,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    anon_sym_exception,
    anon_sym_abstract,
    anon_sym_void,
    anon_sym_readonly,
    anon_sym_attribute,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_valuetype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_custom,
    anon_sym_public,
    anon_sym_private,
    anon_sym_factory,
    anon_sym_typedef,
    anon_sym_ATignore_literal_names,
    anon_sym_typeid,
    anon_sym_import,
    sym_object_type,
    anon_sym_oneway,
    sym_value_base_type,
    anon_sym_native,
    sym_identifier,
    [2059] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(41),
    1,
    sym_comment,
    ACTIONS(792),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(790),
    48,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    anon_sym_exception,
    anon_sym_abstract,
    anon_sym_void,
    anon_sym_readonly,
    anon_sym_attribute,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_valuetype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_custom,
    anon_sym_public,
    anon_sym_private,
    anon_sym_factory,
    anon_sym_typedef,
    anon_sym_ATignore_literal_names,
    anon_sym_typeid,
    anon_sym_import,
    sym_object_type,
    anon_sym_oneway,
    sym_value_base_type,
    anon_sym_native,
    sym_identifier,
    [2128] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(42),
    1,
    sym_comment,
    ACTIONS(796),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(794),
    48,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    anon_sym_exception,
    anon_sym_abstract,
    anon_sym_void,
    anon_sym_readonly,
    anon_sym_attribute,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_valuetype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_custom,
    anon_sym_public,
    anon_sym_private,
    anon_sym_factory,
    anon_sym_typedef,
    anon_sym_ATignore_literal_names,
    anon_sym_typeid,
    anon_sym_import,
    sym_object_type,
    anon_sym_oneway,
    sym_value_base_type,
    anon_sym_native,
    sym_identifier,
    [2197] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(43),
    1,
    sym_comment,
    ACTIONS(800),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(798),
    48,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    anon_sym_exception,
    anon_sym_abstract,
    anon_sym_void,
    anon_sym_readonly,
    anon_sym_attribute,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_valuetype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_custom,
    anon_sym_public,
    anon_sym_private,
    anon_sym_factory,
    anon_sym_typedef,
    anon_sym_ATignore_literal_names,
    anon_sym_typeid,
    anon_sym_import,
    sym_object_type,
    anon_sym_oneway,
    sym_value_base_type,
    anon_sym_native,
    sym_identifier,
    [2266] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(44),
    1,
    sym_comment,
    ACTIONS(804),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(802),
    48,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    anon_sym_exception,
    anon_sym_abstract,
    anon_sym_void,
    anon_sym_readonly,
    anon_sym_attribute,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_valuetype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_custom,
    anon_sym_public,
    anon_sym_private,
    anon_sym_factory,
    anon_sym_typedef,
    anon_sym_ATignore_literal_names,
    anon_sym_typeid,
    anon_sym_import,
    sym_object_type,
    anon_sym_oneway,
    sym_value_base_type,
    anon_sym_native,
    sym_identifier,
    [2335] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(45),
    1,
    sym_comment,
    ACTIONS(808),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(806),
    48,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    anon_sym_exception,
    anon_sym_abstract,
    anon_sym_void,
    anon_sym_readonly,
    anon_sym_attribute,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_valuetype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_custom,
    anon_sym_public,
    anon_sym_private,
    anon_sym_factory,
    anon_sym_typedef,
    anon_sym_ATignore_literal_names,
    anon_sym_typeid,
    anon_sym_import,
    sym_object_type,
    anon_sym_oneway,
    sym_value_base_type,
    anon_sym_native,
    sym_identifier,
    [2404] = 37,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(195),
    1,
    anon_sym_longlong,
    ACTIONS(197),
    1,
    anon_sym_int64,
    ACTIONS(199),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(203),
    1,
    anon_sym_fixed,
    ACTIONS(205),
    1,
    sym_signed_tiny_int,
    ACTIONS(207),
    1,
    anon_sym_unsignedshort,
    ACTIONS(209),
    1,
    anon_sym_uint16,
    ACTIONS(213),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(215),
    1,
    anon_sym_uint64,
    ACTIONS(219),
    1,
    anon_sym_longdouble,
    ACTIONS(223),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(227),
    1,
    anon_sym_any,
    ACTIONS(229),
    1,
    anon_sym_sequence,
    ACTIONS(231),
    1,
    anon_sym_map,
    ACTIONS(277),
    1,
    sym_identifier,
    ACTIONS(608),
    1,
    anon_sym_AT,
    STATE(46),
    1,
    sym_comment,
    STATE(65),
    1,
    aux_sym_interface_def_repeat1,
    STATE(81),
    1,
    sym_annotation_appl,
    STATE(195),
    1,
    sym_type_spec,
    STATE(219),
    1,
    sym_scoped_name,
    STATE(299),
    1,
    sym_base_type_spec,
    ACTIONS(191),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(193),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(211),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(217),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(221),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(225),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(231),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(345),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(251),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(257),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    ACTIONS(201),
    4,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    sym_value_base_type,
    STATE(289),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(297),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [2537] = 34,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(195),
    1,
    anon_sym_longlong,
    ACTIONS(197),
    1,
    anon_sym_int64,
    ACTIONS(199),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(205),
    1,
    sym_signed_tiny_int,
    ACTIONS(207),
    1,
    anon_sym_unsignedshort,
    ACTIONS(209),
    1,
    anon_sym_uint16,
    ACTIONS(213),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(215),
    1,
    anon_sym_uint64,
    ACTIONS(219),
    1,
    anon_sym_longdouble,
    ACTIONS(223),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(227),
    1,
    anon_sym_any,
    ACTIONS(277),
    1,
    sym_identifier,
    ACTIONS(810),
    1,
    anon_sym_sequence,
    ACTIONS(814),
    1,
    anon_sym_const,
    STATE(47),
    1,
    sym_comment,
    STATE(219),
    1,
    sym_scoped_name,
    STATE(278),
    1,
    sym_formal_parameter,
    STATE(299),
    1,
    sym_base_type_spec,
    STATE(470),
    1,
    sym_formal_parameter_type,
    STATE(472),
    1,
    sym_formal_parameters,
    ACTIONS(191),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(193),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(211),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(217),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(221),
    2,
    anon_sym_char,
    anon_sym_wchar,
    STATE(231),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(473),
    2,
    sym_simple_type_spec,
    sym_sequence_type,
    STATE(251),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(257),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    ACTIONS(201),
    4,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    sym_value_base_type,
    STATE(289),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    ACTIONS(812),
    8,
    anon_sym_exception,
    anon_sym_interface,
    anon_sym_typename,
    anon_sym_valuetype,
    anon_sym_eventtype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    [2664] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(48),
    1,
    sym_comment,
    ACTIONS(818),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(816),
    48,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    anon_sym_exception,
    anon_sym_abstract,
    anon_sym_void,
    anon_sym_readonly,
    anon_sym_attribute,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_valuetype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_custom,
    anon_sym_public,
    anon_sym_private,
    anon_sym_factory,
    anon_sym_typedef,
    anon_sym_ATignore_literal_names,
    anon_sym_typeid,
    anon_sym_import,
    sym_object_type,
    anon_sym_oneway,
    sym_value_base_type,
    anon_sym_native,
    sym_identifier,
    [2733] = 36,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(195),
    1,
    anon_sym_longlong,
    ACTIONS(197),
    1,
    anon_sym_int64,
    ACTIONS(199),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(203),
    1,
    anon_sym_fixed,
    ACTIONS(205),
    1,
    sym_signed_tiny_int,
    ACTIONS(207),
    1,
    anon_sym_unsignedshort,
    ACTIONS(209),
    1,
    anon_sym_uint16,
    ACTIONS(213),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(215),
    1,
    anon_sym_uint64,
    ACTIONS(219),
    1,
    anon_sym_longdouble,
    ACTIONS(223),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(227),
    1,
    anon_sym_any,
    ACTIONS(229),
    1,
    anon_sym_sequence,
    ACTIONS(231),
    1,
    anon_sym_map,
    ACTIONS(277),
    1,
    sym_identifier,
    ACTIONS(820),
    1,
    anon_sym_GT,
    ACTIONS(822),
    1,
    anon_sym_COMMA,
    STATE(49),
    1,
    sym_comment,
    STATE(219),
    1,
    sym_scoped_name,
    STATE(299),
    1,
    sym_base_type_spec,
    STATE(581),
    1,
    sym_type_spec,
    ACTIONS(191),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(193),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(211),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(217),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(221),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(225),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(231),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(345),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(251),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(257),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    ACTIONS(201),
    4,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    sym_value_base_type,
    STATE(289),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(297),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [2863] = 33,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(195),
    1,
    anon_sym_longlong,
    ACTIONS(197),
    1,
    anon_sym_int64,
    ACTIONS(199),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(205),
    1,
    sym_signed_tiny_int,
    ACTIONS(207),
    1,
    anon_sym_unsignedshort,
    ACTIONS(209),
    1,
    anon_sym_uint16,
    ACTIONS(213),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(215),
    1,
    anon_sym_uint64,
    ACTIONS(219),
    1,
    anon_sym_longdouble,
    ACTIONS(223),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(227),
    1,
    anon_sym_any,
    ACTIONS(277),
    1,
    sym_identifier,
    ACTIONS(810),
    1,
    anon_sym_sequence,
    ACTIONS(814),
    1,
    anon_sym_const,
    STATE(50),
    1,
    sym_comment,
    STATE(219),
    1,
    sym_scoped_name,
    STATE(299),
    1,
    sym_base_type_spec,
    STATE(430),
    1,
    sym_formal_parameter,
    STATE(470),
    1,
    sym_formal_parameter_type,
    ACTIONS(191),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(193),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(211),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(217),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(221),
    2,
    anon_sym_char,
    anon_sym_wchar,
    STATE(231),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(473),
    2,
    sym_simple_type_spec,
    sym_sequence_type,
    STATE(251),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(257),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    ACTIONS(201),
    4,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    sym_value_base_type,
    STATE(289),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    ACTIONS(812),
    8,
    anon_sym_exception,
    anon_sym_interface,
    anon_sym_typename,
    anon_sym_valuetype,
    anon_sym_eventtype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    [2987] = 34,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(195),
    1,
    anon_sym_longlong,
    ACTIONS(197),
    1,
    anon_sym_int64,
    ACTIONS(199),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(203),
    1,
    anon_sym_fixed,
    ACTIONS(205),
    1,
    sym_signed_tiny_int,
    ACTIONS(207),
    1,
    anon_sym_unsignedshort,
    ACTIONS(209),
    1,
    anon_sym_uint16,
    ACTIONS(213),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(215),
    1,
    anon_sym_uint64,
    ACTIONS(219),
    1,
    anon_sym_longdouble,
    ACTIONS(223),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(227),
    1,
    anon_sym_any,
    ACTIONS(229),
    1,
    anon_sym_sequence,
    ACTIONS(231),
    1,
    anon_sym_map,
    ACTIONS(277),
    1,
    sym_identifier,
    STATE(51),
    1,
    sym_comment,
    STATE(219),
    1,
    sym_scoped_name,
    STATE(299),
    1,
    sym_base_type_spec,
    STATE(356),
    1,
    sym_type_spec,
    ACTIONS(191),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(193),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(211),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(217),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(221),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(225),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(231),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(345),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(251),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(257),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    ACTIONS(201),
    4,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    sym_value_base_type,
    STATE(289),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(297),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [3111] = 34,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(195),
    1,
    anon_sym_longlong,
    ACTIONS(197),
    1,
    anon_sym_int64,
    ACTIONS(199),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(203),
    1,
    anon_sym_fixed,
    ACTIONS(205),
    1,
    sym_signed_tiny_int,
    ACTIONS(207),
    1,
    anon_sym_unsignedshort,
    ACTIONS(209),
    1,
    anon_sym_uint16,
    ACTIONS(213),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(215),
    1,
    anon_sym_uint64,
    ACTIONS(219),
    1,
    anon_sym_longdouble,
    ACTIONS(223),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(227),
    1,
    anon_sym_any,
    ACTIONS(229),
    1,
    anon_sym_sequence,
    ACTIONS(231),
    1,
    anon_sym_map,
    ACTIONS(277),
    1,
    sym_identifier,
    STATE(52),
    1,
    sym_comment,
    STATE(219),
    1,
    sym_scoped_name,
    STATE(299),
    1,
    sym_base_type_spec,
    STATE(425),
    1,
    sym_type_spec,
    ACTIONS(191),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(193),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(211),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(217),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(221),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(225),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(231),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(345),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(251),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(257),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    ACTIONS(201),
    4,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    sym_value_base_type,
    STATE(289),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(297),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [3235] = 34,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(195),
    1,
    anon_sym_longlong,
    ACTIONS(197),
    1,
    anon_sym_int64,
    ACTIONS(199),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(203),
    1,
    anon_sym_fixed,
    ACTIONS(205),
    1,
    sym_signed_tiny_int,
    ACTIONS(207),
    1,
    anon_sym_unsignedshort,
    ACTIONS(209),
    1,
    anon_sym_uint16,
    ACTIONS(213),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(215),
    1,
    anon_sym_uint64,
    ACTIONS(219),
    1,
    anon_sym_longdouble,
    ACTIONS(223),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(227),
    1,
    anon_sym_any,
    ACTIONS(229),
    1,
    anon_sym_sequence,
    ACTIONS(231),
    1,
    anon_sym_map,
    ACTIONS(277),
    1,
    sym_identifier,
    STATE(53),
    1,
    sym_comment,
    STATE(219),
    1,
    sym_scoped_name,
    STATE(299),
    1,
    sym_base_type_spec,
    STATE(428),
    1,
    sym_type_spec,
    ACTIONS(191),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(193),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(211),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(217),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(221),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(225),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(231),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(345),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(251),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(257),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    ACTIONS(201),
    4,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    sym_value_base_type,
    STATE(289),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(297),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [3359] = 34,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(195),
    1,
    anon_sym_longlong,
    ACTIONS(197),
    1,
    anon_sym_int64,
    ACTIONS(199),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(203),
    1,
    anon_sym_fixed,
    ACTIONS(205),
    1,
    sym_signed_tiny_int,
    ACTIONS(207),
    1,
    anon_sym_unsignedshort,
    ACTIONS(209),
    1,
    anon_sym_uint16,
    ACTIONS(213),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(215),
    1,
    anon_sym_uint64,
    ACTIONS(219),
    1,
    anon_sym_longdouble,
    ACTIONS(223),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(227),
    1,
    anon_sym_any,
    ACTIONS(229),
    1,
    anon_sym_sequence,
    ACTIONS(231),
    1,
    anon_sym_map,
    ACTIONS(277),
    1,
    sym_identifier,
    STATE(54),
    1,
    sym_comment,
    STATE(219),
    1,
    sym_scoped_name,
    STATE(277),
    1,
    sym_type_spec,
    STATE(299),
    1,
    sym_base_type_spec,
    ACTIONS(191),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(193),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(211),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(217),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(221),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(225),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(231),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(345),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(251),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(257),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    ACTIONS(201),
    4,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    sym_value_base_type,
    STATE(289),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(297),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [3483] = 34,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(195),
    1,
    anon_sym_longlong,
    ACTIONS(197),
    1,
    anon_sym_int64,
    ACTIONS(199),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(203),
    1,
    anon_sym_fixed,
    ACTIONS(205),
    1,
    sym_signed_tiny_int,
    ACTIONS(207),
    1,
    anon_sym_unsignedshort,
    ACTIONS(209),
    1,
    anon_sym_uint16,
    ACTIONS(213),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(215),
    1,
    anon_sym_uint64,
    ACTIONS(219),
    1,
    anon_sym_longdouble,
    ACTIONS(223),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(227),
    1,
    anon_sym_any,
    ACTIONS(229),
    1,
    anon_sym_sequence,
    ACTIONS(231),
    1,
    anon_sym_map,
    ACTIONS(277),
    1,
    sym_identifier,
    STATE(55),
    1,
    sym_comment,
    STATE(219),
    1,
    sym_scoped_name,
    STATE(299),
    1,
    sym_base_type_spec,
    STATE(416),
    1,
    sym_type_spec,
    ACTIONS(191),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(193),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(211),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(217),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(221),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(225),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(231),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(345),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(251),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(257),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    ACTIONS(201),
    4,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    sym_value_base_type,
    STATE(289),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(297),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [3607] = 34,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(195),
    1,
    anon_sym_longlong,
    ACTIONS(197),
    1,
    anon_sym_int64,
    ACTIONS(199),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(203),
    1,
    anon_sym_fixed,
    ACTIONS(205),
    1,
    sym_signed_tiny_int,
    ACTIONS(207),
    1,
    anon_sym_unsignedshort,
    ACTIONS(209),
    1,
    anon_sym_uint16,
    ACTIONS(213),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(215),
    1,
    anon_sym_uint64,
    ACTIONS(219),
    1,
    anon_sym_longdouble,
    ACTIONS(227),
    1,
    anon_sym_any,
    ACTIONS(229),
    1,
    anon_sym_sequence,
    ACTIONS(231),
    1,
    anon_sym_map,
    ACTIONS(421),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(439),
    1,
    sym_identifier,
    STATE(56),
    1,
    sym_comment,
    STATE(299),
    1,
    sym_base_type_spec,
    STATE(367),
    1,
    sym_scoped_name,
    STATE(534),
    1,
    sym_type_spec,
    ACTIONS(191),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(193),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(211),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(217),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(221),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(225),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(231),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(345),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(251),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(257),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    ACTIONS(201),
    4,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    sym_value_base_type,
    STATE(289),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(297),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [3731] = 34,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(195),
    1,
    anon_sym_longlong,
    ACTIONS(197),
    1,
    anon_sym_int64,
    ACTIONS(199),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(203),
    1,
    anon_sym_fixed,
    ACTIONS(205),
    1,
    sym_signed_tiny_int,
    ACTIONS(207),
    1,
    anon_sym_unsignedshort,
    ACTIONS(209),
    1,
    anon_sym_uint16,
    ACTIONS(213),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(215),
    1,
    anon_sym_uint64,
    ACTIONS(219),
    1,
    anon_sym_longdouble,
    ACTIONS(223),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(227),
    1,
    anon_sym_any,
    ACTIONS(229),
    1,
    anon_sym_sequence,
    ACTIONS(231),
    1,
    anon_sym_map,
    ACTIONS(277),
    1,
    sym_identifier,
    STATE(57),
    1,
    sym_comment,
    STATE(219),
    1,
    sym_scoped_name,
    STATE(299),
    1,
    sym_base_type_spec,
    STATE(443),
    1,
    sym_type_spec,
    ACTIONS(191),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(193),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(211),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(217),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(221),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(225),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(231),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(345),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(251),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(257),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    ACTIONS(201),
    4,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    sym_value_base_type,
    STATE(289),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(297),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [3855] = 34,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(195),
    1,
    anon_sym_longlong,
    ACTIONS(197),
    1,
    anon_sym_int64,
    ACTIONS(199),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(203),
    1,
    anon_sym_fixed,
    ACTIONS(205),
    1,
    sym_signed_tiny_int,
    ACTIONS(207),
    1,
    anon_sym_unsignedshort,
    ACTIONS(209),
    1,
    anon_sym_uint16,
    ACTIONS(213),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(215),
    1,
    anon_sym_uint64,
    ACTIONS(219),
    1,
    anon_sym_longdouble,
    ACTIONS(223),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(227),
    1,
    anon_sym_any,
    ACTIONS(229),
    1,
    anon_sym_sequence,
    ACTIONS(231),
    1,
    anon_sym_map,
    ACTIONS(277),
    1,
    sym_identifier,
    STATE(58),
    1,
    sym_comment,
    STATE(188),
    1,
    sym_type_spec,
    STATE(219),
    1,
    sym_scoped_name,
    STATE(299),
    1,
    sym_base_type_spec,
    ACTIONS(191),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(193),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(211),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(217),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(221),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(225),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(231),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(345),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(251),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(257),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    ACTIONS(201),
    4,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    sym_value_base_type,
    STATE(289),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(297),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [3979] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(59),
    1,
    sym_comment,
    ACTIONS(796),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(794),
    45,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    anon_sym_exception,
    anon_sym_abstract,
    anon_sym_void,
    anon_sym_readonly,
    anon_sym_attribute,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_valuetype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_custom,
    anon_sym_typedef,
    anon_sym_ATignore_literal_names,
    anon_sym_typeid,
    anon_sym_import,
    sym_object_type,
    anon_sym_oneway,
    sym_value_base_type,
    anon_sym_native,
    sym_identifier,
    [4045] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(60),
    1,
    sym_comment,
    ACTIONS(826),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(824),
    45,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    anon_sym_exception,
    anon_sym_abstract,
    anon_sym_void,
    anon_sym_readonly,
    anon_sym_attribute,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_valuetype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_custom,
    anon_sym_typedef,
    anon_sym_ATignore_literal_names,
    anon_sym_typeid,
    anon_sym_import,
    sym_object_type,
    anon_sym_oneway,
    sym_value_base_type,
    anon_sym_native,
    sym_identifier,
    [4111] = 29,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(195),
    1,
    anon_sym_longlong,
    ACTIONS(197),
    1,
    anon_sym_int64,
    ACTIONS(199),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(205),
    1,
    sym_signed_tiny_int,
    ACTIONS(207),
    1,
    anon_sym_unsignedshort,
    ACTIONS(209),
    1,
    anon_sym_uint16,
    ACTIONS(213),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(215),
    1,
    anon_sym_uint64,
    ACTIONS(219),
    1,
    anon_sym_longdouble,
    ACTIONS(223),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(229),
    1,
    anon_sym_sequence,
    ACTIONS(277),
    1,
    sym_identifier,
    ACTIONS(614),
    1,
    anon_sym_fixed,
    STATE(61),
    1,
    sym_comment,
    STATE(401),
    1,
    sym_scoped_name,
    STATE(645),
    1,
    sym_const_type,
    ACTIONS(191),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(193),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(211),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(217),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(221),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(225),
    2,
    anon_sym_string,
    anon_sym_wstring,
    ACTIONS(612),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(231),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(251),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(257),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(582),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [4216] = 29,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(195),
    1,
    anon_sym_longlong,
    ACTIONS(197),
    1,
    anon_sym_int64,
    ACTIONS(199),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(205),
    1,
    sym_signed_tiny_int,
    ACTIONS(207),
    1,
    anon_sym_unsignedshort,
    ACTIONS(209),
    1,
    anon_sym_uint16,
    ACTIONS(213),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(215),
    1,
    anon_sym_uint64,
    ACTIONS(219),
    1,
    anon_sym_longdouble,
    ACTIONS(223),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(229),
    1,
    anon_sym_sequence,
    ACTIONS(277),
    1,
    sym_identifier,
    ACTIONS(614),
    1,
    anon_sym_fixed,
    STATE(62),
    1,
    sym_comment,
    STATE(401),
    1,
    sym_scoped_name,
    STATE(568),
    1,
    sym_const_type,
    ACTIONS(191),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(193),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(211),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(217),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(221),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(225),
    2,
    anon_sym_string,
    anon_sym_wstring,
    ACTIONS(612),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(231),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(251),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(257),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(582),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [4321] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(63),
    1,
    sym_comment,
    ACTIONS(830),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(828),
    34,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_default,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_ATignore_literal_names,
    anon_sym_case,
    sym_object_type,
    sym_value_base_type,
    sym_identifier,
    [4376] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(64),
    1,
    sym_comment,
    ACTIONS(834),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(832),
    34,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_default,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_ATignore_literal_names,
    anon_sym_case,
    sym_object_type,
    sym_value_base_type,
    sym_identifier,
    [4431] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(840),
    1,
    anon_sym_AT,
    STATE(81),
    1,
    sym_annotation_appl,
    STATE(65),
    2,
    sym_comment,
    aux_sym_interface_def_repeat1,
    ACTIONS(838),
    5,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    ACTIONS(836),
    26,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    sym_object_type,
    sym_value_base_type,
    sym_identifier,
    [4483] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(66),
    1,
    sym_comment,
    ACTIONS(845),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(843),
    26,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_typedef,
    sym_identifier,
    [4530] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(67),
    1,
    sym_comment,
    ACTIONS(849),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_LPAREN,
    anon_sym_AT,
    ACTIONS(847),
    26,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    sym_object_type,
    sym_value_base_type,
    sym_identifier,
    [4577] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(68),
    1,
    sym_comment,
    ACTIONS(853),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_LPAREN,
    anon_sym_AT,
    ACTIONS(851),
    26,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    sym_object_type,
    sym_value_base_type,
    sym_identifier,
    [4624] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(859),
    1,
    anon_sym_LPAREN,
    STATE(69),
    1,
    sym_comment,
    ACTIONS(857),
    6,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_AT,
    ACTIONS(855),
    26,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    sym_object_type,
    sym_value_base_type,
    sym_identifier,
    [4673] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(70),
    1,
    sym_comment,
    ACTIONS(863),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(861),
    26,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    sym_object_type,
    sym_value_base_type,
    sym_identifier,
    [4720] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(71),
    1,
    sym_comment,
    ACTIONS(867),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(865),
    26,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    sym_object_type,
    sym_value_base_type,
    sym_identifier,
    [4767] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(72),
    1,
    sym_comment,
    ACTIONS(871),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_LPAREN,
    anon_sym_AT,
    ACTIONS(869),
    26,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    sym_object_type,
    sym_value_base_type,
    sym_identifier,
    [4814] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(73),
    1,
    sym_comment,
    ACTIONS(875),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(873),
    26,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_typedef,
    sym_identifier,
    [4861] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(74),
    1,
    sym_comment,
    ACTIONS(879),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(877),
    26,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    sym_object_type,
    sym_value_base_type,
    sym_identifier,
    [4908] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(75),
    1,
    sym_comment,
    ACTIONS(883),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(881),
    26,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_typedef,
    sym_identifier,
    [4955] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(76),
    1,
    sym_comment,
    ACTIONS(887),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(885),
    26,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_typedef,
    sym_identifier,
    [5002] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(77),
    1,
    sym_comment,
    ACTIONS(891),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(889),
    26,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    sym_object_type,
    sym_value_base_type,
    sym_identifier,
    [5049] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(78),
    1,
    sym_comment,
    ACTIONS(895),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(893),
    26,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    sym_object_type,
    sym_value_base_type,
    sym_identifier,
    [5096] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(79),
    1,
    sym_comment,
    ACTIONS(899),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(897),
    26,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_typedef,
    sym_identifier,
    [5143] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(80),
    1,
    sym_comment,
    ACTIONS(903),
    6,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_AT,
    ACTIONS(901),
    26,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    sym_object_type,
    sym_value_base_type,
    sym_identifier,
    [5189] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(81),
    1,
    sym_comment,
    ACTIONS(907),
    6,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_AT,
    ACTIONS(905),
    26,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    sym_object_type,
    sym_value_base_type,
    sym_identifier,
    [5235] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(82),
    1,
    sym_comment,
    ACTIONS(911),
    5,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    ACTIONS(909),
    26,
    anon_sym_short,
    anon_sym_int16,
    anon_sym_long,
    anon_sym_int32,
    anon_sym_int64,
    sym_unsigned_tiny_int,
    sym_boolean_type,
    anon_sym_fixed,
    sym_octet_type,
    sym_signed_tiny_int,
    anon_sym_uint16,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    anon_sym_uint64,
    anon_sym_float,
    anon_sym_double,
    anon_sym_char,
    anon_sym_wchar,
    anon_sym_string,
    anon_sym_wstring,
    anon_sym_any,
    anon_sym_sequence,
    anon_sym_map,
    sym_object_type,
    sym_value_base_type,
    sym_identifier,
    [5280] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(195),
    1,
    anon_sym_longlong,
    ACTIONS(197),
    1,
    anon_sym_int64,
    ACTIONS(199),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(205),
    1,
    sym_signed_tiny_int,
    ACTIONS(207),
    1,
    anon_sym_unsignedshort,
    ACTIONS(209),
    1,
    anon_sym_uint16,
    ACTIONS(213),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(215),
    1,
    anon_sym_uint64,
    ACTIONS(421),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(439),
    1,
    sym_identifier,
    ACTIONS(913),
    1,
    sym_boolean_type,
    STATE(83),
    1,
    sym_comment,
    STATE(376),
    1,
    sym_scoped_name,
    STATE(617),
    1,
    sym_switch_type_spec,
    ACTIONS(191),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(193),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(211),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(221),
    2,
    anon_sym_char,
    anon_sym_wchar,
    STATE(231),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(621),
    2,
    sym_integer_type,
    sym_char_type,
    STATE(251),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(257),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    [5363] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(84),
    1,
    sym_comment,
    ACTIONS(869),
    4,
    anon_sym_LT,
    anon_sym_GT,
    anon_sym_SLASH,
    anon_sym_COLON,
    ACTIONS(871),
    25,
    anon_sym_COLON_COLON,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_STAR,
    anon_sym_PERCENT,
    anon_sym_LPAREN,
    anon_sym_RPAREN,
    anon_sym_L,
    anon_sym_DQUOTE,
    anon_sym_LBRACE,
    anon_sym_local,
    anon_sym_abstract,
    anon_sym_interface,
    anon_sym_SEMI,
    anon_sym_bitmask,
    anon_sym_AT,
    anon_sym_struct,
    anon_sym_supports,
    anon_sym_RBRACK,
    [5406] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(85),
    1,
    sym_comment,
    ACTIONS(847),
    4,
    anon_sym_LT,
    anon_sym_GT,
    anon_sym_SLASH,
    anon_sym_COLON,
    ACTIONS(849),
    25,
    anon_sym_COLON_COLON,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_STAR,
    anon_sym_PERCENT,
    anon_sym_LPAREN,
    anon_sym_RPAREN,
    anon_sym_L,
    anon_sym_DQUOTE,
    anon_sym_LBRACE,
    anon_sym_local,
    anon_sym_abstract,
    anon_sym_interface,
    anon_sym_SEMI,
    anon_sym_bitmask,
    anon_sym_AT,
    anon_sym_struct,
    anon_sym_supports,
    anon_sym_RBRACK,
    [5449] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(86),
    1,
    sym_comment,
    ACTIONS(851),
    4,
    anon_sym_LT,
    anon_sym_GT,
    anon_sym_SLASH,
    anon_sym_COLON,
    ACTIONS(853),
    25,
    anon_sym_COLON_COLON,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_STAR,
    anon_sym_PERCENT,
    anon_sym_LPAREN,
    anon_sym_RPAREN,
    anon_sym_L,
    anon_sym_DQUOTE,
    anon_sym_LBRACE,
    anon_sym_local,
    anon_sym_abstract,
    anon_sym_interface,
    anon_sym_SEMI,
    anon_sym_bitmask,
    anon_sym_AT,
    anon_sym_struct,
    anon_sym_supports,
    anon_sym_RBRACK,
    [5492] = 27,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(421),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(425),
    1,
    anon_sym_LPAREN,
    ACTIONS(427),
    1,
    anon_sym_TILDE,
    ACTIONS(429),
    1,
    anon_sym_L,
    ACTIONS(431),
    1,
    anon_sym_DQUOTE,
    ACTIONS(433),
    1,
    anon_sym_SQUOTE,
    ACTIONS(437),
    1,
    sym_number_literal,
    ACTIONS(915),
    1,
    sym_identifier,
    STATE(87),
    1,
    sym_comment,
    STATE(123),
    1,
    sym_scoped_name,
    STATE(125),
    1,
    sym_mult_expr,
    STATE(133),
    1,
    sym_literal,
    STATE(137),
    1,
    sym_unary_expr,
    STATE(139),
    1,
    sym_unary_operator,
    STATE(140),
    1,
    sym_add_expr,
    STATE(148),
    1,
    sym_shift_expr,
    STATE(150),
    1,
    sym_and_expr,
    STATE(157),
    1,
    sym_xor_expr,
    STATE(161),
    1,
    sym_or_expr,
    STATE(281),
    1,
    sym_annotation_appl_param,
    STATE(476),
    1,
    sym_const_expr,
    STATE(644),
    1,
    sym_annotation_appl_params,
    ACTIONS(423),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(435),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(130),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5578] = 27,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(421),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(425),
    1,
    anon_sym_LPAREN,
    ACTIONS(427),
    1,
    anon_sym_TILDE,
    ACTIONS(429),
    1,
    anon_sym_L,
    ACTIONS(431),
    1,
    anon_sym_DQUOTE,
    ACTIONS(433),
    1,
    anon_sym_SQUOTE,
    ACTIONS(437),
    1,
    sym_number_literal,
    ACTIONS(915),
    1,
    sym_identifier,
    STATE(88),
    1,
    sym_comment,
    STATE(123),
    1,
    sym_scoped_name,
    STATE(125),
    1,
    sym_mult_expr,
    STATE(133),
    1,
    sym_literal,
    STATE(137),
    1,
    sym_unary_expr,
    STATE(139),
    1,
    sym_unary_operator,
    STATE(140),
    1,
    sym_add_expr,
    STATE(148),
    1,
    sym_shift_expr,
    STATE(150),
    1,
    sym_and_expr,
    STATE(157),
    1,
    sym_xor_expr,
    STATE(161),
    1,
    sym_or_expr,
    STATE(281),
    1,
    sym_annotation_appl_param,
    STATE(476),
    1,
    sym_const_expr,
    STATE(641),
    1,
    sym_annotation_appl_params,
    ACTIONS(423),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(435),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(130),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5664] = 27,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(421),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(425),
    1,
    anon_sym_LPAREN,
    ACTIONS(427),
    1,
    anon_sym_TILDE,
    ACTIONS(429),
    1,
    anon_sym_L,
    ACTIONS(431),
    1,
    anon_sym_DQUOTE,
    ACTIONS(433),
    1,
    anon_sym_SQUOTE,
    ACTIONS(437),
    1,
    sym_number_literal,
    ACTIONS(915),
    1,
    sym_identifier,
    STATE(89),
    1,
    sym_comment,
    STATE(123),
    1,
    sym_scoped_name,
    STATE(125),
    1,
    sym_mult_expr,
    STATE(133),
    1,
    sym_literal,
    STATE(137),
    1,
    sym_unary_expr,
    STATE(139),
    1,
    sym_unary_operator,
    STATE(140),
    1,
    sym_add_expr,
    STATE(148),
    1,
    sym_shift_expr,
    STATE(150),
    1,
    sym_and_expr,
    STATE(157),
    1,
    sym_xor_expr,
    STATE(161),
    1,
    sym_or_expr,
    STATE(281),
    1,
    sym_annotation_appl_param,
    STATE(475),
    1,
    sym_annotation_appl_params,
    STATE(476),
    1,
    sym_const_expr,
    ACTIONS(423),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(435),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(130),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5750] = 27,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(421),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(425),
    1,
    anon_sym_LPAREN,
    ACTIONS(427),
    1,
    anon_sym_TILDE,
    ACTIONS(429),
    1,
    anon_sym_L,
    ACTIONS(431),
    1,
    anon_sym_DQUOTE,
    ACTIONS(433),
    1,
    anon_sym_SQUOTE,
    ACTIONS(437),
    1,
    sym_number_literal,
    ACTIONS(915),
    1,
    sym_identifier,
    STATE(90),
    1,
    sym_comment,
    STATE(123),
    1,
    sym_scoped_name,
    STATE(125),
    1,
    sym_mult_expr,
    STATE(133),
    1,
    sym_literal,
    STATE(137),
    1,
    sym_unary_expr,
    STATE(139),
    1,
    sym_unary_operator,
    STATE(140),
    1,
    sym_add_expr,
    STATE(148),
    1,
    sym_shift_expr,
    STATE(150),
    1,
    sym_and_expr,
    STATE(157),
    1,
    sym_xor_expr,
    STATE(161),
    1,
    sym_or_expr,
    STATE(281),
    1,
    sym_annotation_appl_param,
    STATE(476),
    1,
    sym_const_expr,
    STATE(637),
    1,
    sym_annotation_appl_params,
    ACTIONS(423),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(435),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(130),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5836] = 26,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(421),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(425),
    1,
    anon_sym_LPAREN,
    ACTIONS(427),
    1,
    anon_sym_TILDE,
    ACTIONS(429),
    1,
    anon_sym_L,
    ACTIONS(431),
    1,
    anon_sym_DQUOTE,
    ACTIONS(433),
    1,
    anon_sym_SQUOTE,
    ACTIONS(437),
    1,
    sym_number_literal,
    ACTIONS(439),
    1,
    sym_identifier,
    STATE(91),
    1,
    sym_comment,
    STATE(123),
    1,
    sym_scoped_name,
    STATE(125),
    1,
    sym_mult_expr,
    STATE(133),
    1,
    sym_literal,
    STATE(137),
    1,
    sym_unary_expr,
    STATE(139),
    1,
    sym_unary_operator,
    STATE(140),
    1,
    sym_add_expr,
    STATE(148),
    1,
    sym_shift_expr,
    STATE(150),
    1,
    sym_and_expr,
    STATE(157),
    1,
    sym_xor_expr,
    STATE(161),
    1,
    sym_or_expr,
    STATE(259),
    1,
    sym_const_expr,
    STATE(552),
    1,
    sym_positive_int_const,
    ACTIONS(423),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(435),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(130),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5919] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(919),
    1,
    sym_preproc_directive,
    STATE(112),
    1,
    sym_preproc_call,
    STATE(92),
    2,
    sym_comment,
    aux_sym_specification_repeat1,
    ACTIONS(922),
    3,
    anon_sym_AT,
    anon_sym_ATignore_literal_names,
    anon_sym_POUNDdefine,
    ACTIONS(917),
    21,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_local,
    anon_sym_abstract,
    anon_sym_interface,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_ATannotation,
    anon_sym_module,
    anon_sym_valuetype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_custom,
    anon_sym_typedef,
    anon_sym_typeid,
    anon_sym_typeprefix,
    anon_sym_import,
    anon_sym_component,
    anon_sym_native,
    [5964] = 26,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(421),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(425),
    1,
    anon_sym_LPAREN,
    ACTIONS(427),
    1,
    anon_sym_TILDE,
    ACTIONS(429),
    1,
    anon_sym_L,
    ACTIONS(431),
    1,
    anon_sym_DQUOTE,
    ACTIONS(433),
    1,
    anon_sym_SQUOTE,
    ACTIONS(437),
    1,
    sym_number_literal,
    ACTIONS(439),
    1,
    sym_identifier,
    STATE(93),
    1,
    sym_comment,
    STATE(123),
    1,
    sym_scoped_name,
    STATE(125),
    1,
    sym_mult_expr,
    STATE(133),
    1,
    sym_literal,
    STATE(137),
    1,
    sym_unary_expr,
    STATE(139),
    1,
    sym_unary_operator,
    STATE(140),
    1,
    sym_add_expr,
    STATE(148),
    1,
    sym_shift_expr,
    STATE(150),
    1,
    sym_and_expr,
    STATE(157),
    1,
    sym_xor_expr,
    STATE(161),
    1,
    sym_or_expr,
    STATE(259),
    1,
    sym_const_expr,
    STATE(507),
    1,
    sym_positive_int_const,
    ACTIONS(423),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(435),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(130),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6047] = 26,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(421),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(425),
    1,
    anon_sym_LPAREN,
    ACTIONS(427),
    1,
    anon_sym_TILDE,
    ACTIONS(429),
    1,
    anon_sym_L,
    ACTIONS(431),
    1,
    anon_sym_DQUOTE,
    ACTIONS(433),
    1,
    anon_sym_SQUOTE,
    ACTIONS(437),
    1,
    sym_number_literal,
    ACTIONS(439),
    1,
    sym_identifier,
    STATE(94),
    1,
    sym_comment,
    STATE(123),
    1,
    sym_scoped_name,
    STATE(125),
    1,
    sym_mult_expr,
    STATE(133),
    1,
    sym_literal,
    STATE(137),
    1,
    sym_unary_expr,
    STATE(139),
    1,
    sym_unary_operator,
    STATE(140),
    1,
    sym_add_expr,
    STATE(148),
    1,
    sym_shift_expr,
    STATE(150),
    1,
    sym_and_expr,
    STATE(157),
    1,
    sym_xor_expr,
    STATE(161),
    1,
    sym_or_expr,
    STATE(259),
    1,
    sym_const_expr,
    STATE(527),
    1,
    sym_positive_int_const,
    ACTIONS(423),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(435),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(130),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6130] = 26,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(421),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(425),
    1,
    anon_sym_LPAREN,
    ACTIONS(427),
    1,
    anon_sym_TILDE,
    ACTIONS(429),
    1,
    anon_sym_L,
    ACTIONS(431),
    1,
    anon_sym_DQUOTE,
    ACTIONS(433),
    1,
    anon_sym_SQUOTE,
    ACTIONS(437),
    1,
    sym_number_literal,
    ACTIONS(439),
    1,
    sym_identifier,
    STATE(95),
    1,
    sym_comment,
    STATE(123),
    1,
    sym_scoped_name,
    STATE(125),
    1,
    sym_mult_expr,
    STATE(133),
    1,
    sym_literal,
    STATE(137),
    1,
    sym_unary_expr,
    STATE(139),
    1,
    sym_unary_operator,
    STATE(140),
    1,
    sym_add_expr,
    STATE(148),
    1,
    sym_shift_expr,
    STATE(150),
    1,
    sym_and_expr,
    STATE(157),
    1,
    sym_xor_expr,
    STATE(161),
    1,
    sym_or_expr,
    STATE(259),
    1,
    sym_const_expr,
    STATE(610),
    1,
    sym_positive_int_const,
    ACTIONS(423),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(435),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(130),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6213] = 26,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(421),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(425),
    1,
    anon_sym_LPAREN,
    ACTIONS(427),
    1,
    anon_sym_TILDE,
    ACTIONS(429),
    1,
    anon_sym_L,
    ACTIONS(431),
    1,
    anon_sym_DQUOTE,
    ACTIONS(433),
    1,
    anon_sym_SQUOTE,
    ACTIONS(437),
    1,
    sym_number_literal,
    ACTIONS(439),
    1,
    sym_identifier,
    STATE(96),
    1,
    sym_comment,
    STATE(123),
    1,
    sym_scoped_name,
    STATE(125),
    1,
    sym_mult_expr,
    STATE(133),
    1,
    sym_literal,
    STATE(137),
    1,
    sym_unary_expr,
    STATE(139),
    1,
    sym_unary_operator,
    STATE(140),
    1,
    sym_add_expr,
    STATE(148),
    1,
    sym_shift_expr,
    STATE(150),
    1,
    sym_and_expr,
    STATE(157),
    1,
    sym_xor_expr,
    STATE(161),
    1,
    sym_or_expr,
    STATE(259),
    1,
    sym_const_expr,
    STATE(606),
    1,
    sym_positive_int_const,
    ACTIONS(423),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(435),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(130),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6296] = 26,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(421),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(425),
    1,
    anon_sym_LPAREN,
    ACTIONS(427),
    1,
    anon_sym_TILDE,
    ACTIONS(429),
    1,
    anon_sym_L,
    ACTIONS(431),
    1,
    anon_sym_DQUOTE,
    ACTIONS(433),
    1,
    anon_sym_SQUOTE,
    ACTIONS(437),
    1,
    sym_number_literal,
    ACTIONS(439),
    1,
    sym_identifier,
    STATE(97),
    1,
    sym_comment,
    STATE(123),
    1,
    sym_scoped_name,
    STATE(125),
    1,
    sym_mult_expr,
    STATE(133),
    1,
    sym_literal,
    STATE(137),
    1,
    sym_unary_expr,
    STATE(139),
    1,
    sym_unary_operator,
    STATE(140),
    1,
    sym_add_expr,
    STATE(148),
    1,
    sym_shift_expr,
    STATE(150),
    1,
    sym_and_expr,
    STATE(157),
    1,
    sym_xor_expr,
    STATE(161),
    1,
    sym_or_expr,
    STATE(259),
    1,
    sym_const_expr,
    STATE(520),
    1,
    sym_positive_int_const,
    ACTIONS(423),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(435),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(130),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6379] = 26,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(421),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(425),
    1,
    anon_sym_LPAREN,
    ACTIONS(427),
    1,
    anon_sym_TILDE,
    ACTIONS(429),
    1,
    anon_sym_L,
    ACTIONS(431),
    1,
    anon_sym_DQUOTE,
    ACTIONS(433),
    1,
    anon_sym_SQUOTE,
    ACTIONS(437),
    1,
    sym_number_literal,
    ACTIONS(439),
    1,
    sym_identifier,
    STATE(98),
    1,
    sym_comment,
    STATE(123),
    1,
    sym_scoped_name,
    STATE(125),
    1,
    sym_mult_expr,
    STATE(133),
    1,
    sym_literal,
    STATE(137),
    1,
    sym_unary_expr,
    STATE(139),
    1,
    sym_unary_operator,
    STATE(140),
    1,
    sym_add_expr,
    STATE(148),
    1,
    sym_shift_expr,
    STATE(150),
    1,
    sym_and_expr,
    STATE(157),
    1,
    sym_xor_expr,
    STATE(161),
    1,
    sym_or_expr,
    STATE(259),
    1,
    sym_const_expr,
    STATE(403),
    1,
    sym_positive_int_const,
    ACTIONS(423),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(435),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(130),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6462] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(99),
    1,
    sym_comment,
    ACTIONS(926),
    2,
    anon_sym_AT,
    anon_sym_ATignore_literal_names,
    ACTIONS(924),
    24,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_RBRACE,
    anon_sym_local,
    anon_sym_abstract,
    anon_sym_interface,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_ATannotation,
    anon_sym_module,
    anon_sym_valuetype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_alias,
    anon_sym_custom,
    anon_sym_typedef,
    anon_sym_typeid,
    anon_sym_typeprefix,
    anon_sym_import,
    anon_sym_component,
    anon_sym_native,
    anon_sym_POUNDdefine,
    [6502] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(421),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(425),
    1,
    anon_sym_LPAREN,
    ACTIONS(427),
    1,
    anon_sym_TILDE,
    ACTIONS(429),
    1,
    anon_sym_L,
    ACTIONS(431),
    1,
    anon_sym_DQUOTE,
    ACTIONS(433),
    1,
    anon_sym_SQUOTE,
    ACTIONS(437),
    1,
    sym_number_literal,
    ACTIONS(439),
    1,
    sym_identifier,
    STATE(100),
    1,
    sym_comment,
    STATE(123),
    1,
    sym_scoped_name,
    STATE(125),
    1,
    sym_mult_expr,
    STATE(133),
    1,
    sym_literal,
    STATE(137),
    1,
    sym_unary_expr,
    STATE(139),
    1,
    sym_unary_operator,
    STATE(140),
    1,
    sym_add_expr,
    STATE(148),
    1,
    sym_shift_expr,
    STATE(150),
    1,
    sym_and_expr,
    STATE(157),
    1,
    sym_xor_expr,
    STATE(161),
    1,
    sym_or_expr,
    STATE(418),
    1,
    sym_const_expr,
    ACTIONS(423),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(435),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(130),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6582] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(421),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(425),
    1,
    anon_sym_LPAREN,
    ACTIONS(427),
    1,
    anon_sym_TILDE,
    ACTIONS(429),
    1,
    anon_sym_L,
    ACTIONS(431),
    1,
    anon_sym_DQUOTE,
    ACTIONS(433),
    1,
    anon_sym_SQUOTE,
    ACTIONS(437),
    1,
    sym_number_literal,
    ACTIONS(439),
    1,
    sym_identifier,
    STATE(101),
    1,
    sym_comment,
    STATE(123),
    1,
    sym_scoped_name,
    STATE(125),
    1,
    sym_mult_expr,
    STATE(133),
    1,
    sym_literal,
    STATE(137),
    1,
    sym_unary_expr,
    STATE(139),
    1,
    sym_unary_operator,
    STATE(140),
    1,
    sym_add_expr,
    STATE(148),
    1,
    sym_shift_expr,
    STATE(150),
    1,
    sym_and_expr,
    STATE(157),
    1,
    sym_xor_expr,
    STATE(161),
    1,
    sym_or_expr,
    STATE(490),
    1,
    sym_const_expr,
    ACTIONS(423),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(435),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(130),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6662] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(421),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(425),
    1,
    anon_sym_LPAREN,
    ACTIONS(427),
    1,
    anon_sym_TILDE,
    ACTIONS(429),
    1,
    anon_sym_L,
    ACTIONS(431),
    1,
    anon_sym_DQUOTE,
    ACTIONS(433),
    1,
    anon_sym_SQUOTE,
    ACTIONS(437),
    1,
    sym_number_literal,
    ACTIONS(439),
    1,
    sym_identifier,
    STATE(102),
    1,
    sym_comment,
    STATE(123),
    1,
    sym_scoped_name,
    STATE(125),
    1,
    sym_mult_expr,
    STATE(133),
    1,
    sym_literal,
    STATE(137),
    1,
    sym_unary_expr,
    STATE(139),
    1,
    sym_unary_operator,
    STATE(140),
    1,
    sym_add_expr,
    STATE(148),
    1,
    sym_shift_expr,
    STATE(150),
    1,
    sym_and_expr,
    STATE(157),
    1,
    sym_xor_expr,
    STATE(161),
    1,
    sym_or_expr,
    STATE(578),
    1,
    sym_const_expr,
    ACTIONS(423),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(435),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(130),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6742] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(103),
    1,
    sym_comment,
    ACTIONS(930),
    2,
    anon_sym_AT,
    anon_sym_ATignore_literal_names,
    ACTIONS(928),
    24,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_RBRACE,
    anon_sym_local,
    anon_sym_abstract,
    anon_sym_interface,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_ATannotation,
    anon_sym_module,
    anon_sym_valuetype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_alias,
    anon_sym_custom,
    anon_sym_typedef,
    anon_sym_typeid,
    anon_sym_typeprefix,
    anon_sym_import,
    anon_sym_component,
    anon_sym_native,
    anon_sym_POUNDdefine,
    [6782] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(104),
    1,
    sym_comment,
    ACTIONS(934),
    2,
    anon_sym_AT,
    anon_sym_ATignore_literal_names,
    ACTIONS(932),
    24,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_RBRACE,
    anon_sym_local,
    anon_sym_abstract,
    anon_sym_interface,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_ATannotation,
    anon_sym_module,
    anon_sym_valuetype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_alias,
    anon_sym_custom,
    anon_sym_typedef,
    anon_sym_typeid,
    anon_sym_typeprefix,
    anon_sym_import,
    anon_sym_component,
    anon_sym_native,
    anon_sym_POUNDdefine,
    [6822] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(421),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(425),
    1,
    anon_sym_LPAREN,
    ACTIONS(427),
    1,
    anon_sym_TILDE,
    ACTIONS(429),
    1,
    anon_sym_L,
    ACTIONS(431),
    1,
    anon_sym_DQUOTE,
    ACTIONS(433),
    1,
    anon_sym_SQUOTE,
    ACTIONS(437),
    1,
    sym_number_literal,
    ACTIONS(439),
    1,
    sym_identifier,
    STATE(105),
    1,
    sym_comment,
    STATE(123),
    1,
    sym_scoped_name,
    STATE(125),
    1,
    sym_mult_expr,
    STATE(133),
    1,
    sym_literal,
    STATE(137),
    1,
    sym_unary_expr,
    STATE(139),
    1,
    sym_unary_operator,
    STATE(140),
    1,
    sym_add_expr,
    STATE(148),
    1,
    sym_shift_expr,
    STATE(150),
    1,
    sym_and_expr,
    STATE(157),
    1,
    sym_xor_expr,
    STATE(161),
    1,
    sym_or_expr,
    STATE(484),
    1,
    sym_const_expr,
    ACTIONS(423),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(435),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(130),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6902] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(421),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(425),
    1,
    anon_sym_LPAREN,
    ACTIONS(427),
    1,
    anon_sym_TILDE,
    ACTIONS(429),
    1,
    anon_sym_L,
    ACTIONS(431),
    1,
    anon_sym_DQUOTE,
    ACTIONS(433),
    1,
    anon_sym_SQUOTE,
    ACTIONS(437),
    1,
    sym_number_literal,
    ACTIONS(439),
    1,
    sym_identifier,
    STATE(106),
    1,
    sym_comment,
    STATE(123),
    1,
    sym_scoped_name,
    STATE(125),
    1,
    sym_mult_expr,
    STATE(133),
    1,
    sym_literal,
    STATE(137),
    1,
    sym_unary_expr,
    STATE(139),
    1,
    sym_unary_operator,
    STATE(140),
    1,
    sym_add_expr,
    STATE(148),
    1,
    sym_shift_expr,
    STATE(150),
    1,
    sym_and_expr,
    STATE(157),
    1,
    sym_xor_expr,
    STATE(161),
    1,
    sym_or_expr,
    STATE(532),
    1,
    sym_const_expr,
    ACTIONS(423),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(435),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(130),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6982] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(421),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(425),
    1,
    anon_sym_LPAREN,
    ACTIONS(427),
    1,
    anon_sym_TILDE,
    ACTIONS(429),
    1,
    anon_sym_L,
    ACTIONS(431),
    1,
    anon_sym_DQUOTE,
    ACTIONS(433),
    1,
    anon_sym_SQUOTE,
    ACTIONS(437),
    1,
    sym_number_literal,
    ACTIONS(439),
    1,
    sym_identifier,
    STATE(107),
    1,
    sym_comment,
    STATE(123),
    1,
    sym_scoped_name,
    STATE(125),
    1,
    sym_mult_expr,
    STATE(133),
    1,
    sym_literal,
    STATE(137),
    1,
    sym_unary_expr,
    STATE(139),
    1,
    sym_unary_operator,
    STATE(140),
    1,
    sym_add_expr,
    STATE(148),
    1,
    sym_shift_expr,
    STATE(150),
    1,
    sym_and_expr,
    STATE(157),
    1,
    sym_xor_expr,
    STATE(161),
    1,
    sym_or_expr,
    STATE(607),
    1,
    sym_const_expr,
    ACTIONS(423),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(435),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(130),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7062] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(421),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(425),
    1,
    anon_sym_LPAREN,
    ACTIONS(427),
    1,
    anon_sym_TILDE,
    ACTIONS(429),
    1,
    anon_sym_L,
    ACTIONS(431),
    1,
    anon_sym_DQUOTE,
    ACTIONS(433),
    1,
    anon_sym_SQUOTE,
    ACTIONS(437),
    1,
    sym_number_literal,
    ACTIONS(439),
    1,
    sym_identifier,
    STATE(108),
    1,
    sym_comment,
    STATE(123),
    1,
    sym_scoped_name,
    STATE(125),
    1,
    sym_mult_expr,
    STATE(133),
    1,
    sym_literal,
    STATE(137),
    1,
    sym_unary_expr,
    STATE(139),
    1,
    sym_unary_operator,
    STATE(140),
    1,
    sym_add_expr,
    STATE(148),
    1,
    sym_shift_expr,
    STATE(150),
    1,
    sym_and_expr,
    STATE(157),
    1,
    sym_xor_expr,
    STATE(161),
    1,
    sym_or_expr,
    STATE(506),
    1,
    sym_const_expr,
    ACTIONS(423),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(435),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(130),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7142] = 19,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(193),
    1,
    anon_sym_long,
    ACTIONS(211),
    1,
    anon_sym_unsignedlong,
    ACTIONS(938),
    1,
    anon_sym_int32,
    ACTIONS(940),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(944),
    1,
    sym_signed_tiny_int,
    ACTIONS(946),
    1,
    anon_sym_uint32,
    STATE(109),
    1,
    sym_comment,
    STATE(539),
    1,
    sym_integer_type,
    STATE(540),
    1,
    sym_destination_type,
    ACTIONS(195),
    2,
    anon_sym_longlong,
    anon_sym_int64,
    ACTIONS(207),
    2,
    anon_sym_unsignedshort,
    anon_sym_uint16,
    ACTIONS(213),
    2,
    anon_sym_unsignedlonglong,
    anon_sym_uint64,
    ACTIONS(936),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(942),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(231),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(251),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(257),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    [7210] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(110),
    1,
    sym_comment,
    ACTIONS(950),
    2,
    anon_sym_AT,
    anon_sym_ATignore_literal_names,
    ACTIONS(948),
    23,
    anon_sym_exception,
    anon_sym_RBRACE,
    anon_sym_local,
    anon_sym_abstract,
    anon_sym_interface,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_ATannotation,
    anon_sym_module,
    anon_sym_valuetype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_alias,
    anon_sym_custom,
    anon_sym_typedef,
    anon_sym_typeid,
    anon_sym_typeprefix,
    anon_sym_import,
    anon_sym_component,
    anon_sym_native,
    anon_sym_POUNDdefine,
    [7249] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(111),
    1,
    sym_comment,
    ACTIONS(954),
    4,
    sym_preproc_directive,
    anon_sym_AT,
    anon_sym_ATignore_literal_names,
    anon_sym_POUNDdefine,
    ACTIONS(952),
    21,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_local,
    anon_sym_abstract,
    anon_sym_interface,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_ATannotation,
    anon_sym_module,
    anon_sym_valuetype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_custom,
    anon_sym_typedef,
    anon_sym_typeid,
    anon_sym_typeprefix,
    anon_sym_import,
    anon_sym_component,
    anon_sym_native,
    [7288] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(112),
    1,
    sym_comment,
    ACTIONS(958),
    4,
    sym_preproc_directive,
    anon_sym_AT,
    anon_sym_ATignore_literal_names,
    anon_sym_POUNDdefine,
    ACTIONS(956),
    21,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_local,
    anon_sym_abstract,
    anon_sym_interface,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_ATannotation,
    anon_sym_module,
    anon_sym_valuetype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_custom,
    anon_sym_typedef,
    anon_sym_typeid,
    anon_sym_typeprefix,
    anon_sym_import,
    anon_sym_component,
    anon_sym_native,
    [7327] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(113),
    1,
    sym_comment,
    ACTIONS(962),
    4,
    sym_preproc_directive,
    anon_sym_AT,
    anon_sym_ATignore_literal_names,
    anon_sym_POUNDdefine,
    ACTIONS(960),
    21,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_local,
    anon_sym_abstract,
    anon_sym_interface,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_ATannotation,
    anon_sym_module,
    anon_sym_valuetype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_custom,
    anon_sym_typedef,
    anon_sym_typeid,
    anon_sym_typeprefix,
    anon_sym_import,
    anon_sym_component,
    anon_sym_native,
    [7366] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(114),
    1,
    sym_comment,
    ACTIONS(966),
    2,
    anon_sym_AT,
    anon_sym_ATignore_literal_names,
    ACTIONS(964),
    23,
    anon_sym_exception,
    anon_sym_RBRACE,
    anon_sym_local,
    anon_sym_abstract,
    anon_sym_interface,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_ATannotation,
    anon_sym_module,
    anon_sym_valuetype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_alias,
    anon_sym_custom,
    anon_sym_typedef,
    anon_sym_typeid,
    anon_sym_typeprefix,
    anon_sym_import,
    anon_sym_component,
    anon_sym_native,
    anon_sym_POUNDdefine,
    [7405] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(115),
    1,
    sym_comment,
    ACTIONS(970),
    2,
    anon_sym_AT,
    anon_sym_ATignore_literal_names,
    ACTIONS(968),
    23,
    anon_sym_exception,
    anon_sym_RBRACE,
    anon_sym_local,
    anon_sym_abstract,
    anon_sym_interface,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_ATannotation,
    anon_sym_module,
    anon_sym_valuetype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_alias,
    anon_sym_custom,
    anon_sym_typedef,
    anon_sym_typeid,
    anon_sym_typeprefix,
    anon_sym_import,
    anon_sym_component,
    anon_sym_native,
    anon_sym_POUNDdefine,
    [7444] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(116),
    1,
    sym_comment,
    ACTIONS(974),
    2,
    anon_sym_AT,
    anon_sym_ATignore_literal_names,
    ACTIONS(972),
    23,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_RBRACE,
    anon_sym_local,
    anon_sym_abstract,
    anon_sym_interface,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_ATannotation,
    anon_sym_module,
    anon_sym_valuetype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_custom,
    anon_sym_typedef,
    anon_sym_typeid,
    anon_sym_typeprefix,
    anon_sym_import,
    anon_sym_component,
    anon_sym_native,
    anon_sym_POUNDdefine,
    [7483] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(421),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(425),
    1,
    anon_sym_LPAREN,
    ACTIONS(427),
    1,
    anon_sym_TILDE,
    ACTIONS(429),
    1,
    anon_sym_L,
    ACTIONS(431),
    1,
    anon_sym_DQUOTE,
    ACTIONS(433),
    1,
    anon_sym_SQUOTE,
    ACTIONS(437),
    1,
    sym_number_literal,
    ACTIONS(439),
    1,
    sym_identifier,
    STATE(117),
    1,
    sym_comment,
    STATE(123),
    1,
    sym_scoped_name,
    STATE(125),
    1,
    sym_mult_expr,
    STATE(133),
    1,
    sym_literal,
    STATE(137),
    1,
    sym_unary_expr,
    STATE(139),
    1,
    sym_unary_operator,
    STATE(140),
    1,
    sym_add_expr,
    STATE(148),
    1,
    sym_shift_expr,
    STATE(150),
    1,
    sym_and_expr,
    STATE(156),
    1,
    sym_xor_expr,
    ACTIONS(423),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(435),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(130),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7557] = 22,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(421),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(425),
    1,
    anon_sym_LPAREN,
    ACTIONS(427),
    1,
    anon_sym_TILDE,
    ACTIONS(429),
    1,
    anon_sym_L,
    ACTIONS(431),
    1,
    anon_sym_DQUOTE,
    ACTIONS(433),
    1,
    anon_sym_SQUOTE,
    ACTIONS(437),
    1,
    sym_number_literal,
    ACTIONS(439),
    1,
    sym_identifier,
    STATE(118),
    1,
    sym_comment,
    STATE(123),
    1,
    sym_scoped_name,
    STATE(125),
    1,
    sym_mult_expr,
    STATE(133),
    1,
    sym_literal,
    STATE(137),
    1,
    sym_unary_expr,
    STATE(139),
    1,
    sym_unary_operator,
    STATE(140),
    1,
    sym_add_expr,
    STATE(148),
    1,
    sym_shift_expr,
    STATE(152),
    1,
    sym_and_expr,
    ACTIONS(423),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(435),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(130),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7628] = 21,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(421),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(425),
    1,
    anon_sym_LPAREN,
    ACTIONS(427),
    1,
    anon_sym_TILDE,
    ACTIONS(429),
    1,
    anon_sym_L,
    ACTIONS(431),
    1,
    anon_sym_DQUOTE,
    ACTIONS(433),
    1,
    anon_sym_SQUOTE,
    ACTIONS(437),
    1,
    sym_number_literal,
    ACTIONS(439),
    1,
    sym_identifier,
    STATE(119),
    1,
    sym_comment,
    STATE(123),
    1,
    sym_scoped_name,
    STATE(125),
    1,
    sym_mult_expr,
    STATE(133),
    1,
    sym_literal,
    STATE(137),
    1,
    sym_unary_expr,
    STATE(139),
    1,
    sym_unary_operator,
    STATE(140),
    1,
    sym_add_expr,
    STATE(147),
    1,
    sym_shift_expr,
    ACTIONS(423),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(435),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(130),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7696] = 20,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(421),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(425),
    1,
    anon_sym_LPAREN,
    ACTIONS(427),
    1,
    anon_sym_TILDE,
    ACTIONS(429),
    1,
    anon_sym_L,
    ACTIONS(431),
    1,
    anon_sym_DQUOTE,
    ACTIONS(433),
    1,
    anon_sym_SQUOTE,
    ACTIONS(437),
    1,
    sym_number_literal,
    ACTIONS(439),
    1,
    sym_identifier,
    STATE(120),
    1,
    sym_comment,
    STATE(123),
    1,
    sym_scoped_name,
    STATE(125),
    1,
    sym_mult_expr,
    STATE(133),
    1,
    sym_literal,
    STATE(137),
    1,
    sym_unary_expr,
    STATE(139),
    1,
    sym_unary_operator,
    STATE(143),
    1,
    sym_add_expr,
    ACTIONS(423),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(435),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(130),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7761] = 19,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(421),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(425),
    1,
    anon_sym_LPAREN,
    ACTIONS(427),
    1,
    anon_sym_TILDE,
    ACTIONS(429),
    1,
    anon_sym_L,
    ACTIONS(431),
    1,
    anon_sym_DQUOTE,
    ACTIONS(433),
    1,
    anon_sym_SQUOTE,
    ACTIONS(437),
    1,
    sym_number_literal,
    ACTIONS(439),
    1,
    sym_identifier,
    STATE(121),
    1,
    sym_comment,
    STATE(123),
    1,
    sym_scoped_name,
    STATE(129),
    1,
    sym_mult_expr,
    STATE(133),
    1,
    sym_literal,
    STATE(137),
    1,
    sym_unary_expr,
    STATE(139),
    1,
    sym_unary_operator,
    ACTIONS(423),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(435),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(130),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7823] = 18,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(421),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(425),
    1,
    anon_sym_LPAREN,
    ACTIONS(427),
    1,
    anon_sym_TILDE,
    ACTIONS(429),
    1,
    anon_sym_L,
    ACTIONS(431),
    1,
    anon_sym_DQUOTE,
    ACTIONS(433),
    1,
    anon_sym_SQUOTE,
    ACTIONS(437),
    1,
    sym_number_literal,
    ACTIONS(439),
    1,
    sym_identifier,
    STATE(122),
    1,
    sym_comment,
    STATE(123),
    1,
    sym_scoped_name,
    STATE(133),
    1,
    sym_literal,
    STATE(136),
    1,
    sym_unary_expr,
    STATE(139),
    1,
    sym_unary_operator,
    ACTIONS(423),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(435),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(130),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7882] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(976),
    1,
    anon_sym_COLON_COLON,
    STATE(123),
    1,
    sym_comment,
    ACTIONS(978),
    3,
    anon_sym_GT,
    anon_sym_SLASH,
    anon_sym_COLON,
    ACTIONS(980),
    13,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_STAR,
    anon_sym_PERCENT,
    anon_sym_RPAREN,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [7915] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(976),
    1,
    anon_sym_COLON_COLON,
    STATE(124),
    1,
    sym_comment,
    ACTIONS(982),
    3,
    anon_sym_GT,
    anon_sym_SLASH,
    anon_sym_COLON,
    ACTIONS(984),
    13,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_STAR,
    anon_sym_PERCENT,
    anon_sym_RPAREN,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [7948] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(986),
    1,
    anon_sym_GT,
    ACTIONS(992),
    1,
    anon_sym_SLASH,
    STATE(125),
    1,
    sym_comment,
    ACTIONS(990),
    2,
    anon_sym_STAR,
    anon_sym_PERCENT,
    ACTIONS(988),
    12,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [7982] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(126),
    1,
    sym_comment,
    ACTIONS(982),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(984),
    14,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_STAR,
    anon_sym_PERCENT,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [8012] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(127),
    1,
    sym_comment,
    ACTIONS(994),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(996),
    14,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_STAR,
    anon_sym_PERCENT,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [8042] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(128),
    1,
    sym_comment,
    ACTIONS(998),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(1000),
    14,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_STAR,
    anon_sym_PERCENT,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [8072] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(992),
    1,
    anon_sym_SLASH,
    ACTIONS(1002),
    1,
    anon_sym_GT,
    STATE(129),
    1,
    sym_comment,
    ACTIONS(990),
    2,
    anon_sym_STAR,
    anon_sym_PERCENT,
    ACTIONS(1004),
    12,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [8106] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(130),
    1,
    sym_comment,
    ACTIONS(1006),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(1008),
    14,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_STAR,
    anon_sym_PERCENT,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [8136] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(131),
    1,
    sym_comment,
    ACTIONS(1010),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(1012),
    14,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_STAR,
    anon_sym_PERCENT,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [8166] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(132),
    1,
    sym_comment,
    ACTIONS(1014),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(1016),
    14,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_STAR,
    anon_sym_PERCENT,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [8196] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(133),
    1,
    sym_comment,
    ACTIONS(978),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(980),
    14,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_STAR,
    anon_sym_PERCENT,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [8226] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(134),
    1,
    sym_comment,
    ACTIONS(1018),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(1020),
    14,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_STAR,
    anon_sym_PERCENT,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [8256] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(135),
    1,
    sym_comment,
    ACTIONS(1022),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(1024),
    14,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_STAR,
    anon_sym_PERCENT,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [8286] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(136),
    1,
    sym_comment,
    ACTIONS(1026),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(1028),
    14,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_STAR,
    anon_sym_PERCENT,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [8316] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(137),
    1,
    sym_comment,
    ACTIONS(1030),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(1032),
    14,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_STAR,
    anon_sym_PERCENT,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [8346] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(138),
    1,
    sym_comment,
    ACTIONS(1034),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(1036),
    14,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_STAR,
    anon_sym_PERCENT,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [8376] = 14,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(421),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(429),
    1,
    anon_sym_L,
    ACTIONS(431),
    1,
    anon_sym_DQUOTE,
    ACTIONS(433),
    1,
    anon_sym_SQUOTE,
    ACTIONS(437),
    1,
    sym_number_literal,
    ACTIONS(439),
    1,
    sym_identifier,
    ACTIONS(1038),
    1,
    anon_sym_LPAREN,
    STATE(124),
    1,
    sym_scoped_name,
    STATE(126),
    1,
    sym_literal,
    STATE(139),
    1,
    sym_comment,
    ACTIONS(435),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(130),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [8422] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1040),
    1,
    anon_sym_GT,
    STATE(140),
    1,
    sym_comment,
    ACTIONS(1044),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(1042),
    10,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [8451] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(976),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(978),
    1,
    anon_sym_SLASH,
    ACTIONS(1046),
    1,
    anon_sym_GT,
    ACTIONS(1048),
    1,
    anon_sym_COMMA,
    STATE(141),
    1,
    sym_comment,
    ACTIONS(980),
    9,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_STAR,
    anon_sym_PERCENT,
    [8484] = 13,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1050),
    1,
    anon_sym_RBRACE,
    ACTIONS(1052),
    1,
    anon_sym_readonly,
    ACTIONS(1054),
    1,
    anon_sym_attribute,
    ACTIONS(1056),
    1,
    anon_sym_provides,
    ACTIONS(1058),
    1,
    anon_sym_uses,
    STATE(142),
    1,
    sym_comment,
    STATE(145),
    1,
    aux_sym_component_body_repeat1,
    STATE(183),
    1,
    sym_component_export,
    STATE(491),
    1,
    sym_component_body,
    STATE(501),
    2,
    sym_readonly_attr_spec,
    sym_attr_spec,
    STATE(492),
    3,
    sym_attr_dcl,
    sym_provides_dcl,
    sym_uses_dcl,
    [8527] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1060),
    1,
    anon_sym_GT,
    STATE(143),
    1,
    sym_comment,
    ACTIONS(1044),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(1062),
    10,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [8556] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(847),
    1,
    anon_sym_SLASH,
    ACTIONS(1064),
    1,
    anon_sym_EQ,
    STATE(144),
    1,
    sym_comment,
    ACTIONS(849),
    11,
    anon_sym_COLON_COLON,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_STAR,
    anon_sym_PERCENT,
    anon_sym_RPAREN,
    [8585] = 12,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1052),
    1,
    anon_sym_readonly,
    ACTIONS(1054),
    1,
    anon_sym_attribute,
    ACTIONS(1056),
    1,
    anon_sym_provides,
    ACTIONS(1058),
    1,
    anon_sym_uses,
    ACTIONS(1066),
    1,
    anon_sym_RBRACE,
    STATE(145),
    1,
    sym_comment,
    STATE(146),
    1,
    aux_sym_component_body_repeat1,
    STATE(183),
    1,
    sym_component_export,
    STATE(501),
    2,
    sym_readonly_attr_spec,
    sym_attr_spec,
    STATE(492),
    3,
    sym_attr_dcl,
    sym_provides_dcl,
    sym_uses_dcl,
    [8625] = 11,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1068),
    1,
    anon_sym_RBRACE,
    ACTIONS(1070),
    1,
    anon_sym_readonly,
    ACTIONS(1073),
    1,
    anon_sym_attribute,
    ACTIONS(1076),
    1,
    anon_sym_provides,
    ACTIONS(1079),
    1,
    anon_sym_uses,
    STATE(183),
    1,
    sym_component_export,
    STATE(146),
    2,
    sym_comment,
    aux_sym_component_body_repeat1,
    STATE(501),
    2,
    sym_readonly_attr_spec,
    sym_attr_spec,
    STATE(492),
    3,
    sym_attr_dcl,
    sym_provides_dcl,
    sym_uses_dcl,
    [8663] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1082),
    1,
    anon_sym_GT,
    STATE(147),
    1,
    sym_comment,
    ACTIONS(1086),
    2,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    ACTIONS(1084),
    8,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [8690] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1088),
    1,
    anon_sym_GT,
    STATE(148),
    1,
    sym_comment,
    ACTIONS(1086),
    2,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    ACTIONS(1090),
    8,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [8717] = 12,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(17),
    1,
    anon_sym_interface,
    ACTIONS(249),
    1,
    anon_sym_AT,
    ACTIONS(1092),
    1,
    anon_sym_bitmask,
    ACTIONS(1094),
    1,
    anon_sym_struct,
    STATE(149),
    1,
    sym_comment,
    STATE(153),
    1,
    aux_sym_interface_def_repeat1,
    STATE(162),
    1,
    sym_annotation_appl,
    STATE(538),
    1,
    sym_interface_header,
    STATE(541),
    1,
    sym_interface_kind,
    ACTIONS(13),
    2,
    anon_sym_local,
    anon_sym_abstract,
    [8755] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1098),
    1,
    anon_sym_DOLLAR,
    STATE(150),
    1,
    sym_comment,
    ACTIONS(1096),
    8,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [8778] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(151),
    1,
    sym_comment,
    ACTIONS(1100),
    4,
    anon_sym_COLON_COLON,
    anon_sym_LPAREN,
    anon_sym_DQUOTE,
    anon_sym_SQUOTE,
    ACTIONS(1102),
    5,
    anon_sym_L,
    anon_sym_TRUE,
    anon_sym_FALSE,
    sym_number_literal,
    sym_identifier,
    [8801] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1098),
    1,
    anon_sym_DOLLAR,
    STATE(152),
    1,
    sym_comment,
    ACTIONS(1104),
    8,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [8824] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1106),
    1,
    anon_sym_AT,
    STATE(162),
    1,
    sym_annotation_appl,
    STATE(153),
    2,
    sym_comment,
    aux_sym_interface_def_repeat1,
    ACTIONS(838),
    5,
    anon_sym_local,
    anon_sym_abstract,
    anon_sym_interface,
    anon_sym_bitmask,
    anon_sym_struct,
    [8848] = 11,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1109),
    1,
    anon_sym_COMMA,
    ACTIONS(1111),
    1,
    anon_sym_SEMI,
    ACTIONS(1113),
    1,
    anon_sym_getraises,
    ACTIONS(1115),
    1,
    anon_sym_setraises,
    STATE(154),
    1,
    sym_comment,
    STATE(271),
    1,
    sym_get_excep_expr,
    STATE(273),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    STATE(467),
    1,
    sym_attr_raises_expr,
    STATE(468),
    1,
    sym_set_excep_expr,
    [8882] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(976),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1117),
    1,
    anon_sym_LPAREN,
    STATE(155),
    1,
    sym_comment,
    ACTIONS(857),
    6,
    anon_sym_local,
    anon_sym_abstract,
    anon_sym_interface,
    anon_sym_bitmask,
    anon_sym_AT,
    anon_sym_struct,
    [8906] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1121),
    1,
    anon_sym_CARET,
    STATE(156),
    1,
    sym_comment,
    ACTIONS(1119),
    7,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [8928] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1121),
    1,
    anon_sym_CARET,
    STATE(157),
    1,
    sym_comment,
    ACTIONS(1123),
    7,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [8950] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(158),
    1,
    sym_comment,
    ACTIONS(1125),
    7,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    anon_sym_SEMI,
    anon_sym_raises,
    anon_sym_getraises,
    anon_sym_setraises,
    anon_sym_default,
    [8969] = 9,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1127),
    1,
    anon_sym_RPAREN,
    ACTIONS(1129),
    1,
    anon_sym_in,
    STATE(53),
    1,
    sym_param_attribute,
    STATE(159),
    1,
    sym_comment,
    STATE(287),
    1,
    sym_param_dcl,
    STATE(474),
    1,
    sym_parameter_dcls,
    ACTIONS(1131),
    2,
    anon_sym_out,
    anon_sym_inout,
    [8998] = 10,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(421),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(431),
    1,
    anon_sym_DQUOTE,
    ACTIONS(439),
    1,
    sym_identifier,
    ACTIONS(1133),
    1,
    anon_sym_L,
    STATE(160),
    1,
    sym_comment,
    STATE(417),
    1,
    sym_scoped_name,
    STATE(550),
    1,
    sym_imported_scope,
    STATE(551),
    1,
    sym_string_literal,
    [9029] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1137),
    1,
    anon_sym_PIPE,
    STATE(161),
    1,
    sym_comment,
    ACTIONS(1135),
    6,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [9050] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(162),
    1,
    sym_comment,
    ACTIONS(907),
    6,
    anon_sym_local,
    anon_sym_abstract,
    anon_sym_interface,
    anon_sym_bitmask,
    anon_sym_AT,
    anon_sym_struct,
    [9068] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1141),
    1,
    anon_sym_LBRACK,
    STATE(247),
    1,
    sym_fixed_array_size,
    STATE(163),
    2,
    sym_comment,
    aux_sym_array_declarator_repeat1,
    ACTIONS(1139),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [9090] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(164),
    1,
    sym_comment,
    ACTIONS(903),
    6,
    anon_sym_local,
    anon_sym_abstract,
    anon_sym_interface,
    anon_sym_bitmask,
    anon_sym_AT,
    anon_sym_struct,
    [9108] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1144),
    1,
    anon_sym_LBRACK,
    STATE(165),
    1,
    sym_comment,
    STATE(171),
    1,
    aux_sym_array_declarator_repeat1,
    STATE(247),
    1,
    sym_fixed_array_size,
    ACTIONS(1125),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [9132] = 9,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1146),
    1,
    anon_sym_RBRACE,
    ACTIONS(1148),
    1,
    anon_sym_default,
    ACTIONS(1150),
    1,
    anon_sym_case,
    STATE(15),
    1,
    sym_case_label,
    STATE(166),
    1,
    sym_comment,
    STATE(168),
    1,
    aux_sym_union_def_repeat1,
    STATE(321),
    1,
    sym_case,
    [9160] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(167),
    1,
    sym_comment,
    ACTIONS(849),
    6,
    anon_sym_COLON_COLON,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_LPAREN,
    anon_sym_AT,
    sym_identifier,
    [9178] = 9,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1148),
    1,
    anon_sym_default,
    ACTIONS(1150),
    1,
    anon_sym_case,
    ACTIONS(1152),
    1,
    anon_sym_RBRACE,
    STATE(15),
    1,
    sym_case_label,
    STATE(168),
    1,
    sym_comment,
    STATE(170),
    1,
    aux_sym_union_def_repeat1,
    STATE(321),
    1,
    sym_case,
    [9206] = 9,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1154),
    1,
    anon_sym_RBRACE,
    ACTIONS(1156),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(1158),
    1,
    sym_identifier,
    STATE(169),
    1,
    sym_comment,
    STATE(256),
    1,
    aux_sym_enumerator_repeat1,
    STATE(324),
    1,
    sym_enumerator,
    STATE(434),
    1,
    sym_enum_modifier,
    [9234] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1160),
    1,
    anon_sym_RBRACE,
    ACTIONS(1162),
    1,
    anon_sym_default,
    ACTIONS(1165),
    1,
    anon_sym_case,
    STATE(15),
    1,
    sym_case_label,
    STATE(321),
    1,
    sym_case,
    STATE(170),
    2,
    sym_comment,
    aux_sym_union_def_repeat1,
    [9260] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1144),
    1,
    anon_sym_LBRACK,
    STATE(163),
    1,
    aux_sym_array_declarator_repeat1,
    STATE(171),
    1,
    sym_comment,
    STATE(247),
    1,
    sym_fixed_array_size,
    ACTIONS(1168),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [9284] = 9,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1170),
    1,
    anon_sym_RBRACE,
    ACTIONS(1172),
    1,
    anon_sym_AT,
    ACTIONS(1174),
    1,
    sym_identifier,
    STATE(172),
    1,
    sym_comment,
    STATE(187),
    1,
    aux_sym_interface_def_repeat1,
    STATE(323),
    1,
    sym_bit_value,
    STATE(372),
    1,
    sym_annotation_appl,
    [9312] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(173),
    1,
    sym_comment,
    ACTIONS(871),
    6,
    anon_sym_COLON_COLON,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_LPAREN,
    anon_sym_AT,
    sym_identifier,
    [9330] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(174),
    1,
    sym_comment,
    ACTIONS(853),
    6,
    anon_sym_COLON_COLON,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_LPAREN,
    anon_sym_AT,
    sym_identifier,
    [9348] = 9,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1156),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(1158),
    1,
    sym_identifier,
    ACTIONS(1176),
    1,
    anon_sym_RBRACE,
    STATE(175),
    1,
    sym_comment,
    STATE(256),
    1,
    aux_sym_enumerator_repeat1,
    STATE(258),
    1,
    sym_enumerator,
    STATE(434),
    1,
    sym_enum_modifier,
    [9376] = 9,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1172),
    1,
    anon_sym_AT,
    ACTIONS(1174),
    1,
    sym_identifier,
    ACTIONS(1178),
    1,
    anon_sym_RBRACE,
    STATE(176),
    1,
    sym_comment,
    STATE(191),
    1,
    aux_sym_interface_def_repeat1,
    STATE(313),
    1,
    sym_bit_value,
    STATE(372),
    1,
    sym_annotation_appl,
    [9404] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(177),
    1,
    sym_comment,
    ACTIONS(1180),
    5,
    anon_sym_RBRACE,
    anon_sym_readonly,
    anon_sym_attribute,
    anon_sym_provides,
    anon_sym_uses,
    [9421] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1182),
    1,
    anon_sym_RBRACE,
    ACTIONS(1184),
    1,
    anon_sym_bitfield,
    STATE(178),
    1,
    sym_comment,
    STATE(196),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(317),
    1,
    sym_bitfield_spec,
    STATE(365),
    1,
    sym_bitfield,
    [9446] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1156),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(1158),
    1,
    sym_identifier,
    STATE(179),
    1,
    sym_comment,
    STATE(256),
    1,
    aux_sym_enumerator_repeat1,
    STATE(434),
    1,
    sym_enum_modifier,
    STATE(438),
    1,
    sym_enumerator,
    [9471] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1186),
    1,
    sym_identifier,
    STATE(180),
    1,
    sym_comment,
    STATE(336),
    1,
    sym_any_declarator,
    STATE(528),
    1,
    sym_any_declarators,
    STATE(426),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [9494] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1184),
    1,
    anon_sym_bitfield,
    ACTIONS(1188),
    1,
    anon_sym_RBRACE,
    STATE(181),
    1,
    sym_comment,
    STATE(184),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(317),
    1,
    sym_bitfield_spec,
    STATE(365),
    1,
    sym_bitfield,
    [9519] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(249),
    1,
    anon_sym_AT,
    ACTIONS(1092),
    1,
    anon_sym_bitmask,
    ACTIONS(1094),
    1,
    anon_sym_struct,
    STATE(153),
    1,
    aux_sym_interface_def_repeat1,
    STATE(162),
    1,
    sym_annotation_appl,
    STATE(182),
    1,
    sym_comment,
    [9544] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(183),
    1,
    sym_comment,
    ACTIONS(1190),
    5,
    anon_sym_RBRACE,
    anon_sym_readonly,
    anon_sym_attribute,
    anon_sym_provides,
    anon_sym_uses,
    [9561] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1184),
    1,
    anon_sym_bitfield,
    ACTIONS(1192),
    1,
    anon_sym_RBRACE,
    STATE(184),
    1,
    sym_comment,
    STATE(196),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(317),
    1,
    sym_bitfield_spec,
    STATE(365),
    1,
    sym_bitfield,
    [9586] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1109),
    1,
    anon_sym_COMMA,
    ACTIONS(1194),
    1,
    anon_sym_SEMI,
    ACTIONS(1196),
    1,
    anon_sym_raises,
    STATE(185),
    1,
    sym_comment,
    STATE(348),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    STATE(505),
    1,
    sym_raises_expr,
    [9611] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1198),
    1,
    anon_sym_LBRACE,
    ACTIONS(1200),
    1,
    anon_sym_COLON,
    ACTIONS(1202),
    1,
    anon_sym_SEMI,
    ACTIONS(1204),
    1,
    anon_sym_supports,
    STATE(186),
    1,
    sym_comment,
    STATE(500),
    1,
    sym_value_inheritance_spec,
    [9636] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1172),
    1,
    anon_sym_AT,
    ACTIONS(1174),
    1,
    sym_identifier,
    STATE(187),
    1,
    sym_comment,
    STATE(228),
    1,
    aux_sym_interface_def_repeat1,
    STATE(318),
    1,
    sym_bit_value,
    STATE(372),
    1,
    sym_annotation_appl,
    [9661] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1186),
    1,
    sym_identifier,
    STATE(188),
    1,
    sym_comment,
    STATE(210),
    1,
    sym_declarator,
    STATE(591),
    1,
    sym_declarators,
    STATE(304),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [9684] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1172),
    1,
    anon_sym_AT,
    ACTIONS(1174),
    1,
    sym_identifier,
    STATE(189),
    1,
    sym_comment,
    STATE(228),
    1,
    aux_sym_interface_def_repeat1,
    STATE(372),
    1,
    sym_annotation_appl,
    STATE(456),
    1,
    sym_bit_value,
    [9709] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1186),
    1,
    sym_identifier,
    STATE(190),
    1,
    sym_comment,
    STATE(210),
    1,
    sym_declarator,
    STATE(306),
    1,
    sym_declarators,
    STATE(304),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [9732] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1172),
    1,
    anon_sym_AT,
    ACTIONS(1174),
    1,
    sym_identifier,
    STATE(191),
    1,
    sym_comment,
    STATE(228),
    1,
    aux_sym_interface_def_repeat1,
    STATE(323),
    1,
    sym_bit_value,
    STATE(372),
    1,
    sym_annotation_appl,
    [9757] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1172),
    1,
    anon_sym_AT,
    ACTIONS(1174),
    1,
    sym_identifier,
    STATE(189),
    1,
    aux_sym_interface_def_repeat1,
    STATE(192),
    1,
    sym_comment,
    STATE(372),
    1,
    sym_annotation_appl,
    STATE(408),
    1,
    sym_bit_value,
    [9782] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1129),
    1,
    anon_sym_in,
    STATE(53),
    1,
    sym_param_attribute,
    STATE(193),
    1,
    sym_comment,
    STATE(409),
    1,
    sym_param_dcl,
    ACTIONS(1131),
    2,
    anon_sym_out,
    anon_sym_inout,
    [9805] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1184),
    1,
    anon_sym_bitfield,
    ACTIONS(1206),
    1,
    anon_sym_RBRACE,
    STATE(178),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(194),
    1,
    sym_comment,
    STATE(317),
    1,
    sym_bitfield_spec,
    STATE(365),
    1,
    sym_bitfield,
    [9830] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1186),
    1,
    sym_identifier,
    STATE(195),
    1,
    sym_comment,
    STATE(210),
    1,
    sym_declarator,
    STATE(303),
    1,
    sym_declarators,
    STATE(304),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [9853] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1208),
    1,
    anon_sym_RBRACE,
    ACTIONS(1210),
    1,
    anon_sym_bitfield,
    STATE(317),
    1,
    sym_bitfield_spec,
    STATE(365),
    1,
    sym_bitfield,
    STATE(196),
    2,
    sym_comment,
    aux_sym_bitset_dcl_repeat1,
    [9876] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(421),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(439),
    1,
    sym_identifier,
    ACTIONS(1213),
    1,
    anon_sym_truncatable,
    STATE(197),
    1,
    sym_comment,
    STATE(223),
    1,
    sym_value_name,
    STATE(224),
    1,
    sym_scoped_name,
    [9901] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1215),
    1,
    anon_sym_COMMA,
    STATE(198),
    1,
    sym_comment,
    STATE(205),
    1,
    aux_sym_declarators_repeat1,
    ACTIONS(1217),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    [9921] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1219),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1221),
    1,
    anon_sym_LPAREN,
    STATE(199),
    1,
    sym_comment,
    ACTIONS(857),
    2,
    anon_sym_AT,
    sym_identifier,
    [9941] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1186),
    1,
    sym_identifier,
    STATE(200),
    1,
    sym_comment,
    STATE(319),
    1,
    sym_declarator,
    STATE(304),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [9961] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(201),
    1,
    sym_comment,
    ACTIONS(1223),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [9977] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1196),
    1,
    anon_sym_raises,
    STATE(202),
    1,
    sym_comment,
    STATE(412),
    1,
    sym_raises_expr,
    ACTIONS(1225),
    2,
    anon_sym_SEMI,
    anon_sym_context,
    [9997] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(431),
    1,
    anon_sym_DQUOTE,
    ACTIONS(976),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1227),
    1,
    anon_sym_L,
    STATE(203),
    1,
    sym_comment,
    STATE(525),
    1,
    sym_string_literal,
    [10019] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(976),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1229),
    1,
    anon_sym_COMMA,
    ACTIONS(1231),
    1,
    anon_sym_RPAREN,
    STATE(204),
    1,
    sym_comment,
    STATE(283),
    1,
    aux_sym_raises_expr_repeat1,
    [10041] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1233),
    1,
    anon_sym_COMMA,
    ACTIONS(1236),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    STATE(205),
    2,
    sym_comment,
    aux_sym_declarators_repeat1,
    [10059] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1238),
    1,
    anon_sym_LBRACE,
    ACTIONS(1240),
    1,
    anon_sym_COLON,
    ACTIONS(1242),
    1,
    anon_sym_SEMI,
    STATE(206),
    1,
    sym_comment,
    STATE(499),
    1,
    sym_component_inheritance_spec,
    [10081] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(431),
    1,
    anon_sym_DQUOTE,
    ACTIONS(976),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1227),
    1,
    anon_sym_L,
    STATE(207),
    1,
    sym_comment,
    STATE(526),
    1,
    sym_string_literal,
    [10103] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1244),
    1,
    anon_sym_COMMA,
    ACTIONS(1247),
    2,
    anon_sym_LBRACE,
    anon_sym_supports,
    STATE(208),
    2,
    sym_comment,
    aux_sym_value_inheritance_spec_repeat1,
    [10121] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1249),
    1,
    anon_sym_LBRACE,
    ACTIONS(1251),
    1,
    anon_sym_COLON,
    ACTIONS(1253),
    1,
    anon_sym_SEMI,
    STATE(209),
    1,
    sym_comment,
    STATE(519),
    1,
    sym_interface_inheritance_spec,
    [10143] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1215),
    1,
    anon_sym_COMMA,
    STATE(198),
    1,
    aux_sym_declarators_repeat1,
    STATE(210),
    1,
    sym_comment,
    ACTIONS(1255),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    [10163] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1200),
    1,
    anon_sym_COLON,
    ACTIONS(1204),
    1,
    anon_sym_supports,
    ACTIONS(1257),
    1,
    anon_sym_LBRACE,
    STATE(211),
    1,
    sym_comment,
    STATE(485),
    1,
    sym_value_inheritance_spec,
    [10185] = 7,
    ACTIONS(1259),
    1,
    anon_sym_AT,
    ACTIONS(1261),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1263),
    1,
    aux_sym_comment_token1,
    ACTIONS(1265),
    1,
    anon_sym_SLASH_STAR,
    STATE(212),
    1,
    sym_comment,
    STATE(217),
    1,
    aux_sym_interface_def_repeat1,
    STATE(377),
    1,
    sym_annotation_appl,
    [10207] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1267),
    1,
    anon_sym_COMMA,
    ACTIONS(1269),
    1,
    anon_sym_LBRACE,
    ACTIONS(1271),
    1,
    anon_sym_supports,
    STATE(208),
    1,
    aux_sym_value_inheritance_spec_repeat1,
    STATE(213),
    1,
    sym_comment,
    [10229] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(223),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1273),
    1,
    sym_identifier,
    STATE(214),
    1,
    sym_comment,
    STATE(411),
    1,
    sym_scoped_name,
    STATE(569),
    1,
    sym_interface_type,
    [10251] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(223),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1273),
    1,
    sym_identifier,
    STATE(215),
    1,
    sym_comment,
    STATE(411),
    1,
    sym_scoped_name,
    STATE(565),
    1,
    sym_interface_type,
    [10273] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1275),
    1,
    anon_sym_RPAREN,
    ACTIONS(1277),
    1,
    anon_sym_in,
    STATE(216),
    1,
    sym_comment,
    STATE(314),
    1,
    sym_init_param_dcl,
    STATE(482),
    1,
    sym_init_param_dcls,
    [10295] = 6,
    ACTIONS(836),
    1,
    aux_sym_comment_token1,
    ACTIONS(1261),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1265),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1279),
    1,
    anon_sym_AT,
    STATE(377),
    1,
    sym_annotation_appl,
    STATE(217),
    2,
    sym_comment,
    aux_sym_interface_def_repeat1,
    [10315] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(421),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1282),
    1,
    sym_identifier,
    STATE(218),
    1,
    sym_comment,
    STATE(274),
    1,
    sym_scoped_name,
    STATE(333),
    1,
    sym_interface_name,
    [10337] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1219),
    1,
    anon_sym_COLON_COLON,
    STATE(219),
    1,
    sym_comment,
    ACTIONS(1048),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [10355] = 4,
    ACTIONS(1261),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1265),
    1,
    anon_sym_SLASH_STAR,
    STATE(220),
    1,
    sym_comment,
    ACTIONS(847),
    4,
    anon_sym_COLON_COLON,
    anon_sym_LPAREN,
    anon_sym_AT,
    aux_sym_comment_token1,
    [10371] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(421),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1282),
    1,
    sym_identifier,
    STATE(221),
    1,
    sym_comment,
    STATE(274),
    1,
    sym_scoped_name,
    STATE(286),
    1,
    sym_interface_name,
    [10393] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(421),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1282),
    1,
    sym_identifier,
    STATE(222),
    1,
    sym_comment,
    STATE(274),
    1,
    sym_scoped_name,
    STATE(559),
    1,
    sym_interface_name,
    [10415] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1267),
    1,
    anon_sym_COMMA,
    ACTIONS(1284),
    1,
    anon_sym_LBRACE,
    ACTIONS(1286),
    1,
    anon_sym_supports,
    STATE(223),
    1,
    sym_comment,
    STATE(250),
    1,
    aux_sym_value_inheritance_spec_repeat1,
    [10437] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(976),
    1,
    anon_sym_COLON_COLON,
    STATE(224),
    1,
    sym_comment,
    ACTIONS(1288),
    3,
    anon_sym_COMMA,
    anon_sym_LBRACE,
    anon_sym_supports,
    [10455] = 4,
    ACTIONS(1261),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1265),
    1,
    anon_sym_SLASH_STAR,
    STATE(225),
    1,
    sym_comment,
    ACTIONS(851),
    4,
    anon_sym_COLON_COLON,
    anon_sym_LPAREN,
    anon_sym_AT,
    aux_sym_comment_token1,
    [10471] = 4,
    ACTIONS(1261),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1265),
    1,
    anon_sym_SLASH_STAR,
    STATE(226),
    1,
    sym_comment,
    ACTIONS(869),
    4,
    anon_sym_COLON_COLON,
    anon_sym_LPAREN,
    anon_sym_AT,
    aux_sym_comment_token1,
    [10487] = 6,
    ACTIONS(1261),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1265),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1290),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1292),
    1,
    anon_sym_LPAREN,
    STATE(227),
    1,
    sym_comment,
    ACTIONS(855),
    2,
    anon_sym_AT,
    aux_sym_comment_token1,
    [10507] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(838),
    1,
    sym_identifier,
    ACTIONS(1294),
    1,
    anon_sym_AT,
    STATE(372),
    1,
    sym_annotation_appl,
    STATE(228),
    2,
    sym_comment,
    aux_sym_interface_def_repeat1,
    [10527] = 7,
    ACTIONS(1259),
    1,
    anon_sym_AT,
    ACTIONS(1261),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1265),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1297),
    1,
    aux_sym_comment_token2,
    STATE(212),
    1,
    aux_sym_interface_def_repeat1,
    STATE(229),
    1,
    sym_comment,
    STATE(377),
    1,
    sym_annotation_appl,
    [10549] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(421),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1282),
    1,
    sym_identifier,
    STATE(224),
    1,
    sym_scoped_name,
    STATE(230),
    1,
    sym_comment,
    STATE(235),
    1,
    sym_value_name,
    [10571] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(231),
    1,
    sym_comment,
    ACTIONS(1299),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [10587] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(976),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1229),
    1,
    anon_sym_COMMA,
    ACTIONS(1301),
    1,
    anon_sym_RPAREN,
    STATE(232),
    1,
    sym_comment,
    STATE(301),
    1,
    aux_sym_raises_expr_repeat1,
    [10609] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1303),
    1,
    anon_sym_LT,
    STATE(233),
    1,
    sym_comment,
    ACTIONS(1305),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [10627] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(234),
    1,
    sym_comment,
    ACTIONS(1307),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [10643] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1267),
    1,
    anon_sym_COMMA,
    ACTIONS(1309),
    1,
    anon_sym_LBRACE,
    ACTIONS(1311),
    1,
    anon_sym_supports,
    STATE(213),
    1,
    aux_sym_value_inheritance_spec_repeat1,
    STATE(235),
    1,
    sym_comment,
    [10665] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1196),
    1,
    anon_sym_raises,
    STATE(236),
    1,
    sym_comment,
    STATE(429),
    1,
    sym_raises_expr,
    ACTIONS(1313),
    2,
    anon_sym_SEMI,
    anon_sym_context,
    [10685] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(421),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1282),
    1,
    sym_identifier,
    STATE(224),
    1,
    sym_scoped_name,
    STATE(237),
    1,
    sym_comment,
    STATE(300),
    1,
    sym_value_name,
    [10707] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(421),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1282),
    1,
    sym_identifier,
    STATE(238),
    1,
    sym_comment,
    STATE(274),
    1,
    sym_scoped_name,
    STATE(445),
    1,
    sym_interface_name,
    [10729] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1315),
    1,
    anon_sym_RPAREN,
    ACTIONS(1317),
    1,
    anon_sym_in,
    STATE(239),
    1,
    sym_comment,
    STATE(359),
    1,
    sym_in_param_dcl,
    STATE(515),
    1,
    sym_in_parameter_dcls,
    [10751] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(431),
    1,
    anon_sym_DQUOTE,
    ACTIONS(1227),
    1,
    anon_sym_L,
    ACTIONS(1319),
    1,
    anon_sym_RPAREN,
    STATE(240),
    1,
    sym_comment,
    STATE(280),
    1,
    sym_string_literal,
    [10773] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1321),
    1,
    anon_sym_LBRACE,
    ACTIONS(1323),
    1,
    anon_sym_COLON,
    STATE(241),
    1,
    sym_comment,
    ACTIONS(1325),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10793] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1186),
    1,
    sym_identifier,
    STATE(242),
    1,
    sym_comment,
    STATE(383),
    1,
    sym_any_declarator,
    STATE(426),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [10813] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(243),
    1,
    sym_comment,
    ACTIONS(1327),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [10829] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(244),
    1,
    sym_comment,
    ACTIONS(1329),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [10845] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(421),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1282),
    1,
    sym_identifier,
    STATE(245),
    1,
    sym_comment,
    STATE(274),
    1,
    sym_scoped_name,
    STATE(305),
    1,
    sym_interface_name,
    [10867] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(421),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1282),
    1,
    sym_identifier,
    STATE(246),
    1,
    sym_comment,
    STATE(274),
    1,
    sym_scoped_name,
    STATE(275),
    1,
    sym_interface_name,
    [10889] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(247),
    1,
    sym_comment,
    ACTIONS(1331),
    4,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_LBRACK,
    [10905] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(248),
    1,
    sym_comment,
    ACTIONS(1333),
    4,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_LBRACK,
    [10921] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(249),
    1,
    sym_comment,
    ACTIONS(1335),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [10937] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1267),
    1,
    anon_sym_COMMA,
    ACTIONS(1309),
    1,
    anon_sym_LBRACE,
    ACTIONS(1311),
    1,
    anon_sym_supports,
    STATE(208),
    1,
    aux_sym_value_inheritance_spec_repeat1,
    STATE(250),
    1,
    sym_comment,
    [10959] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(251),
    1,
    sym_comment,
    ACTIONS(1337),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [10975] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(252),
    1,
    sym_comment,
    ACTIONS(1339),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [10991] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1186),
    1,
    sym_identifier,
    STATE(253),
    1,
    sym_comment,
    STATE(596),
    1,
    sym_declarator,
    STATE(304),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [11011] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(254),
    1,
    sym_comment,
    ACTIONS(1341),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [11027] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1343),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(1346),
    1,
    sym_identifier,
    STATE(434),
    1,
    sym_enum_modifier,
    STATE(255),
    2,
    sym_comment,
    aux_sym_enumerator_repeat1,
    [11047] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1156),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(1348),
    1,
    sym_identifier,
    STATE(255),
    1,
    aux_sym_enumerator_repeat1,
    STATE(256),
    1,
    sym_comment,
    STATE(434),
    1,
    sym_enum_modifier,
    [11069] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(257),
    1,
    sym_comment,
    ACTIONS(1350),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [11085] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1154),
    1,
    anon_sym_RBRACE,
    ACTIONS(1352),
    1,
    anon_sym_COMMA,
    STATE(258),
    1,
    sym_comment,
    STATE(360),
    1,
    aux_sym_enum_dcl_repeat1,
    [11104] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(259),
    1,
    sym_comment,
    ACTIONS(1354),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [11119] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(260),
    1,
    sym_comment,
    ACTIONS(1356),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [11134] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1358),
    1,
    anon_sym_GT,
    ACTIONS(1360),
    1,
    anon_sym_COMMA,
    STATE(261),
    2,
    sym_comment,
    aux_sym_formal_parameters_repeat1,
    [11151] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1363),
    1,
    anon_sym_COMMA,
    ACTIONS(1366),
    1,
    anon_sym_RPAREN,
    STATE(262),
    2,
    sym_comment,
    aux_sym_annotation_appl_params_repeat1,
    [11168] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(421),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1282),
    1,
    sym_identifier,
    STATE(263),
    1,
    sym_comment,
    STATE(422),
    1,
    sym_scoped_name,
    [11187] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1368),
    1,
    anon_sym_GT,
    ACTIONS(1370),
    1,
    anon_sym_COMMA,
    STATE(264),
    2,
    sym_comment,
    aux_sym_actual_parameters_repeat1,
    [11204] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1373),
    1,
    anon_sym_COMMA,
    ACTIONS(1376),
    1,
    anon_sym_RBRACE,
    STATE(265),
    2,
    sym_comment,
    aux_sym_enum_dcl_repeat1,
    [11221] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1378),
    1,
    anon_sym_SEMI,
    ACTIONS(1380),
    1,
    anon_sym_switch,
    ACTIONS(1382),
    1,
    sym_identifier,
    STATE(266),
    1,
    sym_comment,
    [11240] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(267),
    1,
    sym_comment,
    ACTIONS(1384),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [11255] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1386),
    1,
    anon_sym_GT,
    ACTIONS(1388),
    1,
    anon_sym_COMMA,
    STATE(268),
    1,
    sym_comment,
    STATE(352),
    1,
    aux_sym_actual_parameters_repeat1,
    [11274] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1390),
    1,
    anon_sym_COMMA,
    ACTIONS(1393),
    1,
    anon_sym_LBRACE,
    STATE(269),
    2,
    sym_comment,
    aux_sym_interface_inheritance_spec_repeat1,
    [11291] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1395),
    1,
    anon_sym_COMMA,
    ACTIONS(1397),
    1,
    anon_sym_SEMI,
    STATE(270),
    1,
    sym_comment,
    STATE(349),
    1,
    aux_sym_any_declarators_repeat1,
    [11310] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1115),
    1,
    anon_sym_setraises,
    ACTIONS(1399),
    1,
    anon_sym_SEMI,
    STATE(271),
    1,
    sym_comment,
    STATE(511),
    1,
    sym_set_excep_expr,
    [11329] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(272),
    1,
    sym_comment,
    ACTIONS(1401),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [11344] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1109),
    1,
    anon_sym_COMMA,
    ACTIONS(1403),
    1,
    anon_sym_SEMI,
    STATE(273),
    1,
    sym_comment,
    STATE(358),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    [11363] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(976),
    1,
    anon_sym_COLON_COLON,
    STATE(274),
    1,
    sym_comment,
    ACTIONS(1405),
    2,
    anon_sym_COMMA,
    anon_sym_LBRACE,
    [11380] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1407),
    1,
    anon_sym_COMMA,
    ACTIONS(1409),
    1,
    anon_sym_LBRACE,
    STATE(275),
    1,
    sym_comment,
    STATE(355),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    [11399] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(849),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1411),
    1,
    anon_sym_LT,
    ACTIONS(1413),
    1,
    anon_sym_LBRACE,
    STATE(276),
    1,
    sym_comment,
    [11418] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1415),
    1,
    sym_identifier,
    STATE(154),
    1,
    sym_simple_declarator,
    STATE(277),
    1,
    sym_comment,
    STATE(601),
    1,
    sym_attr_declarator,
    [11437] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1417),
    1,
    anon_sym_GT,
    ACTIONS(1419),
    1,
    anon_sym_COMMA,
    STATE(278),
    1,
    sym_comment,
    STATE(347),
    1,
    aux_sym_formal_parameters_repeat1,
    [11456] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(279),
    1,
    sym_comment,
    ACTIONS(1421),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [11471] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1423),
    1,
    anon_sym_COMMA,
    ACTIONS(1425),
    1,
    anon_sym_RPAREN,
    STATE(280),
    1,
    sym_comment,
    STATE(362),
    1,
    aux_sym_context_expr_repeat1,
    [11490] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1427),
    1,
    anon_sym_COMMA,
    ACTIONS(1429),
    1,
    anon_sym_RPAREN,
    STATE(281),
    1,
    sym_comment,
    STATE(343),
    1,
    aux_sym_annotation_appl_params_repeat1,
    [11509] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(421),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1282),
    1,
    sym_identifier,
    STATE(282),
    1,
    sym_comment,
    STATE(308),
    1,
    sym_scoped_name,
    [11528] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1229),
    1,
    anon_sym_COMMA,
    ACTIONS(1431),
    1,
    anon_sym_RPAREN,
    STATE(283),
    1,
    sym_comment,
    STATE(310),
    1,
    aux_sym_raises_expr_repeat1,
    [11547] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1433),
    1,
    anon_sym_COMMA,
    ACTIONS(1436),
    1,
    anon_sym_RPAREN,
    STATE(284),
    2,
    sym_comment,
    aux_sym_in_parameter_dcls_repeat1,
    [11564] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1438),
    1,
    anon_sym_COMMA,
    ACTIONS(1441),
    1,
    anon_sym_RPAREN,
    STATE(285),
    2,
    sym_comment,
    aux_sym_init_param_dcls_repeat1,
    [11581] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1407),
    1,
    anon_sym_COMMA,
    ACTIONS(1443),
    1,
    anon_sym_LBRACE,
    STATE(286),
    1,
    sym_comment,
    STATE(288),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    [11600] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1445),
    1,
    anon_sym_COMMA,
    ACTIONS(1447),
    1,
    anon_sym_RPAREN,
    STATE(287),
    1,
    sym_comment,
    STATE(332),
    1,
    aux_sym_parameter_dcls_repeat1,
    [11619] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1407),
    1,
    anon_sym_COMMA,
    ACTIONS(1449),
    1,
    anon_sym_LBRACE,
    STATE(269),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    STATE(288),
    1,
    sym_comment,
    [11638] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(289),
    1,
    sym_comment,
    ACTIONS(1451),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [11653] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1453),
    1,
    anon_sym_COMMA,
    ACTIONS(1455),
    1,
    anon_sym_RBRACE,
    STATE(290),
    1,
    sym_comment,
    STATE(291),
    1,
    aux_sym_bitmask_dcl_repeat1,
    [11672] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1457),
    1,
    anon_sym_COMMA,
    ACTIONS(1460),
    1,
    anon_sym_RBRACE,
    STATE(291),
    2,
    sym_comment,
    aux_sym_bitmask_dcl_repeat1,
    [11689] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1462),
    1,
    anon_sym_GT,
    ACTIONS(1464),
    1,
    anon_sym_COMMA,
    STATE(292),
    1,
    sym_comment,
    STATE(311),
    1,
    aux_sym_formal_parameter_names_repeat1,
    [11708] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1466),
    1,
    anon_sym_COMMA,
    ACTIONS(1469),
    1,
    anon_sym_RPAREN,
    STATE(293),
    2,
    sym_comment,
    aux_sym_parameter_dcls_repeat1,
    [11725] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(294),
    1,
    sym_comment,
    ACTIONS(1471),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [11740] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1473),
    1,
    anon_sym_COMMA,
    ACTIONS(1476),
    1,
    anon_sym_RPAREN,
    STATE(295),
    2,
    sym_comment,
    aux_sym_context_expr_repeat1,
    [11757] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1478),
    1,
    anon_sym_SEMI,
    ACTIONS(1480),
    1,
    sym_identifier,
    STATE(296),
    2,
    sym_comment,
    aux_sym_bitfield_repeat1,
    [11774] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(297),
    1,
    sym_comment,
    ACTIONS(1483),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [11789] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(298),
    1,
    sym_comment,
    ACTIONS(1485),
    3,
    anon_sym_RBRACE,
    anon_sym_default,
    anon_sym_case,
    [11804] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(299),
    1,
    sym_comment,
    ACTIONS(1048),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [11819] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(300),
    1,
    sym_comment,
    ACTIONS(1247),
    3,
    anon_sym_COMMA,
    anon_sym_LBRACE,
    anon_sym_supports,
    [11834] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1229),
    1,
    anon_sym_COMMA,
    ACTIONS(1487),
    1,
    anon_sym_RPAREN,
    STATE(301),
    1,
    sym_comment,
    STATE(310),
    1,
    aux_sym_raises_expr_repeat1,
    [11853] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(421),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1282),
    1,
    sym_identifier,
    STATE(302),
    1,
    sym_comment,
    STATE(393),
    1,
    sym_scoped_name,
    [11872] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1489),
    1,
    anon_sym_SEMI,
    ACTIONS(1491),
    1,
    anon_sym_default,
    STATE(303),
    1,
    sym_comment,
    STATE(487),
    1,
    sym_default,
    [11891] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(304),
    1,
    sym_comment,
    ACTIONS(1493),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [11906] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1269),
    1,
    anon_sym_LBRACE,
    ACTIONS(1407),
    1,
    anon_sym_COMMA,
    STATE(305),
    1,
    sym_comment,
    STATE(337),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    [11925] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1491),
    1,
    anon_sym_default,
    ACTIONS(1495),
    1,
    anon_sym_SEMI,
    STATE(306),
    1,
    sym_comment,
    STATE(575),
    1,
    sym_default,
    [11944] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1497),
    1,
    anon_sym_COMMA,
    ACTIONS(1499),
    1,
    anon_sym_RPAREN,
    STATE(284),
    1,
    aux_sym_in_parameter_dcls_repeat1,
    STATE(307),
    1,
    sym_comment,
    [11963] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(976),
    1,
    anon_sym_COLON_COLON,
    STATE(308),
    1,
    sym_comment,
    ACTIONS(1501),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [11980] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1196),
    1,
    anon_sym_raises,
    ACTIONS(1503),
    1,
    anon_sym_SEMI,
    STATE(309),
    1,
    sym_comment,
    STATE(529),
    1,
    sym_raises_expr,
    [11999] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1501),
    1,
    anon_sym_RPAREN,
    ACTIONS(1505),
    1,
    anon_sym_COMMA,
    STATE(310),
    2,
    sym_comment,
    aux_sym_raises_expr_repeat1,
    [12016] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1464),
    1,
    anon_sym_COMMA,
    ACTIONS(1508),
    1,
    anon_sym_GT,
    STATE(311),
    1,
    sym_comment,
    STATE(312),
    1,
    aux_sym_formal_parameter_names_repeat1,
    [12035] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1510),
    1,
    anon_sym_GT,
    ACTIONS(1512),
    1,
    anon_sym_COMMA,
    STATE(312),
    2,
    sym_comment,
    aux_sym_formal_parameter_names_repeat1,
    [12052] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1170),
    1,
    anon_sym_RBRACE,
    ACTIONS(1453),
    1,
    anon_sym_COMMA,
    STATE(313),
    1,
    sym_comment,
    STATE(322),
    1,
    aux_sym_bitmask_dcl_repeat1,
    [12071] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1515),
    1,
    anon_sym_COMMA,
    ACTIONS(1517),
    1,
    anon_sym_RPAREN,
    STATE(314),
    1,
    sym_comment,
    STATE(330),
    1,
    aux_sym_init_param_dcls_repeat1,
    [12090] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1352),
    1,
    anon_sym_COMMA,
    ACTIONS(1519),
    1,
    anon_sym_RBRACE,
    STATE(265),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(315),
    1,
    sym_comment,
    [12109] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1521),
    1,
    anon_sym_SEMI,
    ACTIONS(1523),
    1,
    sym_identifier,
    STATE(296),
    1,
    aux_sym_bitfield_repeat1,
    STATE(316),
    1,
    sym_comment,
    [12128] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1523),
    1,
    sym_identifier,
    ACTIONS(1525),
    1,
    anon_sym_SEMI,
    STATE(316),
    1,
    aux_sym_bitfield_repeat1,
    STATE(317),
    1,
    sym_comment,
    [12147] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1453),
    1,
    anon_sym_COMMA,
    ACTIONS(1455),
    1,
    anon_sym_RBRACE,
    STATE(318),
    1,
    sym_comment,
    STATE(326),
    1,
    aux_sym_bitmask_dcl_repeat1,
    [12166] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(319),
    1,
    sym_comment,
    ACTIONS(1236),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [12181] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(421),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1282),
    1,
    sym_identifier,
    STATE(232),
    1,
    sym_scoped_name,
    STATE(320),
    1,
    sym_comment,
    [12200] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(321),
    1,
    sym_comment,
    ACTIONS(1527),
    3,
    anon_sym_RBRACE,
    anon_sym_default,
    anon_sym_case,
    [12215] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1453),
    1,
    anon_sym_COMMA,
    ACTIONS(1529),
    1,
    anon_sym_RBRACE,
    STATE(291),
    1,
    aux_sym_bitmask_dcl_repeat1,
    STATE(322),
    1,
    sym_comment,
    [12234] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1453),
    1,
    anon_sym_COMMA,
    ACTIONS(1529),
    1,
    anon_sym_RBRACE,
    STATE(290),
    1,
    aux_sym_bitmask_dcl_repeat1,
    STATE(323),
    1,
    sym_comment,
    [12253] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1352),
    1,
    anon_sym_COMMA,
    ACTIONS(1531),
    1,
    anon_sym_RBRACE,
    STATE(315),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(324),
    1,
    sym_comment,
    [12272] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1249),
    1,
    anon_sym_LBRACE,
    ACTIONS(1251),
    1,
    anon_sym_COLON,
    STATE(325),
    1,
    sym_comment,
    STATE(519),
    1,
    sym_interface_inheritance_spec,
    [12291] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1453),
    1,
    anon_sym_COMMA,
    ACTIONS(1533),
    1,
    anon_sym_RBRACE,
    STATE(291),
    1,
    aux_sym_bitmask_dcl_repeat1,
    STATE(326),
    1,
    sym_comment,
    [12310] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(421),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1282),
    1,
    sym_identifier,
    STATE(327),
    1,
    sym_comment,
    STATE(462),
    1,
    sym_scoped_name,
    [12329] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(328),
    1,
    sym_comment,
    ACTIONS(1535),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [12344] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(421),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1282),
    1,
    sym_identifier,
    STATE(329),
    1,
    sym_comment,
    STATE(420),
    1,
    sym_scoped_name,
    [12363] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1515),
    1,
    anon_sym_COMMA,
    ACTIONS(1537),
    1,
    anon_sym_RPAREN,
    STATE(285),
    1,
    aux_sym_init_param_dcls_repeat1,
    STATE(330),
    1,
    sym_comment,
    [12382] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1407),
    1,
    anon_sym_COMMA,
    ACTIONS(1443),
    1,
    anon_sym_LBRACE,
    STATE(269),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    STATE(331),
    1,
    sym_comment,
    [12401] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1445),
    1,
    anon_sym_COMMA,
    ACTIONS(1539),
    1,
    anon_sym_RPAREN,
    STATE(293),
    1,
    aux_sym_parameter_dcls_repeat1,
    STATE(332),
    1,
    sym_comment,
    [12420] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1407),
    1,
    anon_sym_COMMA,
    ACTIONS(1541),
    1,
    anon_sym_LBRACE,
    STATE(331),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    STATE(333),
    1,
    sym_comment,
    [12439] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(421),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1282),
    1,
    sym_identifier,
    STATE(203),
    1,
    sym_scoped_name,
    STATE(334),
    1,
    sym_comment,
    [12458] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(421),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1282),
    1,
    sym_identifier,
    STATE(207),
    1,
    sym_scoped_name,
    STATE(335),
    1,
    sym_comment,
    [12477] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1395),
    1,
    anon_sym_COMMA,
    ACTIONS(1543),
    1,
    anon_sym_SEMI,
    STATE(270),
    1,
    aux_sym_any_declarators_repeat1,
    STATE(336),
    1,
    sym_comment,
    [12496] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1407),
    1,
    anon_sym_COMMA,
    ACTIONS(1541),
    1,
    anon_sym_LBRACE,
    STATE(269),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    STATE(337),
    1,
    sym_comment,
    [12515] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(338),
    1,
    sym_comment,
    ACTIONS(1545),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [12530] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1547),
    1,
    anon_sym_SEMI,
    ACTIONS(1549),
    1,
    anon_sym_context,
    STATE(339),
    1,
    sym_comment,
    STATE(555),
    1,
    sym_context_expr,
    [12549] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(421),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1551),
    1,
    sym_identifier,
    STATE(340),
    1,
    sym_comment,
    STATE(390),
    1,
    sym_scoped_name,
    [12568] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(341),
    1,
    sym_comment,
    ACTIONS(1553),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [12583] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(421),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1282),
    1,
    sym_identifier,
    STATE(155),
    1,
    sym_scoped_name,
    STATE(342),
    1,
    sym_comment,
    [12602] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1427),
    1,
    anon_sym_COMMA,
    ACTIONS(1555),
    1,
    anon_sym_RPAREN,
    STATE(262),
    1,
    aux_sym_annotation_appl_params_repeat1,
    STATE(343),
    1,
    sym_comment,
    [12621] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1196),
    1,
    anon_sym_raises,
    ACTIONS(1557),
    1,
    anon_sym_SEMI,
    STATE(344),
    1,
    sym_comment,
    STATE(570),
    1,
    sym_raises_expr,
    [12640] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(345),
    1,
    sym_comment,
    ACTIONS(1559),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [12655] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1561),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1563),
    1,
    sym_identifier,
    STATE(227),
    1,
    sym_scoped_name,
    STATE(346),
    1,
    sym_comment,
    [12674] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1419),
    1,
    anon_sym_COMMA,
    ACTIONS(1565),
    1,
    anon_sym_GT,
    STATE(261),
    1,
    aux_sym_formal_parameters_repeat1,
    STATE(347),
    1,
    sym_comment,
    [12693] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1109),
    1,
    anon_sym_COMMA,
    ACTIONS(1567),
    1,
    anon_sym_SEMI,
    STATE(348),
    1,
    sym_comment,
    STATE(358),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    [12712] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1569),
    1,
    anon_sym_COMMA,
    ACTIONS(1572),
    1,
    anon_sym_SEMI,
    STATE(349),
    2,
    sym_comment,
    aux_sym_any_declarators_repeat1,
    [12729] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1549),
    1,
    anon_sym_context,
    ACTIONS(1574),
    1,
    anon_sym_SEMI,
    STATE(350),
    1,
    sym_comment,
    STATE(555),
    1,
    sym_context_expr,
    [12748] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1576),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1578),
    1,
    sym_identifier,
    STATE(69),
    1,
    sym_scoped_name,
    STATE(351),
    1,
    sym_comment,
    [12767] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1388),
    1,
    anon_sym_COMMA,
    ACTIONS(1580),
    1,
    anon_sym_GT,
    STATE(264),
    1,
    aux_sym_actual_parameters_repeat1,
    STATE(352),
    1,
    sym_comment,
    [12786] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(421),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1282),
    1,
    sym_identifier,
    STATE(353),
    1,
    sym_comment,
    STATE(444),
    1,
    sym_scoped_name,
    [12805] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(223),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1273),
    1,
    sym_identifier,
    STATE(199),
    1,
    sym_scoped_name,
    STATE(354),
    1,
    sym_comment,
    [12824] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1407),
    1,
    anon_sym_COMMA,
    ACTIONS(1582),
    1,
    anon_sym_LBRACE,
    STATE(269),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    STATE(355),
    1,
    sym_comment,
    [12843] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1415),
    1,
    sym_identifier,
    STATE(185),
    1,
    sym_simple_declarator,
    STATE(356),
    1,
    sym_comment,
    STATE(557),
    1,
    sym_readonly_attr_declarator,
    [12862] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(421),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1282),
    1,
    sym_identifier,
    STATE(204),
    1,
    sym_scoped_name,
    STATE(357),
    1,
    sym_comment,
    [12881] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1584),
    1,
    anon_sym_COMMA,
    ACTIONS(1587),
    1,
    anon_sym_SEMI,
    STATE(358),
    2,
    sym_comment,
    aux_sym_readonly_attr_declarator_repeat1,
    [12898] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1497),
    1,
    anon_sym_COMMA,
    ACTIONS(1589),
    1,
    anon_sym_RPAREN,
    STATE(307),
    1,
    aux_sym_in_parameter_dcls_repeat1,
    STATE(359),
    1,
    sym_comment,
    [12917] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1352),
    1,
    anon_sym_COMMA,
    ACTIONS(1531),
    1,
    anon_sym_RBRACE,
    STATE(265),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(360),
    1,
    sym_comment,
    [12936] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(431),
    1,
    anon_sym_DQUOTE,
    ACTIONS(1227),
    1,
    anon_sym_L,
    STATE(361),
    1,
    sym_comment,
    STATE(413),
    1,
    sym_string_literal,
    [12955] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1423),
    1,
    anon_sym_COMMA,
    ACTIONS(1591),
    1,
    anon_sym_RPAREN,
    STATE(295),
    1,
    aux_sym_context_expr_repeat1,
    STATE(362),
    1,
    sym_comment,
    [12974] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(363),
    1,
    sym_comment,
    ACTIONS(1593),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [12989] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(364),
    1,
    sym_comment,
    ACTIONS(1595),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [13003] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(365),
    1,
    sym_comment,
    ACTIONS(1597),
    2,
    anon_sym_RBRACE,
    anon_sym_bitfield,
    [13017] = 5,
    ACTIONS(1261),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1265),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1599),
    1,
    aux_sym_preproc_call_token1,
    ACTIONS(1601),
    1,
    sym_preproc_arg,
    STATE(366),
    1,
    sym_comment,
    [13033] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(976),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1048),
    1,
    anon_sym_COMMA,
    STATE(367),
    1,
    sym_comment,
    [13049] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1603),
    1,
    sym_identifier,
    STATE(368),
    1,
    sym_comment,
    STATE(427),
    1,
    sym_annotation_appl_param,
    [13065] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1605),
    1,
    anon_sym_interface,
    ACTIONS(1607),
    1,
    anon_sym_valuetype,
    STATE(369),
    1,
    sym_comment,
    [13081] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(370),
    1,
    sym_comment,
    ACTIONS(903),
    2,
    anon_sym_AT,
    sym_identifier,
    [13095] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(371),
    1,
    sym_comment,
    ACTIONS(1609),
    2,
    anon_sym_GT,
    anon_sym_COMMA,
    [13109] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(372),
    1,
    sym_comment,
    ACTIONS(907),
    2,
    anon_sym_AT,
    sym_identifier,
    [13123] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1415),
    1,
    sym_identifier,
    STATE(373),
    1,
    sym_comment,
    STATE(549),
    1,
    sym_simple_declarator,
    [13139] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(374),
    1,
    sym_comment,
    ACTIONS(1611),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [13153] = 4,
    ACTIONS(1261),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1265),
    1,
    anon_sym_SLASH_STAR,
    STATE(375),
    1,
    sym_comment,
    ACTIONS(901),
    2,
    anon_sym_AT,
    aux_sym_comment_token1,
    [13167] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(976),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1613),
    1,
    anon_sym_RPAREN,
    STATE(376),
    1,
    sym_comment,
    [13183] = 4,
    ACTIONS(1261),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1265),
    1,
    anon_sym_SLASH_STAR,
    STATE(377),
    1,
    sym_comment,
    ACTIONS(905),
    2,
    anon_sym_AT,
    aux_sym_comment_token1,
    [13197] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(378),
    1,
    sym_comment,
    ACTIONS(1615),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [13211] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(379),
    1,
    sym_comment,
    ACTIONS(1617),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [13225] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(380),
    1,
    sym_comment,
    ACTIONS(1510),
    2,
    anon_sym_GT,
    anon_sym_COMMA,
    [13239] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(381),
    1,
    sym_comment,
    ACTIONS(1619),
    2,
    anon_sym_SEMI,
    anon_sym_context,
    [13253] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(382),
    1,
    sym_comment,
    ACTIONS(1621),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [13267] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(383),
    1,
    sym_comment,
    ACTIONS(1572),
    2,
    anon_sym_COMMA,
    anon_sym_SEMI,
    [13281] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(384),
    1,
    sym_comment,
    ACTIONS(1623),
    2,
    anon_sym_SEMI,
    anon_sym_context,
    [13295] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1625),
    1,
    anon_sym_LBRACE,
    ACTIONS(1627),
    1,
    anon_sym_COLON,
    STATE(385),
    1,
    sym_comment,
    [13311] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(386),
    1,
    sym_comment,
    ACTIONS(1436),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [13325] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(387),
    1,
    sym_comment,
    ACTIONS(1629),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [13339] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(388),
    1,
    sym_comment,
    ACTIONS(1631),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [13353] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(389),
    1,
    sym_comment,
    ACTIONS(1633),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [13367] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(976),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1635),
    1,
    anon_sym_LT,
    STATE(390),
    1,
    sym_comment,
    [13383] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1637),
    1,
    anon_sym_SEMI,
    ACTIONS(1639),
    1,
    anon_sym_default,
    STATE(391),
    1,
    sym_comment,
    [13399] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(392),
    1,
    sym_comment,
    ACTIONS(1641),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [13413] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(976),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1643),
    1,
    anon_sym_LBRACE,
    STATE(393),
    1,
    sym_comment,
    [13429] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(394),
    1,
    sym_comment,
    ACTIONS(1645),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [13443] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1647),
    1,
    sym_identifier,
    STATE(395),
    1,
    sym_comment,
    STATE(594),
    1,
    sym_formal_parameter_names,
    [13459] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(396),
    1,
    sym_comment,
    ACTIONS(1649),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [13473] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(397),
    1,
    sym_comment,
    ACTIONS(1651),
    2,
    anon_sym_RBRACE,
    anon_sym_bitfield,
    [13487] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(398),
    1,
    sym_comment,
    ACTIONS(1653),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [13501] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(399),
    1,
    sym_comment,
    ACTIONS(1655),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [13515] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(400),
    1,
    sym_comment,
    ACTIONS(1657),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [13529] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1219),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1659),
    1,
    sym_identifier,
    STATE(401),
    1,
    sym_comment,
    [13545] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(402),
    1,
    sym_comment,
    ACTIONS(1441),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [13559] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1661),
    1,
    anon_sym_GT,
    ACTIONS(1663),
    1,
    anon_sym_COMMA,
    STATE(403),
    1,
    sym_comment,
    [13575] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(404),
    1,
    sym_comment,
    ACTIONS(1665),
    2,
    anon_sym_RBRACE,
    anon_sym_bitfield,
    [13589] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(405),
    1,
    sym_comment,
    ACTIONS(1667),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [13603] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(406),
    1,
    sym_comment,
    ACTIONS(1669),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [13617] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(407),
    1,
    sym_comment,
    ACTIONS(1671),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [13631] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(408),
    1,
    sym_comment,
    ACTIONS(1460),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [13645] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(409),
    1,
    sym_comment,
    ACTIONS(1469),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [13659] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(410),
    1,
    sym_comment,
    ACTIONS(1673),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [13673] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1219),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1675),
    1,
    sym_identifier,
    STATE(411),
    1,
    sym_comment,
    [13689] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(412),
    1,
    sym_comment,
    ACTIONS(1677),
    2,
    anon_sym_SEMI,
    anon_sym_context,
    [13703] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(413),
    1,
    sym_comment,
    ACTIONS(1476),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [13717] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1317),
    1,
    anon_sym_in,
    STATE(386),
    1,
    sym_in_param_dcl,
    STATE(414),
    1,
    sym_comment,
    [13733] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(415),
    1,
    sym_comment,
    ACTIONS(1679),
    2,
    anon_sym_SEMI,
    anon_sym_context,
    [13747] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1415),
    1,
    sym_identifier,
    STATE(388),
    1,
    sym_simple_declarator,
    STATE(416),
    1,
    sym_comment,
    [13763] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(976),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1681),
    1,
    anon_sym_SEMI,
    STATE(417),
    1,
    sym_comment,
    [13779] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(418),
    1,
    sym_comment,
    ACTIONS(1683),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [13793] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(419),
    1,
    sym_comment,
    ACTIONS(1685),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [13807] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(976),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1687),
    1,
    anon_sym_LT,
    STATE(420),
    1,
    sym_comment,
    [13823] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(421),
    1,
    sym_comment,
    ACTIONS(1689),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [13837] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(976),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1691),
    1,
    anon_sym_LBRACE,
    STATE(422),
    1,
    sym_comment,
    [13853] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(423),
    1,
    sym_comment,
    ACTIONS(1693),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [13867] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1277),
    1,
    anon_sym_in,
    STATE(402),
    1,
    sym_init_param_dcl,
    STATE(424),
    1,
    sym_comment,
    [13883] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1415),
    1,
    sym_identifier,
    STATE(405),
    1,
    sym_simple_declarator,
    STATE(425),
    1,
    sym_comment,
    [13899] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(426),
    1,
    sym_comment,
    ACTIONS(1695),
    2,
    anon_sym_COMMA,
    anon_sym_SEMI,
    [13913] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(427),
    1,
    sym_comment,
    ACTIONS(1366),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [13927] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1415),
    1,
    sym_identifier,
    STATE(407),
    1,
    sym_simple_declarator,
    STATE(428),
    1,
    sym_comment,
    [13943] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(429),
    1,
    sym_comment,
    ACTIONS(1225),
    2,
    anon_sym_SEMI,
    anon_sym_context,
    [13957] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(430),
    1,
    sym_comment,
    ACTIONS(1358),
    2,
    anon_sym_GT,
    anon_sym_COMMA,
    [13971] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(431),
    1,
    sym_comment,
    ACTIONS(1697),
    2,
    anon_sym_SEMI,
    anon_sym_context,
    [13985] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(432),
    1,
    sym_comment,
    ACTIONS(1699),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [13999] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(433),
    1,
    sym_comment,
    ACTIONS(1368),
    2,
    anon_sym_GT,
    anon_sym_COMMA,
    [14013] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(434),
    1,
    sym_comment,
    ACTIONS(1701),
    2,
    anon_sym_ATdefault_literal,
    sym_identifier,
    [14027] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(435),
    1,
    sym_comment,
    ACTIONS(1703),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14041] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(436),
    1,
    sym_comment,
    ACTIONS(1705),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [14055] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(437),
    1,
    sym_comment,
    ACTIONS(1587),
    2,
    anon_sym_COMMA,
    anon_sym_SEMI,
    [14069] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(438),
    1,
    sym_comment,
    ACTIONS(1376),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [14083] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(439),
    1,
    sym_comment,
    ACTIONS(1707),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14097] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(440),
    1,
    sym_comment,
    ACTIONS(1709),
    2,
    anon_sym_ATdefault_literal,
    sym_identifier,
    [14111] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(441),
    1,
    sym_comment,
    ACTIONS(1711),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14125] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(442),
    1,
    sym_comment,
    ACTIONS(1713),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14139] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1715),
    1,
    anon_sym_GT,
    ACTIONS(1717),
    1,
    anon_sym_COMMA,
    STATE(443),
    1,
    sym_comment,
    [14155] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(976),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1719),
    1,
    anon_sym_LBRACE,
    STATE(444),
    1,
    sym_comment,
    [14171] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(445),
    1,
    sym_comment,
    ACTIONS(1393),
    2,
    anon_sym_COMMA,
    anon_sym_LBRACE,
    [14185] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(446),
    1,
    sym_comment,
    ACTIONS(1721),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14199] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1723),
    1,
    anon_sym_DQUOTE,
    ACTIONS(1725),
    1,
    anon_sym_SQUOTE,
    STATE(447),
    1,
    sym_comment,
    [14215] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(448),
    1,
    sym_comment,
    ACTIONS(1727),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14229] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1415),
    1,
    sym_identifier,
    STATE(437),
    1,
    sym_simple_declarator,
    STATE(449),
    1,
    sym_comment,
    [14245] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1729),
    1,
    anon_sym_LPAREN,
    STATE(432),
    1,
    sym_exception_list,
    STATE(450),
    1,
    sym_comment,
    [14261] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1729),
    1,
    anon_sym_LPAREN,
    STATE(451),
    1,
    sym_comment,
    STATE(510),
    1,
    sym_exception_list,
    [14277] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(452),
    1,
    sym_comment,
    ACTIONS(1731),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14291] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(453),
    1,
    sym_comment,
    ACTIONS(1733),
    2,
    anon_sym_GT,
    anon_sym_COMMA,
    [14305] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1415),
    1,
    sym_identifier,
    STATE(391),
    1,
    sym_simple_declarator,
    STATE(454),
    1,
    sym_comment,
    [14321] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1219),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1735),
    1,
    sym_identifier,
    STATE(455),
    1,
    sym_comment,
    [14337] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(456),
    1,
    sym_comment,
    ACTIONS(1737),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [14351] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1739),
    1,
    anon_sym_LBRACE,
    ACTIONS(1741),
    1,
    anon_sym_COLON,
    STATE(457),
    1,
    sym_comment,
    [14367] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(458),
    1,
    sym_comment,
    ACTIONS(1743),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14381] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(459),
    1,
    sym_comment,
    ACTIONS(1745),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [14395] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1747),
    1,
    anon_sym_LT,
    ACTIONS(1749),
    1,
    sym_identifier,
    STATE(460),
    1,
    sym_comment,
    [14411] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(461),
    1,
    sym_comment,
    ACTIONS(1751),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14425] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(976),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1753),
    1,
    anon_sym_LBRACE,
    STATE(462),
    1,
    sym_comment,
    [14441] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(463),
    1,
    sym_comment,
    ACTIONS(1755),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14455] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1547),
    1,
    anon_sym_SEMI,
    STATE(464),
    1,
    sym_comment,
    [14468] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1757),
    1,
    anon_sym_LPAREN,
    STATE(465),
    1,
    sym_comment,
    [14481] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1759),
    1,
    anon_sym_GT,
    STATE(466),
    1,
    sym_comment,
    [14494] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1403),
    1,
    anon_sym_SEMI,
    STATE(467),
    1,
    sym_comment,
    [14507] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1399),
    1,
    anon_sym_SEMI,
    STATE(468),
    1,
    sym_comment,
    [14520] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1761),
    1,
    anon_sym_SEMI,
    STATE(469),
    1,
    sym_comment,
    [14533] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1763),
    1,
    sym_identifier,
    STATE(470),
    1,
    sym_comment,
    [14546] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1765),
    1,
    anon_sym_SEMI,
    STATE(471),
    1,
    sym_comment,
    [14559] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1767),
    1,
    anon_sym_GT,
    STATE(472),
    1,
    sym_comment,
    [14572] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1749),
    1,
    sym_identifier,
    STATE(473),
    1,
    sym_comment,
    [14585] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1769),
    1,
    anon_sym_RPAREN,
    STATE(474),
    1,
    sym_comment,
    [14598] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1771),
    1,
    anon_sym_RPAREN,
    STATE(475),
    1,
    sym_comment,
    [14611] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1429),
    1,
    anon_sym_RPAREN,
    STATE(476),
    1,
    sym_comment,
    [14624] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1773),
    1,
    aux_sym_char_literal_token1,
    STATE(477),
    1,
    sym_comment,
    [14637] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1775),
    1,
    anon_sym_SEMI,
    STATE(478),
    1,
    sym_comment,
    [14650] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1735),
    1,
    sym_identifier,
    STATE(479),
    1,
    sym_comment,
    [14663] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1777),
    1,
    anon_sym_SEMI,
    STATE(480),
    1,
    sym_comment,
    [14676] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1779),
    1,
    sym_identifier,
    STATE(481),
    1,
    sym_comment,
    [14689] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1781),
    1,
    anon_sym_RPAREN,
    STATE(482),
    1,
    sym_comment,
    [14702] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1783),
    1,
    anon_sym_LT,
    STATE(483),
    1,
    sym_comment,
    [14715] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1785),
    1,
    anon_sym_SEMI,
    STATE(484),
    1,
    sym_comment,
    [14728] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1787),
    1,
    anon_sym_LBRACE,
    STATE(485),
    1,
    sym_comment,
    [14741] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1789),
    1,
    anon_sym_SEMI,
    STATE(486),
    1,
    sym_comment,
    [14754] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1791),
    1,
    anon_sym_SEMI,
    STATE(487),
    1,
    sym_comment,
    [14767] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1793),
    1,
    anon_sym_SEMI,
    STATE(488),
    1,
    sym_comment,
    [14780] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1795),
    1,
    anon_sym_LBRACE,
    STATE(489),
    1,
    sym_comment,
    [14793] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1797),
    1,
    anon_sym_SEMI,
    STATE(490),
    1,
    sym_comment,
    [14806] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1799),
    1,
    anon_sym_RBRACE,
    STATE(491),
    1,
    sym_comment,
    [14819] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1801),
    1,
    anon_sym_SEMI,
    STATE(492),
    1,
    sym_comment,
    [14832] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1803),
    1,
    anon_sym_SEMI,
    STATE(493),
    1,
    sym_comment,
    [14845] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1805),
    1,
    anon_sym_SEMI,
    STATE(494),
    1,
    sym_comment,
    [14858] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1807),
    1,
    anon_sym_LBRACE,
    STATE(495),
    1,
    sym_comment,
    [14871] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1809),
    1,
    anon_sym_SEMI,
    STATE(496),
    1,
    sym_comment,
    [14884] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1811),
    1,
    sym_identifier,
    STATE(497),
    1,
    sym_comment,
    [14897] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1813),
    1,
    anon_sym_SEMI,
    STATE(498),
    1,
    sym_comment,
    [14910] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1815),
    1,
    anon_sym_LBRACE,
    STATE(499),
    1,
    sym_comment,
    [14923] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1817),
    1,
    anon_sym_LBRACE,
    STATE(500),
    1,
    sym_comment,
    [14936] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1819),
    1,
    anon_sym_SEMI,
    STATE(501),
    1,
    sym_comment,
    [14949] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1821),
    1,
    sym_identifier,
    STATE(502),
    1,
    sym_comment,
    [14962] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(283),
    1,
    anon_sym_RBRACE,
    STATE(503),
    1,
    sym_comment,
    [14975] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1823),
    1,
    anon_sym_LPAREN,
    STATE(504),
    1,
    sym_comment,
    [14988] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1567),
    1,
    anon_sym_SEMI,
    STATE(505),
    1,
    sym_comment,
    [15001] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1825),
    1,
    anon_sym_RPAREN,
    STATE(506),
    1,
    sym_comment,
    [15014] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1827),
    1,
    anon_sym_GT,
    STATE(507),
    1,
    sym_comment,
    [15027] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1829),
    1,
    anon_sym_void,
    STATE(508),
    1,
    sym_comment,
    [15040] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1831),
    1,
    anon_sym_LBRACE,
    STATE(509),
    1,
    sym_comment,
    [15053] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1833),
    1,
    anon_sym_SEMI,
    STATE(510),
    1,
    sym_comment,
    [15066] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1835),
    1,
    anon_sym_SEMI,
    STATE(511),
    1,
    sym_comment,
    [15079] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1837),
    1,
    anon_sym_attribute,
    STATE(512),
    1,
    sym_comment,
    [15092] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1839),
    1,
    anon_sym_SEMI,
    STATE(513),
    1,
    sym_comment,
    [15105] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1841),
    1,
    sym_identifier,
    STATE(514),
    1,
    sym_comment,
    [15118] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1843),
    1,
    anon_sym_RPAREN,
    STATE(515),
    1,
    sym_comment,
    [15131] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1607),
    1,
    anon_sym_valuetype,
    STATE(516),
    1,
    sym_comment,
    [15144] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1845),
    1,
    anon_sym_SEMI,
    STATE(517),
    1,
    sym_comment,
    [15157] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1847),
    1,
    anon_sym_SEMI,
    STATE(518),
    1,
    sym_comment,
    [15170] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1849),
    1,
    anon_sym_LBRACE,
    STATE(519),
    1,
    sym_comment,
    [15183] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1851),
    1,
    anon_sym_GT,
    STATE(520),
    1,
    sym_comment,
    [15196] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1853),
    1,
    anon_sym_LPAREN,
    STATE(521),
    1,
    sym_comment,
    [15209] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1855),
    1,
    anon_sym_DQUOTE,
    STATE(522),
    1,
    sym_comment,
    [15222] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1857),
    1,
    aux_sym_string_literal_token1,
    STATE(523),
    1,
    sym_comment,
    [15235] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1859),
    1,
    aux_sym_char_literal_token1,
    STATE(524),
    1,
    sym_comment,
    [15248] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1861),
    1,
    anon_sym_SEMI,
    STATE(525),
    1,
    sym_comment,
    [15261] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1863),
    1,
    anon_sym_SEMI,
    STATE(526),
    1,
    sym_comment,
    [15274] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1865),
    1,
    anon_sym_COMMA,
    STATE(527),
    1,
    sym_comment,
    [15287] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1867),
    1,
    anon_sym_SEMI,
    STATE(528),
    1,
    sym_comment,
    [15300] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1557),
    1,
    anon_sym_SEMI,
    STATE(529),
    1,
    sym_comment,
    [15313] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1064),
    1,
    anon_sym_EQ,
    STATE(530),
    1,
    sym_comment,
    [15326] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1869),
    1,
    anon_sym_EQ,
    STATE(531),
    1,
    sym_comment,
    [15339] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1871),
    1,
    anon_sym_RPAREN,
    STATE(532),
    1,
    sym_comment,
    [15352] = 4,
    ACTIONS(1261),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1265),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1873),
    1,
    aux_sym_comment_token3,
    STATE(533),
    1,
    sym_comment,
    [15365] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1875),
    1,
    anon_sym_COMMA,
    STATE(534),
    1,
    sym_comment,
    [15378] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1877),
    1,
    sym_identifier,
    STATE(535),
    1,
    sym_comment,
    [15391] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1879),
    1,
    anon_sym_DQUOTE,
    STATE(536),
    1,
    sym_comment,
    [15404] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1881),
    1,
    anon_sym_SQUOTE,
    STATE(537),
    1,
    sym_comment,
    [15417] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1883),
    1,
    anon_sym_LBRACE,
    STATE(538),
    1,
    sym_comment,
    [15430] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1885),
    1,
    anon_sym_GT,
    STATE(539),
    1,
    sym_comment,
    [15443] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1887),
    1,
    anon_sym_GT,
    STATE(540),
    1,
    sym_comment,
    [15456] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1889),
    1,
    sym_identifier,
    STATE(541),
    1,
    sym_comment,
    [15469] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1891),
    1,
    sym_identifier,
    STATE(542),
    1,
    sym_comment,
    [15482] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1893),
    1,
    sym_identifier,
    STATE(543),
    1,
    sym_comment,
    [15495] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1895),
    1,
    anon_sym_SEMI,
    STATE(544),
    1,
    sym_comment,
    [15508] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1897),
    1,
    sym_identifier,
    STATE(545),
    1,
    sym_comment,
    [15521] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1899),
    1,
    anon_sym_SEMI,
    STATE(546),
    1,
    sym_comment,
    [15534] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1901),
    1,
    anon_sym_COLON,
    STATE(547),
    1,
    sym_comment,
    [15547] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1903),
    1,
    sym_identifier,
    STATE(548),
    1,
    sym_comment,
    [15560] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1905),
    1,
    anon_sym_SEMI,
    STATE(549),
    1,
    sym_comment,
    [15573] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1907),
    1,
    anon_sym_SEMI,
    STATE(550),
    1,
    sym_comment,
    [15586] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1681),
    1,
    anon_sym_SEMI,
    STATE(551),
    1,
    sym_comment,
    [15599] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1909),
    1,
    anon_sym_GT,
    STATE(552),
    1,
    sym_comment,
    [15612] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1911),
    1,
    anon_sym_LPAREN,
    STATE(553),
    1,
    sym_comment,
    [15625] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1913),
    1,
    aux_sym_string_literal_token1,
    STATE(554),
    1,
    sym_comment,
    [15638] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1915),
    1,
    anon_sym_SEMI,
    STATE(555),
    1,
    sym_comment,
    [15651] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1917),
    1,
    anon_sym_SQUOTE,
    STATE(556),
    1,
    sym_comment,
    [15664] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1919),
    1,
    anon_sym_SEMI,
    STATE(557),
    1,
    sym_comment,
    [15677] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1723),
    1,
    anon_sym_DQUOTE,
    STATE(558),
    1,
    sym_comment,
    [15690] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1284),
    1,
    anon_sym_LBRACE,
    STATE(559),
    1,
    sym_comment,
    [15703] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1921),
    1,
    anon_sym_SEMI,
    STATE(560),
    1,
    sym_comment,
    [15716] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1923),
    1,
    anon_sym_SEMI,
    STATE(561),
    1,
    sym_comment,
    [15729] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1925),
    1,
    anon_sym_LPAREN,
    STATE(562),
    1,
    sym_comment,
    [15742] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1927),
    1,
    anon_sym_SEMI,
    STATE(563),
    1,
    sym_comment,
    [15755] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1929),
    1,
    anon_sym_LT,
    STATE(564),
    1,
    sym_comment,
    [15768] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1931),
    1,
    sym_identifier,
    STATE(565),
    1,
    sym_comment,
    [15781] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1933),
    1,
    anon_sym_LT,
    STATE(566),
    1,
    sym_comment,
    [15794] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1935),
    1,
    sym_identifier,
    STATE(567),
    1,
    sym_comment,
    [15807] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1937),
    1,
    sym_identifier,
    STATE(568),
    1,
    sym_comment,
    [15820] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1939),
    1,
    sym_identifier,
    STATE(569),
    1,
    sym_comment,
    [15833] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1941),
    1,
    anon_sym_SEMI,
    STATE(570),
    1,
    sym_comment,
    [15846] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1943),
    1,
    anon_sym_SEMI,
    STATE(571),
    1,
    sym_comment,
    [15859] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1945),
    1,
    anon_sym_RBRACE,
    STATE(572),
    1,
    sym_comment,
    [15872] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1947),
    1,
    anon_sym_SEMI,
    STATE(573),
    1,
    sym_comment,
    [15885] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1949),
    1,
    anon_sym_SEMI,
    STATE(574),
    1,
    sym_comment,
    [15898] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1951),
    1,
    anon_sym_SEMI,
    STATE(575),
    1,
    sym_comment,
    [15911] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1953),
    1,
    anon_sym_SEMI,
    STATE(576),
    1,
    sym_comment,
    [15924] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1747),
    1,
    anon_sym_LT,
    STATE(577),
    1,
    sym_comment,
    [15937] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1955),
    1,
    anon_sym_COLON,
    STATE(578),
    1,
    sym_comment,
    [15950] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1957),
    1,
    sym_identifier,
    STATE(579),
    1,
    sym_comment,
    [15963] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1959),
    1,
    anon_sym_SEMI,
    STATE(580),
    1,
    sym_comment,
    [15976] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1961),
    1,
    anon_sym_GT,
    STATE(581),
    1,
    sym_comment,
    [15989] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1659),
    1,
    sym_identifier,
    STATE(582),
    1,
    sym_comment,
    [16002] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1963),
    1,
    anon_sym_LBRACE,
    STATE(583),
    1,
    sym_comment,
    [16015] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1965),
    1,
    anon_sym_SEMI,
    STATE(584),
    1,
    sym_comment,
    [16028] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1967),
    1,
    sym_identifier,
    STATE(585),
    1,
    sym_comment,
    [16041] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1969),
    1,
    anon_sym_SEMI,
    STATE(586),
    1,
    sym_comment,
    [16054] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1971),
    1,
    anon_sym_LBRACE,
    STATE(587),
    1,
    sym_comment,
    [16067] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1973),
    1,
    anon_sym_SEMI,
    STATE(588),
    1,
    sym_comment,
    [16080] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1975),
    1,
    anon_sym_SEMI,
    STATE(589),
    1,
    sym_comment,
    [16093] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1977),
    1,
    anon_sym_LBRACE,
    STATE(590),
    1,
    sym_comment,
    [16106] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1979),
    1,
    anon_sym_SEMI,
    STATE(591),
    1,
    sym_comment,
    [16119] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1981),
    1,
    sym_identifier,
    STATE(592),
    1,
    sym_comment,
    [16132] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1983),
    1,
    sym_identifier,
    STATE(593),
    1,
    sym_comment,
    [16145] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1985),
    1,
    anon_sym_GT,
    STATE(594),
    1,
    sym_comment,
    [16158] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1987),
    1,
    anon_sym_LBRACE,
    STATE(595),
    1,
    sym_comment,
    [16171] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1989),
    1,
    anon_sym_SEMI,
    STATE(596),
    1,
    sym_comment,
    [16184] = 4,
    ACTIONS(1261),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1265),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1991),
    1,
    aux_sym_preproc_call_token1,
    STATE(597),
    1,
    sym_comment,
    [16197] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1993),
    1,
    anon_sym_LPAREN,
    STATE(598),
    1,
    sym_comment,
    [16210] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1263),
    1,
    anon_sym_SLASH,
    STATE(599),
    1,
    sym_comment,
    [16223] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1995),
    1,
    sym_identifier,
    STATE(600),
    1,
    sym_comment,
    [16236] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1997),
    1,
    anon_sym_SEMI,
    STATE(601),
    1,
    sym_comment,
    [16249] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1999),
    1,
    anon_sym_LBRACE,
    STATE(602),
    1,
    sym_comment,
    [16262] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2001),
    1,
    sym_identifier,
    STATE(603),
    1,
    sym_comment,
    [16275] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2003),
    1,
    anon_sym_SEMI,
    STATE(604),
    1,
    sym_comment,
    [16288] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2005),
    1,
    sym_identifier,
    STATE(605),
    1,
    sym_comment,
    [16301] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2007),
    1,
    anon_sym_RBRACK,
    STATE(606),
    1,
    sym_comment,
    [16314] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2009),
    1,
    anon_sym_SEMI,
    STATE(607),
    1,
    sym_comment,
    [16327] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2011),
    1,
    anon_sym_enum,
    STATE(608),
    1,
    sym_comment,
    [16340] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2013),
    1,
    anon_sym_SEMI,
    STATE(609),
    1,
    sym_comment,
    [16353] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2015),
    1,
    anon_sym_GT,
    STATE(610),
    1,
    sym_comment,
    [16366] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2017),
    1,
    anon_sym_LBRACE,
    STATE(611),
    1,
    sym_comment,
    [16379] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2019),
    1,
    sym_identifier,
    STATE(612),
    1,
    sym_comment,
    [16392] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2021),
    1,
    anon_sym_SEMI,
    STATE(613),
    1,
    sym_comment,
    [16405] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2023),
    1,
    anon_sym_LBRACE,
    STATE(614),
    1,
    sym_comment,
    [16418] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2025),
    1,
    anon_sym_SEMI,
    STATE(615),
    1,
    sym_comment,
    [16431] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2027),
    1,
    sym_identifier,
    STATE(616),
    1,
    sym_comment,
    [16444] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2029),
    1,
    anon_sym_RPAREN,
    STATE(617),
    1,
    sym_comment,
    [16457] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2031),
    1,
    anon_sym_SEMI,
    STATE(618),
    1,
    sym_comment,
    [16470] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2033),
    1,
    ts_builtin_sym_end,
    STATE(619),
    1,
    sym_comment,
    [16483] = 4,
    ACTIONS(1261),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1265),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2035),
    1,
    aux_sym_predefine_token1,
    STATE(620),
    1,
    sym_comment,
    [16496] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1613),
    1,
    anon_sym_RPAREN,
    STATE(621),
    1,
    sym_comment,
    [16509] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2037),
    1,
    sym_identifier,
    STATE(622),
    1,
    sym_comment,
    [16522] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2039),
    1,
    anon_sym_enum,
    STATE(623),
    1,
    sym_comment,
    [16535] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2041),
    1,
    anon_sym_valuetype,
    STATE(624),
    1,
    sym_comment,
    [16548] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2043),
    1,
    sym_identifier,
    STATE(625),
    1,
    sym_comment,
    [16561] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2045),
    1,
    sym_identifier,
    STATE(626),
    1,
    sym_comment,
    [16574] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2047),
    1,
    sym_identifier,
    STATE(627),
    1,
    sym_comment,
    [16587] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2049),
    1,
    sym_identifier,
    STATE(628),
    1,
    sym_comment,
    [16600] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2051),
    1,
    sym_identifier,
    STATE(629),
    1,
    sym_comment,
    [16613] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2053),
    1,
    sym_identifier,
    STATE(630),
    1,
    sym_comment,
    [16626] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2055),
    1,
    anon_sym_SEMI,
    STATE(631),
    1,
    sym_comment,
    [16639] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2057),
    1,
    sym_identifier,
    STATE(632),
    1,
    sym_comment,
    [16652] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2059),
    1,
    sym_identifier,
    STATE(633),
    1,
    sym_comment,
    [16665] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2061),
    1,
    sym_identifier,
    STATE(634),
    1,
    sym_comment,
    [16678] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1574),
    1,
    anon_sym_SEMI,
    STATE(635),
    1,
    sym_comment,
    [16691] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2063),
    1,
    sym_identifier,
    STATE(636),
    1,
    sym_comment,
    [16704] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2065),
    1,
    anon_sym_RPAREN,
    STATE(637),
    1,
    sym_comment,
    [16717] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2067),
    1,
    sym_identifier,
    STATE(638),
    1,
    sym_comment,
    [16730] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2069),
    1,
    sym_identifier,
    STATE(639),
    1,
    sym_comment,
    [16743] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2071),
    1,
    sym_identifier,
    STATE(640),
    1,
    sym_comment,
    [16756] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2073),
    1,
    anon_sym_RPAREN,
    STATE(641),
    1,
    sym_comment,
    [16769] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2075),
    1,
    anon_sym_LBRACE,
    STATE(642),
    1,
    sym_comment,
    [16782] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2077),
    1,
    sym_identifier,
    STATE(643),
    1,
    sym_comment,
    [16795] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2079),
    1,
    anon_sym_RPAREN,
    STATE(644),
    1,
    sym_comment,
    [16808] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2081),
    1,
    sym_identifier,
    STATE(645),
    1,
    sym_comment,
    [16821] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1605),
    1,
    anon_sym_interface,
    STATE(646),
    1,
    sym_comment,
    [16834] = 1,
    ACTIONS(2083),
    1,
    ts_builtin_sym_end,
    [16838] = 1,
    ACTIONS(2085),
    1,
    ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
    [SMALL_STATE(26)] = 0,
    [SMALL_STATE(27)] = 142,
    [SMALL_STATE(28)] = 284,
    [SMALL_STATE(29)] = 428,
    [SMALL_STATE(30)] = 570,
    [SMALL_STATE(31)] = 712,
    [SMALL_STATE(32)] = 854,
    [SMALL_STATE(33)] = 996,
    [SMALL_STATE(34)] = 1138,
    [SMALL_STATE(35)] = 1280,
    [SMALL_STATE(36)] = 1422,
    [SMALL_STATE(37)] = 1566,
    [SMALL_STATE(38)] = 1706,
    [SMALL_STATE(39)] = 1848,
    [SMALL_STATE(40)] = 1990,
    [SMALL_STATE(41)] = 2059,
    [SMALL_STATE(42)] = 2128,
    [SMALL_STATE(43)] = 2197,
    [SMALL_STATE(44)] = 2266,
    [SMALL_STATE(45)] = 2335,
    [SMALL_STATE(46)] = 2404,
    [SMALL_STATE(47)] = 2537,
    [SMALL_STATE(48)] = 2664,
    [SMALL_STATE(49)] = 2733,
    [SMALL_STATE(50)] = 2863,
    [SMALL_STATE(51)] = 2987,
    [SMALL_STATE(52)] = 3111,
    [SMALL_STATE(53)] = 3235,
    [SMALL_STATE(54)] = 3359,
    [SMALL_STATE(55)] = 3483,
    [SMALL_STATE(56)] = 3607,
    [SMALL_STATE(57)] = 3731,
    [SMALL_STATE(58)] = 3855,
    [SMALL_STATE(59)] = 3979,
    [SMALL_STATE(60)] = 4045,
    [SMALL_STATE(61)] = 4111,
    [SMALL_STATE(62)] = 4216,
    [SMALL_STATE(63)] = 4321,
    [SMALL_STATE(64)] = 4376,
    [SMALL_STATE(65)] = 4431,
    [SMALL_STATE(66)] = 4483,
    [SMALL_STATE(67)] = 4530,
    [SMALL_STATE(68)] = 4577,
    [SMALL_STATE(69)] = 4624,
    [SMALL_STATE(70)] = 4673,
    [SMALL_STATE(71)] = 4720,
    [SMALL_STATE(72)] = 4767,
    [SMALL_STATE(73)] = 4814,
    [SMALL_STATE(74)] = 4861,
    [SMALL_STATE(75)] = 4908,
    [SMALL_STATE(76)] = 4955,
    [SMALL_STATE(77)] = 5002,
    [SMALL_STATE(78)] = 5049,
    [SMALL_STATE(79)] = 5096,
    [SMALL_STATE(80)] = 5143,
    [SMALL_STATE(81)] = 5189,
    [SMALL_STATE(82)] = 5235,
    [SMALL_STATE(83)] = 5280,
    [SMALL_STATE(84)] = 5363,
    [SMALL_STATE(85)] = 5406,
    [SMALL_STATE(86)] = 5449,
    [SMALL_STATE(87)] = 5492,
    [SMALL_STATE(88)] = 5578,
    [SMALL_STATE(89)] = 5664,
    [SMALL_STATE(90)] = 5750,
    [SMALL_STATE(91)] = 5836,
    [SMALL_STATE(92)] = 5919,
    [SMALL_STATE(93)] = 5964,
    [SMALL_STATE(94)] = 6047,
    [SMALL_STATE(95)] = 6130,
    [SMALL_STATE(96)] = 6213,
    [SMALL_STATE(97)] = 6296,
    [SMALL_STATE(98)] = 6379,
    [SMALL_STATE(99)] = 6462,
    [SMALL_STATE(100)] = 6502,
    [SMALL_STATE(101)] = 6582,
    [SMALL_STATE(102)] = 6662,
    [SMALL_STATE(103)] = 6742,
    [SMALL_STATE(104)] = 6782,
    [SMALL_STATE(105)] = 6822,
    [SMALL_STATE(106)] = 6902,
    [SMALL_STATE(107)] = 6982,
    [SMALL_STATE(108)] = 7062,
    [SMALL_STATE(109)] = 7142,
    [SMALL_STATE(110)] = 7210,
    [SMALL_STATE(111)] = 7249,
    [SMALL_STATE(112)] = 7288,
    [SMALL_STATE(113)] = 7327,
    [SMALL_STATE(114)] = 7366,
    [SMALL_STATE(115)] = 7405,
    [SMALL_STATE(116)] = 7444,
    [SMALL_STATE(117)] = 7483,
    [SMALL_STATE(118)] = 7557,
    [SMALL_STATE(119)] = 7628,
    [SMALL_STATE(120)] = 7696,
    [SMALL_STATE(121)] = 7761,
    [SMALL_STATE(122)] = 7823,
    [SMALL_STATE(123)] = 7882,
    [SMALL_STATE(124)] = 7915,
    [SMALL_STATE(125)] = 7948,
    [SMALL_STATE(126)] = 7982,
    [SMALL_STATE(127)] = 8012,
    [SMALL_STATE(128)] = 8042,
    [SMALL_STATE(129)] = 8072,
    [SMALL_STATE(130)] = 8106,
    [SMALL_STATE(131)] = 8136,
    [SMALL_STATE(132)] = 8166,
    [SMALL_STATE(133)] = 8196,
    [SMALL_STATE(134)] = 8226,
    [SMALL_STATE(135)] = 8256,
    [SMALL_STATE(136)] = 8286,
    [SMALL_STATE(137)] = 8316,
    [SMALL_STATE(138)] = 8346,
    [SMALL_STATE(139)] = 8376,
    [SMALL_STATE(140)] = 8422,
    [SMALL_STATE(141)] = 8451,
    [SMALL_STATE(142)] = 8484,
    [SMALL_STATE(143)] = 8527,
    [SMALL_STATE(144)] = 8556,
    [SMALL_STATE(145)] = 8585,
    [SMALL_STATE(146)] = 8625,
    [SMALL_STATE(147)] = 8663,
    [SMALL_STATE(148)] = 8690,
    [SMALL_STATE(149)] = 8717,
    [SMALL_STATE(150)] = 8755,
    [SMALL_STATE(151)] = 8778,
    [SMALL_STATE(152)] = 8801,
    [SMALL_STATE(153)] = 8824,
    [SMALL_STATE(154)] = 8848,
    [SMALL_STATE(155)] = 8882,
    [SMALL_STATE(156)] = 8906,
    [SMALL_STATE(157)] = 8928,
    [SMALL_STATE(158)] = 8950,
    [SMALL_STATE(159)] = 8969,
    [SMALL_STATE(160)] = 8998,
    [SMALL_STATE(161)] = 9029,
    [SMALL_STATE(162)] = 9050,
    [SMALL_STATE(163)] = 9068,
    [SMALL_STATE(164)] = 9090,
    [SMALL_STATE(165)] = 9108,
    [SMALL_STATE(166)] = 9132,
    [SMALL_STATE(167)] = 9160,
    [SMALL_STATE(168)] = 9178,
    [SMALL_STATE(169)] = 9206,
    [SMALL_STATE(170)] = 9234,
    [SMALL_STATE(171)] = 9260,
    [SMALL_STATE(172)] = 9284,
    [SMALL_STATE(173)] = 9312,
    [SMALL_STATE(174)] = 9330,
    [SMALL_STATE(175)] = 9348,
    [SMALL_STATE(176)] = 9376,
    [SMALL_STATE(177)] = 9404,
    [SMALL_STATE(178)] = 9421,
    [SMALL_STATE(179)] = 9446,
    [SMALL_STATE(180)] = 9471,
    [SMALL_STATE(181)] = 9494,
    [SMALL_STATE(182)] = 9519,
    [SMALL_STATE(183)] = 9544,
    [SMALL_STATE(184)] = 9561,
    [SMALL_STATE(185)] = 9586,
    [SMALL_STATE(186)] = 9611,
    [SMALL_STATE(187)] = 9636,
    [SMALL_STATE(188)] = 9661,
    [SMALL_STATE(189)] = 9684,
    [SMALL_STATE(190)] = 9709,
    [SMALL_STATE(191)] = 9732,
    [SMALL_STATE(192)] = 9757,
    [SMALL_STATE(193)] = 9782,
    [SMALL_STATE(194)] = 9805,
    [SMALL_STATE(195)] = 9830,
    [SMALL_STATE(196)] = 9853,
    [SMALL_STATE(197)] = 9876,
    [SMALL_STATE(198)] = 9901,
    [SMALL_STATE(199)] = 9921,
    [SMALL_STATE(200)] = 9941,
    [SMALL_STATE(201)] = 9961,
    [SMALL_STATE(202)] = 9977,
    [SMALL_STATE(203)] = 9997,
    [SMALL_STATE(204)] = 10019,
    [SMALL_STATE(205)] = 10041,
    [SMALL_STATE(206)] = 10059,
    [SMALL_STATE(207)] = 10081,
    [SMALL_STATE(208)] = 10103,
    [SMALL_STATE(209)] = 10121,
    [SMALL_STATE(210)] = 10143,
    [SMALL_STATE(211)] = 10163,
    [SMALL_STATE(212)] = 10185,
    [SMALL_STATE(213)] = 10207,
    [SMALL_STATE(214)] = 10229,
    [SMALL_STATE(215)] = 10251,
    [SMALL_STATE(216)] = 10273,
    [SMALL_STATE(217)] = 10295,
    [SMALL_STATE(218)] = 10315,
    [SMALL_STATE(219)] = 10337,
    [SMALL_STATE(220)] = 10355,
    [SMALL_STATE(221)] = 10371,
    [SMALL_STATE(222)] = 10393,
    [SMALL_STATE(223)] = 10415,
    [SMALL_STATE(224)] = 10437,
    [SMALL_STATE(225)] = 10455,
    [SMALL_STATE(226)] = 10471,
    [SMALL_STATE(227)] = 10487,
    [SMALL_STATE(228)] = 10507,
    [SMALL_STATE(229)] = 10527,
    [SMALL_STATE(230)] = 10549,
    [SMALL_STATE(231)] = 10571,
    [SMALL_STATE(232)] = 10587,
    [SMALL_STATE(233)] = 10609,
    [SMALL_STATE(234)] = 10627,
    [SMALL_STATE(235)] = 10643,
    [SMALL_STATE(236)] = 10665,
    [SMALL_STATE(237)] = 10685,
    [SMALL_STATE(238)] = 10707,
    [SMALL_STATE(239)] = 10729,
    [SMALL_STATE(240)] = 10751,
    [SMALL_STATE(241)] = 10773,
    [SMALL_STATE(242)] = 10793,
    [SMALL_STATE(243)] = 10813,
    [SMALL_STATE(244)] = 10829,
    [SMALL_STATE(245)] = 10845,
    [SMALL_STATE(246)] = 10867,
    [SMALL_STATE(247)] = 10889,
    [SMALL_STATE(248)] = 10905,
    [SMALL_STATE(249)] = 10921,
    [SMALL_STATE(250)] = 10937,
    [SMALL_STATE(251)] = 10959,
    [SMALL_STATE(252)] = 10975,
    [SMALL_STATE(253)] = 10991,
    [SMALL_STATE(254)] = 11011,
    [SMALL_STATE(255)] = 11027,
    [SMALL_STATE(256)] = 11047,
    [SMALL_STATE(257)] = 11069,
    [SMALL_STATE(258)] = 11085,
    [SMALL_STATE(259)] = 11104,
    [SMALL_STATE(260)] = 11119,
    [SMALL_STATE(261)] = 11134,
    [SMALL_STATE(262)] = 11151,
    [SMALL_STATE(263)] = 11168,
    [SMALL_STATE(264)] = 11187,
    [SMALL_STATE(265)] = 11204,
    [SMALL_STATE(266)] = 11221,
    [SMALL_STATE(267)] = 11240,
    [SMALL_STATE(268)] = 11255,
    [SMALL_STATE(269)] = 11274,
    [SMALL_STATE(270)] = 11291,
    [SMALL_STATE(271)] = 11310,
    [SMALL_STATE(272)] = 11329,
    [SMALL_STATE(273)] = 11344,
    [SMALL_STATE(274)] = 11363,
    [SMALL_STATE(275)] = 11380,
    [SMALL_STATE(276)] = 11399,
    [SMALL_STATE(277)] = 11418,
    [SMALL_STATE(278)] = 11437,
    [SMALL_STATE(279)] = 11456,
    [SMALL_STATE(280)] = 11471,
    [SMALL_STATE(281)] = 11490,
    [SMALL_STATE(282)] = 11509,
    [SMALL_STATE(283)] = 11528,
    [SMALL_STATE(284)] = 11547,
    [SMALL_STATE(285)] = 11564,
    [SMALL_STATE(286)] = 11581,
    [SMALL_STATE(287)] = 11600,
    [SMALL_STATE(288)] = 11619,
    [SMALL_STATE(289)] = 11638,
    [SMALL_STATE(290)] = 11653,
    [SMALL_STATE(291)] = 11672,
    [SMALL_STATE(292)] = 11689,
    [SMALL_STATE(293)] = 11708,
    [SMALL_STATE(294)] = 11725,
    [SMALL_STATE(295)] = 11740,
    [SMALL_STATE(296)] = 11757,
    [SMALL_STATE(297)] = 11774,
    [SMALL_STATE(298)] = 11789,
    [SMALL_STATE(299)] = 11804,
    [SMALL_STATE(300)] = 11819,
    [SMALL_STATE(301)] = 11834,
    [SMALL_STATE(302)] = 11853,
    [SMALL_STATE(303)] = 11872,
    [SMALL_STATE(304)] = 11891,
    [SMALL_STATE(305)] = 11906,
    [SMALL_STATE(306)] = 11925,
    [SMALL_STATE(307)] = 11944,
    [SMALL_STATE(308)] = 11963,
    [SMALL_STATE(309)] = 11980,
    [SMALL_STATE(310)] = 11999,
    [SMALL_STATE(311)] = 12016,
    [SMALL_STATE(312)] = 12035,
    [SMALL_STATE(313)] = 12052,
    [SMALL_STATE(314)] = 12071,
    [SMALL_STATE(315)] = 12090,
    [SMALL_STATE(316)] = 12109,
    [SMALL_STATE(317)] = 12128,
    [SMALL_STATE(318)] = 12147,
    [SMALL_STATE(319)] = 12166,
    [SMALL_STATE(320)] = 12181,
    [SMALL_STATE(321)] = 12200,
    [SMALL_STATE(322)] = 12215,
    [SMALL_STATE(323)] = 12234,
    [SMALL_STATE(324)] = 12253,
    [SMALL_STATE(325)] = 12272,
    [SMALL_STATE(326)] = 12291,
    [SMALL_STATE(327)] = 12310,
    [SMALL_STATE(328)] = 12329,
    [SMALL_STATE(329)] = 12344,
    [SMALL_STATE(330)] = 12363,
    [SMALL_STATE(331)] = 12382,
    [SMALL_STATE(332)] = 12401,
    [SMALL_STATE(333)] = 12420,
    [SMALL_STATE(334)] = 12439,
    [SMALL_STATE(335)] = 12458,
    [SMALL_STATE(336)] = 12477,
    [SMALL_STATE(337)] = 12496,
    [SMALL_STATE(338)] = 12515,
    [SMALL_STATE(339)] = 12530,
    [SMALL_STATE(340)] = 12549,
    [SMALL_STATE(341)] = 12568,
    [SMALL_STATE(342)] = 12583,
    [SMALL_STATE(343)] = 12602,
    [SMALL_STATE(344)] = 12621,
    [SMALL_STATE(345)] = 12640,
    [SMALL_STATE(346)] = 12655,
    [SMALL_STATE(347)] = 12674,
    [SMALL_STATE(348)] = 12693,
    [SMALL_STATE(349)] = 12712,
    [SMALL_STATE(350)] = 12729,
    [SMALL_STATE(351)] = 12748,
    [SMALL_STATE(352)] = 12767,
    [SMALL_STATE(353)] = 12786,
    [SMALL_STATE(354)] = 12805,
    [SMALL_STATE(355)] = 12824,
    [SMALL_STATE(356)] = 12843,
    [SMALL_STATE(357)] = 12862,
    [SMALL_STATE(358)] = 12881,
    [SMALL_STATE(359)] = 12898,
    [SMALL_STATE(360)] = 12917,
    [SMALL_STATE(361)] = 12936,
    [SMALL_STATE(362)] = 12955,
    [SMALL_STATE(363)] = 12974,
    [SMALL_STATE(364)] = 12989,
    [SMALL_STATE(365)] = 13003,
    [SMALL_STATE(366)] = 13017,
    [SMALL_STATE(367)] = 13033,
    [SMALL_STATE(368)] = 13049,
    [SMALL_STATE(369)] = 13065,
    [SMALL_STATE(370)] = 13081,
    [SMALL_STATE(371)] = 13095,
    [SMALL_STATE(372)] = 13109,
    [SMALL_STATE(373)] = 13123,
    [SMALL_STATE(374)] = 13139,
    [SMALL_STATE(375)] = 13153,
    [SMALL_STATE(376)] = 13167,
    [SMALL_STATE(377)] = 13183,
    [SMALL_STATE(378)] = 13197,
    [SMALL_STATE(379)] = 13211,
    [SMALL_STATE(380)] = 13225,
    [SMALL_STATE(381)] = 13239,
    [SMALL_STATE(382)] = 13253,
    [SMALL_STATE(383)] = 13267,
    [SMALL_STATE(384)] = 13281,
    [SMALL_STATE(385)] = 13295,
    [SMALL_STATE(386)] = 13311,
    [SMALL_STATE(387)] = 13325,
    [SMALL_STATE(388)] = 13339,
    [SMALL_STATE(389)] = 13353,
    [SMALL_STATE(390)] = 13367,
    [SMALL_STATE(391)] = 13383,
    [SMALL_STATE(392)] = 13399,
    [SMALL_STATE(393)] = 13413,
    [SMALL_STATE(394)] = 13429,
    [SMALL_STATE(395)] = 13443,
    [SMALL_STATE(396)] = 13459,
    [SMALL_STATE(397)] = 13473,
    [SMALL_STATE(398)] = 13487,
    [SMALL_STATE(399)] = 13501,
    [SMALL_STATE(400)] = 13515,
    [SMALL_STATE(401)] = 13529,
    [SMALL_STATE(402)] = 13545,
    [SMALL_STATE(403)] = 13559,
    [SMALL_STATE(404)] = 13575,
    [SMALL_STATE(405)] = 13589,
    [SMALL_STATE(406)] = 13603,
    [SMALL_STATE(407)] = 13617,
    [SMALL_STATE(408)] = 13631,
    [SMALL_STATE(409)] = 13645,
    [SMALL_STATE(410)] = 13659,
    [SMALL_STATE(411)] = 13673,
    [SMALL_STATE(412)] = 13689,
    [SMALL_STATE(413)] = 13703,
    [SMALL_STATE(414)] = 13717,
    [SMALL_STATE(415)] = 13733,
    [SMALL_STATE(416)] = 13747,
    [SMALL_STATE(417)] = 13763,
    [SMALL_STATE(418)] = 13779,
    [SMALL_STATE(419)] = 13793,
    [SMALL_STATE(420)] = 13807,
    [SMALL_STATE(421)] = 13823,
    [SMALL_STATE(422)] = 13837,
    [SMALL_STATE(423)] = 13853,
    [SMALL_STATE(424)] = 13867,
    [SMALL_STATE(425)] = 13883,
    [SMALL_STATE(426)] = 13899,
    [SMALL_STATE(427)] = 13913,
    [SMALL_STATE(428)] = 13927,
    [SMALL_STATE(429)] = 13943,
    [SMALL_STATE(430)] = 13957,
    [SMALL_STATE(431)] = 13971,
    [SMALL_STATE(432)] = 13985,
    [SMALL_STATE(433)] = 13999,
    [SMALL_STATE(434)] = 14013,
    [SMALL_STATE(435)] = 14027,
    [SMALL_STATE(436)] = 14041,
    [SMALL_STATE(437)] = 14055,
    [SMALL_STATE(438)] = 14069,
    [SMALL_STATE(439)] = 14083,
    [SMALL_STATE(440)] = 14097,
    [SMALL_STATE(441)] = 14111,
    [SMALL_STATE(442)] = 14125,
    [SMALL_STATE(443)] = 14139,
    [SMALL_STATE(444)] = 14155,
    [SMALL_STATE(445)] = 14171,
    [SMALL_STATE(446)] = 14185,
    [SMALL_STATE(447)] = 14199,
    [SMALL_STATE(448)] = 14215,
    [SMALL_STATE(449)] = 14229,
    [SMALL_STATE(450)] = 14245,
    [SMALL_STATE(451)] = 14261,
    [SMALL_STATE(452)] = 14277,
    [SMALL_STATE(453)] = 14291,
    [SMALL_STATE(454)] = 14305,
    [SMALL_STATE(455)] = 14321,
    [SMALL_STATE(456)] = 14337,
    [SMALL_STATE(457)] = 14351,
    [SMALL_STATE(458)] = 14367,
    [SMALL_STATE(459)] = 14381,
    [SMALL_STATE(460)] = 14395,
    [SMALL_STATE(461)] = 14411,
    [SMALL_STATE(462)] = 14425,
    [SMALL_STATE(463)] = 14441,
    [SMALL_STATE(464)] = 14455,
    [SMALL_STATE(465)] = 14468,
    [SMALL_STATE(466)] = 14481,
    [SMALL_STATE(467)] = 14494,
    [SMALL_STATE(468)] = 14507,
    [SMALL_STATE(469)] = 14520,
    [SMALL_STATE(470)] = 14533,
    [SMALL_STATE(471)] = 14546,
    [SMALL_STATE(472)] = 14559,
    [SMALL_STATE(473)] = 14572,
    [SMALL_STATE(474)] = 14585,
    [SMALL_STATE(475)] = 14598,
    [SMALL_STATE(476)] = 14611,
    [SMALL_STATE(477)] = 14624,
    [SMALL_STATE(478)] = 14637,
    [SMALL_STATE(479)] = 14650,
    [SMALL_STATE(480)] = 14663,
    [SMALL_STATE(481)] = 14676,
    [SMALL_STATE(482)] = 14689,
    [SMALL_STATE(483)] = 14702,
    [SMALL_STATE(484)] = 14715,
    [SMALL_STATE(485)] = 14728,
    [SMALL_STATE(486)] = 14741,
    [SMALL_STATE(487)] = 14754,
    [SMALL_STATE(488)] = 14767,
    [SMALL_STATE(489)] = 14780,
    [SMALL_STATE(490)] = 14793,
    [SMALL_STATE(491)] = 14806,
    [SMALL_STATE(492)] = 14819,
    [SMALL_STATE(493)] = 14832,
    [SMALL_STATE(494)] = 14845,
    [SMALL_STATE(495)] = 14858,
    [SMALL_STATE(496)] = 14871,
    [SMALL_STATE(497)] = 14884,
    [SMALL_STATE(498)] = 14897,
    [SMALL_STATE(499)] = 14910,
    [SMALL_STATE(500)] = 14923,
    [SMALL_STATE(501)] = 14936,
    [SMALL_STATE(502)] = 14949,
    [SMALL_STATE(503)] = 14962,
    [SMALL_STATE(504)] = 14975,
    [SMALL_STATE(505)] = 14988,
    [SMALL_STATE(506)] = 15001,
    [SMALL_STATE(507)] = 15014,
    [SMALL_STATE(508)] = 15027,
    [SMALL_STATE(509)] = 15040,
    [SMALL_STATE(510)] = 15053,
    [SMALL_STATE(511)] = 15066,
    [SMALL_STATE(512)] = 15079,
    [SMALL_STATE(513)] = 15092,
    [SMALL_STATE(514)] = 15105,
    [SMALL_STATE(515)] = 15118,
    [SMALL_STATE(516)] = 15131,
    [SMALL_STATE(517)] = 15144,
    [SMALL_STATE(518)] = 15157,
    [SMALL_STATE(519)] = 15170,
    [SMALL_STATE(520)] = 15183,
    [SMALL_STATE(521)] = 15196,
    [SMALL_STATE(522)] = 15209,
    [SMALL_STATE(523)] = 15222,
    [SMALL_STATE(524)] = 15235,
    [SMALL_STATE(525)] = 15248,
    [SMALL_STATE(526)] = 15261,
    [SMALL_STATE(527)] = 15274,
    [SMALL_STATE(528)] = 15287,
    [SMALL_STATE(529)] = 15300,
    [SMALL_STATE(530)] = 15313,
    [SMALL_STATE(531)] = 15326,
    [SMALL_STATE(532)] = 15339,
    [SMALL_STATE(533)] = 15352,
    [SMALL_STATE(534)] = 15365,
    [SMALL_STATE(535)] = 15378,
    [SMALL_STATE(536)] = 15391,
    [SMALL_STATE(537)] = 15404,
    [SMALL_STATE(538)] = 15417,
    [SMALL_STATE(539)] = 15430,
    [SMALL_STATE(540)] = 15443,
    [SMALL_STATE(541)] = 15456,
    [SMALL_STATE(542)] = 15469,
    [SMALL_STATE(543)] = 15482,
    [SMALL_STATE(544)] = 15495,
    [SMALL_STATE(545)] = 15508,
    [SMALL_STATE(546)] = 15521,
    [SMALL_STATE(547)] = 15534,
    [SMALL_STATE(548)] = 15547,
    [SMALL_STATE(549)] = 15560,
    [SMALL_STATE(550)] = 15573,
    [SMALL_STATE(551)] = 15586,
    [SMALL_STATE(552)] = 15599,
    [SMALL_STATE(553)] = 15612,
    [SMALL_STATE(554)] = 15625,
    [SMALL_STATE(555)] = 15638,
    [SMALL_STATE(556)] = 15651,
    [SMALL_STATE(557)] = 15664,
    [SMALL_STATE(558)] = 15677,
    [SMALL_STATE(559)] = 15690,
    [SMALL_STATE(560)] = 15703,
    [SMALL_STATE(561)] = 15716,
    [SMALL_STATE(562)] = 15729,
    [SMALL_STATE(563)] = 15742,
    [SMALL_STATE(564)] = 15755,
    [SMALL_STATE(565)] = 15768,
    [SMALL_STATE(566)] = 15781,
    [SMALL_STATE(567)] = 15794,
    [SMALL_STATE(568)] = 15807,
    [SMALL_STATE(569)] = 15820,
    [SMALL_STATE(570)] = 15833,
    [SMALL_STATE(571)] = 15846,
    [SMALL_STATE(572)] = 15859,
    [SMALL_STATE(573)] = 15872,
    [SMALL_STATE(574)] = 15885,
    [SMALL_STATE(575)] = 15898,
    [SMALL_STATE(576)] = 15911,
    [SMALL_STATE(577)] = 15924,
    [SMALL_STATE(578)] = 15937,
    [SMALL_STATE(579)] = 15950,
    [SMALL_STATE(580)] = 15963,
    [SMALL_STATE(581)] = 15976,
    [SMALL_STATE(582)] = 15989,
    [SMALL_STATE(583)] = 16002,
    [SMALL_STATE(584)] = 16015,
    [SMALL_STATE(585)] = 16028,
    [SMALL_STATE(586)] = 16041,
    [SMALL_STATE(587)] = 16054,
    [SMALL_STATE(588)] = 16067,
    [SMALL_STATE(589)] = 16080,
    [SMALL_STATE(590)] = 16093,
    [SMALL_STATE(591)] = 16106,
    [SMALL_STATE(592)] = 16119,
    [SMALL_STATE(593)] = 16132,
    [SMALL_STATE(594)] = 16145,
    [SMALL_STATE(595)] = 16158,
    [SMALL_STATE(596)] = 16171,
    [SMALL_STATE(597)] = 16184,
    [SMALL_STATE(598)] = 16197,
    [SMALL_STATE(599)] = 16210,
    [SMALL_STATE(600)] = 16223,
    [SMALL_STATE(601)] = 16236,
    [SMALL_STATE(602)] = 16249,
    [SMALL_STATE(603)] = 16262,
    [SMALL_STATE(604)] = 16275,
    [SMALL_STATE(605)] = 16288,
    [SMALL_STATE(606)] = 16301,
    [SMALL_STATE(607)] = 16314,
    [SMALL_STATE(608)] = 16327,
    [SMALL_STATE(609)] = 16340,
    [SMALL_STATE(610)] = 16353,
    [SMALL_STATE(611)] = 16366,
    [SMALL_STATE(612)] = 16379,
    [SMALL_STATE(613)] = 16392,
    [SMALL_STATE(614)] = 16405,
    [SMALL_STATE(615)] = 16418,
    [SMALL_STATE(616)] = 16431,
    [SMALL_STATE(617)] = 16444,
    [SMALL_STATE(618)] = 16457,
    [SMALL_STATE(619)] = 16470,
    [SMALL_STATE(620)] = 16483,
    [SMALL_STATE(621)] = 16496,
    [SMALL_STATE(622)] = 16509,
    [SMALL_STATE(623)] = 16522,
    [SMALL_STATE(624)] = 16535,
    [SMALL_STATE(625)] = 16548,
    [SMALL_STATE(626)] = 16561,
    [SMALL_STATE(627)] = 16574,
    [SMALL_STATE(628)] = 16587,
    [SMALL_STATE(629)] = 16600,
    [SMALL_STATE(630)] = 16613,
    [SMALL_STATE(631)] = 16626,
    [SMALL_STATE(632)] = 16639,
    [SMALL_STATE(633)] = 16652,
    [SMALL_STATE(634)] = 16665,
    [SMALL_STATE(635)] = 16678,
    [SMALL_STATE(636)] = 16691,
    [SMALL_STATE(637)] = 16704,
    [SMALL_STATE(638)] = 16717,
    [SMALL_STATE(639)] = 16730,
    [SMALL_STATE(640)] = 16743,
    [SMALL_STATE(641)] = 16756,
    [SMALL_STATE(642)] = 16769,
    [SMALL_STATE(643)] = 16782,
    [SMALL_STATE(644)] = 16795,
    [SMALL_STATE(645)] = 16808,
    [SMALL_STATE(646)] = 16821,
    [SMALL_STATE(647)] = 16834,
    [SMALL_STATE(648)] = 16838,
};

static const TSParseActionEntry ts_parse_actions[] = {
    [0] = { .entry = { .count = 0, .reusable = false } },
    [1] = { .entry = { .count = 1, .reusable = false } },
    RECOVER(),
    [3] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(229),
    [5] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(533),
    [7] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_specification, 0, 0, 0),
    [9] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(366),
    [11] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(600),
    [13] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(646),
    [15] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(369),
    [17] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(638),
    [19] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(636),
    [21] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(632),
    [23] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(630),
    [25] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(342),
    [27] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(340),
    [29] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(629),
    [31] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(628),
    [33] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(627),
    [35] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(626),
    [37] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(62),
    [39] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(624),
    [41] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(16),
    [43] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(623),
    [45] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(335),
    [47] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(334),
    [49] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(160),
    [51] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(622),
    [53] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(373),
    [55] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(620),
    [57] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(252),
    [60] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(254),
    [63] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(201),
    [66] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(201),
    [69] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(257),
    [72] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(289),
    [75] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(566),
    [78] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(251),
    [81] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(249),
    [84] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(249),
    [87] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(244),
    [90] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(243),
    [93] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(243),
    [96] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(279),
    [99] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(279),
    [102] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(234),
    [105] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(633),
    [108] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(233),
    [111] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(294),
    [114] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(577),
    [117] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(564),
    [120] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(600),
    [123] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    [125] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(516),
    [128] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(514),
    [131] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(512),
    [134] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(54),
    [137] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(636),
    [140] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(632),
    [143] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(342),
    [146] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(629),
    [149] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(628),
    [152] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(627),
    [155] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(626),
    [158] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(62),
    [161] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(624),
    [164] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(58),
    [167] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(497),
    [170] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(16),
    [173] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(623),
    [176] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(335),
    [179] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(160),
    [182] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(508),
    [185] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(373),
    [188] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(167),
    [191] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(252),
    [193] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(254),
    [195] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(201),
    [197] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(201),
    [199] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(257),
    [201] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(289),
    [203] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(566),
    [205] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(251),
    [207] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(249),
    [209] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(249),
    [211] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(244),
    [213] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(243),
    [215] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(243),
    [217] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(279),
    [219] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(279),
    [221] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(234),
    [223] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(633),
    [225] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(233),
    [227] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(294),
    [229] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(577),
    [231] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(564),
    [233] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(600),
    [235] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(563),
    [237] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(516),
    [239] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(514),
    [241] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(512),
    [243] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(54),
    [245] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(636),
    [247] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(632),
    [249] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(342),
    [251] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(629),
    [253] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(628),
    [255] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(627),
    [257] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(626),
    [259] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(62),
    [261] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(624),
    [263] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(58),
    [265] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(497),
    [267] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(16),
    [269] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(335),
    [271] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(160),
    [273] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(508),
    [275] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(373),
    [277] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(167),
    [279] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(498),
    [281] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(517),
    [283] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(546),
    [285] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(573),
    [287] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(252),
    [290] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(254),
    [293] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(201),
    [296] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(201),
    [299] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(257),
    [302] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(289),
    [305] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(566),
    [308] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(251),
    [311] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(249),
    [314] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(249),
    [317] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(244),
    [320] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(243),
    [323] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(243),
    [326] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(279),
    [329] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(279),
    [332] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(234),
    [335] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(633),
    [338] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(233),
    [341] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(294),
    [344] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(577),
    [347] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(564),
    [350] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(600),
    [353] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    [355] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(516),
    [358] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(514),
    [361] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(512),
    [364] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(54),
    [367] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(636),
    [370] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(632),
    [373] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(342),
    [376] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(629),
    [379] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(628),
    [382] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(627),
    [385] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(626),
    [388] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(62),
    [391] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(624),
    [394] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(16),
    [397] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(623),
    [400] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(335),
    [403] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(160),
    [406] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(508),
    [409] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(373),
    [412] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(167),
    [415] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(488),
    [417] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(576),
    [419] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_body, 1, 0, 0),
    [421] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(585),
    [423] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(151),
    [425] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(108),
    [427] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(151),
    [429] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(447),
    [431] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(554),
    [433] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(477),
    [435] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(131),
    [437] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(130),
    [439] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(85),
    [441] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case, 1, 0, 0),
    [443] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_case, 1, 0, 0),
    [445] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(544),
    [447] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(329),
    [449] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(620),
    [451] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_specification, 1, 0, 0),
    [453] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(600),
    [456] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    [458] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(646),
    [461] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(369),
    [464] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(638),
    [467] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(636),
    [470] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(632),
    [473] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(630),
    [476] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(342),
    [479] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(340),
    [482] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(629),
    [485] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(628),
    [488] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(627),
    [491] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(626),
    [494] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(62),
    [497] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(329),
    [500] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(624),
    [503] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(16),
    [506] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(623),
    [509] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(335),
    [512] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(334),
    [515] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(160),
    [518] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(622),
    [521] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(373),
    [524] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(620),
    [527] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(493),
    [529] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    [531] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(600),
    [534] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(646),
    [537] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(369),
    [540] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(638),
    [543] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(636),
    [546] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(632),
    [549] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(630),
    [552] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(342),
    [555] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(340),
    [558] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(629),
    [561] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(628),
    [564] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(627),
    [567] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(626),
    [570] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(62),
    [573] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(624),
    [576] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(16),
    [579] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(623),
    [582] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(335),
    [585] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(334),
    [588] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(160),
    [591] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(622),
    [594] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(373),
    [597] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(620),
    [600] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_specification, 2, 0, 0),
    [602] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(631),
    [604] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(469),
    [606] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(421),
    [608] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(351),
    [610] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(486),
    [612] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(582),
    [614] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(579),
    [616] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(481),
    [618] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(480),
    [620] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(623),
    [622] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(399),
    [624] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(446),
    [626] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(435),
    [628] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(442),
    [630] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(252),
    [633] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(254),
    [636] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(201),
    [639] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(201),
    [642] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(257),
    [645] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(582),
    [648] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(579),
    [651] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(251),
    [654] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(249),
    [657] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(249),
    [660] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(244),
    [663] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(243),
    [666] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(243),
    [669] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(279),
    [672] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(279),
    [675] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(234),
    [678] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(633),
    [681] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(233),
    [684] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(481),
    [687] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(577),
    [690] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    [692] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(626),
    [695] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(62),
    [698] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(16),
    [701] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(623),
    [704] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(167),
    [707] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(374),
    [709] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(463),
    [711] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(589),
    [713] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(252),
    [716] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(254),
    [719] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(201),
    [722] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(201),
    [725] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(257),
    [728] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(289),
    [731] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(566),
    [734] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(251),
    [737] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(249),
    [740] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(249),
    [743] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(244),
    [746] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(243),
    [749] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(243),
    [752] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(279),
    [755] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(279),
    [758] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(234),
    [761] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(633),
    [764] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(233),
    [767] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(294),
    [770] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(577),
    [773] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(564),
    [776] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    [778] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(351),
    [781] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(167),
    [784] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(574),
    [786] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_init_dcl, 7, 0, 0),
    [788] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_init_dcl, 7, 0, 0),
    [790] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 1, 0, 0),
    [792] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_value_def_repeat1, 1, 0, 0),
    [794] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_export, 2, 0, 0),
    [796] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_export, 2, 0, 0),
    [798] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_init_dcl, 6, 0, 0),
    [800] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_init_dcl, 6, 0, 0),
    [802] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_state_member, 4, 0, 0),
    [804] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_state_member, 4, 0, 0),
    [806] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_init_dcl, 5, 0, 0),
    [808] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_init_dcl, 5, 0, 0),
    [810] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(460),
    [812] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(473),
    [814] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(61),
    [816] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_value_element, 1, 0, 0),
    [818] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_element, 1, 0, 0),
    [820] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(260),
    [822] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(95),
    [824] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 1, 0, 0),
    [826] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 1, 0, 0),
    [828] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_case_label, 2, 0, 0),
    [830] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case_label, 2, 0, 0),
    [832] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_case_label, 3, 0, 0),
    [834] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case_label, 3, 0, 0),
    [836] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_interface_def_repeat1, 2, 0, 0),
    [838] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2, 0, 0),
    [840] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(351),
    [843] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_body, 1, 0, 0),
    [845] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_body, 1, 0, 0),
    [847] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_scoped_name, 1, 0, 0),
    [849] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_scoped_name, 1, 0, 0),
    [851] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_scoped_name, 2, 0, 0),
    [853] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_scoped_name, 2, 0, 0),
    [855] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_appl, 2, 0, 0),
    [857] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_appl, 2, 0, 0),
    [859] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(88),
    [861] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 5, 0, 6),
    [863] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 5, 0, 6),
    [865] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 3, 0, 3),
    [867] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 3, 0, 3),
    [869] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_scoped_name, 3, 0, 0),
    [871] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_scoped_name, 3, 0, 0),
    [873] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 1, 0, 0),
    [875] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 1, 0, 0),
    [877] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 1, 0, 0),
    [879] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 1, 0, 0),
    [881] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_member, 5, 0, 0),
    [883] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_member, 5, 0, 0),
    [885] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_member, 3, 0, 0),
    [887] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_member, 3, 0, 0),
    [889] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 4, 0, 3),
    [891] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 4, 0, 3),
    [893] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 4, 0, 6),
    [895] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 4, 0, 6),
    [897] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_body, 2, 0, 0),
    [899] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_body, 2, 0, 0),
    [901] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_appl, 5, 0, 0),
    [903] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_appl, 5, 0, 0),
    [905] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_interface_def_repeat1, 1, 0, 0),
    [907] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 1, 0, 0),
    [909] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_param_attribute, 1, 0, 0),
    [911] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_param_attribute, 1, 0, 0),
    [913] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(621),
    [915] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(144),
    [917] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2, 0, 0),
    [919] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_specification_repeat1, 2, 0, 0),
    SHIFT_REPEAT(366),
    [922] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_specification_repeat1, 2, 0, 0),
    [924] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym__definition, 1, 0, 0),
    [926] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym__definition, 1, 0, 0),
    [928] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_predefine, 2, 0, 0),
    [930] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_predefine, 2, 0, 0),
    [932] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym__definition, 2, 0, 0),
    [934] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym__definition, 2, 0, 0),
    [936] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(252),
    [938] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(254),
    [940] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(257),
    [942] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(539),
    [944] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(251),
    [946] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(244),
    [948] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_tpl_definition, 2, 0, 0),
    [950] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_tpl_definition, 2, 0, 0),
    [952] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_preproc_call, 2, 0, 1),
    [954] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_preproc_call, 2, 0, 1),
    [956] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 1, 0, 0),
    [958] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_specification_repeat1, 1, 0, 0),
    [960] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_preproc_call, 3, 0, 2),
    [962] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_preproc_call, 3, 0, 2),
    [964] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 1, 0, 0),
    [966] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 1, 0, 0),
    [968] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_tpl_definition, 1, 0, 0),
    [970] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_tpl_definition, 1, 0, 0),
    [972] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 1, 0, 0),
    [974] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_specification_repeat2, 1, 0, 0),
    [976] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(535),
    [978] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 1, 0, 0),
    [980] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 1, 0, 0),
    [982] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 2, 0, 0),
    [984] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 2, 0, 0),
    [986] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_add_expr, 1, 0, 0),
    [988] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_add_expr, 1, 0, 0),
    [990] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(122),
    [992] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(122),
    [994] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_char_literal, 3, 0, 4),
    [996] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_char_literal, 3, 0, 4),
    [998] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 3, 0, 0),
    [1000] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 3, 0, 0),
    [1002] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_add_expr, 3, 0, 0),
    [1004] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_add_expr, 3, 0, 0),
    [1006] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_literal, 1, 0, 0),
    [1008] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_literal, 1, 0, 0),
    [1010] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_boolean_literal, 1, 0, 0),
    [1012] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_boolean_literal, 1, 0, 0),
    [1014] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_string_literal, 4, 0, 0),
    [1016] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_literal, 4, 0, 0),
    [1018] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 4, 0, 0),
    [1020] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 4, 0, 0),
    [1022] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_char_literal, 4, 0, 7),
    [1024] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_char_literal, 4, 0, 7),
    [1026] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_mult_expr, 3, 0, 0),
    [1028] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_mult_expr, 3, 0, 0),
    [1030] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_mult_expr, 1, 0, 0),
    [1032] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_mult_expr, 1, 0, 0),
    [1034] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_string_literal, 3, 0, 0),
    [1036] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_literal, 3, 0, 0),
    [1038] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(106),
    [1040] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_shift_expr, 1, 0, 0),
    [1042] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_shift_expr, 1, 0, 0),
    [1044] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(121),
    [1046] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_simple_type_spec, 1, 0, 0),
    [1048] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_simple_type_spec, 1, 0, 0),
    [1050] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(494),
    [1052] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(512),
    [1054] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(54),
    [1056] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(215),
    [1058] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(214),
    [1060] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_shift_expr, 3, 0, 0),
    [1062] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_shift_expr, 3, 0, 0),
    [1064] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(100),
    [1066] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_component_body, 1, 0, 0),
    [1068] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_component_body_repeat1, 2, 0, 0),
    [1070] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_component_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(512),
    [1073] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_component_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(54),
    [1076] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_component_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(215),
    [1079] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_component_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(214),
    [1082] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_and_expr, 3, 0, 0),
    [1084] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_and_expr, 3, 0, 0),
    [1086] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(120),
    [1088] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_and_expr, 1, 0, 0),
    [1090] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_and_expr, 1, 0, 0),
    [1092] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(545),
    [1094] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(543),
    [1096] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xor_expr, 1, 0, 0),
    [1098] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(119),
    [1100] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_operator, 1, 0, 0),
    [1102] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_operator, 1, 0, 0),
    [1104] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xor_expr, 3, 0, 0),
    [1106] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(342),
    [1109] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(449),
    [1111] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_declarator, 1, 0, 0),
    [1113] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(450),
    [1115] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(451),
    [1117] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(89),
    [1119] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_or_expr, 3, 0, 0),
    [1121] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(118),
    [1123] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_or_expr, 1, 0, 0),
    [1125] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_simple_declarator, 1, 0, 0),
    [1127] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(236),
    [1129] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(82),
    [1131] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(82),
    [1133] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(558),
    [1135] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_expr, 1, 0, 0),
    [1137] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(117),
    [1139] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 2, 0, 0),
    [1141] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 2, 0, 0),
    SHIFT_REPEAT(96),
    [1144] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(96),
    [1146] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(419),
    [1148] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(547),
    [1150] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(102),
    [1152] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(394),
    [1154] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(378),
    [1156] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(440),
    [1158] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(436),
    [1160] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2, 0, 0),
    [1162] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(547),
    [1165] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(102),
    [1168] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_array_declarator, 2, 0, 0),
    [1170] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(392),
    [1172] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(354),
    [1174] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(459),
    [1176] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(441),
    [1178] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(461),
    [1180] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_component_export, 2, 0, 0),
    [1182] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(448),
    [1184] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(483),
    [1186] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(165),
    [1188] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(452),
    [1190] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_component_body_repeat1, 1, 0, 0),
    [1192] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(387),
    [1194] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_readonly_attr_declarator, 1, 0, 0),
    [1196] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(504),
    [1198] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_header, 2, 0, 0),
    [1200] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(197),
    [1202] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_forward_dcl, 2, 0, 0),
    [1204] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(222),
    [1206] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(406),
    [1208] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitset_dcl_repeat1, 2, 0, 0),
    [1210] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_bitset_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(483),
    [1213] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(230),
    [1215] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(200),
    [1217] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarators, 2, 0, 0),
    [1219] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(634),
    [1221] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(87),
    [1223] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_signed_longlong_int, 1, 0, 0),
    [1225] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_dcl, 5, 0, 0),
    [1227] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(558),
    [1229] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(282),
    [1231] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(389),
    [1233] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_declarators_repeat1, 2, 0, 0),
    SHIFT_REPEAT(200),
    [1236] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_declarators_repeat1, 2, 0, 0),
    [1238] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_component_header, 2, 0, 0),
    [1240] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(263),
    [1242] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_component_forward_dcl, 2, 0, 0),
    [1244] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_value_inheritance_spec_repeat1, 2, 0, 0),
    SHIFT_REPEAT(237),
    [1247] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_value_inheritance_spec_repeat1, 2, 0, 0),
    [1249] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_header, 2, 0, 0),
    [1251] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(246),
    [1253] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_forward_dcl, 2, 0, 0),
    [1255] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarators, 1, 0, 0),
    [1257] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(11),
    [1259] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(346),
    [1261] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(229),
    [1263] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(648),
    [1265] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(533),
    [1267] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(237),
    [1269] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_inheritance_spec, 4, 0, 0),
    [1271] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(221),
    [1273] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(167),
    [1275] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(309),
    [1277] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(52),
    [1279] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(346),
    [1282] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(85),
    [1284] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_inheritance_spec, 2, 0, 0),
    [1286] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(245),
    [1288] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_name, 1, 0, 0),
    [1290] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(640),
    [1292] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(90),
    [1294] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(354),
    [1297] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(647),
    [1299] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_integer_type, 1, 0, 0),
    [1301] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(384),
    [1303] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(97),
    [1305] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_type, 1, 0, 0),
    [1307] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_char_type, 1, 0, 0),
    [1309] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_inheritance_spec, 3, 0, 0),
    [1311] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(218),
    [1313] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_dcl, 4, 0, 0),
    [1315] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(431),
    [1317] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(55),
    [1319] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(471),
    [1321] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(30),
    [1323] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(353),
    [1325] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_forward_dcl, 2, 0, 0),
    [1327] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unsigned_longlong_int, 1, 0, 0),
    [1329] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unsigned_long_int, 1, 0, 0),
    [1331] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 1, 0, 0),
    [1333] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_fixed_array_size, 3, 0, 0),
    [1335] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unsigned_short_int, 1, 0, 0),
    [1337] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_signed_int, 1, 0, 0),
    [1339] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_signed_short_int, 1, 0, 0),
    [1341] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_signed_long_int, 1, 0, 0),
    [1343] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 2, 0, 0),
    SHIFT_REPEAT(440),
    [1346] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 2, 0, 0),
    [1348] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(379),
    [1350] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unsigned_int, 1, 0, 0),
    [1352] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(179),
    [1354] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_positive_int_const, 1, 0, 0),
    [1356] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 3, 0, 0),
    [1358] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_formal_parameters_repeat1, 2, 0, 0),
    [1360] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_formal_parameters_repeat1, 2, 0, 0),
    SHIFT_REPEAT(50),
    [1363] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_appl_params_repeat1, 2, 0, 0),
    SHIFT_REPEAT(368),
    [1366] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_annotation_appl_params_repeat1, 2, 0, 0),
    [1368] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_actual_parameters_repeat1, 2, 0, 0),
    [1370] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_actual_parameters_repeat1, 2, 0, 0),
    SHIFT_REPEAT(14),
    [1373] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_enum_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(179),
    [1376] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enum_dcl_repeat1, 2, 0, 0),
    [1378] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_forward_dcl, 2, 0, 0),
    [1380] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(521),
    [1382] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_union_forward_dcl, 2, 0, 0),
    [1384] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 5, 0, 0),
    [1386] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_actual_parameters, 1, 0, 0),
    [1388] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(14),
    [1390] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_inheritance_spec_repeat1, 2, 0, 0),
    SHIFT_REPEAT(238),
    [1393] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_inheritance_spec_repeat1, 2, 0, 0),
    [1395] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(242),
    [1397] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarators, 2, 0, 0),
    [1399] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_raises_expr, 1, 0, 0),
    [1401] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_map_type, 8, 0, 0),
    [1403] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_declarator, 2, 0, 0),
    [1405] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_name, 1, 0, 0),
    [1407] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(238),
    [1409] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_inheritance_spec, 2, 0, 0),
    [1411] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(47),
    [1413] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(25),
    [1415] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(158),
    [1417] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameters, 1, 0, 0),
    [1419] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(50),
    [1421] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_floating_pt_type, 1, 0, 0),
    [1423] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(361),
    [1425] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(518),
    [1427] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(368),
    [1429] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_appl_params, 1, 0, 0),
    [1431] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(382),
    [1433] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_in_parameter_dcls_repeat1, 2, 0, 0),
    SHIFT_REPEAT(414),
    [1436] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_in_parameter_dcls_repeat1, 2, 0, 0),
    [1438] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_init_param_dcls_repeat1, 2, 0, 0),
    SHIFT_REPEAT(424),
    [1441] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_init_param_dcls_repeat1, 2, 0, 0),
    [1443] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_inheritance_spec, 6, 0, 0),
    [1445] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(193),
    [1447] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_parameter_dcls, 1, 0, 0),
    [1449] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_inheritance_spec, 7, 0, 0),
    [1451] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_base_type_spec, 1, 0, 0),
    [1453] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(192),
    [1455] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(458),
    [1457] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_bitmask_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(192),
    [1460] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitmask_dcl_repeat1, 2, 0, 0),
    [1462] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameter_names, 1, 0, 0),
    [1464] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(603),
    [1466] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_parameter_dcls_repeat1, 2, 0, 0),
    SHIFT_REPEAT(193),
    [1469] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_parameter_dcls_repeat1, 2, 0, 0),
    [1471] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_type, 1, 0, 0),
    [1473] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_context_expr_repeat1, 2, 0, 0),
    SHIFT_REPEAT(361),
    [1476] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_context_expr_repeat1, 2, 0, 0),
    [1478] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitfield_repeat1, 2, 0, 0),
    [1480] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_bitfield_repeat1, 2, 0, 0),
    SHIFT_REPEAT(396),
    [1483] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_template_type_spec, 1, 0, 0),
    [1485] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case, 3, 0, 0),
    [1487] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(381),
    [1489] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(78),
    [1491] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(105),
    [1493] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarator, 1, 0, 0),
    [1495] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(71),
    [1497] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(414),
    [1499] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_in_parameter_dcls, 2, 0, 0),
    [1501] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_raises_expr_repeat1, 2, 0, 0),
    [1503] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(45),
    [1505] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_raises_expr_repeat1, 2, 0, 0),
    SHIFT_REPEAT(282),
    [1508] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameter_names, 2, 0, 0),
    [1510] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_formal_parameter_names_repeat1, 2, 0, 0),
    [1512] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_formal_parameter_names_repeat1, 2, 0, 0),
    SHIFT_REPEAT(603),
    [1515] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(424),
    [1517] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_init_param_dcls, 1, 0, 0),
    [1519] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(423),
    [1521] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(404),
    [1523] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(396),
    [1525] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(397),
    [1527] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 1, 0, 0),
    [1529] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(410),
    [1531] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(439),
    [1533] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(400),
    [1535] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 4, 0, 0),
    [1537] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_init_param_dcls, 2, 0, 0),
    [1539] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_parameter_dcls, 2, 0, 0),
    [1541] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_inheritance_spec, 5, 0, 0),
    [1543] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarators, 1, 0, 0),
    [1545] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_fixed_pt_type, 6, 0, 0),
    [1547] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(59),
    [1549] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(553),
    [1551] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(276),
    [1553] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_map_type, 6, 0, 0),
    [1555] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_appl_params, 2, 0, 0),
    [1557] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(43),
    [1559] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_type_spec, 1, 0, 0),
    [1561] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(639),
    [1563] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(220),
    [1565] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameters, 2, 0, 0),
    [1567] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_readonly_attr_declarator, 2, 0, 0),
    [1569] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_any_declarators_repeat1, 2, 0, 0),
    SHIFT_REPEAT(242),
    [1572] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_any_declarators_repeat1, 2, 0, 0),
    [1574] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(42),
    [1576] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(643),
    [1578] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(67),
    [1580] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_actual_parameters, 2, 0, 0),
    [1582] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_inheritance_spec, 3, 0, 0),
    [1584] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_readonly_attr_declarator_repeat1, 2, 0, 0),
    SHIFT_REPEAT(449),
    [1587] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_readonly_attr_declarator_repeat1, 2, 0, 0),
    [1589] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_in_parameter_dcls, 1, 0, 0),
    [1591] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(560),
    [1593] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_type, 4, 0, 0),
    [1595] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield_spec, 4, 0, 0),
    [1597] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitset_dcl_repeat1, 1, 0, 0),
    [1599] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(111),
    [1601] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(597),
    [1603] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(530),
    [1605] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(593),
    [1607] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(592),
    [1609] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameter, 2, 0, 0),
    [1611] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 5, 0, 0),
    [1613] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_switch_type_spec, 1, 0, 0),
    [1615] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 5, 0, 0),
    [1617] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enumerator, 2, 0, 0),
    [1619] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_raises_expr, 5, 0, 0),
    [1621] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_exception_list, 4, 0, 0),
    [1623] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_raises_expr, 4, 0, 0),
    [1625] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(181),
    [1627] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(327),
    [1629] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 5, 0, 0),
    [1631] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_in_param_dcl, 3, 0, 0),
    [1633] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_exception_list, 3, 0, 0),
    [1635] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(13),
    [1637] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(76),
    [1639] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(101),
    [1641] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 5, 0, 0),
    [1643] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(26),
    [1645] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_def, 9, 0, 0),
    [1647] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(292),
    [1649] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitfield_repeat1, 1, 0, 0),
    [1651] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield, 2, 0, 0),
    [1653] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield_spec, 6, 0, 0),
    [1655] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 8, 0, 8),
    [1657] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 8, 0, 0),
    [1659] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_type, 1, 0, 0),
    [1661] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(364),
    [1663] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(109),
    [1665] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield, 3, 0, 0),
    [1667] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_init_param_dcl, 3, 0, 0),
    [1669] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 6, 0, 0),
    [1671] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_param_dcl, 3, 0, 0),
    [1673] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 6, 0, 0),
    [1675] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_type, 1, 0, 0),
    [1677] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_dcl, 6, 0, 0),
    [1679] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_oneway_dcl, 6, 0, 0),
    [1681] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_imported_scope, 1, 0, 0),
    [1683] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_appl_param, 3, 0, 0),
    [1685] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_def, 8, 0, 0),
    [1687] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(395),
    [1689] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 7, 0, 8),
    [1691] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_component_inheritance_spec, 2, 0, 0),
    [1693] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 7, 0, 0),
    [1695] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarator, 1, 0, 0),
    [1697] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_oneway_dcl, 5, 0, 0),
    [1699] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_get_excep_expr, 2, 0, 0),
    [1701] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 1, 0, 0),
    [1703] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 6, 0, 5),
    [1705] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enumerator, 1, 0, 0),
    [1707] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 6, 0, 0),
    [1709] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_modifier, 1, 0, 0),
    [1711] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 4, 0, 0),
    [1713] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 7, 0, 5),
    [1715] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(341),
    [1717] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(91),
    [1719] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(31),
    [1721] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 4, 0, 0),
    [1723] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(523),
    [1725] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(524),
    [1727] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 7, 0, 0),
    [1729] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(357),
    [1731] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 4, 0, 0),
    [1733] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_actual_parameter, 1, 0, 0),
    [1735] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_member_type, 1, 0, 0),
    [1737] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitmask_dcl_repeat1, 3, 0, 0),
    [1739] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(38),
    [1741] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(302),
    [1743] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 7, 0, 0),
    [1745] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bit_value, 1, 0, 0),
    [1747] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(49),
    [1749] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameter_type, 1, 0, 0),
    [1751] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 4, 0, 0),
    [1753] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(194),
    [1755] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 6, 0, 0),
    [1757] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(159),
    [1759] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(625),
    [1761] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_module_dcl, 4, 0, 0),
    [1763] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(371),
    [1765] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_context_expr, 3, 0, 0),
    [1767] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(642),
    [1769] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(202),
    [1771] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(164),
    [1773] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(537),
    [1775] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(79),
    [1777] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_dcl, 4, 0, 0),
    [1779] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_const_type, 1, 0, 0),
    [1781] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(344),
    [1783] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(98),
    [1785] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_default, 2, 0, 0),
    [1787] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(10),
    [1789] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_except_dcl, 4, 0, 0),
    [1791] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(70),
    [1793] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_abs_def, 7, 0, 0),
    [1795] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(172),
    [1797] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(75),
    [1799] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(571),
    [1801] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(177),
    [1803] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_template_module_dcl, 7, 0, 0),
    [1805] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_component_def, 3, 0, 0),
    [1807] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(169),
    [1809] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(110),
    [1811] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(562),
    [1813] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_def, 3, 0, 0),
    [1815] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_component_header, 3, 0, 0),
    [1817] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_header, 3, 0, 0),
    [1819] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_dcl, 1, 0, 0),
    [1821] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(465),
    [1823] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(320),
    [1825] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(128),
    [1827] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(338),
    [1829] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(542),
    [1831] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(166),
    [1833] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_set_excep_expr, 2, 0, 0),
    [1835] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_raises_expr, 2, 0, 0),
    [1837] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(51),
    [1839] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_template_module_inst, 6, 0, 0),
    [1841] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_type_spec, 1, 0, 0),
    [1843] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(415),
    [1845] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 3, 0, 0),
    [1847] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_context_expr, 4, 0, 0),
    [1849] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_header, 3, 0, 0),
    [1851] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(363),
    [1853] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(83),
    [1855] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(138),
    [1857] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(536),
    [1859] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(556),
    [1861] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_type_prefix_dcl, 3, 0, 0),
    [1863] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_type_id_dcl, 3, 0, 0),
    [1865] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(93),
    [1867] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_type_declarator, 2, 0, 0),
    [1869] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(107),
    [1871] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(134),
    [1873] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(599),
    [1875] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(57),
    [1877] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(84),
    [1879] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(132),
    [1881] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(127),
    [1883] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(6),
    [1885] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_destination_type, 1, 0, 0),
    [1887] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(398),
    [1889] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(325),
    [1891] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(598),
    [1893] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(457),
    [1895] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_template_module_dcl, 8, 0, 0),
    [1897] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(489),
    [1899] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 4, 0, 0),
    [1901] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(63),
    [1903] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(495),
    [1905] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_native_dcl, 2, 0, 0),
    [1907] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_import_dcl, 2, 0, 0),
    [1909] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(272),
    [1911] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(240),
    [1913] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(522),
    [1915] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_with_context, 2, 0, 0),
    [1917] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(135),
    [1919] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_readonly_attr_spec, 4, 0, 0),
    [1921] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_context_expr, 5, 0, 0),
    [1923] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_typedef_dcl, 2, 0, 0),
    [1925] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(216),
    [1927] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_def, 4, 0, 0),
    [1929] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(56),
    [1931] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(588),
    [1933] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(94),
    [1935] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_kind, 2, 0, 0),
    [1937] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(531),
    [1939] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(586),
    [1941] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(40),
    [1943] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_component_def, 4, 0, 0),
    [1945] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(584),
    [1947] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_abs_def, 6, 0, 0),
    [1949] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_except_dcl, 5, 0, 0),
    [1951] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(77),
    [1953] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_abs_def, 5, 0, 0),
    [1955] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(64),
    [1957] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_fixed_pt_const_type, 1, 0, 0),
    [1959] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(298),
    [1961] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(328),
    [1963] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(175),
    [1965] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 5, 0, 0),
    [1967] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(86),
    [1969] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_uses_dcl, 3, 0, 0),
    [1971] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(28),
    [1973] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_provides_dcl, 3, 0, 0),
    [1975] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_dcl, 5, 0, 0),
    [1977] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(176),
    [1979] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(44),
    [1981] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(211),
    [1983] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_kind, 2, 0, 0),
    [1985] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(605),
    [1987] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(27),
    [1989] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_element_spec, 2, 0, 0),
    [1991] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(113),
    [1993] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(239),
    [1995] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(595),
    [1997] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_spec, 3, 0, 0),
    [1999] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(142),
    [2001] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(380),
    [2003] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_component_dcl, 1, 0, 0),
    [2005] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(609),
    [2007] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(248),
    [2009] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_dcl, 5, 0, 0),
    [2011] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(548),
    [2013] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_template_module_ref, 6, 0, 0),
    [2015] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(267),
    [2017] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(4),
    [2019] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(186),
    [2021] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_dcl, 1, 0, 0),
    [2023] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(5),
    [2025] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_dcl, 1, 0, 0),
    [2027] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(209),
    [2029] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(509),
    [2031] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(104),
    [2033] = { .entry = { .count = 1, .reusable = true } },
    ACCEPT_INPUT(),
    [2035] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(103),
    [2037] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(206),
    [2039] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_anno, 1, 0, 0),
    [2041] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(567),
    [2043] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(513),
    [2045] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(583),
    [2047] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(266),
    [2049] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(241),
    [2051] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_kind, 1, 0, 0),
    [2053] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(587),
    [2055] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_module_dcl, 5, 0, 0),
    [2057] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(590),
    [2059] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(174),
    [2061] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(173),
    [2063] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(385),
    [2065] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(375),
    [2067] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_kind, 1, 0, 0),
    [2069] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(225),
    [2071] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(226),
    [2073] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(80),
    [2075] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(20),
    [2077] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(68),
    [2079] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(370),
    [2081] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameter_type, 2, 0, 0),
    [2083] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_comment, 2, 0, 0),
    [2085] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_comment, 3, 0, 0),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_idl(void) {
    static const TSLanguage language = {
        .version = LANGUAGE_VERSION,
        .symbol_count = SYMBOL_COUNT,
        .alias_count = ALIAS_COUNT,
        .token_count = TOKEN_COUNT,
        .external_token_count = EXTERNAL_TOKEN_COUNT,
        .state_count = STATE_COUNT,
        .large_state_count = LARGE_STATE_COUNT,
        .production_id_count = PRODUCTION_ID_COUNT,
        .field_count = FIELD_COUNT,
        .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
        .parse_table = &ts_parse_table[0][0],
        .small_parse_table = ts_small_parse_table,
        .small_parse_table_map = ts_small_parse_table_map,
        .parse_actions = ts_parse_actions,
        .symbol_names = ts_symbol_names,
        .field_names = ts_field_names,
        .field_map_slices = ts_field_map_slices,
        .field_map_entries = ts_field_map_entries,
        .symbol_metadata = ts_symbol_metadata,
        .public_symbol_map = ts_symbol_map,
        .alias_map = ts_non_terminal_alias_map,
        .alias_sequences = &ts_alias_sequences[0][0],
        .lex_modes = ts_lex_modes,
        .lex_fn = ts_lex,
        .primary_state_ids = ts_primary_state_ids,
    };
    return &language;
}
#ifdef __cplusplus
}
#endif
