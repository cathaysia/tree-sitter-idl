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
#define STATE_COUNT 626
#define LARGE_STATE_COUNT 17
#define SYMBOL_COUNT 286
#define ALIAS_COUNT 0
#define TOKEN_COUNT 118
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
    anon_sym_native = 109,
    anon_sym_POUNDdefine = 110,
    aux_sym_predefine_token1 = 111,
    sym_identifier = 112,
    anon_sym_SLASH_SLASH = 113,
    aux_sym_comment_token1 = 114,
    aux_sym_comment_token2 = 115,
    anon_sym_SLASH_STAR = 116,
    aux_sym_comment_token3 = 117,
    sym_specification = 118,
    sym_signed_short_int = 119,
    sym_signed_long_int = 120,
    sym_signed_longlong_int = 121,
    sym_unsigned_int = 122,
    sym_fixed_pt_const_type = 123,
    sym_integer_type = 124,
    sym_signed_int = 125,
    sym_unsigned_short_int = 126,
    sym_unsigned_long_int = 127,
    sym_unsigned_longlong_int = 128,
    sym_floating_pt_type = 129,
    sym_char_type = 130,
    sym_scoped_name = 131,
    sym_string_type = 132,
    sym_type_spec = 133,
    sym_simple_type_spec = 134,
    sym_base_type_spec = 135,
    sym_any_type = 136,
    sym_fixed_pt_type = 137,
    sym_template_type_spec = 138,
    sym_sequence_type = 139,
    sym_map_type = 140,
    sym_positive_int_const = 141,
    sym_const_expr = 142,
    sym_or_expr = 143,
    sym_xor_expr = 144,
    sym_and_expr = 145,
    sym_shift_expr = 146,
    sym_add_expr = 147,
    sym_mult_expr = 148,
    sym_unary_expr = 149,
    sym_unary_operator = 150,
    sym_literal = 151,
    sym_string_literal = 152,
    sym_char_literal = 153,
    sym_boolean_literal = 154,
    sym_preproc_call = 155,
    sym_except_dcl = 156,
    sym_interface_dcl = 157,
    sym_interface_kind = 158,
    sym_interface_forward_dcl = 159,
    sym_interface_def = 160,
    sym_interface_header = 161,
    sym_interface_inheritance_spec = 162,
    sym_interface_name = 163,
    sym_interface_body = 164,
    sym_export = 165,
    sym_op_dcl = 166,
    sym_op_type_spec = 167,
    sym_parameter_dcls = 168,
    sym_param_dcl = 169,
    sym_param_attribute = 170,
    sym_raises_expr = 171,
    sym_attr_dcl = 172,
    sym_readonly_attr_spec = 173,
    sym_readonly_attr_declarator = 174,
    sym_attr_spec = 175,
    sym_attr_declarator = 176,
    sym_attr_raises_expr = 177,
    sym_get_excep_expr = 178,
    sym_set_excep_expr = 179,
    sym_exception_list = 180,
    sym_bitset_dcl = 181,
    sym_bitfield = 182,
    sym_bitfield_spec = 183,
    sym_destination_type = 184,
    sym_bitmask_dcl = 185,
    sym_bit_value = 186,
    sym_annotation_dcl = 187,
    sym_annotation_body = 188,
    sym_annotation_member = 189,
    sym_annotation_member_type = 190,
    sym_any_const_type = 191,
    sym_annotation_appl = 192,
    sym_annotation_appl_params = 193,
    sym_annotation_appl_param = 194,
    sym_template_module_dcl = 195,
    sym_formal_parameters = 196,
    sym_formal_parameter = 197,
    sym_formal_parameter_type = 198,
    sym_tpl_definition = 199,
    sym_template_module_inst = 200,
    sym_actual_parameters = 201,
    sym_actual_parameter = 202,
    sym_template_module_ref = 203,
    sym_formal_parameter_names = 204,
    sym_value_dcl = 205,
    sym_value_def = 206,
    sym_value_kind = 207,
    sym_value_header = 208,
    sym_value_inheritance_spec = 209,
    sym_value_name = 210,
    sym_value_element = 211,
    sym_state_member = 212,
    sym_init_dcl = 213,
    sym_init_param_dcls = 214,
    sym_init_param_dcl = 215,
    sym_value_forward_dcl = 216,
    sym_typedef_dcl = 217,
    sym_type_declarator = 218,
    sym_any_declarators = 219,
    sym_any_declarator = 220,
    sym_simple_declarator = 221,
    sym_declarator = 222,
    sym_declarators = 223,
    sym_array_declarator = 224,
    sym_fixed_array_size = 225,
    sym_enum_dcl = 226,
    sym_enumerator = 227,
    sym_enum_modifier = 228,
    sym_enum_anno = 229,
    sym_union_forward_dcl = 230,
    sym_union_def = 231,
    sym_case = 232,
    sym_case_label = 233,
    sym_element_spec = 234,
    sym_switch_type_spec = 235,
    sym_type_id_dcl = 236,
    sym_type_prefix_dcl = 237,
    sym_import_dcl = 238,
    sym_imported_scope = 239,
    sym_op_oneway_dcl = 240,
    sym_in_parameter_dcls = 241,
    sym_in_param_dcl = 242,
    sym_op_with_context = 243,
    sym_context_expr = 244,
    sym_value_abs_def = 245,
    sym__definition = 246,
    sym_native_dcl = 247,
    sym_module_dcl = 248,
    sym_struct_forward_dcl = 249,
    sym_struct_def = 250,
    sym_member = 251,
    sym_default = 252,
    sym_predefine = 253,
    sym_const_dcl = 254,
    sym_const_type = 255,
    sym_comment = 256,
    aux_sym_specification_repeat1 = 257,
    aux_sym_specification_repeat2 = 258,
    aux_sym_except_dcl_repeat1 = 259,
    aux_sym_interface_def_repeat1 = 260,
    aux_sym_interface_inheritance_spec_repeat1 = 261,
    aux_sym_interface_body_repeat1 = 262,
    aux_sym_parameter_dcls_repeat1 = 263,
    aux_sym_raises_expr_repeat1 = 264,
    aux_sym_readonly_attr_declarator_repeat1 = 265,
    aux_sym_bitset_dcl_repeat1 = 266,
    aux_sym_bitfield_repeat1 = 267,
    aux_sym_bitmask_dcl_repeat1 = 268,
    aux_sym_annotation_dcl_repeat1 = 269,
    aux_sym_annotation_appl_params_repeat1 = 270,
    aux_sym_template_module_dcl_repeat1 = 271,
    aux_sym_formal_parameters_repeat1 = 272,
    aux_sym_actual_parameters_repeat1 = 273,
    aux_sym_formal_parameter_names_repeat1 = 274,
    aux_sym_value_def_repeat1 = 275,
    aux_sym_value_inheritance_spec_repeat1 = 276,
    aux_sym_init_param_dcls_repeat1 = 277,
    aux_sym_any_declarators_repeat1 = 278,
    aux_sym_declarators_repeat1 = 279,
    aux_sym_array_declarator_repeat1 = 280,
    aux_sym_enum_dcl_repeat1 = 281,
    aux_sym_enumerator_repeat1 = 282,
    aux_sym_union_def_repeat1 = 283,
    aux_sym_in_parameter_dcls_repeat1 = 284,
    aux_sym_context_expr_repeat1 = 285,
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
    [52] = 45,
    [53] = 53,
    [54] = 54,
    [55] = 55,
    [56] = 56,
    [57] = 57,
    [58] = 58,
    [59] = 59,
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
    [84] = 67,
    [85] = 69,
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
    [153] = 71,
    [154] = 65,
    [155] = 155,
    [156] = 156,
    [157] = 157,
    [158] = 158,
    [159] = 67,
    [160] = 160,
    [161] = 68,
    [162] = 80,
    [163] = 69,
    [164] = 164,
    [165] = 165,
    [166] = 166,
    [167] = 167,
    [168] = 168,
    [169] = 169,
    [170] = 170,
    [171] = 81,
    [172] = 172,
    [173] = 173,
    [174] = 174,
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
    [194] = 68,
    [195] = 195,
    [196] = 196,
    [197] = 197,
    [198] = 198,
    [199] = 199,
    [200] = 200,
    [201] = 201,
    [202] = 202,
    [203] = 203,
    [204] = 204,
    [205] = 205,
    [206] = 206,
    [207] = 207,
    [208] = 65,
    [209] = 209,
    [210] = 210,
    [211] = 211,
    [212] = 71,
    [213] = 213,
    [214] = 214,
    [215] = 215,
    [216] = 216,
    [217] = 217,
    [218] = 218,
    [219] = 219,
    [220] = 220,
    [221] = 221,
    [222] = 222,
    [223] = 223,
    [224] = 224,
    [225] = 225,
    [226] = 226,
    [227] = 227,
    [228] = 228,
    [229] = 229,
    [230] = 230,
    [231] = 69,
    [232] = 232,
    [233] = 233,
    [234] = 234,
    [235] = 235,
    [236] = 236,
    [237] = 237,
    [238] = 238,
    [239] = 239,
    [240] = 240,
    [241] = 67,
    [242] = 242,
    [243] = 243,
    [244] = 244,
    [245] = 71,
    [246] = 246,
    [247] = 247,
    [248] = 248,
    [249] = 65,
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
    [313] = 290,
    [314] = 314,
    [315] = 315,
    [316] = 316,
    [317] = 290,
    [318] = 316,
    [319] = 319,
    [320] = 320,
    [321] = 290,
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
    [346] = 346,
    [347] = 347,
    [348] = 348,
    [349] = 349,
    [350] = 350,
    [351] = 351,
    [352] = 352,
    [353] = 353,
    [354] = 354,
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
    [367] = 81,
    [368] = 368,
    [369] = 369,
    [370] = 370,
    [371] = 371,
    [372] = 372,
    [373] = 373,
    [374] = 374,
    [375] = 375,
    [376] = 376,
    [377] = 377,
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
    [391] = 80,
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
    [427] = 80,
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
    [443] = 81,
    [444] = 444,
    [445] = 215,
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
    [610] = 549,
    [611] = 543,
    [612] = 595,
    [613] = 613,
    [614] = 560,
    [615] = 615,
    [616] = 549,
    [617] = 543,
    [618] = 560,
    [619] = 619,
    [620] = 549,
    [621] = 560,
    [622] = 622,
    [623] = 623,
    [624] = 624,
    [625] = 625,
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
                ADVANCE(471);
            ADVANCE_MAP(
                '"', 546,
                '#', 155,
                '$', 531,
                '%', 540,
                '\'', 548,
                '(', 541,
                ')', 542,
                '*', 538,
                '+', 534,
                ',', 524,
                '-', 536,
                '/', 539,
                ':', 630,
                ';', 631,
                '<', 519,
                '=', 655,
                '>', 521,
                '@', 654,
                'F', 550,
                'L', 544,
                'O', 559,
                'T', 551,
                'V', 552,
                '[', 685,
            );
            if(lookahead == '\\')
                SKIP(464);
            if(lookahead == ']')
                ADVANCE(686);
            if(lookahead == '^')
                ADVANCE(530);
            if(lookahead == 'a')
                ADVANCE(560);
            if(lookahead == 'b')
                ADVANCE(566);
            if(lookahead == 'c')
                ADVANCE(553);
            if(lookahead == 'd')
                ADVANCE(563);
            if(lookahead == 'e')
                ADVANCE(569);
            if(lookahead == 'f')
                ADVANCE(554);
            if(lookahead == 'g')
                ADVANCE(565);
            if(lookahead == 'i')
                ADVANCE(568);
            if(lookahead == 'l')
                ADVANCE(570);
            if(lookahead == 'm')
                ADVANCE(555);
            if(lookahead == 'n')
                ADVANCE(557);
            if(lookahead == 'o')
                ADVANCE(562);
            if(lookahead == 'p')
                ADVANCE(571);
            if(lookahead == 'r')
                ADVANCE(556);
            if(lookahead == 's')
                ADVANCE(564);
            if(lookahead == 't')
                ADVANCE(572);
            if(lookahead == 'u')
                ADVANCE(567);
            if(lookahead == 'v')
                ADVANCE(558);
            if(lookahead == 'w')
                ADVANCE(561);
            if(lookahead == '{')
                ADVANCE(622);
            if(lookahead == '|')
                ADVANCE(529);
            if(lookahead == '}')
                ADVANCE(623);
            if(lookahead == '~')
                ADVANCE(543);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(0);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= '_') ||
               ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(549);
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
                ADVANCE(982);
            if(lookahead == '\r')
                ADVANCE(37);
            if(lookahead == '(')
                ADVANCE(541);
            if(lookahead == '/')
                ADVANCE(65);
            if(lookahead == ':')
                ADVANCE(93);
            if(lookahead == '@')
                ADVANCE(653);
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
                ADVANCE(986);
            if(lookahead == '\r')
                ADVANCE(983);
            if(lookahead == '\\')
                ADVANCE(984);
            if(lookahead != 0)
                ADVANCE(987);
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
                ADVANCE(607);
            if(lookahead == '\r')
                ADVANCE(46);
            if(lookahead == '/')
                ADVANCE(617);
            if(lookahead == '\\')
                ADVANCE(614);
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                SKIP(84);
            if(lookahead != 0)
                ADVANCE(618);
            END_STATE();
        case 44:
            if(lookahead == '\n')
                ADVANCE(607);
            if(lookahead == '\r')
                ADVANCE(45);
            if(lookahead == '/')
                ADVANCE(65);
            if(lookahead == '\\')
                SKIP(48);
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                SKIP(81);
            END_STATE();
        case 45:
            if(lookahead == '\n')
                ADVANCE(607);
            if(lookahead == '/')
                ADVANCE(65);
            if(lookahead == '\\')
                SKIP(48);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(81);
            END_STATE();
        case 46:
            if(lookahead == '\n')
                ADVANCE(607);
            if(lookahead == '/')
                ADVANCE(617);
            if(lookahead == '\\')
                ADVANCE(614);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(84);
            if(lookahead != 0)
                ADVANCE(618);
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
                ADVANCE(993);
            if(lookahead != 0)
                ADVANCE(67);
            END_STATE();
        case 50:
            if(lookahead == '\n')
                ADVANCE(66);
            if(lookahead == '*')
                ADVANCE(993);
            if(lookahead != 0)
                ADVANCE(67);
            END_STATE();
        case 51:
            if(lookahead == '\n')
                SKIP(82);
            END_STATE();
        case 52:
            if(lookahead == '\n')
                SKIP(82);
            if(lookahead == '\r')
                SKIP(51);
            END_STATE();
        case 53:
            if(lookahead == '\n')
                SKIP(83);
            END_STATE();
        case 54:
            if(lookahead == '\n')
                SKIP(83);
            if(lookahead == '\r')
                SKIP(53);
            END_STATE();
        case 55:
            if(lookahead == '\r')
                ADVANCE(988);
            if(lookahead == '\\')
                ADVANCE(984);
            if(lookahead != 0)
                ADVANCE(987);
            END_STATE();
        case 56:
            if(lookahead == ' ')
                ADVANCE(279);
            END_STATE();
        case 57:
            ADVANCE_MAP(
                '"', 546,
                '$', 531,
                '%', 540,
                '(', 541,
                ')', 542,
                '*', 538,
                '+', 534,
                ',', 524,
                '-', 536,
                '/', 539,
                ':', 630,
                ';', 631,
                '<', 519,
                '>', 521,
                '@', 653,
                'L', 544,
            );
            if(lookahead == '\\')
                SKIP(22);
            if(lookahead == ']')
                ADVANCE(686);
            if(lookahead == '^')
                ADVANCE(530);
            if(lookahead == 'a')
                ADVANCE(133);
            if(lookahead == 'b')
                ADVANCE(250);
            if(lookahead == 'i')
                ADVANCE(316);
            if(lookahead == 'l')
                ADVANCE(332);
            if(lookahead == 's')
                ADVANCE(411);
            if(lookahead == '{')
                ADVANCE(622);
            if(lookahead == '|')
                ADVANCE(529);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(57);
            END_STATE();
        case 58:
            ADVANCE_MAP(
                '"', 546,
                '\'', 548,
                '(', 541,
                '+', 535,
                '-', 537,
                '.', 457,
                '/', 65,
                '0', 584,
                ':', 93,
                'F', 724,
                'L', 545,
                'O', 754,
                'T', 729,
                'V', 732,
            );
            if(lookahead == '\\')
                SKIP(6);
            if(lookahead == 'a')
                ADVANCE(864);
            if(lookahead == 'b')
                ADVANCE(885);
            if(lookahead == 'c')
                ADVANCE(825);
            if(lookahead == 'd')
                ADVANCE(881);
            if(lookahead == 'f')
                ADVANCE(828);
            if(lookahead == 'i')
                ADVANCE(868);
            if(lookahead == 'l')
                ADVANCE(883);
            if(lookahead == 'm')
                ADVANCE(736);
            if(lookahead == 'o')
                ADVANCE(766);
            if(lookahead == 's')
                ADVANCE(783);
            if(lookahead == 'u')
                ADVANCE(836);
            if(lookahead == 'w')
                ADVANCE(760);
            if(lookahead == '~')
                ADVANCE(543);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(58);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(588);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 59:
            ADVANCE_MAP(
                '"', 546,
                '\'', 548,
                '(', 541,
                '+', 535,
                '-', 537,
                '.', 457,
                '/', 65,
                '0', 584,
                ':', 93,
                'F', 724,
                'L', 545,
                'T', 729,
            );
            if(lookahead == '\\')
                SKIP(24);
            if(lookahead == '~')
                ADVANCE(543);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(59);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(588);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 60:
            if(lookahead == '"')
                ADVANCE(546);
            if(lookahead == '/')
                ADVANCE(65);
            if(lookahead == ':')
                ADVANCE(93);
            if(lookahead == 'L')
                ADVANCE(545);
            if(lookahead == '\\')
                SKIP(28);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(60);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 61:
            if(lookahead == '$')
                ADVANCE(531);
            if(lookahead == ')')
                ADVANCE(542);
            if(lookahead == ',')
                ADVANCE(524);
            if(lookahead == '/')
                ADVANCE(65);
            if(lookahead == ':')
                ADVANCE(629);
            if(lookahead == ';')
                ADVANCE(631);
            if(lookahead == '>')
                ADVANCE(520);
            if(lookahead == '\\')
                SKIP(26);
            if(lookahead == ']')
                ADVANCE(686);
            if(lookahead == '^')
                ADVANCE(530);
            if(lookahead == 'i')
                ADVANCE(290);
            if(lookahead == 'o')
                ADVANCE(431);
            if(lookahead == '|')
                ADVANCE(529);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(61);
            END_STATE();
        case 62:
            ADVANCE_MAP(
                '(', 541,
                ')', 542,
                ',', 524,
                '/', 65,
                ':', 93,
                ';', 631,
                '<', 518,
                '>', 520,
                '@', 653,
            );
            if(lookahead == '\\')
                SKIP(30);
            if(lookahead == '}')
                ADVANCE(623);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(62);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 63:
            ADVANCE_MAP(
                '(', 541,
                ',', 524,
                '/', 65,
                ':', 93,
                '>', 520,
                '@', 653,
                'O', 754,
                'V', 732,
            );
            if(lookahead == '\\')
                SKIP(12);
            if(lookahead == 'a')
                ADVANCE(864);
            if(lookahead == 'b')
                ADVANCE(885);
            if(lookahead == 'c')
                ADVANCE(825);
            if(lookahead == 'd')
                ADVANCE(881);
            if(lookahead == 'f')
                ADVANCE(828);
            if(lookahead == 'i')
                ADVANCE(868);
            if(lookahead == 'l')
                ADVANCE(883);
            if(lookahead == 'm')
                ADVANCE(736);
            if(lookahead == 'o')
                ADVANCE(766);
            if(lookahead == 's')
                ADVANCE(783);
            if(lookahead == 'u')
                ADVANCE(836);
            if(lookahead == 'w')
                ADVANCE(760);
            if(lookahead == '}')
                ADVANCE(623);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(63);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 64:
            if(lookahead == ')')
                ADVANCE(542);
            if(lookahead == '/')
                ADVANCE(65);
            if(lookahead == '\\')
                SKIP(39);
            if(lookahead == 'i')
                ADVANCE(296);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(64);
            END_STATE();
        case 65:
            if(lookahead == '*')
                ADVANCE(989);
            if(lookahead == '/')
                ADVANCE(978);
            END_STATE();
        case 66:
            if(lookahead == '*')
                ADVANCE(993);
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
                ADVANCE(993);
            if(lookahead != 0)
                ADVANCE(67);
            END_STATE();
        case 68:
            if(lookahead == '*')
                ADVANCE(990);
            if(lookahead == '/')
                ADVANCE(979);
            if(lookahead != 0)
                ADVANCE(67);
            END_STATE();
        case 69:
            ADVANCE_MAP(
                ',', 524,
                '/', 65,
                ':', 93,
                '<', 518,
                '>', 520,
                '@', 653,
                'O', 754,
                'V', 732,
            );
            if(lookahead == '\\')
                SKIP(2);
            if(lookahead == ']')
                ADVANCE(686);
            if(lookahead == 'a')
                ADVANCE(755);
            if(lookahead == 'b')
                ADVANCE(830);
            if(lookahead == 'c')
                ADVANCE(823);
            if(lookahead == 'd')
                ADVANCE(881);
            if(lookahead == 'e')
                ADVANCE(866);
            if(lookahead == 'f')
                ADVANCE(735);
            if(lookahead == 'i')
                ADVANCE(855);
            if(lookahead == 'l')
                ADVANCE(883);
            if(lookahead == 'm')
                ADVANCE(736);
            if(lookahead == 'n')
                ADVANCE(741);
            if(lookahead == 'o')
                ADVANCE(765);
            if(lookahead == 'p')
                ADVANCE(903);
            if(lookahead == 'r')
                ADVANCE(803);
            if(lookahead == 's')
                ADVANCE(781);
            if(lookahead == 't')
                ADVANCE(971);
            if(lookahead == 'u')
                ADVANCE(835);
            if(lookahead == 'v')
                ADVANCE(752);
            if(lookahead == 'w')
                ADVANCE(760);
            if(lookahead == '{')
                ADVANCE(622);
            if(lookahead == '}')
                ADVANCE(623);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(69);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 70:
            if(lookahead == '.')
                ADVANCE(457);
            if(lookahead == '0')
                ADVANCE(581);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(583);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(597);
            END_STATE();
        case 71:
            if(lookahead == '/')
                ADVANCE(65);
            if(lookahead == ':')
                ADVANCE(93);
            if(lookahead == '@')
                ADVANCE(653);
            if(lookahead == 'O')
                ADVANCE(754);
            if(lookahead == 'V')
                ADVANCE(732);
            if(lookahead == '\\')
                SKIP(4);
            if(lookahead == 'a')
                ADVANCE(755);
            if(lookahead == 'b')
                ADVANCE(830);
            if(lookahead == 'c')
                ADVANCE(823);
            if(lookahead == 'd')
                ADVANCE(881);
            if(lookahead == 'e')
                ADVANCE(866);
            if(lookahead == 'f')
                ADVANCE(828);
            if(lookahead == 'i')
                ADVANCE(855);
            if(lookahead == 'l')
                ADVANCE(883);
            if(lookahead == 'm')
                ADVANCE(736);
            if(lookahead == 'n')
                ADVANCE(741);
            if(lookahead == 'o')
                ADVANCE(765);
            if(lookahead == 'r')
                ADVANCE(803);
            if(lookahead == 's')
                ADVANCE(781);
            if(lookahead == 't')
                ADVANCE(971);
            if(lookahead == 'u')
                ADVANCE(835);
            if(lookahead == 'v')
                ADVANCE(752);
            if(lookahead == 'w')
                ADVANCE(760);
            if(lookahead == '}')
                ADVANCE(623);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(71);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 72:
            if(lookahead == '/')
                ADVANCE(65);
            if(lookahead == ':')
                ADVANCE(93);
            if(lookahead == '@')
                ADVANCE(653);
            if(lookahead == 'O')
                ADVANCE(754);
            if(lookahead == 'V')
                ADVANCE(732);
            if(lookahead == '\\')
                SKIP(8);
            if(lookahead == 'a')
                ADVANCE(864);
            if(lookahead == 'b')
                ADVANCE(830);
            if(lookahead == 'c')
                ADVANCE(747);
            if(lookahead == 'd')
                ADVANCE(800);
            if(lookahead == 'e')
                ADVANCE(867);
            if(lookahead == 'f')
                ADVANCE(828);
            if(lookahead == 'i')
                ADVANCE(868);
            if(lookahead == 'l')
                ADVANCE(883);
            if(lookahead == 'm')
                ADVANCE(736);
            if(lookahead == 'o')
                ADVANCE(766);
            if(lookahead == 's')
                ADVANCE(781);
            if(lookahead == 'u')
                ADVANCE(835);
            if(lookahead == 'w')
                ADVANCE(760);
            if(lookahead == '}')
                ADVANCE(623);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(72);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 73:
            if(lookahead == '/')
                ADVANCE(65);
            if(lookahead == ':')
                ADVANCE(93);
            if(lookahead == '@')
                ADVANCE(653);
            if(lookahead == 'O')
                ADVANCE(754);
            if(lookahead == 'V')
                ADVANCE(732);
            if(lookahead == '\\')
                SKIP(10);
            if(lookahead == 'a')
                ADVANCE(864);
            if(lookahead == 'b')
                ADVANCE(830);
            if(lookahead == 'c')
                ADVANCE(825);
            if(lookahead == 'd')
                ADVANCE(881);
            if(lookahead == 'e')
                ADVANCE(867);
            if(lookahead == 'f')
                ADVANCE(828);
            if(lookahead == 'i')
                ADVANCE(868);
            if(lookahead == 'l')
                ADVANCE(883);
            if(lookahead == 'm')
                ADVANCE(736);
            if(lookahead == 'o')
                ADVANCE(766);
            if(lookahead == 's')
                ADVANCE(781);
            if(lookahead == 'u')
                ADVANCE(835);
            if(lookahead == 'w')
                ADVANCE(760);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(73);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 74:
            if(lookahead == '/')
                ADVANCE(65);
            if(lookahead == ':')
                ADVANCE(93);
            if(lookahead == '@')
                ADVANCE(252);
            if(lookahead == '\\')
                SKIP(14);
            if(lookahead == 'a')
                ADVANCE(864);
            if(lookahead == 'b')
                ADVANCE(885);
            if(lookahead == 'c')
                ADVANCE(824);
            if(lookahead == 'd')
                ADVANCE(881);
            if(lookahead == 'e')
                ADVANCE(867);
            if(lookahead == 'f')
                ADVANCE(828);
            if(lookahead == 'i')
                ADVANCE(868);
            if(lookahead == 'l')
                ADVANCE(883);
            if(lookahead == 'o')
                ADVANCE(766);
            if(lookahead == 's')
                ADVANCE(783);
            if(lookahead == 't')
                ADVANCE(973);
            if(lookahead == 'u')
                ADVANCE(836);
            if(lookahead == 'w')
                ADVANCE(760);
            if(lookahead == '}')
                ADVANCE(623);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(74);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 75:
            if(lookahead == '/')
                ADVANCE(65);
            if(lookahead == ':')
                ADVANCE(93);
            if(lookahead == 'O')
                ADVANCE(754);
            if(lookahead == 'V')
                ADVANCE(732);
            if(lookahead == '\\')
                SKIP(16);
            if(lookahead == 'a')
                ADVANCE(864);
            if(lookahead == 'b')
                ADVANCE(885);
            if(lookahead == 'c')
                ADVANCE(824);
            if(lookahead == 'd')
                ADVANCE(881);
            if(lookahead == 'e')
                ADVANCE(865);
            if(lookahead == 'f')
                ADVANCE(847);
            if(lookahead == 'i')
                ADVANCE(876);
            if(lookahead == 'l')
                ADVANCE(883);
            if(lookahead == 'o')
                ADVANCE(766);
            if(lookahead == 's')
                ADVANCE(782);
            if(lookahead == 't')
                ADVANCE(974);
            if(lookahead == 'u')
                ADVANCE(835);
            if(lookahead == 'v')
                ADVANCE(753);
            if(lookahead == 'w')
                ADVANCE(761);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(75);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 76:
            if(lookahead == '/')
                ADVANCE(65);
            if(lookahead == ':')
                ADVANCE(93);
            if(lookahead == '\\')
                SKIP(18);
            if(lookahead == 'b')
                ADVANCE(885);
            if(lookahead == 'c')
                ADVANCE(825);
            if(lookahead == 'd')
                ADVANCE(881);
            if(lookahead == 'f')
                ADVANCE(828);
            if(lookahead == 'i')
                ADVANCE(868);
            if(lookahead == 'l')
                ADVANCE(883);
            if(lookahead == 'o')
                ADVANCE(766);
            if(lookahead == 's')
                ADVANCE(783);
            if(lookahead == 'u')
                ADVANCE(836);
            if(lookahead == 'w')
                ADVANCE(760);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(76);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 77:
            if(lookahead == '/')
                ADVANCE(65);
            if(lookahead == ':')
                ADVANCE(93);
            if(lookahead == '\\')
                SKIP(20);
            if(lookahead == 'b')
                ADVANCE(885);
            if(lookahead == 'c')
                ADVANCE(825);
            if(lookahead == 'i')
                ADVANCE(868);
            if(lookahead == 'l')
                ADVANCE(891);
            if(lookahead == 's')
                ADVANCE(826);
            if(lookahead == 'u')
                ADVANCE(836);
            if(lookahead == 'w')
                ADVANCE(761);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(77);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 78:
            if(lookahead == '/')
                ADVANCE(65);
            if(lookahead == ':')
                ADVANCE(93);
            if(lookahead == '\\')
                SKIP(34);
            if(lookahead == 't')
                ADVANCE(911);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(78);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 79:
            if(lookahead == '/')
                ADVANCE(65);
            if(lookahead == ':')
                ADVANCE(629);
            if(lookahead == ';')
                ADVANCE(631);
            if(lookahead == '@')
                ADVANCE(167);
            if(lookahead == '\\')
                SKIP(32);
            if(lookahead == '{')
                ADVANCE(622);
            if(lookahead == '}')
                ADVANCE(623);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(79);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 80:
            if(lookahead == '/')
                ADVANCE(65);
            if(lookahead == ';')
                ADVANCE(631);
            if(lookahead == '\\')
                SKIP(42);
            if(lookahead == 's')
                ADVANCE(965);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(80);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 81:
            if(lookahead == '/')
                ADVANCE(65);
            if(lookahead == '\\')
                SKIP(48);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(81);
            END_STATE();
        case 82:
            if(lookahead == '/')
                ADVANCE(65);
            if(lookahead == '\\')
                SKIP(52);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(82);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(549);
            END_STATE();
        case 83:
            if(lookahead == '/')
                ADVANCE(65);
            if(lookahead == '\\')
                SKIP(54);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(83);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(547);
            END_STATE();
        case 84:
            if(lookahead == '/')
                ADVANCE(617);
            if(lookahead == '\\')
                ADVANCE(614);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(84);
            if(lookahead != 0)
                ADVANCE(618);
            END_STATE();
        case 85:
            if(lookahead == '1')
                ADVANCE(91);
            if(lookahead == '3')
                ADVANCE(87);
            if(lookahead == '6')
                ADVANCE(89);
            if(lookahead == '8')
                ADVANCE(485);
            END_STATE();
        case 86:
            if(lookahead == '1')
                ADVANCE(92);
            if(lookahead == '3')
                ADVANCE(88);
            if(lookahead == '6')
                ADVANCE(90);
            if(lookahead == '8')
                ADVANCE(493);
            if(lookahead == 'e')
                ADVANCE(366);
            END_STATE();
        case 87:
            if(lookahead == '2')
                ADVANCE(499);
            END_STATE();
        case 88:
            if(lookahead == '2')
                ADVANCE(480);
            END_STATE();
        case 89:
            if(lookahead == '4')
                ADVANCE(502);
            END_STATE();
        case 90:
            if(lookahead == '4')
                ADVANCE(483);
            END_STATE();
        case 91:
            if(lookahead == '6')
                ADVANCE(496);
            END_STATE();
        case 92:
            if(lookahead == '6')
                ADVANCE(474);
            END_STATE();
        case 93:
            if(lookahead == ':')
                ADVANCE(513);
            END_STATE();
        case 94:
            if(lookahead == '<')
                ADVANCE(533);
            END_STATE();
        case 95:
            if(lookahead == 'B')
                ADVANCE(126);
            END_STATE();
        case 96:
            if(lookahead == 'E')
                ADVANCE(573);
            END_STATE();
        case 97:
            if(lookahead == 'E')
                ADVANCE(575);
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
                ADVANCE(313);
            END_STATE();
        case 102:
            if(lookahead == '_')
                ADVANCE(277);
            END_STATE();
        case 103:
            if(lookahead == '_')
                ADVANCE(281);
            END_STATE();
        case 104:
            if(lookahead == 'a')
                ADVANCE(375);
            if(lookahead == 'o')
                ADVANCE(291);
            if(lookahead == 'u')
                ADVANCE(376);
            END_STATE();
        case 105:
            if(lookahead == 'a')
                ADVANCE(449);
            END_STATE();
        case 106:
            if(lookahead == 'a')
                ADVANCE(165);
            END_STATE();
        case 107:
            if(lookahead == 'a')
                ADVANCE(368);
            END_STATE();
        case 108:
            if(lookahead == 'a')
                ADVANCE(251);
            END_STATE();
        case 109:
            if(lookahead == 'a')
                ADVANCE(408);
            END_STATE();
        case 110:
            if(lookahead == 'a')
                ADVANCE(350);
            END_STATE();
        case 111:
            if(lookahead == 'a')
                ADVANCE(288);
            END_STATE();
        case 112:
            if(lookahead == 'a')
                ADVANCE(262);
            END_STATE();
        case 113:
            if(lookahead == 'a')
                ADVANCE(369);
            END_STATE();
        case 114:
            if(lookahead == 'a')
                ADVANCE(351);
            END_STATE();
        case 115:
            if(lookahead == 'a')
                ADVANCE(430);
            END_STATE();
        case 116:
            if(lookahead == 'a')
                ADVANCE(264);
            END_STATE();
        case 117:
            if(lookahead == 'a')
                ADVANCE(263);
            END_STATE();
        case 118:
            if(lookahead == 'a')
                ADVANCE(293);
            END_STATE();
        case 119:
            if(lookahead == 'a')
                ADVANCE(388);
            END_STATE();
        case 120:
            if(lookahead == 'a')
                ADVANCE(414);
            END_STATE();
        case 121:
            if(lookahead == 'a')
                ADVANCE(289);
            END_STATE();
        case 122:
            if(lookahead == 'a')
                ADVANCE(415);
            END_STATE();
        case 123:
            if(lookahead == 'a')
                ADVANCE(436);
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
                ADVANCE(382);
            END_STATE();
        case 127:
            if(lookahead == 'a')
                ADVANCE(276);
            END_STATE();
        case 128:
            if(lookahead == 'a')
                ADVANCE(276);
            if(lookahead == 'o')
                ADVANCE(241);
            END_STATE();
        case 129:
            if(lookahead == 'a')
                ADVANCE(254);
            END_STATE();
        case 130:
            if(lookahead == 'a')
                ADVANCE(424);
            END_STATE();
        case 131:
            if(lookahead == 'a')
                ADVANCE(255);
            END_STATE();
        case 132:
            if(lookahead == 'a')
                ADVANCE(140);
            END_STATE();
        case 133:
            if(lookahead == 'b')
                ADVANCE(383);
            END_STATE();
        case 134:
            if(lookahead == 'b')
                ADVANCE(383);
            if(lookahead == 'l')
                ADVANCE(239);
            END_STATE();
        case 135:
            if(lookahead == 'b')
                ADVANCE(383);
            if(lookahead == 't')
                ADVANCE(402);
            END_STATE();
        case 136:
            if(lookahead == 'b')
                ADVANCE(268);
            END_STATE();
        case 137:
            if(lookahead == 'b')
                ADVANCE(439);
            END_STATE();
        case 138:
            if(lookahead == 'b')
                ADVANCE(270);
            END_STATE();
        case 139:
            if(lookahead == 'b')
                ADVANCE(273);
            END_STATE();
        case 140:
            if(lookahead == 'b')
                ADVANCE(274);
            END_STATE();
        case 141:
            if(lookahead == 'c')
                ADVANCE(677);
            END_STATE();
        case 142:
            if(lookahead == 'c')
                ADVANCE(230);
            END_STATE();
        case 143:
            if(lookahead == 'c')
                ADVANCE(410);
            END_STATE();
        case 144:
            if(lookahead == 'c')
                ADVANCE(194);
            END_STATE();
        case 145:
            if(lookahead == 'c')
                ADVANCE(112);
            END_STATE();
        case 146:
            if(lookahead == 'c')
                ADVANCE(112);
            if(lookahead == 'n')
                ADVANCE(221);
            END_STATE();
        case 147:
            if(lookahead == 'c')
                ADVANCE(112);
            if(lookahead == 'n')
                ADVANCE(227);
            END_STATE();
        case 148:
            if(lookahead == 'c')
                ADVANCE(421);
            END_STATE();
        case 149:
            if(lookahead == 'c')
                ADVANCE(392);
            END_STATE();
        case 150:
            if(lookahead == 'c')
                ADVANCE(395);
            END_STATE();
        case 151:
            if(lookahead == 'c')
                ADVANCE(177);
            END_STATE();
        case 152:
            if(lookahead == 'c')
                ADVANCE(398);
            END_STATE();
        case 153:
            if(lookahead == 'c')
                ADVANCE(186);
            END_STATE();
        case 154:
            if(lookahead == 'c')
                ADVANCE(120);
            END_STATE();
        case 155:
            if(lookahead == 'd')
                ADVANCE(608);
            if(lookahead == '\t' ||
               lookahead == ' ')
                ADVANCE(455);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(613);
            END_STATE();
        case 156:
            if(lookahead == 'd')
                ADVANCE(632);
            END_STATE();
        case 157:
            if(lookahead == 'd')
                ADVANCE(489);
            END_STATE();
        case 158:
            if(lookahead == 'd')
                ADVANCE(693);
            END_STATE();
        case 159:
            if(lookahead == 'd')
                ADVANCE(647);
            END_STATE();
        case 160:
            if(lookahead == 'd')
                ADVANCE(56);
            END_STATE();
        case 161:
            if(lookahead == 'd')
                ADVANCE(437);
            END_STATE();
        case 162:
            if(lookahead == 'd')
                ADVANCE(338);
            if(lookahead == 'l')
                ADVANCE(325);
            END_STATE();
        case 163:
            if(lookahead == 'd')
                ADVANCE(189);
            if(lookahead == 'i')
                ADVANCE(158);
            if(lookahead == 'n')
                ADVANCE(111);
            if(lookahead == 'p')
                ADVANCE(360);
            END_STATE();
        case 164:
            if(lookahead == 'd')
                ADVANCE(189);
            if(lookahead == 'i')
                ADVANCE(158);
            if(lookahead == 'p')
                ADVANCE(360);
            END_STATE();
        case 165:
            if(lookahead == 'd')
                ADVANCE(324);
            END_STATE();
        case 166:
            if(lookahead == 'd')
                ADVANCE(208);
            END_STATE();
        case 167:
            if(lookahead == 'd')
                ADVANCE(212);
            END_STATE();
        case 168:
            if(lookahead == 'e')
                ADVANCE(215);
            END_STATE();
        case 169:
            if(lookahead == 'e')
                ADVANCE(444);
            END_STATE();
        case 170:
            if(lookahead == 'e')
                ADVANCE(691);
            END_STATE();
        case 171:
            if(lookahead == 'e')
                ADVANCE(163);
            END_STATE();
        case 172:
            if(lookahead == 'e')
                ADVANCE(95);
            END_STATE();
        case 173:
            if(lookahead == 'e')
                ADVANCE(506);
            END_STATE();
        case 174:
            if(lookahead == 'e')
                ADVANCE(656);
            END_STATE();
        case 175:
            if(lookahead == 'e')
                ADVANCE(705);
            END_STATE();
        case 176:
            if(lookahead == 'e')
                ADVANCE(679);
            END_STATE();
        case 177:
            if(lookahead == 'e')
                ADVANCE(525);
            END_STATE();
        case 178:
            if(lookahead == 'e')
                ADVANCE(657);
            END_STATE();
        case 179:
            if(lookahead == 'e')
                ADVANCE(703);
            END_STATE();
        case 180:
            if(lookahead == 'e')
                ADVANCE(641);
            END_STATE();
        case 181:
            if(lookahead == 'e')
                ADVANCE(661);
            END_STATE();
        case 182:
            if(lookahead == 'e')
                ADVANCE(659);
            END_STATE();
        case 183:
            if(lookahead == 'e')
                ADVANCE(508);
            END_STATE();
        case 184:
            if(lookahead == 'e')
                ADVANCE(674);
            END_STATE();
        case 185:
            if(lookahead == 'e')
                ADVANCE(164);
            END_STATE();
        case 186:
            if(lookahead == 'e')
                ADVANCE(627);
            END_STATE();
        case 187:
            if(lookahead == 'e')
                ADVANCE(707);
            END_STATE();
        case 188:
            if(lookahead == 'e')
                ADVANCE(102);
            END_STATE();
        case 189:
            if(lookahead == 'e')
                ADVANCE(214);
            END_STATE();
        case 190:
            if(lookahead == 'e')
                ADVANCE(447);
            END_STATE();
        case 191:
            if(lookahead == 'e')
                ADVANCE(217);
            END_STATE();
        case 192:
            if(lookahead == 'e')
                ADVANCE(157);
            END_STATE();
        case 193:
            if(lookahead == 'e')
                ADVANCE(370);
            END_STATE();
        case 194:
            if(lookahead == 'e')
                ADVANCE(344);
            END_STATE();
        case 195:
            if(lookahead == 'e')
                ADVANCE(267);
            END_STATE();
        case 196:
            if(lookahead == 'e')
                ADVANCE(372);
            END_STATE();
        case 197:
            if(lookahead == 'e')
                ADVANCE(160);
            END_STATE();
        case 198:
            if(lookahead == 'e')
                ADVANCE(373);
            END_STATE();
        case 199:
            if(lookahead == 'e')
                ADVANCE(311);
            END_STATE();
        case 200:
            if(lookahead == 'e')
                ADVANCE(374);
            END_STATE();
        case 201:
            if(lookahead == 'e')
                ADVANCE(366);
            END_STATE();
        case 202:
            if(lookahead == 'e')
                ADVANCE(118);
            END_STATE();
        case 203:
            if(lookahead == 'e')
                ADVANCE(390);
            END_STATE();
        case 204:
            if(lookahead == 'e')
                ADVANCE(393);
            END_STATE();
        case 205:
            if(lookahead == 'e')
                ADVANCE(405);
            END_STATE();
        case 206:
            if(lookahead == 'e')
                ADVANCE(149);
            END_STATE();
        case 207:
            if(lookahead == 'e')
                ADVANCE(308);
            END_STATE();
        case 208:
            if(lookahead == 'e')
                ADVANCE(218);
            END_STATE();
        case 209:
            if(lookahead == 'e')
                ADVANCE(359);
            END_STATE();
        case 210:
            if(lookahead == 'e')
                ADVANCE(362);
            END_STATE();
        case 211:
            if(lookahead == 'e')
                ADVANCE(423);
            END_STATE();
        case 212:
            if(lookahead == 'e')
                ADVANCE(220);
            END_STATE();
        case 213:
            if(lookahead == 'e')
                ADVANCE(426);
            if(lookahead == 'h')
                ADVANCE(321);
            if(lookahead == 't')
                ADVANCE(355);
            if(lookahead == 'u')
                ADVANCE(347);
            END_STATE();
        case 214:
            if(lookahead == 'f')
                ADVANCE(683);
            END_STATE();
        case 215:
            if(lookahead == 'f')
                ADVANCE(115);
            END_STATE();
        case 216:
            if(lookahead == 'f')
                ADVANCE(248);
            if(lookahead == 'm')
                ADVANCE(113);
            if(lookahead == 's')
                ADVANCE(204);
            END_STATE();
        case 217:
            if(lookahead == 'f')
                ADVANCE(240);
            END_STATE();
        case 218:
            if(lookahead == 'f')
                ADVANCE(253);
            END_STATE();
        case 219:
            if(lookahead == 'f')
                ADVANCE(124);
            END_STATE();
        case 220:
            if(lookahead == 'f')
                ADVANCE(123);
            END_STATE();
        case 221:
            if(lookahead == 'g')
                ADVANCE(476);
            END_STATE();
        case 222:
            if(lookahead == 'g')
                ADVANCE(514);
            END_STATE();
        case 223:
            if(lookahead == 'g')
                ADVANCE(516);
            END_STATE();
        case 224:
            if(lookahead == 'g')
                ADVANCE(482);
            END_STATE();
        case 225:
            if(lookahead == 'g')
                ADVANCE(498);
            END_STATE();
        case 226:
            if(lookahead == 'g')
                ADVANCE(501);
            END_STATE();
        case 227:
            if(lookahead == 'g')
                ADVANCE(478);
            END_STATE();
        case 228:
            if(lookahead == 'g')
                ADVANCE(309);
            END_STATE();
        case 229:
            if(lookahead == 'g')
                ADVANCE(315);
            END_STATE();
        case 230:
            if(lookahead == 'h')
                ADVANCE(689);
            END_STATE();
        case 231:
            if(lookahead == 'h')
                ADVANCE(114);
            END_STATE();
        case 232:
            if(lookahead == 'h')
                ADVANCE(336);
            END_STATE();
        case 233:
            if(lookahead == 'i')
                ADVANCE(442);
            END_STATE();
        case 234:
            if(lookahead == 'i')
                ADVANCE(384);
            if(lookahead == 'o')
                ADVANCE(318);
            END_STATE();
        case 235:
            if(lookahead == 'i')
                ADVANCE(137);
            END_STATE();
        case 236:
            if(lookahead == 'i')
                ADVANCE(228);
            END_STATE();
        case 237:
            if(lookahead == 'i')
                ADVANCE(443);
            END_STATE();
        case 238:
            if(lookahead == 'i')
                ADVANCE(307);
            if(lookahead == 'n')
                ADVANCE(243);
            END_STATE();
        case 239:
            if(lookahead == 'i')
                ADVANCE(107);
            END_STATE();
        case 240:
            if(lookahead == 'i')
                ADVANCE(445);
            END_STATE();
        case 241:
            if(lookahead == 'i')
                ADVANCE(156);
            END_STATE();
        case 242:
            if(lookahead == 'i')
                ADVANCE(322);
            END_STATE();
        case 243:
            if(lookahead == 'i')
                ADVANCE(322);
            if(lookahead == 's')
                ADVANCE(236);
            END_STATE();
        case 244:
            if(lookahead == 'i')
                ADVANCE(141);
            END_STATE();
        case 245:
            if(lookahead == 'i')
                ADVANCE(298);
            if(lookahead == 'u')
                ADVANCE(150);
            END_STATE();
        case 246:
            if(lookahead == 'i')
                ADVANCE(404);
            END_STATE();
        case 247:
            if(lookahead == 'i')
                ADVANCE(301);
            END_STATE();
        case 248:
            if(lookahead == 'i')
                ADVANCE(195);
            END_STATE();
        case 249:
            if(lookahead == 'i')
                ADVANCE(401);
            END_STATE();
        case 250:
            if(lookahead == 'i')
                ADVANCE(406);
            END_STATE();
        case 251:
            if(lookahead == 'i')
                ADVANCE(379);
            END_STATE();
        case 252:
            if(lookahead == 'i')
                ADVANCE(229);
            END_STATE();
        case 253:
            if(lookahead == 'i')
                ADVANCE(310);
            END_STATE();
        case 254:
            if(lookahead == 'i')
                ADVANCE(380);
            END_STATE();
        case 255:
            if(lookahead == 'i')
                ADVANCE(381);
            END_STATE();
        case 256:
            if(lookahead == 'i')
                ADVANCE(326);
            END_STATE();
        case 257:
            if(lookahead == 'i')
                ADVANCE(419);
            END_STATE();
        case 258:
            if(lookahead == 'i')
                ADVANCE(327);
            END_STATE();
        case 259:
            if(lookahead == 'i')
                ADVANCE(425);
            END_STATE();
        case 260:
            if(lookahead == 'j')
                ADVANCE(206);
            END_STATE();
        case 261:
            if(lookahead == 'k')
                ADVANCE(648);
            END_STATE();
        case 262:
            if(lookahead == 'l')
                ADVANCE(624);
            END_STATE();
        case 263:
            if(lookahead == 'l')
                ADVANCE(687);
            END_STATE();
        case 264:
            if(lookahead == 'l')
                ADVANCE(101);
            END_STATE();
        case 265:
            if(lookahead == 'l')
                ADVANCE(432);
            END_STATE();
        case 266:
            if(lookahead == 'l')
                ADVANCE(451);
            END_STATE();
        case 267:
            if(lookahead == 'l')
                ADVANCE(159);
            END_STATE();
        case 268:
            if(lookahead == 'l')
                ADVANCE(244);
            END_STATE();
        case 269:
            if(lookahead == 'l')
                ADVANCE(202);
            END_STATE();
        case 270:
            if(lookahead == 'l')
                ADVANCE(173);
            END_STATE();
        case 271:
            if(lookahead == 'l')
                ADVANCE(174);
            END_STATE();
        case 272:
            if(lookahead == 'l')
                ADVANCE(397);
            END_STATE();
        case 273:
            if(lookahead == 'l')
                ADVANCE(183);
            END_STATE();
        case 274:
            if(lookahead == 'l')
                ADVANCE(184);
            END_STATE();
        case 275:
            if(lookahead == 'l')
                ADVANCE(427);
            END_STATE();
        case 276:
            if(lookahead == 'l')
                ADVANCE(440);
            END_STATE();
        case 277:
            if(lookahead == 'l')
                ADVANCE(257);
            END_STATE();
        case 278:
            if(lookahead == 'l')
                ADVANCE(325);
            END_STATE();
        case 279:
            if(lookahead == 'l')
                ADVANCE(328);
            if(lookahead == 's')
                ADVANCE(232);
            END_STATE();
        case 280:
            if(lookahead == 'l')
                ADVANCE(330);
            END_STATE();
        case 281:
            if(lookahead == 'l')
                ADVANCE(259);
            END_STATE();
        case 282:
            if(lookahead == 'm')
                ADVANCE(345);
            if(lookahead == 'n')
                ADVANCE(400);
            END_STATE();
        case 283:
            if(lookahead == 'm')
                ADVANCE(345);
            if(lookahead == 'n')
                ADVANCE(418);
            END_STATE();
        case 284:
            if(lookahead == 'm')
                ADVANCE(667);
            END_STATE();
        case 285:
            if(lookahead == 'm')
                ADVANCE(672);
            END_STATE();
        case 286:
            if(lookahead == 'm')
                ADVANCE(113);
            END_STATE();
        case 287:
            if(lookahead == 'm')
                ADVANCE(113);
            if(lookahead == 's')
                ADVANCE(204);
            END_STATE();
        case 288:
            if(lookahead == 'm')
                ADVANCE(178);
            END_STATE();
        case 289:
            if(lookahead == 'm')
                ADVANCE(200);
            END_STATE();
        case 290:
            if(lookahead == 'n')
                ADVANCE(635);
            END_STATE();
        case 291:
            if(lookahead == 'n')
                ADVANCE(378);
            END_STATE();
        case 292:
            if(lookahead == 'n')
                ADVANCE(665);
            END_STATE();
        case 293:
            if(lookahead == 'n')
                ADVANCE(487);
            END_STATE();
        case 294:
            if(lookahead == 'n')
                ADVANCE(620);
            END_STATE();
        case 295:
            if(lookahead == 'n')
                ADVANCE(650);
            END_STATE();
        case 296:
            if(lookahead == 'n')
                ADVANCE(634);
            END_STATE();
        case 297:
            if(lookahead == 'n')
                ADVANCE(428);
            if(lookahead == 'x')
                ADVANCE(144);
            END_STATE();
        case 298:
            if(lookahead == 'n')
                ADVANCE(222);
            END_STATE();
        case 299:
            if(lookahead == 'n')
                ADVANCE(302);
            END_STATE();
        case 300:
            if(lookahead == 'n')
                ADVANCE(154);
            END_STATE();
        case 301:
            if(lookahead == 'n')
                ADVANCE(223);
            END_STATE();
        case 302:
            if(lookahead == 'n')
                ADVANCE(329);
            END_STATE();
        case 303:
            if(lookahead == 'n')
                ADVANCE(224);
            END_STATE();
        case 304:
            if(lookahead == 'n')
                ADVANCE(225);
            END_STATE();
        case 305:
            if(lookahead == 'n')
                ADVANCE(266);
            END_STATE();
        case 306:
            if(lookahead == 'n')
                ADVANCE(226);
            END_STATE();
        case 307:
            if(lookahead == 'n')
                ADVANCE(386);
            END_STATE();
        case 308:
            if(lookahead == 'n')
                ADVANCE(416);
            END_STATE();
        case 309:
            if(lookahead == 'n')
                ADVANCE(197);
            END_STATE();
        case 310:
            if(lookahead == 'n')
                ADVANCE(187);
            END_STATE();
        case 311:
            if(lookahead == 'n')
                ADVANCE(151);
            END_STATE();
        case 312:
            if(lookahead == 'n')
                ADVANCE(242);
            END_STATE();
        case 313:
            if(lookahead == 'n')
                ADVANCE(121);
            END_STATE();
        case 314:
            if(lookahead == 'n')
                ADVANCE(377);
            END_STATE();
        case 315:
            if(lookahead == 'n')
                ADVANCE(334);
            END_STATE();
        case 316:
            if(lookahead == 'n')
                ADVANCE(418);
            END_STATE();
        case 317:
            if(lookahead == 'o')
                ADVANCE(161);
            END_STATE();
        case 318:
            if(lookahead == 'o')
                ADVANCE(269);
            END_STATE();
        case 319:
            if(lookahead == 'o')
                ADVANCE(285);
            END_STATE();
        case 320:
            if(lookahead == 'o')
                ADVANCE(119);
            END_STATE();
        case 321:
            if(lookahead == 'o')
                ADVANCE(358);
            END_STATE();
        case 322:
            if(lookahead == 'o')
                ADVANCE(292);
            END_STATE();
        case 323:
            if(lookahead == 'o')
                ADVANCE(352);
            END_STATE();
        case 324:
            if(lookahead == 'o')
                ADVANCE(305);
            END_STATE();
        case 325:
            if(lookahead == 'o')
                ADVANCE(303);
            END_STATE();
        case 326:
            if(lookahead == 'o')
                ADVANCE(294);
            END_STATE();
        case 327:
            if(lookahead == 'o')
                ADVANCE(295);
            END_STATE();
        case 328:
            if(lookahead == 'o')
                ADVANCE(304);
            END_STATE();
        case 329:
            if(lookahead == 'o')
                ADVANCE(413);
            END_STATE();
        case 330:
            if(lookahead == 'o')
                ADVANCE(306);
            END_STATE();
        case 331:
            if(lookahead == 'o')
                ADVANCE(314);
            if(lookahead == 'u')
                ADVANCE(376);
            END_STATE();
        case 332:
            if(lookahead == 'o')
                ADVANCE(145);
            END_STATE();
        case 333:
            if(lookahead == 'o')
                ADVANCE(361);
            END_STATE();
        case 334:
            if(lookahead == 'o')
                ADVANCE(365);
            END_STATE();
        case 335:
            if(lookahead == 'o')
                ADVANCE(363);
            END_STATE();
        case 336:
            if(lookahead == 'o')
                ADVANCE(364);
            END_STATE();
        case 337:
            if(lookahead == 'o')
                ADVANCE(147);
            END_STATE();
        case 338:
            if(lookahead == 'o')
                ADVANCE(441);
            END_STATE();
        case 339:
            if(lookahead == 'p')
                ADVANCE(527);
            END_STATE();
        case 340:
            if(lookahead == 'p')
                ADVANCE(171);
            END_STATE();
        case 341:
            if(lookahead == 'p')
                ADVANCE(181);
            END_STATE();
        case 342:
            if(lookahead == 'p')
                ADVANCE(182);
            END_STATE();
        case 343:
            if(lookahead == 'p')
                ADVANCE(185);
            END_STATE();
        case 344:
            if(lookahead == 'p')
                ADVANCE(412);
            END_STATE();
        case 345:
            if(lookahead == 'p')
                ADVANCE(333);
            END_STATE();
        case 346:
            if(lookahead == 'p')
                ADVANCE(335);
            END_STATE();
        case 347:
            if(lookahead == 'p')
                ADVANCE(346);
            END_STATE();
        case 348:
            if(lookahead == 'q')
                ADVANCE(434);
            if(lookahead == 't')
                ADVANCE(367);
            END_STATE();
        case 349:
            if(lookahead == 'r')
                ADVANCE(245);
            END_STATE();
        case 350:
            if(lookahead == 'r')
                ADVANCE(509);
            END_STATE();
        case 351:
            if(lookahead == 'r')
                ADVANCE(511);
            END_STATE();
        case 352:
            if(lookahead == 'r')
                ADVANCE(450);
            END_STATE();
        case 353:
            if(lookahead == 'r')
                ADVANCE(235);
            END_STATE();
        case 354:
            if(lookahead == 'r')
                ADVANCE(129);
            END_STATE();
        case 355:
            if(lookahead == 'r')
                ADVANCE(438);
            END_STATE();
        case 356:
            if(lookahead == 'r')
                ADVANCE(247);
            END_STATE();
        case 357:
            if(lookahead == 'r')
                ADVANCE(125);
            END_STATE();
        case 358:
            if(lookahead == 'r')
                ADVANCE(391);
            END_STATE();
        case 359:
            if(lookahead == 'r')
                ADVANCE(116);
            END_STATE();
        case 360:
            if(lookahead == 'r')
                ADVANCE(191);
            END_STATE();
        case 361:
            if(lookahead == 'r')
                ADVANCE(394);
            END_STATE();
        case 362:
            if(lookahead == 'r')
                ADVANCE(117);
            END_STATE();
        case 363:
            if(lookahead == 'r')
                ADVANCE(407);
            END_STATE();
        case 364:
            if(lookahead == 'r')
                ADVANCE(399);
            END_STATE();
        case 365:
            if(lookahead == 'r')
                ADVANCE(188);
            END_STATE();
        case 366:
            if(lookahead == 'r')
                ADVANCE(219);
            END_STATE();
        case 367:
            if(lookahead == 'r')
                ADVANCE(131);
            END_STATE();
        case 368:
            if(lookahead == 's')
                ADVANCE(671);
            END_STATE();
        case 369:
            if(lookahead == 's')
                ADVANCE(261);
            END_STATE();
        case 370:
            if(lookahead == 's')
                ADVANCE(638);
            END_STATE();
        case 371:
            if(lookahead == 's')
                ADVANCE(676);
            END_STATE();
        case 372:
            if(lookahead == 's')
                ADVANCE(643);
            END_STATE();
        case 373:
            if(lookahead == 's')
                ADVANCE(644);
            END_STATE();
        case 374:
            if(lookahead == 's')
                ADVANCE(688);
            END_STATE();
        case 375:
            if(lookahead == 's')
                ADVANCE(170);
            END_STATE();
        case 376:
            if(lookahead == 's')
                ADVANCE(409);
            END_STATE();
        case 377:
            if(lookahead == 's')
                ADVANCE(387);
            END_STATE();
        case 378:
            if(lookahead == 's')
                ADVANCE(387);
            if(lookahead == 't')
                ADVANCE(190);
            END_STATE();
        case 379:
            if(lookahead == 's')
                ADVANCE(193);
            END_STATE();
        case 380:
            if(lookahead == 's')
                ADVANCE(196);
            END_STATE();
        case 381:
            if(lookahead == 's')
                ADVANCE(198);
            END_STATE();
        case 382:
            if(lookahead == 's')
                ADVANCE(179);
            END_STATE();
        case 383:
            if(lookahead == 's')
                ADVANCE(422);
            END_STATE();
        case 384:
            if(lookahead == 't')
                ADVANCE(216);
            END_STATE();
        case 385:
            if(lookahead == 't')
                ADVANCE(636);
            END_STATE();
        case 386:
            if(lookahead == 't')
                ADVANCE(85);
            END_STATE();
        case 387:
            if(lookahead == 't')
                ADVANCE(669);
            END_STATE();
        case 388:
            if(lookahead == 't')
                ADVANCE(504);
            END_STATE();
        case 389:
            if(lookahead == 't')
                ADVANCE(637);
            END_STATE();
        case 390:
            if(lookahead == 't')
                ADVANCE(491);
            END_STATE();
        case 391:
            if(lookahead == 't')
                ADVANCE(472);
            END_STATE();
        case 392:
            if(lookahead == 't')
                ADVANCE(698);
            END_STATE();
        case 393:
            if(lookahead == 't')
                ADVANCE(645);
            END_STATE();
        case 394:
            if(lookahead == 't')
                ADVANCE(696);
            END_STATE();
        case 395:
            if(lookahead == 't')
                ADVANCE(663);
            END_STATE();
        case 396:
            if(lookahead == 't')
                ADVANCE(702);
            END_STATE();
        case 397:
            if(lookahead == 't')
                ADVANCE(651);
            END_STATE();
        case 398:
            if(lookahead == 't')
                ADVANCE(625);
            END_STATE();
        case 399:
            if(lookahead == 't')
                ADVANCE(495);
            END_STATE();
        case 400:
            if(lookahead == 't')
                ADVANCE(86);
            END_STATE();
        case 401:
            if(lookahead == 't')
                ADVANCE(287);
            END_STATE();
        case 402:
            if(lookahead == 't')
                ADVANCE(353);
            END_STATE();
        case 403:
            if(lookahead == 't')
                ADVANCE(452);
            END_STATE();
        case 404:
            if(lookahead == 't')
                ADVANCE(142);
            END_STATE();
        case 405:
            if(lookahead == 't')
                ADVANCE(354);
            END_STATE();
        case 406:
            if(lookahead == 't')
                ADVANCE(286);
            END_STATE();
        case 407:
            if(lookahead == 't')
                ADVANCE(371);
            END_STATE();
        case 408:
            if(lookahead == 't')
                ADVANCE(237);
            END_STATE();
        case 409:
            if(lookahead == 't')
                ADVANCE(319);
            END_STATE();
        case 410:
            if(lookahead == 't')
                ADVANCE(203);
            END_STATE();
        case 411:
            if(lookahead == 't')
                ADVANCE(355);
            if(lookahead == 'u')
                ADVANCE(347);
            END_STATE();
        case 412:
            if(lookahead == 't')
                ADVANCE(256);
            END_STATE();
        case 413:
            if(lookahead == 't')
                ADVANCE(130);
            END_STATE();
        case 414:
            if(lookahead == 't')
                ADVANCE(132);
            END_STATE();
        case 415:
            if(lookahead == 't')
                ADVANCE(176);
            END_STATE();
        case 416:
            if(lookahead == 't')
                ADVANCE(403);
            END_STATE();
        case 417:
            if(lookahead == 't')
                ADVANCE(180);
            END_STATE();
        case 418:
            if(lookahead == 't')
                ADVANCE(201);
            END_STATE();
        case 419:
            if(lookahead == 't')
                ADVANCE(209);
            END_STATE();
        case 420:
            if(lookahead == 't')
                ADVANCE(356);
            END_STATE();
        case 421:
            if(lookahead == 't')
                ADVANCE(323);
            END_STATE();
        case 422:
            if(lookahead == 't')
                ADVANCE(357);
            END_STATE();
        case 423:
            if(lookahead == 't')
                ADVANCE(453);
            END_STATE();
        case 424:
            if(lookahead == 't')
                ADVANCE(258);
            END_STATE();
        case 425:
            if(lookahead == 't')
                ADVANCE(210);
            END_STATE();
        case 426:
            if(lookahead == 't')
                ADVANCE(367);
            END_STATE();
        case 427:
            if(lookahead == 't')
                ADVANCE(103);
            END_STATE();
        case 428:
            if(lookahead == 'u')
                ADVANCE(284);
            END_STATE();
        case 429:
            if(lookahead == 'u')
                ADVANCE(300);
            END_STATE();
        case 430:
            if(lookahead == 'u')
                ADVANCE(272);
            END_STATE();
        case 431:
            if(lookahead == 'u')
                ADVANCE(385);
            END_STATE();
        case 432:
            if(lookahead == 'u')
                ADVANCE(172);
            END_STATE();
        case 433:
            if(lookahead == 'u')
                ADVANCE(389);
            END_STATE();
        case 434:
            if(lookahead == 'u')
                ADVANCE(199);
            END_STATE();
        case 435:
            if(lookahead == 'u')
                ADVANCE(138);
            END_STATE();
        case 436:
            if(lookahead == 'u')
                ADVANCE(275);
            END_STATE();
        case 437:
            if(lookahead == 'u')
                ADVANCE(271);
            END_STATE();
        case 438:
            if(lookahead == 'u')
                ADVANCE(150);
            END_STATE();
        case 439:
            if(lookahead == 'u')
                ADVANCE(417);
            END_STATE();
        case 440:
            if(lookahead == 'u')
                ADVANCE(211);
            END_STATE();
        case 441:
            if(lookahead == 'u')
                ADVANCE(139);
            END_STATE();
        case 442:
            if(lookahead == 'v')
                ADVANCE(122);
            END_STATE();
        case 443:
            if(lookahead == 'v')
                ADVANCE(175);
            END_STATE();
        case 444:
            if(lookahead == 'w')
                ADVANCE(105);
            END_STATE();
        case 445:
            if(lookahead == 'x')
                ADVANCE(695);
            END_STATE();
        case 446:
            if(lookahead == 'x')
                ADVANCE(192);
            END_STATE();
        case 447:
            if(lookahead == 'x')
                ADVANCE(396);
            END_STATE();
        case 448:
            if(lookahead == 'y')
                ADVANCE(522);
            END_STATE();
        case 449:
            if(lookahead == 'y')
                ADVANCE(700);
            END_STATE();
        case 450:
            if(lookahead == 'y')
                ADVANCE(681);
            END_STATE();
        case 451:
            if(lookahead == 'y')
                ADVANCE(639);
            END_STATE();
        case 452:
            if(lookahead == 'y')
                ADVANCE(341);
            END_STATE();
        case 453:
            if(lookahead == 'y')
                ADVANCE(342);
            END_STATE();
        case 454:
            if(lookahead == 'y')
                ADVANCE(343);
            END_STATE();
        case 455:
            if(lookahead == '\t' ||
               lookahead == ' ')
                ADVANCE(455);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(613);
            END_STATE();
        case 456:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(589);
            END_STATE();
        case 457:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(577);
            END_STATE();
        case 458:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(583);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(597);
            END_STATE();
        case 459:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(591);
            END_STATE();
        case 460:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(597);
            END_STATE();
        case 461:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(579);
            END_STATE();
        case 462:
            if(lookahead != 0 &&
               lookahead != '*')
                ADVANCE(618);
            END_STATE();
        case 463:
            if(eof)
                ADVANCE(471);
            if(lookahead == '\n')
                SKIP(0);
            END_STATE();
        case 464:
            if(eof)
                ADVANCE(471);
            if(lookahead == '\n')
                SKIP(0);
            if(lookahead == '\r')
                SKIP(463);
            END_STATE();
        case 465:
            if(eof)
                ADVANCE(471);
            if(lookahead == '\n')
                SKIP(469);
            END_STATE();
        case 466:
            if(eof)
                ADVANCE(471);
            if(lookahead == '\n')
                SKIP(469);
            if(lookahead == '\r')
                SKIP(465);
            END_STATE();
        case 467:
            if(eof)
                ADVANCE(471);
            if(lookahead == '\n')
                SKIP(470);
            END_STATE();
        case 468:
            if(eof)
                ADVANCE(471);
            if(lookahead == '\n')
                SKIP(470);
            if(lookahead == '\r')
                SKIP(467);
            END_STATE();
        case 469:
            if(eof)
                ADVANCE(471);
            ADVANCE_MAP(
                '"', 546,
                '#', 155,
                '$', 531,
                '%', 540,
                ')', 542,
                '*', 538,
                '+', 534,
                ',', 524,
                '-', 536,
                '/', 539,
                ':', 630,
                ';', 631,
                '<', 94,
                '=', 655,
                '>', 521,
                '@', 654,
                'L', 544,
                '[', 685,
            );
            if(lookahead == '\\')
                SKIP(466);
            if(lookahead == ']')
                ADVANCE(686);
            if(lookahead == '^')
                ADVANCE(530);
            if(lookahead == 'a')
                ADVANCE(135);
            if(lookahead == 'b')
                ADVANCE(234);
            if(lookahead == 'c')
                ADVANCE(104);
            if(lookahead == 'd')
                ADVANCE(168);
            if(lookahead == 'e')
                ADVANCE(297);
            if(lookahead == 'g')
                ADVANCE(205);
            if(lookahead == 'i')
                ADVANCE(282);
            if(lookahead == 'l')
                ADVANCE(337);
            if(lookahead == 'm')
                ADVANCE(317);
            if(lookahead == 'n')
                ADVANCE(109);
            if(lookahead == 'o')
                ADVANCE(143);
            if(lookahead == 'r')
                ADVANCE(108);
            if(lookahead == 's')
                ADVANCE(213);
            if(lookahead == 't')
                ADVANCE(454);
            if(lookahead == 'u')
                ADVANCE(238);
            if(lookahead == 'v')
                ADVANCE(128);
            if(lookahead == '{')
                ADVANCE(622);
            if(lookahead == '|')
                ADVANCE(529);
            if(lookahead == '}')
                ADVANCE(623);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(469);
            END_STATE();
        case 470:
            if(eof)
                ADVANCE(471);
            ADVANCE_MAP(
                '#', 166,
                '$', 531,
                '%', 540,
                ')', 542,
                '*', 538,
                '+', 534,
                ',', 524,
                '-', 536,
                '/', 539,
                ':', 629,
                ';', 631,
                '<', 94,
                '>', 521,
                '@', 654,
            );
            if(lookahead == '\\')
                SKIP(468);
            if(lookahead == ']')
                ADVANCE(686);
            if(lookahead == '^')
                ADVANCE(530);
            if(lookahead == 'a')
                ADVANCE(134);
            if(lookahead == 'b')
                ADVANCE(249);
            if(lookahead == 'c')
                ADVANCE(331);
            if(lookahead == 'e')
                ADVANCE(297);
            if(lookahead == 'i')
                ADVANCE(283);
            if(lookahead == 'l')
                ADVANCE(332);
            if(lookahead == 'm')
                ADVANCE(317);
            if(lookahead == 'n')
                ADVANCE(109);
            if(lookahead == 's')
                ADVANCE(411);
            if(lookahead == 't')
                ADVANCE(454);
            if(lookahead == 'u')
                ADVANCE(312);
            if(lookahead == 'v')
                ADVANCE(127);
            if(lookahead == '{')
                ADVANCE(622);
            if(lookahead == '|')
                ADVANCE(529);
            if(lookahead == '}')
                ADVANCE(623);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(470);
            END_STATE();
        case 471:
            ACCEPT_TOKEN(ts_builtin_sym_end);
            END_STATE();
        case 472:
            ACCEPT_TOKEN(anon_sym_short);
            END_STATE();
        case 473:
            ACCEPT_TOKEN(anon_sym_short);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 474:
            ACCEPT_TOKEN(anon_sym_int16);
            END_STATE();
        case 475:
            ACCEPT_TOKEN(anon_sym_int16);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 476:
            ACCEPT_TOKEN(anon_sym_long);
            if(lookahead == ' ')
                ADVANCE(162);
            END_STATE();
        case 477:
            ACCEPT_TOKEN(anon_sym_long);
            if(lookahead == ' ')
                ADVANCE(162);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 478:
            ACCEPT_TOKEN(anon_sym_long);
            if(lookahead == ' ')
                ADVANCE(278);
            END_STATE();
        case 479:
            ACCEPT_TOKEN(anon_sym_long);
            if(lookahead == ' ')
                ADVANCE(278);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 480:
            ACCEPT_TOKEN(anon_sym_int32);
            END_STATE();
        case 481:
            ACCEPT_TOKEN(anon_sym_int32);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 482:
            ACCEPT_TOKEN(anon_sym_longlong);
            END_STATE();
        case 483:
            ACCEPT_TOKEN(anon_sym_int64);
            END_STATE();
        case 484:
            ACCEPT_TOKEN(anon_sym_int64);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 485:
            ACCEPT_TOKEN(sym_unsigned_tiny_int);
            END_STATE();
        case 486:
            ACCEPT_TOKEN(sym_unsigned_tiny_int);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 487:
            ACCEPT_TOKEN(sym_boolean_type);
            END_STATE();
        case 488:
            ACCEPT_TOKEN(sym_boolean_type);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 489:
            ACCEPT_TOKEN(anon_sym_fixed);
            END_STATE();
        case 490:
            ACCEPT_TOKEN(anon_sym_fixed);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 491:
            ACCEPT_TOKEN(sym_octet_type);
            END_STATE();
        case 492:
            ACCEPT_TOKEN(sym_octet_type);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 493:
            ACCEPT_TOKEN(sym_signed_tiny_int);
            END_STATE();
        case 494:
            ACCEPT_TOKEN(sym_signed_tiny_int);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 495:
            ACCEPT_TOKEN(anon_sym_unsignedshort);
            END_STATE();
        case 496:
            ACCEPT_TOKEN(anon_sym_uint16);
            END_STATE();
        case 497:
            ACCEPT_TOKEN(anon_sym_uint16);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 498:
            ACCEPT_TOKEN(anon_sym_unsignedlong);
            if(lookahead == ' ')
                ADVANCE(280);
            END_STATE();
        case 499:
            ACCEPT_TOKEN(anon_sym_uint32);
            END_STATE();
        case 500:
            ACCEPT_TOKEN(anon_sym_uint32);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 501:
            ACCEPT_TOKEN(anon_sym_unsignedlonglong);
            END_STATE();
        case 502:
            ACCEPT_TOKEN(anon_sym_uint64);
            END_STATE();
        case 503:
            ACCEPT_TOKEN(anon_sym_uint64);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 504:
            ACCEPT_TOKEN(anon_sym_float);
            END_STATE();
        case 505:
            ACCEPT_TOKEN(anon_sym_float);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 506:
            ACCEPT_TOKEN(anon_sym_double);
            END_STATE();
        case 507:
            ACCEPT_TOKEN(anon_sym_double);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 508:
            ACCEPT_TOKEN(anon_sym_longdouble);
            END_STATE();
        case 509:
            ACCEPT_TOKEN(anon_sym_char);
            END_STATE();
        case 510:
            ACCEPT_TOKEN(anon_sym_char);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 511:
            ACCEPT_TOKEN(anon_sym_wchar);
            END_STATE();
        case 512:
            ACCEPT_TOKEN(anon_sym_wchar);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 513:
            ACCEPT_TOKEN(anon_sym_COLON_COLON);
            END_STATE();
        case 514:
            ACCEPT_TOKEN(anon_sym_string);
            END_STATE();
        case 515:
            ACCEPT_TOKEN(anon_sym_string);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 516:
            ACCEPT_TOKEN(anon_sym_wstring);
            END_STATE();
        case 517:
            ACCEPT_TOKEN(anon_sym_wstring);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 518:
            ACCEPT_TOKEN(anon_sym_LT);
            END_STATE();
        case 519:
            ACCEPT_TOKEN(anon_sym_LT);
            if(lookahead == '<')
                ADVANCE(533);
            END_STATE();
        case 520:
            ACCEPT_TOKEN(anon_sym_GT);
            END_STATE();
        case 521:
            ACCEPT_TOKEN(anon_sym_GT);
            if(lookahead == '>')
                ADVANCE(532);
            END_STATE();
        case 522:
            ACCEPT_TOKEN(anon_sym_any);
            END_STATE();
        case 523:
            ACCEPT_TOKEN(anon_sym_any);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 524:
            ACCEPT_TOKEN(anon_sym_COMMA);
            END_STATE();
        case 525:
            ACCEPT_TOKEN(anon_sym_sequence);
            END_STATE();
        case 526:
            ACCEPT_TOKEN(anon_sym_sequence);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 527:
            ACCEPT_TOKEN(anon_sym_map);
            END_STATE();
        case 528:
            ACCEPT_TOKEN(anon_sym_map);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 529:
            ACCEPT_TOKEN(anon_sym_PIPE);
            END_STATE();
        case 530:
            ACCEPT_TOKEN(anon_sym_CARET);
            END_STATE();
        case 531:
            ACCEPT_TOKEN(anon_sym_DOLLAR);
            END_STATE();
        case 532:
            ACCEPT_TOKEN(anon_sym_GT_GT);
            END_STATE();
        case 533:
            ACCEPT_TOKEN(anon_sym_LT_LT);
            END_STATE();
        case 534:
            ACCEPT_TOKEN(anon_sym_PLUS);
            END_STATE();
        case 535:
            ACCEPT_TOKEN(anon_sym_PLUS);
            if(lookahead == '.')
                ADVANCE(457);
            if(lookahead == '0')
                ADVANCE(585);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(589);
            END_STATE();
        case 536:
            ACCEPT_TOKEN(anon_sym_DASH);
            END_STATE();
        case 537:
            ACCEPT_TOKEN(anon_sym_DASH);
            if(lookahead == '.')
                ADVANCE(457);
            if(lookahead == '0')
                ADVANCE(585);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(589);
            END_STATE();
        case 538:
            ACCEPT_TOKEN(anon_sym_STAR);
            END_STATE();
        case 539:
            ACCEPT_TOKEN(anon_sym_SLASH);
            if(lookahead == '*')
                ADVANCE(989);
            if(lookahead == '/')
                ADVANCE(978);
            END_STATE();
        case 540:
            ACCEPT_TOKEN(anon_sym_PERCENT);
            END_STATE();
        case 541:
            ACCEPT_TOKEN(anon_sym_LPAREN);
            END_STATE();
        case 542:
            ACCEPT_TOKEN(anon_sym_RPAREN);
            END_STATE();
        case 543:
            ACCEPT_TOKEN(anon_sym_TILDE);
            END_STATE();
        case 544:
            ACCEPT_TOKEN(anon_sym_L);
            END_STATE();
        case 545:
            ACCEPT_TOKEN(anon_sym_L);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 546:
            ACCEPT_TOKEN(anon_sym_DQUOTE);
            END_STATE();
        case 547:
            ACCEPT_TOKEN(aux_sym_string_literal_token1);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(547);
            END_STATE();
        case 548:
            ACCEPT_TOKEN(anon_sym_SQUOTE);
            END_STATE();
        case 549:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            END_STATE();
        case 550:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'A')
                ADVANCE(98);
            END_STATE();
        case 551:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'R')
                ADVANCE(100);
            END_STATE();
        case 552:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(265);
            END_STATE();
        case 553:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(375);
            if(lookahead == 'h')
                ADVANCE(110);
            if(lookahead == 'o')
                ADVANCE(291);
            if(lookahead == 'u')
                ADVANCE(376);
            END_STATE();
        case 554:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(148);
            if(lookahead == 'i')
                ADVANCE(446);
            if(lookahead == 'l')
                ADVANCE(320);
            END_STATE();
        case 555:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(339);
            if(lookahead == 'o')
                ADVANCE(161);
            END_STATE();
        case 556:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(251);
            if(lookahead == 'e')
                ADVANCE(106);
            END_STATE();
        case 557:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(408);
            END_STATE();
        case 558:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(276);
            if(lookahead == 'o')
                ADVANCE(241);
            END_STATE();
        case 559:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'b')
                ADVANCE(260);
            END_STATE();
        case 560:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'b')
                ADVANCE(383);
            if(lookahead == 'l')
                ADVANCE(239);
            if(lookahead == 'n')
                ADVANCE(448);
            if(lookahead == 't')
                ADVANCE(402);
            END_STATE();
        case 561:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'c')
                ADVANCE(231);
            if(lookahead == 's')
                ADVANCE(420);
            END_STATE();
        case 562:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'c')
                ADVANCE(410);
            if(lookahead == 'n')
                ADVANCE(169);
            if(lookahead == 'u')
                ADVANCE(385);
            END_STATE();
        case 563:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'e')
                ADVANCE(215);
            if(lookahead == 'o')
                ADVANCE(435);
            END_STATE();
        case 564:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'e')
                ADVANCE(348);
            if(lookahead == 'h')
                ADVANCE(321);
            if(lookahead == 't')
                ADVANCE(349);
            if(lookahead == 'u')
                ADVANCE(347);
            if(lookahead == 'w')
                ADVANCE(246);
            END_STATE();
        case 565:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'e')
                ADVANCE(405);
            END_STATE();
        case 566:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'i')
                ADVANCE(384);
            if(lookahead == 'o')
                ADVANCE(318);
            END_STATE();
        case 567:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'i')
                ADVANCE(307);
            if(lookahead == 'n')
                ADVANCE(243);
            END_STATE();
        case 568:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'm')
                ADVANCE(345);
            if(lookahead == 'n')
                ADVANCE(635);
            END_STATE();
        case 569:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'n')
                ADVANCE(428);
            if(lookahead == 'v')
                ADVANCE(207);
            if(lookahead == 'x')
                ADVANCE(144);
            END_STATE();
        case 570:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'o')
                ADVANCE(146);
            END_STATE();
        case 571:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'r')
                ADVANCE(233);
            if(lookahead == 'u')
                ADVANCE(136);
            END_STATE();
        case 572:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'r')
                ADVANCE(429);
            if(lookahead == 'y')
                ADVANCE(340);
            END_STATE();
        case 573:
            ACCEPT_TOKEN(anon_sym_TRUE);
            END_STATE();
        case 574:
            ACCEPT_TOKEN(anon_sym_TRUE);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 575:
            ACCEPT_TOKEN(anon_sym_FALSE);
            END_STATE();
        case 576:
            ACCEPT_TOKEN(anon_sym_FALSE);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 577:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(457);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(601);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(577);
            if(set_contains(sym_number_literal_character_set_13, 13, lookahead))
                ADVANCE(606);
            END_STATE();
        case 578:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 461,
                'B', 578,
                'D', 578,
                'F', 578,
                'b', 578,
                'd', 578,
                'f', 578,
                'L', 605,
                'U', 605,
                'W', 605,
                'l', 605,
                'u', 605,
                'w', 605,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(578);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 579:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 461,
                'B', 579,
                'D', 579,
                'F', 579,
                'b', 579,
                'd', 579,
                'f', 579,
                'L', 606,
                'U', 606,
                'W', 606,
                'l', 606,
                'u', 606,
                'w', 606,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(579);
            END_STATE();
        case 580:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 458,
                '.', 602,
                'B', 594,
                'b', 594,
                'E', 592,
                'e', 592,
                'P', 600,
                'p', 600,
                'X', 976,
                'x', 976,
                'A', 595,
                'C', 595,
                'a', 595,
                'c', 595,
                'D', 595,
                'F', 595,
                'd', 595,
                'f', 595,
                'L', 605,
                'U', 605,
                'W', 605,
                'l', 605,
                'u', 605,
                'w', 605,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(582);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 581:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 458,
                '.', 602,
                'B', 596,
                'b', 596,
                'E', 593,
                'e', 593,
                'P', 601,
                'p', 601,
                'X', 460,
                'x', 460,
                'A', 597,
                'C', 597,
                'a', 597,
                'c', 597,
                'D', 597,
                'F', 597,
                'd', 597,
                'f', 597,
                'L', 606,
                'U', 606,
                'W', 606,
                'l', 606,
                'u', 606,
                'w', 606,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(583);
            END_STATE();
        case 582:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 458,
                '.', 602,
                'E', 592,
                'e', 592,
                'P', 600,
                'p', 600,
                'A', 595,
                'C', 595,
                'a', 595,
                'c', 595,
                'B', 595,
                'D', 595,
                'F', 595,
                'b', 595,
                'd', 595,
                'f', 595,
                'L', 605,
                'U', 605,
                'W', 605,
                'l', 605,
                'u', 605,
                'w', 605,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(582);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 583:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 458,
                '.', 602,
                'E', 593,
                'e', 593,
                'P', 601,
                'p', 601,
                'A', 597,
                'C', 597,
                'a', 597,
                'c', 597,
                'B', 597,
                'D', 597,
                'F', 597,
                'b', 597,
                'd', 597,
                'f', 597,
                'L', 606,
                'U', 606,
                'W', 606,
                'l', 606,
                'u', 606,
                'w', 606,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(583);
            END_STATE();
        case 584:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 456,
                '.', 602,
                'B', 598,
                'b', 598,
                'X', 714,
                'x', 714,
                'E', 600,
                'P', 600,
                'e', 600,
                'p', 600,
                'D', 605,
                'F', 605,
                'L', 605,
                'U', 605,
                'W', 605,
                'd', 605,
                'f', 605,
                'l', 605,
                'u', 605,
                'w', 605,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(588);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 585:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 456,
                '.', 602,
                'B', 599,
                'b', 599,
                'X', 70,
                'x', 70,
                'E', 601,
                'P', 601,
                'e', 601,
                'p', 601,
                'D', 606,
                'F', 606,
                'L', 606,
                'U', 606,
                'W', 606,
                'd', 606,
                'f', 606,
                'l', 606,
                'u', 606,
                'w', 606,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(589);
            END_STATE();
        case 586:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 456,
                '.', 602,
                'B', 603,
                'b', 603,
                'X', 976,
                'x', 976,
                'E', 600,
                'P', 600,
                'e', 600,
                'p', 600,
                'D', 605,
                'F', 605,
                'L', 605,
                'U', 605,
                'W', 605,
                'd', 605,
                'f', 605,
                'l', 605,
                'u', 605,
                'w', 605,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(588);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 587:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 456,
                '.', 602,
                'B', 604,
                'b', 604,
                'X', 460,
                'x', 460,
                'E', 601,
                'P', 601,
                'e', 601,
                'p', 601,
                'D', 606,
                'F', 606,
                'L', 606,
                'U', 606,
                'W', 606,
                'd', 606,
                'f', 606,
                'l', 606,
                'u', 606,
                'w', 606,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(589);
            END_STATE();
        case 588:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(456);
            if(lookahead == '.')
                ADVANCE(602);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(600);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(588);
            if(set_contains(sym_number_literal_character_set_13, 13, lookahead))
                ADVANCE(605);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 589:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(456);
            if(lookahead == '.')
                ADVANCE(602);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(601);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(589);
            if(set_contains(sym_number_literal_character_set_13, 13, lookahead))
                ADVANCE(606);
            END_STATE();
        case 590:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 459,
                '+', 461,
                '-', 461,
                'E', 590,
                'e', 590,
                'P', 601,
                'p', 601,
                'B', 591,
                'D', 591,
                'F', 591,
                'b', 591,
                'd', 591,
                'f', 591,
                'L', 606,
                'U', 606,
                'W', 606,
                'l', 606,
                'u', 606,
                'w', 606,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(591);
            END_STATE();
        case 591:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 459,
                'E', 590,
                'e', 590,
                'P', 601,
                'p', 601,
                'B', 591,
                'D', 591,
                'F', 591,
                'b', 591,
                'd', 591,
                'f', 591,
                'L', 606,
                'U', 606,
                'W', 606,
                'l', 606,
                'u', 606,
                'w', 606,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(591);
            END_STATE();
        case 592:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 460,
                '.', 602,
                '+', 461,
                '-', 461,
                'E', 592,
                'e', 592,
                'P', 600,
                'p', 600,
                'B', 595,
                'D', 595,
                'F', 595,
                'b', 595,
                'd', 595,
                'f', 595,
                'L', 605,
                'U', 605,
                'W', 605,
                'l', 605,
                'u', 605,
                'w', 605,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(595);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 593:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 460,
                '.', 602,
                '+', 461,
                '-', 461,
                'E', 593,
                'e', 593,
                'P', 601,
                'p', 601,
                'B', 597,
                'D', 597,
                'F', 597,
                'b', 597,
                'd', 597,
                'f', 597,
                'L', 606,
                'U', 606,
                'W', 606,
                'l', 606,
                'u', 606,
                'w', 606,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(597);
            END_STATE();
        case 594:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 460,
                '.', 602,
                'E', 592,
                'e', 592,
                'P', 600,
                'p', 600,
                'A', 595,
                'C', 595,
                'a', 595,
                'c', 595,
                'B', 595,
                'D', 595,
                'F', 595,
                'b', 595,
                'd', 595,
                'f', 595,
                'L', 605,
                'U', 605,
                'W', 605,
                'l', 605,
                'u', 605,
                'w', 605,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(582);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 595:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 460,
                '.', 602,
                'E', 592,
                'e', 592,
                'P', 600,
                'p', 600,
                'B', 595,
                'D', 595,
                'F', 595,
                'b', 595,
                'd', 595,
                'f', 595,
                'L', 605,
                'U', 605,
                'W', 605,
                'l', 605,
                'u', 605,
                'w', 605,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(595);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 596:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 460,
                '.', 602,
                'E', 593,
                'e', 593,
                'P', 601,
                'p', 601,
                'A', 597,
                'C', 597,
                'a', 597,
                'c', 597,
                'B', 597,
                'D', 597,
                'F', 597,
                'b', 597,
                'd', 597,
                'f', 597,
                'L', 606,
                'U', 606,
                'W', 606,
                'l', 606,
                'u', 606,
                'w', 606,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(583);
            END_STATE();
        case 597:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 460,
                '.', 602,
                'E', 593,
                'e', 593,
                'P', 601,
                'p', 601,
                'B', 597,
                'D', 597,
                'F', 597,
                'b', 597,
                'd', 597,
                'f', 597,
                'L', 606,
                'U', 606,
                'W', 606,
                'l', 606,
                'u', 606,
                'w', 606,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(597);
            END_STATE();
        case 598:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '.')
                ADVANCE(457);
            if(lookahead == '0')
                ADVANCE(586);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(588);
            if(set_contains(sym_number_literal_character_set_13, 13, lookahead))
                ADVANCE(605);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 599:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '.')
                ADVANCE(457);
            if(lookahead == '0')
                ADVANCE(587);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(589);
            if(set_contains(sym_number_literal_character_set_13, 13, lookahead))
                ADVANCE(606);
            END_STATE();
        case 600:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '+', 461,
                '-', 461,
                'B', 578,
                'D', 578,
                'F', 578,
                'b', 578,
                'd', 578,
                'f', 578,
                'L', 605,
                'U', 605,
                'W', 605,
                'l', 605,
                'u', 605,
                'w', 605,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(578);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 601:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '+', 461,
                '-', 461,
                'B', 579,
                'D', 579,
                'F', 579,
                'b', 579,
                'd', 579,
                'f', 579,
                'L', 606,
                'U', 606,
                'W', 606,
                'l', 606,
                'u', 606,
                'w', 606,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(579);
            END_STATE();
        case 602:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                'E', 590,
                'e', 590,
                'P', 601,
                'p', 601,
                'B', 591,
                'D', 591,
                'F', 591,
                'b', 591,
                'd', 591,
                'f', 591,
                'L', 606,
                'U', 606,
                'W', 606,
                'l', 606,
                'u', 606,
                'w', 606,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(591);
            END_STATE();
        case 603:
            ACCEPT_TOKEN(sym_number_literal);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(588);
            if(set_contains(sym_number_literal_character_set_13, 13, lookahead))
                ADVANCE(605);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 604:
            ACCEPT_TOKEN(sym_number_literal);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(589);
            if(set_contains(sym_number_literal_character_set_13, 13, lookahead))
                ADVANCE(606);
            END_STATE();
        case 605:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                'B', 605,
                'D', 605,
                'F', 605,
                'L', 605,
                'U', 605,
                'W', 605,
                'b', 605,
                'd', 605,
                'f', 605,
                'l', 605,
                'u', 605,
                'w', 605,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 606:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                'B', 606,
                'D', 606,
                'F', 606,
                'L', 606,
                'U', 606,
                'W', 606,
                'b', 606,
                'd', 606,
                'f', 606,
                'l', 606,
                'u', 606,
                'w', 606,
            );
            END_STATE();
        case 607:
            ACCEPT_TOKEN(aux_sym_preproc_call_token1);
            END_STATE();
        case 608:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'e')
                ADVANCE(610);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(613);
            END_STATE();
        case 609:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'e')
                ADVANCE(708);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(613);
            END_STATE();
        case 610:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'f')
                ADVANCE(611);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(613);
            END_STATE();
        case 611:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'i')
                ADVANCE(612);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(613);
            END_STATE();
        case 612:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'n')
                ADVANCE(609);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(613);
            END_STATE();
        case 613:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(613);
            END_STATE();
        case 614:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '\n')
                SKIP(84);
            if(lookahead == '\r')
                ADVANCE(615);
            if(lookahead == '/')
                ADVANCE(462);
            if(lookahead == '\\')
                ADVANCE(616);
            if(lookahead != 0)
                ADVANCE(618);
            END_STATE();
        case 615:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '\n')
                SKIP(84);
            if(lookahead == '/')
                ADVANCE(462);
            if(lookahead == '\\')
                ADVANCE(616);
            if(lookahead != 0)
                ADVANCE(618);
            END_STATE();
        case 616:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '\r')
                ADVANCE(619);
            if(lookahead == '/')
                ADVANCE(462);
            if(lookahead == '\\')
                ADVANCE(616);
            if(lookahead != 0)
                ADVANCE(618);
            END_STATE();
        case 617:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '*')
                ADVANCE(989);
            if(lookahead == '/')
                ADVANCE(978);
            if(lookahead == '\\')
                ADVANCE(616);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(618);
            END_STATE();
        case 618:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(462);
            if(lookahead == '\\')
                ADVANCE(616);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(618);
            END_STATE();
        case 619:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(462);
            if(lookahead == '\\')
                ADVANCE(616);
            if(lookahead != 0)
                ADVANCE(618);
            END_STATE();
        case 620:
            ACCEPT_TOKEN(anon_sym_exception);
            END_STATE();
        case 621:
            ACCEPT_TOKEN(anon_sym_exception);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 622:
            ACCEPT_TOKEN(anon_sym_LBRACE);
            END_STATE();
        case 623:
            ACCEPT_TOKEN(anon_sym_RBRACE);
            END_STATE();
        case 624:
            ACCEPT_TOKEN(anon_sym_local);
            END_STATE();
        case 625:
            ACCEPT_TOKEN(anon_sym_abstract);
            END_STATE();
        case 626:
            ACCEPT_TOKEN(anon_sym_abstract);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 627:
            ACCEPT_TOKEN(anon_sym_interface);
            END_STATE();
        case 628:
            ACCEPT_TOKEN(anon_sym_interface);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 629:
            ACCEPT_TOKEN(anon_sym_COLON);
            END_STATE();
        case 630:
            ACCEPT_TOKEN(anon_sym_COLON);
            if(lookahead == ':')
                ADVANCE(513);
            END_STATE();
        case 631:
            ACCEPT_TOKEN(anon_sym_SEMI);
            END_STATE();
        case 632:
            ACCEPT_TOKEN(anon_sym_void);
            END_STATE();
        case 633:
            ACCEPT_TOKEN(anon_sym_void);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 634:
            ACCEPT_TOKEN(anon_sym_in);
            END_STATE();
        case 635:
            ACCEPT_TOKEN(anon_sym_in);
            if(lookahead == 'o')
                ADVANCE(433);
            END_STATE();
        case 636:
            ACCEPT_TOKEN(anon_sym_out);
            END_STATE();
        case 637:
            ACCEPT_TOKEN(anon_sym_inout);
            END_STATE();
        case 638:
            ACCEPT_TOKEN(anon_sym_raises);
            END_STATE();
        case 639:
            ACCEPT_TOKEN(anon_sym_readonly);
            END_STATE();
        case 640:
            ACCEPT_TOKEN(anon_sym_readonly);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 641:
            ACCEPT_TOKEN(anon_sym_attribute);
            END_STATE();
        case 642:
            ACCEPT_TOKEN(anon_sym_attribute);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 643:
            ACCEPT_TOKEN(anon_sym_getraises);
            END_STATE();
        case 644:
            ACCEPT_TOKEN(anon_sym_setraises);
            END_STATE();
        case 645:
            ACCEPT_TOKEN(anon_sym_bitset);
            END_STATE();
        case 646:
            ACCEPT_TOKEN(anon_sym_bitset);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 647:
            ACCEPT_TOKEN(anon_sym_bitfield);
            END_STATE();
        case 648:
            ACCEPT_TOKEN(anon_sym_bitmask);
            END_STATE();
        case 649:
            ACCEPT_TOKEN(anon_sym_bitmask);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 650:
            ACCEPT_TOKEN(anon_sym_ATannotation);
            END_STATE();
        case 651:
            ACCEPT_TOKEN(anon_sym_default);
            END_STATE();
        case 652:
            ACCEPT_TOKEN(anon_sym_default);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 653:
            ACCEPT_TOKEN(anon_sym_AT);
            END_STATE();
        case 654:
            ACCEPT_TOKEN(anon_sym_AT);
            if(lookahead == 'a')
                ADVANCE(299);
            END_STATE();
        case 655:
            ACCEPT_TOKEN(anon_sym_EQ);
            END_STATE();
        case 656:
            ACCEPT_TOKEN(anon_sym_module);
            END_STATE();
        case 657:
            ACCEPT_TOKEN(anon_sym_typename);
            END_STATE();
        case 658:
            ACCEPT_TOKEN(anon_sym_typename);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 659:
            ACCEPT_TOKEN(anon_sym_valuetype);
            END_STATE();
        case 660:
            ACCEPT_TOKEN(anon_sym_valuetype);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 661:
            ACCEPT_TOKEN(anon_sym_eventtype);
            END_STATE();
        case 662:
            ACCEPT_TOKEN(anon_sym_eventtype);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 663:
            ACCEPT_TOKEN(anon_sym_struct);
            END_STATE();
        case 664:
            ACCEPT_TOKEN(anon_sym_struct);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 665:
            ACCEPT_TOKEN(anon_sym_union);
            END_STATE();
        case 666:
            ACCEPT_TOKEN(anon_sym_union);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 667:
            ACCEPT_TOKEN(anon_sym_enum);
            END_STATE();
        case 668:
            ACCEPT_TOKEN(anon_sym_enum);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 669:
            ACCEPT_TOKEN(anon_sym_const);
            END_STATE();
        case 670:
            ACCEPT_TOKEN(anon_sym_const);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 671:
            ACCEPT_TOKEN(anon_sym_alias);
            END_STATE();
        case 672:
            ACCEPT_TOKEN(anon_sym_custom);
            END_STATE();
        case 673:
            ACCEPT_TOKEN(anon_sym_custom);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 674:
            ACCEPT_TOKEN(anon_sym_truncatable);
            END_STATE();
        case 675:
            ACCEPT_TOKEN(anon_sym_truncatable);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 676:
            ACCEPT_TOKEN(anon_sym_supports);
            END_STATE();
        case 677:
            ACCEPT_TOKEN(anon_sym_public);
            END_STATE();
        case 678:
            ACCEPT_TOKEN(anon_sym_public);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 679:
            ACCEPT_TOKEN(anon_sym_private);
            END_STATE();
        case 680:
            ACCEPT_TOKEN(anon_sym_private);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 681:
            ACCEPT_TOKEN(anon_sym_factory);
            END_STATE();
        case 682:
            ACCEPT_TOKEN(anon_sym_factory);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 683:
            ACCEPT_TOKEN(anon_sym_typedef);
            END_STATE();
        case 684:
            ACCEPT_TOKEN(anon_sym_typedef);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 685:
            ACCEPT_TOKEN(anon_sym_LBRACK);
            END_STATE();
        case 686:
            ACCEPT_TOKEN(anon_sym_RBRACK);
            END_STATE();
        case 687:
            ACCEPT_TOKEN(anon_sym_ATdefault_literal);
            END_STATE();
        case 688:
            ACCEPT_TOKEN(anon_sym_ATignore_literal_names);
            END_STATE();
        case 689:
            ACCEPT_TOKEN(anon_sym_switch);
            END_STATE();
        case 690:
            ACCEPT_TOKEN(anon_sym_switch);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 691:
            ACCEPT_TOKEN(anon_sym_case);
            END_STATE();
        case 692:
            ACCEPT_TOKEN(anon_sym_case);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 693:
            ACCEPT_TOKEN(anon_sym_typeid);
            END_STATE();
        case 694:
            ACCEPT_TOKEN(anon_sym_typeid);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 695:
            ACCEPT_TOKEN(anon_sym_typeprefix);
            END_STATE();
        case 696:
            ACCEPT_TOKEN(anon_sym_import);
            END_STATE();
        case 697:
            ACCEPT_TOKEN(anon_sym_import);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 698:
            ACCEPT_TOKEN(sym_object_type);
            END_STATE();
        case 699:
            ACCEPT_TOKEN(sym_object_type);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 700:
            ACCEPT_TOKEN(anon_sym_oneway);
            END_STATE();
        case 701:
            ACCEPT_TOKEN(anon_sym_oneway);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 702:
            ACCEPT_TOKEN(anon_sym_context);
            END_STATE();
        case 703:
            ACCEPT_TOKEN(sym_value_base_type);
            END_STATE();
        case 704:
            ACCEPT_TOKEN(sym_value_base_type);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 705:
            ACCEPT_TOKEN(anon_sym_native);
            END_STATE();
        case 706:
            ACCEPT_TOKEN(anon_sym_native);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 707:
            ACCEPT_TOKEN(anon_sym_POUNDdefine);
            END_STATE();
        case 708:
            ACCEPT_TOKEN(anon_sym_POUNDdefine);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(613);
            END_STATE();
        case 709:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '\r')
                ADVANCE(712);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(712);
            END_STATE();
        case 710:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '*')
                ADVANCE(992);
            if(lookahead == '/')
                ADVANCE(981);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(712);
            END_STATE();
        case 711:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '/')
                ADVANCE(710);
            if(lookahead == '\\')
                ADVANCE(709);
            if(lookahead == '\t' ||
               (0x0b <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(711);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead))
                ADVANCE(712);
            END_STATE();
        case 712:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(712);
            END_STATE();
        case 713:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == ' ')
                ADVANCE(279);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 714:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '.')
                ADVANCE(457);
            if(lookahead == '0')
                ADVANCE(580);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(582);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(595);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 715:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '1')
                ADVANCE(722);
            if(lookahead == '3')
                ADVANCE(718);
            if(lookahead == '6')
                ADVANCE(720);
            if(lookahead == '8')
                ADVANCE(494);
            if(lookahead == 'e')
                ADVANCE(916);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 716:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '1')
                ADVANCE(722);
            if(lookahead == '3')
                ADVANCE(718);
            if(lookahead == '6')
                ADVANCE(720);
            if(lookahead == '8')
                ADVANCE(494);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 717:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '1')
                ADVANCE(723);
            if(lookahead == '3')
                ADVANCE(719);
            if(lookahead == '6')
                ADVANCE(721);
            if(lookahead == '8')
                ADVANCE(486);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 718:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '2')
                ADVANCE(481);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 719:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '2')
                ADVANCE(500);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 720:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '4')
                ADVANCE(484);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 721:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '4')
                ADVANCE(503);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 722:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '6')
                ADVANCE(475);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 723:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '6')
                ADVANCE(497);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 724:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'A')
                ADVANCE(728);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('B' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 725:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'B')
                ADVANCE(738);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 726:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'E')
                ADVANCE(574);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 727:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'E')
                ADVANCE(576);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 728:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'L')
                ADVANCE(730);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 729:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'R')
                ADVANCE(731);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 730:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'S')
                ADVANCE(727);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 731:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'U')
                ADVANCE(726);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 732:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(846);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 733:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(780);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 734:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(917);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 735:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(767);
            if(lookahead == 'i')
                ADVANCE(966);
            if(lookahead == 'l')
                ADVANCE(892);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 736:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(894);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 737:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(968);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 738:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(921);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 739:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(905);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 740:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(859);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 741:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(948);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 742:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(954);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 743:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(906);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 744:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(927);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 745:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(862);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 746:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(946);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 747:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(922);
            if(lookahead == 'h')
                ADVANCE(739);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 748:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(945);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 749:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(772);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 750:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(759);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 751:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(771);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 752:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(854);
            if(lookahead == 'o')
                ADVANCE(833);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 753:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(854);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 754:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(844);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 755:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(923);
            if(lookahead == 'n')
                ADVANCE(967);
            if(lookahead == 't')
                ADVANCE(937);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 756:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(849);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 757:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(850);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 758:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(960);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 759:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(852);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 760:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(827);
            if(lookahead == 's')
                ADVANCE(949);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 761:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(827);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 762:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(678);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 763:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(822);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 764:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(802);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 765:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(941);
            if(lookahead == 'n')
                ADVANCE(784);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 766:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(941);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 767:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(943);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 768:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(930);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 769:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(791);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 770:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(933);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 771:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(934);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 772:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(798);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 773:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(746);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 774:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(633);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 775:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(490);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 776:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(694);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 777:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(713);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 778:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(789);
            if(lookahead == 'i')
                ADVANCE(776);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 779:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(789);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 780:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(888);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 781:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(902);
            if(lookahead == 'h')
                ADVANCE(886);
            if(lookahead == 't')
                ADVANCE(904);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 782:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(902);
            if(lookahead == 'h')
                ADVANCE(886);
            if(lookahead == 't')
                ADVANCE(909);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 783:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(902);
            if(lookahead == 'h')
                ADVANCE(886);
            if(lookahead == 't')
                ADVANCE(912);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 784:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(964);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 785:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(778);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 786:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(725);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 787:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(507);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 788:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(706);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 789:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(814);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 790:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(680);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 791:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(526);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 792:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(704);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 793:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(642);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 794:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(660);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 795:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(692);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 796:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(658);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 797:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(662);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 798:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(628);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 799:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(675);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 800:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(815);
            if(lookahead == 'o')
                ADVANCE(958);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 801:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(775);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 802:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(896);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 803:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(733);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 804:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(777);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 805:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(779);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 806:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(878);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 807:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(745);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 808:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(928);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 809:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(931);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 810:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(874);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 811:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(950);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 812:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(768);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 813:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(877);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 814:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'f')
                ADVANCE(684);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 815:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'f')
                ADVANCE(742);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 816:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'f')
                ADVANCE(749);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 817:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(477);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 818:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(515);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 819:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(517);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 820:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(479);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 821:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(875);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 822:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(690);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 823:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(739);
            if(lookahead == 'o')
                ADVANCE(880);
            if(lookahead == 'u')
                ADVANCE(919);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 824:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(739);
            if(lookahead == 'o')
                ADVANCE(880);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 825:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(739);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 826:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(886);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 827:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(743);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 828:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(966);
            if(lookahead == 'l')
                ADVANCE(892);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 829:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(963);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 830:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(924);
            if(lookahead == 'o')
                ADVANCE(882);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 831:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(821);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 832:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(962);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 833:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(774);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 834:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(758);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 835:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(873);
            if(lookahead == 'n')
                ADVANCE(842);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 836:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(873);
            if(lookahead == 'n')
                ADVANCE(918);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 837:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(762);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 838:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(869);
            if(lookahead == 'u')
                ADVANCE(770);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 839:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(869);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 840:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(870);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 841:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(942);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 842:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(887);
            if(lookahead == 's')
                ADVANCE(831);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 843:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(890);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 844:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'j')
                ADVANCE(812);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 845:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'k')
                ADVANCE(649);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 846:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(955);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 847:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(892);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 848:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(970);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 849:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(837);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 850:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(787);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 851:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(935);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 852:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(799);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 853:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(807);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 854:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(961);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 855:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'm')
                ADVANCE(901);
            if(lookahead == 'n')
                ADVANCE(925);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 856:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'm')
                ADVANCE(668);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 857:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'm')
                ADVANCE(673);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 858:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'm')
                ADVANCE(734);
            if(lookahead == 's')
                ADVANCE(809);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 859:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'm')
                ADVANCE(796);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 860:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(817);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 861:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(666);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 862:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(488);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 863:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(621);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 864:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(967);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 865:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(953);
            if(lookahead == 'v')
                ADVANCE(813);
            if(lookahead == 'x')
                ADVANCE(764);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 866:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(953);
            if(lookahead == 'x')
                ADVANCE(764);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 867:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(953);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 868:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(925);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 869:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(818);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 870:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(819);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 871:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(848);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 872:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(773);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 873:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(938);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 874:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(740);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 875:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(804);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 876:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(936);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 877:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(952);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 878:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(769);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 879:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(820);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 880:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(920);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 881:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(958);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 882:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(853);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 883:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(860);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 884:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(857);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 885:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(882);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 886:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(914);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 887:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(861);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 888:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(871);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 889:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(907);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 890:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(863);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 891:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(879);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 892:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(744);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 893:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(915);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 894:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(528);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 895:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(785);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 896:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(944);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 897:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(794);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 898:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(805);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 899:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(810);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 900:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(797);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 901:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(893);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 902:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'q')
                ADVANCE(956);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 903:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(829);
            if(lookahead == 'u')
                ADVANCE(756);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 904:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(838);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 905:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(510);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 906:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(512);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 907:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(969);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 908:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(834);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 909:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(959);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 910:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(840);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 911:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(957);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 912:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(839);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 913:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(751);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 914:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(929);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 915:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(932);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 916:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(816);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 917:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(845);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 918:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(831);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 919:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(940);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 920:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(926);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 921:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(792);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 922:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(795);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 923:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(939);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 924:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(858);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 925:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(716);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 926:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(670);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 927:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(505);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 928:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(492);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 929:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(473);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 930:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(699);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 931:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(646);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 932:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(697);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 933:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(664);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 934:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(626);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 935:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(652);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 936:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(715);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 937:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(908);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 938:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(717);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 939:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(913);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 940:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(884);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 941:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(808);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 942:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(763);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 943:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(889);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 944:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(843);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 945:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(790);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 946:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(750);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 947:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(793);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 948:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(832);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 949:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(910);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 950:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(972);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 951:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(975);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 952:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(951);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 953:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(856);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 954:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(851);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 955:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(786);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 956:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(806);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 957:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(872);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 958:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(757);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 959:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(770);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 960:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(947);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 961:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(811);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 962:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'v')
                ADVANCE(788);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 963:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'v')
                ADVANCE(748);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 964:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'w')
                ADVANCE(737);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 965:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'w')
                ADVANCE(841);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 966:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'x')
                ADVANCE(801);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 967:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(523);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 968:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(701);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 969:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(682);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 970:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(640);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 971:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(895);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 972:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(897);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 973:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(898);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 974:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(899);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 975:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(900);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 976:
            ACCEPT_TOKEN(sym_identifier);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(595);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 977:
            ACCEPT_TOKEN(sym_identifier);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(977);
            END_STATE();
        case 978:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            END_STATE();
        case 979:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            if(lookahead == '*')
                ADVANCE(993);
            if(lookahead != 0)
                ADVANCE(67);
            END_STATE();
        case 980:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            if(lookahead == '\\')
                ADVANCE(55);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(987);
            END_STATE();
        case 981:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(712);
            END_STATE();
        case 982:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '\n')
                ADVANCE(982);
            if(lookahead == '\r')
                ADVANCE(37);
            if(lookahead == '@')
                ADVANCE(653);
            END_STATE();
        case 983:
            ACCEPT_TOKEN(aux_sym_comment_token2);
            if(lookahead == '\n')
                ADVANCE(986);
            if(lookahead == '\\')
                ADVANCE(55);
            if(lookahead != 0)
                ADVANCE(987);
            END_STATE();
        case 984:
            ACCEPT_TOKEN(aux_sym_comment_token2);
            if(lookahead == '\r')
                ADVANCE(988);
            if(lookahead == '\\')
                ADVANCE(984);
            if(lookahead != 0)
                ADVANCE(987);
            END_STATE();
        case 985:
            ACCEPT_TOKEN(aux_sym_comment_token2);
            if(lookahead == '*')
                ADVANCE(991);
            if(lookahead == '/')
                ADVANCE(980);
            if(lookahead == '\\')
                ADVANCE(55);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(987);
            END_STATE();
        case 986:
            ACCEPT_TOKEN(aux_sym_comment_token2);
            if(lookahead == '/')
                ADVANCE(985);
            if(lookahead == '@')
                ADVANCE(653);
            if(lookahead == '\\')
                ADVANCE(40);
            if(lookahead == '\t' ||
               (0x0b <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(986);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead))
                ADVANCE(987);
            END_STATE();
        case 987:
            ACCEPT_TOKEN(aux_sym_comment_token2);
            if(lookahead == '\\')
                ADVANCE(55);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(987);
            END_STATE();
        case 988:
            ACCEPT_TOKEN(aux_sym_comment_token2);
            if(lookahead == '\\')
                ADVANCE(55);
            if(lookahead != 0)
                ADVANCE(987);
            END_STATE();
        case 989:
            ACCEPT_TOKEN(anon_sym_SLASH_STAR);
            END_STATE();
        case 990:
            ACCEPT_TOKEN(anon_sym_SLASH_STAR);
            if(lookahead == '*')
                ADVANCE(993);
            if(lookahead != 0 &&
               lookahead != '/')
                ADVANCE(67);
            END_STATE();
        case 991:
            ACCEPT_TOKEN(anon_sym_SLASH_STAR);
            if(lookahead == '\\')
                ADVANCE(55);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(987);
            END_STATE();
        case 992:
            ACCEPT_TOKEN(anon_sym_SLASH_STAR);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(712);
            END_STATE();
        case 993:
            ACCEPT_TOKEN(aux_sym_comment_token3);
            if(lookahead == '*')
                ADVANCE(993);
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
    [1] = { .lex_state = 469 },
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
    [17] = { .lex_state = 470 },
    [18] = { .lex_state = 469 },
    [19] = { .lex_state = 470 },
    [20] = { .lex_state = 470 },
    [21] = { .lex_state = 470 },
    [22] = { .lex_state = 63 },
    [23] = { .lex_state = 63 },
    [24] = { .lex_state = 63 },
    [25] = { .lex_state = 470 },
    [26] = { .lex_state = 63 },
    [27] = { .lex_state = 63 },
    [28] = { .lex_state = 63 },
    [29] = { .lex_state = 74 },
    [30] = { .lex_state = 74 },
    [31] = { .lex_state = 63 },
    [32] = { .lex_state = 470 },
    [33] = { .lex_state = 63 },
    [34] = { .lex_state = 470 },
    [35] = { .lex_state = 63 },
    [36] = { .lex_state = 63 },
    [37] = { .lex_state = 74 },
    [38] = { .lex_state = 63 },
    [39] = { .lex_state = 470 },
    [40] = { .lex_state = 69 },
    [41] = { .lex_state = 63 },
    [42] = { .lex_state = 69 },
    [43] = { .lex_state = 69 },
    [44] = { .lex_state = 69 },
    [45] = { .lex_state = 69 },
    [46] = { .lex_state = 75 },
    [47] = { .lex_state = 69 },
    [48] = { .lex_state = 69 },
    [49] = { .lex_state = 63 },
    [50] = { .lex_state = 75 },
    [51] = { .lex_state = 71 },
    [52] = { .lex_state = 71 },
    [53] = { .lex_state = 63 },
    [54] = { .lex_state = 63 },
    [55] = { .lex_state = 63 },
    [56] = { .lex_state = 63 },
    [57] = { .lex_state = 63 },
    [58] = { .lex_state = 63 },
    [59] = { .lex_state = 63 },
    [60] = { .lex_state = 63 },
    [61] = { .lex_state = 76 },
    [62] = { .lex_state = 76 },
    [63] = { .lex_state = 72 },
    [64] = { .lex_state = 72 },
    [65] = { .lex_state = 63 },
    [66] = { .lex_state = 63 },
    [67] = { .lex_state = 63 },
    [68] = { .lex_state = 63 },
    [69] = { .lex_state = 63 },
    [70] = { .lex_state = 74 },
    [71] = { .lex_state = 63 },
    [72] = { .lex_state = 63 },
    [73] = { .lex_state = 74 },
    [74] = { .lex_state = 74 },
    [75] = { .lex_state = 63 },
    [76] = { .lex_state = 74 },
    [77] = { .lex_state = 74 },
    [78] = { .lex_state = 63 },
    [79] = { .lex_state = 63 },
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
    [92] = { .lex_state = 59 },
    [93] = { .lex_state = 59 },
    [94] = { .lex_state = 59 },
    [95] = { .lex_state = 59 },
    [96] = { .lex_state = 59 },
    [97] = { .lex_state = 59 },
    [98] = { .lex_state = 59 },
    [99] = { .lex_state = 59 },
    [100] = { .lex_state = 59 },
    [101] = { .lex_state = 59 },
    [102] = { .lex_state = 59 },
    [103] = { .lex_state = 469 },
    [104] = { .lex_state = 59 },
    [105] = { .lex_state = 59 },
    [106] = { .lex_state = 469 },
    [107] = { .lex_state = 470 },
    [108] = { .lex_state = 470 },
    [109] = { .lex_state = 470 },
    [110] = { .lex_state = 470 },
    [111] = { .lex_state = 470 },
    [112] = { .lex_state = 59 },
    [113] = { .lex_state = 469 },
    [114] = { .lex_state = 469 },
    [115] = { .lex_state = 470 },
    [116] = { .lex_state = 470 },
    [117] = { .lex_state = 469 },
    [118] = { .lex_state = 59 },
    [119] = { .lex_state = 59 },
    [120] = { .lex_state = 59 },
    [121] = { .lex_state = 59 },
    [122] = { .lex_state = 59 },
    [123] = { .lex_state = 469 },
    [124] = { .lex_state = 469 },
    [125] = { .lex_state = 470 },
    [126] = { .lex_state = 470 },
    [127] = { .lex_state = 470 },
    [128] = { .lex_state = 470 },
    [129] = { .lex_state = 470 },
    [130] = { .lex_state = 470 },
    [131] = { .lex_state = 470 },
    [132] = { .lex_state = 470 },
    [133] = { .lex_state = 470 },
    [134] = { .lex_state = 470 },
    [135] = { .lex_state = 470 },
    [136] = { .lex_state = 470 },
    [137] = { .lex_state = 470 },
    [138] = { .lex_state = 470 },
    [139] = { .lex_state = 59 },
    [140] = { .lex_state = 469 },
    [141] = { .lex_state = 470 },
    [142] = { .lex_state = 470 },
    [143] = { .lex_state = 469 },
    [144] = { .lex_state = 470 },
    [145] = { .lex_state = 470 },
    [146] = { .lex_state = 57 },
    [147] = { .lex_state = 61 },
    [148] = { .lex_state = 61 },
    [149] = { .lex_state = 59 },
    [150] = { .lex_state = 61 },
    [151] = { .lex_state = 469 },
    [152] = { .lex_state = 61 },
    [153] = { .lex_state = 57 },
    [154] = { .lex_state = 57 },
    [155] = { .lex_state = 61 },
    [156] = { .lex_state = 60 },
    [157] = { .lex_state = 469 },
    [158] = { .lex_state = 61 },
    [159] = { .lex_state = 62 },
    [160] = { .lex_state = 469 },
    [161] = { .lex_state = 62 },
    [162] = { .lex_state = 57 },
    [163] = { .lex_state = 62 },
    [164] = { .lex_state = 469 },
    [165] = { .lex_state = 62 },
    [166] = { .lex_state = 62 },
    [167] = { .lex_state = 469 },
    [168] = { .lex_state = 79 },
    [169] = { .lex_state = 469 },
    [170] = { .lex_state = 79 },
    [171] = { .lex_state = 57 },
    [172] = { .lex_state = 469 },
    [173] = { .lex_state = 469 },
    [174] = { .lex_state = 62 },
    [175] = { .lex_state = 62 },
    [176] = { .lex_state = 62 },
    [177] = { .lex_state = 62 },
    [178] = { .lex_state = 62 },
    [179] = { .lex_state = 78 },
    [180] = { .lex_state = 469 },
    [181] = { .lex_state = 469 },
    [182] = { .lex_state = 469 },
    [183] = { .lex_state = 62 },
    [184] = { .lex_state = 57 },
    [185] = { .lex_state = 79 },
    [186] = { .lex_state = 470 },
    [187] = { .lex_state = 469 },
    [188] = { .lex_state = 62 },
    [189] = { .lex_state = 469 },
    [190] = { .lex_state = 469 },
    [191] = { .lex_state = 62 },
    [192] = { .lex_state = 61 },
    [193] = { .lex_state = 62 },
    [194] = { .lex_state = 37 },
    [195] = { .lex_state = 469 },
    [196] = { .lex_state = 64 },
    [197] = { .lex_state = 470 },
    [198] = { .lex_state = 469 },
    [199] = { .lex_state = 470 },
    [200] = { .lex_state = 469 },
    [201] = { .lex_state = 62 },
    [202] = { .lex_state = 64 },
    [203] = { .lex_state = 469 },
    [204] = { .lex_state = 469 },
    [205] = { .lex_state = 62 },
    [206] = { .lex_state = 62 },
    [207] = { .lex_state = 469 },
    [208] = { .lex_state = 62 },
    [209] = { .lex_state = 469 },
    [210] = { .lex_state = 62 },
    [211] = { .lex_state = 62 },
    [212] = { .lex_state = 62 },
    [213] = { .lex_state = 62 },
    [214] = { .lex_state = 79 },
    [215] = { .lex_state = 62 },
    [216] = { .lex_state = 986 },
    [217] = { .lex_state = 469 },
    [218] = { .lex_state = 469 },
    [219] = { .lex_state = 79 },
    [220] = { .lex_state = 0 },
    [221] = { .lex_state = 469 },
    [222] = { .lex_state = 62 },
    [223] = { .lex_state = 62 },
    [224] = { .lex_state = 62 },
    [225] = { .lex_state = 62 },
    [226] = { .lex_state = 62 },
    [227] = { .lex_state = 62 },
    [228] = { .lex_state = 62 },
    [229] = { .lex_state = 62 },
    [230] = { .lex_state = 62 },
    [231] = { .lex_state = 37 },
    [232] = { .lex_state = 62 },
    [233] = { .lex_state = 469 },
    [234] = { .lex_state = 37 },
    [235] = { .lex_state = 469 },
    [236] = { .lex_state = 62 },
    [237] = { .lex_state = 469 },
    [238] = { .lex_state = 62 },
    [239] = { .lex_state = 62 },
    [240] = { .lex_state = 469 },
    [241] = { .lex_state = 37 },
    [242] = { .lex_state = 469 },
    [243] = { .lex_state = 62 },
    [244] = { .lex_state = 79 },
    [245] = { .lex_state = 37 },
    [246] = { .lex_state = 469 },
    [247] = { .lex_state = 0 },
    [248] = { .lex_state = 62 },
    [249] = { .lex_state = 37 },
    [250] = { .lex_state = 0 },
    [251] = { .lex_state = 0 },
    [252] = { .lex_state = 69 },
    [253] = { .lex_state = 62 },
    [254] = { .lex_state = 0 },
    [255] = { .lex_state = 62 },
    [256] = { .lex_state = 62 },
    [257] = { .lex_state = 62 },
    [258] = { .lex_state = 62 },
    [259] = { .lex_state = 0 },
    [260] = { .lex_state = 62 },
    [261] = { .lex_state = 0 },
    [262] = { .lex_state = 69 },
    [263] = { .lex_state = 62 },
    [264] = { .lex_state = 69 },
    [265] = { .lex_state = 469 },
    [266] = { .lex_state = 0 },
    [267] = { .lex_state = 62 },
    [268] = { .lex_state = 0 },
    [269] = { .lex_state = 62 },
    [270] = { .lex_state = 0 },
    [271] = { .lex_state = 0 },
    [272] = { .lex_state = 0 },
    [273] = { .lex_state = 0 },
    [274] = { .lex_state = 0 },
    [275] = { .lex_state = 62 },
    [276] = { .lex_state = 0 },
    [277] = { .lex_state = 62 },
    [278] = { .lex_state = 0 },
    [279] = { .lex_state = 0 },
    [280] = { .lex_state = 469 },
    [281] = { .lex_state = 0 },
    [282] = { .lex_state = 69 },
    [283] = { .lex_state = 0 },
    [284] = { .lex_state = 469 },
    [285] = { .lex_state = 62 },
    [286] = { .lex_state = 0 },
    [287] = { .lex_state = 62 },
    [288] = { .lex_state = 0 },
    [289] = { .lex_state = 62 },
    [290] = { .lex_state = 62 },
    [291] = { .lex_state = 469 },
    [292] = { .lex_state = 469 },
    [293] = { .lex_state = 469 },
    [294] = { .lex_state = 0 },
    [295] = { .lex_state = 62 },
    [296] = { .lex_state = 470 },
    [297] = { .lex_state = 0 },
    [298] = { .lex_state = 62 },
    [299] = { .lex_state = 469 },
    [300] = { .lex_state = 0 },
    [301] = { .lex_state = 0 },
    [302] = { .lex_state = 0 },
    [303] = { .lex_state = 0 },
    [304] = { .lex_state = 62 },
    [305] = { .lex_state = 62 },
    [306] = { .lex_state = 0 },
    [307] = { .lex_state = 62 },
    [308] = { .lex_state = 0 },
    [309] = { .lex_state = 69 },
    [310] = { .lex_state = 62 },
    [311] = { .lex_state = 69 },
    [312] = { .lex_state = 0 },
    [313] = { .lex_state = 62 },
    [314] = { .lex_state = 62 },
    [315] = { .lex_state = 69 },
    [316] = { .lex_state = 469 },
    [317] = { .lex_state = 62 },
    [318] = { .lex_state = 469 },
    [319] = { .lex_state = 0 },
    [320] = { .lex_state = 0 },
    [321] = { .lex_state = 62 },
    [322] = { .lex_state = 0 },
    [323] = { .lex_state = 0 },
    [324] = { .lex_state = 0 },
    [325] = { .lex_state = 0 },
    [326] = { .lex_state = 69 },
    [327] = { .lex_state = 469 },
    [328] = { .lex_state = 469 },
    [329] = { .lex_state = 69 },
    [330] = { .lex_state = 80 },
    [331] = { .lex_state = 69 },
    [332] = { .lex_state = 62 },
    [333] = { .lex_state = 62 },
    [334] = { .lex_state = 0 },
    [335] = { .lex_state = 469 },
    [336] = { .lex_state = 0 },
    [337] = { .lex_state = 62 },
    [338] = { .lex_state = 0 },
    [339] = { .lex_state = 0 },
    [340] = { .lex_state = 469 },
    [341] = { .lex_state = 0 },
    [342] = { .lex_state = 62 },
    [343] = { .lex_state = 0 },
    [344] = { .lex_state = 62 },
    [345] = { .lex_state = 0 },
    [346] = { .lex_state = 0 },
    [347] = { .lex_state = 69 },
    [348] = { .lex_state = 0 },
    [349] = { .lex_state = 62 },
    [350] = { .lex_state = 0 },
    [351] = { .lex_state = 0 },
    [352] = { .lex_state = 0 },
    [353] = { .lex_state = 0 },
    [354] = { .lex_state = 62 },
    [355] = { .lex_state = 0 },
    [356] = { .lex_state = 0 },
    [357] = { .lex_state = 0 },
    [358] = { .lex_state = 62 },
    [359] = { .lex_state = 0 },
    [360] = { .lex_state = 62 },
    [361] = { .lex_state = 62 },
    [362] = { .lex_state = 0 },
    [363] = { .lex_state = 62 },
    [364] = { .lex_state = 0 },
    [365] = { .lex_state = 62 },
    [366] = { .lex_state = 469 },
    [367] = { .lex_state = 62 },
    [368] = { .lex_state = 469 },
    [369] = { .lex_state = 469 },
    [370] = { .lex_state = 0 },
    [371] = { .lex_state = 469 },
    [372] = { .lex_state = 62 },
    [373] = { .lex_state = 62 },
    [374] = { .lex_state = 69 },
    [375] = { .lex_state = 469 },
    [376] = { .lex_state = 0 },
    [377] = { .lex_state = 62 },
    [378] = { .lex_state = 469 },
    [379] = { .lex_state = 0 },
    [380] = { .lex_state = 69 },
    [381] = { .lex_state = 469 },
    [382] = { .lex_state = 0 },
    [383] = { .lex_state = 62 },
    [384] = { .lex_state = 62 },
    [385] = { .lex_state = 0 },
    [386] = { .lex_state = 62 },
    [387] = { .lex_state = 62 },
    [388] = { .lex_state = 69 },
    [389] = { .lex_state = 64 },
    [390] = { .lex_state = 470 },
    [391] = { .lex_state = 62 },
    [392] = { .lex_state = 62 },
    [393] = { .lex_state = 0 },
    [394] = { .lex_state = 0 },
    [395] = { .lex_state = 62 },
    [396] = { .lex_state = 43 },
    [397] = { .lex_state = 62 },
    [398] = { .lex_state = 469 },
    [399] = { .lex_state = 62 },
    [400] = { .lex_state = 0 },
    [401] = { .lex_state = 62 },
    [402] = { .lex_state = 69 },
    [403] = { .lex_state = 62 },
    [404] = { .lex_state = 69 },
    [405] = { .lex_state = 62 },
    [406] = { .lex_state = 62 },
    [407] = { .lex_state = 0 },
    [408] = { .lex_state = 62 },
    [409] = { .lex_state = 62 },
    [410] = { .lex_state = 69 },
    [411] = { .lex_state = 69 },
    [412] = { .lex_state = 69 },
    [413] = { .lex_state = 0 },
    [414] = { .lex_state = 62 },
    [415] = { .lex_state = 469 },
    [416] = { .lex_state = 62 },
    [417] = { .lex_state = 0 },
    [418] = { .lex_state = 0 },
    [419] = { .lex_state = 62 },
    [420] = { .lex_state = 62 },
    [421] = { .lex_state = 62 },
    [422] = { .lex_state = 469 },
    [423] = { .lex_state = 470 },
    [424] = { .lex_state = 62 },
    [425] = { .lex_state = 469 },
    [426] = { .lex_state = 62 },
    [427] = { .lex_state = 37 },
    [428] = { .lex_state = 62 },
    [429] = { .lex_state = 469 },
    [430] = { .lex_state = 469 },
    [431] = { .lex_state = 64 },
    [432] = { .lex_state = 0 },
    [433] = { .lex_state = 469 },
    [434] = { .lex_state = 0 },
    [435] = { .lex_state = 62 },
    [436] = { .lex_state = 69 },
    [437] = { .lex_state = 0 },
    [438] = { .lex_state = 0 },
    [439] = { .lex_state = 62 },
    [440] = { .lex_state = 62 },
    [441] = { .lex_state = 0 },
    [442] = { .lex_state = 62 },
    [443] = { .lex_state = 37 },
    [444] = { .lex_state = 0 },
    [445] = { .lex_state = 0 },
    [446] = { .lex_state = 62 },
    [447] = { .lex_state = 79 },
    [448] = { .lex_state = 0 },
    [449] = { .lex_state = 79 },
    [450] = { .lex_state = 62 },
    [451] = { .lex_state = 0 },
    [452] = { .lex_state = 0 },
    [453] = { .lex_state = 0 },
    [454] = { .lex_state = 0 },
    [455] = { .lex_state = 44 },
    [456] = { .lex_state = 0 },
    [457] = { .lex_state = 0 },
    [458] = { .lex_state = 469 },
    [459] = { .lex_state = 0 },
    [460] = { .lex_state = 0 },
    [461] = { .lex_state = 0 },
    [462] = { .lex_state = 0 },
    [463] = { .lex_state = 62 },
    [464] = { .lex_state = 0 },
    [465] = { .lex_state = 0 },
    [466] = { .lex_state = 0 },
    [467] = { .lex_state = 0 },
    [468] = { .lex_state = 0 },
    [469] = { .lex_state = 0 },
    [470] = { .lex_state = 0 },
    [471] = { .lex_state = 62 },
    [472] = { .lex_state = 0 },
    [473] = { .lex_state = 0 },
    [474] = { .lex_state = 0 },
    [475] = { .lex_state = 0 },
    [476] = { .lex_state = 69 },
    [477] = { .lex_state = 0 },
    [478] = { .lex_state = 0 },
    [479] = { .lex_state = 62 },
    [480] = { .lex_state = 0 },
    [481] = { .lex_state = 0 },
    [482] = { .lex_state = 0 },
    [483] = { .lex_state = 66 },
    [484] = { .lex_state = 62 },
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
    [497] = { .lex_state = 0 },
    [498] = { .lex_state = 0 },
    [499] = { .lex_state = 0 },
    [500] = { .lex_state = 0 },
    [501] = { .lex_state = 0 },
    [502] = { .lex_state = 0 },
    [503] = { .lex_state = 0 },
    [504] = { .lex_state = 69 },
    [505] = { .lex_state = 0 },
    [506] = { .lex_state = 0 },
    [507] = { .lex_state = 0 },
    [508] = { .lex_state = 62 },
    [509] = { .lex_state = 0 },
    [510] = { .lex_state = 0 },
    [511] = { .lex_state = 0 },
    [512] = { .lex_state = 62 },
    [513] = { .lex_state = 62 },
    [514] = { .lex_state = 711 },
    [515] = { .lex_state = 62 },
    [516] = { .lex_state = 69 },
    [517] = { .lex_state = 69 },
    [518] = { .lex_state = 0 },
    [519] = { .lex_state = 82 },
    [520] = { .lex_state = 0 },
    [521] = { .lex_state = 0 },
    [522] = { .lex_state = 0 },
    [523] = { .lex_state = 69 },
    [524] = { .lex_state = 470 },
    [525] = { .lex_state = 469 },
    [526] = { .lex_state = 0 },
    [527] = { .lex_state = 469 },
    [528] = { .lex_state = 0 },
    [529] = { .lex_state = 69 },
    [530] = { .lex_state = 0 },
    [531] = { .lex_state = 62 },
    [532] = { .lex_state = 0 },
    [533] = { .lex_state = 0 },
    [534] = { .lex_state = 0 },
    [535] = { .lex_state = 62 },
    [536] = { .lex_state = 0 },
    [537] = { .lex_state = 0 },
    [538] = { .lex_state = 0 },
    [539] = { .lex_state = 0 },
    [540] = { .lex_state = 0 },
    [541] = { .lex_state = 62 },
    [542] = { .lex_state = 69 },
    [543] = { .lex_state = 62 },
    [544] = { .lex_state = 0 },
    [545] = { .lex_state = 62 },
    [546] = { .lex_state = 69 },
    [547] = { .lex_state = 0 },
    [548] = { .lex_state = 69 },
    [549] = { .lex_state = 62 },
    [550] = { .lex_state = 69 },
    [551] = { .lex_state = 69 },
    [552] = { .lex_state = 0 },
    [553] = { .lex_state = 62 },
    [554] = { .lex_state = 62 },
    [555] = { .lex_state = 470 },
    [556] = { .lex_state = 69 },
    [557] = { .lex_state = 0 },
    [558] = { .lex_state = 0 },
    [559] = { .lex_state = 62 },
    [560] = { .lex_state = 0 },
    [561] = { .lex_state = 0 },
    [562] = { .lex_state = 82 },
    [563] = { .lex_state = 0 },
    [564] = { .lex_state = 0 },
    [565] = { .lex_state = 62 },
    [566] = { .lex_state = 83 },
    [567] = { .lex_state = 0 },
    [568] = { .lex_state = 62 },
    [569] = { .lex_state = 62 },
    [570] = { .lex_state = 69 },
    [571] = { .lex_state = 69 },
    [572] = { .lex_state = 62 },
    [573] = { .lex_state = 0 },
    [574] = { .lex_state = 0 },
    [575] = { .lex_state = 0 },
    [576] = { .lex_state = 0 },
    [577] = { .lex_state = 0 },
    [578] = { .lex_state = 0 },
    [579] = { .lex_state = 0 },
    [580] = { .lex_state = 62 },
    [581] = { .lex_state = 0 },
    [582] = { .lex_state = 62 },
    [583] = { .lex_state = 62 },
    [584] = { .lex_state = 62 },
    [585] = { .lex_state = 62 },
    [586] = { .lex_state = 0 },
    [587] = { .lex_state = 62 },
    [588] = { .lex_state = 0 },
    [589] = { .lex_state = 0 },
    [590] = { .lex_state = 62 },
    [591] = { .lex_state = 0 },
    [592] = { .lex_state = 62 },
    [593] = { .lex_state = 0 },
    [594] = { .lex_state = 0 },
    [595] = { .lex_state = 0 },
    [596] = { .lex_state = 469 },
    [597] = { .lex_state = 62 },
    [598] = { .lex_state = 62 },
    [599] = { .lex_state = 469 },
    [600] = { .lex_state = 62 },
    [601] = { .lex_state = 62 },
    [602] = { .lex_state = 469 },
    [603] = { .lex_state = 62 },
    [604] = { .lex_state = 0 },
    [605] = { .lex_state = 0 },
    [606] = { .lex_state = 0 },
    [607] = { .lex_state = 469 },
    [608] = { .lex_state = 83 },
    [609] = { .lex_state = 0 },
    [610] = { .lex_state = 62 },
    [611] = { .lex_state = 62 },
    [612] = { .lex_state = 0 },
    [613] = { .lex_state = 0 },
    [614] = { .lex_state = 0 },
    [615] = { .lex_state = 0 },
    [616] = { .lex_state = 62 },
    [617] = { .lex_state = 62 },
    [618] = { .lex_state = 0 },
    [619] = { .lex_state = 0 },
    [620] = { .lex_state = 62 },
    [621] = { .lex_state = 0 },
    [622] = { .lex_state = 0 },
    [623] = { .lex_state = 62 },
    [624] = { (TSStateId)(-1) },
    [625] = { (TSStateId)(-1) },
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
        [anon_sym_native] = ACTIONS(1),
        [anon_sym_POUNDdefine] = ACTIONS(1),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [1] = {
        [sym_specification] = STATE(489),
        [sym_preproc_call] = STATE(117),
        [sym_except_dcl] = STATE(491),
        [sym_interface_dcl] = STATE(491),
        [sym_interface_kind] = STATE(479),
        [sym_interface_forward_dcl] = STATE(475),
        [sym_interface_def] = STATE(475),
        [sym_interface_header] = STATE(474),
        [sym_bitset_dcl] = STATE(491),
        [sym_bitmask_dcl] = STATE(491),
        [sym_annotation_dcl] = STATE(491),
        [sym_annotation_appl] = STATE(171),
        [sym_template_module_dcl] = STATE(491),
        [sym_template_module_inst] = STATE(491),
        [sym_value_dcl] = STATE(491),
        [sym_value_def] = STATE(469),
        [sym_value_kind] = STATE(463),
        [sym_value_header] = STATE(459),
        [sym_value_forward_dcl] = STATE(469),
        [sym_typedef_dcl] = STATE(491),
        [sym_enum_dcl] = STATE(491),
        [sym_enum_anno] = STATE(458),
        [sym_union_forward_dcl] = STATE(491),
        [sym_union_def] = STATE(491),
        [sym_type_id_dcl] = STATE(491),
        [sym_type_prefix_dcl] = STATE(491),
        [sym_import_dcl] = STATE(491),
        [sym_value_abs_def] = STATE(469),
        [sym__definition] = STATE(115),
        [sym_native_dcl] = STATE(491),
        [sym_module_dcl] = STATE(491),
        [sym_struct_forward_dcl] = STATE(491),
        [sym_struct_def] = STATE(491),
        [sym_predefine] = STATE(107),
        [sym_const_dcl] = STATE(491),
        [sym_comment] = STATE(1),
        [aux_sym_specification_repeat1] = STATE(18),
        [aux_sym_specification_repeat2] = STATE(39),
        [aux_sym_interface_def_repeat1] = STATE(146),
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
        [anon_sym_native] = ACTIONS(51),
        [anon_sym_POUNDdefine] = ACTIONS(53),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [2] = {
        [sym_signed_short_int] = STATE(228),
        [sym_signed_long_int] = STATE(228),
        [sym_signed_longlong_int] = STATE(228),
        [sym_unsigned_int] = STATE(211),
        [sym_integer_type] = STATE(277),
        [sym_signed_int] = STATE(211),
        [sym_unsigned_short_int] = STATE(227),
        [sym_unsigned_long_int] = STATE(227),
        [sym_unsigned_longlong_int] = STATE(227),
        [sym_floating_pt_type] = STATE(277),
        [sym_char_type] = STATE(277),
        [sym_scoped_name] = STATE(215),
        [sym_string_type] = STATE(255),
        [sym_type_spec] = STATE(600),
        [sym_simple_type_spec] = STATE(287),
        [sym_base_type_spec] = STATE(310),
        [sym_any_type] = STATE(277),
        [sym_fixed_pt_type] = STATE(255),
        [sym_template_type_spec] = STATE(287),
        [sym_sequence_type] = STATE(255),
        [sym_map_type] = STATE(255),
        [sym_except_dcl] = STATE(612),
        [sym_export] = STATE(42),
        [sym_op_dcl] = STATE(318),
        [sym_op_type_spec] = STATE(592),
        [sym_attr_dcl] = STATE(612),
        [sym_readonly_attr_spec] = STATE(591),
        [sym_attr_spec] = STATE(591),
        [sym_bitset_dcl] = STATE(612),
        [sym_bitmask_dcl] = STATE(612),
        [sym_annotation_appl] = STATE(171),
        [sym_value_dcl] = STATE(612),
        [sym_value_def] = STATE(469),
        [sym_value_kind] = STATE(463),
        [sym_value_header] = STATE(459),
        [sym_value_element] = STATE(44),
        [sym_state_member] = STATE(42),
        [sym_init_dcl] = STATE(42),
        [sym_value_forward_dcl] = STATE(469),
        [sym_typedef_dcl] = STATE(612),
        [sym_enum_dcl] = STATE(612),
        [sym_enum_anno] = STATE(458),
        [sym_union_forward_dcl] = STATE(612),
        [sym_union_def] = STATE(612),
        [sym_type_id_dcl] = STATE(612),
        [sym_import_dcl] = STATE(612),
        [sym_op_oneway_dcl] = STATE(318),
        [sym_op_with_context] = STATE(612),
        [sym_value_abs_def] = STATE(469),
        [sym_native_dcl] = STATE(612),
        [sym_struct_forward_dcl] = STATE(612),
        [sym_struct_def] = STATE(612),
        [sym_const_dcl] = STATE(612),
        [sym_comment] = STATE(2),
        [aux_sym_interface_def_repeat1] = STATE(184),
        [aux_sym_value_def_repeat1] = STATE(2),
        [anon_sym_short] = ACTIONS(55),
        [anon_sym_int16] = ACTIONS(55),
        [anon_sym_long] = ACTIONS(58),
        [anon_sym_int32] = ACTIONS(58),
        [anon_sym_longlong] = ACTIONS(61),
        [anon_sym_int64] = ACTIONS(64),
        [sym_unsigned_tiny_int] = ACTIONS(67),
        [sym_boolean_type] = ACTIONS(70),
        [anon_sym_fixed] = ACTIONS(73),
        [sym_octet_type] = ACTIONS(70),
        [sym_signed_tiny_int] = ACTIONS(76),
        [anon_sym_unsignedshort] = ACTIONS(79),
        [anon_sym_uint16] = ACTIONS(82),
        [anon_sym_unsignedlong] = ACTIONS(85),
        [anon_sym_uint32] = ACTIONS(85),
        [anon_sym_unsignedlonglong] = ACTIONS(88),
        [anon_sym_uint64] = ACTIONS(91),
        [anon_sym_float] = ACTIONS(94),
        [anon_sym_double] = ACTIONS(94),
        [anon_sym_longdouble] = ACTIONS(97),
        [anon_sym_char] = ACTIONS(100),
        [anon_sym_wchar] = ACTIONS(100),
        [anon_sym_COLON_COLON] = ACTIONS(103),
        [anon_sym_string] = ACTIONS(106),
        [anon_sym_wstring] = ACTIONS(106),
        [anon_sym_any] = ACTIONS(109),
        [anon_sym_sequence] = ACTIONS(112),
        [anon_sym_map] = ACTIONS(115),
        [anon_sym_exception] = ACTIONS(118),
        [anon_sym_RBRACE] = ACTIONS(121),
        [anon_sym_abstract] = ACTIONS(123),
        [anon_sym_void] = ACTIONS(126),
        [anon_sym_readonly] = ACTIONS(129),
        [anon_sym_attribute] = ACTIONS(132),
        [anon_sym_bitset] = ACTIONS(135),
        [anon_sym_bitmask] = ACTIONS(138),
        [anon_sym_AT] = ACTIONS(141),
        [anon_sym_valuetype] = ACTIONS(144),
        [anon_sym_struct] = ACTIONS(147),
        [anon_sym_union] = ACTIONS(150),
        [anon_sym_enum] = ACTIONS(153),
        [anon_sym_const] = ACTIONS(156),
        [anon_sym_custom] = ACTIONS(159),
        [anon_sym_public] = ACTIONS(162),
        [anon_sym_private] = ACTIONS(162),
        [anon_sym_factory] = ACTIONS(165),
        [anon_sym_typedef] = ACTIONS(168),
        [anon_sym_ATignore_literal_names] = ACTIONS(171),
        [anon_sym_typeid] = ACTIONS(174),
        [anon_sym_import] = ACTIONS(177),
        [sym_object_type] = ACTIONS(70),
        [anon_sym_oneway] = ACTIONS(180),
        [sym_value_base_type] = ACTIONS(70),
        [anon_sym_native] = ACTIONS(183),
        [sym_identifier] = ACTIONS(186),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [3] = {
        [sym_signed_short_int] = STATE(228),
        [sym_signed_long_int] = STATE(228),
        [sym_signed_longlong_int] = STATE(228),
        [sym_unsigned_int] = STATE(211),
        [sym_integer_type] = STATE(277),
        [sym_signed_int] = STATE(211),
        [sym_unsigned_short_int] = STATE(227),
        [sym_unsigned_long_int] = STATE(227),
        [sym_unsigned_longlong_int] = STATE(227),
        [sym_floating_pt_type] = STATE(277),
        [sym_char_type] = STATE(277),
        [sym_scoped_name] = STATE(215),
        [sym_string_type] = STATE(255),
        [sym_type_spec] = STATE(600),
        [sym_simple_type_spec] = STATE(287),
        [sym_base_type_spec] = STATE(310),
        [sym_any_type] = STATE(277),
        [sym_fixed_pt_type] = STATE(255),
        [sym_template_type_spec] = STATE(287),
        [sym_sequence_type] = STATE(255),
        [sym_map_type] = STATE(255),
        [sym_except_dcl] = STATE(612),
        [sym_export] = STATE(42),
        [sym_op_dcl] = STATE(318),
        [sym_op_type_spec] = STATE(592),
        [sym_attr_dcl] = STATE(612),
        [sym_readonly_attr_spec] = STATE(591),
        [sym_attr_spec] = STATE(591),
        [sym_bitset_dcl] = STATE(612),
        [sym_bitmask_dcl] = STATE(612),
        [sym_annotation_appl] = STATE(171),
        [sym_value_dcl] = STATE(612),
        [sym_value_def] = STATE(469),
        [sym_value_kind] = STATE(463),
        [sym_value_header] = STATE(459),
        [sym_value_element] = STATE(44),
        [sym_state_member] = STATE(42),
        [sym_init_dcl] = STATE(42),
        [sym_value_forward_dcl] = STATE(469),
        [sym_typedef_dcl] = STATE(612),
        [sym_enum_dcl] = STATE(612),
        [sym_enum_anno] = STATE(458),
        [sym_union_forward_dcl] = STATE(612),
        [sym_union_def] = STATE(612),
        [sym_type_id_dcl] = STATE(612),
        [sym_import_dcl] = STATE(612),
        [sym_op_oneway_dcl] = STATE(318),
        [sym_op_with_context] = STATE(612),
        [sym_value_abs_def] = STATE(469),
        [sym_native_dcl] = STATE(612),
        [sym_struct_forward_dcl] = STATE(612),
        [sym_struct_def] = STATE(612),
        [sym_const_dcl] = STATE(612),
        [sym_comment] = STATE(3),
        [aux_sym_interface_def_repeat1] = STATE(184),
        [aux_sym_value_def_repeat1] = STATE(4),
        [anon_sym_short] = ACTIONS(189),
        [anon_sym_int16] = ACTIONS(189),
        [anon_sym_long] = ACTIONS(191),
        [anon_sym_int32] = ACTIONS(191),
        [anon_sym_longlong] = ACTIONS(193),
        [anon_sym_int64] = ACTIONS(195),
        [sym_unsigned_tiny_int] = ACTIONS(197),
        [sym_boolean_type] = ACTIONS(199),
        [anon_sym_fixed] = ACTIONS(201),
        [sym_octet_type] = ACTIONS(199),
        [sym_signed_tiny_int] = ACTIONS(203),
        [anon_sym_unsignedshort] = ACTIONS(205),
        [anon_sym_uint16] = ACTIONS(207),
        [anon_sym_unsignedlong] = ACTIONS(209),
        [anon_sym_uint32] = ACTIONS(209),
        [anon_sym_unsignedlonglong] = ACTIONS(211),
        [anon_sym_uint64] = ACTIONS(213),
        [anon_sym_float] = ACTIONS(215),
        [anon_sym_double] = ACTIONS(215),
        [anon_sym_longdouble] = ACTIONS(217),
        [anon_sym_char] = ACTIONS(219),
        [anon_sym_wchar] = ACTIONS(219),
        [anon_sym_COLON_COLON] = ACTIONS(221),
        [anon_sym_string] = ACTIONS(223),
        [anon_sym_wstring] = ACTIONS(223),
        [anon_sym_any] = ACTIONS(225),
        [anon_sym_sequence] = ACTIONS(227),
        [anon_sym_map] = ACTIONS(229),
        [anon_sym_exception] = ACTIONS(231),
        [anon_sym_RBRACE] = ACTIONS(233),
        [anon_sym_abstract] = ACTIONS(235),
        [anon_sym_void] = ACTIONS(237),
        [anon_sym_readonly] = ACTIONS(239),
        [anon_sym_attribute] = ACTIONS(241),
        [anon_sym_bitset] = ACTIONS(243),
        [anon_sym_bitmask] = ACTIONS(245),
        [anon_sym_AT] = ACTIONS(247),
        [anon_sym_valuetype] = ACTIONS(249),
        [anon_sym_struct] = ACTIONS(251),
        [anon_sym_union] = ACTIONS(253),
        [anon_sym_enum] = ACTIONS(255),
        [anon_sym_const] = ACTIONS(257),
        [anon_sym_custom] = ACTIONS(259),
        [anon_sym_public] = ACTIONS(261),
        [anon_sym_private] = ACTIONS(261),
        [anon_sym_factory] = ACTIONS(263),
        [anon_sym_typedef] = ACTIONS(265),
        [anon_sym_ATignore_literal_names] = ACTIONS(43),
        [anon_sym_typeid] = ACTIONS(267),
        [anon_sym_import] = ACTIONS(269),
        [sym_object_type] = ACTIONS(199),
        [anon_sym_oneway] = ACTIONS(271),
        [sym_value_base_type] = ACTIONS(199),
        [anon_sym_native] = ACTIONS(273),
        [sym_identifier] = ACTIONS(275),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [4] = {
        [sym_signed_short_int] = STATE(228),
        [sym_signed_long_int] = STATE(228),
        [sym_signed_longlong_int] = STATE(228),
        [sym_unsigned_int] = STATE(211),
        [sym_integer_type] = STATE(277),
        [sym_signed_int] = STATE(211),
        [sym_unsigned_short_int] = STATE(227),
        [sym_unsigned_long_int] = STATE(227),
        [sym_unsigned_longlong_int] = STATE(227),
        [sym_floating_pt_type] = STATE(277),
        [sym_char_type] = STATE(277),
        [sym_scoped_name] = STATE(215),
        [sym_string_type] = STATE(255),
        [sym_type_spec] = STATE(600),
        [sym_simple_type_spec] = STATE(287),
        [sym_base_type_spec] = STATE(310),
        [sym_any_type] = STATE(277),
        [sym_fixed_pt_type] = STATE(255),
        [sym_template_type_spec] = STATE(287),
        [sym_sequence_type] = STATE(255),
        [sym_map_type] = STATE(255),
        [sym_except_dcl] = STATE(612),
        [sym_export] = STATE(42),
        [sym_op_dcl] = STATE(318),
        [sym_op_type_spec] = STATE(592),
        [sym_attr_dcl] = STATE(612),
        [sym_readonly_attr_spec] = STATE(591),
        [sym_attr_spec] = STATE(591),
        [sym_bitset_dcl] = STATE(612),
        [sym_bitmask_dcl] = STATE(612),
        [sym_annotation_appl] = STATE(171),
        [sym_value_dcl] = STATE(612),
        [sym_value_def] = STATE(469),
        [sym_value_kind] = STATE(463),
        [sym_value_header] = STATE(459),
        [sym_value_element] = STATE(44),
        [sym_state_member] = STATE(42),
        [sym_init_dcl] = STATE(42),
        [sym_value_forward_dcl] = STATE(469),
        [sym_typedef_dcl] = STATE(612),
        [sym_enum_dcl] = STATE(612),
        [sym_enum_anno] = STATE(458),
        [sym_union_forward_dcl] = STATE(612),
        [sym_union_def] = STATE(612),
        [sym_type_id_dcl] = STATE(612),
        [sym_import_dcl] = STATE(612),
        [sym_op_oneway_dcl] = STATE(318),
        [sym_op_with_context] = STATE(612),
        [sym_value_abs_def] = STATE(469),
        [sym_native_dcl] = STATE(612),
        [sym_struct_forward_dcl] = STATE(612),
        [sym_struct_def] = STATE(612),
        [sym_const_dcl] = STATE(612),
        [sym_comment] = STATE(4),
        [aux_sym_interface_def_repeat1] = STATE(184),
        [aux_sym_value_def_repeat1] = STATE(2),
        [anon_sym_short] = ACTIONS(189),
        [anon_sym_int16] = ACTIONS(189),
        [anon_sym_long] = ACTIONS(191),
        [anon_sym_int32] = ACTIONS(191),
        [anon_sym_longlong] = ACTIONS(193),
        [anon_sym_int64] = ACTIONS(195),
        [sym_unsigned_tiny_int] = ACTIONS(197),
        [sym_boolean_type] = ACTIONS(199),
        [anon_sym_fixed] = ACTIONS(201),
        [sym_octet_type] = ACTIONS(199),
        [sym_signed_tiny_int] = ACTIONS(203),
        [anon_sym_unsignedshort] = ACTIONS(205),
        [anon_sym_uint16] = ACTIONS(207),
        [anon_sym_unsignedlong] = ACTIONS(209),
        [anon_sym_uint32] = ACTIONS(209),
        [anon_sym_unsignedlonglong] = ACTIONS(211),
        [anon_sym_uint64] = ACTIONS(213),
        [anon_sym_float] = ACTIONS(215),
        [anon_sym_double] = ACTIONS(215),
        [anon_sym_longdouble] = ACTIONS(217),
        [anon_sym_char] = ACTIONS(219),
        [anon_sym_wchar] = ACTIONS(219),
        [anon_sym_COLON_COLON] = ACTIONS(221),
        [anon_sym_string] = ACTIONS(223),
        [anon_sym_wstring] = ACTIONS(223),
        [anon_sym_any] = ACTIONS(225),
        [anon_sym_sequence] = ACTIONS(227),
        [anon_sym_map] = ACTIONS(229),
        [anon_sym_exception] = ACTIONS(231),
        [anon_sym_RBRACE] = ACTIONS(277),
        [anon_sym_abstract] = ACTIONS(235),
        [anon_sym_void] = ACTIONS(237),
        [anon_sym_readonly] = ACTIONS(239),
        [anon_sym_attribute] = ACTIONS(241),
        [anon_sym_bitset] = ACTIONS(243),
        [anon_sym_bitmask] = ACTIONS(245),
        [anon_sym_AT] = ACTIONS(247),
        [anon_sym_valuetype] = ACTIONS(249),
        [anon_sym_struct] = ACTIONS(251),
        [anon_sym_union] = ACTIONS(253),
        [anon_sym_enum] = ACTIONS(255),
        [anon_sym_const] = ACTIONS(257),
        [anon_sym_custom] = ACTIONS(259),
        [anon_sym_public] = ACTIONS(261),
        [anon_sym_private] = ACTIONS(261),
        [anon_sym_factory] = ACTIONS(263),
        [anon_sym_typedef] = ACTIONS(265),
        [anon_sym_ATignore_literal_names] = ACTIONS(43),
        [anon_sym_typeid] = ACTIONS(267),
        [anon_sym_import] = ACTIONS(269),
        [sym_object_type] = ACTIONS(199),
        [anon_sym_oneway] = ACTIONS(271),
        [sym_value_base_type] = ACTIONS(199),
        [anon_sym_native] = ACTIONS(273),
        [sym_identifier] = ACTIONS(275),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [5] = {
        [sym_signed_short_int] = STATE(228),
        [sym_signed_long_int] = STATE(228),
        [sym_signed_longlong_int] = STATE(228),
        [sym_unsigned_int] = STATE(211),
        [sym_integer_type] = STATE(277),
        [sym_signed_int] = STATE(211),
        [sym_unsigned_short_int] = STATE(227),
        [sym_unsigned_long_int] = STATE(227),
        [sym_unsigned_longlong_int] = STATE(227),
        [sym_floating_pt_type] = STATE(277),
        [sym_char_type] = STATE(277),
        [sym_scoped_name] = STATE(215),
        [sym_string_type] = STATE(255),
        [sym_type_spec] = STATE(600),
        [sym_simple_type_spec] = STATE(287),
        [sym_base_type_spec] = STATE(310),
        [sym_any_type] = STATE(277),
        [sym_fixed_pt_type] = STATE(255),
        [sym_template_type_spec] = STATE(287),
        [sym_sequence_type] = STATE(255),
        [sym_map_type] = STATE(255),
        [sym_except_dcl] = STATE(595),
        [sym_interface_body] = STATE(594),
        [sym_export] = STATE(51),
        [sym_op_dcl] = STATE(316),
        [sym_op_type_spec] = STATE(592),
        [sym_attr_dcl] = STATE(595),
        [sym_readonly_attr_spec] = STATE(591),
        [sym_attr_spec] = STATE(591),
        [sym_bitset_dcl] = STATE(595),
        [sym_bitmask_dcl] = STATE(595),
        [sym_annotation_appl] = STATE(171),
        [sym_value_dcl] = STATE(595),
        [sym_value_def] = STATE(469),
        [sym_value_kind] = STATE(463),
        [sym_value_header] = STATE(459),
        [sym_value_forward_dcl] = STATE(469),
        [sym_typedef_dcl] = STATE(595),
        [sym_enum_dcl] = STATE(595),
        [sym_enum_anno] = STATE(458),
        [sym_union_forward_dcl] = STATE(595),
        [sym_union_def] = STATE(595),
        [sym_type_id_dcl] = STATE(595),
        [sym_import_dcl] = STATE(595),
        [sym_op_oneway_dcl] = STATE(316),
        [sym_op_with_context] = STATE(595),
        [sym_value_abs_def] = STATE(469),
        [sym_native_dcl] = STATE(595),
        [sym_struct_forward_dcl] = STATE(595),
        [sym_struct_def] = STATE(595),
        [sym_const_dcl] = STATE(595),
        [sym_comment] = STATE(5),
        [aux_sym_interface_def_repeat1] = STATE(184),
        [aux_sym_interface_body_repeat1] = STATE(8),
        [anon_sym_short] = ACTIONS(189),
        [anon_sym_int16] = ACTIONS(189),
        [anon_sym_long] = ACTIONS(191),
        [anon_sym_int32] = ACTIONS(191),
        [anon_sym_longlong] = ACTIONS(193),
        [anon_sym_int64] = ACTIONS(195),
        [sym_unsigned_tiny_int] = ACTIONS(197),
        [sym_boolean_type] = ACTIONS(199),
        [anon_sym_fixed] = ACTIONS(201),
        [sym_octet_type] = ACTIONS(199),
        [sym_signed_tiny_int] = ACTIONS(203),
        [anon_sym_unsignedshort] = ACTIONS(205),
        [anon_sym_uint16] = ACTIONS(207),
        [anon_sym_unsignedlong] = ACTIONS(209),
        [anon_sym_uint32] = ACTIONS(209),
        [anon_sym_unsignedlonglong] = ACTIONS(211),
        [anon_sym_uint64] = ACTIONS(213),
        [anon_sym_float] = ACTIONS(215),
        [anon_sym_double] = ACTIONS(215),
        [anon_sym_longdouble] = ACTIONS(217),
        [anon_sym_char] = ACTIONS(219),
        [anon_sym_wchar] = ACTIONS(219),
        [anon_sym_COLON_COLON] = ACTIONS(221),
        [anon_sym_string] = ACTIONS(223),
        [anon_sym_wstring] = ACTIONS(223),
        [anon_sym_any] = ACTIONS(225),
        [anon_sym_sequence] = ACTIONS(227),
        [anon_sym_map] = ACTIONS(229),
        [anon_sym_exception] = ACTIONS(231),
        [anon_sym_RBRACE] = ACTIONS(279),
        [anon_sym_abstract] = ACTIONS(235),
        [anon_sym_void] = ACTIONS(237),
        [anon_sym_readonly] = ACTIONS(239),
        [anon_sym_attribute] = ACTIONS(241),
        [anon_sym_bitset] = ACTIONS(243),
        [anon_sym_bitmask] = ACTIONS(245),
        [anon_sym_AT] = ACTIONS(247),
        [anon_sym_valuetype] = ACTIONS(249),
        [anon_sym_struct] = ACTIONS(251),
        [anon_sym_union] = ACTIONS(253),
        [anon_sym_enum] = ACTIONS(255),
        [anon_sym_const] = ACTIONS(257),
        [anon_sym_custom] = ACTIONS(259),
        [anon_sym_typedef] = ACTIONS(265),
        [anon_sym_ATignore_literal_names] = ACTIONS(43),
        [anon_sym_typeid] = ACTIONS(267),
        [anon_sym_import] = ACTIONS(269),
        [sym_object_type] = ACTIONS(199),
        [anon_sym_oneway] = ACTIONS(271),
        [sym_value_base_type] = ACTIONS(199),
        [anon_sym_native] = ACTIONS(273),
        [sym_identifier] = ACTIONS(275),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [6] = {
        [sym_signed_short_int] = STATE(228),
        [sym_signed_long_int] = STATE(228),
        [sym_signed_longlong_int] = STATE(228),
        [sym_unsigned_int] = STATE(211),
        [sym_integer_type] = STATE(277),
        [sym_signed_int] = STATE(211),
        [sym_unsigned_short_int] = STATE(227),
        [sym_unsigned_long_int] = STATE(227),
        [sym_unsigned_longlong_int] = STATE(227),
        [sym_floating_pt_type] = STATE(277),
        [sym_char_type] = STATE(277),
        [sym_scoped_name] = STATE(215),
        [sym_string_type] = STATE(255),
        [sym_type_spec] = STATE(600),
        [sym_simple_type_spec] = STATE(287),
        [sym_base_type_spec] = STATE(310),
        [sym_any_type] = STATE(277),
        [sym_fixed_pt_type] = STATE(255),
        [sym_template_type_spec] = STATE(287),
        [sym_sequence_type] = STATE(255),
        [sym_map_type] = STATE(255),
        [sym_except_dcl] = STATE(595),
        [sym_interface_body] = STATE(530),
        [sym_export] = STATE(51),
        [sym_op_dcl] = STATE(316),
        [sym_op_type_spec] = STATE(592),
        [sym_attr_dcl] = STATE(595),
        [sym_readonly_attr_spec] = STATE(591),
        [sym_attr_spec] = STATE(591),
        [sym_bitset_dcl] = STATE(595),
        [sym_bitmask_dcl] = STATE(595),
        [sym_annotation_appl] = STATE(171),
        [sym_value_dcl] = STATE(595),
        [sym_value_def] = STATE(469),
        [sym_value_kind] = STATE(463),
        [sym_value_header] = STATE(459),
        [sym_value_forward_dcl] = STATE(469),
        [sym_typedef_dcl] = STATE(595),
        [sym_enum_dcl] = STATE(595),
        [sym_enum_anno] = STATE(458),
        [sym_union_forward_dcl] = STATE(595),
        [sym_union_def] = STATE(595),
        [sym_type_id_dcl] = STATE(595),
        [sym_import_dcl] = STATE(595),
        [sym_op_oneway_dcl] = STATE(316),
        [sym_op_with_context] = STATE(595),
        [sym_value_abs_def] = STATE(469),
        [sym_native_dcl] = STATE(595),
        [sym_struct_forward_dcl] = STATE(595),
        [sym_struct_def] = STATE(595),
        [sym_const_dcl] = STATE(595),
        [sym_comment] = STATE(6),
        [aux_sym_interface_def_repeat1] = STATE(184),
        [aux_sym_interface_body_repeat1] = STATE(8),
        [anon_sym_short] = ACTIONS(189),
        [anon_sym_int16] = ACTIONS(189),
        [anon_sym_long] = ACTIONS(191),
        [anon_sym_int32] = ACTIONS(191),
        [anon_sym_longlong] = ACTIONS(193),
        [anon_sym_int64] = ACTIONS(195),
        [sym_unsigned_tiny_int] = ACTIONS(197),
        [sym_boolean_type] = ACTIONS(199),
        [anon_sym_fixed] = ACTIONS(201),
        [sym_octet_type] = ACTIONS(199),
        [sym_signed_tiny_int] = ACTIONS(203),
        [anon_sym_unsignedshort] = ACTIONS(205),
        [anon_sym_uint16] = ACTIONS(207),
        [anon_sym_unsignedlong] = ACTIONS(209),
        [anon_sym_uint32] = ACTIONS(209),
        [anon_sym_unsignedlonglong] = ACTIONS(211),
        [anon_sym_uint64] = ACTIONS(213),
        [anon_sym_float] = ACTIONS(215),
        [anon_sym_double] = ACTIONS(215),
        [anon_sym_longdouble] = ACTIONS(217),
        [anon_sym_char] = ACTIONS(219),
        [anon_sym_wchar] = ACTIONS(219),
        [anon_sym_COLON_COLON] = ACTIONS(221),
        [anon_sym_string] = ACTIONS(223),
        [anon_sym_wstring] = ACTIONS(223),
        [anon_sym_any] = ACTIONS(225),
        [anon_sym_sequence] = ACTIONS(227),
        [anon_sym_map] = ACTIONS(229),
        [anon_sym_exception] = ACTIONS(231),
        [anon_sym_RBRACE] = ACTIONS(281),
        [anon_sym_abstract] = ACTIONS(235),
        [anon_sym_void] = ACTIONS(237),
        [anon_sym_readonly] = ACTIONS(239),
        [anon_sym_attribute] = ACTIONS(241),
        [anon_sym_bitset] = ACTIONS(243),
        [anon_sym_bitmask] = ACTIONS(245),
        [anon_sym_AT] = ACTIONS(247),
        [anon_sym_valuetype] = ACTIONS(249),
        [anon_sym_struct] = ACTIONS(251),
        [anon_sym_union] = ACTIONS(253),
        [anon_sym_enum] = ACTIONS(255),
        [anon_sym_const] = ACTIONS(257),
        [anon_sym_custom] = ACTIONS(259),
        [anon_sym_typedef] = ACTIONS(265),
        [anon_sym_ATignore_literal_names] = ACTIONS(43),
        [anon_sym_typeid] = ACTIONS(267),
        [anon_sym_import] = ACTIONS(269),
        [sym_object_type] = ACTIONS(199),
        [anon_sym_oneway] = ACTIONS(271),
        [sym_value_base_type] = ACTIONS(199),
        [anon_sym_native] = ACTIONS(273),
        [sym_identifier] = ACTIONS(275),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [7] = {
        [sym_signed_short_int] = STATE(228),
        [sym_signed_long_int] = STATE(228),
        [sym_signed_longlong_int] = STATE(228),
        [sym_unsigned_int] = STATE(211),
        [sym_integer_type] = STATE(277),
        [sym_signed_int] = STATE(211),
        [sym_unsigned_short_int] = STATE(227),
        [sym_unsigned_long_int] = STATE(227),
        [sym_unsigned_longlong_int] = STATE(227),
        [sym_floating_pt_type] = STATE(277),
        [sym_char_type] = STATE(277),
        [sym_scoped_name] = STATE(215),
        [sym_string_type] = STATE(255),
        [sym_type_spec] = STATE(600),
        [sym_simple_type_spec] = STATE(287),
        [sym_base_type_spec] = STATE(310),
        [sym_any_type] = STATE(277),
        [sym_fixed_pt_type] = STATE(255),
        [sym_template_type_spec] = STATE(287),
        [sym_sequence_type] = STATE(255),
        [sym_map_type] = STATE(255),
        [sym_except_dcl] = STATE(595),
        [sym_export] = STATE(51),
        [sym_op_dcl] = STATE(316),
        [sym_op_type_spec] = STATE(592),
        [sym_attr_dcl] = STATE(595),
        [sym_readonly_attr_spec] = STATE(591),
        [sym_attr_spec] = STATE(591),
        [sym_bitset_dcl] = STATE(595),
        [sym_bitmask_dcl] = STATE(595),
        [sym_annotation_appl] = STATE(171),
        [sym_value_dcl] = STATE(595),
        [sym_value_def] = STATE(469),
        [sym_value_kind] = STATE(463),
        [sym_value_header] = STATE(459),
        [sym_value_forward_dcl] = STATE(469),
        [sym_typedef_dcl] = STATE(595),
        [sym_enum_dcl] = STATE(595),
        [sym_enum_anno] = STATE(458),
        [sym_union_forward_dcl] = STATE(595),
        [sym_union_def] = STATE(595),
        [sym_type_id_dcl] = STATE(595),
        [sym_import_dcl] = STATE(595),
        [sym_op_oneway_dcl] = STATE(316),
        [sym_op_with_context] = STATE(595),
        [sym_value_abs_def] = STATE(469),
        [sym_native_dcl] = STATE(595),
        [sym_struct_forward_dcl] = STATE(595),
        [sym_struct_def] = STATE(595),
        [sym_const_dcl] = STATE(595),
        [sym_comment] = STATE(7),
        [aux_sym_interface_def_repeat1] = STATE(184),
        [aux_sym_interface_body_repeat1] = STATE(12),
        [anon_sym_short] = ACTIONS(189),
        [anon_sym_int16] = ACTIONS(189),
        [anon_sym_long] = ACTIONS(191),
        [anon_sym_int32] = ACTIONS(191),
        [anon_sym_longlong] = ACTIONS(193),
        [anon_sym_int64] = ACTIONS(195),
        [sym_unsigned_tiny_int] = ACTIONS(197),
        [sym_boolean_type] = ACTIONS(199),
        [anon_sym_fixed] = ACTIONS(201),
        [sym_octet_type] = ACTIONS(199),
        [sym_signed_tiny_int] = ACTIONS(203),
        [anon_sym_unsignedshort] = ACTIONS(205),
        [anon_sym_uint16] = ACTIONS(207),
        [anon_sym_unsignedlong] = ACTIONS(209),
        [anon_sym_uint32] = ACTIONS(209),
        [anon_sym_unsignedlonglong] = ACTIONS(211),
        [anon_sym_uint64] = ACTIONS(213),
        [anon_sym_float] = ACTIONS(215),
        [anon_sym_double] = ACTIONS(215),
        [anon_sym_longdouble] = ACTIONS(217),
        [anon_sym_char] = ACTIONS(219),
        [anon_sym_wchar] = ACTIONS(219),
        [anon_sym_COLON_COLON] = ACTIONS(221),
        [anon_sym_string] = ACTIONS(223),
        [anon_sym_wstring] = ACTIONS(223),
        [anon_sym_any] = ACTIONS(225),
        [anon_sym_sequence] = ACTIONS(227),
        [anon_sym_map] = ACTIONS(229),
        [anon_sym_exception] = ACTIONS(231),
        [anon_sym_RBRACE] = ACTIONS(283),
        [anon_sym_abstract] = ACTIONS(235),
        [anon_sym_void] = ACTIONS(237),
        [anon_sym_readonly] = ACTIONS(239),
        [anon_sym_attribute] = ACTIONS(241),
        [anon_sym_bitset] = ACTIONS(243),
        [anon_sym_bitmask] = ACTIONS(245),
        [anon_sym_AT] = ACTIONS(247),
        [anon_sym_valuetype] = ACTIONS(249),
        [anon_sym_struct] = ACTIONS(251),
        [anon_sym_union] = ACTIONS(253),
        [anon_sym_enum] = ACTIONS(255),
        [anon_sym_const] = ACTIONS(257),
        [anon_sym_custom] = ACTIONS(259),
        [anon_sym_typedef] = ACTIONS(265),
        [anon_sym_ATignore_literal_names] = ACTIONS(43),
        [anon_sym_typeid] = ACTIONS(267),
        [anon_sym_import] = ACTIONS(269),
        [sym_object_type] = ACTIONS(199),
        [anon_sym_oneway] = ACTIONS(271),
        [sym_value_base_type] = ACTIONS(199),
        [anon_sym_native] = ACTIONS(273),
        [sym_identifier] = ACTIONS(275),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [8] = {
        [sym_signed_short_int] = STATE(228),
        [sym_signed_long_int] = STATE(228),
        [sym_signed_longlong_int] = STATE(228),
        [sym_unsigned_int] = STATE(211),
        [sym_integer_type] = STATE(277),
        [sym_signed_int] = STATE(211),
        [sym_unsigned_short_int] = STATE(227),
        [sym_unsigned_long_int] = STATE(227),
        [sym_unsigned_longlong_int] = STATE(227),
        [sym_floating_pt_type] = STATE(277),
        [sym_char_type] = STATE(277),
        [sym_scoped_name] = STATE(215),
        [sym_string_type] = STATE(255),
        [sym_type_spec] = STATE(600),
        [sym_simple_type_spec] = STATE(287),
        [sym_base_type_spec] = STATE(310),
        [sym_any_type] = STATE(277),
        [sym_fixed_pt_type] = STATE(255),
        [sym_template_type_spec] = STATE(287),
        [sym_sequence_type] = STATE(255),
        [sym_map_type] = STATE(255),
        [sym_except_dcl] = STATE(595),
        [sym_export] = STATE(51),
        [sym_op_dcl] = STATE(316),
        [sym_op_type_spec] = STATE(592),
        [sym_attr_dcl] = STATE(595),
        [sym_readonly_attr_spec] = STATE(591),
        [sym_attr_spec] = STATE(591),
        [sym_bitset_dcl] = STATE(595),
        [sym_bitmask_dcl] = STATE(595),
        [sym_annotation_appl] = STATE(171),
        [sym_value_dcl] = STATE(595),
        [sym_value_def] = STATE(469),
        [sym_value_kind] = STATE(463),
        [sym_value_header] = STATE(459),
        [sym_value_forward_dcl] = STATE(469),
        [sym_typedef_dcl] = STATE(595),
        [sym_enum_dcl] = STATE(595),
        [sym_enum_anno] = STATE(458),
        [sym_union_forward_dcl] = STATE(595),
        [sym_union_def] = STATE(595),
        [sym_type_id_dcl] = STATE(595),
        [sym_import_dcl] = STATE(595),
        [sym_op_oneway_dcl] = STATE(316),
        [sym_op_with_context] = STATE(595),
        [sym_value_abs_def] = STATE(469),
        [sym_native_dcl] = STATE(595),
        [sym_struct_forward_dcl] = STATE(595),
        [sym_struct_def] = STATE(595),
        [sym_const_dcl] = STATE(595),
        [sym_comment] = STATE(8),
        [aux_sym_interface_def_repeat1] = STATE(184),
        [aux_sym_interface_body_repeat1] = STATE(10),
        [anon_sym_short] = ACTIONS(189),
        [anon_sym_int16] = ACTIONS(189),
        [anon_sym_long] = ACTIONS(191),
        [anon_sym_int32] = ACTIONS(191),
        [anon_sym_longlong] = ACTIONS(193),
        [anon_sym_int64] = ACTIONS(195),
        [sym_unsigned_tiny_int] = ACTIONS(197),
        [sym_boolean_type] = ACTIONS(199),
        [anon_sym_fixed] = ACTIONS(201),
        [sym_octet_type] = ACTIONS(199),
        [sym_signed_tiny_int] = ACTIONS(203),
        [anon_sym_unsignedshort] = ACTIONS(205),
        [anon_sym_uint16] = ACTIONS(207),
        [anon_sym_unsignedlong] = ACTIONS(209),
        [anon_sym_uint32] = ACTIONS(209),
        [anon_sym_unsignedlonglong] = ACTIONS(211),
        [anon_sym_uint64] = ACTIONS(213),
        [anon_sym_float] = ACTIONS(215),
        [anon_sym_double] = ACTIONS(215),
        [anon_sym_longdouble] = ACTIONS(217),
        [anon_sym_char] = ACTIONS(219),
        [anon_sym_wchar] = ACTIONS(219),
        [anon_sym_COLON_COLON] = ACTIONS(221),
        [anon_sym_string] = ACTIONS(223),
        [anon_sym_wstring] = ACTIONS(223),
        [anon_sym_any] = ACTIONS(225),
        [anon_sym_sequence] = ACTIONS(227),
        [anon_sym_map] = ACTIONS(229),
        [anon_sym_exception] = ACTIONS(231),
        [anon_sym_RBRACE] = ACTIONS(285),
        [anon_sym_abstract] = ACTIONS(235),
        [anon_sym_void] = ACTIONS(237),
        [anon_sym_readonly] = ACTIONS(239),
        [anon_sym_attribute] = ACTIONS(241),
        [anon_sym_bitset] = ACTIONS(243),
        [anon_sym_bitmask] = ACTIONS(245),
        [anon_sym_AT] = ACTIONS(247),
        [anon_sym_valuetype] = ACTIONS(249),
        [anon_sym_struct] = ACTIONS(251),
        [anon_sym_union] = ACTIONS(253),
        [anon_sym_enum] = ACTIONS(255),
        [anon_sym_const] = ACTIONS(257),
        [anon_sym_custom] = ACTIONS(259),
        [anon_sym_typedef] = ACTIONS(265),
        [anon_sym_ATignore_literal_names] = ACTIONS(43),
        [anon_sym_typeid] = ACTIONS(267),
        [anon_sym_import] = ACTIONS(269),
        [sym_object_type] = ACTIONS(199),
        [anon_sym_oneway] = ACTIONS(271),
        [sym_value_base_type] = ACTIONS(199),
        [anon_sym_native] = ACTIONS(273),
        [sym_identifier] = ACTIONS(275),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [9] = {
        [sym_signed_short_int] = STATE(228),
        [sym_signed_long_int] = STATE(228),
        [sym_signed_longlong_int] = STATE(228),
        [sym_unsigned_int] = STATE(211),
        [sym_integer_type] = STATE(277),
        [sym_signed_int] = STATE(211),
        [sym_unsigned_short_int] = STATE(227),
        [sym_unsigned_long_int] = STATE(227),
        [sym_unsigned_longlong_int] = STATE(227),
        [sym_floating_pt_type] = STATE(277),
        [sym_char_type] = STATE(277),
        [sym_scoped_name] = STATE(215),
        [sym_string_type] = STATE(255),
        [sym_type_spec] = STATE(600),
        [sym_simple_type_spec] = STATE(287),
        [sym_base_type_spec] = STATE(310),
        [sym_any_type] = STATE(277),
        [sym_fixed_pt_type] = STATE(255),
        [sym_template_type_spec] = STATE(287),
        [sym_sequence_type] = STATE(255),
        [sym_map_type] = STATE(255),
        [sym_except_dcl] = STATE(595),
        [sym_export] = STATE(51),
        [sym_op_dcl] = STATE(316),
        [sym_op_type_spec] = STATE(592),
        [sym_attr_dcl] = STATE(595),
        [sym_readonly_attr_spec] = STATE(591),
        [sym_attr_spec] = STATE(591),
        [sym_bitset_dcl] = STATE(595),
        [sym_bitmask_dcl] = STATE(595),
        [sym_annotation_appl] = STATE(171),
        [sym_value_dcl] = STATE(595),
        [sym_value_def] = STATE(469),
        [sym_value_kind] = STATE(463),
        [sym_value_header] = STATE(459),
        [sym_value_forward_dcl] = STATE(469),
        [sym_typedef_dcl] = STATE(595),
        [sym_enum_dcl] = STATE(595),
        [sym_enum_anno] = STATE(458),
        [sym_union_forward_dcl] = STATE(595),
        [sym_union_def] = STATE(595),
        [sym_type_id_dcl] = STATE(595),
        [sym_import_dcl] = STATE(595),
        [sym_op_oneway_dcl] = STATE(316),
        [sym_op_with_context] = STATE(595),
        [sym_value_abs_def] = STATE(469),
        [sym_native_dcl] = STATE(595),
        [sym_struct_forward_dcl] = STATE(595),
        [sym_struct_def] = STATE(595),
        [sym_const_dcl] = STATE(595),
        [sym_comment] = STATE(9),
        [aux_sym_interface_def_repeat1] = STATE(184),
        [aux_sym_interface_body_repeat1] = STATE(11),
        [anon_sym_short] = ACTIONS(189),
        [anon_sym_int16] = ACTIONS(189),
        [anon_sym_long] = ACTIONS(191),
        [anon_sym_int32] = ACTIONS(191),
        [anon_sym_longlong] = ACTIONS(193),
        [anon_sym_int64] = ACTIONS(195),
        [sym_unsigned_tiny_int] = ACTIONS(197),
        [sym_boolean_type] = ACTIONS(199),
        [anon_sym_fixed] = ACTIONS(201),
        [sym_octet_type] = ACTIONS(199),
        [sym_signed_tiny_int] = ACTIONS(203),
        [anon_sym_unsignedshort] = ACTIONS(205),
        [anon_sym_uint16] = ACTIONS(207),
        [anon_sym_unsignedlong] = ACTIONS(209),
        [anon_sym_uint32] = ACTIONS(209),
        [anon_sym_unsignedlonglong] = ACTIONS(211),
        [anon_sym_uint64] = ACTIONS(213),
        [anon_sym_float] = ACTIONS(215),
        [anon_sym_double] = ACTIONS(215),
        [anon_sym_longdouble] = ACTIONS(217),
        [anon_sym_char] = ACTIONS(219),
        [anon_sym_wchar] = ACTIONS(219),
        [anon_sym_COLON_COLON] = ACTIONS(221),
        [anon_sym_string] = ACTIONS(223),
        [anon_sym_wstring] = ACTIONS(223),
        [anon_sym_any] = ACTIONS(225),
        [anon_sym_sequence] = ACTIONS(227),
        [anon_sym_map] = ACTIONS(229),
        [anon_sym_exception] = ACTIONS(231),
        [anon_sym_RBRACE] = ACTIONS(287),
        [anon_sym_abstract] = ACTIONS(235),
        [anon_sym_void] = ACTIONS(237),
        [anon_sym_readonly] = ACTIONS(239),
        [anon_sym_attribute] = ACTIONS(241),
        [anon_sym_bitset] = ACTIONS(243),
        [anon_sym_bitmask] = ACTIONS(245),
        [anon_sym_AT] = ACTIONS(247),
        [anon_sym_valuetype] = ACTIONS(249),
        [anon_sym_struct] = ACTIONS(251),
        [anon_sym_union] = ACTIONS(253),
        [anon_sym_enum] = ACTIONS(255),
        [anon_sym_const] = ACTIONS(257),
        [anon_sym_custom] = ACTIONS(259),
        [anon_sym_typedef] = ACTIONS(265),
        [anon_sym_ATignore_literal_names] = ACTIONS(43),
        [anon_sym_typeid] = ACTIONS(267),
        [anon_sym_import] = ACTIONS(269),
        [sym_object_type] = ACTIONS(199),
        [anon_sym_oneway] = ACTIONS(271),
        [sym_value_base_type] = ACTIONS(199),
        [anon_sym_native] = ACTIONS(273),
        [sym_identifier] = ACTIONS(275),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [10] = {
        [sym_signed_short_int] = STATE(228),
        [sym_signed_long_int] = STATE(228),
        [sym_signed_longlong_int] = STATE(228),
        [sym_unsigned_int] = STATE(211),
        [sym_integer_type] = STATE(277),
        [sym_signed_int] = STATE(211),
        [sym_unsigned_short_int] = STATE(227),
        [sym_unsigned_long_int] = STATE(227),
        [sym_unsigned_longlong_int] = STATE(227),
        [sym_floating_pt_type] = STATE(277),
        [sym_char_type] = STATE(277),
        [sym_scoped_name] = STATE(215),
        [sym_string_type] = STATE(255),
        [sym_type_spec] = STATE(600),
        [sym_simple_type_spec] = STATE(287),
        [sym_base_type_spec] = STATE(310),
        [sym_any_type] = STATE(277),
        [sym_fixed_pt_type] = STATE(255),
        [sym_template_type_spec] = STATE(287),
        [sym_sequence_type] = STATE(255),
        [sym_map_type] = STATE(255),
        [sym_except_dcl] = STATE(595),
        [sym_export] = STATE(51),
        [sym_op_dcl] = STATE(316),
        [sym_op_type_spec] = STATE(592),
        [sym_attr_dcl] = STATE(595),
        [sym_readonly_attr_spec] = STATE(591),
        [sym_attr_spec] = STATE(591),
        [sym_bitset_dcl] = STATE(595),
        [sym_bitmask_dcl] = STATE(595),
        [sym_annotation_appl] = STATE(171),
        [sym_value_dcl] = STATE(595),
        [sym_value_def] = STATE(469),
        [sym_value_kind] = STATE(463),
        [sym_value_header] = STATE(459),
        [sym_value_forward_dcl] = STATE(469),
        [sym_typedef_dcl] = STATE(595),
        [sym_enum_dcl] = STATE(595),
        [sym_enum_anno] = STATE(458),
        [sym_union_forward_dcl] = STATE(595),
        [sym_union_def] = STATE(595),
        [sym_type_id_dcl] = STATE(595),
        [sym_import_dcl] = STATE(595),
        [sym_op_oneway_dcl] = STATE(316),
        [sym_op_with_context] = STATE(595),
        [sym_value_abs_def] = STATE(469),
        [sym_native_dcl] = STATE(595),
        [sym_struct_forward_dcl] = STATE(595),
        [sym_struct_def] = STATE(595),
        [sym_const_dcl] = STATE(595),
        [sym_comment] = STATE(10),
        [aux_sym_interface_def_repeat1] = STATE(184),
        [aux_sym_interface_body_repeat1] = STATE(10),
        [anon_sym_short] = ACTIONS(289),
        [anon_sym_int16] = ACTIONS(289),
        [anon_sym_long] = ACTIONS(292),
        [anon_sym_int32] = ACTIONS(292),
        [anon_sym_longlong] = ACTIONS(295),
        [anon_sym_int64] = ACTIONS(298),
        [sym_unsigned_tiny_int] = ACTIONS(301),
        [sym_boolean_type] = ACTIONS(304),
        [anon_sym_fixed] = ACTIONS(307),
        [sym_octet_type] = ACTIONS(304),
        [sym_signed_tiny_int] = ACTIONS(310),
        [anon_sym_unsignedshort] = ACTIONS(313),
        [anon_sym_uint16] = ACTIONS(316),
        [anon_sym_unsignedlong] = ACTIONS(319),
        [anon_sym_uint32] = ACTIONS(319),
        [anon_sym_unsignedlonglong] = ACTIONS(322),
        [anon_sym_uint64] = ACTIONS(325),
        [anon_sym_float] = ACTIONS(328),
        [anon_sym_double] = ACTIONS(328),
        [anon_sym_longdouble] = ACTIONS(331),
        [anon_sym_char] = ACTIONS(334),
        [anon_sym_wchar] = ACTIONS(334),
        [anon_sym_COLON_COLON] = ACTIONS(337),
        [anon_sym_string] = ACTIONS(340),
        [anon_sym_wstring] = ACTIONS(340),
        [anon_sym_any] = ACTIONS(343),
        [anon_sym_sequence] = ACTIONS(346),
        [anon_sym_map] = ACTIONS(349),
        [anon_sym_exception] = ACTIONS(352),
        [anon_sym_RBRACE] = ACTIONS(355),
        [anon_sym_abstract] = ACTIONS(357),
        [anon_sym_void] = ACTIONS(360),
        [anon_sym_readonly] = ACTIONS(363),
        [anon_sym_attribute] = ACTIONS(366),
        [anon_sym_bitset] = ACTIONS(369),
        [anon_sym_bitmask] = ACTIONS(372),
        [anon_sym_AT] = ACTIONS(375),
        [anon_sym_valuetype] = ACTIONS(378),
        [anon_sym_struct] = ACTIONS(381),
        [anon_sym_union] = ACTIONS(384),
        [anon_sym_enum] = ACTIONS(387),
        [anon_sym_const] = ACTIONS(390),
        [anon_sym_custom] = ACTIONS(393),
        [anon_sym_typedef] = ACTIONS(396),
        [anon_sym_ATignore_literal_names] = ACTIONS(399),
        [anon_sym_typeid] = ACTIONS(402),
        [anon_sym_import] = ACTIONS(405),
        [sym_object_type] = ACTIONS(304),
        [anon_sym_oneway] = ACTIONS(408),
        [sym_value_base_type] = ACTIONS(304),
        [anon_sym_native] = ACTIONS(411),
        [sym_identifier] = ACTIONS(414),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [11] = {
        [sym_signed_short_int] = STATE(228),
        [sym_signed_long_int] = STATE(228),
        [sym_signed_longlong_int] = STATE(228),
        [sym_unsigned_int] = STATE(211),
        [sym_integer_type] = STATE(277),
        [sym_signed_int] = STATE(211),
        [sym_unsigned_short_int] = STATE(227),
        [sym_unsigned_long_int] = STATE(227),
        [sym_unsigned_longlong_int] = STATE(227),
        [sym_floating_pt_type] = STATE(277),
        [sym_char_type] = STATE(277),
        [sym_scoped_name] = STATE(215),
        [sym_string_type] = STATE(255),
        [sym_type_spec] = STATE(600),
        [sym_simple_type_spec] = STATE(287),
        [sym_base_type_spec] = STATE(310),
        [sym_any_type] = STATE(277),
        [sym_fixed_pt_type] = STATE(255),
        [sym_template_type_spec] = STATE(287),
        [sym_sequence_type] = STATE(255),
        [sym_map_type] = STATE(255),
        [sym_except_dcl] = STATE(595),
        [sym_export] = STATE(51),
        [sym_op_dcl] = STATE(316),
        [sym_op_type_spec] = STATE(592),
        [sym_attr_dcl] = STATE(595),
        [sym_readonly_attr_spec] = STATE(591),
        [sym_attr_spec] = STATE(591),
        [sym_bitset_dcl] = STATE(595),
        [sym_bitmask_dcl] = STATE(595),
        [sym_annotation_appl] = STATE(171),
        [sym_value_dcl] = STATE(595),
        [sym_value_def] = STATE(469),
        [sym_value_kind] = STATE(463),
        [sym_value_header] = STATE(459),
        [sym_value_forward_dcl] = STATE(469),
        [sym_typedef_dcl] = STATE(595),
        [sym_enum_dcl] = STATE(595),
        [sym_enum_anno] = STATE(458),
        [sym_union_forward_dcl] = STATE(595),
        [sym_union_def] = STATE(595),
        [sym_type_id_dcl] = STATE(595),
        [sym_import_dcl] = STATE(595),
        [sym_op_oneway_dcl] = STATE(316),
        [sym_op_with_context] = STATE(595),
        [sym_value_abs_def] = STATE(469),
        [sym_native_dcl] = STATE(595),
        [sym_struct_forward_dcl] = STATE(595),
        [sym_struct_def] = STATE(595),
        [sym_const_dcl] = STATE(595),
        [sym_comment] = STATE(11),
        [aux_sym_interface_def_repeat1] = STATE(184),
        [aux_sym_interface_body_repeat1] = STATE(10),
        [anon_sym_short] = ACTIONS(189),
        [anon_sym_int16] = ACTIONS(189),
        [anon_sym_long] = ACTIONS(191),
        [anon_sym_int32] = ACTIONS(191),
        [anon_sym_longlong] = ACTIONS(193),
        [anon_sym_int64] = ACTIONS(195),
        [sym_unsigned_tiny_int] = ACTIONS(197),
        [sym_boolean_type] = ACTIONS(199),
        [anon_sym_fixed] = ACTIONS(201),
        [sym_octet_type] = ACTIONS(199),
        [sym_signed_tiny_int] = ACTIONS(203),
        [anon_sym_unsignedshort] = ACTIONS(205),
        [anon_sym_uint16] = ACTIONS(207),
        [anon_sym_unsignedlong] = ACTIONS(209),
        [anon_sym_uint32] = ACTIONS(209),
        [anon_sym_unsignedlonglong] = ACTIONS(211),
        [anon_sym_uint64] = ACTIONS(213),
        [anon_sym_float] = ACTIONS(215),
        [anon_sym_double] = ACTIONS(215),
        [anon_sym_longdouble] = ACTIONS(217),
        [anon_sym_char] = ACTIONS(219),
        [anon_sym_wchar] = ACTIONS(219),
        [anon_sym_COLON_COLON] = ACTIONS(221),
        [anon_sym_string] = ACTIONS(223),
        [anon_sym_wstring] = ACTIONS(223),
        [anon_sym_any] = ACTIONS(225),
        [anon_sym_sequence] = ACTIONS(227),
        [anon_sym_map] = ACTIONS(229),
        [anon_sym_exception] = ACTIONS(231),
        [anon_sym_RBRACE] = ACTIONS(283),
        [anon_sym_abstract] = ACTIONS(235),
        [anon_sym_void] = ACTIONS(237),
        [anon_sym_readonly] = ACTIONS(239),
        [anon_sym_attribute] = ACTIONS(241),
        [anon_sym_bitset] = ACTIONS(243),
        [anon_sym_bitmask] = ACTIONS(245),
        [anon_sym_AT] = ACTIONS(247),
        [anon_sym_valuetype] = ACTIONS(249),
        [anon_sym_struct] = ACTIONS(251),
        [anon_sym_union] = ACTIONS(253),
        [anon_sym_enum] = ACTIONS(255),
        [anon_sym_const] = ACTIONS(257),
        [anon_sym_custom] = ACTIONS(259),
        [anon_sym_typedef] = ACTIONS(265),
        [anon_sym_ATignore_literal_names] = ACTIONS(43),
        [anon_sym_typeid] = ACTIONS(267),
        [anon_sym_import] = ACTIONS(269),
        [sym_object_type] = ACTIONS(199),
        [anon_sym_oneway] = ACTIONS(271),
        [sym_value_base_type] = ACTIONS(199),
        [anon_sym_native] = ACTIONS(273),
        [sym_identifier] = ACTIONS(275),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [12] = {
        [sym_signed_short_int] = STATE(228),
        [sym_signed_long_int] = STATE(228),
        [sym_signed_longlong_int] = STATE(228),
        [sym_unsigned_int] = STATE(211),
        [sym_integer_type] = STATE(277),
        [sym_signed_int] = STATE(211),
        [sym_unsigned_short_int] = STATE(227),
        [sym_unsigned_long_int] = STATE(227),
        [sym_unsigned_longlong_int] = STATE(227),
        [sym_floating_pt_type] = STATE(277),
        [sym_char_type] = STATE(277),
        [sym_scoped_name] = STATE(215),
        [sym_string_type] = STATE(255),
        [sym_type_spec] = STATE(600),
        [sym_simple_type_spec] = STATE(287),
        [sym_base_type_spec] = STATE(310),
        [sym_any_type] = STATE(277),
        [sym_fixed_pt_type] = STATE(255),
        [sym_template_type_spec] = STATE(287),
        [sym_sequence_type] = STATE(255),
        [sym_map_type] = STATE(255),
        [sym_except_dcl] = STATE(595),
        [sym_export] = STATE(51),
        [sym_op_dcl] = STATE(316),
        [sym_op_type_spec] = STATE(592),
        [sym_attr_dcl] = STATE(595),
        [sym_readonly_attr_spec] = STATE(591),
        [sym_attr_spec] = STATE(591),
        [sym_bitset_dcl] = STATE(595),
        [sym_bitmask_dcl] = STATE(595),
        [sym_annotation_appl] = STATE(171),
        [sym_value_dcl] = STATE(595),
        [sym_value_def] = STATE(469),
        [sym_value_kind] = STATE(463),
        [sym_value_header] = STATE(459),
        [sym_value_forward_dcl] = STATE(469),
        [sym_typedef_dcl] = STATE(595),
        [sym_enum_dcl] = STATE(595),
        [sym_enum_anno] = STATE(458),
        [sym_union_forward_dcl] = STATE(595),
        [sym_union_def] = STATE(595),
        [sym_type_id_dcl] = STATE(595),
        [sym_import_dcl] = STATE(595),
        [sym_op_oneway_dcl] = STATE(316),
        [sym_op_with_context] = STATE(595),
        [sym_value_abs_def] = STATE(469),
        [sym_native_dcl] = STATE(595),
        [sym_struct_forward_dcl] = STATE(595),
        [sym_struct_def] = STATE(595),
        [sym_const_dcl] = STATE(595),
        [sym_comment] = STATE(12),
        [aux_sym_interface_def_repeat1] = STATE(184),
        [aux_sym_interface_body_repeat1] = STATE(10),
        [anon_sym_short] = ACTIONS(189),
        [anon_sym_int16] = ACTIONS(189),
        [anon_sym_long] = ACTIONS(191),
        [anon_sym_int32] = ACTIONS(191),
        [anon_sym_longlong] = ACTIONS(193),
        [anon_sym_int64] = ACTIONS(195),
        [sym_unsigned_tiny_int] = ACTIONS(197),
        [sym_boolean_type] = ACTIONS(199),
        [anon_sym_fixed] = ACTIONS(201),
        [sym_octet_type] = ACTIONS(199),
        [sym_signed_tiny_int] = ACTIONS(203),
        [anon_sym_unsignedshort] = ACTIONS(205),
        [anon_sym_uint16] = ACTIONS(207),
        [anon_sym_unsignedlong] = ACTIONS(209),
        [anon_sym_uint32] = ACTIONS(209),
        [anon_sym_unsignedlonglong] = ACTIONS(211),
        [anon_sym_uint64] = ACTIONS(213),
        [anon_sym_float] = ACTIONS(215),
        [anon_sym_double] = ACTIONS(215),
        [anon_sym_longdouble] = ACTIONS(217),
        [anon_sym_char] = ACTIONS(219),
        [anon_sym_wchar] = ACTIONS(219),
        [anon_sym_COLON_COLON] = ACTIONS(221),
        [anon_sym_string] = ACTIONS(223),
        [anon_sym_wstring] = ACTIONS(223),
        [anon_sym_any] = ACTIONS(225),
        [anon_sym_sequence] = ACTIONS(227),
        [anon_sym_map] = ACTIONS(229),
        [anon_sym_exception] = ACTIONS(231),
        [anon_sym_RBRACE] = ACTIONS(417),
        [anon_sym_abstract] = ACTIONS(235),
        [anon_sym_void] = ACTIONS(237),
        [anon_sym_readonly] = ACTIONS(239),
        [anon_sym_attribute] = ACTIONS(241),
        [anon_sym_bitset] = ACTIONS(243),
        [anon_sym_bitmask] = ACTIONS(245),
        [anon_sym_AT] = ACTIONS(247),
        [anon_sym_valuetype] = ACTIONS(249),
        [anon_sym_struct] = ACTIONS(251),
        [anon_sym_union] = ACTIONS(253),
        [anon_sym_enum] = ACTIONS(255),
        [anon_sym_const] = ACTIONS(257),
        [anon_sym_custom] = ACTIONS(259),
        [anon_sym_typedef] = ACTIONS(265),
        [anon_sym_ATignore_literal_names] = ACTIONS(43),
        [anon_sym_typeid] = ACTIONS(267),
        [anon_sym_import] = ACTIONS(269),
        [sym_object_type] = ACTIONS(199),
        [anon_sym_oneway] = ACTIONS(271),
        [sym_value_base_type] = ACTIONS(199),
        [anon_sym_native] = ACTIONS(273),
        [sym_identifier] = ACTIONS(275),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [13] = {
        [sym_signed_short_int] = STATE(228),
        [sym_signed_long_int] = STATE(228),
        [sym_signed_longlong_int] = STATE(228),
        [sym_unsigned_int] = STATE(211),
        [sym_integer_type] = STATE(277),
        [sym_signed_int] = STATE(211),
        [sym_unsigned_short_int] = STATE(227),
        [sym_unsigned_long_int] = STATE(227),
        [sym_unsigned_longlong_int] = STATE(227),
        [sym_floating_pt_type] = STATE(277),
        [sym_char_type] = STATE(277),
        [sym_scoped_name] = STATE(143),
        [sym_string_type] = STATE(255),
        [sym_type_spec] = STATE(410),
        [sym_simple_type_spec] = STATE(287),
        [sym_base_type_spec] = STATE(310),
        [sym_any_type] = STATE(277),
        [sym_fixed_pt_type] = STATE(255),
        [sym_template_type_spec] = STATE(287),
        [sym_sequence_type] = STATE(255),
        [sym_map_type] = STATE(255),
        [sym_const_expr] = STATE(410),
        [sym_or_expr] = STATE(158),
        [sym_xor_expr] = STATE(150),
        [sym_and_expr] = STATE(148),
        [sym_shift_expr] = STATE(144),
        [sym_add_expr] = STATE(141),
        [sym_mult_expr] = STATE(138),
        [sym_unary_expr] = STATE(136),
        [sym_unary_operator] = STATE(139),
        [sym_literal] = STATE(128),
        [sym_string_literal] = STATE(131),
        [sym_char_literal] = STATE(131),
        [sym_boolean_literal] = STATE(131),
        [sym_actual_parameters] = STATE(551),
        [sym_actual_parameter] = STATE(252),
        [sym_comment] = STATE(13),
        [anon_sym_short] = ACTIONS(189),
        [anon_sym_int16] = ACTIONS(189),
        [anon_sym_long] = ACTIONS(191),
        [anon_sym_int32] = ACTIONS(191),
        [anon_sym_longlong] = ACTIONS(193),
        [anon_sym_int64] = ACTIONS(195),
        [sym_unsigned_tiny_int] = ACTIONS(197),
        [sym_boolean_type] = ACTIONS(199),
        [anon_sym_fixed] = ACTIONS(201),
        [sym_octet_type] = ACTIONS(199),
        [sym_signed_tiny_int] = ACTIONS(203),
        [anon_sym_unsignedshort] = ACTIONS(205),
        [anon_sym_uint16] = ACTIONS(207),
        [anon_sym_unsignedlong] = ACTIONS(209),
        [anon_sym_uint32] = ACTIONS(209),
        [anon_sym_unsignedlonglong] = ACTIONS(211),
        [anon_sym_uint64] = ACTIONS(213),
        [anon_sym_float] = ACTIONS(215),
        [anon_sym_double] = ACTIONS(215),
        [anon_sym_longdouble] = ACTIONS(217),
        [anon_sym_char] = ACTIONS(219),
        [anon_sym_wchar] = ACTIONS(219),
        [anon_sym_COLON_COLON] = ACTIONS(419),
        [anon_sym_string] = ACTIONS(223),
        [anon_sym_wstring] = ACTIONS(223),
        [anon_sym_any] = ACTIONS(225),
        [anon_sym_sequence] = ACTIONS(227),
        [anon_sym_map] = ACTIONS(229),
        [anon_sym_PLUS] = ACTIONS(421),
        [anon_sym_DASH] = ACTIONS(421),
        [anon_sym_LPAREN] = ACTIONS(423),
        [anon_sym_TILDE] = ACTIONS(425),
        [anon_sym_L] = ACTIONS(427),
        [anon_sym_DQUOTE] = ACTIONS(429),
        [anon_sym_SQUOTE] = ACTIONS(431),
        [anon_sym_TRUE] = ACTIONS(433),
        [anon_sym_FALSE] = ACTIONS(433),
        [sym_number_literal] = ACTIONS(435),
        [sym_object_type] = ACTIONS(199),
        [sym_value_base_type] = ACTIONS(199),
        [sym_identifier] = ACTIONS(437),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [14] = {
        [sym_signed_short_int] = STATE(228),
        [sym_signed_long_int] = STATE(228),
        [sym_signed_longlong_int] = STATE(228),
        [sym_unsigned_int] = STATE(211),
        [sym_integer_type] = STATE(277),
        [sym_signed_int] = STATE(211),
        [sym_unsigned_short_int] = STATE(227),
        [sym_unsigned_long_int] = STATE(227),
        [sym_unsigned_longlong_int] = STATE(227),
        [sym_floating_pt_type] = STATE(277),
        [sym_char_type] = STATE(277),
        [sym_scoped_name] = STATE(143),
        [sym_string_type] = STATE(255),
        [sym_type_spec] = STATE(410),
        [sym_simple_type_spec] = STATE(287),
        [sym_base_type_spec] = STATE(310),
        [sym_any_type] = STATE(277),
        [sym_fixed_pt_type] = STATE(255),
        [sym_template_type_spec] = STATE(287),
        [sym_sequence_type] = STATE(255),
        [sym_map_type] = STATE(255),
        [sym_const_expr] = STATE(410),
        [sym_or_expr] = STATE(158),
        [sym_xor_expr] = STATE(150),
        [sym_and_expr] = STATE(148),
        [sym_shift_expr] = STATE(144),
        [sym_add_expr] = STATE(141),
        [sym_mult_expr] = STATE(138),
        [sym_unary_expr] = STATE(136),
        [sym_unary_operator] = STATE(139),
        [sym_literal] = STATE(128),
        [sym_string_literal] = STATE(131),
        [sym_char_literal] = STATE(131),
        [sym_boolean_literal] = STATE(131),
        [sym_actual_parameter] = STATE(404),
        [sym_comment] = STATE(14),
        [anon_sym_short] = ACTIONS(189),
        [anon_sym_int16] = ACTIONS(189),
        [anon_sym_long] = ACTIONS(191),
        [anon_sym_int32] = ACTIONS(191),
        [anon_sym_longlong] = ACTIONS(193),
        [anon_sym_int64] = ACTIONS(195),
        [sym_unsigned_tiny_int] = ACTIONS(197),
        [sym_boolean_type] = ACTIONS(199),
        [anon_sym_fixed] = ACTIONS(201),
        [sym_octet_type] = ACTIONS(199),
        [sym_signed_tiny_int] = ACTIONS(203),
        [anon_sym_unsignedshort] = ACTIONS(205),
        [anon_sym_uint16] = ACTIONS(207),
        [anon_sym_unsignedlong] = ACTIONS(209),
        [anon_sym_uint32] = ACTIONS(209),
        [anon_sym_unsignedlonglong] = ACTIONS(211),
        [anon_sym_uint64] = ACTIONS(213),
        [anon_sym_float] = ACTIONS(215),
        [anon_sym_double] = ACTIONS(215),
        [anon_sym_longdouble] = ACTIONS(217),
        [anon_sym_char] = ACTIONS(219),
        [anon_sym_wchar] = ACTIONS(219),
        [anon_sym_COLON_COLON] = ACTIONS(419),
        [anon_sym_string] = ACTIONS(223),
        [anon_sym_wstring] = ACTIONS(223),
        [anon_sym_any] = ACTIONS(225),
        [anon_sym_sequence] = ACTIONS(227),
        [anon_sym_map] = ACTIONS(229),
        [anon_sym_PLUS] = ACTIONS(421),
        [anon_sym_DASH] = ACTIONS(421),
        [anon_sym_LPAREN] = ACTIONS(423),
        [anon_sym_TILDE] = ACTIONS(425),
        [anon_sym_L] = ACTIONS(427),
        [anon_sym_DQUOTE] = ACTIONS(429),
        [anon_sym_SQUOTE] = ACTIONS(431),
        [anon_sym_TRUE] = ACTIONS(433),
        [anon_sym_FALSE] = ACTIONS(433),
        [sym_number_literal] = ACTIONS(435),
        [sym_object_type] = ACTIONS(199),
        [sym_value_base_type] = ACTIONS(199),
        [sym_identifier] = ACTIONS(437),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [15] = {
        [sym_signed_short_int] = STATE(228),
        [sym_signed_long_int] = STATE(228),
        [sym_signed_longlong_int] = STATE(228),
        [sym_unsigned_int] = STATE(211),
        [sym_integer_type] = STATE(277),
        [sym_signed_int] = STATE(211),
        [sym_unsigned_short_int] = STATE(227),
        [sym_unsigned_long_int] = STATE(227),
        [sym_unsigned_longlong_int] = STATE(227),
        [sym_floating_pt_type] = STATE(277),
        [sym_char_type] = STATE(277),
        [sym_scoped_name] = STATE(215),
        [sym_string_type] = STATE(255),
        [sym_type_spec] = STATE(226),
        [sym_simple_type_spec] = STATE(287),
        [sym_base_type_spec] = STATE(310),
        [sym_any_type] = STATE(277),
        [sym_fixed_pt_type] = STATE(255),
        [sym_template_type_spec] = STATE(287),
        [sym_sequence_type] = STATE(255),
        [sym_map_type] = STATE(255),
        [sym_bitset_dcl] = STATE(226),
        [sym_bitmask_dcl] = STATE(226),
        [sym_annotation_appl] = STATE(171),
        [sym_enum_dcl] = STATE(226),
        [sym_enum_anno] = STATE(458),
        [sym_union_forward_dcl] = STATE(226),
        [sym_union_def] = STATE(226),
        [sym_element_spec] = STATE(557),
        [sym_struct_forward_dcl] = STATE(226),
        [sym_struct_def] = STATE(226),
        [sym_comment] = STATE(15),
        [aux_sym_interface_def_repeat1] = STATE(184),
        [anon_sym_short] = ACTIONS(189),
        [anon_sym_int16] = ACTIONS(189),
        [anon_sym_long] = ACTIONS(191),
        [anon_sym_int32] = ACTIONS(191),
        [anon_sym_longlong] = ACTIONS(193),
        [anon_sym_int64] = ACTIONS(195),
        [sym_unsigned_tiny_int] = ACTIONS(197),
        [sym_boolean_type] = ACTIONS(199),
        [anon_sym_fixed] = ACTIONS(201),
        [sym_octet_type] = ACTIONS(199),
        [sym_signed_tiny_int] = ACTIONS(203),
        [anon_sym_unsignedshort] = ACTIONS(205),
        [anon_sym_uint16] = ACTIONS(207),
        [anon_sym_unsignedlong] = ACTIONS(209),
        [anon_sym_uint32] = ACTIONS(209),
        [anon_sym_unsignedlonglong] = ACTIONS(211),
        [anon_sym_uint64] = ACTIONS(213),
        [anon_sym_float] = ACTIONS(215),
        [anon_sym_double] = ACTIONS(215),
        [anon_sym_longdouble] = ACTIONS(217),
        [anon_sym_char] = ACTIONS(219),
        [anon_sym_wchar] = ACTIONS(219),
        [anon_sym_COLON_COLON] = ACTIONS(221),
        [anon_sym_string] = ACTIONS(223),
        [anon_sym_wstring] = ACTIONS(223),
        [anon_sym_any] = ACTIONS(225),
        [anon_sym_sequence] = ACTIONS(227),
        [anon_sym_map] = ACTIONS(229),
        [anon_sym_RBRACE] = ACTIONS(439),
        [anon_sym_bitset] = ACTIONS(243),
        [anon_sym_bitmask] = ACTIONS(245),
        [anon_sym_default] = ACTIONS(441),
        [anon_sym_AT] = ACTIONS(247),
        [anon_sym_struct] = ACTIONS(251),
        [anon_sym_union] = ACTIONS(253),
        [anon_sym_enum] = ACTIONS(255),
        [anon_sym_ATignore_literal_names] = ACTIONS(43),
        [anon_sym_case] = ACTIONS(441),
        [sym_object_type] = ACTIONS(199),
        [sym_value_base_type] = ACTIONS(199),
        [sym_identifier] = ACTIONS(275),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
    [16] = {
        [sym_signed_short_int] = STATE(228),
        [sym_signed_long_int] = STATE(228),
        [sym_signed_longlong_int] = STATE(228),
        [sym_unsigned_int] = STATE(211),
        [sym_integer_type] = STATE(277),
        [sym_signed_int] = STATE(211),
        [sym_unsigned_short_int] = STATE(227),
        [sym_unsigned_long_int] = STATE(227),
        [sym_unsigned_longlong_int] = STATE(227),
        [sym_floating_pt_type] = STATE(277),
        [sym_char_type] = STATE(277),
        [sym_scoped_name] = STATE(215),
        [sym_string_type] = STATE(255),
        [sym_simple_type_spec] = STATE(178),
        [sym_base_type_spec] = STATE(310),
        [sym_any_type] = STATE(277),
        [sym_fixed_pt_type] = STATE(255),
        [sym_template_type_spec] = STATE(178),
        [sym_sequence_type] = STATE(255),
        [sym_map_type] = STATE(255),
        [sym_bitset_dcl] = STATE(178),
        [sym_bitmask_dcl] = STATE(178),
        [sym_annotation_appl] = STATE(171),
        [sym_type_declarator] = STATE(558),
        [sym_enum_dcl] = STATE(178),
        [sym_enum_anno] = STATE(458),
        [sym_union_forward_dcl] = STATE(178),
        [sym_union_def] = STATE(178),
        [sym_struct_forward_dcl] = STATE(178),
        [sym_struct_def] = STATE(178),
        [sym_comment] = STATE(16),
        [aux_sym_interface_def_repeat1] = STATE(184),
        [anon_sym_short] = ACTIONS(189),
        [anon_sym_int16] = ACTIONS(189),
        [anon_sym_long] = ACTIONS(191),
        [anon_sym_int32] = ACTIONS(191),
        [anon_sym_longlong] = ACTIONS(193),
        [anon_sym_int64] = ACTIONS(195),
        [sym_unsigned_tiny_int] = ACTIONS(197),
        [sym_boolean_type] = ACTIONS(199),
        [anon_sym_fixed] = ACTIONS(201),
        [sym_octet_type] = ACTIONS(199),
        [sym_signed_tiny_int] = ACTIONS(203),
        [anon_sym_unsignedshort] = ACTIONS(205),
        [anon_sym_uint16] = ACTIONS(207),
        [anon_sym_unsignedlong] = ACTIONS(209),
        [anon_sym_uint32] = ACTIONS(209),
        [anon_sym_unsignedlonglong] = ACTIONS(211),
        [anon_sym_uint64] = ACTIONS(213),
        [anon_sym_float] = ACTIONS(215),
        [anon_sym_double] = ACTIONS(215),
        [anon_sym_longdouble] = ACTIONS(217),
        [anon_sym_char] = ACTIONS(219),
        [anon_sym_wchar] = ACTIONS(219),
        [anon_sym_COLON_COLON] = ACTIONS(221),
        [anon_sym_string] = ACTIONS(223),
        [anon_sym_wstring] = ACTIONS(223),
        [anon_sym_any] = ACTIONS(225),
        [anon_sym_sequence] = ACTIONS(227),
        [anon_sym_map] = ACTIONS(229),
        [anon_sym_bitset] = ACTIONS(243),
        [anon_sym_bitmask] = ACTIONS(245),
        [anon_sym_AT] = ACTIONS(247),
        [anon_sym_struct] = ACTIONS(251),
        [anon_sym_union] = ACTIONS(253),
        [anon_sym_enum] = ACTIONS(255),
        [anon_sym_ATignore_literal_names] = ACTIONS(43),
        [sym_object_type] = ACTIONS(199),
        [sym_value_base_type] = ACTIONS(199),
        [sym_identifier] = ACTIONS(275),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [anon_sym_SLASH_STAR] = ACTIONS(5),
    },
};

static const uint16_t ts_small_parse_table[] = {
    [0] = 42,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(11),
    1,
    anon_sym_exception,
    ACTIONS(13),
    1,
    anon_sym_local,
    ACTIONS(15),
    1,
    anon_sym_abstract,
    ACTIONS(17),
    1,
    anon_sym_interface,
    ACTIONS(19),
    1,
    anon_sym_bitset,
    ACTIONS(21),
    1,
    anon_sym_bitmask,
    ACTIONS(23),
    1,
    anon_sym_ATannotation,
    ACTIONS(25),
    1,
    anon_sym_AT,
    ACTIONS(27),
    1,
    anon_sym_module,
    ACTIONS(29),
    1,
    anon_sym_valuetype,
    ACTIONS(31),
    1,
    anon_sym_struct,
    ACTIONS(33),
    1,
    anon_sym_union,
    ACTIONS(35),
    1,
    anon_sym_enum,
    ACTIONS(37),
    1,
    anon_sym_const,
    ACTIONS(39),
    1,
    anon_sym_custom,
    ACTIONS(41),
    1,
    anon_sym_typedef,
    ACTIONS(43),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(45),
    1,
    anon_sym_typeid,
    ACTIONS(47),
    1,
    anon_sym_typeprefix,
    ACTIONS(49),
    1,
    anon_sym_import,
    ACTIONS(51),
    1,
    anon_sym_native,
    ACTIONS(443),
    1,
    anon_sym_RBRACE,
    ACTIONS(445),
    1,
    anon_sym_alias,
    ACTIONS(447),
    1,
    anon_sym_POUNDdefine,
    STATE(17),
    1,
    sym_comment,
    STATE(19),
    1,
    aux_sym_template_module_dcl_repeat1,
    STATE(107),
    1,
    sym_predefine,
    STATE(110),
    1,
    sym__definition,
    STATE(116),
    1,
    sym_tpl_definition,
    STATE(146),
    1,
    aux_sym_interface_def_repeat1,
    STATE(171),
    1,
    sym_annotation_appl,
    STATE(458),
    1,
    sym_enum_anno,
    STATE(459),
    1,
    sym_value_header,
    STATE(463),
    1,
    sym_value_kind,
    STATE(473),
    1,
    sym_template_module_ref,
    STATE(474),
    1,
    sym_interface_header,
    STATE(479),
    1,
    sym_interface_kind,
    STATE(475),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(469),
    3,
    sym_value_def,
    sym_value_forward_dcl,
    sym_value_abs_def,
    STATE(491),
    20,
    sym_except_dcl,
    sym_interface_dcl,
    sym_bitset_dcl,
    sym_bitmask_dcl,
    sym_annotation_dcl,
    sym_template_module_dcl,
    sym_template_module_inst,
    sym_value_dcl,
    sym_typedef_dcl,
    sym_enum_dcl,
    sym_union_forward_dcl,
    sym_union_def,
    sym_type_id_dcl,
    sym_type_prefix_dcl,
    sym_import_dcl,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_const_dcl,
    [149] = 42,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(9),
    1,
    sym_preproc_directive,
    ACTIONS(11),
    1,
    anon_sym_exception,
    ACTIONS(13),
    1,
    anon_sym_local,
    ACTIONS(15),
    1,
    anon_sym_abstract,
    ACTIONS(17),
    1,
    anon_sym_interface,
    ACTIONS(19),
    1,
    anon_sym_bitset,
    ACTIONS(21),
    1,
    anon_sym_bitmask,
    ACTIONS(23),
    1,
    anon_sym_ATannotation,
    ACTIONS(25),
    1,
    anon_sym_AT,
    ACTIONS(27),
    1,
    anon_sym_module,
    ACTIONS(29),
    1,
    anon_sym_valuetype,
    ACTIONS(31),
    1,
    anon_sym_struct,
    ACTIONS(33),
    1,
    anon_sym_union,
    ACTIONS(35),
    1,
    anon_sym_enum,
    ACTIONS(37),
    1,
    anon_sym_const,
    ACTIONS(39),
    1,
    anon_sym_custom,
    ACTIONS(41),
    1,
    anon_sym_typedef,
    ACTIONS(43),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(45),
    1,
    anon_sym_typeid,
    ACTIONS(47),
    1,
    anon_sym_typeprefix,
    ACTIONS(49),
    1,
    anon_sym_import,
    ACTIONS(51),
    1,
    anon_sym_native,
    ACTIONS(53),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(449),
    1,
    ts_builtin_sym_end,
    STATE(18),
    1,
    sym_comment,
    STATE(32),
    1,
    aux_sym_specification_repeat2,
    STATE(103),
    1,
    aux_sym_specification_repeat1,
    STATE(107),
    1,
    sym_predefine,
    STATE(115),
    1,
    sym__definition,
    STATE(117),
    1,
    sym_preproc_call,
    STATE(146),
    1,
    aux_sym_interface_def_repeat1,
    STATE(171),
    1,
    sym_annotation_appl,
    STATE(458),
    1,
    sym_enum_anno,
    STATE(459),
    1,
    sym_value_header,
    STATE(463),
    1,
    sym_value_kind,
    STATE(474),
    1,
    sym_interface_header,
    STATE(479),
    1,
    sym_interface_kind,
    STATE(475),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(469),
    3,
    sym_value_def,
    sym_value_forward_dcl,
    sym_value_abs_def,
    STATE(491),
    20,
    sym_except_dcl,
    sym_interface_dcl,
    sym_bitset_dcl,
    sym_bitmask_dcl,
    sym_annotation_dcl,
    sym_template_module_dcl,
    sym_template_module_inst,
    sym_value_dcl,
    sym_typedef_dcl,
    sym_enum_dcl,
    sym_union_forward_dcl,
    sym_union_def,
    sym_type_id_dcl,
    sym_type_prefix_dcl,
    sym_import_dcl,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_const_dcl,
    [298] = 42,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(11),
    1,
    anon_sym_exception,
    ACTIONS(13),
    1,
    anon_sym_local,
    ACTIONS(15),
    1,
    anon_sym_abstract,
    ACTIONS(17),
    1,
    anon_sym_interface,
    ACTIONS(19),
    1,
    anon_sym_bitset,
    ACTIONS(21),
    1,
    anon_sym_bitmask,
    ACTIONS(23),
    1,
    anon_sym_ATannotation,
    ACTIONS(25),
    1,
    anon_sym_AT,
    ACTIONS(27),
    1,
    anon_sym_module,
    ACTIONS(29),
    1,
    anon_sym_valuetype,
    ACTIONS(31),
    1,
    anon_sym_struct,
    ACTIONS(33),
    1,
    anon_sym_union,
    ACTIONS(35),
    1,
    anon_sym_enum,
    ACTIONS(37),
    1,
    anon_sym_const,
    ACTIONS(39),
    1,
    anon_sym_custom,
    ACTIONS(41),
    1,
    anon_sym_typedef,
    ACTIONS(43),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(45),
    1,
    anon_sym_typeid,
    ACTIONS(47),
    1,
    anon_sym_typeprefix,
    ACTIONS(49),
    1,
    anon_sym_import,
    ACTIONS(51),
    1,
    anon_sym_native,
    ACTIONS(445),
    1,
    anon_sym_alias,
    ACTIONS(447),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(451),
    1,
    anon_sym_RBRACE,
    STATE(19),
    1,
    sym_comment,
    STATE(20),
    1,
    aux_sym_template_module_dcl_repeat1,
    STATE(107),
    1,
    sym_predefine,
    STATE(110),
    1,
    sym__definition,
    STATE(116),
    1,
    sym_tpl_definition,
    STATE(146),
    1,
    aux_sym_interface_def_repeat1,
    STATE(171),
    1,
    sym_annotation_appl,
    STATE(458),
    1,
    sym_enum_anno,
    STATE(459),
    1,
    sym_value_header,
    STATE(463),
    1,
    sym_value_kind,
    STATE(473),
    1,
    sym_template_module_ref,
    STATE(474),
    1,
    sym_interface_header,
    STATE(479),
    1,
    sym_interface_kind,
    STATE(475),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(469),
    3,
    sym_value_def,
    sym_value_forward_dcl,
    sym_value_abs_def,
    STATE(491),
    20,
    sym_except_dcl,
    sym_interface_dcl,
    sym_bitset_dcl,
    sym_bitmask_dcl,
    sym_annotation_dcl,
    sym_template_module_dcl,
    sym_template_module_inst,
    sym_value_dcl,
    sym_typedef_dcl,
    sym_enum_dcl,
    sym_union_forward_dcl,
    sym_union_def,
    sym_type_id_dcl,
    sym_type_prefix_dcl,
    sym_import_dcl,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_const_dcl,
    [447] = 41,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(453),
    1,
    anon_sym_exception,
    ACTIONS(456),
    1,
    anon_sym_RBRACE,
    ACTIONS(458),
    1,
    anon_sym_local,
    ACTIONS(461),
    1,
    anon_sym_abstract,
    ACTIONS(464),
    1,
    anon_sym_interface,
    ACTIONS(467),
    1,
    anon_sym_bitset,
    ACTIONS(470),
    1,
    anon_sym_bitmask,
    ACTIONS(473),
    1,
    anon_sym_ATannotation,
    ACTIONS(476),
    1,
    anon_sym_AT,
    ACTIONS(479),
    1,
    anon_sym_module,
    ACTIONS(482),
    1,
    anon_sym_valuetype,
    ACTIONS(485),
    1,
    anon_sym_struct,
    ACTIONS(488),
    1,
    anon_sym_union,
    ACTIONS(491),
    1,
    anon_sym_enum,
    ACTIONS(494),
    1,
    anon_sym_const,
    ACTIONS(497),
    1,
    anon_sym_alias,
    ACTIONS(500),
    1,
    anon_sym_custom,
    ACTIONS(503),
    1,
    anon_sym_typedef,
    ACTIONS(506),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(509),
    1,
    anon_sym_typeid,
    ACTIONS(512),
    1,
    anon_sym_typeprefix,
    ACTIONS(515),
    1,
    anon_sym_import,
    ACTIONS(518),
    1,
    anon_sym_native,
    ACTIONS(521),
    1,
    anon_sym_POUNDdefine,
    STATE(107),
    1,
    sym_predefine,
    STATE(110),
    1,
    sym__definition,
    STATE(116),
    1,
    sym_tpl_definition,
    STATE(146),
    1,
    aux_sym_interface_def_repeat1,
    STATE(171),
    1,
    sym_annotation_appl,
    STATE(458),
    1,
    sym_enum_anno,
    STATE(459),
    1,
    sym_value_header,
    STATE(463),
    1,
    sym_value_kind,
    STATE(473),
    1,
    sym_template_module_ref,
    STATE(474),
    1,
    sym_interface_header,
    STATE(479),
    1,
    sym_interface_kind,
    STATE(20),
    2,
    sym_comment,
    aux_sym_template_module_dcl_repeat1,
    STATE(475),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(469),
    3,
    sym_value_def,
    sym_value_forward_dcl,
    sym_value_abs_def,
    STATE(491),
    20,
    sym_except_dcl,
    sym_interface_dcl,
    sym_bitset_dcl,
    sym_bitmask_dcl,
    sym_annotation_dcl,
    sym_template_module_dcl,
    sym_template_module_inst,
    sym_value_dcl,
    sym_typedef_dcl,
    sym_enum_dcl,
    sym_union_forward_dcl,
    sym_union_def,
    sym_type_id_dcl,
    sym_type_prefix_dcl,
    sym_import_dcl,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_const_dcl,
    [594] = 38,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(526),
    1,
    anon_sym_exception,
    ACTIONS(529),
    1,
    anon_sym_local,
    ACTIONS(532),
    1,
    anon_sym_abstract,
    ACTIONS(535),
    1,
    anon_sym_interface,
    ACTIONS(538),
    1,
    anon_sym_bitset,
    ACTIONS(541),
    1,
    anon_sym_bitmask,
    ACTIONS(544),
    1,
    anon_sym_ATannotation,
    ACTIONS(547),
    1,
    anon_sym_AT,
    ACTIONS(550),
    1,
    anon_sym_module,
    ACTIONS(553),
    1,
    anon_sym_valuetype,
    ACTIONS(556),
    1,
    anon_sym_struct,
    ACTIONS(559),
    1,
    anon_sym_union,
    ACTIONS(562),
    1,
    anon_sym_enum,
    ACTIONS(565),
    1,
    anon_sym_const,
    ACTIONS(568),
    1,
    anon_sym_custom,
    ACTIONS(571),
    1,
    anon_sym_typedef,
    ACTIONS(574),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(577),
    1,
    anon_sym_typeid,
    ACTIONS(580),
    1,
    anon_sym_typeprefix,
    ACTIONS(583),
    1,
    anon_sym_import,
    ACTIONS(586),
    1,
    anon_sym_native,
    ACTIONS(589),
    1,
    anon_sym_POUNDdefine,
    STATE(107),
    1,
    sym_predefine,
    STATE(115),
    1,
    sym__definition,
    STATE(146),
    1,
    aux_sym_interface_def_repeat1,
    STATE(171),
    1,
    sym_annotation_appl,
    STATE(458),
    1,
    sym_enum_anno,
    STATE(459),
    1,
    sym_value_header,
    STATE(463),
    1,
    sym_value_kind,
    STATE(474),
    1,
    sym_interface_header,
    STATE(479),
    1,
    sym_interface_kind,
    ACTIONS(524),
    2,
    ts_builtin_sym_end,
    anon_sym_RBRACE,
    STATE(21),
    2,
    sym_comment,
    aux_sym_specification_repeat2,
    STATE(475),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(469),
    3,
    sym_value_def,
    sym_value_forward_dcl,
    sym_value_abs_def,
    STATE(491),
    20,
    sym_except_dcl,
    sym_interface_dcl,
    sym_bitset_dcl,
    sym_bitmask_dcl,
    sym_annotation_dcl,
    sym_template_module_dcl,
    sym_template_module_inst,
    sym_value_dcl,
    sym_typedef_dcl,
    sym_enum_dcl,
    sym_union_forward_dcl,
    sym_union_def,
    sym_type_id_dcl,
    sym_type_prefix_dcl,
    sym_import_dcl,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_const_dcl,
    [733] = 40,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(193),
    1,
    anon_sym_longlong,
    ACTIONS(195),
    1,
    anon_sym_int64,
    ACTIONS(197),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(201),
    1,
    anon_sym_fixed,
    ACTIONS(203),
    1,
    sym_signed_tiny_int,
    ACTIONS(205),
    1,
    anon_sym_unsignedshort,
    ACTIONS(207),
    1,
    anon_sym_uint16,
    ACTIONS(211),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(213),
    1,
    anon_sym_uint64,
    ACTIONS(217),
    1,
    anon_sym_longdouble,
    ACTIONS(221),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(225),
    1,
    anon_sym_any,
    ACTIONS(227),
    1,
    anon_sym_sequence,
    ACTIONS(229),
    1,
    anon_sym_map,
    ACTIONS(275),
    1,
    sym_identifier,
    ACTIONS(592),
    1,
    anon_sym_RBRACE,
    ACTIONS(594),
    1,
    anon_sym_AT,
    STATE(22),
    1,
    sym_comment,
    STATE(23),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(41),
    1,
    aux_sym_interface_def_repeat1,
    STATE(72),
    1,
    sym_member,
    STATE(81),
    1,
    sym_annotation_appl,
    STATE(175),
    1,
    sym_type_spec,
    STATE(215),
    1,
    sym_scoped_name,
    STATE(310),
    1,
    sym_base_type_spec,
    ACTIONS(189),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(191),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(209),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(215),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(219),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(223),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(211),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(287),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(227),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(228),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    ACTIONS(199),
    4,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    sym_value_base_type,
    STATE(255),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(277),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    [875] = 39,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(602),
    1,
    anon_sym_longlong,
    ACTIONS(605),
    1,
    anon_sym_int64,
    ACTIONS(608),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(614),
    1,
    anon_sym_fixed,
    ACTIONS(617),
    1,
    sym_signed_tiny_int,
    ACTIONS(620),
    1,
    anon_sym_unsignedshort,
    ACTIONS(623),
    1,
    anon_sym_uint16,
    ACTIONS(629),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(632),
    1,
    anon_sym_uint64,
    ACTIONS(638),
    1,
    anon_sym_longdouble,
    ACTIONS(644),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(650),
    1,
    anon_sym_any,
    ACTIONS(653),
    1,
    anon_sym_sequence,
    ACTIONS(656),
    1,
    anon_sym_map,
    ACTIONS(659),
    1,
    anon_sym_RBRACE,
    ACTIONS(661),
    1,
    anon_sym_AT,
    ACTIONS(664),
    1,
    sym_identifier,
    STATE(41),
    1,
    aux_sym_interface_def_repeat1,
    STATE(72),
    1,
    sym_member,
    STATE(81),
    1,
    sym_annotation_appl,
    STATE(175),
    1,
    sym_type_spec,
    STATE(215),
    1,
    sym_scoped_name,
    STATE(310),
    1,
    sym_base_type_spec,
    ACTIONS(596),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(599),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(626),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(635),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(641),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(647),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(23),
    2,
    sym_comment,
    aux_sym_except_dcl_repeat1,
    STATE(211),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(287),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(227),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(228),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    ACTIONS(611),
    4,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    sym_value_base_type,
    STATE(255),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(277),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    [1015] = 40,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(193),
    1,
    anon_sym_longlong,
    ACTIONS(195),
    1,
    anon_sym_int64,
    ACTIONS(197),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(201),
    1,
    anon_sym_fixed,
    ACTIONS(203),
    1,
    sym_signed_tiny_int,
    ACTIONS(205),
    1,
    anon_sym_unsignedshort,
    ACTIONS(207),
    1,
    anon_sym_uint16,
    ACTIONS(211),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(213),
    1,
    anon_sym_uint64,
    ACTIONS(217),
    1,
    anon_sym_longdouble,
    ACTIONS(221),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(225),
    1,
    anon_sym_any,
    ACTIONS(227),
    1,
    anon_sym_sequence,
    ACTIONS(229),
    1,
    anon_sym_map,
    ACTIONS(275),
    1,
    sym_identifier,
    ACTIONS(594),
    1,
    anon_sym_AT,
    ACTIONS(667),
    1,
    anon_sym_RBRACE,
    STATE(24),
    1,
    sym_comment,
    STATE(38),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(41),
    1,
    aux_sym_interface_def_repeat1,
    STATE(72),
    1,
    sym_member,
    STATE(81),
    1,
    sym_annotation_appl,
    STATE(175),
    1,
    sym_type_spec,
    STATE(215),
    1,
    sym_scoped_name,
    STATE(310),
    1,
    sym_base_type_spec,
    ACTIONS(189),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(191),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(209),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(215),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(219),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(223),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(211),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(287),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(227),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(228),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    ACTIONS(199),
    4,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    sym_value_base_type,
    STATE(255),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(277),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    [1157] = 39,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(11),
    1,
    anon_sym_exception,
    ACTIONS(13),
    1,
    anon_sym_local,
    ACTIONS(15),
    1,
    anon_sym_abstract,
    ACTIONS(17),
    1,
    anon_sym_interface,
    ACTIONS(19),
    1,
    anon_sym_bitset,
    ACTIONS(21),
    1,
    anon_sym_bitmask,
    ACTIONS(23),
    1,
    anon_sym_ATannotation,
    ACTIONS(25),
    1,
    anon_sym_AT,
    ACTIONS(27),
    1,
    anon_sym_module,
    ACTIONS(29),
    1,
    anon_sym_valuetype,
    ACTIONS(31),
    1,
    anon_sym_struct,
    ACTIONS(33),
    1,
    anon_sym_union,
    ACTIONS(35),
    1,
    anon_sym_enum,
    ACTIONS(37),
    1,
    anon_sym_const,
    ACTIONS(39),
    1,
    anon_sym_custom,
    ACTIONS(41),
    1,
    anon_sym_typedef,
    ACTIONS(43),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(45),
    1,
    anon_sym_typeid,
    ACTIONS(47),
    1,
    anon_sym_typeprefix,
    ACTIONS(49),
    1,
    anon_sym_import,
    ACTIONS(51),
    1,
    anon_sym_native,
    ACTIONS(447),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(669),
    1,
    anon_sym_RBRACE,
    STATE(25),
    1,
    sym_comment,
    STATE(34),
    1,
    aux_sym_specification_repeat2,
    STATE(107),
    1,
    sym_predefine,
    STATE(115),
    1,
    sym__definition,
    STATE(146),
    1,
    aux_sym_interface_def_repeat1,
    STATE(171),
    1,
    sym_annotation_appl,
    STATE(458),
    1,
    sym_enum_anno,
    STATE(459),
    1,
    sym_value_header,
    STATE(463),
    1,
    sym_value_kind,
    STATE(474),
    1,
    sym_interface_header,
    STATE(479),
    1,
    sym_interface_kind,
    STATE(475),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(469),
    3,
    sym_value_def,
    sym_value_forward_dcl,
    sym_value_abs_def,
    STATE(491),
    20,
    sym_except_dcl,
    sym_interface_dcl,
    sym_bitset_dcl,
    sym_bitmask_dcl,
    sym_annotation_dcl,
    sym_template_module_dcl,
    sym_template_module_inst,
    sym_value_dcl,
    sym_typedef_dcl,
    sym_enum_dcl,
    sym_union_forward_dcl,
    sym_union_def,
    sym_type_id_dcl,
    sym_type_prefix_dcl,
    sym_import_dcl,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_const_dcl,
    [1297] = 40,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(193),
    1,
    anon_sym_longlong,
    ACTIONS(195),
    1,
    anon_sym_int64,
    ACTIONS(197),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(201),
    1,
    anon_sym_fixed,
    ACTIONS(203),
    1,
    sym_signed_tiny_int,
    ACTIONS(205),
    1,
    anon_sym_unsignedshort,
    ACTIONS(207),
    1,
    anon_sym_uint16,
    ACTIONS(211),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(213),
    1,
    anon_sym_uint64,
    ACTIONS(217),
    1,
    anon_sym_longdouble,
    ACTIONS(221),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(225),
    1,
    anon_sym_any,
    ACTIONS(227),
    1,
    anon_sym_sequence,
    ACTIONS(229),
    1,
    anon_sym_map,
    ACTIONS(275),
    1,
    sym_identifier,
    ACTIONS(594),
    1,
    anon_sym_AT,
    ACTIONS(671),
    1,
    anon_sym_RBRACE,
    STATE(23),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(26),
    1,
    sym_comment,
    STATE(41),
    1,
    aux_sym_interface_def_repeat1,
    STATE(72),
    1,
    sym_member,
    STATE(81),
    1,
    sym_annotation_appl,
    STATE(175),
    1,
    sym_type_spec,
    STATE(215),
    1,
    sym_scoped_name,
    STATE(310),
    1,
    sym_base_type_spec,
    ACTIONS(189),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(191),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(209),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(215),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(219),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(223),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(211),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(287),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(227),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(228),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    ACTIONS(199),
    4,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    sym_value_base_type,
    STATE(255),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(277),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    [1439] = 40,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(193),
    1,
    anon_sym_longlong,
    ACTIONS(195),
    1,
    anon_sym_int64,
    ACTIONS(197),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(201),
    1,
    anon_sym_fixed,
    ACTIONS(203),
    1,
    sym_signed_tiny_int,
    ACTIONS(205),
    1,
    anon_sym_unsignedshort,
    ACTIONS(207),
    1,
    anon_sym_uint16,
    ACTIONS(211),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(213),
    1,
    anon_sym_uint64,
    ACTIONS(217),
    1,
    anon_sym_longdouble,
    ACTIONS(221),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(225),
    1,
    anon_sym_any,
    ACTIONS(227),
    1,
    anon_sym_sequence,
    ACTIONS(229),
    1,
    anon_sym_map,
    ACTIONS(275),
    1,
    sym_identifier,
    ACTIONS(594),
    1,
    anon_sym_AT,
    ACTIONS(673),
    1,
    anon_sym_RBRACE,
    STATE(22),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(27),
    1,
    sym_comment,
    STATE(41),
    1,
    aux_sym_interface_def_repeat1,
    STATE(72),
    1,
    sym_member,
    STATE(81),
    1,
    sym_annotation_appl,
    STATE(175),
    1,
    sym_type_spec,
    STATE(215),
    1,
    sym_scoped_name,
    STATE(310),
    1,
    sym_base_type_spec,
    ACTIONS(189),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(191),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(209),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(215),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(219),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(223),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(211),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(287),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(227),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(228),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    ACTIONS(199),
    4,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    sym_value_base_type,
    STATE(255),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(277),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    [1581] = 40,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(193),
    1,
    anon_sym_longlong,
    ACTIONS(195),
    1,
    anon_sym_int64,
    ACTIONS(197),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(201),
    1,
    anon_sym_fixed,
    ACTIONS(203),
    1,
    sym_signed_tiny_int,
    ACTIONS(205),
    1,
    anon_sym_unsignedshort,
    ACTIONS(207),
    1,
    anon_sym_uint16,
    ACTIONS(211),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(213),
    1,
    anon_sym_uint64,
    ACTIONS(217),
    1,
    anon_sym_longdouble,
    ACTIONS(221),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(225),
    1,
    anon_sym_any,
    ACTIONS(227),
    1,
    anon_sym_sequence,
    ACTIONS(229),
    1,
    anon_sym_map,
    ACTIONS(275),
    1,
    sym_identifier,
    ACTIONS(594),
    1,
    anon_sym_AT,
    ACTIONS(675),
    1,
    anon_sym_RBRACE,
    STATE(28),
    1,
    sym_comment,
    STATE(35),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(41),
    1,
    aux_sym_interface_def_repeat1,
    STATE(72),
    1,
    sym_member,
    STATE(81),
    1,
    sym_annotation_appl,
    STATE(175),
    1,
    sym_type_spec,
    STATE(215),
    1,
    sym_scoped_name,
    STATE(310),
    1,
    sym_base_type_spec,
    ACTIONS(189),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(191),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(209),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(215),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(219),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(223),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(211),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(287),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(227),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(228),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    ACTIONS(199),
    4,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    sym_value_base_type,
    STATE(255),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(277),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    [1723] = 41,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(193),
    1,
    anon_sym_longlong,
    ACTIONS(195),
    1,
    anon_sym_int64,
    ACTIONS(197),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(203),
    1,
    sym_signed_tiny_int,
    ACTIONS(205),
    1,
    anon_sym_unsignedshort,
    ACTIONS(207),
    1,
    anon_sym_uint16,
    ACTIONS(211),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(213),
    1,
    anon_sym_uint64,
    ACTIONS(217),
    1,
    anon_sym_longdouble,
    ACTIONS(221),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(227),
    1,
    anon_sym_sequence,
    ACTIONS(255),
    1,
    anon_sym_enum,
    ACTIONS(257),
    1,
    anon_sym_const,
    ACTIONS(265),
    1,
    anon_sym_typedef,
    ACTIONS(275),
    1,
    sym_identifier,
    ACTIONS(679),
    1,
    anon_sym_fixed,
    ACTIONS(681),
    1,
    anon_sym_any,
    ACTIONS(683),
    1,
    anon_sym_RBRACE,
    ACTIONS(685),
    1,
    anon_sym_ATignore_literal_names,
    STATE(29),
    1,
    sym_comment,
    STATE(30),
    1,
    aux_sym_annotation_dcl_repeat1,
    STATE(76),
    1,
    sym_annotation_body,
    STATE(77),
    1,
    sym_annotation_member,
    STATE(358),
    1,
    sym_scoped_name,
    STATE(361),
    1,
    sym_annotation_member_type,
    STATE(458),
    1,
    sym_enum_anno,
    ACTIONS(189),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(191),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(209),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(215),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(219),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(223),
    2,
    anon_sym_string,
    anon_sym_wstring,
    ACTIONS(677),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(211),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(565),
    2,
    sym_any_const_type,
    sym_const_type,
    STATE(227),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(228),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(564),
    3,
    sym_typedef_dcl,
    sym_enum_dcl,
    sym_const_dcl,
    STATE(513),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [1867] = 40,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(693),
    1,
    anon_sym_longlong,
    ACTIONS(696),
    1,
    anon_sym_int64,
    ACTIONS(699),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(705),
    1,
    anon_sym_fixed,
    ACTIONS(708),
    1,
    sym_signed_tiny_int,
    ACTIONS(711),
    1,
    anon_sym_unsignedshort,
    ACTIONS(714),
    1,
    anon_sym_uint16,
    ACTIONS(720),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(723),
    1,
    anon_sym_uint64,
    ACTIONS(729),
    1,
    anon_sym_longdouble,
    ACTIONS(735),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(741),
    1,
    anon_sym_any,
    ACTIONS(744),
    1,
    anon_sym_sequence,
    ACTIONS(747),
    1,
    anon_sym_RBRACE,
    ACTIONS(749),
    1,
    anon_sym_enum,
    ACTIONS(752),
    1,
    anon_sym_const,
    ACTIONS(755),
    1,
    anon_sym_typedef,
    ACTIONS(758),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(761),
    1,
    sym_identifier,
    STATE(76),
    1,
    sym_annotation_body,
    STATE(77),
    1,
    sym_annotation_member,
    STATE(358),
    1,
    sym_scoped_name,
    STATE(361),
    1,
    sym_annotation_member_type,
    STATE(458),
    1,
    sym_enum_anno,
    ACTIONS(687),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(690),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(702),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(717),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(726),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(732),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(738),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(30),
    2,
    sym_comment,
    aux_sym_annotation_dcl_repeat1,
    STATE(211),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(565),
    2,
    sym_any_const_type,
    sym_const_type,
    STATE(227),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(228),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(564),
    3,
    sym_typedef_dcl,
    sym_enum_dcl,
    sym_const_dcl,
    STATE(513),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [2009] = 40,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(193),
    1,
    anon_sym_longlong,
    ACTIONS(195),
    1,
    anon_sym_int64,
    ACTIONS(197),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(201),
    1,
    anon_sym_fixed,
    ACTIONS(203),
    1,
    sym_signed_tiny_int,
    ACTIONS(205),
    1,
    anon_sym_unsignedshort,
    ACTIONS(207),
    1,
    anon_sym_uint16,
    ACTIONS(211),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(213),
    1,
    anon_sym_uint64,
    ACTIONS(217),
    1,
    anon_sym_longdouble,
    ACTIONS(221),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(225),
    1,
    anon_sym_any,
    ACTIONS(227),
    1,
    anon_sym_sequence,
    ACTIONS(229),
    1,
    anon_sym_map,
    ACTIONS(275),
    1,
    sym_identifier,
    ACTIONS(594),
    1,
    anon_sym_AT,
    ACTIONS(764),
    1,
    anon_sym_RBRACE,
    STATE(23),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(31),
    1,
    sym_comment,
    STATE(41),
    1,
    aux_sym_interface_def_repeat1,
    STATE(72),
    1,
    sym_member,
    STATE(81),
    1,
    sym_annotation_appl,
    STATE(175),
    1,
    sym_type_spec,
    STATE(215),
    1,
    sym_scoped_name,
    STATE(310),
    1,
    sym_base_type_spec,
    ACTIONS(189),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(191),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(209),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(215),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(219),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(223),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(211),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(287),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(227),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(228),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    ACTIONS(199),
    4,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    sym_value_base_type,
    STATE(255),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(277),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    [2151] = 39,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(11),
    1,
    anon_sym_exception,
    ACTIONS(13),
    1,
    anon_sym_local,
    ACTIONS(15),
    1,
    anon_sym_abstract,
    ACTIONS(17),
    1,
    anon_sym_interface,
    ACTIONS(19),
    1,
    anon_sym_bitset,
    ACTIONS(21),
    1,
    anon_sym_bitmask,
    ACTIONS(23),
    1,
    anon_sym_ATannotation,
    ACTIONS(25),
    1,
    anon_sym_AT,
    ACTIONS(27),
    1,
    anon_sym_module,
    ACTIONS(29),
    1,
    anon_sym_valuetype,
    ACTIONS(31),
    1,
    anon_sym_struct,
    ACTIONS(33),
    1,
    anon_sym_union,
    ACTIONS(35),
    1,
    anon_sym_enum,
    ACTIONS(37),
    1,
    anon_sym_const,
    ACTIONS(39),
    1,
    anon_sym_custom,
    ACTIONS(41),
    1,
    anon_sym_typedef,
    ACTIONS(43),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(45),
    1,
    anon_sym_typeid,
    ACTIONS(47),
    1,
    anon_sym_typeprefix,
    ACTIONS(49),
    1,
    anon_sym_import,
    ACTIONS(51),
    1,
    anon_sym_native,
    ACTIONS(447),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(766),
    1,
    ts_builtin_sym_end,
    STATE(21),
    1,
    aux_sym_specification_repeat2,
    STATE(32),
    1,
    sym_comment,
    STATE(107),
    1,
    sym_predefine,
    STATE(115),
    1,
    sym__definition,
    STATE(146),
    1,
    aux_sym_interface_def_repeat1,
    STATE(171),
    1,
    sym_annotation_appl,
    STATE(458),
    1,
    sym_enum_anno,
    STATE(459),
    1,
    sym_value_header,
    STATE(463),
    1,
    sym_value_kind,
    STATE(474),
    1,
    sym_interface_header,
    STATE(479),
    1,
    sym_interface_kind,
    STATE(475),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(469),
    3,
    sym_value_def,
    sym_value_forward_dcl,
    sym_value_abs_def,
    STATE(491),
    20,
    sym_except_dcl,
    sym_interface_dcl,
    sym_bitset_dcl,
    sym_bitmask_dcl,
    sym_annotation_dcl,
    sym_template_module_dcl,
    sym_template_module_inst,
    sym_value_dcl,
    sym_typedef_dcl,
    sym_enum_dcl,
    sym_union_forward_dcl,
    sym_union_def,
    sym_type_id_dcl,
    sym_type_prefix_dcl,
    sym_import_dcl,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_const_dcl,
    [2291] = 40,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(193),
    1,
    anon_sym_longlong,
    ACTIONS(195),
    1,
    anon_sym_int64,
    ACTIONS(197),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(201),
    1,
    anon_sym_fixed,
    ACTIONS(203),
    1,
    sym_signed_tiny_int,
    ACTIONS(205),
    1,
    anon_sym_unsignedshort,
    ACTIONS(207),
    1,
    anon_sym_uint16,
    ACTIONS(211),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(213),
    1,
    anon_sym_uint64,
    ACTIONS(217),
    1,
    anon_sym_longdouble,
    ACTIONS(221),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(225),
    1,
    anon_sym_any,
    ACTIONS(227),
    1,
    anon_sym_sequence,
    ACTIONS(229),
    1,
    anon_sym_map,
    ACTIONS(275),
    1,
    sym_identifier,
    ACTIONS(594),
    1,
    anon_sym_AT,
    ACTIONS(768),
    1,
    anon_sym_RBRACE,
    STATE(31),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(33),
    1,
    sym_comment,
    STATE(41),
    1,
    aux_sym_interface_def_repeat1,
    STATE(72),
    1,
    sym_member,
    STATE(81),
    1,
    sym_annotation_appl,
    STATE(175),
    1,
    sym_type_spec,
    STATE(215),
    1,
    sym_scoped_name,
    STATE(310),
    1,
    sym_base_type_spec,
    ACTIONS(189),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(191),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(209),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(215),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(219),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(223),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(211),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(287),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(227),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(228),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    ACTIONS(199),
    4,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    sym_value_base_type,
    STATE(255),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(277),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    [2433] = 39,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(11),
    1,
    anon_sym_exception,
    ACTIONS(13),
    1,
    anon_sym_local,
    ACTIONS(15),
    1,
    anon_sym_abstract,
    ACTIONS(17),
    1,
    anon_sym_interface,
    ACTIONS(19),
    1,
    anon_sym_bitset,
    ACTIONS(21),
    1,
    anon_sym_bitmask,
    ACTIONS(23),
    1,
    anon_sym_ATannotation,
    ACTIONS(25),
    1,
    anon_sym_AT,
    ACTIONS(27),
    1,
    anon_sym_module,
    ACTIONS(29),
    1,
    anon_sym_valuetype,
    ACTIONS(31),
    1,
    anon_sym_struct,
    ACTIONS(33),
    1,
    anon_sym_union,
    ACTIONS(35),
    1,
    anon_sym_enum,
    ACTIONS(37),
    1,
    anon_sym_const,
    ACTIONS(39),
    1,
    anon_sym_custom,
    ACTIONS(41),
    1,
    anon_sym_typedef,
    ACTIONS(43),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(45),
    1,
    anon_sym_typeid,
    ACTIONS(47),
    1,
    anon_sym_typeprefix,
    ACTIONS(49),
    1,
    anon_sym_import,
    ACTIONS(51),
    1,
    anon_sym_native,
    ACTIONS(447),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(770),
    1,
    anon_sym_RBRACE,
    STATE(21),
    1,
    aux_sym_specification_repeat2,
    STATE(34),
    1,
    sym_comment,
    STATE(107),
    1,
    sym_predefine,
    STATE(115),
    1,
    sym__definition,
    STATE(146),
    1,
    aux_sym_interface_def_repeat1,
    STATE(171),
    1,
    sym_annotation_appl,
    STATE(458),
    1,
    sym_enum_anno,
    STATE(459),
    1,
    sym_value_header,
    STATE(463),
    1,
    sym_value_kind,
    STATE(474),
    1,
    sym_interface_header,
    STATE(479),
    1,
    sym_interface_kind,
    STATE(475),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(469),
    3,
    sym_value_def,
    sym_value_forward_dcl,
    sym_value_abs_def,
    STATE(491),
    20,
    sym_except_dcl,
    sym_interface_dcl,
    sym_bitset_dcl,
    sym_bitmask_dcl,
    sym_annotation_dcl,
    sym_template_module_dcl,
    sym_template_module_inst,
    sym_value_dcl,
    sym_typedef_dcl,
    sym_enum_dcl,
    sym_union_forward_dcl,
    sym_union_def,
    sym_type_id_dcl,
    sym_type_prefix_dcl,
    sym_import_dcl,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_const_dcl,
    [2573] = 40,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(193),
    1,
    anon_sym_longlong,
    ACTIONS(195),
    1,
    anon_sym_int64,
    ACTIONS(197),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(201),
    1,
    anon_sym_fixed,
    ACTIONS(203),
    1,
    sym_signed_tiny_int,
    ACTIONS(205),
    1,
    anon_sym_unsignedshort,
    ACTIONS(207),
    1,
    anon_sym_uint16,
    ACTIONS(211),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(213),
    1,
    anon_sym_uint64,
    ACTIONS(217),
    1,
    anon_sym_longdouble,
    ACTIONS(221),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(225),
    1,
    anon_sym_any,
    ACTIONS(227),
    1,
    anon_sym_sequence,
    ACTIONS(229),
    1,
    anon_sym_map,
    ACTIONS(275),
    1,
    sym_identifier,
    ACTIONS(594),
    1,
    anon_sym_AT,
    ACTIONS(667),
    1,
    anon_sym_RBRACE,
    STATE(23),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(35),
    1,
    sym_comment,
    STATE(41),
    1,
    aux_sym_interface_def_repeat1,
    STATE(72),
    1,
    sym_member,
    STATE(81),
    1,
    sym_annotation_appl,
    STATE(175),
    1,
    sym_type_spec,
    STATE(215),
    1,
    sym_scoped_name,
    STATE(310),
    1,
    sym_base_type_spec,
    ACTIONS(189),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(191),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(209),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(215),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(219),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(223),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(211),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(287),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(227),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(228),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    ACTIONS(199),
    4,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    sym_value_base_type,
    STATE(255),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(277),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    [2715] = 40,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(193),
    1,
    anon_sym_longlong,
    ACTIONS(195),
    1,
    anon_sym_int64,
    ACTIONS(197),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(201),
    1,
    anon_sym_fixed,
    ACTIONS(203),
    1,
    sym_signed_tiny_int,
    ACTIONS(205),
    1,
    anon_sym_unsignedshort,
    ACTIONS(207),
    1,
    anon_sym_uint16,
    ACTIONS(211),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(213),
    1,
    anon_sym_uint64,
    ACTIONS(217),
    1,
    anon_sym_longdouble,
    ACTIONS(221),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(225),
    1,
    anon_sym_any,
    ACTIONS(227),
    1,
    anon_sym_sequence,
    ACTIONS(229),
    1,
    anon_sym_map,
    ACTIONS(275),
    1,
    sym_identifier,
    ACTIONS(594),
    1,
    anon_sym_AT,
    ACTIONS(772),
    1,
    anon_sym_RBRACE,
    STATE(26),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(36),
    1,
    sym_comment,
    STATE(41),
    1,
    aux_sym_interface_def_repeat1,
    STATE(72),
    1,
    sym_member,
    STATE(81),
    1,
    sym_annotation_appl,
    STATE(175),
    1,
    sym_type_spec,
    STATE(215),
    1,
    sym_scoped_name,
    STATE(310),
    1,
    sym_base_type_spec,
    ACTIONS(189),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(191),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(209),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(215),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(219),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(223),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(211),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(287),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(227),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(228),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    ACTIONS(199),
    4,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    sym_value_base_type,
    STATE(255),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(277),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    [2857] = 41,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(193),
    1,
    anon_sym_longlong,
    ACTIONS(195),
    1,
    anon_sym_int64,
    ACTIONS(197),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(203),
    1,
    sym_signed_tiny_int,
    ACTIONS(205),
    1,
    anon_sym_unsignedshort,
    ACTIONS(207),
    1,
    anon_sym_uint16,
    ACTIONS(211),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(213),
    1,
    anon_sym_uint64,
    ACTIONS(217),
    1,
    anon_sym_longdouble,
    ACTIONS(221),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(227),
    1,
    anon_sym_sequence,
    ACTIONS(255),
    1,
    anon_sym_enum,
    ACTIONS(257),
    1,
    anon_sym_const,
    ACTIONS(265),
    1,
    anon_sym_typedef,
    ACTIONS(275),
    1,
    sym_identifier,
    ACTIONS(679),
    1,
    anon_sym_fixed,
    ACTIONS(681),
    1,
    anon_sym_any,
    ACTIONS(685),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(774),
    1,
    anon_sym_RBRACE,
    STATE(29),
    1,
    aux_sym_annotation_dcl_repeat1,
    STATE(37),
    1,
    sym_comment,
    STATE(76),
    1,
    sym_annotation_body,
    STATE(77),
    1,
    sym_annotation_member,
    STATE(358),
    1,
    sym_scoped_name,
    STATE(361),
    1,
    sym_annotation_member_type,
    STATE(458),
    1,
    sym_enum_anno,
    ACTIONS(189),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(191),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(209),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(215),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(219),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(223),
    2,
    anon_sym_string,
    anon_sym_wstring,
    ACTIONS(677),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(211),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(565),
    2,
    sym_any_const_type,
    sym_const_type,
    STATE(227),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(228),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(564),
    3,
    sym_typedef_dcl,
    sym_enum_dcl,
    sym_const_dcl,
    STATE(513),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [3001] = 40,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(193),
    1,
    anon_sym_longlong,
    ACTIONS(195),
    1,
    anon_sym_int64,
    ACTIONS(197),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(201),
    1,
    anon_sym_fixed,
    ACTIONS(203),
    1,
    sym_signed_tiny_int,
    ACTIONS(205),
    1,
    anon_sym_unsignedshort,
    ACTIONS(207),
    1,
    anon_sym_uint16,
    ACTIONS(211),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(213),
    1,
    anon_sym_uint64,
    ACTIONS(217),
    1,
    anon_sym_longdouble,
    ACTIONS(221),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(225),
    1,
    anon_sym_any,
    ACTIONS(227),
    1,
    anon_sym_sequence,
    ACTIONS(229),
    1,
    anon_sym_map,
    ACTIONS(275),
    1,
    sym_identifier,
    ACTIONS(594),
    1,
    anon_sym_AT,
    ACTIONS(776),
    1,
    anon_sym_RBRACE,
    STATE(23),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(38),
    1,
    sym_comment,
    STATE(41),
    1,
    aux_sym_interface_def_repeat1,
    STATE(72),
    1,
    sym_member,
    STATE(81),
    1,
    sym_annotation_appl,
    STATE(175),
    1,
    sym_type_spec,
    STATE(215),
    1,
    sym_scoped_name,
    STATE(310),
    1,
    sym_base_type_spec,
    ACTIONS(189),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(191),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(209),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(215),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(219),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(223),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(211),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(287),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(227),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(228),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    ACTIONS(199),
    4,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    sym_value_base_type,
    STATE(255),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(277),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    [3143] = 39,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(11),
    1,
    anon_sym_exception,
    ACTIONS(13),
    1,
    anon_sym_local,
    ACTIONS(15),
    1,
    anon_sym_abstract,
    ACTIONS(17),
    1,
    anon_sym_interface,
    ACTIONS(19),
    1,
    anon_sym_bitset,
    ACTIONS(21),
    1,
    anon_sym_bitmask,
    ACTIONS(23),
    1,
    anon_sym_ATannotation,
    ACTIONS(25),
    1,
    anon_sym_AT,
    ACTIONS(27),
    1,
    anon_sym_module,
    ACTIONS(29),
    1,
    anon_sym_valuetype,
    ACTIONS(31),
    1,
    anon_sym_struct,
    ACTIONS(33),
    1,
    anon_sym_union,
    ACTIONS(35),
    1,
    anon_sym_enum,
    ACTIONS(37),
    1,
    anon_sym_const,
    ACTIONS(39),
    1,
    anon_sym_custom,
    ACTIONS(41),
    1,
    anon_sym_typedef,
    ACTIONS(43),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(45),
    1,
    anon_sym_typeid,
    ACTIONS(47),
    1,
    anon_sym_typeprefix,
    ACTIONS(49),
    1,
    anon_sym_import,
    ACTIONS(51),
    1,
    anon_sym_native,
    ACTIONS(447),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(449),
    1,
    ts_builtin_sym_end,
    STATE(21),
    1,
    aux_sym_specification_repeat2,
    STATE(39),
    1,
    sym_comment,
    STATE(107),
    1,
    sym_predefine,
    STATE(115),
    1,
    sym__definition,
    STATE(146),
    1,
    aux_sym_interface_def_repeat1,
    STATE(171),
    1,
    sym_annotation_appl,
    STATE(458),
    1,
    sym_enum_anno,
    STATE(459),
    1,
    sym_value_header,
    STATE(463),
    1,
    sym_value_kind,
    STATE(474),
    1,
    sym_interface_header,
    STATE(479),
    1,
    sym_interface_kind,
    STATE(475),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(469),
    3,
    sym_value_def,
    sym_value_forward_dcl,
    sym_value_abs_def,
    STATE(491),
    20,
    sym_except_dcl,
    sym_interface_dcl,
    sym_bitset_dcl,
    sym_bitmask_dcl,
    sym_annotation_dcl,
    sym_template_module_dcl,
    sym_template_module_inst,
    sym_value_dcl,
    sym_typedef_dcl,
    sym_enum_dcl,
    sym_union_forward_dcl,
    sym_union_def,
    sym_type_id_dcl,
    sym_type_prefix_dcl,
    sym_import_dcl,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_const_dcl,
    [3283] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(40),
    1,
    sym_comment,
    ACTIONS(780),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(778),
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
    [3352] = 37,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(193),
    1,
    anon_sym_longlong,
    ACTIONS(195),
    1,
    anon_sym_int64,
    ACTIONS(197),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(201),
    1,
    anon_sym_fixed,
    ACTIONS(203),
    1,
    sym_signed_tiny_int,
    ACTIONS(205),
    1,
    anon_sym_unsignedshort,
    ACTIONS(207),
    1,
    anon_sym_uint16,
    ACTIONS(211),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(213),
    1,
    anon_sym_uint64,
    ACTIONS(217),
    1,
    anon_sym_longdouble,
    ACTIONS(221),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(225),
    1,
    anon_sym_any,
    ACTIONS(227),
    1,
    anon_sym_sequence,
    ACTIONS(229),
    1,
    anon_sym_map,
    ACTIONS(275),
    1,
    sym_identifier,
    ACTIONS(594),
    1,
    anon_sym_AT,
    STATE(41),
    1,
    sym_comment,
    STATE(65),
    1,
    aux_sym_interface_def_repeat1,
    STATE(81),
    1,
    sym_annotation_appl,
    STATE(183),
    1,
    sym_type_spec,
    STATE(215),
    1,
    sym_scoped_name,
    STATE(310),
    1,
    sym_base_type_spec,
    ACTIONS(189),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(191),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(209),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(215),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(219),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(223),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(211),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(287),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(227),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(228),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    ACTIONS(199),
    4,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    sym_value_base_type,
    STATE(255),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(277),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    [3485] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(42),
    1,
    sym_comment,
    ACTIONS(784),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(782),
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
    [3554] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(43),
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
    [3623] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(44),
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
    [3692] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(45),
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
    [3761] = 34,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(193),
    1,
    anon_sym_longlong,
    ACTIONS(195),
    1,
    anon_sym_int64,
    ACTIONS(197),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(203),
    1,
    sym_signed_tiny_int,
    ACTIONS(205),
    1,
    anon_sym_unsignedshort,
    ACTIONS(207),
    1,
    anon_sym_uint16,
    ACTIONS(211),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(213),
    1,
    anon_sym_uint64,
    ACTIONS(217),
    1,
    anon_sym_longdouble,
    ACTIONS(221),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(225),
    1,
    anon_sym_any,
    ACTIONS(275),
    1,
    sym_identifier,
    ACTIONS(798),
    1,
    anon_sym_sequence,
    ACTIONS(802),
    1,
    anon_sym_const,
    STATE(46),
    1,
    sym_comment,
    STATE(215),
    1,
    sym_scoped_name,
    STATE(310),
    1,
    sym_base_type_spec,
    STATE(315),
    1,
    sym_formal_parameter,
    STATE(553),
    1,
    sym_formal_parameter_type,
    STATE(556),
    1,
    sym_formal_parameters,
    ACTIONS(189),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(191),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(209),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(215),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(219),
    2,
    anon_sym_char,
    anon_sym_wchar,
    STATE(211),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(559),
    2,
    sym_simple_type_spec,
    sym_sequence_type,
    STATE(227),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(228),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    ACTIONS(199),
    4,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    sym_value_base_type,
    STATE(277),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    ACTIONS(800),
    8,
    anon_sym_exception,
    anon_sym_interface,
    anon_sym_typename,
    anon_sym_valuetype,
    anon_sym_eventtype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    [3888] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(47),
    1,
    sym_comment,
    ACTIONS(806),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(804),
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
    [3957] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(48),
    1,
    sym_comment,
    ACTIONS(810),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(808),
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
    [4026] = 36,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(193),
    1,
    anon_sym_longlong,
    ACTIONS(195),
    1,
    anon_sym_int64,
    ACTIONS(197),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(201),
    1,
    anon_sym_fixed,
    ACTIONS(203),
    1,
    sym_signed_tiny_int,
    ACTIONS(205),
    1,
    anon_sym_unsignedshort,
    ACTIONS(207),
    1,
    anon_sym_uint16,
    ACTIONS(211),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(213),
    1,
    anon_sym_uint64,
    ACTIONS(217),
    1,
    anon_sym_longdouble,
    ACTIONS(221),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(225),
    1,
    anon_sym_any,
    ACTIONS(227),
    1,
    anon_sym_sequence,
    ACTIONS(229),
    1,
    anon_sym_map,
    ACTIONS(275),
    1,
    sym_identifier,
    ACTIONS(812),
    1,
    anon_sym_GT,
    ACTIONS(814),
    1,
    anon_sym_COMMA,
    STATE(49),
    1,
    sym_comment,
    STATE(215),
    1,
    sym_scoped_name,
    STATE(310),
    1,
    sym_base_type_spec,
    STATE(548),
    1,
    sym_type_spec,
    ACTIONS(189),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(191),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(209),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(215),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(219),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(223),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(211),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(287),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(227),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(228),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    ACTIONS(199),
    4,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    sym_value_base_type,
    STATE(255),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(277),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    [4156] = 33,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(193),
    1,
    anon_sym_longlong,
    ACTIONS(195),
    1,
    anon_sym_int64,
    ACTIONS(197),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(203),
    1,
    sym_signed_tiny_int,
    ACTIONS(205),
    1,
    anon_sym_unsignedshort,
    ACTIONS(207),
    1,
    anon_sym_uint16,
    ACTIONS(211),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(213),
    1,
    anon_sym_uint64,
    ACTIONS(217),
    1,
    anon_sym_longdouble,
    ACTIONS(221),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(225),
    1,
    anon_sym_any,
    ACTIONS(275),
    1,
    sym_identifier,
    ACTIONS(798),
    1,
    anon_sym_sequence,
    ACTIONS(802),
    1,
    anon_sym_const,
    STATE(50),
    1,
    sym_comment,
    STATE(215),
    1,
    sym_scoped_name,
    STATE(310),
    1,
    sym_base_type_spec,
    STATE(402),
    1,
    sym_formal_parameter,
    STATE(553),
    1,
    sym_formal_parameter_type,
    ACTIONS(189),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(191),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(209),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(215),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(219),
    2,
    anon_sym_char,
    anon_sym_wchar,
    STATE(211),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(559),
    2,
    sym_simple_type_spec,
    sym_sequence_type,
    STATE(227),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(228),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    ACTIONS(199),
    4,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    sym_value_base_type,
    STATE(277),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    ACTIONS(800),
    8,
    anon_sym_exception,
    anon_sym_interface,
    anon_sym_typename,
    anon_sym_valuetype,
    anon_sym_eventtype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    [4280] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(51),
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
    [4346] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(52),
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
    [4412] = 34,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(193),
    1,
    anon_sym_longlong,
    ACTIONS(195),
    1,
    anon_sym_int64,
    ACTIONS(197),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(201),
    1,
    anon_sym_fixed,
    ACTIONS(203),
    1,
    sym_signed_tiny_int,
    ACTIONS(205),
    1,
    anon_sym_unsignedshort,
    ACTIONS(207),
    1,
    anon_sym_uint16,
    ACTIONS(211),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(213),
    1,
    anon_sym_uint64,
    ACTIONS(217),
    1,
    anon_sym_longdouble,
    ACTIONS(221),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(225),
    1,
    anon_sym_any,
    ACTIONS(227),
    1,
    anon_sym_sequence,
    ACTIONS(229),
    1,
    anon_sym_map,
    ACTIONS(275),
    1,
    sym_identifier,
    STATE(53),
    1,
    sym_comment,
    STATE(215),
    1,
    sym_scoped_name,
    STATE(310),
    1,
    sym_base_type_spec,
    STATE(386),
    1,
    sym_type_spec,
    ACTIONS(189),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(191),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(209),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(215),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(219),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(223),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(211),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(287),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(227),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(228),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    ACTIONS(199),
    4,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    sym_value_base_type,
    STATE(255),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(277),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    [4536] = 34,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(193),
    1,
    anon_sym_longlong,
    ACTIONS(195),
    1,
    anon_sym_int64,
    ACTIONS(197),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(201),
    1,
    anon_sym_fixed,
    ACTIONS(203),
    1,
    sym_signed_tiny_int,
    ACTIONS(205),
    1,
    anon_sym_unsignedshort,
    ACTIONS(207),
    1,
    anon_sym_uint16,
    ACTIONS(211),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(213),
    1,
    anon_sym_uint64,
    ACTIONS(217),
    1,
    anon_sym_longdouble,
    ACTIONS(221),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(225),
    1,
    anon_sym_any,
    ACTIONS(227),
    1,
    anon_sym_sequence,
    ACTIONS(229),
    1,
    anon_sym_map,
    ACTIONS(275),
    1,
    sym_identifier,
    STATE(54),
    1,
    sym_comment,
    STATE(215),
    1,
    sym_scoped_name,
    STATE(310),
    1,
    sym_base_type_spec,
    STATE(411),
    1,
    sym_type_spec,
    ACTIONS(189),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(191),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(209),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(215),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(219),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(223),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(211),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(287),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(227),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(228),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    ACTIONS(199),
    4,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    sym_value_base_type,
    STATE(255),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(277),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    [4660] = 34,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(193),
    1,
    anon_sym_longlong,
    ACTIONS(195),
    1,
    anon_sym_int64,
    ACTIONS(197),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(201),
    1,
    anon_sym_fixed,
    ACTIONS(203),
    1,
    sym_signed_tiny_int,
    ACTIONS(205),
    1,
    anon_sym_unsignedshort,
    ACTIONS(207),
    1,
    anon_sym_uint16,
    ACTIONS(211),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(213),
    1,
    anon_sym_uint64,
    ACTIONS(217),
    1,
    anon_sym_longdouble,
    ACTIONS(221),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(225),
    1,
    anon_sym_any,
    ACTIONS(227),
    1,
    anon_sym_sequence,
    ACTIONS(229),
    1,
    anon_sym_map,
    ACTIONS(275),
    1,
    sym_identifier,
    STATE(55),
    1,
    sym_comment,
    STATE(215),
    1,
    sym_scoped_name,
    STATE(310),
    1,
    sym_base_type_spec,
    STATE(428),
    1,
    sym_type_spec,
    ACTIONS(189),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(191),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(209),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(215),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(219),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(223),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(211),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(287),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(227),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(228),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    ACTIONS(199),
    4,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    sym_value_base_type,
    STATE(255),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(277),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    [4784] = 34,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(193),
    1,
    anon_sym_longlong,
    ACTIONS(195),
    1,
    anon_sym_int64,
    ACTIONS(197),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(201),
    1,
    anon_sym_fixed,
    ACTIONS(203),
    1,
    sym_signed_tiny_int,
    ACTIONS(205),
    1,
    anon_sym_unsignedshort,
    ACTIONS(207),
    1,
    anon_sym_uint16,
    ACTIONS(211),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(213),
    1,
    anon_sym_uint64,
    ACTIONS(217),
    1,
    anon_sym_longdouble,
    ACTIONS(221),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(225),
    1,
    anon_sym_any,
    ACTIONS(227),
    1,
    anon_sym_sequence,
    ACTIONS(229),
    1,
    anon_sym_map,
    ACTIONS(275),
    1,
    sym_identifier,
    STATE(56),
    1,
    sym_comment,
    STATE(177),
    1,
    sym_type_spec,
    STATE(215),
    1,
    sym_scoped_name,
    STATE(310),
    1,
    sym_base_type_spec,
    ACTIONS(189),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(191),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(209),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(215),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(219),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(223),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(211),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(287),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(227),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(228),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    ACTIONS(199),
    4,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    sym_value_base_type,
    STATE(255),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(277),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    [4908] = 34,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(193),
    1,
    anon_sym_longlong,
    ACTIONS(195),
    1,
    anon_sym_int64,
    ACTIONS(197),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(201),
    1,
    anon_sym_fixed,
    ACTIONS(203),
    1,
    sym_signed_tiny_int,
    ACTIONS(205),
    1,
    anon_sym_unsignedshort,
    ACTIONS(207),
    1,
    anon_sym_uint16,
    ACTIONS(211),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(213),
    1,
    anon_sym_uint64,
    ACTIONS(217),
    1,
    anon_sym_longdouble,
    ACTIONS(221),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(225),
    1,
    anon_sym_any,
    ACTIONS(227),
    1,
    anon_sym_sequence,
    ACTIONS(229),
    1,
    anon_sym_map,
    ACTIONS(275),
    1,
    sym_identifier,
    STATE(57),
    1,
    sym_comment,
    STATE(215),
    1,
    sym_scoped_name,
    STATE(310),
    1,
    sym_base_type_spec,
    STATE(354),
    1,
    sym_type_spec,
    ACTIONS(189),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(191),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(209),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(215),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(219),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(223),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(211),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(287),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(227),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(228),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    ACTIONS(199),
    4,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    sym_value_base_type,
    STATE(255),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(277),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    [5032] = 34,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(193),
    1,
    anon_sym_longlong,
    ACTIONS(195),
    1,
    anon_sym_int64,
    ACTIONS(197),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(201),
    1,
    anon_sym_fixed,
    ACTIONS(203),
    1,
    sym_signed_tiny_int,
    ACTIONS(205),
    1,
    anon_sym_unsignedshort,
    ACTIONS(207),
    1,
    anon_sym_uint16,
    ACTIONS(211),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(213),
    1,
    anon_sym_uint64,
    ACTIONS(217),
    1,
    anon_sym_longdouble,
    ACTIONS(225),
    1,
    anon_sym_any,
    ACTIONS(227),
    1,
    anon_sym_sequence,
    ACTIONS(229),
    1,
    anon_sym_map,
    ACTIONS(419),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(437),
    1,
    sym_identifier,
    STATE(58),
    1,
    sym_comment,
    STATE(310),
    1,
    sym_base_type_spec,
    STATE(445),
    1,
    sym_scoped_name,
    STATE(544),
    1,
    sym_type_spec,
    ACTIONS(189),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(191),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(209),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(215),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(219),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(223),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(211),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(287),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(227),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(228),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    ACTIONS(199),
    4,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    sym_value_base_type,
    STATE(255),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(277),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    [5156] = 34,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(193),
    1,
    anon_sym_longlong,
    ACTIONS(195),
    1,
    anon_sym_int64,
    ACTIONS(197),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(201),
    1,
    anon_sym_fixed,
    ACTIONS(203),
    1,
    sym_signed_tiny_int,
    ACTIONS(205),
    1,
    anon_sym_unsignedshort,
    ACTIONS(207),
    1,
    anon_sym_uint16,
    ACTIONS(211),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(213),
    1,
    anon_sym_uint64,
    ACTIONS(217),
    1,
    anon_sym_longdouble,
    ACTIONS(221),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(225),
    1,
    anon_sym_any,
    ACTIONS(227),
    1,
    anon_sym_sequence,
    ACTIONS(229),
    1,
    anon_sym_map,
    ACTIONS(275),
    1,
    sym_identifier,
    STATE(59),
    1,
    sym_comment,
    STATE(215),
    1,
    sym_scoped_name,
    STATE(275),
    1,
    sym_type_spec,
    STATE(310),
    1,
    sym_base_type_spec,
    ACTIONS(189),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(191),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(209),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(215),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(219),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(223),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(211),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(287),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(227),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(228),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    ACTIONS(199),
    4,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    sym_value_base_type,
    STATE(255),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(277),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    [5280] = 34,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(193),
    1,
    anon_sym_longlong,
    ACTIONS(195),
    1,
    anon_sym_int64,
    ACTIONS(197),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(201),
    1,
    anon_sym_fixed,
    ACTIONS(203),
    1,
    sym_signed_tiny_int,
    ACTIONS(205),
    1,
    anon_sym_unsignedshort,
    ACTIONS(207),
    1,
    anon_sym_uint16,
    ACTIONS(211),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(213),
    1,
    anon_sym_uint64,
    ACTIONS(217),
    1,
    anon_sym_longdouble,
    ACTIONS(221),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(225),
    1,
    anon_sym_any,
    ACTIONS(227),
    1,
    anon_sym_sequence,
    ACTIONS(229),
    1,
    anon_sym_map,
    ACTIONS(275),
    1,
    sym_identifier,
    STATE(60),
    1,
    sym_comment,
    STATE(215),
    1,
    sym_scoped_name,
    STATE(310),
    1,
    sym_base_type_spec,
    STATE(372),
    1,
    sym_type_spec,
    ACTIONS(189),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(191),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(209),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(215),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(219),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(223),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(211),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(287),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(227),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(228),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    ACTIONS(199),
    4,
    sym_boolean_type,
    sym_octet_type,
    sym_object_type,
    sym_value_base_type,
    STATE(255),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(277),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    [5404] = 29,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(193),
    1,
    anon_sym_longlong,
    ACTIONS(195),
    1,
    anon_sym_int64,
    ACTIONS(197),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(203),
    1,
    sym_signed_tiny_int,
    ACTIONS(205),
    1,
    anon_sym_unsignedshort,
    ACTIONS(207),
    1,
    anon_sym_uint16,
    ACTIONS(211),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(213),
    1,
    anon_sym_uint64,
    ACTIONS(217),
    1,
    anon_sym_longdouble,
    ACTIONS(221),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(227),
    1,
    anon_sym_sequence,
    ACTIONS(275),
    1,
    sym_identifier,
    ACTIONS(679),
    1,
    anon_sym_fixed,
    STATE(61),
    1,
    sym_comment,
    STATE(426),
    1,
    sym_scoped_name,
    STATE(531),
    1,
    sym_const_type,
    ACTIONS(189),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(191),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(209),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(215),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(219),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(223),
    2,
    anon_sym_string,
    anon_sym_wstring,
    ACTIONS(677),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(211),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(227),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(228),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(513),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [5509] = 29,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(193),
    1,
    anon_sym_longlong,
    ACTIONS(195),
    1,
    anon_sym_int64,
    ACTIONS(197),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(203),
    1,
    sym_signed_tiny_int,
    ACTIONS(205),
    1,
    anon_sym_unsignedshort,
    ACTIONS(207),
    1,
    anon_sym_uint16,
    ACTIONS(211),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(213),
    1,
    anon_sym_uint64,
    ACTIONS(217),
    1,
    anon_sym_longdouble,
    ACTIONS(221),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(227),
    1,
    anon_sym_sequence,
    ACTIONS(275),
    1,
    sym_identifier,
    ACTIONS(679),
    1,
    anon_sym_fixed,
    STATE(62),
    1,
    sym_comment,
    STATE(426),
    1,
    sym_scoped_name,
    STATE(512),
    1,
    sym_const_type,
    ACTIONS(189),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(191),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(209),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(215),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(219),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(223),
    2,
    anon_sym_string,
    anon_sym_wstring,
    ACTIONS(677),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(211),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(227),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(228),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(513),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [5614] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(63),
    1,
    sym_comment,
    ACTIONS(822),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(820),
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
    [5669] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(64),
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
    [5724] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(832),
    1,
    anon_sym_AT,
    STATE(81),
    1,
    sym_annotation_appl,
    STATE(65),
    2,
    sym_comment,
    aux_sym_interface_def_repeat1,
    ACTIONS(830),
    5,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    ACTIONS(828),
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
    [5776] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(66),
    1,
    sym_comment,
    ACTIONS(837),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(835),
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
    [5823] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(67),
    1,
    sym_comment,
    ACTIONS(841),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_LPAREN,
    anon_sym_AT,
    ACTIONS(839),
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
    [5870] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(68),
    1,
    sym_comment,
    ACTIONS(845),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_LPAREN,
    anon_sym_AT,
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
    anon_sym_map,
    sym_object_type,
    sym_value_base_type,
    sym_identifier,
    [5917] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(69),
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
    [5964] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(70),
    1,
    sym_comment,
    ACTIONS(853),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
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
    anon_sym_enum,
    anon_sym_const,
    anon_sym_typedef,
    sym_identifier,
    [6011] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(859),
    1,
    anon_sym_LPAREN,
    STATE(71),
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
    [6060] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(72),
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
    [6107] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(73),
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
    anon_sym_ATignore_literal_names,
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
    anon_sym_enum,
    anon_sym_const,
    anon_sym_typedef,
    sym_identifier,
    [6154] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(74),
    1,
    sym_comment,
    ACTIONS(871),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
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
    anon_sym_enum,
    anon_sym_const,
    anon_sym_typedef,
    sym_identifier,
    [6201] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(75),
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
    anon_sym_AT,
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
    anon_sym_map,
    sym_object_type,
    sym_value_base_type,
    sym_identifier,
    [6248] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(76),
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
    anon_sym_ATignore_literal_names,
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
    anon_sym_enum,
    anon_sym_const,
    anon_sym_typedef,
    sym_identifier,
    [6295] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(77),
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
    [6342] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(78),
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
    anon_sym_AT,
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
    anon_sym_map,
    sym_object_type,
    sym_value_base_type,
    sym_identifier,
    [6389] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(79),
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
    [6436] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(80),
    1,
    sym_comment,
    ACTIONS(895),
    6,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
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
    [6482] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(81),
    1,
    sym_comment,
    ACTIONS(899),
    6,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_AT,
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
    anon_sym_map,
    sym_object_type,
    sym_value_base_type,
    sym_identifier,
    [6528] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(82),
    1,
    sym_comment,
    ACTIONS(903),
    5,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
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
    [6573] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(193),
    1,
    anon_sym_longlong,
    ACTIONS(195),
    1,
    anon_sym_int64,
    ACTIONS(197),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(203),
    1,
    sym_signed_tiny_int,
    ACTIONS(205),
    1,
    anon_sym_unsignedshort,
    ACTIONS(207),
    1,
    anon_sym_uint16,
    ACTIONS(211),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(213),
    1,
    anon_sym_uint64,
    ACTIONS(419),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(437),
    1,
    sym_identifier,
    ACTIONS(905),
    1,
    sym_boolean_type,
    STATE(83),
    1,
    sym_comment,
    STATE(379),
    1,
    sym_scoped_name,
    STATE(505),
    1,
    sym_switch_type_spec,
    ACTIONS(189),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(191),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(209),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(219),
    2,
    anon_sym_char,
    anon_sym_wchar,
    STATE(211),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(507),
    2,
    sym_integer_type,
    sym_char_type,
    STATE(227),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(228),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    [6656] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(84),
    1,
    sym_comment,
    ACTIONS(839),
    4,
    anon_sym_LT,
    anon_sym_GT,
    anon_sym_SLASH,
    anon_sym_COLON,
    ACTIONS(841),
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
    [6699] = 5,
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
    [6742] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(86),
    1,
    sym_comment,
    ACTIONS(843),
    4,
    anon_sym_LT,
    anon_sym_GT,
    anon_sym_SLASH,
    anon_sym_COLON,
    ACTIONS(845),
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
    [6785] = 27,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(419),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(423),
    1,
    anon_sym_LPAREN,
    ACTIONS(425),
    1,
    anon_sym_TILDE,
    ACTIONS(427),
    1,
    anon_sym_L,
    ACTIONS(429),
    1,
    anon_sym_DQUOTE,
    ACTIONS(431),
    1,
    anon_sym_SQUOTE,
    ACTIONS(435),
    1,
    sym_number_literal,
    ACTIONS(907),
    1,
    sym_identifier,
    STATE(87),
    1,
    sym_comment,
    STATE(123),
    1,
    sym_scoped_name,
    STATE(128),
    1,
    sym_literal,
    STATE(136),
    1,
    sym_unary_expr,
    STATE(138),
    1,
    sym_mult_expr,
    STATE(139),
    1,
    sym_unary_operator,
    STATE(141),
    1,
    sym_add_expr,
    STATE(144),
    1,
    sym_shift_expr,
    STATE(148),
    1,
    sym_and_expr,
    STATE(150),
    1,
    sym_xor_expr,
    STATE(158),
    1,
    sym_or_expr,
    STATE(319),
    1,
    sym_annotation_appl_param,
    STATE(560),
    1,
    sym_annotation_appl_params,
    STATE(561),
    1,
    sym_const_expr,
    ACTIONS(421),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(433),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(131),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6871] = 27,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(419),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(423),
    1,
    anon_sym_LPAREN,
    ACTIONS(425),
    1,
    anon_sym_TILDE,
    ACTIONS(427),
    1,
    anon_sym_L,
    ACTIONS(429),
    1,
    anon_sym_DQUOTE,
    ACTIONS(431),
    1,
    anon_sym_SQUOTE,
    ACTIONS(435),
    1,
    sym_number_literal,
    ACTIONS(907),
    1,
    sym_identifier,
    STATE(88),
    1,
    sym_comment,
    STATE(123),
    1,
    sym_scoped_name,
    STATE(128),
    1,
    sym_literal,
    STATE(136),
    1,
    sym_unary_expr,
    STATE(138),
    1,
    sym_mult_expr,
    STATE(139),
    1,
    sym_unary_operator,
    STATE(141),
    1,
    sym_add_expr,
    STATE(144),
    1,
    sym_shift_expr,
    STATE(148),
    1,
    sym_and_expr,
    STATE(150),
    1,
    sym_xor_expr,
    STATE(158),
    1,
    sym_or_expr,
    STATE(319),
    1,
    sym_annotation_appl_param,
    STATE(561),
    1,
    sym_const_expr,
    STATE(621),
    1,
    sym_annotation_appl_params,
    ACTIONS(421),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(433),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(131),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6957] = 27,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(419),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(423),
    1,
    anon_sym_LPAREN,
    ACTIONS(425),
    1,
    anon_sym_TILDE,
    ACTIONS(427),
    1,
    anon_sym_L,
    ACTIONS(429),
    1,
    anon_sym_DQUOTE,
    ACTIONS(431),
    1,
    anon_sym_SQUOTE,
    ACTIONS(435),
    1,
    sym_number_literal,
    ACTIONS(907),
    1,
    sym_identifier,
    STATE(89),
    1,
    sym_comment,
    STATE(123),
    1,
    sym_scoped_name,
    STATE(128),
    1,
    sym_literal,
    STATE(136),
    1,
    sym_unary_expr,
    STATE(138),
    1,
    sym_mult_expr,
    STATE(139),
    1,
    sym_unary_operator,
    STATE(141),
    1,
    sym_add_expr,
    STATE(144),
    1,
    sym_shift_expr,
    STATE(148),
    1,
    sym_and_expr,
    STATE(150),
    1,
    sym_xor_expr,
    STATE(158),
    1,
    sym_or_expr,
    STATE(319),
    1,
    sym_annotation_appl_param,
    STATE(561),
    1,
    sym_const_expr,
    STATE(618),
    1,
    sym_annotation_appl_params,
    ACTIONS(421),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(433),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(131),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7043] = 27,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(419),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(423),
    1,
    anon_sym_LPAREN,
    ACTIONS(425),
    1,
    anon_sym_TILDE,
    ACTIONS(427),
    1,
    anon_sym_L,
    ACTIONS(429),
    1,
    anon_sym_DQUOTE,
    ACTIONS(431),
    1,
    anon_sym_SQUOTE,
    ACTIONS(435),
    1,
    sym_number_literal,
    ACTIONS(907),
    1,
    sym_identifier,
    STATE(90),
    1,
    sym_comment,
    STATE(123),
    1,
    sym_scoped_name,
    STATE(128),
    1,
    sym_literal,
    STATE(136),
    1,
    sym_unary_expr,
    STATE(138),
    1,
    sym_mult_expr,
    STATE(139),
    1,
    sym_unary_operator,
    STATE(141),
    1,
    sym_add_expr,
    STATE(144),
    1,
    sym_shift_expr,
    STATE(148),
    1,
    sym_and_expr,
    STATE(150),
    1,
    sym_xor_expr,
    STATE(158),
    1,
    sym_or_expr,
    STATE(319),
    1,
    sym_annotation_appl_param,
    STATE(561),
    1,
    sym_const_expr,
    STATE(614),
    1,
    sym_annotation_appl_params,
    ACTIONS(421),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(433),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(131),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7129] = 26,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(419),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(423),
    1,
    anon_sym_LPAREN,
    ACTIONS(425),
    1,
    anon_sym_TILDE,
    ACTIONS(427),
    1,
    anon_sym_L,
    ACTIONS(429),
    1,
    anon_sym_DQUOTE,
    ACTIONS(431),
    1,
    anon_sym_SQUOTE,
    ACTIONS(435),
    1,
    sym_number_literal,
    ACTIONS(437),
    1,
    sym_identifier,
    STATE(91),
    1,
    sym_comment,
    STATE(123),
    1,
    sym_scoped_name,
    STATE(128),
    1,
    sym_literal,
    STATE(136),
    1,
    sym_unary_expr,
    STATE(138),
    1,
    sym_mult_expr,
    STATE(139),
    1,
    sym_unary_operator,
    STATE(141),
    1,
    sym_add_expr,
    STATE(144),
    1,
    sym_shift_expr,
    STATE(148),
    1,
    sym_and_expr,
    STATE(150),
    1,
    sym_xor_expr,
    STATE(158),
    1,
    sym_or_expr,
    STATE(262),
    1,
    sym_const_expr,
    STATE(453),
    1,
    sym_positive_int_const,
    ACTIONS(421),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(433),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(131),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7212] = 26,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(419),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(423),
    1,
    anon_sym_LPAREN,
    ACTIONS(425),
    1,
    anon_sym_TILDE,
    ACTIONS(427),
    1,
    anon_sym_L,
    ACTIONS(429),
    1,
    anon_sym_DQUOTE,
    ACTIONS(431),
    1,
    anon_sym_SQUOTE,
    ACTIONS(435),
    1,
    sym_number_literal,
    ACTIONS(437),
    1,
    sym_identifier,
    STATE(92),
    1,
    sym_comment,
    STATE(123),
    1,
    sym_scoped_name,
    STATE(128),
    1,
    sym_literal,
    STATE(136),
    1,
    sym_unary_expr,
    STATE(138),
    1,
    sym_mult_expr,
    STATE(139),
    1,
    sym_unary_operator,
    STATE(141),
    1,
    sym_add_expr,
    STATE(144),
    1,
    sym_shift_expr,
    STATE(148),
    1,
    sym_and_expr,
    STATE(150),
    1,
    sym_xor_expr,
    STATE(158),
    1,
    sym_or_expr,
    STATE(262),
    1,
    sym_const_expr,
    STATE(529),
    1,
    sym_positive_int_const,
    ACTIONS(421),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(433),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(131),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7295] = 26,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(419),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(423),
    1,
    anon_sym_LPAREN,
    ACTIONS(425),
    1,
    anon_sym_TILDE,
    ACTIONS(427),
    1,
    anon_sym_L,
    ACTIONS(429),
    1,
    anon_sym_DQUOTE,
    ACTIONS(431),
    1,
    anon_sym_SQUOTE,
    ACTIONS(435),
    1,
    sym_number_literal,
    ACTIONS(437),
    1,
    sym_identifier,
    STATE(93),
    1,
    sym_comment,
    STATE(123),
    1,
    sym_scoped_name,
    STATE(128),
    1,
    sym_literal,
    STATE(136),
    1,
    sym_unary_expr,
    STATE(138),
    1,
    sym_mult_expr,
    STATE(139),
    1,
    sym_unary_operator,
    STATE(141),
    1,
    sym_add_expr,
    STATE(144),
    1,
    sym_shift_expr,
    STATE(148),
    1,
    sym_and_expr,
    STATE(150),
    1,
    sym_xor_expr,
    STATE(158),
    1,
    sym_or_expr,
    STATE(262),
    1,
    sym_const_expr,
    STATE(502),
    1,
    sym_positive_int_const,
    ACTIONS(421),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(433),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(131),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7378] = 26,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(419),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(423),
    1,
    anon_sym_LPAREN,
    ACTIONS(425),
    1,
    anon_sym_TILDE,
    ACTIONS(427),
    1,
    anon_sym_L,
    ACTIONS(429),
    1,
    anon_sym_DQUOTE,
    ACTIONS(431),
    1,
    anon_sym_SQUOTE,
    ACTIONS(435),
    1,
    sym_number_literal,
    ACTIONS(437),
    1,
    sym_identifier,
    STATE(94),
    1,
    sym_comment,
    STATE(123),
    1,
    sym_scoped_name,
    STATE(128),
    1,
    sym_literal,
    STATE(136),
    1,
    sym_unary_expr,
    STATE(138),
    1,
    sym_mult_expr,
    STATE(139),
    1,
    sym_unary_operator,
    STATE(141),
    1,
    sym_add_expr,
    STATE(144),
    1,
    sym_shift_expr,
    STATE(148),
    1,
    sym_and_expr,
    STATE(150),
    1,
    sym_xor_expr,
    STATE(158),
    1,
    sym_or_expr,
    STATE(262),
    1,
    sym_const_expr,
    STATE(550),
    1,
    sym_positive_int_const,
    ACTIONS(421),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(433),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(131),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7461] = 26,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(419),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(423),
    1,
    anon_sym_LPAREN,
    ACTIONS(425),
    1,
    anon_sym_TILDE,
    ACTIONS(427),
    1,
    anon_sym_L,
    ACTIONS(429),
    1,
    anon_sym_DQUOTE,
    ACTIONS(431),
    1,
    anon_sym_SQUOTE,
    ACTIONS(435),
    1,
    sym_number_literal,
    ACTIONS(437),
    1,
    sym_identifier,
    STATE(95),
    1,
    sym_comment,
    STATE(123),
    1,
    sym_scoped_name,
    STATE(128),
    1,
    sym_literal,
    STATE(136),
    1,
    sym_unary_expr,
    STATE(138),
    1,
    sym_mult_expr,
    STATE(139),
    1,
    sym_unary_operator,
    STATE(141),
    1,
    sym_add_expr,
    STATE(144),
    1,
    sym_shift_expr,
    STATE(148),
    1,
    sym_and_expr,
    STATE(150),
    1,
    sym_xor_expr,
    STATE(158),
    1,
    sym_or_expr,
    STATE(262),
    1,
    sym_const_expr,
    STATE(476),
    1,
    sym_positive_int_const,
    ACTIONS(421),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(433),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(131),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7544] = 26,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(419),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(423),
    1,
    anon_sym_LPAREN,
    ACTIONS(425),
    1,
    anon_sym_TILDE,
    ACTIONS(427),
    1,
    anon_sym_L,
    ACTIONS(429),
    1,
    anon_sym_DQUOTE,
    ACTIONS(431),
    1,
    anon_sym_SQUOTE,
    ACTIONS(435),
    1,
    sym_number_literal,
    ACTIONS(437),
    1,
    sym_identifier,
    STATE(96),
    1,
    sym_comment,
    STATE(123),
    1,
    sym_scoped_name,
    STATE(128),
    1,
    sym_literal,
    STATE(136),
    1,
    sym_unary_expr,
    STATE(138),
    1,
    sym_mult_expr,
    STATE(139),
    1,
    sym_unary_operator,
    STATE(141),
    1,
    sym_add_expr,
    STATE(144),
    1,
    sym_shift_expr,
    STATE(148),
    1,
    sym_and_expr,
    STATE(150),
    1,
    sym_xor_expr,
    STATE(158),
    1,
    sym_or_expr,
    STATE(262),
    1,
    sym_const_expr,
    STATE(380),
    1,
    sym_positive_int_const,
    ACTIONS(421),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(433),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(131),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7627] = 26,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(419),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(423),
    1,
    anon_sym_LPAREN,
    ACTIONS(425),
    1,
    anon_sym_TILDE,
    ACTIONS(427),
    1,
    anon_sym_L,
    ACTIONS(429),
    1,
    anon_sym_DQUOTE,
    ACTIONS(431),
    1,
    anon_sym_SQUOTE,
    ACTIONS(435),
    1,
    sym_number_literal,
    ACTIONS(437),
    1,
    sym_identifier,
    STATE(97),
    1,
    sym_comment,
    STATE(123),
    1,
    sym_scoped_name,
    STATE(128),
    1,
    sym_literal,
    STATE(136),
    1,
    sym_unary_expr,
    STATE(138),
    1,
    sym_mult_expr,
    STATE(139),
    1,
    sym_unary_operator,
    STATE(141),
    1,
    sym_add_expr,
    STATE(144),
    1,
    sym_shift_expr,
    STATE(148),
    1,
    sym_and_expr,
    STATE(150),
    1,
    sym_xor_expr,
    STATE(158),
    1,
    sym_or_expr,
    STATE(262),
    1,
    sym_const_expr,
    STATE(504),
    1,
    sym_positive_int_const,
    ACTIONS(421),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(433),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(131),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7710] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(419),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(423),
    1,
    anon_sym_LPAREN,
    ACTIONS(425),
    1,
    anon_sym_TILDE,
    ACTIONS(427),
    1,
    anon_sym_L,
    ACTIONS(429),
    1,
    anon_sym_DQUOTE,
    ACTIONS(431),
    1,
    anon_sym_SQUOTE,
    ACTIONS(435),
    1,
    sym_number_literal,
    ACTIONS(437),
    1,
    sym_identifier,
    STATE(98),
    1,
    sym_comment,
    STATE(123),
    1,
    sym_scoped_name,
    STATE(128),
    1,
    sym_literal,
    STATE(136),
    1,
    sym_unary_expr,
    STATE(138),
    1,
    sym_mult_expr,
    STATE(139),
    1,
    sym_unary_operator,
    STATE(141),
    1,
    sym_add_expr,
    STATE(144),
    1,
    sym_shift_expr,
    STATE(148),
    1,
    sym_and_expr,
    STATE(150),
    1,
    sym_xor_expr,
    STATE(158),
    1,
    sym_or_expr,
    STATE(503),
    1,
    sym_const_expr,
    ACTIONS(421),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(433),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(131),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7790] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(419),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(423),
    1,
    anon_sym_LPAREN,
    ACTIONS(425),
    1,
    anon_sym_TILDE,
    ACTIONS(427),
    1,
    anon_sym_L,
    ACTIONS(429),
    1,
    anon_sym_DQUOTE,
    ACTIONS(431),
    1,
    anon_sym_SQUOTE,
    ACTIONS(435),
    1,
    sym_number_literal,
    ACTIONS(437),
    1,
    sym_identifier,
    STATE(99),
    1,
    sym_comment,
    STATE(123),
    1,
    sym_scoped_name,
    STATE(128),
    1,
    sym_literal,
    STATE(136),
    1,
    sym_unary_expr,
    STATE(138),
    1,
    sym_mult_expr,
    STATE(139),
    1,
    sym_unary_operator,
    STATE(141),
    1,
    sym_add_expr,
    STATE(144),
    1,
    sym_shift_expr,
    STATE(148),
    1,
    sym_and_expr,
    STATE(150),
    1,
    sym_xor_expr,
    STATE(158),
    1,
    sym_or_expr,
    STATE(467),
    1,
    sym_const_expr,
    ACTIONS(421),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(433),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(131),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7870] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(419),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(423),
    1,
    anon_sym_LPAREN,
    ACTIONS(425),
    1,
    anon_sym_TILDE,
    ACTIONS(427),
    1,
    anon_sym_L,
    ACTIONS(429),
    1,
    anon_sym_DQUOTE,
    ACTIONS(431),
    1,
    anon_sym_SQUOTE,
    ACTIONS(435),
    1,
    sym_number_literal,
    ACTIONS(437),
    1,
    sym_identifier,
    STATE(100),
    1,
    sym_comment,
    STATE(123),
    1,
    sym_scoped_name,
    STATE(128),
    1,
    sym_literal,
    STATE(136),
    1,
    sym_unary_expr,
    STATE(138),
    1,
    sym_mult_expr,
    STATE(139),
    1,
    sym_unary_operator,
    STATE(141),
    1,
    sym_add_expr,
    STATE(144),
    1,
    sym_shift_expr,
    STATE(148),
    1,
    sym_and_expr,
    STATE(150),
    1,
    sym_xor_expr,
    STATE(158),
    1,
    sym_or_expr,
    STATE(555),
    1,
    sym_const_expr,
    ACTIONS(421),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(433),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(131),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7950] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(419),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(423),
    1,
    anon_sym_LPAREN,
    ACTIONS(425),
    1,
    anon_sym_TILDE,
    ACTIONS(427),
    1,
    anon_sym_L,
    ACTIONS(429),
    1,
    anon_sym_DQUOTE,
    ACTIONS(431),
    1,
    anon_sym_SQUOTE,
    ACTIONS(435),
    1,
    sym_number_literal,
    ACTIONS(437),
    1,
    sym_identifier,
    STATE(101),
    1,
    sym_comment,
    STATE(123),
    1,
    sym_scoped_name,
    STATE(128),
    1,
    sym_literal,
    STATE(136),
    1,
    sym_unary_expr,
    STATE(138),
    1,
    sym_mult_expr,
    STATE(139),
    1,
    sym_unary_operator,
    STATE(141),
    1,
    sym_add_expr,
    STATE(144),
    1,
    sym_shift_expr,
    STATE(148),
    1,
    sym_and_expr,
    STATE(150),
    1,
    sym_xor_expr,
    STATE(158),
    1,
    sym_or_expr,
    STATE(457),
    1,
    sym_const_expr,
    ACTIONS(421),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(433),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(131),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [8030] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(419),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(423),
    1,
    anon_sym_LPAREN,
    ACTIONS(425),
    1,
    anon_sym_TILDE,
    ACTIONS(427),
    1,
    anon_sym_L,
    ACTIONS(429),
    1,
    anon_sym_DQUOTE,
    ACTIONS(431),
    1,
    anon_sym_SQUOTE,
    ACTIONS(435),
    1,
    sym_number_literal,
    ACTIONS(437),
    1,
    sym_identifier,
    STATE(102),
    1,
    sym_comment,
    STATE(123),
    1,
    sym_scoped_name,
    STATE(128),
    1,
    sym_literal,
    STATE(136),
    1,
    sym_unary_expr,
    STATE(138),
    1,
    sym_mult_expr,
    STATE(139),
    1,
    sym_unary_operator,
    STATE(141),
    1,
    sym_add_expr,
    STATE(144),
    1,
    sym_shift_expr,
    STATE(148),
    1,
    sym_and_expr,
    STATE(150),
    1,
    sym_xor_expr,
    STATE(158),
    1,
    sym_or_expr,
    STATE(520),
    1,
    sym_const_expr,
    ACTIONS(421),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(433),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(131),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [8110] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(911),
    1,
    sym_preproc_directive,
    STATE(117),
    1,
    sym_preproc_call,
    STATE(103),
    2,
    sym_comment,
    aux_sym_specification_repeat1,
    ACTIONS(914),
    3,
    anon_sym_AT,
    anon_sym_ATignore_literal_names,
    anon_sym_POUNDdefine,
    ACTIONS(909),
    20,
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
    anon_sym_native,
    [8154] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(419),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(423),
    1,
    anon_sym_LPAREN,
    ACTIONS(425),
    1,
    anon_sym_TILDE,
    ACTIONS(427),
    1,
    anon_sym_L,
    ACTIONS(429),
    1,
    anon_sym_DQUOTE,
    ACTIONS(431),
    1,
    anon_sym_SQUOTE,
    ACTIONS(435),
    1,
    sym_number_literal,
    ACTIONS(437),
    1,
    sym_identifier,
    STATE(104),
    1,
    sym_comment,
    STATE(123),
    1,
    sym_scoped_name,
    STATE(128),
    1,
    sym_literal,
    STATE(136),
    1,
    sym_unary_expr,
    STATE(138),
    1,
    sym_mult_expr,
    STATE(139),
    1,
    sym_unary_operator,
    STATE(141),
    1,
    sym_add_expr,
    STATE(144),
    1,
    sym_shift_expr,
    STATE(148),
    1,
    sym_and_expr,
    STATE(150),
    1,
    sym_xor_expr,
    STATE(158),
    1,
    sym_or_expr,
    STATE(465),
    1,
    sym_const_expr,
    ACTIONS(421),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(433),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(131),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [8234] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(419),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(423),
    1,
    anon_sym_LPAREN,
    ACTIONS(425),
    1,
    anon_sym_TILDE,
    ACTIONS(427),
    1,
    anon_sym_L,
    ACTIONS(429),
    1,
    anon_sym_DQUOTE,
    ACTIONS(431),
    1,
    anon_sym_SQUOTE,
    ACTIONS(435),
    1,
    sym_number_literal,
    ACTIONS(437),
    1,
    sym_identifier,
    STATE(105),
    1,
    sym_comment,
    STATE(123),
    1,
    sym_scoped_name,
    STATE(128),
    1,
    sym_literal,
    STATE(136),
    1,
    sym_unary_expr,
    STATE(138),
    1,
    sym_mult_expr,
    STATE(139),
    1,
    sym_unary_operator,
    STATE(141),
    1,
    sym_add_expr,
    STATE(144),
    1,
    sym_shift_expr,
    STATE(148),
    1,
    sym_and_expr,
    STATE(150),
    1,
    sym_xor_expr,
    STATE(158),
    1,
    sym_or_expr,
    STATE(393),
    1,
    sym_const_expr,
    ACTIONS(421),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(433),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(131),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [8314] = 19,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(191),
    1,
    anon_sym_long,
    ACTIONS(209),
    1,
    anon_sym_unsignedlong,
    ACTIONS(918),
    1,
    anon_sym_int32,
    ACTIONS(920),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(924),
    1,
    sym_signed_tiny_int,
    ACTIONS(926),
    1,
    anon_sym_uint32,
    STATE(106),
    1,
    sym_comment,
    STATE(516),
    1,
    sym_integer_type,
    STATE(517),
    1,
    sym_destination_type,
    ACTIONS(193),
    2,
    anon_sym_longlong,
    anon_sym_int64,
    ACTIONS(205),
    2,
    anon_sym_unsignedshort,
    anon_sym_uint16,
    ACTIONS(211),
    2,
    anon_sym_unsignedlonglong,
    anon_sym_uint64,
    ACTIONS(916),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(922),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(211),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(227),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(228),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    [8382] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(107),
    1,
    sym_comment,
    ACTIONS(930),
    2,
    anon_sym_AT,
    anon_sym_ATignore_literal_names,
    ACTIONS(928),
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
    anon_sym_alias,
    anon_sym_custom,
    anon_sym_typedef,
    anon_sym_typeid,
    anon_sym_typeprefix,
    anon_sym_import,
    anon_sym_native,
    anon_sym_POUNDdefine,
    [8421] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(108),
    1,
    sym_comment,
    ACTIONS(934),
    2,
    anon_sym_AT,
    anon_sym_ATignore_literal_names,
    ACTIONS(932),
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
    anon_sym_alias,
    anon_sym_custom,
    anon_sym_typedef,
    anon_sym_typeid,
    anon_sym_typeprefix,
    anon_sym_import,
    anon_sym_native,
    anon_sym_POUNDdefine,
    [8460] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(109),
    1,
    sym_comment,
    ACTIONS(938),
    2,
    anon_sym_AT,
    anon_sym_ATignore_literal_names,
    ACTIONS(936),
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
    anon_sym_alias,
    anon_sym_custom,
    anon_sym_typedef,
    anon_sym_typeid,
    anon_sym_typeprefix,
    anon_sym_import,
    anon_sym_native,
    anon_sym_POUNDdefine,
    [8499] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(110),
    1,
    sym_comment,
    ACTIONS(942),
    2,
    anon_sym_AT,
    anon_sym_ATignore_literal_names,
    ACTIONS(940),
    22,
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
    anon_sym_native,
    anon_sym_POUNDdefine,
    [8537] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(111),
    1,
    sym_comment,
    ACTIONS(946),
    2,
    anon_sym_AT,
    anon_sym_ATignore_literal_names,
    ACTIONS(944),
    22,
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
    anon_sym_native,
    anon_sym_POUNDdefine,
    [8575] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(419),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(423),
    1,
    anon_sym_LPAREN,
    ACTIONS(425),
    1,
    anon_sym_TILDE,
    ACTIONS(427),
    1,
    anon_sym_L,
    ACTIONS(429),
    1,
    anon_sym_DQUOTE,
    ACTIONS(431),
    1,
    anon_sym_SQUOTE,
    ACTIONS(435),
    1,
    sym_number_literal,
    ACTIONS(437),
    1,
    sym_identifier,
    STATE(112),
    1,
    sym_comment,
    STATE(123),
    1,
    sym_scoped_name,
    STATE(128),
    1,
    sym_literal,
    STATE(136),
    1,
    sym_unary_expr,
    STATE(138),
    1,
    sym_mult_expr,
    STATE(139),
    1,
    sym_unary_operator,
    STATE(141),
    1,
    sym_add_expr,
    STATE(144),
    1,
    sym_shift_expr,
    STATE(148),
    1,
    sym_and_expr,
    STATE(152),
    1,
    sym_xor_expr,
    ACTIONS(421),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(433),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(131),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [8649] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(113),
    1,
    sym_comment,
    ACTIONS(950),
    4,
    sym_preproc_directive,
    anon_sym_AT,
    anon_sym_ATignore_literal_names,
    anon_sym_POUNDdefine,
    ACTIONS(948),
    20,
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
    anon_sym_native,
    [8687] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(114),
    1,
    sym_comment,
    ACTIONS(954),
    4,
    sym_preproc_directive,
    anon_sym_AT,
    anon_sym_ATignore_literal_names,
    anon_sym_POUNDdefine,
    ACTIONS(952),
    20,
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
    anon_sym_native,
    [8725] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(115),
    1,
    sym_comment,
    ACTIONS(958),
    2,
    anon_sym_AT,
    anon_sym_ATignore_literal_names,
    ACTIONS(956),
    22,
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
    anon_sym_native,
    anon_sym_POUNDdefine,
    [8763] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(116),
    1,
    sym_comment,
    ACTIONS(962),
    2,
    anon_sym_AT,
    anon_sym_ATignore_literal_names,
    ACTIONS(960),
    22,
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
    anon_sym_native,
    anon_sym_POUNDdefine,
    [8801] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(117),
    1,
    sym_comment,
    ACTIONS(966),
    4,
    sym_preproc_directive,
    anon_sym_AT,
    anon_sym_ATignore_literal_names,
    anon_sym_POUNDdefine,
    ACTIONS(964),
    20,
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
    anon_sym_native,
    [8839] = 22,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(419),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(423),
    1,
    anon_sym_LPAREN,
    ACTIONS(425),
    1,
    anon_sym_TILDE,
    ACTIONS(427),
    1,
    anon_sym_L,
    ACTIONS(429),
    1,
    anon_sym_DQUOTE,
    ACTIONS(431),
    1,
    anon_sym_SQUOTE,
    ACTIONS(435),
    1,
    sym_number_literal,
    ACTIONS(437),
    1,
    sym_identifier,
    STATE(118),
    1,
    sym_comment,
    STATE(123),
    1,
    sym_scoped_name,
    STATE(128),
    1,
    sym_literal,
    STATE(136),
    1,
    sym_unary_expr,
    STATE(138),
    1,
    sym_mult_expr,
    STATE(139),
    1,
    sym_unary_operator,
    STATE(141),
    1,
    sym_add_expr,
    STATE(144),
    1,
    sym_shift_expr,
    STATE(147),
    1,
    sym_and_expr,
    ACTIONS(421),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(433),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(131),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [8910] = 21,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(419),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(423),
    1,
    anon_sym_LPAREN,
    ACTIONS(425),
    1,
    anon_sym_TILDE,
    ACTIONS(427),
    1,
    anon_sym_L,
    ACTIONS(429),
    1,
    anon_sym_DQUOTE,
    ACTIONS(431),
    1,
    anon_sym_SQUOTE,
    ACTIONS(435),
    1,
    sym_number_literal,
    ACTIONS(437),
    1,
    sym_identifier,
    STATE(119),
    1,
    sym_comment,
    STATE(123),
    1,
    sym_scoped_name,
    STATE(128),
    1,
    sym_literal,
    STATE(136),
    1,
    sym_unary_expr,
    STATE(138),
    1,
    sym_mult_expr,
    STATE(139),
    1,
    sym_unary_operator,
    STATE(141),
    1,
    sym_add_expr,
    STATE(145),
    1,
    sym_shift_expr,
    ACTIONS(421),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(433),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(131),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [8978] = 20,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(419),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(423),
    1,
    anon_sym_LPAREN,
    ACTIONS(425),
    1,
    anon_sym_TILDE,
    ACTIONS(427),
    1,
    anon_sym_L,
    ACTIONS(429),
    1,
    anon_sym_DQUOTE,
    ACTIONS(431),
    1,
    anon_sym_SQUOTE,
    ACTIONS(435),
    1,
    sym_number_literal,
    ACTIONS(437),
    1,
    sym_identifier,
    STATE(120),
    1,
    sym_comment,
    STATE(123),
    1,
    sym_scoped_name,
    STATE(128),
    1,
    sym_literal,
    STATE(136),
    1,
    sym_unary_expr,
    STATE(138),
    1,
    sym_mult_expr,
    STATE(139),
    1,
    sym_unary_operator,
    STATE(142),
    1,
    sym_add_expr,
    ACTIONS(421),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(433),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(131),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [9043] = 19,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(419),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(423),
    1,
    anon_sym_LPAREN,
    ACTIONS(425),
    1,
    anon_sym_TILDE,
    ACTIONS(427),
    1,
    anon_sym_L,
    ACTIONS(429),
    1,
    anon_sym_DQUOTE,
    ACTIONS(431),
    1,
    anon_sym_SQUOTE,
    ACTIONS(435),
    1,
    sym_number_literal,
    ACTIONS(437),
    1,
    sym_identifier,
    STATE(121),
    1,
    sym_comment,
    STATE(123),
    1,
    sym_scoped_name,
    STATE(128),
    1,
    sym_literal,
    STATE(133),
    1,
    sym_mult_expr,
    STATE(136),
    1,
    sym_unary_expr,
    STATE(139),
    1,
    sym_unary_operator,
    ACTIONS(421),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(433),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(131),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [9105] = 18,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(419),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(423),
    1,
    anon_sym_LPAREN,
    ACTIONS(425),
    1,
    anon_sym_TILDE,
    ACTIONS(427),
    1,
    anon_sym_L,
    ACTIONS(429),
    1,
    anon_sym_DQUOTE,
    ACTIONS(431),
    1,
    anon_sym_SQUOTE,
    ACTIONS(435),
    1,
    sym_number_literal,
    ACTIONS(437),
    1,
    sym_identifier,
    STATE(122),
    1,
    sym_comment,
    STATE(123),
    1,
    sym_scoped_name,
    STATE(128),
    1,
    sym_literal,
    STATE(132),
    1,
    sym_unary_expr,
    STATE(139),
    1,
    sym_unary_operator,
    ACTIONS(421),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(433),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(131),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [9164] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(968),
    1,
    anon_sym_COLON_COLON,
    STATE(123),
    1,
    sym_comment,
    ACTIONS(970),
    3,
    anon_sym_GT,
    anon_sym_SLASH,
    anon_sym_COLON,
    ACTIONS(972),
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
    [9197] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(968),
    1,
    anon_sym_COLON_COLON,
    STATE(124),
    1,
    sym_comment,
    ACTIONS(974),
    3,
    anon_sym_GT,
    anon_sym_SLASH,
    anon_sym_COLON,
    ACTIONS(976),
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
    [9230] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(125),
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
    [9260] = 5,
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
    [9290] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(127),
    1,
    sym_comment,
    ACTIONS(986),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(988),
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
    [9320] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(128),
    1,
    sym_comment,
    ACTIONS(970),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(972),
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
    [9350] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(129),
    1,
    sym_comment,
    ACTIONS(990),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(992),
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
    [9380] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(130),
    1,
    sym_comment,
    ACTIONS(974),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(976),
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
    [9410] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(131),
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
    [9440] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(132),
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
    [9470] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1002),
    1,
    anon_sym_GT,
    ACTIONS(1008),
    1,
    anon_sym_SLASH,
    STATE(133),
    1,
    sym_comment,
    ACTIONS(1006),
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
    [9504] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(134),
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
    [9534] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(135),
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
    [9564] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(136),
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
    [9594] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(137),
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
    [9624] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1008),
    1,
    anon_sym_SLASH,
    ACTIONS(1026),
    1,
    anon_sym_GT,
    STATE(138),
    1,
    sym_comment,
    ACTIONS(1006),
    2,
    anon_sym_STAR,
    anon_sym_PERCENT,
    ACTIONS(1028),
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
    [9658] = 14,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(419),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(427),
    1,
    anon_sym_L,
    ACTIONS(429),
    1,
    anon_sym_DQUOTE,
    ACTIONS(431),
    1,
    anon_sym_SQUOTE,
    ACTIONS(435),
    1,
    sym_number_literal,
    ACTIONS(437),
    1,
    sym_identifier,
    ACTIONS(1030),
    1,
    anon_sym_LPAREN,
    STATE(124),
    1,
    sym_scoped_name,
    STATE(130),
    1,
    sym_literal,
    STATE(139),
    1,
    sym_comment,
    ACTIONS(433),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(131),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [9704] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(847),
    1,
    anon_sym_SLASH,
    ACTIONS(1032),
    1,
    anon_sym_EQ,
    STATE(140),
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
    [9733] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1034),
    1,
    anon_sym_GT,
    STATE(141),
    1,
    sym_comment,
    ACTIONS(1038),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(1036),
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
    [9762] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1040),
    1,
    anon_sym_GT,
    STATE(142),
    1,
    sym_comment,
    ACTIONS(1038),
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
    [9791] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(968),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(970),
    1,
    anon_sym_SLASH,
    ACTIONS(1044),
    1,
    anon_sym_GT,
    ACTIONS(1046),
    1,
    anon_sym_COMMA,
    STATE(143),
    1,
    sym_comment,
    ACTIONS(972),
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
    [9824] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1048),
    1,
    anon_sym_GT,
    STATE(144),
    1,
    sym_comment,
    ACTIONS(1052),
    2,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    ACTIONS(1050),
    8,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [9851] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1054),
    1,
    anon_sym_GT,
    STATE(145),
    1,
    sym_comment,
    ACTIONS(1052),
    2,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    ACTIONS(1056),
    8,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [9878] = 12,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(17),
    1,
    anon_sym_interface,
    ACTIONS(247),
    1,
    anon_sym_AT,
    ACTIONS(1058),
    1,
    anon_sym_bitmask,
    ACTIONS(1060),
    1,
    anon_sym_struct,
    STATE(146),
    1,
    sym_comment,
    STATE(154),
    1,
    aux_sym_interface_def_repeat1,
    STATE(171),
    1,
    sym_annotation_appl,
    STATE(590),
    1,
    sym_interface_kind,
    STATE(593),
    1,
    sym_interface_header,
    ACTIONS(13),
    2,
    anon_sym_local,
    anon_sym_abstract,
    [9916] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1064),
    1,
    anon_sym_DOLLAR,
    STATE(147),
    1,
    sym_comment,
    ACTIONS(1062),
    8,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [9939] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1064),
    1,
    anon_sym_DOLLAR,
    STATE(148),
    1,
    sym_comment,
    ACTIONS(1066),
    8,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [9962] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(149),
    1,
    sym_comment,
    ACTIONS(1068),
    4,
    anon_sym_COLON_COLON,
    anon_sym_LPAREN,
    anon_sym_DQUOTE,
    anon_sym_SQUOTE,
    ACTIONS(1070),
    5,
    anon_sym_L,
    anon_sym_TRUE,
    anon_sym_FALSE,
    sym_number_literal,
    sym_identifier,
    [9985] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1074),
    1,
    anon_sym_CARET,
    STATE(150),
    1,
    sym_comment,
    ACTIONS(1072),
    7,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [10007] = 11,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1076),
    1,
    anon_sym_COMMA,
    ACTIONS(1078),
    1,
    anon_sym_SEMI,
    ACTIONS(1080),
    1,
    anon_sym_getraises,
    ACTIONS(1082),
    1,
    anon_sym_setraises,
    STATE(151),
    1,
    sym_comment,
    STATE(297),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    STATE(299),
    1,
    sym_get_excep_expr,
    STATE(472),
    1,
    sym_attr_raises_expr,
    STATE(477),
    1,
    sym_set_excep_expr,
    [10041] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1074),
    1,
    anon_sym_CARET,
    STATE(152),
    1,
    sym_comment,
    ACTIONS(1084),
    7,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [10063] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(968),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1086),
    1,
    anon_sym_LPAREN,
    STATE(153),
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
    [10087] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1088),
    1,
    anon_sym_AT,
    STATE(171),
    1,
    sym_annotation_appl,
    STATE(154),
    2,
    sym_comment,
    aux_sym_interface_def_repeat1,
    ACTIONS(830),
    5,
    anon_sym_local,
    anon_sym_abstract,
    anon_sym_interface,
    anon_sym_bitmask,
    anon_sym_struct,
    [10111] = 9,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1091),
    1,
    anon_sym_RPAREN,
    ACTIONS(1093),
    1,
    anon_sym_in,
    STATE(60),
    1,
    sym_param_attribute,
    STATE(155),
    1,
    sym_comment,
    STATE(288),
    1,
    sym_param_dcl,
    STATE(456),
    1,
    sym_parameter_dcls,
    ACTIONS(1095),
    2,
    anon_sym_out,
    anon_sym_inout,
    [10140] = 10,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(419),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(429),
    1,
    anon_sym_DQUOTE,
    ACTIONS(437),
    1,
    sym_identifier,
    ACTIONS(1097),
    1,
    anon_sym_L,
    STATE(156),
    1,
    sym_comment,
    STATE(357),
    1,
    sym_scoped_name,
    STATE(575),
    1,
    sym_string_literal,
    STATE(576),
    1,
    sym_imported_scope,
    [10171] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(157),
    1,
    sym_comment,
    ACTIONS(1099),
    7,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    anon_sym_SEMI,
    anon_sym_raises,
    anon_sym_getraises,
    anon_sym_setraises,
    anon_sym_default,
    [10190] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1103),
    1,
    anon_sym_PIPE,
    STATE(158),
    1,
    sym_comment,
    ACTIONS(1101),
    6,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [10211] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(159),
    1,
    sym_comment,
    ACTIONS(841),
    6,
    anon_sym_COLON_COLON,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_LPAREN,
    anon_sym_AT,
    sym_identifier,
    [10229] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1107),
    1,
    anon_sym_LBRACK,
    STATE(160),
    1,
    sym_comment,
    STATE(164),
    1,
    aux_sym_array_declarator_repeat1,
    STATE(237),
    1,
    sym_fixed_array_size,
    ACTIONS(1105),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [10253] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(161),
    1,
    sym_comment,
    ACTIONS(845),
    6,
    anon_sym_COLON_COLON,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_LPAREN,
    anon_sym_AT,
    sym_identifier,
    [10271] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(162),
    1,
    sym_comment,
    ACTIONS(895),
    6,
    anon_sym_local,
    anon_sym_abstract,
    anon_sym_interface,
    anon_sym_bitmask,
    anon_sym_AT,
    anon_sym_struct,
    [10289] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(163),
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
    [10307] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1111),
    1,
    anon_sym_LBRACK,
    STATE(237),
    1,
    sym_fixed_array_size,
    STATE(164),
    2,
    sym_comment,
    aux_sym_array_declarator_repeat1,
    ACTIONS(1109),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [10329] = 9,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1114),
    1,
    anon_sym_RBRACE,
    ACTIONS(1116),
    1,
    anon_sym_AT,
    ACTIONS(1118),
    1,
    sym_identifier,
    STATE(165),
    1,
    sym_comment,
    STATE(174),
    1,
    aux_sym_interface_def_repeat1,
    STATE(302),
    1,
    sym_bit_value,
    STATE(367),
    1,
    sym_annotation_appl,
    [10357] = 9,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1116),
    1,
    anon_sym_AT,
    ACTIONS(1118),
    1,
    sym_identifier,
    ACTIONS(1120),
    1,
    anon_sym_RBRACE,
    STATE(166),
    1,
    sym_comment,
    STATE(191),
    1,
    aux_sym_interface_def_repeat1,
    STATE(350),
    1,
    sym_bit_value,
    STATE(367),
    1,
    sym_annotation_appl,
    [10385] = 9,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1122),
    1,
    anon_sym_RBRACE,
    ACTIONS(1124),
    1,
    anon_sym_default,
    ACTIONS(1126),
    1,
    anon_sym_case,
    STATE(15),
    1,
    sym_case_label,
    STATE(167),
    1,
    sym_comment,
    STATE(172),
    1,
    aux_sym_union_def_repeat1,
    STATE(293),
    1,
    sym_case,
    [10413] = 9,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1128),
    1,
    anon_sym_RBRACE,
    ACTIONS(1130),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(1132),
    1,
    sym_identifier,
    STATE(168),
    1,
    sym_comment,
    STATE(244),
    1,
    aux_sym_enumerator_repeat1,
    STATE(348),
    1,
    sym_enumerator,
    STATE(447),
    1,
    sym_enum_modifier,
    [10441] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1107),
    1,
    anon_sym_LBRACK,
    STATE(160),
    1,
    aux_sym_array_declarator_repeat1,
    STATE(169),
    1,
    sym_comment,
    STATE(237),
    1,
    sym_fixed_array_size,
    ACTIONS(1099),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [10465] = 9,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1130),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(1132),
    1,
    sym_identifier,
    ACTIONS(1134),
    1,
    anon_sym_RBRACE,
    STATE(170),
    1,
    sym_comment,
    STATE(244),
    1,
    aux_sym_enumerator_repeat1,
    STATE(259),
    1,
    sym_enumerator,
    STATE(447),
    1,
    sym_enum_modifier,
    [10493] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(171),
    1,
    sym_comment,
    ACTIONS(899),
    6,
    anon_sym_local,
    anon_sym_abstract,
    anon_sym_interface,
    anon_sym_bitmask,
    anon_sym_AT,
    anon_sym_struct,
    [10511] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1136),
    1,
    anon_sym_RBRACE,
    ACTIONS(1138),
    1,
    anon_sym_default,
    ACTIONS(1141),
    1,
    anon_sym_case,
    STATE(15),
    1,
    sym_case_label,
    STATE(293),
    1,
    sym_case,
    STATE(172),
    2,
    sym_comment,
    aux_sym_union_def_repeat1,
    [10537] = 9,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1124),
    1,
    anon_sym_default,
    ACTIONS(1126),
    1,
    anon_sym_case,
    ACTIONS(1144),
    1,
    anon_sym_RBRACE,
    STATE(15),
    1,
    sym_case_label,
    STATE(167),
    1,
    aux_sym_union_def_repeat1,
    STATE(173),
    1,
    sym_comment,
    STATE(293),
    1,
    sym_case,
    [10565] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1116),
    1,
    anon_sym_AT,
    ACTIONS(1118),
    1,
    sym_identifier,
    STATE(174),
    1,
    sym_comment,
    STATE(208),
    1,
    aux_sym_interface_def_repeat1,
    STATE(271),
    1,
    sym_bit_value,
    STATE(367),
    1,
    sym_annotation_appl,
    [10590] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1146),
    1,
    sym_identifier,
    STATE(175),
    1,
    sym_comment,
    STATE(246),
    1,
    sym_declarator,
    STATE(292),
    1,
    sym_declarators,
    STATE(291),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [10613] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1116),
    1,
    anon_sym_AT,
    ACTIONS(1118),
    1,
    sym_identifier,
    STATE(176),
    1,
    sym_comment,
    STATE(188),
    1,
    aux_sym_interface_def_repeat1,
    STATE(367),
    1,
    sym_annotation_appl,
    STATE(385),
    1,
    sym_bit_value,
    [10638] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1146),
    1,
    sym_identifier,
    STATE(177),
    1,
    sym_comment,
    STATE(246),
    1,
    sym_declarator,
    STATE(499),
    1,
    sym_declarators,
    STATE(291),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [10661] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1146),
    1,
    sym_identifier,
    STATE(178),
    1,
    sym_comment,
    STATE(320),
    1,
    sym_any_declarator,
    STATE(615),
    1,
    sym_any_declarators,
    STATE(394),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [10684] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(419),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(437),
    1,
    sym_identifier,
    ACTIONS(1148),
    1,
    anon_sym_truncatable,
    STATE(179),
    1,
    sym_comment,
    STATE(240),
    1,
    sym_scoped_name,
    STATE(242),
    1,
    sym_value_name,
    [10709] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1150),
    1,
    anon_sym_RBRACE,
    ACTIONS(1152),
    1,
    anon_sym_bitfield,
    STATE(180),
    1,
    sym_comment,
    STATE(189),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(349),
    1,
    sym_bitfield_spec,
    STATE(366),
    1,
    sym_bitfield,
    [10734] = 7,
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
    anon_sym_bitfield,
    STATE(349),
    1,
    sym_bitfield_spec,
    STATE(366),
    1,
    sym_bitfield,
    STATE(181),
    2,
    sym_comment,
    aux_sym_bitset_dcl_repeat1,
    [10757] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1152),
    1,
    anon_sym_bitfield,
    ACTIONS(1159),
    1,
    anon_sym_RBRACE,
    STATE(182),
    1,
    sym_comment,
    STATE(187),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(349),
    1,
    sym_bitfield_spec,
    STATE(366),
    1,
    sym_bitfield,
    [10782] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1146),
    1,
    sym_identifier,
    STATE(183),
    1,
    sym_comment,
    STATE(246),
    1,
    sym_declarator,
    STATE(335),
    1,
    sym_declarators,
    STATE(291),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [10805] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(247),
    1,
    anon_sym_AT,
    ACTIONS(1058),
    1,
    anon_sym_bitmask,
    ACTIONS(1060),
    1,
    anon_sym_struct,
    STATE(154),
    1,
    aux_sym_interface_def_repeat1,
    STATE(171),
    1,
    sym_annotation_appl,
    STATE(184),
    1,
    sym_comment,
    [10830] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1130),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(1132),
    1,
    sym_identifier,
    STATE(185),
    1,
    sym_comment,
    STATE(244),
    1,
    aux_sym_enumerator_repeat1,
    STATE(407),
    1,
    sym_enumerator,
    STATE(447),
    1,
    sym_enum_modifier,
    [10855] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1161),
    1,
    anon_sym_LBRACE,
    ACTIONS(1163),
    1,
    anon_sym_COLON,
    ACTIONS(1165),
    1,
    anon_sym_SEMI,
    ACTIONS(1167),
    1,
    anon_sym_supports,
    STATE(186),
    1,
    sym_comment,
    STATE(589),
    1,
    sym_value_inheritance_spec,
    [10880] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1152),
    1,
    anon_sym_bitfield,
    ACTIONS(1169),
    1,
    anon_sym_RBRACE,
    STATE(181),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(187),
    1,
    sym_comment,
    STATE(349),
    1,
    sym_bitfield_spec,
    STATE(366),
    1,
    sym_bitfield,
    [10905] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1116),
    1,
    anon_sym_AT,
    ACTIONS(1118),
    1,
    sym_identifier,
    STATE(188),
    1,
    sym_comment,
    STATE(208),
    1,
    aux_sym_interface_def_repeat1,
    STATE(367),
    1,
    sym_annotation_appl,
    STATE(441),
    1,
    sym_bit_value,
    [10930] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1152),
    1,
    anon_sym_bitfield,
    ACTIONS(1171),
    1,
    anon_sym_RBRACE,
    STATE(181),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(189),
    1,
    sym_comment,
    STATE(349),
    1,
    sym_bitfield_spec,
    STATE(366),
    1,
    sym_bitfield,
    [10955] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1076),
    1,
    anon_sym_COMMA,
    ACTIONS(1173),
    1,
    anon_sym_SEMI,
    ACTIONS(1175),
    1,
    anon_sym_raises,
    STATE(190),
    1,
    sym_comment,
    STATE(254),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    STATE(481),
    1,
    sym_raises_expr,
    [10980] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1116),
    1,
    anon_sym_AT,
    ACTIONS(1118),
    1,
    sym_identifier,
    STATE(191),
    1,
    sym_comment,
    STATE(208),
    1,
    aux_sym_interface_def_repeat1,
    STATE(302),
    1,
    sym_bit_value,
    STATE(367),
    1,
    sym_annotation_appl,
    [11005] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1093),
    1,
    anon_sym_in,
    STATE(60),
    1,
    sym_param_attribute,
    STATE(192),
    1,
    sym_comment,
    STATE(434),
    1,
    sym_param_dcl,
    ACTIONS(1095),
    2,
    anon_sym_out,
    anon_sym_inout,
    [11028] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(419),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1177),
    1,
    sym_identifier,
    STATE(193),
    1,
    sym_comment,
    STATE(272),
    1,
    sym_scoped_name,
    STATE(413),
    1,
    sym_interface_name,
    [11050] = 4,
    ACTIONS(1179),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1181),
    1,
    anon_sym_SLASH_STAR,
    STATE(194),
    1,
    sym_comment,
    ACTIONS(843),
    4,
    anon_sym_COLON_COLON,
    anon_sym_LPAREN,
    anon_sym_AT,
    aux_sym_comment_token1,
    [11066] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1175),
    1,
    anon_sym_raises,
    STATE(195),
    1,
    sym_comment,
    STATE(371),
    1,
    sym_raises_expr,
    ACTIONS(1183),
    2,
    anon_sym_SEMI,
    anon_sym_context,
    [11086] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1185),
    1,
    anon_sym_RPAREN,
    ACTIONS(1187),
    1,
    anon_sym_in,
    STATE(196),
    1,
    sym_comment,
    STATE(338),
    1,
    sym_in_param_dcl,
    STATE(492),
    1,
    sym_in_parameter_dcls,
    [11108] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1189),
    1,
    anon_sym_LBRACE,
    ACTIONS(1191),
    1,
    anon_sym_COLON,
    ACTIONS(1193),
    1,
    anon_sym_SEMI,
    STATE(197),
    1,
    sym_comment,
    STATE(605),
    1,
    sym_interface_inheritance_spec,
    [11130] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(198),
    1,
    sym_comment,
    ACTIONS(1195),
    4,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_LBRACK,
    [11146] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1163),
    1,
    anon_sym_COLON,
    ACTIONS(1167),
    1,
    anon_sym_supports,
    ACTIONS(1197),
    1,
    anon_sym_LBRACE,
    STATE(199),
    1,
    sym_comment,
    STATE(574),
    1,
    sym_value_inheritance_spec,
    [11168] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1199),
    1,
    anon_sym_COMMA,
    STATE(200),
    1,
    sym_comment,
    STATE(235),
    1,
    aux_sym_declarators_repeat1,
    ACTIONS(1201),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    [11188] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1146),
    1,
    sym_identifier,
    STATE(201),
    1,
    sym_comment,
    STATE(265),
    1,
    sym_declarator,
    STATE(291),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [11208] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1203),
    1,
    anon_sym_RPAREN,
    ACTIONS(1205),
    1,
    anon_sym_in,
    STATE(202),
    1,
    sym_comment,
    STATE(278),
    1,
    sym_init_param_dcl,
    STATE(478),
    1,
    sym_init_param_dcls,
    [11230] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1175),
    1,
    anon_sym_raises,
    STATE(203),
    1,
    sym_comment,
    STATE(433),
    1,
    sym_raises_expr,
    ACTIONS(1207),
    2,
    anon_sym_SEMI,
    anon_sym_context,
    [11250] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1209),
    1,
    anon_sym_COMMA,
    ACTIONS(1211),
    1,
    anon_sym_LBRACE,
    ACTIONS(1213),
    1,
    anon_sym_supports,
    STATE(204),
    1,
    sym_comment,
    STATE(233),
    1,
    aux_sym_value_inheritance_spec_repeat1,
    [11272] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(419),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1177),
    1,
    sym_identifier,
    STATE(205),
    1,
    sym_comment,
    STATE(272),
    1,
    sym_scoped_name,
    STATE(283),
    1,
    sym_interface_name,
    [11294] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(419),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1177),
    1,
    sym_identifier,
    STATE(206),
    1,
    sym_comment,
    STATE(240),
    1,
    sym_scoped_name,
    STATE(284),
    1,
    sym_value_name,
    [11316] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1209),
    1,
    anon_sym_COMMA,
    ACTIONS(1211),
    1,
    anon_sym_LBRACE,
    ACTIONS(1213),
    1,
    anon_sym_supports,
    STATE(207),
    1,
    sym_comment,
    STATE(221),
    1,
    aux_sym_value_inheritance_spec_repeat1,
    [11338] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(830),
    1,
    sym_identifier,
    ACTIONS(1215),
    1,
    anon_sym_AT,
    STATE(367),
    1,
    sym_annotation_appl,
    STATE(208),
    2,
    sym_comment,
    aux_sym_interface_def_repeat1,
    [11358] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(429),
    1,
    anon_sym_DQUOTE,
    ACTIONS(1218),
    1,
    anon_sym_RPAREN,
    ACTIONS(1220),
    1,
    anon_sym_L,
    STATE(209),
    1,
    sym_comment,
    STATE(294),
    1,
    sym_string_literal,
    [11380] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(419),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1177),
    1,
    sym_identifier,
    STATE(210),
    1,
    sym_comment,
    STATE(272),
    1,
    sym_scoped_name,
    STATE(273),
    1,
    sym_interface_name,
    [11402] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(211),
    1,
    sym_comment,
    ACTIONS(1222),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [11418] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1224),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1226),
    1,
    anon_sym_LPAREN,
    STATE(212),
    1,
    sym_comment,
    ACTIONS(857),
    2,
    anon_sym_AT,
    sym_identifier,
    [11438] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(419),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1177),
    1,
    sym_identifier,
    STATE(213),
    1,
    sym_comment,
    STATE(266),
    1,
    sym_interface_name,
    STATE(272),
    1,
    sym_scoped_name,
    [11460] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1228),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(1231),
    1,
    sym_identifier,
    STATE(447),
    1,
    sym_enum_modifier,
    STATE(214),
    2,
    sym_comment,
    aux_sym_enumerator_repeat1,
    [11480] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1224),
    1,
    anon_sym_COLON_COLON,
    STATE(215),
    1,
    sym_comment,
    ACTIONS(1046),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [11498] = 7,
    ACTIONS(1179),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1181),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1233),
    1,
    anon_sym_AT,
    ACTIONS(1235),
    1,
    aux_sym_comment_token2,
    STATE(216),
    1,
    sym_comment,
    STATE(234),
    1,
    aux_sym_interface_def_repeat1,
    STATE(443),
    1,
    sym_annotation_appl,
    [11520] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(429),
    1,
    anon_sym_DQUOTE,
    ACTIONS(968),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1220),
    1,
    anon_sym_L,
    STATE(217),
    1,
    sym_comment,
    STATE(609),
    1,
    sym_string_literal,
    [11542] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(429),
    1,
    anon_sym_DQUOTE,
    ACTIONS(968),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1220),
    1,
    anon_sym_L,
    STATE(218),
    1,
    sym_comment,
    STATE(613),
    1,
    sym_string_literal,
    [11564] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1237),
    1,
    anon_sym_LBRACE,
    ACTIONS(1239),
    1,
    anon_sym_COLON,
    STATE(219),
    1,
    sym_comment,
    ACTIONS(1241),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [11584] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(968),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1243),
    1,
    anon_sym_COMMA,
    ACTIONS(1245),
    1,
    anon_sym_RPAREN,
    STATE(220),
    1,
    sym_comment,
    STATE(306),
    1,
    aux_sym_raises_expr_repeat1,
    [11606] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1209),
    1,
    anon_sym_COMMA,
    ACTIONS(1247),
    1,
    anon_sym_LBRACE,
    ACTIONS(1249),
    1,
    anon_sym_supports,
    STATE(221),
    1,
    sym_comment,
    STATE(233),
    1,
    aux_sym_value_inheritance_spec_repeat1,
    [11628] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(419),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1177),
    1,
    sym_identifier,
    STATE(222),
    1,
    sym_comment,
    STATE(272),
    1,
    sym_scoped_name,
    STATE(345),
    1,
    sym_interface_name,
    [11650] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(223),
    1,
    sym_comment,
    ACTIONS(1251),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [11666] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(224),
    1,
    sym_comment,
    ACTIONS(1253),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [11682] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(225),
    1,
    sym_comment,
    ACTIONS(1255),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [11698] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1146),
    1,
    sym_identifier,
    STATE(226),
    1,
    sym_comment,
    STATE(573),
    1,
    sym_declarator,
    STATE(291),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [11718] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(227),
    1,
    sym_comment,
    ACTIONS(1257),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [11734] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(228),
    1,
    sym_comment,
    ACTIONS(1259),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [11750] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(229),
    1,
    sym_comment,
    ACTIONS(1261),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [11766] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(230),
    1,
    sym_comment,
    ACTIONS(1263),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [11782] = 4,
    ACTIONS(1179),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1181),
    1,
    anon_sym_SLASH_STAR,
    STATE(231),
    1,
    sym_comment,
    ACTIONS(847),
    4,
    anon_sym_COLON_COLON,
    anon_sym_LPAREN,
    anon_sym_AT,
    aux_sym_comment_token1,
    [11798] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(232),
    1,
    sym_comment,
    ACTIONS(1265),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [11814] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1267),
    1,
    anon_sym_COMMA,
    ACTIONS(1270),
    2,
    anon_sym_LBRACE,
    anon_sym_supports,
    STATE(233),
    2,
    sym_comment,
    aux_sym_value_inheritance_spec_repeat1,
    [11832] = 7,
    ACTIONS(1179),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1181),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1233),
    1,
    anon_sym_AT,
    ACTIONS(1272),
    1,
    aux_sym_comment_token1,
    STATE(234),
    1,
    sym_comment,
    STATE(249),
    1,
    aux_sym_interface_def_repeat1,
    STATE(443),
    1,
    sym_annotation_appl,
    [11854] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1274),
    1,
    anon_sym_COMMA,
    ACTIONS(1277),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    STATE(235),
    2,
    sym_comment,
    aux_sym_declarators_repeat1,
    [11872] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(419),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1177),
    1,
    sym_identifier,
    STATE(236),
    1,
    sym_comment,
    STATE(272),
    1,
    sym_scoped_name,
    STATE(534),
    1,
    sym_interface_name,
    [11894] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(237),
    1,
    sym_comment,
    ACTIONS(1279),
    4,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_LBRACK,
    [11910] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1146),
    1,
    sym_identifier,
    STATE(238),
    1,
    sym_comment,
    STATE(355),
    1,
    sym_any_declarator,
    STATE(394),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [11930] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(419),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1177),
    1,
    sym_identifier,
    STATE(207),
    1,
    sym_value_name,
    STATE(239),
    1,
    sym_comment,
    STATE(240),
    1,
    sym_scoped_name,
    [11952] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(968),
    1,
    anon_sym_COLON_COLON,
    STATE(240),
    1,
    sym_comment,
    ACTIONS(1281),
    3,
    anon_sym_COMMA,
    anon_sym_LBRACE,
    anon_sym_supports,
    [11970] = 4,
    ACTIONS(1179),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1181),
    1,
    anon_sym_SLASH_STAR,
    STATE(241),
    1,
    sym_comment,
    ACTIONS(839),
    4,
    anon_sym_COLON_COLON,
    anon_sym_LPAREN,
    anon_sym_AT,
    aux_sym_comment_token1,
    [11986] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1209),
    1,
    anon_sym_COMMA,
    ACTIONS(1283),
    1,
    anon_sym_LBRACE,
    ACTIONS(1285),
    1,
    anon_sym_supports,
    STATE(204),
    1,
    aux_sym_value_inheritance_spec_repeat1,
    STATE(242),
    1,
    sym_comment,
    [12008] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1287),
    1,
    anon_sym_LT,
    STATE(243),
    1,
    sym_comment,
    ACTIONS(1289),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [12026] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1130),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(1291),
    1,
    sym_identifier,
    STATE(214),
    1,
    aux_sym_enumerator_repeat1,
    STATE(244),
    1,
    sym_comment,
    STATE(447),
    1,
    sym_enum_modifier,
    [12048] = 6,
    ACTIONS(1179),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1181),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1293),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1295),
    1,
    anon_sym_LPAREN,
    STATE(245),
    1,
    sym_comment,
    ACTIONS(855),
    2,
    anon_sym_AT,
    aux_sym_comment_token1,
    [12068] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1199),
    1,
    anon_sym_COMMA,
    STATE(200),
    1,
    aux_sym_declarators_repeat1,
    STATE(246),
    1,
    sym_comment,
    ACTIONS(1297),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    [12088] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(968),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1243),
    1,
    anon_sym_COMMA,
    ACTIONS(1299),
    1,
    anon_sym_RPAREN,
    STATE(247),
    1,
    sym_comment,
    STATE(343),
    1,
    aux_sym_raises_expr_repeat1,
    [12110] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(248),
    1,
    sym_comment,
    ACTIONS(1301),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [12126] = 6,
    ACTIONS(828),
    1,
    aux_sym_comment_token1,
    ACTIONS(1179),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1181),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1303),
    1,
    anon_sym_AT,
    STATE(443),
    1,
    sym_annotation_appl,
    STATE(249),
    2,
    sym_comment,
    aux_sym_interface_def_repeat1,
    [12146] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1306),
    1,
    anon_sym_COMMA,
    ACTIONS(1308),
    1,
    anon_sym_RBRACE,
    STATE(250),
    1,
    sym_comment,
    STATE(325),
    1,
    aux_sym_bitmask_dcl_repeat1,
    [12165] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1310),
    1,
    anon_sym_COMMA,
    ACTIONS(1313),
    1,
    anon_sym_LBRACE,
    STATE(251),
    2,
    sym_comment,
    aux_sym_interface_inheritance_spec_repeat1,
    [12182] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1315),
    1,
    anon_sym_GT,
    ACTIONS(1317),
    1,
    anon_sym_COMMA,
    STATE(252),
    1,
    sym_comment,
    STATE(331),
    1,
    aux_sym_actual_parameters_repeat1,
    [12201] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(419),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1177),
    1,
    sym_identifier,
    STATE(247),
    1,
    sym_scoped_name,
    STATE(253),
    1,
    sym_comment,
    [12220] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1076),
    1,
    anon_sym_COMMA,
    ACTIONS(1319),
    1,
    anon_sym_SEMI,
    STATE(254),
    1,
    sym_comment,
    STATE(334),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    [12239] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(255),
    1,
    sym_comment,
    ACTIONS(1321),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [12254] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(256),
    1,
    sym_comment,
    ACTIONS(1323),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [12269] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(257),
    1,
    sym_comment,
    ACTIONS(1325),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [12284] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(419),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1177),
    1,
    sym_identifier,
    STATE(258),
    1,
    sym_comment,
    STATE(452),
    1,
    sym_scoped_name,
    [12303] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1128),
    1,
    anon_sym_RBRACE,
    ACTIONS(1327),
    1,
    anon_sym_COMMA,
    STATE(259),
    1,
    sym_comment,
    STATE(339),
    1,
    aux_sym_enum_dcl_repeat1,
    [12322] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(419),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1177),
    1,
    sym_identifier,
    STATE(260),
    1,
    sym_comment,
    STATE(412),
    1,
    sym_scoped_name,
    [12341] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1329),
    1,
    anon_sym_COMMA,
    ACTIONS(1332),
    1,
    anon_sym_RPAREN,
    STATE(261),
    2,
    sym_comment,
    aux_sym_init_param_dcls_repeat1,
    [12358] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(262),
    1,
    sym_comment,
    ACTIONS(1334),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [12373] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(263),
    1,
    sym_comment,
    ACTIONS(1336),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [12388] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1338),
    1,
    anon_sym_GT,
    ACTIONS(1340),
    1,
    anon_sym_COMMA,
    STATE(264),
    2,
    sym_comment,
    aux_sym_formal_parameter_names_repeat1,
    [12405] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(265),
    1,
    sym_comment,
    ACTIONS(1277),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [12420] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1343),
    1,
    anon_sym_COMMA,
    ACTIONS(1345),
    1,
    anon_sym_LBRACE,
    STATE(266),
    1,
    sym_comment,
    STATE(346),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    [12439] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(419),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1177),
    1,
    sym_identifier,
    STATE(267),
    1,
    sym_comment,
    STATE(364),
    1,
    sym_scoped_name,
    [12458] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1343),
    1,
    anon_sym_COMMA,
    ACTIONS(1345),
    1,
    anon_sym_LBRACE,
    STATE(251),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    STATE(268),
    1,
    sym_comment,
    [12477] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(269),
    1,
    sym_comment,
    ACTIONS(1347),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [12492] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1349),
    1,
    anon_sym_COMMA,
    ACTIONS(1351),
    1,
    anon_sym_SEMI,
    STATE(270),
    1,
    sym_comment,
    STATE(351),
    1,
    aux_sym_any_declarators_repeat1,
    [12511] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1306),
    1,
    anon_sym_COMMA,
    ACTIONS(1353),
    1,
    anon_sym_RBRACE,
    STATE(250),
    1,
    aux_sym_bitmask_dcl_repeat1,
    STATE(271),
    1,
    sym_comment,
    [12530] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(968),
    1,
    anon_sym_COLON_COLON,
    STATE(272),
    1,
    sym_comment,
    ACTIONS(1355),
    2,
    anon_sym_COMMA,
    anon_sym_LBRACE,
    [12547] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1343),
    1,
    anon_sym_COMMA,
    ACTIONS(1357),
    1,
    anon_sym_LBRACE,
    STATE(273),
    1,
    sym_comment,
    STATE(353),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    [12566] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1359),
    1,
    anon_sym_COMMA,
    ACTIONS(1362),
    1,
    anon_sym_RPAREN,
    STATE(274),
    2,
    sym_comment,
    aux_sym_parameter_dcls_repeat1,
    [12583] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1364),
    1,
    sym_identifier,
    STATE(151),
    1,
    sym_simple_declarator,
    STATE(275),
    1,
    sym_comment,
    STATE(501),
    1,
    sym_attr_declarator,
    [12602] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1327),
    1,
    anon_sym_COMMA,
    ACTIONS(1366),
    1,
    anon_sym_RBRACE,
    STATE(276),
    1,
    sym_comment,
    STATE(308),
    1,
    aux_sym_enum_dcl_repeat1,
    [12621] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(277),
    1,
    sym_comment,
    ACTIONS(1368),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [12636] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1370),
    1,
    anon_sym_COMMA,
    ACTIONS(1372),
    1,
    anon_sym_RPAREN,
    STATE(278),
    1,
    sym_comment,
    STATE(324),
    1,
    aux_sym_init_param_dcls_repeat1,
    [12655] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1374),
    1,
    anon_sym_COMMA,
    ACTIONS(1377),
    1,
    anon_sym_RPAREN,
    STATE(279),
    2,
    sym_comment,
    aux_sym_context_expr_repeat1,
    [12672] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1175),
    1,
    anon_sym_raises,
    ACTIONS(1379),
    1,
    anon_sym_SEMI,
    STATE(280),
    1,
    sym_comment,
    STATE(506),
    1,
    sym_raises_expr,
    [12691] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1381),
    1,
    anon_sym_COMMA,
    ACTIONS(1383),
    1,
    anon_sym_RPAREN,
    STATE(281),
    1,
    sym_comment,
    STATE(352),
    1,
    aux_sym_in_parameter_dcls_repeat1,
    [12710] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1385),
    1,
    anon_sym_GT,
    ACTIONS(1387),
    1,
    anon_sym_COMMA,
    STATE(264),
    1,
    aux_sym_formal_parameter_names_repeat1,
    STATE(282),
    1,
    sym_comment,
    [12729] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1247),
    1,
    anon_sym_LBRACE,
    ACTIONS(1343),
    1,
    anon_sym_COMMA,
    STATE(283),
    1,
    sym_comment,
    STATE(336),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    [12748] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(284),
    1,
    sym_comment,
    ACTIONS(1270),
    3,
    anon_sym_COMMA,
    anon_sym_LBRACE,
    anon_sym_supports,
    [12763] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(419),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1177),
    1,
    sym_identifier,
    STATE(220),
    1,
    sym_scoped_name,
    STATE(285),
    1,
    sym_comment,
    [12782] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1389),
    1,
    anon_sym_COMMA,
    ACTIONS(1392),
    1,
    anon_sym_RPAREN,
    STATE(286),
    2,
    sym_comment,
    aux_sym_raises_expr_repeat1,
    [12799] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(287),
    1,
    sym_comment,
    ACTIONS(1394),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [12814] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1396),
    1,
    anon_sym_COMMA,
    ACTIONS(1398),
    1,
    anon_sym_RPAREN,
    STATE(288),
    1,
    sym_comment,
    STATE(303),
    1,
    aux_sym_parameter_dcls_repeat1,
    [12833] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(419),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1177),
    1,
    sym_identifier,
    STATE(289),
    1,
    sym_comment,
    STATE(370),
    1,
    sym_scoped_name,
    [12852] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(419),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1177),
    1,
    sym_identifier,
    STATE(153),
    1,
    sym_scoped_name,
    STATE(290),
    1,
    sym_comment,
    [12871] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(291),
    1,
    sym_comment,
    ACTIONS(1400),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [12886] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1402),
    1,
    anon_sym_SEMI,
    ACTIONS(1404),
    1,
    anon_sym_default,
    STATE(292),
    1,
    sym_comment,
    STATE(494),
    1,
    sym_default,
    [12905] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(293),
    1,
    sym_comment,
    ACTIONS(1406),
    3,
    anon_sym_RBRACE,
    anon_sym_default,
    anon_sym_case,
    [12920] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1408),
    1,
    anon_sym_COMMA,
    ACTIONS(1410),
    1,
    anon_sym_RPAREN,
    STATE(294),
    1,
    sym_comment,
    STATE(341),
    1,
    aux_sym_context_expr_repeat1,
    [12939] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(419),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1177),
    1,
    sym_identifier,
    STATE(218),
    1,
    sym_scoped_name,
    STATE(295),
    1,
    sym_comment,
    [12958] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1189),
    1,
    anon_sym_LBRACE,
    ACTIONS(1191),
    1,
    anon_sym_COLON,
    STATE(296),
    1,
    sym_comment,
    STATE(605),
    1,
    sym_interface_inheritance_spec,
    [12977] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1076),
    1,
    anon_sym_COMMA,
    ACTIONS(1412),
    1,
    anon_sym_SEMI,
    STATE(297),
    1,
    sym_comment,
    STATE(334),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    [12996] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1414),
    1,
    anon_sym_SEMI,
    ACTIONS(1416),
    1,
    sym_identifier,
    STATE(298),
    1,
    sym_comment,
    STATE(332),
    1,
    aux_sym_bitfield_repeat1,
    [13015] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1082),
    1,
    anon_sym_setraises,
    ACTIONS(1418),
    1,
    anon_sym_SEMI,
    STATE(299),
    1,
    sym_comment,
    STATE(488),
    1,
    sym_set_excep_expr,
    [13034] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(968),
    1,
    anon_sym_COLON_COLON,
    STATE(300),
    1,
    sym_comment,
    ACTIONS(1392),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [13051] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1306),
    1,
    anon_sym_COMMA,
    ACTIONS(1420),
    1,
    anon_sym_RBRACE,
    STATE(301),
    1,
    sym_comment,
    STATE(325),
    1,
    aux_sym_bitmask_dcl_repeat1,
    [13070] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1306),
    1,
    anon_sym_COMMA,
    ACTIONS(1420),
    1,
    anon_sym_RBRACE,
    STATE(302),
    1,
    sym_comment,
    STATE(323),
    1,
    aux_sym_bitmask_dcl_repeat1,
    [13089] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1396),
    1,
    anon_sym_COMMA,
    ACTIONS(1422),
    1,
    anon_sym_RPAREN,
    STATE(274),
    1,
    aux_sym_parameter_dcls_repeat1,
    STATE(303),
    1,
    sym_comment,
    [13108] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(304),
    1,
    sym_comment,
    ACTIONS(1424),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [13123] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(419),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1177),
    1,
    sym_identifier,
    STATE(217),
    1,
    sym_scoped_name,
    STATE(305),
    1,
    sym_comment,
    [13142] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1243),
    1,
    anon_sym_COMMA,
    ACTIONS(1426),
    1,
    anon_sym_RPAREN,
    STATE(286),
    1,
    aux_sym_raises_expr_repeat1,
    STATE(306),
    1,
    sym_comment,
    [13161] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(307),
    1,
    sym_comment,
    ACTIONS(1428),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [13176] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1430),
    1,
    anon_sym_COMMA,
    ACTIONS(1433),
    1,
    anon_sym_RBRACE,
    STATE(308),
    2,
    sym_comment,
    aux_sym_enum_dcl_repeat1,
    [13193] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1435),
    1,
    anon_sym_GT,
    ACTIONS(1437),
    1,
    anon_sym_COMMA,
    STATE(309),
    2,
    sym_comment,
    aux_sym_actual_parameters_repeat1,
    [13210] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(310),
    1,
    sym_comment,
    ACTIONS(1046),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [13225] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1440),
    1,
    anon_sym_GT,
    ACTIONS(1442),
    1,
    anon_sym_COMMA,
    STATE(311),
    2,
    sym_comment,
    aux_sym_formal_parameters_repeat1,
    [13242] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1445),
    1,
    anon_sym_COMMA,
    ACTIONS(1448),
    1,
    anon_sym_RPAREN,
    STATE(312),
    2,
    sym_comment,
    aux_sym_annotation_appl_params_repeat1,
    [13259] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(221),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1450),
    1,
    sym_identifier,
    STATE(212),
    1,
    sym_scoped_name,
    STATE(313),
    1,
    sym_comment,
    [13278] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(419),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1452),
    1,
    sym_identifier,
    STATE(314),
    1,
    sym_comment,
    STATE(374),
    1,
    sym_scoped_name,
    [13297] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1454),
    1,
    anon_sym_GT,
    ACTIONS(1456),
    1,
    anon_sym_COMMA,
    STATE(315),
    1,
    sym_comment,
    STATE(326),
    1,
    aux_sym_formal_parameters_repeat1,
    [13316] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1458),
    1,
    anon_sym_SEMI,
    ACTIONS(1460),
    1,
    anon_sym_context,
    STATE(316),
    1,
    sym_comment,
    STATE(538),
    1,
    sym_context_expr,
    [13335] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1462),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1464),
    1,
    sym_identifier,
    STATE(71),
    1,
    sym_scoped_name,
    STATE(317),
    1,
    sym_comment,
    [13354] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1460),
    1,
    anon_sym_context,
    ACTIONS(1466),
    1,
    anon_sym_SEMI,
    STATE(318),
    1,
    sym_comment,
    STATE(538),
    1,
    sym_context_expr,
    [13373] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1468),
    1,
    anon_sym_COMMA,
    ACTIONS(1470),
    1,
    anon_sym_RPAREN,
    STATE(319),
    1,
    sym_comment,
    STATE(322),
    1,
    aux_sym_annotation_appl_params_repeat1,
    [13392] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1349),
    1,
    anon_sym_COMMA,
    ACTIONS(1472),
    1,
    anon_sym_SEMI,
    STATE(270),
    1,
    aux_sym_any_declarators_repeat1,
    STATE(320),
    1,
    sym_comment,
    [13411] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1474),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1476),
    1,
    sym_identifier,
    STATE(245),
    1,
    sym_scoped_name,
    STATE(321),
    1,
    sym_comment,
    [13430] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1468),
    1,
    anon_sym_COMMA,
    ACTIONS(1478),
    1,
    anon_sym_RPAREN,
    STATE(312),
    1,
    aux_sym_annotation_appl_params_repeat1,
    STATE(322),
    1,
    sym_comment,
    [13449] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1306),
    1,
    anon_sym_COMMA,
    ACTIONS(1353),
    1,
    anon_sym_RBRACE,
    STATE(323),
    1,
    sym_comment,
    STATE(325),
    1,
    aux_sym_bitmask_dcl_repeat1,
    [13468] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1370),
    1,
    anon_sym_COMMA,
    ACTIONS(1480),
    1,
    anon_sym_RPAREN,
    STATE(261),
    1,
    aux_sym_init_param_dcls_repeat1,
    STATE(324),
    1,
    sym_comment,
    [13487] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1482),
    1,
    anon_sym_COMMA,
    ACTIONS(1485),
    1,
    anon_sym_RBRACE,
    STATE(325),
    2,
    sym_comment,
    aux_sym_bitmask_dcl_repeat1,
    [13504] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1456),
    1,
    anon_sym_COMMA,
    ACTIONS(1487),
    1,
    anon_sym_GT,
    STATE(311),
    1,
    aux_sym_formal_parameters_repeat1,
    STATE(326),
    1,
    sym_comment,
    [13523] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(327),
    1,
    sym_comment,
    ACTIONS(1489),
    3,
    anon_sym_RBRACE,
    anon_sym_default,
    anon_sym_case,
    [13538] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1175),
    1,
    anon_sym_raises,
    ACTIONS(1491),
    1,
    anon_sym_SEMI,
    STATE(328),
    1,
    sym_comment,
    STATE(547),
    1,
    sym_raises_expr,
    [13557] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1387),
    1,
    anon_sym_COMMA,
    ACTIONS(1493),
    1,
    anon_sym_GT,
    STATE(282),
    1,
    aux_sym_formal_parameter_names_repeat1,
    STATE(329),
    1,
    sym_comment,
    [13576] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1495),
    1,
    anon_sym_SEMI,
    ACTIONS(1497),
    1,
    anon_sym_switch,
    ACTIONS(1499),
    1,
    sym_identifier,
    STATE(330),
    1,
    sym_comment,
    [13595] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1317),
    1,
    anon_sym_COMMA,
    ACTIONS(1501),
    1,
    anon_sym_GT,
    STATE(309),
    1,
    aux_sym_actual_parameters_repeat1,
    STATE(331),
    1,
    sym_comment,
    [13614] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1503),
    1,
    anon_sym_SEMI,
    ACTIONS(1505),
    1,
    sym_identifier,
    STATE(332),
    2,
    sym_comment,
    aux_sym_bitfield_repeat1,
    [13631] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(333),
    1,
    sym_comment,
    ACTIONS(1508),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [13646] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1510),
    1,
    anon_sym_COMMA,
    ACTIONS(1513),
    1,
    anon_sym_SEMI,
    STATE(334),
    2,
    sym_comment,
    aux_sym_readonly_attr_declarator_repeat1,
    [13663] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1404),
    1,
    anon_sym_default,
    ACTIONS(1515),
    1,
    anon_sym_SEMI,
    STATE(335),
    1,
    sym_comment,
    STATE(460),
    1,
    sym_default,
    [13682] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1343),
    1,
    anon_sym_COMMA,
    ACTIONS(1517),
    1,
    anon_sym_LBRACE,
    STATE(251),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    STATE(336),
    1,
    sym_comment,
    [13701] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(419),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1177),
    1,
    sym_identifier,
    STATE(300),
    1,
    sym_scoped_name,
    STATE(337),
    1,
    sym_comment,
    [13720] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1381),
    1,
    anon_sym_COMMA,
    ACTIONS(1519),
    1,
    anon_sym_RPAREN,
    STATE(281),
    1,
    aux_sym_in_parameter_dcls_repeat1,
    STATE(338),
    1,
    sym_comment,
    [13739] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1327),
    1,
    anon_sym_COMMA,
    ACTIONS(1521),
    1,
    anon_sym_RBRACE,
    STATE(308),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(339),
    1,
    sym_comment,
    [13758] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(429),
    1,
    anon_sym_DQUOTE,
    ACTIONS(1220),
    1,
    anon_sym_L,
    STATE(340),
    1,
    sym_comment,
    STATE(432),
    1,
    sym_string_literal,
    [13777] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1408),
    1,
    anon_sym_COMMA,
    ACTIONS(1523),
    1,
    anon_sym_RPAREN,
    STATE(279),
    1,
    aux_sym_context_expr_repeat1,
    STATE(341),
    1,
    sym_comment,
    [13796] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(342),
    1,
    sym_comment,
    ACTIONS(1525),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [13811] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1243),
    1,
    anon_sym_COMMA,
    ACTIONS(1527),
    1,
    anon_sym_RPAREN,
    STATE(286),
    1,
    aux_sym_raises_expr_repeat1,
    STATE(343),
    1,
    sym_comment,
    [13830] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(344),
    1,
    sym_comment,
    ACTIONS(1529),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [13845] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1343),
    1,
    anon_sym_COMMA,
    ACTIONS(1517),
    1,
    anon_sym_LBRACE,
    STATE(268),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    STATE(345),
    1,
    sym_comment,
    [13864] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1343),
    1,
    anon_sym_COMMA,
    ACTIONS(1531),
    1,
    anon_sym_LBRACE,
    STATE(251),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    STATE(346),
    1,
    sym_comment,
    [13883] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(849),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1533),
    1,
    anon_sym_LT,
    ACTIONS(1535),
    1,
    anon_sym_LBRACE,
    STATE(347),
    1,
    sym_comment,
    [13902] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1327),
    1,
    anon_sym_COMMA,
    ACTIONS(1521),
    1,
    anon_sym_RBRACE,
    STATE(276),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(348),
    1,
    sym_comment,
    [13921] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1416),
    1,
    sym_identifier,
    ACTIONS(1537),
    1,
    anon_sym_SEMI,
    STATE(298),
    1,
    aux_sym_bitfield_repeat1,
    STATE(349),
    1,
    sym_comment,
    [13940] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1114),
    1,
    anon_sym_RBRACE,
    ACTIONS(1306),
    1,
    anon_sym_COMMA,
    STATE(301),
    1,
    aux_sym_bitmask_dcl_repeat1,
    STATE(350),
    1,
    sym_comment,
    [13959] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1539),
    1,
    anon_sym_COMMA,
    ACTIONS(1542),
    1,
    anon_sym_SEMI,
    STATE(351),
    2,
    sym_comment,
    aux_sym_any_declarators_repeat1,
    [13976] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1544),
    1,
    anon_sym_COMMA,
    ACTIONS(1547),
    1,
    anon_sym_RPAREN,
    STATE(352),
    2,
    sym_comment,
    aux_sym_in_parameter_dcls_repeat1,
    [13993] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1343),
    1,
    anon_sym_COMMA,
    ACTIONS(1549),
    1,
    anon_sym_LBRACE,
    STATE(251),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    STATE(353),
    1,
    sym_comment,
    [14012] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1364),
    1,
    sym_identifier,
    STATE(190),
    1,
    sym_simple_declarator,
    STATE(354),
    1,
    sym_comment,
    STATE(462),
    1,
    sym_readonly_attr_declarator,
    [14031] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(355),
    1,
    sym_comment,
    ACTIONS(1542),
    2,
    anon_sym_COMMA,
    anon_sym_SEMI,
    [14045] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(356),
    1,
    sym_comment,
    ACTIONS(1551),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [14059] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(968),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1553),
    1,
    anon_sym_SEMI,
    STATE(357),
    1,
    sym_comment,
    [14075] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1224),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1555),
    1,
    sym_identifier,
    STATE(358),
    1,
    sym_comment,
    [14091] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(359),
    1,
    sym_comment,
    ACTIONS(1547),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [14105] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(360),
    1,
    sym_comment,
    ACTIONS(1557),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14119] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1364),
    1,
    sym_identifier,
    STATE(361),
    1,
    sym_comment,
    STATE(415),
    1,
    sym_simple_declarator,
    [14135] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(362),
    1,
    sym_comment,
    ACTIONS(1559),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [14149] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(363),
    1,
    sym_comment,
    ACTIONS(1561),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14163] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(968),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1563),
    1,
    anon_sym_LBRACE,
    STATE(364),
    1,
    sym_comment,
    [14179] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(365),
    1,
    sym_comment,
    ACTIONS(1565),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14193] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(366),
    1,
    sym_comment,
    ACTIONS(1567),
    2,
    anon_sym_RBRACE,
    anon_sym_bitfield,
    [14207] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(367),
    1,
    sym_comment,
    ACTIONS(899),
    2,
    anon_sym_AT,
    sym_identifier,
    [14221] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(368),
    1,
    sym_comment,
    ACTIONS(1569),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [14235] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1571),
    1,
    anon_sym_interface,
    ACTIONS(1573),
    1,
    anon_sym_valuetype,
    STATE(369),
    1,
    sym_comment,
    [14251] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(968),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1575),
    1,
    anon_sym_LBRACE,
    STATE(370),
    1,
    sym_comment,
    [14267] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(371),
    1,
    sym_comment,
    ACTIONS(1207),
    2,
    anon_sym_SEMI,
    anon_sym_context,
    [14281] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1364),
    1,
    sym_identifier,
    STATE(372),
    1,
    sym_comment,
    STATE(437),
    1,
    sym_simple_declarator,
    [14297] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(373),
    1,
    sym_comment,
    ACTIONS(1577),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14311] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(968),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1579),
    1,
    anon_sym_LT,
    STATE(374),
    1,
    sym_comment,
    [14327] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(375),
    1,
    sym_comment,
    ACTIONS(1581),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [14341] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(376),
    1,
    sym_comment,
    ACTIONS(1583),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [14355] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(377),
    1,
    sym_comment,
    ACTIONS(1585),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14369] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(378),
    1,
    sym_comment,
    ACTIONS(1587),
    2,
    anon_sym_SEMI,
    anon_sym_context,
    [14383] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(968),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1589),
    1,
    anon_sym_RPAREN,
    STATE(379),
    1,
    sym_comment,
    [14399] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1591),
    1,
    anon_sym_GT,
    ACTIONS(1593),
    1,
    anon_sym_COMMA,
    STATE(380),
    1,
    sym_comment,
    [14415] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(381),
    1,
    sym_comment,
    ACTIONS(1595),
    2,
    anon_sym_RBRACE,
    anon_sym_bitfield,
    [14429] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1597),
    1,
    anon_sym_DQUOTE,
    ACTIONS(1599),
    1,
    anon_sym_SQUOTE,
    STATE(382),
    1,
    sym_comment,
    [14445] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(383),
    1,
    sym_comment,
    ACTIONS(1601),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14459] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(384),
    1,
    sym_comment,
    ACTIONS(1603),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14473] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(385),
    1,
    sym_comment,
    ACTIONS(1485),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [14487] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1364),
    1,
    sym_identifier,
    STATE(386),
    1,
    sym_comment,
    STATE(438),
    1,
    sym_simple_declarator,
    [14503] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(387),
    1,
    sym_comment,
    ACTIONS(1605),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14517] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(388),
    1,
    sym_comment,
    ACTIONS(1607),
    2,
    anon_sym_GT,
    anon_sym_COMMA,
    [14531] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1205),
    1,
    anon_sym_in,
    STATE(389),
    1,
    sym_comment,
    STATE(444),
    1,
    sym_init_param_dcl,
    [14547] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1609),
    1,
    anon_sym_LBRACE,
    ACTIONS(1611),
    1,
    anon_sym_COLON,
    STATE(390),
    1,
    sym_comment,
    [14563] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(391),
    1,
    sym_comment,
    ACTIONS(895),
    2,
    anon_sym_AT,
    sym_identifier,
    [14577] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(392),
    1,
    sym_comment,
    ACTIONS(1613),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14591] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(393),
    1,
    sym_comment,
    ACTIONS(1615),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [14605] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(394),
    1,
    sym_comment,
    ACTIONS(1617),
    2,
    anon_sym_COMMA,
    anon_sym_SEMI,
    [14619] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1619),
    1,
    sym_identifier,
    STATE(395),
    1,
    sym_comment,
    STATE(400),
    1,
    sym_annotation_appl_param,
    [14635] = 5,
    ACTIONS(1179),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1181),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1621),
    1,
    aux_sym_preproc_call_token1,
    ACTIONS(1623),
    1,
    sym_preproc_arg,
    STATE(396),
    1,
    sym_comment,
    [14651] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1625),
    1,
    anon_sym_LT,
    ACTIONS(1627),
    1,
    sym_identifier,
    STATE(397),
    1,
    sym_comment,
    [14667] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(398),
    1,
    sym_comment,
    ACTIONS(1629),
    2,
    anon_sym_SEMI,
    anon_sym_context,
    [14681] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(399),
    1,
    sym_comment,
    ACTIONS(1631),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14695] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(400),
    1,
    sym_comment,
    ACTIONS(1448),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [14709] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(401),
    1,
    sym_comment,
    ACTIONS(1633),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14723] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(402),
    1,
    sym_comment,
    ACTIONS(1440),
    2,
    anon_sym_GT,
    anon_sym_COMMA,
    [14737] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(403),
    1,
    sym_comment,
    ACTIONS(1635),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14751] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(404),
    1,
    sym_comment,
    ACTIONS(1435),
    2,
    anon_sym_GT,
    anon_sym_COMMA,
    [14765] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(405),
    1,
    sym_comment,
    ACTIONS(1637),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14779] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(406),
    1,
    sym_comment,
    ACTIONS(1639),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14793] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(407),
    1,
    sym_comment,
    ACTIONS(1433),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [14807] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(408),
    1,
    sym_comment,
    ACTIONS(1641),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14821] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1364),
    1,
    sym_identifier,
    STATE(409),
    1,
    sym_comment,
    STATE(577),
    1,
    sym_simple_declarator,
    [14837] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(410),
    1,
    sym_comment,
    ACTIONS(1643),
    2,
    anon_sym_GT,
    anon_sym_COMMA,
    [14851] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1645),
    1,
    anon_sym_GT,
    ACTIONS(1647),
    1,
    anon_sym_COMMA,
    STATE(411),
    1,
    sym_comment,
    [14867] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(968),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1649),
    1,
    anon_sym_LT,
    STATE(412),
    1,
    sym_comment,
    [14883] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(413),
    1,
    sym_comment,
    ACTIONS(1313),
    2,
    anon_sym_COMMA,
    anon_sym_LBRACE,
    [14897] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1651),
    1,
    sym_identifier,
    STATE(414),
    1,
    sym_comment,
    STATE(571),
    1,
    sym_formal_parameter_names,
    [14913] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1653),
    1,
    anon_sym_SEMI,
    ACTIONS(1655),
    1,
    anon_sym_default,
    STATE(415),
    1,
    sym_comment,
    [14929] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1364),
    1,
    sym_identifier,
    STATE(416),
    1,
    sym_comment,
    STATE(451),
    1,
    sym_simple_declarator,
    [14945] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1657),
    1,
    anon_sym_LPAREN,
    STATE(368),
    1,
    sym_exception_list,
    STATE(417),
    1,
    sym_comment,
    [14961] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1657),
    1,
    anon_sym_LPAREN,
    STATE(418),
    1,
    sym_comment,
    STATE(487),
    1,
    sym_exception_list,
    [14977] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(419),
    1,
    sym_comment,
    ACTIONS(1659),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [14991] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(420),
    1,
    sym_comment,
    ACTIONS(1661),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [15005] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(421),
    1,
    sym_comment,
    ACTIONS(1663),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [15019] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(422),
    1,
    sym_comment,
    ACTIONS(1665),
    2,
    anon_sym_RBRACE,
    anon_sym_bitfield,
    [15033] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1667),
    1,
    anon_sym_LBRACE,
    ACTIONS(1669),
    1,
    anon_sym_COLON,
    STATE(423),
    1,
    sym_comment,
    [15049] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(424),
    1,
    sym_comment,
    ACTIONS(1671),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [15063] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(425),
    1,
    sym_comment,
    ACTIONS(1673),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [15077] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1224),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1675),
    1,
    sym_identifier,
    STATE(426),
    1,
    sym_comment,
    [15093] = 4,
    ACTIONS(1179),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1181),
    1,
    anon_sym_SLASH_STAR,
    STATE(427),
    1,
    sym_comment,
    ACTIONS(893),
    2,
    anon_sym_AT,
    aux_sym_comment_token1,
    [15107] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1364),
    1,
    sym_identifier,
    STATE(356),
    1,
    sym_simple_declarator,
    STATE(428),
    1,
    sym_comment,
    [15123] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(429),
    1,
    sym_comment,
    ACTIONS(1677),
    2,
    anon_sym_SEMI,
    anon_sym_context,
    [15137] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(430),
    1,
    sym_comment,
    ACTIONS(1679),
    2,
    anon_sym_SEMI,
    anon_sym_context,
    [15151] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1187),
    1,
    anon_sym_in,
    STATE(359),
    1,
    sym_in_param_dcl,
    STATE(431),
    1,
    sym_comment,
    [15167] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(432),
    1,
    sym_comment,
    ACTIONS(1377),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [15181] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(433),
    1,
    sym_comment,
    ACTIONS(1681),
    2,
    anon_sym_SEMI,
    anon_sym_context,
    [15195] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(434),
    1,
    sym_comment,
    ACTIONS(1362),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [15209] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(435),
    1,
    sym_comment,
    ACTIONS(1683),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [15223] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(436),
    1,
    sym_comment,
    ACTIONS(1338),
    2,
    anon_sym_GT,
    anon_sym_COMMA,
    [15237] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(437),
    1,
    sym_comment,
    ACTIONS(1685),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [15251] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(438),
    1,
    sym_comment,
    ACTIONS(1687),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [15265] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(439),
    1,
    sym_comment,
    ACTIONS(1689),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [15279] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(440),
    1,
    sym_comment,
    ACTIONS(1691),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [15293] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(441),
    1,
    sym_comment,
    ACTIONS(1693),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [15307] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(442),
    1,
    sym_comment,
    ACTIONS(1695),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [15321] = 4,
    ACTIONS(1179),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1181),
    1,
    anon_sym_SLASH_STAR,
    STATE(443),
    1,
    sym_comment,
    ACTIONS(897),
    2,
    anon_sym_AT,
    aux_sym_comment_token1,
    [15335] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(444),
    1,
    sym_comment,
    ACTIONS(1332),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [15349] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(968),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1046),
    1,
    anon_sym_COMMA,
    STATE(445),
    1,
    sym_comment,
    [15365] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(446),
    1,
    sym_comment,
    ACTIONS(1697),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [15379] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(447),
    1,
    sym_comment,
    ACTIONS(1699),
    2,
    anon_sym_ATdefault_literal,
    sym_identifier,
    [15393] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(448),
    1,
    sym_comment,
    ACTIONS(1701),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [15407] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(449),
    1,
    sym_comment,
    ACTIONS(1703),
    2,
    anon_sym_ATdefault_literal,
    sym_identifier,
    [15421] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(450),
    1,
    sym_comment,
    ACTIONS(1705),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [15435] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    STATE(451),
    1,
    sym_comment,
    ACTIONS(1513),
    2,
    anon_sym_COMMA,
    anon_sym_SEMI,
    [15449] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(968),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1707),
    1,
    anon_sym_LBRACE,
    STATE(452),
    1,
    sym_comment,
    [15465] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1709),
    1,
    anon_sym_COMMA,
    STATE(453),
    1,
    sym_comment,
    [15478] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1711),
    1,
    anon_sym_SEMI,
    STATE(454),
    1,
    sym_comment,
    [15491] = 4,
    ACTIONS(1179),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1181),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1713),
    1,
    aux_sym_preproc_call_token1,
    STATE(455),
    1,
    sym_comment,
    [15504] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1715),
    1,
    anon_sym_RPAREN,
    STATE(456),
    1,
    sym_comment,
    [15517] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1717),
    1,
    anon_sym_SEMI,
    STATE(457),
    1,
    sym_comment,
    [15530] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1719),
    1,
    anon_sym_enum,
    STATE(458),
    1,
    sym_comment,
    [15543] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1721),
    1,
    anon_sym_LBRACE,
    STATE(459),
    1,
    sym_comment,
    [15556] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1723),
    1,
    anon_sym_SEMI,
    STATE(460),
    1,
    sym_comment,
    [15569] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1725),
    1,
    anon_sym_SEMI,
    STATE(461),
    1,
    sym_comment,
    [15582] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1727),
    1,
    anon_sym_SEMI,
    STATE(462),
    1,
    sym_comment,
    [15595] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1729),
    1,
    sym_identifier,
    STATE(463),
    1,
    sym_comment,
    [15608] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1272),
    1,
    anon_sym_SLASH,
    STATE(464),
    1,
    sym_comment,
    [15621] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1731),
    1,
    anon_sym_RPAREN,
    STATE(465),
    1,
    sym_comment,
    [15634] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1032),
    1,
    anon_sym_EQ,
    STATE(466),
    1,
    sym_comment,
    [15647] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1733),
    1,
    anon_sym_SEMI,
    STATE(467),
    1,
    sym_comment,
    [15660] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1735),
    1,
    anon_sym_SEMI,
    STATE(468),
    1,
    sym_comment,
    [15673] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1737),
    1,
    anon_sym_SEMI,
    STATE(469),
    1,
    sym_comment,
    [15686] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1739),
    1,
    anon_sym_SEMI,
    STATE(470),
    1,
    sym_comment,
    [15699] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1741),
    1,
    sym_identifier,
    STATE(471),
    1,
    sym_comment,
    [15712] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1412),
    1,
    anon_sym_SEMI,
    STATE(472),
    1,
    sym_comment,
    [15725] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1743),
    1,
    anon_sym_SEMI,
    STATE(473),
    1,
    sym_comment,
    [15738] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1745),
    1,
    anon_sym_LBRACE,
    STATE(474),
    1,
    sym_comment,
    [15751] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1747),
    1,
    anon_sym_SEMI,
    STATE(475),
    1,
    sym_comment,
    [15764] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1749),
    1,
    anon_sym_GT,
    STATE(476),
    1,
    sym_comment,
    [15777] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1418),
    1,
    anon_sym_SEMI,
    STATE(477),
    1,
    sym_comment,
    [15790] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1751),
    1,
    anon_sym_RPAREN,
    STATE(478),
    1,
    sym_comment,
    [15803] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1753),
    1,
    sym_identifier,
    STATE(479),
    1,
    sym_comment,
    [15816] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1755),
    1,
    anon_sym_LPAREN,
    STATE(480),
    1,
    sym_comment,
    [15829] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1319),
    1,
    anon_sym_SEMI,
    STATE(481),
    1,
    sym_comment,
    [15842] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1757),
    1,
    anon_sym_SQUOTE,
    STATE(482),
    1,
    sym_comment,
    [15855] = 4,
    ACTIONS(1179),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1181),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1759),
    1,
    aux_sym_comment_token3,
    STATE(483),
    1,
    sym_comment,
    [15868] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1761),
    1,
    sym_identifier,
    STATE(484),
    1,
    sym_comment,
    [15881] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1763),
    1,
    anon_sym_SEMI,
    STATE(485),
    1,
    sym_comment,
    [15894] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1765),
    1,
    anon_sym_LBRACE,
    STATE(486),
    1,
    sym_comment,
    [15907] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1767),
    1,
    anon_sym_SEMI,
    STATE(487),
    1,
    sym_comment,
    [15920] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1769),
    1,
    anon_sym_SEMI,
    STATE(488),
    1,
    sym_comment,
    [15933] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1771),
    1,
    ts_builtin_sym_end,
    STATE(489),
    1,
    sym_comment,
    [15946] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1773),
    1,
    anon_sym_LBRACE,
    STATE(490),
    1,
    sym_comment,
    [15959] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1775),
    1,
    anon_sym_SEMI,
    STATE(491),
    1,
    sym_comment,
    [15972] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1777),
    1,
    anon_sym_RPAREN,
    STATE(492),
    1,
    sym_comment,
    [15985] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1779),
    1,
    anon_sym_SEMI,
    STATE(493),
    1,
    sym_comment,
    [15998] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1781),
    1,
    anon_sym_SEMI,
    STATE(494),
    1,
    sym_comment,
    [16011] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1783),
    1,
    anon_sym_SEMI,
    STATE(495),
    1,
    sym_comment,
    [16024] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1785),
    1,
    anon_sym_LBRACE,
    STATE(496),
    1,
    sym_comment,
    [16037] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1787),
    1,
    anon_sym_DQUOTE,
    STATE(497),
    1,
    sym_comment,
    [16050] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1789),
    1,
    anon_sym_SEMI,
    STATE(498),
    1,
    sym_comment,
    [16063] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1791),
    1,
    anon_sym_SEMI,
    STATE(499),
    1,
    sym_comment,
    [16076] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1793),
    1,
    anon_sym_LPAREN,
    STATE(500),
    1,
    sym_comment,
    [16089] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1795),
    1,
    anon_sym_SEMI,
    STATE(501),
    1,
    sym_comment,
    [16102] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1797),
    1,
    anon_sym_RBRACK,
    STATE(502),
    1,
    sym_comment,
    [16115] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1799),
    1,
    anon_sym_SEMI,
    STATE(503),
    1,
    sym_comment,
    [16128] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1801),
    1,
    anon_sym_GT,
    STATE(504),
    1,
    sym_comment,
    [16141] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1803),
    1,
    anon_sym_RPAREN,
    STATE(505),
    1,
    sym_comment,
    [16154] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1491),
    1,
    anon_sym_SEMI,
    STATE(506),
    1,
    sym_comment,
    [16167] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1589),
    1,
    anon_sym_RPAREN,
    STATE(507),
    1,
    sym_comment,
    [16180] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1805),
    1,
    sym_identifier,
    STATE(508),
    1,
    sym_comment,
    [16193] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1807),
    1,
    anon_sym_SEMI,
    STATE(509),
    1,
    sym_comment,
    [16206] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1809),
    1,
    anon_sym_LBRACE,
    STATE(510),
    1,
    sym_comment,
    [16219] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1811),
    1,
    anon_sym_LBRACE,
    STATE(511),
    1,
    sym_comment,
    [16232] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1813),
    1,
    sym_identifier,
    STATE(512),
    1,
    sym_comment,
    [16245] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1675),
    1,
    sym_identifier,
    STATE(513),
    1,
    sym_comment,
    [16258] = 4,
    ACTIONS(1179),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1181),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1815),
    1,
    aux_sym_predefine_token1,
    STATE(514),
    1,
    sym_comment,
    [16271] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1817),
    1,
    sym_identifier,
    STATE(515),
    1,
    sym_comment,
    [16284] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1819),
    1,
    anon_sym_GT,
    STATE(516),
    1,
    sym_comment,
    [16297] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1821),
    1,
    anon_sym_GT,
    STATE(517),
    1,
    sym_comment,
    [16310] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1823),
    1,
    anon_sym_SQUOTE,
    STATE(518),
    1,
    sym_comment,
    [16323] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1825),
    1,
    aux_sym_char_literal_token1,
    STATE(519),
    1,
    sym_comment,
    [16336] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1827),
    1,
    anon_sym_RPAREN,
    STATE(520),
    1,
    sym_comment,
    [16349] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1829),
    1,
    anon_sym_SEMI,
    STATE(521),
    1,
    sym_comment,
    [16362] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1831),
    1,
    anon_sym_SEMI,
    STATE(522),
    1,
    sym_comment,
    [16375] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1625),
    1,
    anon_sym_LT,
    STATE(523),
    1,
    sym_comment,
    [16388] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1833),
    1,
    anon_sym_COLON,
    STATE(524),
    1,
    sym_comment,
    [16401] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1835),
    1,
    anon_sym_enum,
    STATE(525),
    1,
    sym_comment,
    [16414] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1837),
    1,
    anon_sym_SEMI,
    STATE(526),
    1,
    sym_comment,
    [16427] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1839),
    1,
    anon_sym_valuetype,
    STATE(527),
    1,
    sym_comment,
    [16440] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1841),
    1,
    anon_sym_SEMI,
    STATE(528),
    1,
    sym_comment,
    [16453] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1843),
    1,
    anon_sym_GT,
    STATE(529),
    1,
    sym_comment,
    [16466] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1845),
    1,
    anon_sym_RBRACE,
    STATE(530),
    1,
    sym_comment,
    [16479] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1847),
    1,
    sym_identifier,
    STATE(531),
    1,
    sym_comment,
    [16492] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1849),
    1,
    anon_sym_SEMI,
    STATE(532),
    1,
    sym_comment,
    [16505] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1851),
    1,
    anon_sym_LPAREN,
    STATE(533),
    1,
    sym_comment,
    [16518] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1283),
    1,
    anon_sym_LBRACE,
    STATE(534),
    1,
    sym_comment,
    [16531] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1853),
    1,
    sym_identifier,
    STATE(535),
    1,
    sym_comment,
    [16544] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1855),
    1,
    anon_sym_LPAREN,
    STATE(536),
    1,
    sym_comment,
    [16557] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1857),
    1,
    anon_sym_SEMI,
    STATE(537),
    1,
    sym_comment,
    [16570] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1859),
    1,
    anon_sym_SEMI,
    STATE(538),
    1,
    sym_comment,
    [16583] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1861),
    1,
    anon_sym_LPAREN,
    STATE(539),
    1,
    sym_comment,
    [16596] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1863),
    1,
    anon_sym_LBRACE,
    STATE(540),
    1,
    sym_comment,
    [16609] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1865),
    1,
    sym_identifier,
    STATE(541),
    1,
    sym_comment,
    [16622] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1867),
    1,
    anon_sym_LT,
    STATE(542),
    1,
    sym_comment,
    [16635] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1869),
    1,
    sym_identifier,
    STATE(543),
    1,
    sym_comment,
    [16648] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1871),
    1,
    anon_sym_COMMA,
    STATE(544),
    1,
    sym_comment,
    [16661] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1873),
    1,
    sym_identifier,
    STATE(545),
    1,
    sym_comment,
    [16674] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1875),
    1,
    anon_sym_LT,
    STATE(546),
    1,
    sym_comment,
    [16687] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1877),
    1,
    anon_sym_SEMI,
    STATE(547),
    1,
    sym_comment,
    [16700] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1879),
    1,
    anon_sym_GT,
    STATE(548),
    1,
    sym_comment,
    [16713] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1881),
    1,
    sym_identifier,
    STATE(549),
    1,
    sym_comment,
    [16726] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1883),
    1,
    anon_sym_GT,
    STATE(550),
    1,
    sym_comment,
    [16739] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1885),
    1,
    anon_sym_GT,
    STATE(551),
    1,
    sym_comment,
    [16752] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1887),
    1,
    anon_sym_SEMI,
    STATE(552),
    1,
    sym_comment,
    [16765] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1889),
    1,
    sym_identifier,
    STATE(553),
    1,
    sym_comment,
    [16778] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1891),
    1,
    sym_identifier,
    STATE(554),
    1,
    sym_comment,
    [16791] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1893),
    1,
    anon_sym_COLON,
    STATE(555),
    1,
    sym_comment,
    [16804] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1895),
    1,
    anon_sym_GT,
    STATE(556),
    1,
    sym_comment,
    [16817] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1897),
    1,
    anon_sym_SEMI,
    STATE(557),
    1,
    sym_comment,
    [16830] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1899),
    1,
    anon_sym_SEMI,
    STATE(558),
    1,
    sym_comment,
    [16843] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1627),
    1,
    sym_identifier,
    STATE(559),
    1,
    sym_comment,
    [16856] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1901),
    1,
    anon_sym_RPAREN,
    STATE(560),
    1,
    sym_comment,
    [16869] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1470),
    1,
    anon_sym_RPAREN,
    STATE(561),
    1,
    sym_comment,
    [16882] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1903),
    1,
    aux_sym_char_literal_token1,
    STATE(562),
    1,
    sym_comment,
    [16895] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1597),
    1,
    anon_sym_DQUOTE,
    STATE(563),
    1,
    sym_comment,
    [16908] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1905),
    1,
    anon_sym_SEMI,
    STATE(564),
    1,
    sym_comment,
    [16921] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1555),
    1,
    sym_identifier,
    STATE(565),
    1,
    sym_comment,
    [16934] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1907),
    1,
    aux_sym_string_literal_token1,
    STATE(566),
    1,
    sym_comment,
    [16947] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1909),
    1,
    anon_sym_SEMI,
    STATE(567),
    1,
    sym_comment,
    [16960] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1911),
    1,
    sym_identifier,
    STATE(568),
    1,
    sym_comment,
    [16973] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1913),
    1,
    sym_identifier,
    STATE(569),
    1,
    sym_comment,
    [16986] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1915),
    1,
    anon_sym_LT,
    STATE(570),
    1,
    sym_comment,
    [16999] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1917),
    1,
    anon_sym_GT,
    STATE(571),
    1,
    sym_comment,
    [17012] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1919),
    1,
    sym_identifier,
    STATE(572),
    1,
    sym_comment,
    [17025] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1921),
    1,
    anon_sym_SEMI,
    STATE(573),
    1,
    sym_comment,
    [17038] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1923),
    1,
    anon_sym_LBRACE,
    STATE(574),
    1,
    sym_comment,
    [17051] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1553),
    1,
    anon_sym_SEMI,
    STATE(575),
    1,
    sym_comment,
    [17064] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1925),
    1,
    anon_sym_SEMI,
    STATE(576),
    1,
    sym_comment,
    [17077] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1927),
    1,
    anon_sym_SEMI,
    STATE(577),
    1,
    sym_comment,
    [17090] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1929),
    1,
    anon_sym_SEMI,
    STATE(578),
    1,
    sym_comment,
    [17103] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1931),
    1,
    anon_sym_LBRACE,
    STATE(579),
    1,
    sym_comment,
    [17116] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1933),
    1,
    sym_identifier,
    STATE(580),
    1,
    sym_comment,
    [17129] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1935),
    1,
    anon_sym_LBRACE,
    STATE(581),
    1,
    sym_comment,
    [17142] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1937),
    1,
    sym_identifier,
    STATE(582),
    1,
    sym_comment,
    [17155] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1939),
    1,
    sym_identifier,
    STATE(583),
    1,
    sym_comment,
    [17168] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1941),
    1,
    sym_identifier,
    STATE(584),
    1,
    sym_comment,
    [17181] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1943),
    1,
    sym_identifier,
    STATE(585),
    1,
    sym_comment,
    [17194] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1945),
    1,
    anon_sym_SEMI,
    STATE(586),
    1,
    sym_comment,
    [17207] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1947),
    1,
    sym_identifier,
    STATE(587),
    1,
    sym_comment,
    [17220] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1949),
    1,
    anon_sym_SEMI,
    STATE(588),
    1,
    sym_comment,
    [17233] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1951),
    1,
    anon_sym_LBRACE,
    STATE(589),
    1,
    sym_comment,
    [17246] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1953),
    1,
    sym_identifier,
    STATE(590),
    1,
    sym_comment,
    [17259] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1955),
    1,
    anon_sym_SEMI,
    STATE(591),
    1,
    sym_comment,
    [17272] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1957),
    1,
    sym_identifier,
    STATE(592),
    1,
    sym_comment,
    [17285] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1959),
    1,
    anon_sym_LBRACE,
    STATE(593),
    1,
    sym_comment,
    [17298] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(281),
    1,
    anon_sym_RBRACE,
    STATE(594),
    1,
    sym_comment,
    [17311] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1458),
    1,
    anon_sym_SEMI,
    STATE(595),
    1,
    sym_comment,
    [17324] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1961),
    1,
    anon_sym_void,
    STATE(596),
    1,
    sym_comment,
    [17337] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1963),
    1,
    sym_identifier,
    STATE(597),
    1,
    sym_comment,
    [17350] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1965),
    1,
    sym_identifier,
    STATE(598),
    1,
    sym_comment,
    [17363] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1967),
    1,
    anon_sym_attribute,
    STATE(599),
    1,
    sym_comment,
    [17376] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1969),
    1,
    sym_identifier,
    STATE(600),
    1,
    sym_comment,
    [17389] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1971),
    1,
    sym_identifier,
    STATE(601),
    1,
    sym_comment,
    [17402] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1573),
    1,
    anon_sym_valuetype,
    STATE(602),
    1,
    sym_comment,
    [17415] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1973),
    1,
    sym_identifier,
    STATE(603),
    1,
    sym_comment,
    [17428] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1975),
    1,
    anon_sym_SEMI,
    STATE(604),
    1,
    sym_comment,
    [17441] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1977),
    1,
    anon_sym_LBRACE,
    STATE(605),
    1,
    sym_comment,
    [17454] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1979),
    1,
    anon_sym_DQUOTE,
    STATE(606),
    1,
    sym_comment,
    [17467] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1571),
    1,
    anon_sym_interface,
    STATE(607),
    1,
    sym_comment,
    [17480] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1981),
    1,
    aux_sym_string_literal_token1,
    STATE(608),
    1,
    sym_comment,
    [17493] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1983),
    1,
    anon_sym_SEMI,
    STATE(609),
    1,
    sym_comment,
    [17506] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1985),
    1,
    sym_identifier,
    STATE(610),
    1,
    sym_comment,
    [17519] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1987),
    1,
    sym_identifier,
    STATE(611),
    1,
    sym_comment,
    [17532] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1466),
    1,
    anon_sym_SEMI,
    STATE(612),
    1,
    sym_comment,
    [17545] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1989),
    1,
    anon_sym_SEMI,
    STATE(613),
    1,
    sym_comment,
    [17558] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1991),
    1,
    anon_sym_RPAREN,
    STATE(614),
    1,
    sym_comment,
    [17571] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1993),
    1,
    anon_sym_SEMI,
    STATE(615),
    1,
    sym_comment,
    [17584] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1995),
    1,
    sym_identifier,
    STATE(616),
    1,
    sym_comment,
    [17597] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1997),
    1,
    sym_identifier,
    STATE(617),
    1,
    sym_comment,
    [17610] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(1999),
    1,
    anon_sym_RPAREN,
    STATE(618),
    1,
    sym_comment,
    [17623] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2001),
    1,
    anon_sym_LPAREN,
    STATE(619),
    1,
    sym_comment,
    [17636] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2003),
    1,
    sym_identifier,
    STATE(620),
    1,
    sym_comment,
    [17649] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2005),
    1,
    anon_sym_RPAREN,
    STATE(621),
    1,
    sym_comment,
    [17662] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2007),
    1,
    anon_sym_EQ,
    STATE(622),
    1,
    sym_comment,
    [17675] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(5),
    1,
    anon_sym_SLASH_STAR,
    ACTIONS(2009),
    1,
    sym_identifier,
    STATE(623),
    1,
    sym_comment,
    [17688] = 1,
    ACTIONS(2011),
    1,
    ts_builtin_sym_end,
    [17692] = 1,
    ACTIONS(2013),
    1,
    ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
    [SMALL_STATE(17)] = 0,
    [SMALL_STATE(18)] = 149,
    [SMALL_STATE(19)] = 298,
    [SMALL_STATE(20)] = 447,
    [SMALL_STATE(21)] = 594,
    [SMALL_STATE(22)] = 733,
    [SMALL_STATE(23)] = 875,
    [SMALL_STATE(24)] = 1015,
    [SMALL_STATE(25)] = 1157,
    [SMALL_STATE(26)] = 1297,
    [SMALL_STATE(27)] = 1439,
    [SMALL_STATE(28)] = 1581,
    [SMALL_STATE(29)] = 1723,
    [SMALL_STATE(30)] = 1867,
    [SMALL_STATE(31)] = 2009,
    [SMALL_STATE(32)] = 2151,
    [SMALL_STATE(33)] = 2291,
    [SMALL_STATE(34)] = 2433,
    [SMALL_STATE(35)] = 2573,
    [SMALL_STATE(36)] = 2715,
    [SMALL_STATE(37)] = 2857,
    [SMALL_STATE(38)] = 3001,
    [SMALL_STATE(39)] = 3143,
    [SMALL_STATE(40)] = 3283,
    [SMALL_STATE(41)] = 3352,
    [SMALL_STATE(42)] = 3485,
    [SMALL_STATE(43)] = 3554,
    [SMALL_STATE(44)] = 3623,
    [SMALL_STATE(45)] = 3692,
    [SMALL_STATE(46)] = 3761,
    [SMALL_STATE(47)] = 3888,
    [SMALL_STATE(48)] = 3957,
    [SMALL_STATE(49)] = 4026,
    [SMALL_STATE(50)] = 4156,
    [SMALL_STATE(51)] = 4280,
    [SMALL_STATE(52)] = 4346,
    [SMALL_STATE(53)] = 4412,
    [SMALL_STATE(54)] = 4536,
    [SMALL_STATE(55)] = 4660,
    [SMALL_STATE(56)] = 4784,
    [SMALL_STATE(57)] = 4908,
    [SMALL_STATE(58)] = 5032,
    [SMALL_STATE(59)] = 5156,
    [SMALL_STATE(60)] = 5280,
    [SMALL_STATE(61)] = 5404,
    [SMALL_STATE(62)] = 5509,
    [SMALL_STATE(63)] = 5614,
    [SMALL_STATE(64)] = 5669,
    [SMALL_STATE(65)] = 5724,
    [SMALL_STATE(66)] = 5776,
    [SMALL_STATE(67)] = 5823,
    [SMALL_STATE(68)] = 5870,
    [SMALL_STATE(69)] = 5917,
    [SMALL_STATE(70)] = 5964,
    [SMALL_STATE(71)] = 6011,
    [SMALL_STATE(72)] = 6060,
    [SMALL_STATE(73)] = 6107,
    [SMALL_STATE(74)] = 6154,
    [SMALL_STATE(75)] = 6201,
    [SMALL_STATE(76)] = 6248,
    [SMALL_STATE(77)] = 6295,
    [SMALL_STATE(78)] = 6342,
    [SMALL_STATE(79)] = 6389,
    [SMALL_STATE(80)] = 6436,
    [SMALL_STATE(81)] = 6482,
    [SMALL_STATE(82)] = 6528,
    [SMALL_STATE(83)] = 6573,
    [SMALL_STATE(84)] = 6656,
    [SMALL_STATE(85)] = 6699,
    [SMALL_STATE(86)] = 6742,
    [SMALL_STATE(87)] = 6785,
    [SMALL_STATE(88)] = 6871,
    [SMALL_STATE(89)] = 6957,
    [SMALL_STATE(90)] = 7043,
    [SMALL_STATE(91)] = 7129,
    [SMALL_STATE(92)] = 7212,
    [SMALL_STATE(93)] = 7295,
    [SMALL_STATE(94)] = 7378,
    [SMALL_STATE(95)] = 7461,
    [SMALL_STATE(96)] = 7544,
    [SMALL_STATE(97)] = 7627,
    [SMALL_STATE(98)] = 7710,
    [SMALL_STATE(99)] = 7790,
    [SMALL_STATE(100)] = 7870,
    [SMALL_STATE(101)] = 7950,
    [SMALL_STATE(102)] = 8030,
    [SMALL_STATE(103)] = 8110,
    [SMALL_STATE(104)] = 8154,
    [SMALL_STATE(105)] = 8234,
    [SMALL_STATE(106)] = 8314,
    [SMALL_STATE(107)] = 8382,
    [SMALL_STATE(108)] = 8421,
    [SMALL_STATE(109)] = 8460,
    [SMALL_STATE(110)] = 8499,
    [SMALL_STATE(111)] = 8537,
    [SMALL_STATE(112)] = 8575,
    [SMALL_STATE(113)] = 8649,
    [SMALL_STATE(114)] = 8687,
    [SMALL_STATE(115)] = 8725,
    [SMALL_STATE(116)] = 8763,
    [SMALL_STATE(117)] = 8801,
    [SMALL_STATE(118)] = 8839,
    [SMALL_STATE(119)] = 8910,
    [SMALL_STATE(120)] = 8978,
    [SMALL_STATE(121)] = 9043,
    [SMALL_STATE(122)] = 9105,
    [SMALL_STATE(123)] = 9164,
    [SMALL_STATE(124)] = 9197,
    [SMALL_STATE(125)] = 9230,
    [SMALL_STATE(126)] = 9260,
    [SMALL_STATE(127)] = 9290,
    [SMALL_STATE(128)] = 9320,
    [SMALL_STATE(129)] = 9350,
    [SMALL_STATE(130)] = 9380,
    [SMALL_STATE(131)] = 9410,
    [SMALL_STATE(132)] = 9440,
    [SMALL_STATE(133)] = 9470,
    [SMALL_STATE(134)] = 9504,
    [SMALL_STATE(135)] = 9534,
    [SMALL_STATE(136)] = 9564,
    [SMALL_STATE(137)] = 9594,
    [SMALL_STATE(138)] = 9624,
    [SMALL_STATE(139)] = 9658,
    [SMALL_STATE(140)] = 9704,
    [SMALL_STATE(141)] = 9733,
    [SMALL_STATE(142)] = 9762,
    [SMALL_STATE(143)] = 9791,
    [SMALL_STATE(144)] = 9824,
    [SMALL_STATE(145)] = 9851,
    [SMALL_STATE(146)] = 9878,
    [SMALL_STATE(147)] = 9916,
    [SMALL_STATE(148)] = 9939,
    [SMALL_STATE(149)] = 9962,
    [SMALL_STATE(150)] = 9985,
    [SMALL_STATE(151)] = 10007,
    [SMALL_STATE(152)] = 10041,
    [SMALL_STATE(153)] = 10063,
    [SMALL_STATE(154)] = 10087,
    [SMALL_STATE(155)] = 10111,
    [SMALL_STATE(156)] = 10140,
    [SMALL_STATE(157)] = 10171,
    [SMALL_STATE(158)] = 10190,
    [SMALL_STATE(159)] = 10211,
    [SMALL_STATE(160)] = 10229,
    [SMALL_STATE(161)] = 10253,
    [SMALL_STATE(162)] = 10271,
    [SMALL_STATE(163)] = 10289,
    [SMALL_STATE(164)] = 10307,
    [SMALL_STATE(165)] = 10329,
    [SMALL_STATE(166)] = 10357,
    [SMALL_STATE(167)] = 10385,
    [SMALL_STATE(168)] = 10413,
    [SMALL_STATE(169)] = 10441,
    [SMALL_STATE(170)] = 10465,
    [SMALL_STATE(171)] = 10493,
    [SMALL_STATE(172)] = 10511,
    [SMALL_STATE(173)] = 10537,
    [SMALL_STATE(174)] = 10565,
    [SMALL_STATE(175)] = 10590,
    [SMALL_STATE(176)] = 10613,
    [SMALL_STATE(177)] = 10638,
    [SMALL_STATE(178)] = 10661,
    [SMALL_STATE(179)] = 10684,
    [SMALL_STATE(180)] = 10709,
    [SMALL_STATE(181)] = 10734,
    [SMALL_STATE(182)] = 10757,
    [SMALL_STATE(183)] = 10782,
    [SMALL_STATE(184)] = 10805,
    [SMALL_STATE(185)] = 10830,
    [SMALL_STATE(186)] = 10855,
    [SMALL_STATE(187)] = 10880,
    [SMALL_STATE(188)] = 10905,
    [SMALL_STATE(189)] = 10930,
    [SMALL_STATE(190)] = 10955,
    [SMALL_STATE(191)] = 10980,
    [SMALL_STATE(192)] = 11005,
    [SMALL_STATE(193)] = 11028,
    [SMALL_STATE(194)] = 11050,
    [SMALL_STATE(195)] = 11066,
    [SMALL_STATE(196)] = 11086,
    [SMALL_STATE(197)] = 11108,
    [SMALL_STATE(198)] = 11130,
    [SMALL_STATE(199)] = 11146,
    [SMALL_STATE(200)] = 11168,
    [SMALL_STATE(201)] = 11188,
    [SMALL_STATE(202)] = 11208,
    [SMALL_STATE(203)] = 11230,
    [SMALL_STATE(204)] = 11250,
    [SMALL_STATE(205)] = 11272,
    [SMALL_STATE(206)] = 11294,
    [SMALL_STATE(207)] = 11316,
    [SMALL_STATE(208)] = 11338,
    [SMALL_STATE(209)] = 11358,
    [SMALL_STATE(210)] = 11380,
    [SMALL_STATE(211)] = 11402,
    [SMALL_STATE(212)] = 11418,
    [SMALL_STATE(213)] = 11438,
    [SMALL_STATE(214)] = 11460,
    [SMALL_STATE(215)] = 11480,
    [SMALL_STATE(216)] = 11498,
    [SMALL_STATE(217)] = 11520,
    [SMALL_STATE(218)] = 11542,
    [SMALL_STATE(219)] = 11564,
    [SMALL_STATE(220)] = 11584,
    [SMALL_STATE(221)] = 11606,
    [SMALL_STATE(222)] = 11628,
    [SMALL_STATE(223)] = 11650,
    [SMALL_STATE(224)] = 11666,
    [SMALL_STATE(225)] = 11682,
    [SMALL_STATE(226)] = 11698,
    [SMALL_STATE(227)] = 11718,
    [SMALL_STATE(228)] = 11734,
    [SMALL_STATE(229)] = 11750,
    [SMALL_STATE(230)] = 11766,
    [SMALL_STATE(231)] = 11782,
    [SMALL_STATE(232)] = 11798,
    [SMALL_STATE(233)] = 11814,
    [SMALL_STATE(234)] = 11832,
    [SMALL_STATE(235)] = 11854,
    [SMALL_STATE(236)] = 11872,
    [SMALL_STATE(237)] = 11894,
    [SMALL_STATE(238)] = 11910,
    [SMALL_STATE(239)] = 11930,
    [SMALL_STATE(240)] = 11952,
    [SMALL_STATE(241)] = 11970,
    [SMALL_STATE(242)] = 11986,
    [SMALL_STATE(243)] = 12008,
    [SMALL_STATE(244)] = 12026,
    [SMALL_STATE(245)] = 12048,
    [SMALL_STATE(246)] = 12068,
    [SMALL_STATE(247)] = 12088,
    [SMALL_STATE(248)] = 12110,
    [SMALL_STATE(249)] = 12126,
    [SMALL_STATE(250)] = 12146,
    [SMALL_STATE(251)] = 12165,
    [SMALL_STATE(252)] = 12182,
    [SMALL_STATE(253)] = 12201,
    [SMALL_STATE(254)] = 12220,
    [SMALL_STATE(255)] = 12239,
    [SMALL_STATE(256)] = 12254,
    [SMALL_STATE(257)] = 12269,
    [SMALL_STATE(258)] = 12284,
    [SMALL_STATE(259)] = 12303,
    [SMALL_STATE(260)] = 12322,
    [SMALL_STATE(261)] = 12341,
    [SMALL_STATE(262)] = 12358,
    [SMALL_STATE(263)] = 12373,
    [SMALL_STATE(264)] = 12388,
    [SMALL_STATE(265)] = 12405,
    [SMALL_STATE(266)] = 12420,
    [SMALL_STATE(267)] = 12439,
    [SMALL_STATE(268)] = 12458,
    [SMALL_STATE(269)] = 12477,
    [SMALL_STATE(270)] = 12492,
    [SMALL_STATE(271)] = 12511,
    [SMALL_STATE(272)] = 12530,
    [SMALL_STATE(273)] = 12547,
    [SMALL_STATE(274)] = 12566,
    [SMALL_STATE(275)] = 12583,
    [SMALL_STATE(276)] = 12602,
    [SMALL_STATE(277)] = 12621,
    [SMALL_STATE(278)] = 12636,
    [SMALL_STATE(279)] = 12655,
    [SMALL_STATE(280)] = 12672,
    [SMALL_STATE(281)] = 12691,
    [SMALL_STATE(282)] = 12710,
    [SMALL_STATE(283)] = 12729,
    [SMALL_STATE(284)] = 12748,
    [SMALL_STATE(285)] = 12763,
    [SMALL_STATE(286)] = 12782,
    [SMALL_STATE(287)] = 12799,
    [SMALL_STATE(288)] = 12814,
    [SMALL_STATE(289)] = 12833,
    [SMALL_STATE(290)] = 12852,
    [SMALL_STATE(291)] = 12871,
    [SMALL_STATE(292)] = 12886,
    [SMALL_STATE(293)] = 12905,
    [SMALL_STATE(294)] = 12920,
    [SMALL_STATE(295)] = 12939,
    [SMALL_STATE(296)] = 12958,
    [SMALL_STATE(297)] = 12977,
    [SMALL_STATE(298)] = 12996,
    [SMALL_STATE(299)] = 13015,
    [SMALL_STATE(300)] = 13034,
    [SMALL_STATE(301)] = 13051,
    [SMALL_STATE(302)] = 13070,
    [SMALL_STATE(303)] = 13089,
    [SMALL_STATE(304)] = 13108,
    [SMALL_STATE(305)] = 13123,
    [SMALL_STATE(306)] = 13142,
    [SMALL_STATE(307)] = 13161,
    [SMALL_STATE(308)] = 13176,
    [SMALL_STATE(309)] = 13193,
    [SMALL_STATE(310)] = 13210,
    [SMALL_STATE(311)] = 13225,
    [SMALL_STATE(312)] = 13242,
    [SMALL_STATE(313)] = 13259,
    [SMALL_STATE(314)] = 13278,
    [SMALL_STATE(315)] = 13297,
    [SMALL_STATE(316)] = 13316,
    [SMALL_STATE(317)] = 13335,
    [SMALL_STATE(318)] = 13354,
    [SMALL_STATE(319)] = 13373,
    [SMALL_STATE(320)] = 13392,
    [SMALL_STATE(321)] = 13411,
    [SMALL_STATE(322)] = 13430,
    [SMALL_STATE(323)] = 13449,
    [SMALL_STATE(324)] = 13468,
    [SMALL_STATE(325)] = 13487,
    [SMALL_STATE(326)] = 13504,
    [SMALL_STATE(327)] = 13523,
    [SMALL_STATE(328)] = 13538,
    [SMALL_STATE(329)] = 13557,
    [SMALL_STATE(330)] = 13576,
    [SMALL_STATE(331)] = 13595,
    [SMALL_STATE(332)] = 13614,
    [SMALL_STATE(333)] = 13631,
    [SMALL_STATE(334)] = 13646,
    [SMALL_STATE(335)] = 13663,
    [SMALL_STATE(336)] = 13682,
    [SMALL_STATE(337)] = 13701,
    [SMALL_STATE(338)] = 13720,
    [SMALL_STATE(339)] = 13739,
    [SMALL_STATE(340)] = 13758,
    [SMALL_STATE(341)] = 13777,
    [SMALL_STATE(342)] = 13796,
    [SMALL_STATE(343)] = 13811,
    [SMALL_STATE(344)] = 13830,
    [SMALL_STATE(345)] = 13845,
    [SMALL_STATE(346)] = 13864,
    [SMALL_STATE(347)] = 13883,
    [SMALL_STATE(348)] = 13902,
    [SMALL_STATE(349)] = 13921,
    [SMALL_STATE(350)] = 13940,
    [SMALL_STATE(351)] = 13959,
    [SMALL_STATE(352)] = 13976,
    [SMALL_STATE(353)] = 13993,
    [SMALL_STATE(354)] = 14012,
    [SMALL_STATE(355)] = 14031,
    [SMALL_STATE(356)] = 14045,
    [SMALL_STATE(357)] = 14059,
    [SMALL_STATE(358)] = 14075,
    [SMALL_STATE(359)] = 14091,
    [SMALL_STATE(360)] = 14105,
    [SMALL_STATE(361)] = 14119,
    [SMALL_STATE(362)] = 14135,
    [SMALL_STATE(363)] = 14149,
    [SMALL_STATE(364)] = 14163,
    [SMALL_STATE(365)] = 14179,
    [SMALL_STATE(366)] = 14193,
    [SMALL_STATE(367)] = 14207,
    [SMALL_STATE(368)] = 14221,
    [SMALL_STATE(369)] = 14235,
    [SMALL_STATE(370)] = 14251,
    [SMALL_STATE(371)] = 14267,
    [SMALL_STATE(372)] = 14281,
    [SMALL_STATE(373)] = 14297,
    [SMALL_STATE(374)] = 14311,
    [SMALL_STATE(375)] = 14327,
    [SMALL_STATE(376)] = 14341,
    [SMALL_STATE(377)] = 14355,
    [SMALL_STATE(378)] = 14369,
    [SMALL_STATE(379)] = 14383,
    [SMALL_STATE(380)] = 14399,
    [SMALL_STATE(381)] = 14415,
    [SMALL_STATE(382)] = 14429,
    [SMALL_STATE(383)] = 14445,
    [SMALL_STATE(384)] = 14459,
    [SMALL_STATE(385)] = 14473,
    [SMALL_STATE(386)] = 14487,
    [SMALL_STATE(387)] = 14503,
    [SMALL_STATE(388)] = 14517,
    [SMALL_STATE(389)] = 14531,
    [SMALL_STATE(390)] = 14547,
    [SMALL_STATE(391)] = 14563,
    [SMALL_STATE(392)] = 14577,
    [SMALL_STATE(393)] = 14591,
    [SMALL_STATE(394)] = 14605,
    [SMALL_STATE(395)] = 14619,
    [SMALL_STATE(396)] = 14635,
    [SMALL_STATE(397)] = 14651,
    [SMALL_STATE(398)] = 14667,
    [SMALL_STATE(399)] = 14681,
    [SMALL_STATE(400)] = 14695,
    [SMALL_STATE(401)] = 14709,
    [SMALL_STATE(402)] = 14723,
    [SMALL_STATE(403)] = 14737,
    [SMALL_STATE(404)] = 14751,
    [SMALL_STATE(405)] = 14765,
    [SMALL_STATE(406)] = 14779,
    [SMALL_STATE(407)] = 14793,
    [SMALL_STATE(408)] = 14807,
    [SMALL_STATE(409)] = 14821,
    [SMALL_STATE(410)] = 14837,
    [SMALL_STATE(411)] = 14851,
    [SMALL_STATE(412)] = 14867,
    [SMALL_STATE(413)] = 14883,
    [SMALL_STATE(414)] = 14897,
    [SMALL_STATE(415)] = 14913,
    [SMALL_STATE(416)] = 14929,
    [SMALL_STATE(417)] = 14945,
    [SMALL_STATE(418)] = 14961,
    [SMALL_STATE(419)] = 14977,
    [SMALL_STATE(420)] = 14991,
    [SMALL_STATE(421)] = 15005,
    [SMALL_STATE(422)] = 15019,
    [SMALL_STATE(423)] = 15033,
    [SMALL_STATE(424)] = 15049,
    [SMALL_STATE(425)] = 15063,
    [SMALL_STATE(426)] = 15077,
    [SMALL_STATE(427)] = 15093,
    [SMALL_STATE(428)] = 15107,
    [SMALL_STATE(429)] = 15123,
    [SMALL_STATE(430)] = 15137,
    [SMALL_STATE(431)] = 15151,
    [SMALL_STATE(432)] = 15167,
    [SMALL_STATE(433)] = 15181,
    [SMALL_STATE(434)] = 15195,
    [SMALL_STATE(435)] = 15209,
    [SMALL_STATE(436)] = 15223,
    [SMALL_STATE(437)] = 15237,
    [SMALL_STATE(438)] = 15251,
    [SMALL_STATE(439)] = 15265,
    [SMALL_STATE(440)] = 15279,
    [SMALL_STATE(441)] = 15293,
    [SMALL_STATE(442)] = 15307,
    [SMALL_STATE(443)] = 15321,
    [SMALL_STATE(444)] = 15335,
    [SMALL_STATE(445)] = 15349,
    [SMALL_STATE(446)] = 15365,
    [SMALL_STATE(447)] = 15379,
    [SMALL_STATE(448)] = 15393,
    [SMALL_STATE(449)] = 15407,
    [SMALL_STATE(450)] = 15421,
    [SMALL_STATE(451)] = 15435,
    [SMALL_STATE(452)] = 15449,
    [SMALL_STATE(453)] = 15465,
    [SMALL_STATE(454)] = 15478,
    [SMALL_STATE(455)] = 15491,
    [SMALL_STATE(456)] = 15504,
    [SMALL_STATE(457)] = 15517,
    [SMALL_STATE(458)] = 15530,
    [SMALL_STATE(459)] = 15543,
    [SMALL_STATE(460)] = 15556,
    [SMALL_STATE(461)] = 15569,
    [SMALL_STATE(462)] = 15582,
    [SMALL_STATE(463)] = 15595,
    [SMALL_STATE(464)] = 15608,
    [SMALL_STATE(465)] = 15621,
    [SMALL_STATE(466)] = 15634,
    [SMALL_STATE(467)] = 15647,
    [SMALL_STATE(468)] = 15660,
    [SMALL_STATE(469)] = 15673,
    [SMALL_STATE(470)] = 15686,
    [SMALL_STATE(471)] = 15699,
    [SMALL_STATE(472)] = 15712,
    [SMALL_STATE(473)] = 15725,
    [SMALL_STATE(474)] = 15738,
    [SMALL_STATE(475)] = 15751,
    [SMALL_STATE(476)] = 15764,
    [SMALL_STATE(477)] = 15777,
    [SMALL_STATE(478)] = 15790,
    [SMALL_STATE(479)] = 15803,
    [SMALL_STATE(480)] = 15816,
    [SMALL_STATE(481)] = 15829,
    [SMALL_STATE(482)] = 15842,
    [SMALL_STATE(483)] = 15855,
    [SMALL_STATE(484)] = 15868,
    [SMALL_STATE(485)] = 15881,
    [SMALL_STATE(486)] = 15894,
    [SMALL_STATE(487)] = 15907,
    [SMALL_STATE(488)] = 15920,
    [SMALL_STATE(489)] = 15933,
    [SMALL_STATE(490)] = 15946,
    [SMALL_STATE(491)] = 15959,
    [SMALL_STATE(492)] = 15972,
    [SMALL_STATE(493)] = 15985,
    [SMALL_STATE(494)] = 15998,
    [SMALL_STATE(495)] = 16011,
    [SMALL_STATE(496)] = 16024,
    [SMALL_STATE(497)] = 16037,
    [SMALL_STATE(498)] = 16050,
    [SMALL_STATE(499)] = 16063,
    [SMALL_STATE(500)] = 16076,
    [SMALL_STATE(501)] = 16089,
    [SMALL_STATE(502)] = 16102,
    [SMALL_STATE(503)] = 16115,
    [SMALL_STATE(504)] = 16128,
    [SMALL_STATE(505)] = 16141,
    [SMALL_STATE(506)] = 16154,
    [SMALL_STATE(507)] = 16167,
    [SMALL_STATE(508)] = 16180,
    [SMALL_STATE(509)] = 16193,
    [SMALL_STATE(510)] = 16206,
    [SMALL_STATE(511)] = 16219,
    [SMALL_STATE(512)] = 16232,
    [SMALL_STATE(513)] = 16245,
    [SMALL_STATE(514)] = 16258,
    [SMALL_STATE(515)] = 16271,
    [SMALL_STATE(516)] = 16284,
    [SMALL_STATE(517)] = 16297,
    [SMALL_STATE(518)] = 16310,
    [SMALL_STATE(519)] = 16323,
    [SMALL_STATE(520)] = 16336,
    [SMALL_STATE(521)] = 16349,
    [SMALL_STATE(522)] = 16362,
    [SMALL_STATE(523)] = 16375,
    [SMALL_STATE(524)] = 16388,
    [SMALL_STATE(525)] = 16401,
    [SMALL_STATE(526)] = 16414,
    [SMALL_STATE(527)] = 16427,
    [SMALL_STATE(528)] = 16440,
    [SMALL_STATE(529)] = 16453,
    [SMALL_STATE(530)] = 16466,
    [SMALL_STATE(531)] = 16479,
    [SMALL_STATE(532)] = 16492,
    [SMALL_STATE(533)] = 16505,
    [SMALL_STATE(534)] = 16518,
    [SMALL_STATE(535)] = 16531,
    [SMALL_STATE(536)] = 16544,
    [SMALL_STATE(537)] = 16557,
    [SMALL_STATE(538)] = 16570,
    [SMALL_STATE(539)] = 16583,
    [SMALL_STATE(540)] = 16596,
    [SMALL_STATE(541)] = 16609,
    [SMALL_STATE(542)] = 16622,
    [SMALL_STATE(543)] = 16635,
    [SMALL_STATE(544)] = 16648,
    [SMALL_STATE(545)] = 16661,
    [SMALL_STATE(546)] = 16674,
    [SMALL_STATE(547)] = 16687,
    [SMALL_STATE(548)] = 16700,
    [SMALL_STATE(549)] = 16713,
    [SMALL_STATE(550)] = 16726,
    [SMALL_STATE(551)] = 16739,
    [SMALL_STATE(552)] = 16752,
    [SMALL_STATE(553)] = 16765,
    [SMALL_STATE(554)] = 16778,
    [SMALL_STATE(555)] = 16791,
    [SMALL_STATE(556)] = 16804,
    [SMALL_STATE(557)] = 16817,
    [SMALL_STATE(558)] = 16830,
    [SMALL_STATE(559)] = 16843,
    [SMALL_STATE(560)] = 16856,
    [SMALL_STATE(561)] = 16869,
    [SMALL_STATE(562)] = 16882,
    [SMALL_STATE(563)] = 16895,
    [SMALL_STATE(564)] = 16908,
    [SMALL_STATE(565)] = 16921,
    [SMALL_STATE(566)] = 16934,
    [SMALL_STATE(567)] = 16947,
    [SMALL_STATE(568)] = 16960,
    [SMALL_STATE(569)] = 16973,
    [SMALL_STATE(570)] = 16986,
    [SMALL_STATE(571)] = 16999,
    [SMALL_STATE(572)] = 17012,
    [SMALL_STATE(573)] = 17025,
    [SMALL_STATE(574)] = 17038,
    [SMALL_STATE(575)] = 17051,
    [SMALL_STATE(576)] = 17064,
    [SMALL_STATE(577)] = 17077,
    [SMALL_STATE(578)] = 17090,
    [SMALL_STATE(579)] = 17103,
    [SMALL_STATE(580)] = 17116,
    [SMALL_STATE(581)] = 17129,
    [SMALL_STATE(582)] = 17142,
    [SMALL_STATE(583)] = 17155,
    [SMALL_STATE(584)] = 17168,
    [SMALL_STATE(585)] = 17181,
    [SMALL_STATE(586)] = 17194,
    [SMALL_STATE(587)] = 17207,
    [SMALL_STATE(588)] = 17220,
    [SMALL_STATE(589)] = 17233,
    [SMALL_STATE(590)] = 17246,
    [SMALL_STATE(591)] = 17259,
    [SMALL_STATE(592)] = 17272,
    [SMALL_STATE(593)] = 17285,
    [SMALL_STATE(594)] = 17298,
    [SMALL_STATE(595)] = 17311,
    [SMALL_STATE(596)] = 17324,
    [SMALL_STATE(597)] = 17337,
    [SMALL_STATE(598)] = 17350,
    [SMALL_STATE(599)] = 17363,
    [SMALL_STATE(600)] = 17376,
    [SMALL_STATE(601)] = 17389,
    [SMALL_STATE(602)] = 17402,
    [SMALL_STATE(603)] = 17415,
    [SMALL_STATE(604)] = 17428,
    [SMALL_STATE(605)] = 17441,
    [SMALL_STATE(606)] = 17454,
    [SMALL_STATE(607)] = 17467,
    [SMALL_STATE(608)] = 17480,
    [SMALL_STATE(609)] = 17493,
    [SMALL_STATE(610)] = 17506,
    [SMALL_STATE(611)] = 17519,
    [SMALL_STATE(612)] = 17532,
    [SMALL_STATE(613)] = 17545,
    [SMALL_STATE(614)] = 17558,
    [SMALL_STATE(615)] = 17571,
    [SMALL_STATE(616)] = 17584,
    [SMALL_STATE(617)] = 17597,
    [SMALL_STATE(618)] = 17610,
    [SMALL_STATE(619)] = 17623,
    [SMALL_STATE(620)] = 17636,
    [SMALL_STATE(621)] = 17649,
    [SMALL_STATE(622)] = 17662,
    [SMALL_STATE(623)] = 17675,
    [SMALL_STATE(624)] = 17688,
    [SMALL_STATE(625)] = 17692,
};

static const TSParseActionEntry ts_parse_actions[] = {
    [0] = { .entry = { .count = 0, .reusable = false } },
    [1] = { .entry = { .count = 1, .reusable = false } },
    RECOVER(),
    [3] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(216),
    [5] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(483),
    [7] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_specification, 0, 0, 0),
    [9] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(396),
    [11] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(623),
    [13] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(607),
    [15] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(369),
    [17] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(603),
    [19] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(601),
    [21] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(598),
    [23] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(597),
    [25] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(290),
    [27] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(314),
    [29] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(572),
    [31] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(569),
    [33] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(554),
    [35] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(545),
    [37] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(61),
    [39] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(527),
    [41] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(16),
    [43] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(525),
    [45] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(295),
    [47] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(305),
    [49] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(156),
    [51] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(409),
    [53] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(514),
    [55] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(223),
    [58] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(224),
    [61] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(225),
    [64] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(225),
    [67] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(227),
    [70] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(277),
    [73] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(542),
    [76] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(228),
    [79] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(229),
    [82] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(229),
    [85] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(230),
    [88] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(232),
    [91] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(232),
    [94] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(304),
    [97] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(304),
    [100] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(248),
    [103] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(610),
    [106] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(243),
    [109] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(269),
    [112] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(523),
    [115] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(546),
    [118] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(623),
    [121] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    [123] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(602),
    [126] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(600),
    [129] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(599),
    [132] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(59),
    [135] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(601),
    [138] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(598),
    [141] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(290),
    [144] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(572),
    [147] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(569),
    [150] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(554),
    [153] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(545),
    [156] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(61),
    [159] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(527),
    [162] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(56),
    [165] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(585),
    [168] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(16),
    [171] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(525),
    [174] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(295),
    [177] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(156),
    [180] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(596),
    [183] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(409),
    [186] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(163),
    [189] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(223),
    [191] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(224),
    [193] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(225),
    [195] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(225),
    [197] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(227),
    [199] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(277),
    [201] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(542),
    [203] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(228),
    [205] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(229),
    [207] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(229),
    [209] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(230),
    [211] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(232),
    [213] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(232),
    [215] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(304),
    [217] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(304),
    [219] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(248),
    [221] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(610),
    [223] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(243),
    [225] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(269),
    [227] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(523),
    [229] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(546),
    [231] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(623),
    [233] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(588),
    [235] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(602),
    [237] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(600),
    [239] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(599),
    [241] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(59),
    [243] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(601),
    [245] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(598),
    [247] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(290),
    [249] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(572),
    [251] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(569),
    [253] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(554),
    [255] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(545),
    [257] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(61),
    [259] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(527),
    [261] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(56),
    [263] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(585),
    [265] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(16),
    [267] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(295),
    [269] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(156),
    [271] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(596),
    [273] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(409),
    [275] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(163),
    [277] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(532),
    [279] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(604),
    [281] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(454),
    [283] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(493),
    [285] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_body, 1, 0, 0),
    [287] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(526),
    [289] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(223),
    [292] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(224),
    [295] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(225),
    [298] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(225),
    [301] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(227),
    [304] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(277),
    [307] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(542),
    [310] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(228),
    [313] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(229),
    [316] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(229),
    [319] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(230),
    [322] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(232),
    [325] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(232),
    [328] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(304),
    [331] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(304),
    [334] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(248),
    [337] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(610),
    [340] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(243),
    [343] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(269),
    [346] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(523),
    [349] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(546),
    [352] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(623),
    [355] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    [357] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(602),
    [360] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(600),
    [363] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(599),
    [366] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(59),
    [369] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(601),
    [372] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(598),
    [375] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(290),
    [378] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(572),
    [381] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(569),
    [384] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(554),
    [387] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(545),
    [390] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(61),
    [393] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(527),
    [396] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(16),
    [399] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(525),
    [402] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(295),
    [405] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(156),
    [408] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(596),
    [411] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(409),
    [414] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(163),
    [417] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(461),
    [419] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(549),
    [421] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(149),
    [423] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(102),
    [425] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(149),
    [427] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(382),
    [429] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(566),
    [431] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(562),
    [433] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(127),
    [435] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(131),
    [437] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(85),
    [439] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case, 1, 0, 0),
    [441] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_case, 1, 0, 0),
    [443] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(470),
    [445] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(260),
    [447] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(514),
    [449] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_specification, 1, 0, 0),
    [451] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(521),
    [453] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(623),
    [456] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    [458] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(607),
    [461] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(369),
    [464] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(603),
    [467] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(601),
    [470] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(598),
    [473] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(597),
    [476] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(290),
    [479] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(314),
    [482] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(572),
    [485] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(569),
    [488] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(554),
    [491] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(545),
    [494] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(61),
    [497] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(260),
    [500] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(527),
    [503] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(16),
    [506] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(525),
    [509] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(295),
    [512] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(305),
    [515] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(156),
    [518] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(409),
    [521] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(514),
    [524] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    [526] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(623),
    [529] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(607),
    [532] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(369),
    [535] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(603),
    [538] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(601),
    [541] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(598),
    [544] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(597),
    [547] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(290),
    [550] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(314),
    [553] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(572),
    [556] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(569),
    [559] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(554),
    [562] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(545),
    [565] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(61),
    [568] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(527),
    [571] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(16),
    [574] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(525),
    [577] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(295),
    [580] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(305),
    [583] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(156),
    [586] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(409),
    [589] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(514),
    [592] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(528),
    [594] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(317),
    [596] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(223),
    [599] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(224),
    [602] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(225),
    [605] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(225),
    [608] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(227),
    [611] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(277),
    [614] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(542),
    [617] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(228),
    [620] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(229),
    [623] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(229),
    [626] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(230),
    [629] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(232),
    [632] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(232),
    [635] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(304),
    [638] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(304),
    [641] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(248),
    [644] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(610),
    [647] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(243),
    [650] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(269),
    [653] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(523),
    [656] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(546),
    [659] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    [661] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(317),
    [664] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(163),
    [667] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(384),
    [669] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(552),
    [671] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(405),
    [673] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(578),
    [675] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(360),
    [677] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(513),
    [679] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(515),
    [681] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(568),
    [683] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(522),
    [685] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(525),
    [687] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(223),
    [690] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(224),
    [693] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(225),
    [696] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(225),
    [699] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(227),
    [702] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(513),
    [705] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(515),
    [708] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(228),
    [711] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(229),
    [714] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(229),
    [717] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(230),
    [720] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(232),
    [723] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(232),
    [726] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(304),
    [729] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(304),
    [732] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(248),
    [735] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(610),
    [738] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(243),
    [741] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(568),
    [744] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(523),
    [747] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    [749] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(545),
    [752] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(61),
    [755] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(16),
    [758] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(525),
    [761] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(163),
    [764] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(446),
    [766] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_specification, 2, 0, 0),
    [768] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(406),
    [770] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(509),
    [772] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(401),
    [774] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(567),
    [776] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(435),
    [778] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_init_dcl, 6, 0, 0),
    [780] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_init_dcl, 6, 0, 0),
    [782] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_value_element, 1, 0, 0),
    [784] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_element, 1, 0, 0),
    [786] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_state_member, 4, 0, 0),
    [788] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_state_member, 4, 0, 0),
    [790] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 1, 0, 0),
    [792] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_value_def_repeat1, 1, 0, 0),
    [794] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_export, 2, 0, 0),
    [796] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_export, 2, 0, 0),
    [798] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(397),
    [800] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(559),
    [802] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(62),
    [804] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_init_dcl, 7, 0, 0),
    [806] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_init_dcl, 7, 0, 0),
    [808] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_init_dcl, 5, 0, 0),
    [810] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_init_dcl, 5, 0, 0),
    [812] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(263),
    [814] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(97),
    [816] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 1, 0, 0),
    [818] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 1, 0, 0),
    [820] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_case_label, 2, 0, 0),
    [822] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case_label, 2, 0, 0),
    [824] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_case_label, 3, 0, 0),
    [826] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case_label, 3, 0, 0),
    [828] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_interface_def_repeat1, 2, 0, 0),
    [830] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2, 0, 0),
    [832] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(317),
    [835] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 3, 0, 3),
    [837] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 3, 0, 3),
    [839] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_scoped_name, 3, 0, 0),
    [841] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_scoped_name, 3, 0, 0),
    [843] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_scoped_name, 2, 0, 0),
    [845] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_scoped_name, 2, 0, 0),
    [847] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_scoped_name, 1, 0, 0),
    [849] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_scoped_name, 1, 0, 0),
    [851] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_body, 2, 0, 0),
    [853] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_body, 2, 0, 0),
    [855] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_appl, 2, 0, 0),
    [857] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_appl, 2, 0, 0),
    [859] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(89),
    [861] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 1, 0, 0),
    [863] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 1, 0, 0),
    [865] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_member, 3, 0, 0),
    [867] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_member, 3, 0, 0),
    [869] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_member, 5, 0, 0),
    [871] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_member, 5, 0, 0),
    [873] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 5, 0, 6),
    [875] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 5, 0, 6),
    [877] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 1, 0, 0),
    [879] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 1, 0, 0),
    [881] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_body, 1, 0, 0),
    [883] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_body, 1, 0, 0),
    [885] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 4, 0, 3),
    [887] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 4, 0, 3),
    [889] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 4, 0, 6),
    [891] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 4, 0, 6),
    [893] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_appl, 5, 0, 0),
    [895] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_appl, 5, 0, 0),
    [897] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_interface_def_repeat1, 1, 0, 0),
    [899] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 1, 0, 0),
    [901] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_param_attribute, 1, 0, 0),
    [903] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_param_attribute, 1, 0, 0),
    [905] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(507),
    [907] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(140),
    [909] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2, 0, 0),
    [911] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_specification_repeat1, 2, 0, 0),
    SHIFT_REPEAT(396),
    [914] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_specification_repeat1, 2, 0, 0),
    [916] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(223),
    [918] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(224),
    [920] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(227),
    [922] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(516),
    [924] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(228),
    [926] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(230),
    [928] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym__definition, 1, 0, 0),
    [930] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym__definition, 1, 0, 0),
    [932] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_predefine, 2, 0, 0),
    [934] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_predefine, 2, 0, 0),
    [936] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym__definition, 2, 0, 0),
    [938] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym__definition, 2, 0, 0),
    [940] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_tpl_definition, 1, 0, 0),
    [942] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_tpl_definition, 1, 0, 0),
    [944] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_tpl_definition, 2, 0, 0),
    [946] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_tpl_definition, 2, 0, 0),
    [948] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_preproc_call, 3, 0, 2),
    [950] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_preproc_call, 3, 0, 2),
    [952] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_preproc_call, 2, 0, 1),
    [954] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_preproc_call, 2, 0, 1),
    [956] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 1, 0, 0),
    [958] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_specification_repeat2, 1, 0, 0),
    [960] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 1, 0, 0),
    [962] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 1, 0, 0),
    [964] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 1, 0, 0),
    [966] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_specification_repeat1, 1, 0, 0),
    [968] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(543),
    [970] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 1, 0, 0),
    [972] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 1, 0, 0),
    [974] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 2, 0, 0),
    [976] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 2, 0, 0),
    [978] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 4, 0, 0),
    [980] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 4, 0, 0),
    [982] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_char_literal, 3, 0, 4),
    [984] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_char_literal, 3, 0, 4),
    [986] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_boolean_literal, 1, 0, 0),
    [988] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_boolean_literal, 1, 0, 0),
    [990] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_char_literal, 4, 0, 7),
    [992] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_char_literal, 4, 0, 7),
    [994] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_literal, 1, 0, 0),
    [996] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_literal, 1, 0, 0),
    [998] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_mult_expr, 3, 0, 0),
    [1000] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_mult_expr, 3, 0, 0),
    [1002] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_add_expr, 3, 0, 0),
    [1004] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_add_expr, 3, 0, 0),
    [1006] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(122),
    [1008] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(122),
    [1010] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_string_literal, 4, 0, 0),
    [1012] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_literal, 4, 0, 0),
    [1014] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 3, 0, 0),
    [1016] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 3, 0, 0),
    [1018] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_mult_expr, 1, 0, 0),
    [1020] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_mult_expr, 1, 0, 0),
    [1022] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_string_literal, 3, 0, 0),
    [1024] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_literal, 3, 0, 0),
    [1026] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_add_expr, 1, 0, 0),
    [1028] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_add_expr, 1, 0, 0),
    [1030] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(104),
    [1032] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(105),
    [1034] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_shift_expr, 1, 0, 0),
    [1036] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_shift_expr, 1, 0, 0),
    [1038] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(121),
    [1040] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_shift_expr, 3, 0, 0),
    [1042] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_shift_expr, 3, 0, 0),
    [1044] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_simple_type_spec, 1, 0, 0),
    [1046] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_simple_type_spec, 1, 0, 0),
    [1048] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_and_expr, 1, 0, 0),
    [1050] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_and_expr, 1, 0, 0),
    [1052] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(120),
    [1054] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_and_expr, 3, 0, 0),
    [1056] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_and_expr, 3, 0, 0),
    [1058] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(584),
    [1060] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(587),
    [1062] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xor_expr, 3, 0, 0),
    [1064] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(119),
    [1066] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xor_expr, 1, 0, 0),
    [1068] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_operator, 1, 0, 0),
    [1070] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_operator, 1, 0, 0),
    [1072] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_or_expr, 1, 0, 0),
    [1074] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(118),
    [1076] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(416),
    [1078] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_declarator, 1, 0, 0),
    [1080] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(417),
    [1082] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(418),
    [1084] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_or_expr, 3, 0, 0),
    [1086] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(87),
    [1088] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(290),
    [1091] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(195),
    [1093] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(82),
    [1095] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(82),
    [1097] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(563),
    [1099] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_simple_declarator, 1, 0, 0),
    [1101] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_expr, 1, 0, 0),
    [1103] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(112),
    [1105] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_array_declarator, 2, 0, 0),
    [1107] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(93),
    [1109] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 2, 0, 0),
    [1111] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 2, 0, 0),
    SHIFT_REPEAT(93),
    [1114] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(419),
    [1116] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(313),
    [1118] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(362),
    [1120] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(363),
    [1122] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(399),
    [1124] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(524),
    [1126] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(100),
    [1128] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(377),
    [1130] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(449),
    [1132] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(448),
    [1134] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(450),
    [1136] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2, 0, 0),
    [1138] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(524),
    [1141] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(100),
    [1144] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(424),
    [1146] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(169),
    [1148] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(239),
    [1150] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(383),
    [1152] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(570),
    [1154] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitset_dcl_repeat1, 2, 0, 0),
    [1156] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_bitset_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(570),
    [1159] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(373),
    [1161] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_header, 2, 0, 0),
    [1163] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(179),
    [1165] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_forward_dcl, 2, 0, 0),
    [1167] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(236),
    [1169] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(420),
    [1171] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(440),
    [1173] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_readonly_attr_declarator, 1, 0, 0),
    [1175] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(480),
    [1177] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(85),
    [1179] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(216),
    [1181] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(483),
    [1183] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_dcl, 4, 0, 0),
    [1185] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(378),
    [1187] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(55),
    [1189] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_header, 2, 0, 0),
    [1191] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(210),
    [1193] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_forward_dcl, 2, 0, 0),
    [1195] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_fixed_array_size, 3, 0, 0),
    [1197] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(9),
    [1199] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(201),
    [1201] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarators, 2, 0, 0),
    [1203] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(280),
    [1205] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(53),
    [1207] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_dcl, 5, 0, 0),
    [1209] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(206),
    [1211] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_inheritance_spec, 3, 0, 0),
    [1213] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(222),
    [1215] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(313),
    [1218] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(485),
    [1220] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(563),
    [1222] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_integer_type, 1, 0, 0),
    [1224] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(611),
    [1226] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(88),
    [1228] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 2, 0, 0),
    SHIFT_REPEAT(449),
    [1231] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 2, 0, 0),
    [1233] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(321),
    [1235] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(625),
    [1237] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(28),
    [1239] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(258),
    [1241] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_forward_dcl, 2, 0, 0),
    [1243] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(337),
    [1245] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(398),
    [1247] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_inheritance_spec, 4, 0, 0),
    [1249] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(213),
    [1251] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_signed_short_int, 1, 0, 0),
    [1253] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_signed_long_int, 1, 0, 0),
    [1255] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_signed_longlong_int, 1, 0, 0),
    [1257] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unsigned_int, 1, 0, 0),
    [1259] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_signed_int, 1, 0, 0),
    [1261] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unsigned_short_int, 1, 0, 0),
    [1263] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unsigned_long_int, 1, 0, 0),
    [1265] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unsigned_longlong_int, 1, 0, 0),
    [1267] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_value_inheritance_spec_repeat1, 2, 0, 0),
    SHIFT_REPEAT(206),
    [1270] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_value_inheritance_spec_repeat1, 2, 0, 0),
    [1272] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(624),
    [1274] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_declarators_repeat1, 2, 0, 0),
    SHIFT_REPEAT(201),
    [1277] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_declarators_repeat1, 2, 0, 0),
    [1279] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 1, 0, 0),
    [1281] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_name, 1, 0, 0),
    [1283] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_inheritance_spec, 2, 0, 0),
    [1285] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(205),
    [1287] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(94),
    [1289] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_type, 1, 0, 0),
    [1291] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(376),
    [1293] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(617),
    [1295] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(90),
    [1297] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarators, 1, 0, 0),
    [1299] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(375),
    [1301] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_char_type, 1, 0, 0),
    [1303] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(321),
    [1306] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(176),
    [1308] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(365),
    [1310] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_inheritance_spec_repeat1, 2, 0, 0),
    SHIFT_REPEAT(193),
    [1313] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_inheritance_spec_repeat1, 2, 0, 0),
    [1315] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_actual_parameters, 1, 0, 0),
    [1317] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(14),
    [1319] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_readonly_attr_declarator, 2, 0, 0),
    [1321] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_template_type_spec, 1, 0, 0),
    [1323] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_map_type, 6, 0, 0),
    [1325] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_fixed_pt_type, 6, 0, 0),
    [1327] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(185),
    [1329] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_init_param_dcls_repeat1, 2, 0, 0),
    SHIFT_REPEAT(389),
    [1332] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_init_param_dcls_repeat1, 2, 0, 0),
    [1334] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_positive_int_const, 1, 0, 0),
    [1336] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 3, 0, 0),
    [1338] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_formal_parameter_names_repeat1, 2, 0, 0),
    [1340] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_formal_parameter_names_repeat1, 2, 0, 0),
    SHIFT_REPEAT(580),
    [1343] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(193),
    [1345] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_inheritance_spec, 6, 0, 0),
    [1347] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_type, 1, 0, 0),
    [1349] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(238),
    [1351] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarators, 2, 0, 0),
    [1353] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(442),
    [1355] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_name, 1, 0, 0),
    [1357] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_inheritance_spec, 2, 0, 0),
    [1359] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_parameter_dcls_repeat1, 2, 0, 0),
    SHIFT_REPEAT(192),
    [1362] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_parameter_dcls_repeat1, 2, 0, 0),
    [1364] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(157),
    [1366] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(392),
    [1368] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_base_type_spec, 1, 0, 0),
    [1370] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(389),
    [1372] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_init_param_dcls, 1, 0, 0),
    [1374] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_context_expr_repeat1, 2, 0, 0),
    SHIFT_REPEAT(340),
    [1377] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_context_expr_repeat1, 2, 0, 0),
    [1379] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(48),
    [1381] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(431),
    [1383] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_in_parameter_dcls, 2, 0, 0),
    [1385] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameter_names, 2, 0, 0),
    [1387] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(580),
    [1389] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_raises_expr_repeat1, 2, 0, 0),
    SHIFT_REPEAT(337),
    [1392] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_raises_expr_repeat1, 2, 0, 0),
    [1394] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_type_spec, 1, 0, 0),
    [1396] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(192),
    [1398] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_parameter_dcls, 1, 0, 0),
    [1400] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarator, 1, 0, 0),
    [1402] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(66),
    [1404] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(101),
    [1406] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 1, 0, 0),
    [1408] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(340),
    [1410] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(495),
    [1412] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_declarator, 2, 0, 0),
    [1414] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(381),
    [1416] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(421),
    [1418] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_raises_expr, 1, 0, 0),
    [1420] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(387),
    [1422] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_parameter_dcls, 2, 0, 0),
    [1424] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_floating_pt_type, 1, 0, 0),
    [1426] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(430),
    [1428] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 5, 0, 0),
    [1430] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_enum_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(185),
    [1433] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enum_dcl_repeat1, 2, 0, 0),
    [1435] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_actual_parameters_repeat1, 2, 0, 0),
    [1437] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_actual_parameters_repeat1, 2, 0, 0),
    SHIFT_REPEAT(14),
    [1440] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_formal_parameters_repeat1, 2, 0, 0),
    [1442] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_formal_parameters_repeat1, 2, 0, 0),
    SHIFT_REPEAT(50),
    [1445] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_appl_params_repeat1, 2, 0, 0),
    SHIFT_REPEAT(395),
    [1448] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_annotation_appl_params_repeat1, 2, 0, 0),
    [1450] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(163),
    [1452] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(347),
    [1454] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameters, 1, 0, 0),
    [1456] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(50),
    [1458] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(52),
    [1460] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(539),
    [1462] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(620),
    [1464] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(69),
    [1466] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(45),
    [1468] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(395),
    [1470] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_appl_params, 1, 0, 0),
    [1472] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarators, 1, 0, 0),
    [1474] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(616),
    [1476] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(231),
    [1478] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_appl_params, 2, 0, 0),
    [1480] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_init_param_dcls, 2, 0, 0),
    [1482] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_bitmask_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(176),
    [1485] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitmask_dcl_repeat1, 2, 0, 0),
    [1487] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameters, 2, 0, 0),
    [1489] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case, 3, 0, 0),
    [1491] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(40),
    [1493] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameter_names, 1, 0, 0),
    [1495] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_forward_dcl, 2, 0, 0),
    [1497] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(619),
    [1499] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_union_forward_dcl, 2, 0, 0),
    [1501] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_actual_parameters, 2, 0, 0),
    [1503] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitfield_repeat1, 2, 0, 0),
    [1505] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_bitfield_repeat1, 2, 0, 0),
    SHIFT_REPEAT(421),
    [1508] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_map_type, 8, 0, 0),
    [1510] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_readonly_attr_declarator_repeat1, 2, 0, 0),
    SHIFT_REPEAT(416),
    [1513] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_readonly_attr_declarator_repeat1, 2, 0, 0),
    [1515] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(79),
    [1517] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_inheritance_spec, 5, 0, 0),
    [1519] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_in_parameter_dcls, 1, 0, 0),
    [1521] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(408),
    [1523] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(537),
    [1525] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_type, 4, 0, 0),
    [1527] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(425),
    [1529] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 4, 0, 0),
    [1531] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_inheritance_spec, 7, 0, 0),
    [1533] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(46),
    [1535] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(25),
    [1537] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(422),
    [1539] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_any_declarators_repeat1, 2, 0, 0),
    SHIFT_REPEAT(238),
    [1542] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_any_declarators_repeat1, 2, 0, 0),
    [1544] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_in_parameter_dcls_repeat1, 2, 0, 0),
    SHIFT_REPEAT(431),
    [1547] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_in_parameter_dcls_repeat1, 2, 0, 0),
    [1549] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_inheritance_spec, 3, 0, 0),
    [1551] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_in_param_dcl, 3, 0, 0),
    [1553] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_imported_scope, 1, 0, 0),
    [1555] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_member_type, 1, 0, 0),
    [1557] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 4, 0, 0),
    [1559] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bit_value, 1, 0, 0),
    [1561] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 4, 0, 0),
    [1563] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(180),
    [1565] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 8, 0, 0),
    [1567] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitset_dcl_repeat1, 1, 0, 0),
    [1569] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_get_excep_expr, 2, 0, 0),
    [1571] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(484),
    [1573] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(471),
    [1575] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(36),
    [1577] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 4, 0, 0),
    [1579] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(13),
    [1581] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_exception_list, 3, 0, 0),
    [1583] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enumerator, 2, 0, 0),
    [1585] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 5, 0, 0),
    [1587] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_oneway_dcl, 5, 0, 0),
    [1589] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_switch_type_spec, 1, 0, 0),
    [1591] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(439),
    [1593] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(106),
    [1595] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield, 3, 0, 0),
    [1597] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(608),
    [1599] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(519),
    [1601] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 6, 0, 0),
    [1603] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 5, 0, 0),
    [1605] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 6, 0, 0),
    [1607] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameter, 2, 0, 0),
    [1609] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(182),
    [1611] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(267),
    [1613] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 7, 0, 0),
    [1615] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_appl_param, 3, 0, 0),
    [1617] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarator, 1, 0, 0),
    [1619] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(466),
    [1621] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(114),
    [1623] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(455),
    [1625] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(49),
    [1627] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameter_type, 1, 0, 0),
    [1629] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_raises_expr, 4, 0, 0),
    [1631] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_def, 9, 0, 0),
    [1633] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 7, 0, 8),
    [1635] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield_spec, 6, 0, 0),
    [1637] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 8, 0, 8),
    [1639] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 6, 0, 5),
    [1641] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 6, 0, 0),
    [1643] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_actual_parameter, 1, 0, 0),
    [1645] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(256),
    [1647] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(92),
    [1649] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(414),
    [1651] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(329),
    [1653] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(73),
    [1655] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(99),
    [1657] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(253),
    [1659] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 5, 0, 0),
    [1661] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 5, 0, 0),
    [1663] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitfield_repeat1, 1, 0, 0),
    [1665] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield, 2, 0, 0),
    [1667] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(24),
    [1669] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(289),
    [1671] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_def, 8, 0, 0),
    [1673] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_exception_list, 4, 0, 0),
    [1675] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_type, 1, 0, 0),
    [1677] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_oneway_dcl, 6, 0, 0),
    [1679] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_raises_expr, 5, 0, 0),
    [1681] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_dcl, 6, 0, 0),
    [1683] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 6, 0, 0),
    [1685] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_param_dcl, 3, 0, 0),
    [1687] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_init_param_dcl, 3, 0, 0),
    [1689] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield_spec, 4, 0, 0),
    [1691] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 7, 0, 0),
    [1693] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitmask_dcl_repeat1, 3, 0, 0),
    [1695] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 7, 0, 0),
    [1697] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 7, 0, 5),
    [1699] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 1, 0, 0),
    [1701] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enumerator, 1, 0, 0),
    [1703] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_modifier, 1, 0, 0),
    [1705] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 4, 0, 0),
    [1707] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(33),
    [1709] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(95),
    [1711] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 4, 0, 0),
    [1713] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(113),
    [1715] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(203),
    [1717] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_default, 2, 0, 0),
    [1719] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(583),
    [1721] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(3),
    [1723] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(75),
    [1725] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_abs_def, 7, 0, 0),
    [1727] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_readonly_attr_spec, 4, 0, 0),
    [1729] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(186),
    [1731] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(125),
    [1733] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(74),
    [1735] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_template_module_inst, 6, 0, 0),
    [1737] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_dcl, 1, 0, 0),
    [1739] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_template_module_dcl, 7, 0, 0),
    [1741] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(199),
    [1743] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(111),
    [1745] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(5),
    [1747] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_dcl, 1, 0, 0),
    [1749] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(257),
    [1751] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(328),
    [1753] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(197),
    [1755] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(285),
    [1757] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(129),
    [1759] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(464),
    [1761] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_kind, 2, 0, 0),
    [1763] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_context_expr, 3, 0, 0),
    [1765] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(27),
    [1767] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_set_excep_expr, 2, 0, 0),
    [1769] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_raises_expr, 2, 0, 0),
    [1771] = { .entry = { .count = 1, .reusable = true } },
    ACCEPT_INPUT(),
    [1773] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(166),
    [1775] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(109),
    [1777] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(429),
    [1779] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_abs_def, 6, 0, 0),
    [1781] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(78),
    [1783] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_context_expr, 4, 0, 0),
    [1785] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(37),
    [1787] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(134),
    [1789] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 5, 0, 0),
    [1791] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(43),
    [1793] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(196),
    [1795] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_spec, 3, 0, 0),
    [1797] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(198),
    [1799] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_dcl, 5, 0, 0),
    [1801] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(307),
    [1803] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(540),
    [1805] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(468),
    [1807] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_module_dcl, 5, 0, 0),
    [1809] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(170),
    [1811] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(17),
    [1813] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameter_type, 2, 0, 0),
    [1815] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(108),
    [1817] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_fixed_pt_const_type, 1, 0, 0),
    [1819] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_destination_type, 1, 0, 0),
    [1821] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(403),
    [1823] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(126),
    [1825] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(482),
    [1827] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(135),
    [1829] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_template_module_dcl, 8, 0, 0),
    [1831] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_dcl, 5, 0, 0),
    [1833] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(63),
    [1835] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_anno, 1, 0, 0),
    [1837] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_abs_def, 5, 0, 0),
    [1839] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(535),
    [1841] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_except_dcl, 5, 0, 0),
    [1843] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(333),
    [1845] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(498),
    [1847] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(622),
    [1849] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_def, 4, 0, 0),
    [1851] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(202),
    [1853] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_kind, 2, 0, 0),
    [1855] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(155),
    [1857] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_context_expr, 5, 0, 0),
    [1859] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_with_context, 2, 0, 0),
    [1861] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(209),
    [1863] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(173),
    [1865] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(500),
    [1867] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(91),
    [1869] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(84),
    [1871] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(54),
    [1873] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(510),
    [1875] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(58),
    [1877] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(47),
    [1879] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(344),
    [1881] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(86),
    [1883] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(342),
    [1885] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(508),
    [1887] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_module_dcl, 4, 0, 0),
    [1889] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(388),
    [1891] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(330),
    [1893] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(64),
    [1895] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(511),
    [1897] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(327),
    [1899] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_typedef_dcl, 2, 0, 0),
    [1901] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(162),
    [1903] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(518),
    [1905] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(70),
    [1907] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(606),
    [1909] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_dcl, 4, 0, 0),
    [1911] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_const_type, 1, 0, 0),
    [1913] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(219),
    [1915] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(96),
    [1917] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(582),
    [1919] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_kind, 1, 0, 0),
    [1921] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_element_spec, 2, 0, 0),
    [1923] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(7),
    [1925] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_import_dcl, 2, 0, 0),
    [1927] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_native_dcl, 2, 0, 0),
    [1929] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_except_dcl, 4, 0, 0),
    [1931] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(165),
    [1933] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(436),
    [1935] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(168),
    [1937] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(586),
    [1939] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(581),
    [1941] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(579),
    [1943] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(533),
    [1945] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_template_module_ref, 6, 0, 0),
    [1947] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(423),
    [1949] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_def, 3, 0, 0),
    [1951] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_header, 3, 0, 0),
    [1953] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(296),
    [1955] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_dcl, 1, 0, 0),
    [1957] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(536),
    [1959] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(6),
    [1961] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(541),
    [1963] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(496),
    [1965] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(490),
    [1967] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(57),
    [1969] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_type_spec, 1, 0, 0),
    [1971] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(390),
    [1973] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_kind, 1, 0, 0),
    [1975] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 3, 0, 0),
    [1977] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_header, 3, 0, 0),
    [1979] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(137),
    [1981] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(497),
    [1983] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_type_prefix_dcl, 3, 0, 0),
    [1985] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(161),
    [1987] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(159),
    [1989] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_type_id_dcl, 3, 0, 0),
    [1991] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(427),
    [1993] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_type_declarator, 2, 0, 0),
    [1995] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(194),
    [1997] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(241),
    [1999] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(80),
    [2001] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(83),
    [2003] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(68),
    [2005] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(391),
    [2007] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(98),
    [2009] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(486),
    [2011] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_comment, 3, 0, 0),
    [2013] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_comment, 2, 0, 0),
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
