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
#define STATE_COUNT 545
#define LARGE_STATE_COUNT 14
#define SYMBOL_COUNT 259
#define ALIAS_COUNT 0
#define TOKEN_COUNT 106
#define EXTERNAL_TOKEN_COUNT 1
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
    anon_sym_interface = 59,
    anon_sym_local = 60,
    anon_sym_COLON = 61,
    anon_sym_SEMI = 62,
    anon_sym_void = 63,
    anon_sym_in = 64,
    anon_sym_out = 65,
    anon_sym_inout = 66,
    anon_sym_raises = 67,
    anon_sym_readonly = 68,
    anon_sym_attribute = 69,
    anon_sym_getraises = 70,
    anon_sym_setraises = 71,
    anon_sym_bitset = 72,
    anon_sym_bitfield = 73,
    anon_sym_bitmask = 74,
    anon_sym_ATannotation = 75,
    anon_sym_default = 76,
    anon_sym_AT = 77,
    anon_sym_EQ = 78,
    anon_sym_module = 79,
    anon_sym_typename = 80,
    anon_sym_valuetype = 81,
    anon_sym_eventtype = 82,
    anon_sym_struct = 83,
    anon_sym_union = 84,
    anon_sym_enum = 85,
    anon_sym_const = 86,
    anon_sym_alias = 87,
    anon_sym_supports = 88,
    anon_sym_public = 89,
    anon_sym_private = 90,
    anon_sym_factory = 91,
    anon_sym_typedef = 92,
    anon_sym_LBRACK = 93,
    anon_sym_RBRACK = 94,
    anon_sym_ATdefault_literal = 95,
    anon_sym_ATignore_literal_names = 96,
    anon_sym_switch = 97,
    anon_sym_case = 98,
    anon_sym_native = 99,
    anon_sym_POUNDdefine = 100,
    aux_sym_predefine_token1 = 101,
    sym_identifier = 102,
    anon_sym_SLASH_SLASH = 103,
    aux_sym_comment_token1 = 104,
    sym__eof = 105,
    sym_specification = 106,
    sym_signed_short_int = 107,
    sym_signed_long_int = 108,
    sym_signed_longlong_int = 109,
    sym_unsigned_int = 110,
    sym_fixed_pt_const_type = 111,
    sym_integer_type = 112,
    sym_signed_int = 113,
    sym_unsigned_short_int = 114,
    sym_unsigned_long_int = 115,
    sym_unsigned_longlong_int = 116,
    sym_floating_pt_type = 117,
    sym_char_type = 118,
    sym_scoped_name = 119,
    sym_string_type = 120,
    sym_type_spec = 121,
    sym_simple_type_spec = 122,
    sym_base_type_spec = 123,
    sym_any_type = 124,
    sym_fixed_pt_type = 125,
    sym_template_type_spec = 126,
    sym_sequence_type = 127,
    sym_map_type = 128,
    sym_positive_int_const = 129,
    sym_const_expr = 130,
    sym_or_expr = 131,
    sym_xor_expr = 132,
    sym_and_expr = 133,
    sym_shift_expr = 134,
    sym_add_expr = 135,
    sym_mult_expr = 136,
    sym_unary_expr = 137,
    sym_unary_operator = 138,
    sym_literal = 139,
    sym_string_literal = 140,
    sym_char_literal = 141,
    sym_boolean_literal = 142,
    sym_preproc_call = 143,
    sym_except_dcl = 144,
    sym_interface_dcl = 145,
    sym_interface_forward_dcl = 146,
    sym_interface_def = 147,
    sym_interface_header = 148,
    sym_interface_inheritance_spec = 149,
    sym_interface_name = 150,
    sym_interface_body = 151,
    sym_export = 152,
    sym_op_dcl = 153,
    sym_op_type_spec = 154,
    sym_parameter_dcls = 155,
    sym_param_dcl = 156,
    sym_param_attribute = 157,
    sym_raises_expr = 158,
    sym_attr_dcl = 159,
    sym_readonly_attr_spec = 160,
    sym_readonly_attr_declarator = 161,
    sym_attr_spec = 162,
    sym_attr_declarator = 163,
    sym_attr_raises_expr = 164,
    sym_get_excep_expr = 165,
    sym_set_excep_expr = 166,
    sym_exception_list = 167,
    sym_bitset_dcl = 168,
    sym_bitfield = 169,
    sym_bitfield_spec = 170,
    sym_destination_type = 171,
    sym_bitmask_dcl = 172,
    sym_bit_value = 173,
    sym_annotation_dcl = 174,
    sym_annotation_body = 175,
    sym_annotation_member = 176,
    sym_annotation_member_type = 177,
    sym_any_const_type = 178,
    sym_annotation_appl = 179,
    sym_annotation_appl_params = 180,
    sym_annotation_appl_param = 181,
    sym_template_module_dcl = 182,
    sym_formal_parameters = 183,
    sym_formal_parameter = 184,
    sym_formal_parameter_type = 185,
    sym_tpl_definition = 186,
    sym_template_module_inst = 187,
    sym_actual_parameters = 188,
    sym_actual_parameter = 189,
    sym_template_module_ref = 190,
    sym_formal_parameter_names = 191,
    sym_value_dcl = 192,
    sym_value_def = 193,
    sym_value_header = 194,
    sym_value_inheritance_spec = 195,
    sym_value_name = 196,
    sym_value_element = 197,
    sym_state_member = 198,
    sym_init_dcl = 199,
    sym_init_param_dcls = 200,
    sym_init_param_dcl = 201,
    sym_value_forward_dcl = 202,
    sym_typedef_dcl = 203,
    sym_type_declarator = 204,
    sym_any_declarators = 205,
    sym_any_declarator = 206,
    sym_simple_declarator = 207,
    sym_declarator = 208,
    sym_declarators = 209,
    sym_array_declarator = 210,
    sym_fixed_array_size = 211,
    sym_enum_dcl = 212,
    sym_enumerator = 213,
    sym_enum_modifier = 214,
    sym_enum_anno = 215,
    sym_union_forward_dcl = 216,
    sym_union_def = 217,
    sym_case = 218,
    sym_case_label = 219,
    sym_element_spec = 220,
    sym_switch_type_spec = 221,
    sym__definition = 222,
    sym_native_dcl = 223,
    sym_module_dcl = 224,
    sym_struct_forward_dcl = 225,
    sym_struct_def = 226,
    sym_member = 227,
    sym_default = 228,
    sym_predefine = 229,
    sym_const_dcl = 230,
    sym_const_type = 231,
    sym_comment = 232,
    aux_sym_specification_repeat1 = 233,
    aux_sym_specification_repeat2 = 234,
    aux_sym_except_dcl_repeat1 = 235,
    aux_sym_interface_def_repeat1 = 236,
    aux_sym_interface_inheritance_spec_repeat1 = 237,
    aux_sym_interface_body_repeat1 = 238,
    aux_sym_parameter_dcls_repeat1 = 239,
    aux_sym_raises_expr_repeat1 = 240,
    aux_sym_readonly_attr_declarator_repeat1 = 241,
    aux_sym_bitset_dcl_repeat1 = 242,
    aux_sym_bitfield_repeat1 = 243,
    aux_sym_bitmask_dcl_repeat1 = 244,
    aux_sym_annotation_dcl_repeat1 = 245,
    aux_sym_annotation_appl_params_repeat1 = 246,
    aux_sym_template_module_dcl_repeat1 = 247,
    aux_sym_formal_parameters_repeat1 = 248,
    aux_sym_actual_parameters_repeat1 = 249,
    aux_sym_formal_parameter_names_repeat1 = 250,
    aux_sym_value_def_repeat1 = 251,
    aux_sym_init_param_dcls_repeat1 = 252,
    aux_sym_any_declarators_repeat1 = 253,
    aux_sym_declarators_repeat1 = 254,
    aux_sym_array_declarator_repeat1 = 255,
    aux_sym_enum_dcl_repeat1 = 256,
    aux_sym_enumerator_repeat1 = 257,
    aux_sym_union_def_repeat1 = 258,
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
    [anon_sym_interface] = "interface",
    [anon_sym_local] = "local",
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
    [anon_sym_native] = "native",
    [anon_sym_POUNDdefine] = "#define",
    [aux_sym_predefine_token1] = "predefine_token1",
    [sym_identifier] = "identifier",
    [anon_sym_SLASH_SLASH] = "//",
    [aux_sym_comment_token1] = "comment_token1",
    [sym__eof] = "_eof",
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
    [aux_sym_init_param_dcls_repeat1] = "init_param_dcls_repeat1",
    [aux_sym_any_declarators_repeat1] = "any_declarators_repeat1",
    [aux_sym_declarators_repeat1] = "declarators_repeat1",
    [aux_sym_array_declarator_repeat1] = "array_declarator_repeat1",
    [aux_sym_enum_dcl_repeat1] = "enum_dcl_repeat1",
    [aux_sym_enumerator_repeat1] = "enumerator_repeat1",
    [aux_sym_union_def_repeat1] = "union_def_repeat1",
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
    [anon_sym_interface] = anon_sym_interface,
    [anon_sym_local] = anon_sym_local,
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
    [anon_sym_native] = anon_sym_native,
    [anon_sym_POUNDdefine] = anon_sym_POUNDdefine,
    [aux_sym_predefine_token1] = aux_sym_predefine_token1,
    [sym_identifier] = sym_identifier,
    [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
    [aux_sym_comment_token1] = aux_sym_comment_token1,
    [sym__eof] = sym__eof,
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
    [aux_sym_init_param_dcls_repeat1] = aux_sym_init_param_dcls_repeat1,
    [aux_sym_any_declarators_repeat1] = aux_sym_any_declarators_repeat1,
    [aux_sym_declarators_repeat1] = aux_sym_declarators_repeat1,
    [aux_sym_array_declarator_repeat1] = aux_sym_array_declarator_repeat1,
    [aux_sym_enum_dcl_repeat1] = aux_sym_enum_dcl_repeat1,
    [aux_sym_enumerator_repeat1] = aux_sym_enumerator_repeat1,
    [aux_sym_union_def_repeat1] = aux_sym_union_def_repeat1,
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
    [anon_sym_interface] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_local] = {
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
    [sym__eof] = {
        .visible = false,
        .named = true,
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
    [55] = 44,
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
    [81] = 80,
    [82] = 80,
    [83] = 83,
    [84] = 84,
    [85] = 85,
    [86] = 86,
    [87] = 87,
    [88] = 88,
    [89] = 89,
    [90] = 90,
    [91] = 91,
    [92] = 92,
    [93] = 93,
    [94] = 94,
    [95] = 70,
    [96] = 96,
    [97] = 67,
    [98] = 98,
    [99] = 99,
    [100] = 68,
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
    [149] = 66,
    [150] = 72,
    [151] = 151,
    [152] = 152,
    [153] = 153,
    [154] = 154,
    [155] = 155,
    [156] = 156,
    [157] = 68,
    [158] = 158,
    [159] = 159,
    [160] = 70,
    [161] = 161,
    [162] = 67,
    [163] = 163,
    [164] = 164,
    [165] = 165,
    [166] = 166,
    [167] = 77,
    [168] = 168,
    [169] = 169,
    [170] = 170,
    [171] = 171,
    [172] = 172,
    [173] = 173,
    [174] = 174,
    [175] = 175,
    [176] = 78,
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
    [193] = 66,
    [194] = 194,
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
    [208] = 208,
    [209] = 209,
    [210] = 210,
    [211] = 211,
    [212] = 212,
    [213] = 213,
    [214] = 214,
    [215] = 215,
    [216] = 216,
    [217] = 217,
    [218] = 218,
    [219] = 72,
    [220] = 220,
    [221] = 221,
    [222] = 222,
    [223] = 223,
    [224] = 223,
    [225] = 223,
    [226] = 226,
    [227] = 227,
    [228] = 228,
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
    [312] = 215,
    [313] = 313,
    [314] = 78,
    [315] = 315,
    [316] = 316,
    [317] = 77,
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
    [367] = 367,
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
    [535] = 450,
    [536] = 446,
    [537] = 487,
    [538] = 464,
    [539] = 539,
    [540] = 450,
    [541] = 464,
    [542] = 542,
    [543] = 543,
    [544] = 544,
};

static inline bool sym_number_literal_character_set_1(int32_t c) {
    return (c < 'b' ? (c < 'L' ? (c < 'D' ? c == 'B' : c <= 'F') : (c <= 'L' || (c < 'W' ? c == 'U' : c <= 'W'))) : (c <= 'b' || (c < 'u' ? (c < 'l' ? (c >= 'd' && c <= 'f') : c <= 'l') : (c <= 'u' || c == 'w'))));
}

static inline bool sym_number_literal_character_set_2(int32_t c) {
    return (c < 'b' ? (c < 'L' ? (c < 'D' ? c == 'B' : (c <= 'D' || c == 'F')) : (c <= 'L' || (c < 'W' ? c == 'U' : c <= 'W'))) : (c <= 'b' || (c < 'l' ? (c < 'f' ? c == 'd' : c <= 'f') : (c <= 'l' || (c < 'w' ? c == 'u' : c <= 'w')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
    START_LEXER();
    eof = lexer->eof(lexer);
    switch(state) {
        case 0:
            if(eof)
                ADVANCE(408);
            if(lookahead == '"')
                ADVANCE(483);
            if(lookahead == '#')
                ADVANCE(129);
            if(lookahead == '$')
                ADVANCE(468);
            if(lookahead == '%')
                ADVANCE(477);
            if(lookahead == '\'')
                ADVANCE(485);
            if(lookahead == '(')
                ADVANCE(478);
            if(lookahead == ')')
                ADVANCE(479);
            if(lookahead == '*')
                ADVANCE(475);
            if(lookahead == '+')
                ADVANCE(471);
            if(lookahead == ',')
                ADVANCE(461);
            if(lookahead == '-')
                ADVANCE(473);
            if(lookahead == '/')
                ADVANCE(476);
            if(lookahead == ':')
                ADVANCE(563);
            if(lookahead == ';')
                ADVANCE(564);
            if(lookahead == '<')
                ADVANCE(456);
            if(lookahead == '=')
                ADVANCE(589);
            if(lookahead == '>')
                ADVANCE(458);
            if(lookahead == '@')
                ADVANCE(587);
            if(lookahead == 'F')
                ADVANCE(487);
            if(lookahead == 'L')
                ADVANCE(481);
            if(lookahead == 'T')
                ADVANCE(488);
            if(lookahead == '[')
                ADVANCE(615);
            if(lookahead == '\\')
                SKIP(401)
            if(lookahead == ']')
                ADVANCE(616);
            if(lookahead == '^')
                ADVANCE(467);
            if(lookahead == 'a')
                ADVANCE(502);
            if(lookahead == 'b')
                ADVANCE(500);
            if(lookahead == 'c')
                ADVANCE(489);
            if(lookahead == 'd')
                ADVANCE(497);
            if(lookahead == 'e')
                ADVANCE(504);
            if(lookahead == 'f')
                ADVANCE(492);
            if(lookahead == 'g')
                ADVANCE(499);
            if(lookahead == 'i')
                ADVANCE(503);
            if(lookahead == 'l')
                ADVANCE(505);
            if(lookahead == 'm')
                ADVANCE(490);
            if(lookahead == 'n')
                ADVANCE(494);
            if(lookahead == 'o')
                ADVANCE(496);
            if(lookahead == 'p')
                ADVANCE(506);
            if(lookahead == 'r')
                ADVANCE(493);
            if(lookahead == 's')
                ADVANCE(498);
            if(lookahead == 't')
                ADVANCE(507);
            if(lookahead == 'u')
                ADVANCE(501);
            if(lookahead == 'v')
                ADVANCE(491);
            if(lookahead == 'w')
                ADVANCE(495);
            if(lookahead == '{')
                ADVANCE(557);
            if(lookahead == '|')
                ADVANCE(466);
            if(lookahead == '}')
                ADVANCE(558);
            if(lookahead == '~')
                ADVANCE(480);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(0)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= '_') ||
               ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(486);
            END_STATE();
        case 1:
            if(lookahead == '\n')
                SKIP(57)
            END_STATE();
        case 2:
            if(lookahead == '\n')
                SKIP(57)
            if(lookahead == '\r')
                SKIP(1)
            END_STATE();
        case 3:
            if(lookahead == '\n')
                SKIP(60)
            END_STATE();
        case 4:
            if(lookahead == '\n')
                SKIP(60)
            if(lookahead == '\r')
                SKIP(3)
            END_STATE();
        case 5:
            if(lookahead == '\n')
                SKIP(49)
            END_STATE();
        case 6:
            if(lookahead == '\n')
                SKIP(49)
            if(lookahead == '\r')
                SKIP(5)
            END_STATE();
        case 7:
            if(lookahead == '\n')
                SKIP(61)
            END_STATE();
        case 8:
            if(lookahead == '\n')
                SKIP(61)
            if(lookahead == '\r')
                SKIP(7)
            END_STATE();
        case 9:
            if(lookahead == '\n')
                SKIP(62)
            END_STATE();
        case 10:
            if(lookahead == '\n')
                SKIP(62)
            if(lookahead == '\r')
                SKIP(9)
            END_STATE();
        case 11:
            if(lookahead == '\n')
                SKIP(63)
            END_STATE();
        case 12:
            if(lookahead == '\n')
                SKIP(63)
            if(lookahead == '\r')
                SKIP(11)
            END_STATE();
        case 13:
            if(lookahead == '\n')
                SKIP(53)
            END_STATE();
        case 14:
            if(lookahead == '\n')
                SKIP(53)
            if(lookahead == '\r')
                SKIP(13)
            END_STATE();
        case 15:
            if(lookahead == '\n')
                SKIP(64)
            END_STATE();
        case 16:
            if(lookahead == '\n')
                SKIP(64)
            if(lookahead == '\r')
                SKIP(15)
            END_STATE();
        case 17:
            if(lookahead == '\n')
                SKIP(65)
            END_STATE();
        case 18:
            if(lookahead == '\n')
                SKIP(65)
            if(lookahead == '\r')
                SKIP(17)
            END_STATE();
        case 19:
            if(lookahead == '\n')
                SKIP(66)
            END_STATE();
        case 20:
            if(lookahead == '\n')
                SKIP(66)
            if(lookahead == '\r')
                SKIP(19)
            END_STATE();
        case 21:
            if(lookahead == '\n')
                SKIP(50)
            END_STATE();
        case 22:
            if(lookahead == '\n')
                SKIP(50)
            if(lookahead == '\r')
                SKIP(21)
            END_STATE();
        case 23:
            if(lookahead == '\n')
                SKIP(51)
            END_STATE();
        case 24:
            if(lookahead == '\n')
                SKIP(51)
            if(lookahead == '\r')
                SKIP(23)
            END_STATE();
        case 25:
            if(lookahead == '\n')
                SKIP(52)
            END_STATE();
        case 26:
            if(lookahead == '\n')
                SKIP(52)
            if(lookahead == '\r')
                SKIP(25)
            END_STATE();
        case 27:
            if(lookahead == '\n')
                SKIP(55)
            END_STATE();
        case 28:
            if(lookahead == '\n')
                SKIP(55)
            if(lookahead == '\r')
                SKIP(27)
            END_STATE();
        case 29:
            if(lookahead == '\n')
                SKIP(54)
            END_STATE();
        case 30:
            if(lookahead == '\n')
                SKIP(54)
            if(lookahead == '\r')
                SKIP(29)
            END_STATE();
        case 31:
            if(lookahead == '\n')
                SKIP(67)
            END_STATE();
        case 32:
            if(lookahead == '\n')
                SKIP(67)
            if(lookahead == '\r')
                SKIP(31)
            END_STATE();
        case 33:
            if(lookahead == '\n')
                SKIP(56)
            END_STATE();
        case 34:
            if(lookahead == '\n')
                SKIP(56)
            if(lookahead == '\r')
                SKIP(33)
            END_STATE();
        case 35:
            if(lookahead == '\n')
                SKIP(68)
            END_STATE();
        case 36:
            if(lookahead == '\n')
                SKIP(68)
            if(lookahead == '\r')
                SKIP(35)
            END_STATE();
        case 37:
            if(lookahead == '\n')
                ADVANCE(542);
            if(lookahead == '\r')
                ADVANCE(40);
            if(lookahead == '/')
                ADVANCE(551);
            if(lookahead == '\\')
                ADVANCE(549);
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                SKIP(72)
            if(lookahead != 0)
                ADVANCE(552);
            END_STATE();
        case 38:
            if(lookahead == '\n')
                ADVANCE(542);
            if(lookahead == '\r')
                ADVANCE(39);
            if(lookahead == '/')
                ADVANCE(59);
            if(lookahead == '\\')
                SKIP(45)
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                SKIP(71)
            END_STATE();
        case 39:
            if(lookahead == '\n')
                ADVANCE(542);
            if(lookahead == '/')
                ADVANCE(59);
            if(lookahead == '\\')
                SKIP(45)
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(71)
            END_STATE();
        case 40:
            if(lookahead == '\n')
                ADVANCE(542);
            if(lookahead == '/')
                ADVANCE(551);
            if(lookahead == '\\')
                ADVANCE(549);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(72)
            if(lookahead != 0)
                ADVANCE(552);
            END_STATE();
        case 41:
            if(lookahead == '\n')
                SKIP(69)
            END_STATE();
        case 42:
            if(lookahead == '\n')
                SKIP(69)
            if(lookahead == '\r')
                SKIP(41)
            END_STATE();
        case 43:
            if(lookahead == '\n')
                ADVANCE(851);
            if(lookahead == '\r')
                ADVANCE(850);
            if(lookahead == '\\')
                ADVANCE(854);
            if(lookahead != 0)
                ADVANCE(853);
            END_STATE();
        case 44:
            if(lookahead == '\n')
                SKIP(71)
            END_STATE();
        case 45:
            if(lookahead == '\n')
                SKIP(71)
            if(lookahead == '\r')
                SKIP(44)
            END_STATE();
        case 46:
            if(lookahead == '\n')
                SKIP(70)
            END_STATE();
        case 47:
            if(lookahead == '\n')
                SKIP(70)
            if(lookahead == '\r')
                SKIP(46)
            END_STATE();
        case 48:
            if(lookahead == ' ')
                ADVANCE(241);
            END_STATE();
        case 49:
            if(lookahead == '"')
                ADVANCE(483);
            if(lookahead == '\'')
                ADVANCE(485);
            if(lookahead == '(')
                ADVANCE(478);
            if(lookahead == '+')
                ADVANCE(472);
            if(lookahead == '-')
                ADVANCE(474);
            if(lookahead == '.')
                ADVANCE(393);
            if(lookahead == '/')
                ADVANCE(59);
            if(lookahead == '0')
                ADVANCE(519);
            if(lookahead == ':')
                ADVANCE(81);
            if(lookahead == 'F')
                ADVANCE(642);
            if(lookahead == 'L')
                ADVANCE(482);
            if(lookahead == 'T')
                ADVANCE(646);
            if(lookahead == '\\')
                SKIP(6)
            if(lookahead == 'a')
                ADVANCE(755);
            if(lookahead == 'b')
                ADVANCE(774);
            if(lookahead == 'c')
                ADVANCE(719);
            if(lookahead == 'd')
                ADVANCE(770);
            if(lookahead == 'f')
                ADVANCE(722);
            if(lookahead == 'i')
                ADVANCE(759);
            if(lookahead == 'l')
                ADVANCE(773);
            if(lookahead == 'm')
                ADVANCE(649);
            if(lookahead == 'o')
                ADVANCE(672);
            if(lookahead == 's')
                ADVANCE(684);
            if(lookahead == 'u')
                ADVANCE(735);
            if(lookahead == 'w')
                ADVANCE(667);
            if(lookahead == '~')
                ADVANCE(480);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(49)
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(523);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 50:
            if(lookahead == '"')
                ADVANCE(483);
            if(lookahead == '\'')
                ADVANCE(485);
            if(lookahead == '(')
                ADVANCE(478);
            if(lookahead == '+')
                ADVANCE(472);
            if(lookahead == '-')
                ADVANCE(474);
            if(lookahead == '.')
                ADVANCE(393);
            if(lookahead == '/')
                ADVANCE(59);
            if(lookahead == '0')
                ADVANCE(519);
            if(lookahead == ':')
                ADVANCE(81);
            if(lookahead == 'F')
                ADVANCE(642);
            if(lookahead == 'L')
                ADVANCE(482);
            if(lookahead == 'T')
                ADVANCE(646);
            if(lookahead == '\\')
                SKIP(22)
            if(lookahead == '~')
                ADVANCE(480);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(50)
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(523);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 51:
            if(lookahead == '$')
                ADVANCE(468);
            if(lookahead == '%')
                ADVANCE(477);
            if(lookahead == '(')
                ADVANCE(478);
            if(lookahead == ')')
                ADVANCE(479);
            if(lookahead == '*')
                ADVANCE(475);
            if(lookahead == '+')
                ADVANCE(471);
            if(lookahead == ',')
                ADVANCE(461);
            if(lookahead == '-')
                ADVANCE(473);
            if(lookahead == '/')
                ADVANCE(476);
            if(lookahead == ':')
                ADVANCE(563);
            if(lookahead == ';')
                ADVANCE(564);
            if(lookahead == '<')
                ADVANCE(456);
            if(lookahead == '>')
                ADVANCE(458);
            if(lookahead == '@')
                ADVANCE(586);
            if(lookahead == '\\')
                SKIP(24)
            if(lookahead == ']')
                ADVANCE(616);
            if(lookahead == '^')
                ADVANCE(467);
            if(lookahead == 'b')
                ADVANCE(215);
            if(lookahead == 'i')
                ADVANCE(274);
            if(lookahead == 'l')
                ADVANCE(279);
            if(lookahead == 's')
                ADVANCE(355);
            if(lookahead == '{')
                ADVANCE(557);
            if(lookahead == '|')
                ADVANCE(466);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(51)
            END_STATE();
        case 52:
            if(lookahead == '$')
                ADVANCE(468);
            if(lookahead == ')')
                ADVANCE(479);
            if(lookahead == ',')
                ADVANCE(461);
            if(lookahead == '/')
                ADVANCE(59);
            if(lookahead == ':')
                ADVANCE(562);
            if(lookahead == ';')
                ADVANCE(564);
            if(lookahead == '>')
                ADVANCE(457);
            if(lookahead == '\\')
                SKIP(26)
            if(lookahead == ']')
                ADVANCE(616);
            if(lookahead == '^')
                ADVANCE(467);
            if(lookahead == 'i')
                ADVANCE(249);
            if(lookahead == 'o')
                ADVANCE(371);
            if(lookahead == '|')
                ADVANCE(466);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(52)
            END_STATE();
        case 53:
            if(lookahead == '(')
                ADVANCE(478);
            if(lookahead == ',')
                ADVANCE(461);
            if(lookahead == '/')
                ADVANCE(59);
            if(lookahead == ':')
                ADVANCE(81);
            if(lookahead == '>')
                ADVANCE(457);
            if(lookahead == '@')
                ADVANCE(586);
            if(lookahead == '\\')
                SKIP(14)
            if(lookahead == 'a')
                ADVANCE(755);
            if(lookahead == 'b')
                ADVANCE(774);
            if(lookahead == 'c')
                ADVANCE(719);
            if(lookahead == 'd')
                ADVANCE(770);
            if(lookahead == 'f')
                ADVANCE(722);
            if(lookahead == 'i')
                ADVANCE(759);
            if(lookahead == 'l')
                ADVANCE(773);
            if(lookahead == 'm')
                ADVANCE(649);
            if(lookahead == 'o')
                ADVANCE(672);
            if(lookahead == 's')
                ADVANCE(684);
            if(lookahead == 'u')
                ADVANCE(735);
            if(lookahead == 'w')
                ADVANCE(667);
            if(lookahead == '}')
                ADVANCE(558);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(53)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 54:
            if(lookahead == '(')
                ADVANCE(478);
            if(lookahead == ',')
                ADVANCE(461);
            if(lookahead == '/')
                ADVANCE(59);
            if(lookahead == ':')
                ADVANCE(81);
            if(lookahead == '>')
                ADVANCE(457);
            if(lookahead == '@')
                ADVANCE(586);
            if(lookahead == '\\')
                SKIP(30)
            if(lookahead == '}')
                ADVANCE(558);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(54)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 55:
            if(lookahead == ')')
                ADVANCE(479);
            if(lookahead == ',')
                ADVANCE(461);
            if(lookahead == '/')
                ADVANCE(59);
            if(lookahead == ':')
                ADVANCE(81);
            if(lookahead == ';')
                ADVANCE(564);
            if(lookahead == '<')
                ADVANCE(455);
            if(lookahead == '>')
                ADVANCE(457);
            if(lookahead == '@')
                ADVANCE(140);
            if(lookahead == '\\')
                SKIP(28)
            if(lookahead == '}')
                ADVANCE(558);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(55)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 56:
            if(lookahead == ')')
                ADVANCE(479);
            if(lookahead == '/')
                ADVANCE(59);
            if(lookahead == '\\')
                SKIP(34)
            if(lookahead == 'i')
                ADVANCE(254);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(56)
            END_STATE();
        case 57:
            if(lookahead == ',')
                ADVANCE(461);
            if(lookahead == '/')
                ADVANCE(59);
            if(lookahead == ':')
                ADVANCE(81);
            if(lookahead == '<')
                ADVANCE(455);
            if(lookahead == '>')
                ADVANCE(457);
            if(lookahead == '@')
                ADVANCE(588);
            if(lookahead == '\\')
                SKIP(2)
            if(lookahead == ']')
                ADVANCE(616);
            if(lookahead == 'a')
                ADVANCE(754);
            if(lookahead == 'b')
                ADVANCE(724);
            if(lookahead == 'c')
                ADVANCE(718);
            if(lookahead == 'd')
                ADVANCE(770);
            if(lookahead == 'e')
                ADVANCE(757);
            if(lookahead == 'f')
                ADVANCE(662);
            if(lookahead == 'i')
                ADVANCE(759);
            if(lookahead == 'l')
                ADVANCE(773);
            if(lookahead == 'm')
                ADVANCE(649);
            if(lookahead == 'n')
                ADVANCE(654);
            if(lookahead == 'o')
                ADVANCE(672);
            if(lookahead == 'p')
                ADVANCE(789);
            if(lookahead == 'r')
                ADVANCE(699);
            if(lookahead == 's')
                ADVANCE(682);
            if(lookahead == 't')
                ADVANCE(841);
            if(lookahead == 'u')
                ADVANCE(734);
            if(lookahead == 'v')
                ADVANCE(772);
            if(lookahead == 'w')
                ADVANCE(667);
            if(lookahead == '{')
                ADVANCE(557);
            if(lookahead == '}')
                ADVANCE(558);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(57)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 58:
            if(lookahead == '.')
                ADVANCE(393);
            if(lookahead == '0')
                ADVANCE(516);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(518);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(532);
            END_STATE();
        case 59:
            if(lookahead == '/')
                ADVANCE(847);
            END_STATE();
        case 60:
            if(lookahead == '/')
                ADVANCE(59);
            if(lookahead == ':')
                ADVANCE(81);
            if(lookahead == '@')
                ADVANCE(588);
            if(lookahead == '\\')
                SKIP(4)
            if(lookahead == 'a')
                ADVANCE(754);
            if(lookahead == 'b')
                ADVANCE(724);
            if(lookahead == 'c')
                ADVANCE(718);
            if(lookahead == 'd')
                ADVANCE(770);
            if(lookahead == 'e')
                ADVANCE(757);
            if(lookahead == 'f')
                ADVANCE(722);
            if(lookahead == 'i')
                ADVANCE(759);
            if(lookahead == 'l')
                ADVANCE(773);
            if(lookahead == 'm')
                ADVANCE(649);
            if(lookahead == 'n')
                ADVANCE(654);
            if(lookahead == 'o')
                ADVANCE(672);
            if(lookahead == 'r')
                ADVANCE(699);
            if(lookahead == 's')
                ADVANCE(682);
            if(lookahead == 't')
                ADVANCE(841);
            if(lookahead == 'u')
                ADVANCE(734);
            if(lookahead == 'v')
                ADVANCE(772);
            if(lookahead == 'w')
                ADVANCE(667);
            if(lookahead == '}')
                ADVANCE(558);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(60)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 61:
            if(lookahead == '/')
                ADVANCE(59);
            if(lookahead == ':')
                ADVANCE(81);
            if(lookahead == '@')
                ADVANCE(588);
            if(lookahead == '\\')
                SKIP(8)
            if(lookahead == 'a')
                ADVANCE(755);
            if(lookahead == 'b')
                ADVANCE(724);
            if(lookahead == 'c')
                ADVANCE(655);
            if(lookahead == 'd')
                ADVANCE(696);
            if(lookahead == 'e')
                ADVANCE(758);
            if(lookahead == 'f')
                ADVANCE(722);
            if(lookahead == 'i')
                ADVANCE(759);
            if(lookahead == 'l')
                ADVANCE(773);
            if(lookahead == 'm')
                ADVANCE(649);
            if(lookahead == 'o')
                ADVANCE(672);
            if(lookahead == 's')
                ADVANCE(682);
            if(lookahead == 'u')
                ADVANCE(734);
            if(lookahead == 'w')
                ADVANCE(667);
            if(lookahead == '}')
                ADVANCE(558);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(61)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 62:
            if(lookahead == '/')
                ADVANCE(59);
            if(lookahead == ':')
                ADVANCE(81);
            if(lookahead == '@')
                ADVANCE(588);
            if(lookahead == '\\')
                SKIP(10)
            if(lookahead == 'a')
                ADVANCE(755);
            if(lookahead == 'b')
                ADVANCE(724);
            if(lookahead == 'c')
                ADVANCE(719);
            if(lookahead == 'd')
                ADVANCE(770);
            if(lookahead == 'e')
                ADVANCE(758);
            if(lookahead == 'f')
                ADVANCE(722);
            if(lookahead == 'i')
                ADVANCE(759);
            if(lookahead == 'l')
                ADVANCE(773);
            if(lookahead == 'm')
                ADVANCE(649);
            if(lookahead == 'o')
                ADVANCE(672);
            if(lookahead == 's')
                ADVANCE(682);
            if(lookahead == 'u')
                ADVANCE(734);
            if(lookahead == 'w')
                ADVANCE(667);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(62)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 63:
            if(lookahead == '/')
                ADVANCE(59);
            if(lookahead == ':')
                ADVANCE(81);
            if(lookahead == '@')
                ADVANCE(198);
            if(lookahead == '\\')
                SKIP(12)
            if(lookahead == 'a')
                ADVANCE(755);
            if(lookahead == 'b')
                ADVANCE(774);
            if(lookahead == 'c')
                ADVANCE(718);
            if(lookahead == 'd')
                ADVANCE(770);
            if(lookahead == 'e')
                ADVANCE(758);
            if(lookahead == 'f')
                ADVANCE(722);
            if(lookahead == 'i')
                ADVANCE(759);
            if(lookahead == 'l')
                ADVANCE(773);
            if(lookahead == 'o')
                ADVANCE(672);
            if(lookahead == 's')
                ADVANCE(684);
            if(lookahead == 't')
                ADVANCE(841);
            if(lookahead == 'u')
                ADVANCE(735);
            if(lookahead == 'w')
                ADVANCE(667);
            if(lookahead == '}')
                ADVANCE(558);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(63)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 64:
            if(lookahead == '/')
                ADVANCE(59);
            if(lookahead == ':')
                ADVANCE(81);
            if(lookahead == '\\')
                SKIP(16)
            if(lookahead == 'a')
                ADVANCE(755);
            if(lookahead == 'b')
                ADVANCE(774);
            if(lookahead == 'c')
                ADVANCE(718);
            if(lookahead == 'd')
                ADVANCE(770);
            if(lookahead == 'e')
                ADVANCE(756);
            if(lookahead == 'f')
                ADVANCE(740);
            if(lookahead == 'i')
                ADVANCE(765);
            if(lookahead == 'l')
                ADVANCE(773);
            if(lookahead == 'o')
                ADVANCE(672);
            if(lookahead == 's')
                ADVANCE(683);
            if(lookahead == 't')
                ADVANCE(842);
            if(lookahead == 'u')
                ADVANCE(734);
            if(lookahead == 'v')
                ADVANCE(658);
            if(lookahead == 'w')
                ADVANCE(668);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(64)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 65:
            if(lookahead == '/')
                ADVANCE(59);
            if(lookahead == ':')
                ADVANCE(81);
            if(lookahead == '\\')
                SKIP(18)
            if(lookahead == 'b')
                ADVANCE(774);
            if(lookahead == 'c')
                ADVANCE(719);
            if(lookahead == 'd')
                ADVANCE(770);
            if(lookahead == 'f')
                ADVANCE(722);
            if(lookahead == 'i')
                ADVANCE(759);
            if(lookahead == 'l')
                ADVANCE(773);
            if(lookahead == 'o')
                ADVANCE(672);
            if(lookahead == 's')
                ADVANCE(684);
            if(lookahead == 'u')
                ADVANCE(735);
            if(lookahead == 'w')
                ADVANCE(667);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(65)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 66:
            if(lookahead == '/')
                ADVANCE(59);
            if(lookahead == ':')
                ADVANCE(81);
            if(lookahead == '\\')
                SKIP(20)
            if(lookahead == 'b')
                ADVANCE(774);
            if(lookahead == 'c')
                ADVANCE(719);
            if(lookahead == 'i')
                ADVANCE(759);
            if(lookahead == 'l')
                ADVANCE(781);
            if(lookahead == 's')
                ADVANCE(720);
            if(lookahead == 'u')
                ADVANCE(735);
            if(lookahead == 'w')
                ADVANCE(668);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(66)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 67:
            if(lookahead == '/')
                ADVANCE(59);
            if(lookahead == ':')
                ADVANCE(562);
            if(lookahead == ';')
                ADVANCE(564);
            if(lookahead == '\\')
                SKIP(32)
            if(lookahead == '{')
                ADVANCE(557);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(67)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 68:
            if(lookahead == '/')
                ADVANCE(59);
            if(lookahead == ';')
                ADVANCE(564);
            if(lookahead == '\\')
                SKIP(36)
            if(lookahead == 's')
                ADVANCE(836);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(68)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 69:
            if(lookahead == '/')
                ADVANCE(59);
            if(lookahead == '\\')
                SKIP(42)
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(69)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(486);
            END_STATE();
        case 70:
            if(lookahead == '/')
                ADVANCE(59);
            if(lookahead == '\\')
                SKIP(47)
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(70)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(484);
            END_STATE();
        case 71:
            if(lookahead == '/')
                ADVANCE(59);
            if(lookahead == '\\')
                SKIP(45)
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(71)
            END_STATE();
        case 72:
            if(lookahead == '/')
                ADVANCE(551);
            if(lookahead == '\\')
                ADVANCE(549);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(72)
            if(lookahead != 0)
                ADVANCE(552);
            END_STATE();
        case 73:
            if(lookahead == '1')
                ADVANCE(79);
            if(lookahead == '3')
                ADVANCE(75);
            if(lookahead == '6')
                ADVANCE(77);
            if(lookahead == '8')
                ADVANCE(422);
            END_STATE();
        case 74:
            if(lookahead == '1')
                ADVANCE(80);
            if(lookahead == '3')
                ADVANCE(76);
            if(lookahead == '6')
                ADVANCE(78);
            if(lookahead == '8')
                ADVANCE(430);
            if(lookahead == 'e')
                ADVANCE(318);
            END_STATE();
        case 75:
            if(lookahead == '2')
                ADVANCE(436);
            END_STATE();
        case 76:
            if(lookahead == '2')
                ADVANCE(417);
            END_STATE();
        case 77:
            if(lookahead == '4')
                ADVANCE(439);
            END_STATE();
        case 78:
            if(lookahead == '4')
                ADVANCE(420);
            END_STATE();
        case 79:
            if(lookahead == '6')
                ADVANCE(433);
            END_STATE();
        case 80:
            if(lookahead == '6')
                ADVANCE(411);
            END_STATE();
        case 81:
            if(lookahead == ':')
                ADVANCE(450);
            END_STATE();
        case 82:
            if(lookahead == '<')
                ADVANCE(470);
            END_STATE();
        case 83:
            if(lookahead == 'E')
                ADVANCE(508);
            END_STATE();
        case 84:
            if(lookahead == 'E')
                ADVANCE(510);
            END_STATE();
        case 85:
            if(lookahead == 'L')
                ADVANCE(86);
            END_STATE();
        case 86:
            if(lookahead == 'S')
                ADVANCE(84);
            END_STATE();
        case 87:
            if(lookahead == 'U')
                ADVANCE(83);
            END_STATE();
        case 88:
            if(lookahead == '_')
                ADVANCE(272);
            END_STATE();
        case 89:
            if(lookahead == '_')
                ADVANCE(239);
            END_STATE();
        case 90:
            if(lookahead == '_')
                ADVANCE(243);
            END_STATE();
        case 91:
            if(lookahead == 'a')
                ADVANCE(327);
            if(lookahead == 'o')
                ADVANCE(255);
            END_STATE();
        case 92:
            if(lookahead == 'a')
                ADVANCE(231);
            END_STATE();
        case 93:
            if(lookahead == 'a')
                ADVANCE(139);
            END_STATE();
        case 94:
            if(lookahead == 'a')
                ADVANCE(247);
            END_STATE();
        case 95:
            if(lookahead == 'a')
                ADVANCE(217);
            END_STATE();
        case 96:
            if(lookahead == 'a')
                ADVANCE(353);
            END_STATE();
        case 97:
            if(lookahead == 'a')
                ADVANCE(320);
            END_STATE();
        case 98:
            if(lookahead == 'a')
                ADVANCE(305);
            END_STATE();
        case 99:
            if(lookahead == 'a')
                ADVANCE(321);
            END_STATE();
        case 100:
            if(lookahead == 'a')
                ADVANCE(226);
            END_STATE();
        case 101:
            if(lookahead == 'a')
                ADVANCE(306);
            END_STATE();
        case 102:
            if(lookahead == 'a')
                ADVANCE(372);
            END_STATE();
        case 103:
            if(lookahead == 'a')
                ADVANCE(228);
            END_STATE();
        case 104:
            if(lookahead == 'a')
                ADVANCE(337);
            END_STATE();
        case 105:
            if(lookahead == 'a')
                ADVANCE(227);
            END_STATE();
        case 106:
            if(lookahead == 'a')
                ADVANCE(251);
            END_STATE();
        case 107:
            if(lookahead == 'a')
                ADVANCE(248);
            END_STATE();
        case 108:
            if(lookahead == 'a')
                ADVANCE(358);
            END_STATE();
        case 109:
            if(lookahead == 'a')
                ADVANCE(377);
            END_STATE();
        case 110:
            if(lookahead == 'a')
                ADVANCE(128);
            END_STATE();
        case 111:
            if(lookahead == 'a')
                ADVANCE(218);
            END_STATE();
        case 112:
            if(lookahead == 'a')
                ADVANCE(366);
            END_STATE();
        case 113:
            if(lookahead == 'a')
                ADVANCE(219);
            END_STATE();
        case 114:
            if(lookahead == 'b')
                ADVANCE(233);
            END_STATE();
        case 115:
            if(lookahead == 'b')
                ADVANCE(234);
            END_STATE();
        case 116:
            if(lookahead == 'b')
                ADVANCE(379);
            END_STATE();
        case 117:
            if(lookahead == 'b')
                ADVANCE(237);
            END_STATE();
        case 118:
            if(lookahead == 'c')
                ADVANCE(607);
            END_STATE();
        case 119:
            if(lookahead == 'c')
                ADVANCE(195);
            END_STATE();
        case 120:
            if(lookahead == 'c')
                ADVANCE(161);
            END_STATE();
        case 121:
            if(lookahead == 'c')
                ADVANCE(352);
            END_STATE();
        case 122:
            if(lookahead == 'c')
                ADVANCE(364);
            END_STATE();
        case 123:
            if(lookahead == 'c')
                ADVANCE(100);
            END_STATE();
        case 124:
            if(lookahead == 'c')
                ADVANCE(100);
            if(lookahead == 'n')
                ADVANCE(186);
            END_STATE();
        case 125:
            if(lookahead == 'c')
                ADVANCE(100);
            if(lookahead == 'n')
                ADVANCE(192);
            END_STATE();
        case 126:
            if(lookahead == 'c')
                ADVANCE(149);
            END_STATE();
        case 127:
            if(lookahead == 'c')
                ADVANCE(342);
            END_STATE();
        case 128:
            if(lookahead == 'c')
                ADVANCE(155);
            END_STATE();
        case 129:
            if(lookahead == 'd')
                ADVANCE(543);
            if(lookahead == '\t' ||
               lookahead == ' ')
                ADVANCE(391);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(548);
            END_STATE();
        case 130:
            if(lookahead == 'd')
                ADVANCE(565);
            END_STATE();
        case 131:
            if(lookahead == 'd')
                ADVANCE(426);
            END_STATE();
        case 132:
            if(lookahead == 'd')
                ADVANCE(580);
            END_STATE();
        case 133:
            if(lookahead == 'd')
                ADVANCE(48);
            END_STATE();
        case 134:
            if(lookahead == 'd')
                ADVANCE(378);
            END_STATE();
        case 135:
            if(lookahead == 'd')
                ADVANCE(294);
            if(lookahead == 'l')
                ADVANCE(285);
            END_STATE();
        case 136:
            if(lookahead == 'd')
                ADVANCE(157);
            END_STATE();
        case 137:
            if(lookahead == 'd')
                ADVANCE(157);
            if(lookahead == 'n')
                ADVANCE(94);
            END_STATE();
        case 138:
            if(lookahead == 'd')
                ADVANCE(158);
            END_STATE();
        case 139:
            if(lookahead == 'd')
                ADVANCE(283);
            END_STATE();
        case 140:
            if(lookahead == 'd')
                ADVANCE(178);
            END_STATE();
        case 141:
            if(lookahead == 'e')
                ADVANCE(181);
            END_STATE();
        case 142:
            if(lookahead == 'e')
                ADVANCE(621);
            END_STATE();
        case 143:
            if(lookahead == 'e')
                ADVANCE(137);
            END_STATE();
        case 144:
            if(lookahead == 'e')
                ADVANCE(443);
            END_STATE();
        case 145:
            if(lookahead == 'e')
                ADVANCE(590);
            END_STATE();
        case 146:
            if(lookahead == 'e')
                ADVANCE(623);
            END_STATE();
        case 147:
            if(lookahead == 'e')
                ADVANCE(89);
            END_STATE();
        case 148:
            if(lookahead == 'e')
                ADVANCE(609);
            END_STATE();
        case 149:
            if(lookahead == 'e')
                ADVANCE(462);
            END_STATE();
        case 150:
            if(lookahead == 'e')
                ADVANCE(591);
            END_STATE();
        case 151:
            if(lookahead == 'e')
                ADVANCE(574);
            END_STATE();
        case 152:
            if(lookahead == 'e')
                ADVANCE(595);
            END_STATE();
        case 153:
            if(lookahead == 'e')
                ADVANCE(593);
            END_STATE();
        case 154:
            if(lookahead == 'e')
                ADVANCE(445);
            END_STATE();
        case 155:
            if(lookahead == 'e')
                ADVANCE(559);
            END_STATE();
        case 156:
            if(lookahead == 'e')
                ADVANCE(625);
            END_STATE();
        case 157:
            if(lookahead == 'e')
                ADVANCE(180);
            END_STATE();
        case 158:
            if(lookahead == 'e')
                ADVANCE(183);
            END_STATE();
        case 159:
            if(lookahead == 'e')
                ADVANCE(131);
            END_STATE();
        case 160:
            if(lookahead == 'e')
                ADVANCE(322);
            END_STATE();
        case 161:
            if(lookahead == 'e')
                ADVANCE(300);
            END_STATE();
        case 162:
            if(lookahead == 'e')
                ADVANCE(133);
            END_STATE();
        case 163:
            if(lookahead == 'e')
                ADVANCE(230);
            END_STATE();
        case 164:
            if(lookahead == 'e')
                ADVANCE(324);
            END_STATE();
        case 165:
            if(lookahead == 'e')
                ADVANCE(136);
            END_STATE();
        case 166:
            if(lookahead == 'e')
                ADVANCE(325);
            END_STATE();
        case 167:
            if(lookahead == 'e')
                ADVANCE(269);
            END_STATE();
        case 168:
            if(lookahead == 'e')
                ADVANCE(326);
            END_STATE();
        case 169:
            if(lookahead == 'e')
                ADVANCE(106);
            END_STATE();
        case 170:
            if(lookahead == 'e')
                ADVANCE(318);
            END_STATE();
        case 171:
            if(lookahead == 'e')
                ADVANCE(339);
            END_STATE();
        case 172:
            if(lookahead == 'e')
                ADVANCE(341);
            END_STATE();
        case 173:
            if(lookahead == 'e')
                ADVANCE(351);
            END_STATE();
        case 174:
            if(lookahead == 'e')
                ADVANCE(266);
            END_STATE();
        case 175:
            if(lookahead == 'e')
                ADVANCE(312);
            END_STATE();
        case 176:
            if(lookahead == 'e')
                ADVANCE(315);
            END_STATE();
        case 177:
            if(lookahead == 'e')
                ADVANCE(365);
            END_STATE();
        case 178:
            if(lookahead == 'e')
                ADVANCE(185);
            END_STATE();
        case 179:
            if(lookahead == 'e')
                ADVANCE(368);
            if(lookahead == 'h')
                ADVANCE(280);
            if(lookahead == 't')
                ADVANCE(310);
            if(lookahead == 'u')
                ADVANCE(296);
            END_STATE();
        case 180:
            if(lookahead == 'f')
                ADVANCE(613);
            END_STATE();
        case 181:
            if(lookahead == 'f')
                ADVANCE(102);
            END_STATE();
        case 182:
            if(lookahead == 'f')
                ADVANCE(211);
            if(lookahead == 'm')
                ADVANCE(99);
            if(lookahead == 's')
                ADVANCE(172);
            END_STATE();
        case 183:
            if(lookahead == 'f')
                ADVANCE(213);
            END_STATE();
        case 184:
            if(lookahead == 'f')
                ADVANCE(110);
            END_STATE();
        case 185:
            if(lookahead == 'f')
                ADVANCE(109);
            END_STATE();
        case 186:
            if(lookahead == 'g')
                ADVANCE(413);
            END_STATE();
        case 187:
            if(lookahead == 'g')
                ADVANCE(451);
            END_STATE();
        case 188:
            if(lookahead == 'g')
                ADVANCE(453);
            END_STATE();
        case 189:
            if(lookahead == 'g')
                ADVANCE(419);
            END_STATE();
        case 190:
            if(lookahead == 'g')
                ADVANCE(435);
            END_STATE();
        case 191:
            if(lookahead == 'g')
                ADVANCE(438);
            END_STATE();
        case 192:
            if(lookahead == 'g')
                ADVANCE(415);
            END_STATE();
        case 193:
            if(lookahead == 'g')
                ADVANCE(270);
            END_STATE();
        case 194:
            if(lookahead == 'g')
                ADVANCE(271);
            END_STATE();
        case 195:
            if(lookahead == 'h')
                ADVANCE(619);
            END_STATE();
        case 196:
            if(lookahead == 'h')
                ADVANCE(101);
            END_STATE();
        case 197:
            if(lookahead == 'h')
                ADVANCE(293);
            END_STATE();
        case 198:
            if(lookahead == 'i')
                ADVANCE(193);
            END_STATE();
        case 199:
            if(lookahead == 'i')
                ADVANCE(382);
            END_STATE();
        case 200:
            if(lookahead == 'i')
                ADVANCE(333);
            if(lookahead == 'o')
                ADVANCE(277);
            END_STATE();
        case 201:
            if(lookahead == 'i')
                ADVANCE(116);
            END_STATE();
        case 202:
            if(lookahead == 'i')
                ADVANCE(383);
            END_STATE();
        case 203:
            if(lookahead == 'i')
                ADVANCE(265);
            if(lookahead == 'n')
                ADVANCE(207);
            END_STATE();
        case 204:
            if(lookahead == 'i')
                ADVANCE(97);
            END_STATE();
        case 205:
            if(lookahead == 'i')
                ADVANCE(130);
            END_STATE();
        case 206:
            if(lookahead == 'i')
                ADVANCE(281);
            END_STATE();
        case 207:
            if(lookahead == 'i')
                ADVANCE(281);
            if(lookahead == 's')
                ADVANCE(216);
            END_STATE();
        case 208:
            if(lookahead == 'i')
                ADVANCE(118);
            END_STATE();
        case 209:
            if(lookahead == 'i')
                ADVANCE(257);
            if(lookahead == 'u')
                ADVANCE(127);
            END_STATE();
        case 210:
            if(lookahead == 'i')
                ADVANCE(349);
            END_STATE();
        case 211:
            if(lookahead == 'i')
                ADVANCE(163);
            END_STATE();
        case 212:
            if(lookahead == 'i')
                ADVANCE(259);
            END_STATE();
        case 213:
            if(lookahead == 'i')
                ADVANCE(268);
            END_STATE();
        case 214:
            if(lookahead == 'i')
                ADVANCE(346);
            END_STATE();
        case 215:
            if(lookahead == 'i')
                ADVANCE(350);
            END_STATE();
        case 216:
            if(lookahead == 'i')
                ADVANCE(194);
            END_STATE();
        case 217:
            if(lookahead == 'i')
                ADVANCE(328);
            END_STATE();
        case 218:
            if(lookahead == 'i')
                ADVANCE(330);
            END_STATE();
        case 219:
            if(lookahead == 'i')
                ADVANCE(331);
            END_STATE();
        case 220:
            if(lookahead == 'i')
                ADVANCE(361);
            END_STATE();
        case 221:
            if(lookahead == 'i')
                ADVANCE(286);
            END_STATE();
        case 222:
            if(lookahead == 'i')
                ADVANCE(287);
            END_STATE();
        case 223:
            if(lookahead == 'i')
                ADVANCE(367);
            END_STATE();
        case 224:
            if(lookahead == 'k')
                ADVANCE(581);
            END_STATE();
        case 225:
            if(lookahead == 'l')
                ADVANCE(204);
            END_STATE();
        case 226:
            if(lookahead == 'l')
                ADVANCE(561);
            END_STATE();
        case 227:
            if(lookahead == 'l')
                ADVANCE(617);
            END_STATE();
        case 228:
            if(lookahead == 'l')
                ADVANCE(88);
            END_STATE();
        case 229:
            if(lookahead == 'l')
                ADVANCE(387);
            END_STATE();
        case 230:
            if(lookahead == 'l')
                ADVANCE(132);
            END_STATE();
        case 231:
            if(lookahead == 'l')
                ADVANCE(380);
            END_STATE();
        case 232:
            if(lookahead == 'l')
                ADVANCE(169);
            END_STATE();
        case 233:
            if(lookahead == 'l')
                ADVANCE(208);
            END_STATE();
        case 234:
            if(lookahead == 'l')
                ADVANCE(144);
            END_STATE();
        case 235:
            if(lookahead == 'l')
                ADVANCE(145);
            END_STATE();
        case 236:
            if(lookahead == 'l')
                ADVANCE(343);
            END_STATE();
        case 237:
            if(lookahead == 'l')
                ADVANCE(154);
            END_STATE();
        case 238:
            if(lookahead == 'l')
                ADVANCE(369);
            END_STATE();
        case 239:
            if(lookahead == 'l')
                ADVANCE(220);
            END_STATE();
        case 240:
            if(lookahead == 'l')
                ADVANCE(285);
            END_STATE();
        case 241:
            if(lookahead == 'l')
                ADVANCE(289);
            if(lookahead == 's')
                ADVANCE(197);
            END_STATE();
        case 242:
            if(lookahead == 'l')
                ADVANCE(290);
            END_STATE();
        case 243:
            if(lookahead == 'l')
                ADVANCE(223);
            END_STATE();
        case 244:
            if(lookahead == 'm')
                ADVANCE(601);
            END_STATE();
        case 245:
            if(lookahead == 'm')
                ADVANCE(99);
            END_STATE();
        case 246:
            if(lookahead == 'm')
                ADVANCE(99);
            if(lookahead == 's')
                ADVANCE(172);
            END_STATE();
        case 247:
            if(lookahead == 'm')
                ADVANCE(150);
            END_STATE();
        case 248:
            if(lookahead == 'm')
                ADVANCE(168);
            END_STATE();
        case 249:
            if(lookahead == 'n')
                ADVANCE(568);
            END_STATE();
        case 250:
            if(lookahead == 'n')
                ADVANCE(599);
            END_STATE();
        case 251:
            if(lookahead == 'n')
                ADVANCE(424);
            END_STATE();
        case 252:
            if(lookahead == 'n')
                ADVANCE(555);
            END_STATE();
        case 253:
            if(lookahead == 'n')
                ADVANCE(583);
            END_STATE();
        case 254:
            if(lookahead == 'n')
                ADVANCE(567);
            END_STATE();
        case 255:
            if(lookahead == 'n')
                ADVANCE(329);
            END_STATE();
        case 256:
            if(lookahead == 'n')
                ADVANCE(370);
            if(lookahead == 'x')
                ADVANCE(120);
            END_STATE();
        case 257:
            if(lookahead == 'n')
                ADVANCE(187);
            END_STATE();
        case 258:
            if(lookahead == 'n')
                ADVANCE(261);
            END_STATE();
        case 259:
            if(lookahead == 'n')
                ADVANCE(188);
            END_STATE();
        case 260:
            if(lookahead == 'n')
                ADVANCE(189);
            END_STATE();
        case 261:
            if(lookahead == 'n')
                ADVANCE(288);
            END_STATE();
        case 262:
            if(lookahead == 'n')
                ADVANCE(190);
            END_STATE();
        case 263:
            if(lookahead == 'n')
                ADVANCE(191);
            END_STATE();
        case 264:
            if(lookahead == 'n')
                ADVANCE(229);
            END_STATE();
        case 265:
            if(lookahead == 'n')
                ADVANCE(335);
            END_STATE();
        case 266:
            if(lookahead == 'n')
                ADVANCE(359);
            END_STATE();
        case 267:
            if(lookahead == 'n')
                ADVANCE(345);
            END_STATE();
        case 268:
            if(lookahead == 'n')
                ADVANCE(156);
            END_STATE();
        case 269:
            if(lookahead == 'n')
                ADVANCE(126);
            END_STATE();
        case 270:
            if(lookahead == 'n')
                ADVANCE(282);
            END_STATE();
        case 271:
            if(lookahead == 'n')
                ADVANCE(162);
            END_STATE();
        case 272:
            if(lookahead == 'n')
                ADVANCE(107);
            END_STATE();
        case 273:
            if(lookahead == 'n')
                ADVANCE(206);
            END_STATE();
        case 274:
            if(lookahead == 'n')
                ADVANCE(362);
            END_STATE();
        case 275:
            if(lookahead == 'o')
                ADVANCE(134);
            END_STATE();
        case 276:
            if(lookahead == 'o')
                ADVANCE(255);
            END_STATE();
        case 277:
            if(lookahead == 'o')
                ADVANCE(232);
            END_STATE();
        case 278:
            if(lookahead == 'o')
                ADVANCE(104);
            END_STATE();
        case 279:
            if(lookahead == 'o')
                ADVANCE(123);
            END_STATE();
        case 280:
            if(lookahead == 'o')
                ADVANCE(313);
            END_STATE();
        case 281:
            if(lookahead == 'o')
                ADVANCE(250);
            END_STATE();
        case 282:
            if(lookahead == 'o')
                ADVANCE(314);
            END_STATE();
        case 283:
            if(lookahead == 'o')
                ADVANCE(264);
            END_STATE();
        case 284:
            if(lookahead == 'o')
                ADVANCE(307);
            END_STATE();
        case 285:
            if(lookahead == 'o')
                ADVANCE(260);
            END_STATE();
        case 286:
            if(lookahead == 'o')
                ADVANCE(252);
            END_STATE();
        case 287:
            if(lookahead == 'o')
                ADVANCE(253);
            END_STATE();
        case 288:
            if(lookahead == 'o')
                ADVANCE(357);
            END_STATE();
        case 289:
            if(lookahead == 'o')
                ADVANCE(262);
            END_STATE();
        case 290:
            if(lookahead == 'o')
                ADVANCE(263);
            END_STATE();
        case 291:
            if(lookahead == 'o')
                ADVANCE(125);
            END_STATE();
        case 292:
            if(lookahead == 'o')
                ADVANCE(316);
            END_STATE();
        case 293:
            if(lookahead == 'o')
                ADVANCE(317);
            END_STATE();
        case 294:
            if(lookahead == 'o')
                ADVANCE(381);
            END_STATE();
        case 295:
            if(lookahead == 'p')
                ADVANCE(464);
            END_STATE();
        case 296:
            if(lookahead == 'p')
                ADVANCE(302);
            END_STATE();
        case 297:
            if(lookahead == 'p')
                ADVANCE(143);
            END_STATE();
        case 298:
            if(lookahead == 'p')
                ADVANCE(152);
            END_STATE();
        case 299:
            if(lookahead == 'p')
                ADVANCE(153);
            END_STATE();
        case 300:
            if(lookahead == 'p')
                ADVANCE(356);
            END_STATE();
        case 301:
            if(lookahead == 'p')
                ADVANCE(165);
            END_STATE();
        case 302:
            if(lookahead == 'p')
                ADVANCE(292);
            END_STATE();
        case 303:
            if(lookahead == 'q')
                ADVANCE(374);
            if(lookahead == 't')
                ADVANCE(319);
            END_STATE();
        case 304:
            if(lookahead == 'r')
                ADVANCE(209);
            END_STATE();
        case 305:
            if(lookahead == 'r')
                ADVANCE(446);
            END_STATE();
        case 306:
            if(lookahead == 'r')
                ADVANCE(448);
            END_STATE();
        case 307:
            if(lookahead == 'r')
                ADVANCE(386);
            END_STATE();
        case 308:
            if(lookahead == 'r')
                ADVANCE(201);
            END_STATE();
        case 309:
            if(lookahead == 'r')
                ADVANCE(111);
            END_STATE();
        case 310:
            if(lookahead == 'r')
                ADVANCE(376);
            END_STATE();
        case 311:
            if(lookahead == 'r')
                ADVANCE(212);
            END_STATE();
        case 312:
            if(lookahead == 'r')
                ADVANCE(103);
            END_STATE();
        case 313:
            if(lookahead == 'r')
                ADVANCE(340);
            END_STATE();
        case 314:
            if(lookahead == 'r')
                ADVANCE(147);
            END_STATE();
        case 315:
            if(lookahead == 'r')
                ADVANCE(105);
            END_STATE();
        case 316:
            if(lookahead == 'r')
                ADVANCE(354);
            END_STATE();
        case 317:
            if(lookahead == 'r')
                ADVANCE(344);
            END_STATE();
        case 318:
            if(lookahead == 'r')
                ADVANCE(184);
            END_STATE();
        case 319:
            if(lookahead == 'r')
                ADVANCE(113);
            END_STATE();
        case 320:
            if(lookahead == 's')
                ADVANCE(605);
            END_STATE();
        case 321:
            if(lookahead == 's')
                ADVANCE(224);
            END_STATE();
        case 322:
            if(lookahead == 's')
                ADVANCE(571);
            END_STATE();
        case 323:
            if(lookahead == 's')
                ADVANCE(606);
            END_STATE();
        case 324:
            if(lookahead == 's')
                ADVANCE(576);
            END_STATE();
        case 325:
            if(lookahead == 's')
                ADVANCE(577);
            END_STATE();
        case 326:
            if(lookahead == 's')
                ADVANCE(618);
            END_STATE();
        case 327:
            if(lookahead == 's')
                ADVANCE(142);
            END_STATE();
        case 328:
            if(lookahead == 's')
                ADVANCE(160);
            END_STATE();
        case 329:
            if(lookahead == 's')
                ADVANCE(336);
            END_STATE();
        case 330:
            if(lookahead == 's')
                ADVANCE(164);
            END_STATE();
        case 331:
            if(lookahead == 's')
                ADVANCE(166);
            END_STATE();
        case 332:
            if(lookahead == 't')
                ADVANCE(348);
            END_STATE();
        case 333:
            if(lookahead == 't')
                ADVANCE(182);
            END_STATE();
        case 334:
            if(lookahead == 't')
                ADVANCE(569);
            END_STATE();
        case 335:
            if(lookahead == 't')
                ADVANCE(73);
            END_STATE();
        case 336:
            if(lookahead == 't')
                ADVANCE(603);
            END_STATE();
        case 337:
            if(lookahead == 't')
                ADVANCE(441);
            END_STATE();
        case 338:
            if(lookahead == 't')
                ADVANCE(570);
            END_STATE();
        case 339:
            if(lookahead == 't')
                ADVANCE(428);
            END_STATE();
        case 340:
            if(lookahead == 't')
                ADVANCE(409);
            END_STATE();
        case 341:
            if(lookahead == 't')
                ADVANCE(578);
            END_STATE();
        case 342:
            if(lookahead == 't')
                ADVANCE(597);
            END_STATE();
        case 343:
            if(lookahead == 't')
                ADVANCE(584);
            END_STATE();
        case 344:
            if(lookahead == 't')
                ADVANCE(432);
            END_STATE();
        case 345:
            if(lookahead == 't')
                ADVANCE(74);
            END_STATE();
        case 346:
            if(lookahead == 't')
                ADVANCE(246);
            END_STATE();
        case 347:
            if(lookahead == 't')
                ADVANCE(388);
            END_STATE();
        case 348:
            if(lookahead == 't')
                ADVANCE(308);
            END_STATE();
        case 349:
            if(lookahead == 't')
                ADVANCE(119);
            END_STATE();
        case 350:
            if(lookahead == 't')
                ADVANCE(245);
            END_STATE();
        case 351:
            if(lookahead == 't')
                ADVANCE(309);
            END_STATE();
        case 352:
            if(lookahead == 't')
                ADVANCE(171);
            END_STATE();
        case 353:
            if(lookahead == 't')
                ADVANCE(202);
            END_STATE();
        case 354:
            if(lookahead == 't')
                ADVANCE(323);
            END_STATE();
        case 355:
            if(lookahead == 't')
                ADVANCE(310);
            if(lookahead == 'u')
                ADVANCE(296);
            END_STATE();
        case 356:
            if(lookahead == 't')
                ADVANCE(221);
            END_STATE();
        case 357:
            if(lookahead == 't')
                ADVANCE(112);
            END_STATE();
        case 358:
            if(lookahead == 't')
                ADVANCE(148);
            END_STATE();
        case 359:
            if(lookahead == 't')
                ADVANCE(347);
            END_STATE();
        case 360:
            if(lookahead == 't')
                ADVANCE(151);
            END_STATE();
        case 361:
            if(lookahead == 't')
                ADVANCE(175);
            END_STATE();
        case 362:
            if(lookahead == 't')
                ADVANCE(170);
            END_STATE();
        case 363:
            if(lookahead == 't')
                ADVANCE(311);
            END_STATE();
        case 364:
            if(lookahead == 't')
                ADVANCE(284);
            END_STATE();
        case 365:
            if(lookahead == 't')
                ADVANCE(389);
            END_STATE();
        case 366:
            if(lookahead == 't')
                ADVANCE(222);
            END_STATE();
        case 367:
            if(lookahead == 't')
                ADVANCE(176);
            END_STATE();
        case 368:
            if(lookahead == 't')
                ADVANCE(319);
            END_STATE();
        case 369:
            if(lookahead == 't')
                ADVANCE(90);
            END_STATE();
        case 370:
            if(lookahead == 'u')
                ADVANCE(244);
            END_STATE();
        case 371:
            if(lookahead == 'u')
                ADVANCE(334);
            END_STATE();
        case 372:
            if(lookahead == 'u')
                ADVANCE(236);
            END_STATE();
        case 373:
            if(lookahead == 'u')
                ADVANCE(338);
            END_STATE();
        case 374:
            if(lookahead == 'u')
                ADVANCE(167);
            END_STATE();
        case 375:
            if(lookahead == 'u')
                ADVANCE(115);
            END_STATE();
        case 376:
            if(lookahead == 'u')
                ADVANCE(127);
            END_STATE();
        case 377:
            if(lookahead == 'u')
                ADVANCE(238);
            END_STATE();
        case 378:
            if(lookahead == 'u')
                ADVANCE(235);
            END_STATE();
        case 379:
            if(lookahead == 'u')
                ADVANCE(360);
            END_STATE();
        case 380:
            if(lookahead == 'u')
                ADVANCE(177);
            END_STATE();
        case 381:
            if(lookahead == 'u')
                ADVANCE(117);
            END_STATE();
        case 382:
            if(lookahead == 'v')
                ADVANCE(108);
            END_STATE();
        case 383:
            if(lookahead == 'v')
                ADVANCE(146);
            END_STATE();
        case 384:
            if(lookahead == 'x')
                ADVANCE(159);
            END_STATE();
        case 385:
            if(lookahead == 'y')
                ADVANCE(459);
            END_STATE();
        case 386:
            if(lookahead == 'y')
                ADVANCE(611);
            END_STATE();
        case 387:
            if(lookahead == 'y')
                ADVANCE(572);
            END_STATE();
        case 388:
            if(lookahead == 'y')
                ADVANCE(298);
            END_STATE();
        case 389:
            if(lookahead == 'y')
                ADVANCE(299);
            END_STATE();
        case 390:
            if(lookahead == 'y')
                ADVANCE(301);
            END_STATE();
        case 391:
            if(lookahead == '\t' ||
               lookahead == ' ')
                ADVANCE(391);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(548);
            END_STATE();
        case 392:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(524);
            END_STATE();
        case 393:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            END_STATE();
        case 394:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(518);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(532);
            END_STATE();
        case 395:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(526);
            END_STATE();
        case 396:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(532);
            END_STATE();
        case 397:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(514);
            END_STATE();
        case 398:
            if(lookahead != 0 &&
               lookahead != '\r' &&
               lookahead != '\\')
                ADVANCE(853);
            if(lookahead == '\r')
                ADVANCE(855);
            if(lookahead == '\\')
                ADVANCE(854);
            END_STATE();
        case 399:
            if(lookahead != 0 &&
               lookahead != '*')
                ADVANCE(552);
            END_STATE();
        case 400:
            if(eof)
                ADVANCE(408);
            if(lookahead == '\n')
                SKIP(0)
            END_STATE();
        case 401:
            if(eof)
                ADVANCE(408);
            if(lookahead == '\n')
                SKIP(0)
            if(lookahead == '\r')
                SKIP(400)
            END_STATE();
        case 402:
            if(eof)
                ADVANCE(408);
            if(lookahead == '\n')
                SKIP(406)
            END_STATE();
        case 403:
            if(eof)
                ADVANCE(408);
            if(lookahead == '\n')
                SKIP(406)
            if(lookahead == '\r')
                SKIP(402)
            END_STATE();
        case 404:
            if(eof)
                ADVANCE(408);
            if(lookahead == '\n')
                SKIP(407)
            END_STATE();
        case 405:
            if(eof)
                ADVANCE(408);
            if(lookahead == '\n')
                SKIP(407)
            if(lookahead == '\r')
                SKIP(404)
            END_STATE();
        case 406:
            if(eof)
                ADVANCE(408);
            if(lookahead == '#')
                ADVANCE(129);
            if(lookahead == '$')
                ADVANCE(468);
            if(lookahead == '%')
                ADVANCE(477);
            if(lookahead == ')')
                ADVANCE(479);
            if(lookahead == '*')
                ADVANCE(475);
            if(lookahead == '+')
                ADVANCE(471);
            if(lookahead == ',')
                ADVANCE(461);
            if(lookahead == '-')
                ADVANCE(473);
            if(lookahead == '/')
                ADVANCE(476);
            if(lookahead == ':')
                ADVANCE(563);
            if(lookahead == ';')
                ADVANCE(564);
            if(lookahead == '<')
                ADVANCE(82);
            if(lookahead == '=')
                ADVANCE(589);
            if(lookahead == '>')
                ADVANCE(458);
            if(lookahead == '@')
                ADVANCE(587);
            if(lookahead == '[')
                ADVANCE(615);
            if(lookahead == '\\')
                SKIP(403)
            if(lookahead == ']')
                ADVANCE(616);
            if(lookahead == '^')
                ADVANCE(467);
            if(lookahead == 'a')
                ADVANCE(332);
            if(lookahead == 'b')
                ADVANCE(200);
            if(lookahead == 'c')
                ADVANCE(91);
            if(lookahead == 'd')
                ADVANCE(141);
            if(lookahead == 'e')
                ADVANCE(256);
            if(lookahead == 'g')
                ADVANCE(173);
            if(lookahead == 'i')
                ADVANCE(267);
            if(lookahead == 'l')
                ADVANCE(291);
            if(lookahead == 'm')
                ADVANCE(275);
            if(lookahead == 'n')
                ADVANCE(96);
            if(lookahead == 'o')
                ADVANCE(121);
            if(lookahead == 'r')
                ADVANCE(95);
            if(lookahead == 's')
                ADVANCE(179);
            if(lookahead == 't')
                ADVANCE(390);
            if(lookahead == 'u')
                ADVANCE(203);
            if(lookahead == 'v')
                ADVANCE(92);
            if(lookahead == '{')
                ADVANCE(557);
            if(lookahead == '|')
                ADVANCE(466);
            if(lookahead == '}')
                ADVANCE(558);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(406)
            END_STATE();
        case 407:
            if(eof)
                ADVANCE(408);
            if(lookahead == '#')
                ADVANCE(138);
            if(lookahead == '$')
                ADVANCE(468);
            if(lookahead == '%')
                ADVANCE(477);
            if(lookahead == ')')
                ADVANCE(479);
            if(lookahead == '*')
                ADVANCE(475);
            if(lookahead == '+')
                ADVANCE(471);
            if(lookahead == ',')
                ADVANCE(461);
            if(lookahead == '-')
                ADVANCE(473);
            if(lookahead == '/')
                ADVANCE(476);
            if(lookahead == ':')
                ADVANCE(562);
            if(lookahead == ';')
                ADVANCE(564);
            if(lookahead == '<')
                ADVANCE(82);
            if(lookahead == '>')
                ADVANCE(458);
            if(lookahead == '@')
                ADVANCE(587);
            if(lookahead == '\\')
                SKIP(405)
            if(lookahead == ']')
                ADVANCE(616);
            if(lookahead == '^')
                ADVANCE(467);
            if(lookahead == 'a')
                ADVANCE(225);
            if(lookahead == 'b')
                ADVANCE(214);
            if(lookahead == 'c')
                ADVANCE(276);
            if(lookahead == 'e')
                ADVANCE(256);
            if(lookahead == 'i')
                ADVANCE(274);
            if(lookahead == 'l')
                ADVANCE(279);
            if(lookahead == 'm')
                ADVANCE(275);
            if(lookahead == 'n')
                ADVANCE(96);
            if(lookahead == 's')
                ADVANCE(355);
            if(lookahead == 't')
                ADVANCE(390);
            if(lookahead == 'u')
                ADVANCE(273);
            if(lookahead == 'v')
                ADVANCE(92);
            if(lookahead == '{')
                ADVANCE(557);
            if(lookahead == '|')
                ADVANCE(466);
            if(lookahead == '}')
                ADVANCE(558);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(407)
            END_STATE();
        case 408:
            ACCEPT_TOKEN(ts_builtin_sym_end);
            END_STATE();
        case 409:
            ACCEPT_TOKEN(anon_sym_short);
            END_STATE();
        case 410:
            ACCEPT_TOKEN(anon_sym_short);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 411:
            ACCEPT_TOKEN(anon_sym_int16);
            END_STATE();
        case 412:
            ACCEPT_TOKEN(anon_sym_int16);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 413:
            ACCEPT_TOKEN(anon_sym_long);
            if(lookahead == ' ')
                ADVANCE(135);
            END_STATE();
        case 414:
            ACCEPT_TOKEN(anon_sym_long);
            if(lookahead == ' ')
                ADVANCE(135);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 415:
            ACCEPT_TOKEN(anon_sym_long);
            if(lookahead == ' ')
                ADVANCE(240);
            END_STATE();
        case 416:
            ACCEPT_TOKEN(anon_sym_long);
            if(lookahead == ' ')
                ADVANCE(240);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 417:
            ACCEPT_TOKEN(anon_sym_int32);
            END_STATE();
        case 418:
            ACCEPT_TOKEN(anon_sym_int32);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 419:
            ACCEPT_TOKEN(anon_sym_longlong);
            END_STATE();
        case 420:
            ACCEPT_TOKEN(anon_sym_int64);
            END_STATE();
        case 421:
            ACCEPT_TOKEN(anon_sym_int64);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 422:
            ACCEPT_TOKEN(sym_unsigned_tiny_int);
            END_STATE();
        case 423:
            ACCEPT_TOKEN(sym_unsigned_tiny_int);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 424:
            ACCEPT_TOKEN(sym_boolean_type);
            END_STATE();
        case 425:
            ACCEPT_TOKEN(sym_boolean_type);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 426:
            ACCEPT_TOKEN(anon_sym_fixed);
            END_STATE();
        case 427:
            ACCEPT_TOKEN(anon_sym_fixed);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 428:
            ACCEPT_TOKEN(sym_octet_type);
            END_STATE();
        case 429:
            ACCEPT_TOKEN(sym_octet_type);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 430:
            ACCEPT_TOKEN(sym_signed_tiny_int);
            END_STATE();
        case 431:
            ACCEPT_TOKEN(sym_signed_tiny_int);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 432:
            ACCEPT_TOKEN(anon_sym_unsignedshort);
            END_STATE();
        case 433:
            ACCEPT_TOKEN(anon_sym_uint16);
            END_STATE();
        case 434:
            ACCEPT_TOKEN(anon_sym_uint16);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 435:
            ACCEPT_TOKEN(anon_sym_unsignedlong);
            if(lookahead == ' ')
                ADVANCE(242);
            END_STATE();
        case 436:
            ACCEPT_TOKEN(anon_sym_uint32);
            END_STATE();
        case 437:
            ACCEPT_TOKEN(anon_sym_uint32);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 438:
            ACCEPT_TOKEN(anon_sym_unsignedlonglong);
            END_STATE();
        case 439:
            ACCEPT_TOKEN(anon_sym_uint64);
            END_STATE();
        case 440:
            ACCEPT_TOKEN(anon_sym_uint64);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 441:
            ACCEPT_TOKEN(anon_sym_float);
            END_STATE();
        case 442:
            ACCEPT_TOKEN(anon_sym_float);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 443:
            ACCEPT_TOKEN(anon_sym_double);
            END_STATE();
        case 444:
            ACCEPT_TOKEN(anon_sym_double);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 445:
            ACCEPT_TOKEN(anon_sym_longdouble);
            END_STATE();
        case 446:
            ACCEPT_TOKEN(anon_sym_char);
            END_STATE();
        case 447:
            ACCEPT_TOKEN(anon_sym_char);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 448:
            ACCEPT_TOKEN(anon_sym_wchar);
            END_STATE();
        case 449:
            ACCEPT_TOKEN(anon_sym_wchar);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 450:
            ACCEPT_TOKEN(anon_sym_COLON_COLON);
            END_STATE();
        case 451:
            ACCEPT_TOKEN(anon_sym_string);
            END_STATE();
        case 452:
            ACCEPT_TOKEN(anon_sym_string);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 453:
            ACCEPT_TOKEN(anon_sym_wstring);
            END_STATE();
        case 454:
            ACCEPT_TOKEN(anon_sym_wstring);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 455:
            ACCEPT_TOKEN(anon_sym_LT);
            END_STATE();
        case 456:
            ACCEPT_TOKEN(anon_sym_LT);
            if(lookahead == '<')
                ADVANCE(470);
            END_STATE();
        case 457:
            ACCEPT_TOKEN(anon_sym_GT);
            END_STATE();
        case 458:
            ACCEPT_TOKEN(anon_sym_GT);
            if(lookahead == '>')
                ADVANCE(469);
            END_STATE();
        case 459:
            ACCEPT_TOKEN(anon_sym_any);
            END_STATE();
        case 460:
            ACCEPT_TOKEN(anon_sym_any);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 461:
            ACCEPT_TOKEN(anon_sym_COMMA);
            END_STATE();
        case 462:
            ACCEPT_TOKEN(anon_sym_sequence);
            END_STATE();
        case 463:
            ACCEPT_TOKEN(anon_sym_sequence);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 464:
            ACCEPT_TOKEN(anon_sym_map);
            END_STATE();
        case 465:
            ACCEPT_TOKEN(anon_sym_map);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 466:
            ACCEPT_TOKEN(anon_sym_PIPE);
            END_STATE();
        case 467:
            ACCEPT_TOKEN(anon_sym_CARET);
            END_STATE();
        case 468:
            ACCEPT_TOKEN(anon_sym_DOLLAR);
            END_STATE();
        case 469:
            ACCEPT_TOKEN(anon_sym_GT_GT);
            END_STATE();
        case 470:
            ACCEPT_TOKEN(anon_sym_LT_LT);
            END_STATE();
        case 471:
            ACCEPT_TOKEN(anon_sym_PLUS);
            END_STATE();
        case 472:
            ACCEPT_TOKEN(anon_sym_PLUS);
            if(lookahead == '.')
                ADVANCE(393);
            if(lookahead == '0')
                ADVANCE(520);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(524);
            END_STATE();
        case 473:
            ACCEPT_TOKEN(anon_sym_DASH);
            END_STATE();
        case 474:
            ACCEPT_TOKEN(anon_sym_DASH);
            if(lookahead == '.')
                ADVANCE(393);
            if(lookahead == '0')
                ADVANCE(520);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(524);
            END_STATE();
        case 475:
            ACCEPT_TOKEN(anon_sym_STAR);
            END_STATE();
        case 476:
            ACCEPT_TOKEN(anon_sym_SLASH);
            if(lookahead == '/')
                ADVANCE(847);
            END_STATE();
        case 477:
            ACCEPT_TOKEN(anon_sym_PERCENT);
            END_STATE();
        case 478:
            ACCEPT_TOKEN(anon_sym_LPAREN);
            END_STATE();
        case 479:
            ACCEPT_TOKEN(anon_sym_RPAREN);
            END_STATE();
        case 480:
            ACCEPT_TOKEN(anon_sym_TILDE);
            END_STATE();
        case 481:
            ACCEPT_TOKEN(anon_sym_L);
            END_STATE();
        case 482:
            ACCEPT_TOKEN(anon_sym_L);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 483:
            ACCEPT_TOKEN(anon_sym_DQUOTE);
            END_STATE();
        case 484:
            ACCEPT_TOKEN(aux_sym_string_literal_token1);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(484);
            END_STATE();
        case 485:
            ACCEPT_TOKEN(anon_sym_SQUOTE);
            END_STATE();
        case 486:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            END_STATE();
        case 487:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'A')
                ADVANCE(85);
            END_STATE();
        case 488:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'R')
                ADVANCE(87);
            END_STATE();
        case 489:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(327);
            if(lookahead == 'h')
                ADVANCE(98);
            if(lookahead == 'o')
                ADVANCE(255);
            END_STATE();
        case 490:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(295);
            if(lookahead == 'o')
                ADVANCE(134);
            END_STATE();
        case 491:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(231);
            if(lookahead == 'o')
                ADVANCE(205);
            END_STATE();
        case 492:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(122);
            if(lookahead == 'i')
                ADVANCE(384);
            if(lookahead == 'l')
                ADVANCE(278);
            END_STATE();
        case 493:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(217);
            if(lookahead == 'e')
                ADVANCE(93);
            END_STATE();
        case 494:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(353);
            END_STATE();
        case 495:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'c')
                ADVANCE(196);
            if(lookahead == 's')
                ADVANCE(363);
            END_STATE();
        case 496:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'c')
                ADVANCE(352);
            if(lookahead == 'u')
                ADVANCE(334);
            END_STATE();
        case 497:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'e')
                ADVANCE(181);
            if(lookahead == 'o')
                ADVANCE(375);
            END_STATE();
        case 498:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'e')
                ADVANCE(303);
            if(lookahead == 'h')
                ADVANCE(280);
            if(lookahead == 't')
                ADVANCE(304);
            if(lookahead == 'u')
                ADVANCE(296);
            if(lookahead == 'w')
                ADVANCE(210);
            END_STATE();
        case 499:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'e')
                ADVANCE(351);
            END_STATE();
        case 500:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'i')
                ADVANCE(333);
            if(lookahead == 'o')
                ADVANCE(277);
            END_STATE();
        case 501:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'i')
                ADVANCE(265);
            if(lookahead == 'n')
                ADVANCE(207);
            END_STATE();
        case 502:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'l')
                ADVANCE(204);
            if(lookahead == 'n')
                ADVANCE(385);
            if(lookahead == 't')
                ADVANCE(348);
            END_STATE();
        case 503:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'n')
                ADVANCE(568);
            END_STATE();
        case 504:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'n')
                ADVANCE(370);
            if(lookahead == 'v')
                ADVANCE(174);
            if(lookahead == 'x')
                ADVANCE(120);
            END_STATE();
        case 505:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'o')
                ADVANCE(124);
            END_STATE();
        case 506:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'r')
                ADVANCE(199);
            if(lookahead == 'u')
                ADVANCE(114);
            END_STATE();
        case 507:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'y')
                ADVANCE(297);
            END_STATE();
        case 508:
            ACCEPT_TOKEN(anon_sym_TRUE);
            END_STATE();
        case 509:
            ACCEPT_TOKEN(anon_sym_TRUE);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 510:
            ACCEPT_TOKEN(anon_sym_FALSE);
            END_STATE();
        case 511:
            ACCEPT_TOKEN(anon_sym_FALSE);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 512:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(393);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(536);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(512);
            if(sym_number_literal_character_set_1(lookahead))
                ADVANCE(541);
            END_STATE();
        case 513:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(397);
            if(lookahead == 'B' ||
               lookahead == 'D' ||
               lookahead == 'F' ||
               lookahead == 'b' ||
               lookahead == 'd' ||
               lookahead == 'f')
                ADVANCE(513);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(540);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(513);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 514:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(397);
            if(lookahead == 'B' ||
               lookahead == 'D' ||
               lookahead == 'F' ||
               lookahead == 'b' ||
               lookahead == 'd' ||
               lookahead == 'f')
                ADVANCE(514);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(541);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(514);
            END_STATE();
        case 515:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(394);
            if(lookahead == '.')
                ADVANCE(537);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(529);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(527);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(535);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(845);
            if(('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(530);
            if(('D' <= lookahead && lookahead <= 'F') ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(530);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(540);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(517);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 516:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(394);
            if(lookahead == '.')
                ADVANCE(537);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(531);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(528);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(536);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(396);
            if(('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(532);
            if(('D' <= lookahead && lookahead <= 'F') ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(532);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(541);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(518);
            END_STATE();
        case 517:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(394);
            if(lookahead == '.')
                ADVANCE(537);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(527);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(535);
            if(lookahead == 'A' ||
               lookahead == 'C' ||
               lookahead == 'a' ||
               lookahead == 'c')
                ADVANCE(530);
            if(('B' <= lookahead && lookahead <= 'F') ||
               ('b' <= lookahead && lookahead <= 'f'))
                ADVANCE(530);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(540);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(517);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 518:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(394);
            if(lookahead == '.')
                ADVANCE(537);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(528);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(536);
            if(lookahead == 'A' ||
               lookahead == 'C' ||
               lookahead == 'a' ||
               lookahead == 'c')
                ADVANCE(532);
            if(('B' <= lookahead && lookahead <= 'F') ||
               ('b' <= lookahead && lookahead <= 'f'))
                ADVANCE(532);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(541);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(518);
            END_STATE();
        case 519:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(392);
            if(lookahead == '.')
                ADVANCE(537);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(533);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(632);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(535);
            if(('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               ('d' <= lookahead && lookahead <= 'f') ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(540);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(523);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 520:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(392);
            if(lookahead == '.')
                ADVANCE(537);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(534);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(58);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(536);
            if(('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               ('d' <= lookahead && lookahead <= 'f') ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(541);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(524);
            END_STATE();
        case 521:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(392);
            if(lookahead == '.')
                ADVANCE(537);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(538);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(845);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(535);
            if(('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               ('d' <= lookahead && lookahead <= 'f') ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(540);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(523);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 522:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(392);
            if(lookahead == '.')
                ADVANCE(537);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(539);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(396);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(536);
            if(('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               ('d' <= lookahead && lookahead <= 'f') ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(541);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(524);
            END_STATE();
        case 523:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(392);
            if(lookahead == '.')
                ADVANCE(537);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(535);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(523);
            if(sym_number_literal_character_set_1(lookahead))
                ADVANCE(540);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 524:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(392);
            if(lookahead == '.')
                ADVANCE(537);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(536);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(524);
            if(sym_number_literal_character_set_1(lookahead))
                ADVANCE(541);
            END_STATE();
        case 525:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(395);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(397);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(525);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(536);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(526);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(541);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(526);
            END_STATE();
        case 526:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(395);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(525);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(536);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(526);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(541);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(526);
            END_STATE();
        case 527:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(396);
            if(lookahead == '.')
                ADVANCE(537);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(397);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(527);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(535);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(530);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(540);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(530);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 528:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(396);
            if(lookahead == '.')
                ADVANCE(537);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(397);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(528);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(536);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(532);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(541);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(532);
            END_STATE();
        case 529:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(396);
            if(lookahead == '.')
                ADVANCE(537);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(527);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(535);
            if(lookahead == 'A' ||
               lookahead == 'C' ||
               lookahead == 'a' ||
               lookahead == 'c')
                ADVANCE(530);
            if(('B' <= lookahead && lookahead <= 'F') ||
               ('b' <= lookahead && lookahead <= 'f'))
                ADVANCE(530);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(540);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(517);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 530:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(396);
            if(lookahead == '.')
                ADVANCE(537);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(527);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(535);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(530);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(540);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(530);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 531:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(396);
            if(lookahead == '.')
                ADVANCE(537);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(528);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(536);
            if(lookahead == 'A' ||
               lookahead == 'C' ||
               lookahead == 'a' ||
               lookahead == 'c')
                ADVANCE(532);
            if(('B' <= lookahead && lookahead <= 'F') ||
               ('b' <= lookahead && lookahead <= 'f'))
                ADVANCE(532);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(541);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(518);
            END_STATE();
        case 532:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(396);
            if(lookahead == '.')
                ADVANCE(537);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(528);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(536);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(532);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(541);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(532);
            END_STATE();
        case 533:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '.')
                ADVANCE(393);
            if(lookahead == '0')
                ADVANCE(521);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(523);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(540);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 534:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '.')
                ADVANCE(393);
            if(lookahead == '0')
                ADVANCE(522);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(524);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(541);
            END_STATE();
        case 535:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(397);
            if(lookahead == 'B' ||
               lookahead == 'D' ||
               lookahead == 'F' ||
               lookahead == 'b' ||
               lookahead == 'd' ||
               lookahead == 'f')
                ADVANCE(513);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(540);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(513);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 536:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(397);
            if(lookahead == 'B' ||
               lookahead == 'D' ||
               lookahead == 'F' ||
               lookahead == 'b' ||
               lookahead == 'd' ||
               lookahead == 'f')
                ADVANCE(514);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(541);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(514);
            END_STATE();
        case 537:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(525);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(536);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(526);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(541);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(526);
            END_STATE();
        case 538:
            ACCEPT_TOKEN(sym_number_literal);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(523);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(540);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 539:
            ACCEPT_TOKEN(sym_number_literal);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(524);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(541);
            END_STATE();
        case 540:
            ACCEPT_TOKEN(sym_number_literal);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(540);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 541:
            ACCEPT_TOKEN(sym_number_literal);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(541);
            END_STATE();
        case 542:
            ACCEPT_TOKEN(aux_sym_preproc_call_token1);
            END_STATE();
        case 543:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'e')
                ADVANCE(545);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(548);
            END_STATE();
        case 544:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'e')
                ADVANCE(626);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(548);
            END_STATE();
        case 545:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'f')
                ADVANCE(546);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(548);
            END_STATE();
        case 546:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'i')
                ADVANCE(547);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(548);
            END_STATE();
        case 547:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'n')
                ADVANCE(544);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(548);
            END_STATE();
        case 548:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(548);
            END_STATE();
        case 549:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '\n')
                SKIP(72)
            if(lookahead == '\r')
                ADVANCE(550);
            if(lookahead == '/')
                ADVANCE(399);
            if(lookahead == '\\')
                ADVANCE(553);
            if(lookahead != 0)
                ADVANCE(552);
            END_STATE();
        case 550:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '\n')
                SKIP(72)
            if(lookahead == '/')
                ADVANCE(399);
            if(lookahead == '\\')
                ADVANCE(553);
            if(lookahead != 0)
                ADVANCE(552);
            END_STATE();
        case 551:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(847);
            if(lookahead == '\\')
                ADVANCE(553);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(552);
            END_STATE();
        case 552:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(399);
            if(lookahead == '\\')
                ADVANCE(553);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(552);
            END_STATE();
        case 553:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead != 0 &&
               lookahead != '\r' &&
               lookahead != '/' &&
               lookahead != '\\')
                ADVANCE(552);
            if(lookahead == '\r')
                ADVANCE(554);
            if(lookahead == '/')
                ADVANCE(399);
            if(lookahead == '\\')
                ADVANCE(553);
            END_STATE();
        case 554:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead != 0 &&
               lookahead != '/' &&
               lookahead != '\\')
                ADVANCE(552);
            if(lookahead == '/')
                ADVANCE(399);
            if(lookahead == '\\')
                ADVANCE(553);
            END_STATE();
        case 555:
            ACCEPT_TOKEN(anon_sym_exception);
            END_STATE();
        case 556:
            ACCEPT_TOKEN(anon_sym_exception);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 557:
            ACCEPT_TOKEN(anon_sym_LBRACE);
            END_STATE();
        case 558:
            ACCEPT_TOKEN(anon_sym_RBRACE);
            END_STATE();
        case 559:
            ACCEPT_TOKEN(anon_sym_interface);
            END_STATE();
        case 560:
            ACCEPT_TOKEN(anon_sym_interface);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 561:
            ACCEPT_TOKEN(anon_sym_local);
            END_STATE();
        case 562:
            ACCEPT_TOKEN(anon_sym_COLON);
            END_STATE();
        case 563:
            ACCEPT_TOKEN(anon_sym_COLON);
            if(lookahead == ':')
                ADVANCE(450);
            END_STATE();
        case 564:
            ACCEPT_TOKEN(anon_sym_SEMI);
            END_STATE();
        case 565:
            ACCEPT_TOKEN(anon_sym_void);
            END_STATE();
        case 566:
            ACCEPT_TOKEN(anon_sym_void);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 567:
            ACCEPT_TOKEN(anon_sym_in);
            END_STATE();
        case 568:
            ACCEPT_TOKEN(anon_sym_in);
            if(lookahead == 'o')
                ADVANCE(373);
            END_STATE();
        case 569:
            ACCEPT_TOKEN(anon_sym_out);
            END_STATE();
        case 570:
            ACCEPT_TOKEN(anon_sym_inout);
            END_STATE();
        case 571:
            ACCEPT_TOKEN(anon_sym_raises);
            END_STATE();
        case 572:
            ACCEPT_TOKEN(anon_sym_readonly);
            END_STATE();
        case 573:
            ACCEPT_TOKEN(anon_sym_readonly);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 574:
            ACCEPT_TOKEN(anon_sym_attribute);
            END_STATE();
        case 575:
            ACCEPT_TOKEN(anon_sym_attribute);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 576:
            ACCEPT_TOKEN(anon_sym_getraises);
            END_STATE();
        case 577:
            ACCEPT_TOKEN(anon_sym_setraises);
            END_STATE();
        case 578:
            ACCEPT_TOKEN(anon_sym_bitset);
            END_STATE();
        case 579:
            ACCEPT_TOKEN(anon_sym_bitset);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 580:
            ACCEPT_TOKEN(anon_sym_bitfield);
            END_STATE();
        case 581:
            ACCEPT_TOKEN(anon_sym_bitmask);
            END_STATE();
        case 582:
            ACCEPT_TOKEN(anon_sym_bitmask);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 583:
            ACCEPT_TOKEN(anon_sym_ATannotation);
            END_STATE();
        case 584:
            ACCEPT_TOKEN(anon_sym_default);
            END_STATE();
        case 585:
            ACCEPT_TOKEN(anon_sym_default);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 586:
            ACCEPT_TOKEN(anon_sym_AT);
            END_STATE();
        case 587:
            ACCEPT_TOKEN(anon_sym_AT);
            if(lookahead == 'a')
                ADVANCE(258);
            if(lookahead == 'i')
                ADVANCE(193);
            END_STATE();
        case 588:
            ACCEPT_TOKEN(anon_sym_AT);
            if(lookahead == 'i')
                ADVANCE(193);
            END_STATE();
        case 589:
            ACCEPT_TOKEN(anon_sym_EQ);
            END_STATE();
        case 590:
            ACCEPT_TOKEN(anon_sym_module);
            END_STATE();
        case 591:
            ACCEPT_TOKEN(anon_sym_typename);
            END_STATE();
        case 592:
            ACCEPT_TOKEN(anon_sym_typename);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 593:
            ACCEPT_TOKEN(anon_sym_valuetype);
            END_STATE();
        case 594:
            ACCEPT_TOKEN(anon_sym_valuetype);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 595:
            ACCEPT_TOKEN(anon_sym_eventtype);
            END_STATE();
        case 596:
            ACCEPT_TOKEN(anon_sym_eventtype);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 597:
            ACCEPT_TOKEN(anon_sym_struct);
            END_STATE();
        case 598:
            ACCEPT_TOKEN(anon_sym_struct);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 599:
            ACCEPT_TOKEN(anon_sym_union);
            END_STATE();
        case 600:
            ACCEPT_TOKEN(anon_sym_union);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 601:
            ACCEPT_TOKEN(anon_sym_enum);
            END_STATE();
        case 602:
            ACCEPT_TOKEN(anon_sym_enum);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 603:
            ACCEPT_TOKEN(anon_sym_const);
            END_STATE();
        case 604:
            ACCEPT_TOKEN(anon_sym_const);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 605:
            ACCEPT_TOKEN(anon_sym_alias);
            END_STATE();
        case 606:
            ACCEPT_TOKEN(anon_sym_supports);
            END_STATE();
        case 607:
            ACCEPT_TOKEN(anon_sym_public);
            END_STATE();
        case 608:
            ACCEPT_TOKEN(anon_sym_public);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 609:
            ACCEPT_TOKEN(anon_sym_private);
            END_STATE();
        case 610:
            ACCEPT_TOKEN(anon_sym_private);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 611:
            ACCEPT_TOKEN(anon_sym_factory);
            END_STATE();
        case 612:
            ACCEPT_TOKEN(anon_sym_factory);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 613:
            ACCEPT_TOKEN(anon_sym_typedef);
            END_STATE();
        case 614:
            ACCEPT_TOKEN(anon_sym_typedef);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 615:
            ACCEPT_TOKEN(anon_sym_LBRACK);
            END_STATE();
        case 616:
            ACCEPT_TOKEN(anon_sym_RBRACK);
            END_STATE();
        case 617:
            ACCEPT_TOKEN(anon_sym_ATdefault_literal);
            END_STATE();
        case 618:
            ACCEPT_TOKEN(anon_sym_ATignore_literal_names);
            END_STATE();
        case 619:
            ACCEPT_TOKEN(anon_sym_switch);
            END_STATE();
        case 620:
            ACCEPT_TOKEN(anon_sym_switch);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 621:
            ACCEPT_TOKEN(anon_sym_case);
            END_STATE();
        case 622:
            ACCEPT_TOKEN(anon_sym_case);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 623:
            ACCEPT_TOKEN(anon_sym_native);
            END_STATE();
        case 624:
            ACCEPT_TOKEN(anon_sym_native);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 625:
            ACCEPT_TOKEN(anon_sym_POUNDdefine);
            END_STATE();
        case 626:
            ACCEPT_TOKEN(anon_sym_POUNDdefine);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(548);
            END_STATE();
        case 627:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '\r')
                ADVANCE(630);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(630);
            END_STATE();
        case 628:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '/')
                ADVANCE(629);
            if(lookahead == '\\')
                ADVANCE(627);
            if(lookahead == '\t' ||
               (11 <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(628);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(630);
            END_STATE();
        case 629:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '/')
                ADVANCE(849);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(630);
            END_STATE();
        case 630:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(630);
            END_STATE();
        case 631:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == ' ')
                ADVANCE(241);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 632:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '.')
                ADVANCE(393);
            if(lookahead == '0')
                ADVANCE(515);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(517);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(530);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 633:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '1')
                ADVANCE(640);
            if(lookahead == '3')
                ADVANCE(636);
            if(lookahead == '6')
                ADVANCE(638);
            if(lookahead == '8')
                ADVANCE(431);
            if(lookahead == 'e')
                ADVANCE(799);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 634:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '1')
                ADVANCE(640);
            if(lookahead == '3')
                ADVANCE(636);
            if(lookahead == '6')
                ADVANCE(638);
            if(lookahead == '8')
                ADVANCE(431);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 635:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '1')
                ADVANCE(641);
            if(lookahead == '3')
                ADVANCE(637);
            if(lookahead == '6')
                ADVANCE(639);
            if(lookahead == '8')
                ADVANCE(423);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 636:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '2')
                ADVANCE(418);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 637:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '2')
                ADVANCE(437);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 638:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '4')
                ADVANCE(421);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 639:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '4')
                ADVANCE(440);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 640:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '6')
                ADVANCE(412);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 641:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '6')
                ADVANCE(434);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 642:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'A')
                ADVANCE(645);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('B' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 643:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'E')
                ADVANCE(509);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 644:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'E')
                ADVANCE(511);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 645:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'L')
                ADVANCE(647);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 646:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'R')
                ADVANCE(648);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 647:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'S')
                ADVANCE(644);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 648:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'U')
                ADVANCE(643);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 649:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(782);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 650:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(681);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 651:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(800);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 652:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(748);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 653:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(791);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 654:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(823);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 655:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(803);
            if(lookahead == 'h')
                ADVANCE(653);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 656:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(829);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 657:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(792);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 658:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(745);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 659:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(807);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 660:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(752);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 661:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(820);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 662:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(673);
            if(lookahead == 'i')
                ADVANCE(837);
            if(lookahead == 'l')
                ADVANCE(780);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 663:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(676);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 664:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(741);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 665:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(742);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 666:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(830);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 667:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(721);
            if(lookahead == 's')
                ADVANCE(824);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 668:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(721);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 669:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(608);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 670:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(697);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 671:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(717);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 672:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(816);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 673:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(818);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 674:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(689);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 675:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(811);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 676:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(694);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 677:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(566);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 678:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(427);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 679:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(631);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 680:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(687);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 681:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(777);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 682:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(788);
            if(lookahead == 'h')
                ADVANCE(775);
            if(lookahead == 't')
                ADVANCE(790);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 683:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(788);
            if(lookahead == 'h')
                ADVANCE(775);
            if(lookahead == 't')
                ADVANCE(795);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 684:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(788);
            if(lookahead == 'h')
                ADVANCE(775);
            if(lookahead == 't')
                ADVANCE(797);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 685:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(444);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 686:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(624);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 687:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(709);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 688:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(610);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 689:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(463);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 690:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(575);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 691:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(622);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 692:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(592);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 693:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(596);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 694:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(560);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 695:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(594);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 696:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(710);
            if(lookahead == 'o')
                ADVANCE(831);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 697:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(783);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 698:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(678);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 699:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(650);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 700:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(680);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 701:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(679);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 702:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(660);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 703:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(768);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 704:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(808);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 705:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(810);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 706:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(764);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 707:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(766);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 708:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(826);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 709:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'f')
                ADVANCE(614);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 710:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'f')
                ADVANCE(656);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 711:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'f')
                ADVANCE(663);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 712:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(414);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 713:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(452);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 714:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(454);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 715:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(416);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 716:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(769);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 717:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(620);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 718:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(653);
            if(lookahead == 'o')
                ADVANCE(749);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 719:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(653);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 720:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(775);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 721:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(657);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 722:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(837);
            if(lookahead == 'l')
                ADVANCE(780);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 723:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(835);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 724:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(804);
            if(lookahead == 'o')
                ADVANCE(771);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 725:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(666);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 726:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(716);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 727:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(834);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 728:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(677);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 729:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(669);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 730:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(760);
            if(lookahead == 'u')
                ADVANCE(675);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 731:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(760);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 732:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(762);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 733:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(817);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 734:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(763);
            if(lookahead == 'n')
                ADVANCE(736);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 735:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(763);
            if(lookahead == 'n')
                ADVANCE(801);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 736:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(776);
            if(lookahead == 's')
                ADVANCE(726);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 737:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(779);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 738:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'k')
                ADVANCE(582);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 739:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(840);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 740:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(780);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 741:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(729);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 742:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(685);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 743:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(812);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 744:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(702);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 745:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(833);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 746:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'm')
                ADVANCE(602);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 747:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'm')
                ADVANCE(651);
            if(lookahead == 's')
                ADVANCE(705);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 748:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'm')
                ADVANCE(692);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 749:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(802);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 750:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(712);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 751:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(600);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 752:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(425);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 753:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(556);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 754:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(838);
            if(lookahead == 't')
                ADVANCE(814);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 755:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(838);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 756:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(827);
            if(lookahead == 'v')
                ADVANCE(707);
            if(lookahead == 'x')
                ADVANCE(670);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 757:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(827);
            if(lookahead == 'x')
                ADVANCE(670);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 758:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(827);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 759:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(805);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 760:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(713);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 761:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(739);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 762:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(714);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 763:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(815);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 764:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(652);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 765:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(813);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 766:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(822);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 767:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(715);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 768:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(674);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 769:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(701);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 770:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(831);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 771:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(744);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 772:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(728);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 773:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(750);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 774:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(771);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 775:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(798);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 776:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(751);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 777:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(761);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 778:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(793);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 779:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(753);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 780:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(659);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 781:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(767);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 782:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(465);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 783:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(819);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 784:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(693);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 785:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(695);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 786:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(700);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 787:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(706);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 788:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'q')
                ADVANCE(828);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 789:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(723);
            if(lookahead == 'u')
                ADVANCE(664);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 790:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(730);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 791:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(447);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 792:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(449);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 793:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(839);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 794:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(725);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 795:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(832);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 796:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(732);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 797:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(731);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 798:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(809);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 799:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(711);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 800:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(738);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 801:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(726);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 802:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(806);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 803:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(691);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 804:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(747);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 805:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(634);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 806:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(604);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 807:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(442);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 808:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(429);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 809:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(410);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 810:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(579);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 811:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(598);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 812:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(585);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 813:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(633);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 814:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(794);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 815:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(635);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 816:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(704);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 817:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(671);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 818:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(778);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 819:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(737);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 820:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(688);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 821:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(690);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 822:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(825);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 823:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(727);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 824:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(796);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 825:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(843);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 826:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(844);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 827:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(746);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 828:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(703);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 829:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(743);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 830:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(821);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 831:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(665);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 832:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(675);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 833:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(708);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 834:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'v')
                ADVANCE(686);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 835:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'v')
                ADVANCE(661);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 836:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'w')
                ADVANCE(733);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 837:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'x')
                ADVANCE(698);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 838:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(460);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 839:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(612);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 840:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(573);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 841:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(786);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 842:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(787);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 843:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(784);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 844:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(785);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 845:
            ACCEPT_TOKEN(sym_identifier);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(530);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 846:
            ACCEPT_TOKEN(sym_identifier);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(846);
            END_STATE();
        case 847:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            END_STATE();
        case 848:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            if(lookahead == '\\')
                ADVANCE(398);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(853);
            END_STATE();
        case 849:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(630);
            END_STATE();
        case 850:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '\n')
                ADVANCE(851);
            if(lookahead == '\\')
                ADVANCE(398);
            if(lookahead != 0)
                ADVANCE(853);
            END_STATE();
        case 851:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '/')
                ADVANCE(852);
            if(lookahead == '\\')
                ADVANCE(43);
            if(lookahead == '\t' ||
               (11 <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(851);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(853);
            END_STATE();
        case 852:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '/')
                ADVANCE(848);
            if(lookahead == '\\')
                ADVANCE(398);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(853);
            END_STATE();
        case 853:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '\\')
                ADVANCE(398);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(853);
            END_STATE();
        case 854:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead != 0 &&
               lookahead != '\r' &&
               lookahead != '\\')
                ADVANCE(853);
            if(lookahead == '\r')
                ADVANCE(855);
            if(lookahead == '\\')
                ADVANCE(854);
            END_STATE();
        case 855:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead != 0 &&
               lookahead != '\\')
                ADVANCE(853);
            if(lookahead == '\\')
                ADVANCE(398);
            END_STATE();
        default:
            return false;
    }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
    [0] = { .lex_state = 0, .external_lex_state = 1 },
    [1] = { .lex_state = 406 },
    [2] = { .lex_state = 57 },
    [3] = { .lex_state = 57 },
    [4] = { .lex_state = 57 },
    [5] = { .lex_state = 60 },
    [6] = { .lex_state = 60 },
    [7] = { .lex_state = 60 },
    [8] = { .lex_state = 60 },
    [9] = { .lex_state = 60 },
    [10] = { .lex_state = 49 },
    [11] = { .lex_state = 49 },
    [12] = { .lex_state = 61 },
    [13] = { .lex_state = 62 },
    [14] = { .lex_state = 63 },
    [15] = { .lex_state = 63 },
    [16] = { .lex_state = 63 },
    [17] = { .lex_state = 53 },
    [18] = { .lex_state = 53 },
    [19] = { .lex_state = 53 },
    [20] = { .lex_state = 53 },
    [21] = { .lex_state = 53 },
    [22] = { .lex_state = 53 },
    [23] = { .lex_state = 53 },
    [24] = { .lex_state = 53 },
    [25] = { .lex_state = 53 },
    [26] = { .lex_state = 53 },
    [27] = { .lex_state = 53 },
    [28] = { .lex_state = 53 },
    [29] = { .lex_state = 64 },
    [30] = { .lex_state = 64 },
    [31] = { .lex_state = 53 },
    [32] = { .lex_state = 53 },
    [33] = { .lex_state = 53 },
    [34] = { .lex_state = 407 },
    [35] = { .lex_state = 53 },
    [36] = { .lex_state = 53 },
    [37] = { .lex_state = 53 },
    [38] = { .lex_state = 407 },
    [39] = { .lex_state = 407 },
    [40] = { .lex_state = 406 },
    [41] = { .lex_state = 53 },
    [42] = { .lex_state = 53 },
    [43] = { .lex_state = 407 },
    [44] = { .lex_state = 57 },
    [45] = { .lex_state = 57 },
    [46] = { .lex_state = 407 },
    [47] = { .lex_state = 407 },
    [48] = { .lex_state = 57 },
    [49] = { .lex_state = 57 },
    [50] = { .lex_state = 57 },
    [51] = { .lex_state = 57 },
    [52] = { .lex_state = 407 },
    [53] = { .lex_state = 407 },
    [54] = { .lex_state = 57 },
    [55] = { .lex_state = 60 },
    [56] = { .lex_state = 60 },
    [57] = { .lex_state = 65 },
    [58] = { .lex_state = 65 },
    [59] = { .lex_state = 61 },
    [60] = { .lex_state = 61 },
    [61] = { .lex_state = 63 },
    [62] = { .lex_state = 63 },
    [63] = { .lex_state = 63 },
    [64] = { .lex_state = 63 },
    [65] = { .lex_state = 63 },
    [66] = { .lex_state = 53 },
    [67] = { .lex_state = 53 },
    [68] = { .lex_state = 53 },
    [69] = { .lex_state = 53 },
    [70] = { .lex_state = 53 },
    [71] = { .lex_state = 66 },
    [72] = { .lex_state = 53 },
    [73] = { .lex_state = 53 },
    [74] = { .lex_state = 53 },
    [75] = { .lex_state = 53 },
    [76] = { .lex_state = 53 },
    [77] = { .lex_state = 53 },
    [78] = { .lex_state = 53 },
    [79] = { .lex_state = 53 },
    [80] = { .lex_state = 50 },
    [81] = { .lex_state = 50 },
    [82] = { .lex_state = 50 },
    [83] = { .lex_state = 50 },
    [84] = { .lex_state = 50 },
    [85] = { .lex_state = 50 },
    [86] = { .lex_state = 50 },
    [87] = { .lex_state = 50 },
    [88] = { .lex_state = 50 },
    [89] = { .lex_state = 50 },
    [90] = { .lex_state = 406 },
    [91] = { .lex_state = 50 },
    [92] = { .lex_state = 50 },
    [93] = { .lex_state = 50 },
    [94] = { .lex_state = 50 },
    [95] = { .lex_state = 51 },
    [96] = { .lex_state = 50 },
    [97] = { .lex_state = 51 },
    [98] = { .lex_state = 50 },
    [99] = { .lex_state = 50 },
    [100] = { .lex_state = 51 },
    [101] = { .lex_state = 50 },
    [102] = { .lex_state = 50 },
    [103] = { .lex_state = 50 },
    [104] = { .lex_state = 406 },
    [105] = { .lex_state = 50 },
    [106] = { .lex_state = 50 },
    [107] = { .lex_state = 407 },
    [108] = { .lex_state = 407 },
    [109] = { .lex_state = 407 },
    [110] = { .lex_state = 406 },
    [111] = { .lex_state = 406 },
    [112] = { .lex_state = 407 },
    [113] = { .lex_state = 407 },
    [114] = { .lex_state = 50 },
    [115] = { .lex_state = 407 },
    [116] = { .lex_state = 407 },
    [117] = { .lex_state = 406 },
    [118] = { .lex_state = 406 },
    [119] = { .lex_state = 406 },
    [120] = { .lex_state = 407 },
    [121] = { .lex_state = 407 },
    [122] = { .lex_state = 407 },
    [123] = { .lex_state = 407 },
    [124] = { .lex_state = 407 },
    [125] = { .lex_state = 407 },
    [126] = { .lex_state = 407 },
    [127] = { .lex_state = 407 },
    [128] = { .lex_state = 407 },
    [129] = { .lex_state = 407 },
    [130] = { .lex_state = 407 },
    [131] = { .lex_state = 407 },
    [132] = { .lex_state = 407 },
    [133] = { .lex_state = 407 },
    [134] = { .lex_state = 50 },
    [135] = { .lex_state = 407 },
    [136] = { .lex_state = 406 },
    [137] = { .lex_state = 406 },
    [138] = { .lex_state = 407 },
    [139] = { .lex_state = 407 },
    [140] = { .lex_state = 407 },
    [141] = { .lex_state = 50 },
    [142] = { .lex_state = 52 },
    [143] = { .lex_state = 52 },
    [144] = { .lex_state = 51 },
    [145] = { .lex_state = 52 },
    [146] = { .lex_state = 406 },
    [147] = { .lex_state = 52 },
    [148] = { .lex_state = 406 },
    [149] = { .lex_state = 51 },
    [150] = { .lex_state = 51 },
    [151] = { .lex_state = 52 },
    [152] = { .lex_state = 52 },
    [153] = { .lex_state = 406 },
    [154] = { .lex_state = 406 },
    [155] = { .lex_state = 55 },
    [156] = { .lex_state = 406 },
    [157] = { .lex_state = 54 },
    [158] = { .lex_state = 55 },
    [159] = { .lex_state = 406 },
    [160] = { .lex_state = 54 },
    [161] = { .lex_state = 54 },
    [162] = { .lex_state = 54 },
    [163] = { .lex_state = 406 },
    [164] = { .lex_state = 406 },
    [165] = { .lex_state = 54 },
    [166] = { .lex_state = 54 },
    [167] = { .lex_state = 51 },
    [168] = { .lex_state = 406 },
    [169] = { .lex_state = 54 },
    [170] = { .lex_state = 55 },
    [171] = { .lex_state = 407 },
    [172] = { .lex_state = 55 },
    [173] = { .lex_state = 406 },
    [174] = { .lex_state = 52 },
    [175] = { .lex_state = 406 },
    [176] = { .lex_state = 51 },
    [177] = { .lex_state = 55 },
    [178] = { .lex_state = 54 },
    [179] = { .lex_state = 54 },
    [180] = { .lex_state = 406 },
    [181] = { .lex_state = 406 },
    [182] = { .lex_state = 55 },
    [183] = { .lex_state = 51 },
    [184] = { .lex_state = 406 },
    [185] = { .lex_state = 55 },
    [186] = { .lex_state = 55 },
    [187] = { .lex_state = 55 },
    [188] = { .lex_state = 406 },
    [189] = { .lex_state = 407 },
    [190] = { .lex_state = 406 },
    [191] = { .lex_state = 67 },
    [192] = { .lex_state = 55 },
    [193] = { .lex_state = 54 },
    [194] = { .lex_state = 55 },
    [195] = { .lex_state = 55 },
    [196] = { .lex_state = 55 },
    [197] = { .lex_state = 55 },
    [198] = { .lex_state = 406 },
    [199] = { .lex_state = 55 },
    [200] = { .lex_state = 55 },
    [201] = { .lex_state = 55 },
    [202] = { .lex_state = 55 },
    [203] = { .lex_state = 55 },
    [204] = { .lex_state = 0 },
    [205] = { .lex_state = 55 },
    [206] = { .lex_state = 55 },
    [207] = { .lex_state = 55 },
    [208] = { .lex_state = 55 },
    [209] = { .lex_state = 55 },
    [210] = { .lex_state = 406 },
    [211] = { .lex_state = 55 },
    [212] = { .lex_state = 55 },
    [213] = { .lex_state = 406 },
    [214] = { .lex_state = 0 },
    [215] = { .lex_state = 55 },
    [216] = { .lex_state = 56 },
    [217] = { .lex_state = 55 },
    [218] = { .lex_state = 55 },
    [219] = { .lex_state = 54 },
    [220] = { .lex_state = 0 },
    [221] = { .lex_state = 0 },
    [222] = { .lex_state = 0 },
    [223] = { .lex_state = 55 },
    [224] = { .lex_state = 55 },
    [225] = { .lex_state = 55 },
    [226] = { .lex_state = 57 },
    [227] = { .lex_state = 55 },
    [228] = { .lex_state = 57 },
    [229] = { .lex_state = 57 },
    [230] = { .lex_state = 0 },
    [231] = { .lex_state = 57 },
    [232] = { .lex_state = 406 },
    [233] = { .lex_state = 0 },
    [234] = { .lex_state = 0 },
    [235] = { .lex_state = 406 },
    [236] = { .lex_state = 57 },
    [237] = { .lex_state = 0 },
    [238] = { .lex_state = 55 },
    [239] = { .lex_state = 55 },
    [240] = { .lex_state = 0 },
    [241] = { .lex_state = 0 },
    [242] = { .lex_state = 0 },
    [243] = { .lex_state = 57 },
    [244] = { .lex_state = 55 },
    [245] = { .lex_state = 55 },
    [246] = { .lex_state = 406 },
    [247] = { .lex_state = 0 },
    [248] = { .lex_state = 0 },
    [249] = { .lex_state = 55 },
    [250] = { .lex_state = 0 },
    [251] = { .lex_state = 406 },
    [252] = { .lex_state = 0 },
    [253] = { .lex_state = 55 },
    [254] = { .lex_state = 406 },
    [255] = { .lex_state = 406 },
    [256] = { .lex_state = 57 },
    [257] = { .lex_state = 0 },
    [258] = { .lex_state = 406 },
    [259] = { .lex_state = 0 },
    [260] = { .lex_state = 55 },
    [261] = { .lex_state = 0 },
    [262] = { .lex_state = 55 },
    [263] = { .lex_state = 55 },
    [264] = { .lex_state = 55 },
    [265] = { .lex_state = 68 },
    [266] = { .lex_state = 55 },
    [267] = { .lex_state = 55 },
    [268] = { .lex_state = 0 },
    [269] = { .lex_state = 0 },
    [270] = { .lex_state = 55 },
    [271] = { .lex_state = 55 },
    [272] = { .lex_state = 406 },
    [273] = { .lex_state = 55 },
    [274] = { .lex_state = 0 },
    [275] = { .lex_state = 0 },
    [276] = { .lex_state = 55 },
    [277] = { .lex_state = 406 },
    [278] = { .lex_state = 0 },
    [279] = { .lex_state = 406 },
    [280] = { .lex_state = 0 },
    [281] = { .lex_state = 406 },
    [282] = { .lex_state = 55 },
    [283] = { .lex_state = 0 },
    [284] = { .lex_state = 0 },
    [285] = { .lex_state = 57 },
    [286] = { .lex_state = 57 },
    [287] = { .lex_state = 0 },
    [288] = { .lex_state = 55 },
    [289] = { .lex_state = 55 },
    [290] = { .lex_state = 407 },
    [291] = { .lex_state = 0 },
    [292] = { .lex_state = 55 },
    [293] = { .lex_state = 55 },
    [294] = { .lex_state = 0 },
    [295] = { .lex_state = 57 },
    [296] = { .lex_state = 0 },
    [297] = { .lex_state = 0 },
    [298] = { .lex_state = 55 },
    [299] = { .lex_state = 55 },
    [300] = { .lex_state = 57 },
    [301] = { .lex_state = 55 },
    [302] = { .lex_state = 55 },
    [303] = { .lex_state = 0 },
    [304] = { .lex_state = 0 },
    [305] = { .lex_state = 0 },
    [306] = { .lex_state = 406 },
    [307] = { .lex_state = 0 },
    [308] = { .lex_state = 0 },
    [309] = { .lex_state = 57 },
    [310] = { .lex_state = 55 },
    [311] = { .lex_state = 37 },
    [312] = { .lex_state = 0 },
    [313] = { .lex_state = 55 },
    [314] = { .lex_state = 54 },
    [315] = { .lex_state = 55 },
    [316] = { .lex_state = 406 },
    [317] = { .lex_state = 54 },
    [318] = { .lex_state = 0 },
    [319] = { .lex_state = 55 },
    [320] = { .lex_state = 55 },
    [321] = { .lex_state = 0 },
    [322] = { .lex_state = 57 },
    [323] = { .lex_state = 57 },
    [324] = { .lex_state = 406 },
    [325] = { .lex_state = 407 },
    [326] = { .lex_state = 406 },
    [327] = { .lex_state = 55 },
    [328] = { .lex_state = 0 },
    [329] = { .lex_state = 0 },
    [330] = { .lex_state = 55 },
    [331] = { .lex_state = 55 },
    [332] = { .lex_state = 406 },
    [333] = { .lex_state = 0 },
    [334] = { .lex_state = 55 },
    [335] = { .lex_state = 55 },
    [336] = { .lex_state = 55 },
    [337] = { .lex_state = 0 },
    [338] = { .lex_state = 55 },
    [339] = { .lex_state = 55 },
    [340] = { .lex_state = 55 },
    [341] = { .lex_state = 0 },
    [342] = { .lex_state = 0 },
    [343] = { .lex_state = 0 },
    [344] = { .lex_state = 57 },
    [345] = { .lex_state = 406 },
    [346] = { .lex_state = 55 },
    [347] = { .lex_state = 0 },
    [348] = { .lex_state = 0 },
    [349] = { .lex_state = 0 },
    [350] = { .lex_state = 55 },
    [351] = { .lex_state = 55 },
    [352] = { .lex_state = 0 },
    [353] = { .lex_state = 0 },
    [354] = { .lex_state = 407 },
    [355] = { .lex_state = 55 },
    [356] = { .lex_state = 55 },
    [357] = { .lex_state = 56 },
    [358] = { .lex_state = 0 },
    [359] = { .lex_state = 55 },
    [360] = { .lex_state = 55 },
    [361] = { .lex_state = 406 },
    [362] = { .lex_state = 406 },
    [363] = { .lex_state = 406 },
    [364] = { .lex_state = 55 },
    [365] = { .lex_state = 0 },
    [366] = { .lex_state = 55 },
    [367] = { .lex_state = 0 },
    [368] = { .lex_state = 55 },
    [369] = { .lex_state = 57 },
    [370] = { .lex_state = 57 },
    [371] = { .lex_state = 0 },
    [372] = { .lex_state = 55 },
    [373] = { .lex_state = 57 },
    [374] = { .lex_state = 55 },
    [375] = { .lex_state = 55 },
    [376] = { .lex_state = 55 },
    [377] = { .lex_state = 406 },
    [378] = { .lex_state = 55 },
    [379] = { .lex_state = 0 },
    [380] = { .lex_state = 55 },
    [381] = { .lex_state = 0 },
    [382] = { .lex_state = 55 },
    [383] = { .lex_state = 0 },
    [384] = { .lex_state = 57 },
    [385] = { .lex_state = 55 },
    [386] = { .lex_state = 57 },
    [387] = { .lex_state = 406 },
    [388] = { .lex_state = 55 },
    [389] = { .lex_state = 0 },
    [390] = { .lex_state = 0 },
    [391] = { .lex_state = 55 },
    [392] = { .lex_state = 55 },
    [393] = { .lex_state = 55 },
    [394] = { .lex_state = 55 },
    [395] = { .lex_state = 0 },
    [396] = { .lex_state = 0 },
    [397] = { .lex_state = 55 },
    [398] = { .lex_state = 0 },
    [399] = { .lex_state = 55 },
    [400] = { .lex_state = 57 },
    [401] = { .lex_state = 55 },
    [402] = { .lex_state = 0 },
    [403] = { .lex_state = 0 },
    [404] = { .lex_state = 0 },
    [405] = { .lex_state = 0 },
    [406] = { .lex_state = 55 },
    [407] = { .lex_state = 0 },
    [408] = { .lex_state = 55 },
    [409] = { .lex_state = 0 },
    [410] = { .lex_state = 0 },
    [411] = { .lex_state = 0 },
    [412] = { .lex_state = 0 },
    [413] = { .lex_state = 0 },
    [414] = { .lex_state = 69 },
    [415] = { .lex_state = 70 },
    [416] = { .lex_state = 0 },
    [417] = { .lex_state = 0 },
    [418] = { .lex_state = 57 },
    [419] = { .lex_state = 0 },
    [420] = { .lex_state = 0 },
    [421] = { .lex_state = 0 },
    [422] = { .lex_state = 57 },
    [423] = { .lex_state = 0 },
    [424] = { .lex_state = 851 },
    [425] = { .lex_state = 0 },
    [426] = { .lex_state = 57 },
    [427] = { .lex_state = 55 },
    [428] = { .lex_state = 0 },
    [429] = { .lex_state = 55 },
    [430] = { .lex_state = 0 },
    [431] = { .lex_state = 0 },
    [432] = { .lex_state = 70 },
    [433] = { .lex_state = 69 },
    [434] = { .lex_state = 0 },
    [435] = { .lex_state = 0 },
    [436] = { .lex_state = 0 },
    [437] = { .lex_state = 0 },
    [438] = { .lex_state = 0 },
    [439] = { .lex_state = 0 },
    [440] = { .lex_state = 0 },
    [441] = { .lex_state = 55 },
    [442] = { .lex_state = 0 },
    [443] = { .lex_state = 0 },
    [444] = { .lex_state = 0 },
    [445] = { .lex_state = 0 },
    [446] = { .lex_state = 55 },
    [447] = { .lex_state = 0 },
    [448] = { .lex_state = 0 },
    [449] = { .lex_state = 0 },
    [450] = { .lex_state = 55 },
    [451] = { .lex_state = 0 },
    [452] = { .lex_state = 57 },
    [453] = { .lex_state = 0 },
    [454] = { .lex_state = 0 },
    [455] = { .lex_state = 0 },
    [456] = { .lex_state = 0 },
    [457] = { .lex_state = 0 },
    [458] = { .lex_state = 0 },
    [459] = { .lex_state = 0 },
    [460] = { .lex_state = 0 },
    [461] = { .lex_state = 57 },
    [462] = { .lex_state = 57 },
    [463] = { .lex_state = 0 },
    [464] = { .lex_state = 0 },
    [465] = { .lex_state = 0 },
    [466] = { .lex_state = 0 },
    [467] = { .lex_state = 55 },
    [468] = { .lex_state = 0 },
    [469] = { .lex_state = 407 },
    [470] = { .lex_state = 0 },
    [471] = { .lex_state = 0 },
    [472] = { .lex_state = 38 },
    [473] = { .lex_state = 55 },
    [474] = { .lex_state = 57 },
    [475] = { .lex_state = 0 },
    [476] = { .lex_state = 406 },
    [477] = { .lex_state = 0 },
    [478] = { .lex_state = 0 },
    [479] = { .lex_state = 57 },
    [480] = { .lex_state = 55 },
    [481] = { .lex_state = 0 },
    [482] = { .lex_state = 406 },
    [483] = { .lex_state = 0 },
    [484] = { .lex_state = 0 },
    [485] = { .lex_state = 57 },
    [486] = { .lex_state = 55 },
    [487] = { .lex_state = 0 },
    [488] = { .lex_state = 0 },
    [489] = { .lex_state = 55 },
    [490] = { .lex_state = 0 },
    [491] = { .lex_state = 407 },
    [492] = { .lex_state = 0 },
    [493] = { .lex_state = 0 },
    [494] = { .lex_state = 0 },
    [495] = { .lex_state = 0 },
    [496] = { .lex_state = 0 },
    [497] = { .lex_state = 0 },
    [498] = { .lex_state = 0 },
    [499] = { .lex_state = 55 },
    [500] = { .lex_state = 0 },
    [501] = { .lex_state = 0 },
    [502] = { .lex_state = 0 },
    [503] = { .lex_state = 57 },
    [504] = { .lex_state = 628 },
    [505] = { .lex_state = 0 },
    [506] = { .lex_state = 0 },
    [507] = { .lex_state = 0 },
    [508] = { .lex_state = 0 },
    [509] = { .lex_state = 0 },
    [510] = { .lex_state = 0 },
    [511] = { .lex_state = 0 },
    [512] = { .lex_state = 55 },
    [513] = { .lex_state = 57 },
    [514] = { .lex_state = 55 },
    [515] = { .lex_state = 0 },
    [516] = { .lex_state = 0 },
    [517] = { .lex_state = 0 },
    [518] = { .lex_state = 0 },
    [519] = { .lex_state = 57 },
    [520] = { .lex_state = 406 },
    [521] = { .lex_state = 55 },
    [522] = { .lex_state = 55 },
    [523] = { .lex_state = 55 },
    [524] = { .lex_state = 55 },
    [525] = { .lex_state = 0 },
    [526] = { .lex_state = 55 },
    [527] = { .lex_state = 0 },
    [528] = { .lex_state = 55 },
    [529] = { .lex_state = 55 },
    [530] = { .lex_state = 55 },
    [531] = { .lex_state = 0 },
    [532] = { .lex_state = 55 },
    [533] = { .lex_state = 0 },
    [534] = { .lex_state = 57 },
    [535] = { .lex_state = 55 },
    [536] = { .lex_state = 55 },
    [537] = { .lex_state = 0 },
    [538] = { .lex_state = 0 },
    [539] = { .lex_state = 55 },
    [540] = { .lex_state = 55 },
    [541] = { .lex_state = 0 },
    [542] = { .lex_state = 0 },
    [543] = { .lex_state = 55 },
    [544] = { (TSStateId)(-1) },
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
        [anon_sym_supports] = ACTIONS(1),
        [anon_sym_public] = ACTIONS(1),
        [anon_sym_private] = ACTIONS(1),
        [anon_sym_factory] = ACTIONS(1),
        [anon_sym_typedef] = ACTIONS(1),
        [anon_sym_LBRACK] = ACTIONS(1),
        [anon_sym_RBRACK] = ACTIONS(1),
        [anon_sym_ATignore_literal_names] = ACTIONS(1),
        [anon_sym_switch] = ACTIONS(1),
        [anon_sym_case] = ACTIONS(1),
        [anon_sym_native] = ACTIONS(1),
        [anon_sym_POUNDdefine] = ACTIONS(1),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [sym__eof] = ACTIONS(1),
    },
    [1] = {
        [sym_specification] = STATE(501),
        [sym_preproc_call] = STATE(111),
        [sym_except_dcl] = STATE(497),
        [sym_interface_dcl] = STATE(497),
        [sym_interface_forward_dcl] = STATE(495),
        [sym_interface_def] = STATE(495),
        [sym_interface_header] = STATE(492),
        [sym_bitset_dcl] = STATE(497),
        [sym_bitmask_dcl] = STATE(497),
        [sym_annotation_dcl] = STATE(497),
        [sym_annotation_appl] = STATE(167),
        [sym_template_module_dcl] = STATE(497),
        [sym_template_module_inst] = STATE(497),
        [sym_value_dcl] = STATE(497),
        [sym_value_def] = STATE(490),
        [sym_value_header] = STATE(481),
        [sym_value_forward_dcl] = STATE(490),
        [sym_typedef_dcl] = STATE(497),
        [sym_enum_dcl] = STATE(497),
        [sym_enum_anno] = STATE(476),
        [sym_union_forward_dcl] = STATE(497),
        [sym_union_def] = STATE(497),
        [sym__definition] = STATE(112),
        [sym_native_dcl] = STATE(497),
        [sym_module_dcl] = STATE(497),
        [sym_struct_forward_dcl] = STATE(497),
        [sym_struct_def] = STATE(497),
        [sym_predefine] = STATE(107),
        [sym_const_dcl] = STATE(497),
        [sym_comment] = STATE(1),
        [aux_sym_specification_repeat1] = STATE(40),
        [aux_sym_specification_repeat2] = STATE(46),
        [aux_sym_interface_def_repeat1] = STATE(144),
        [ts_builtin_sym_end] = ACTIONS(5),
        [sym_preproc_directive] = ACTIONS(7),
        [anon_sym_exception] = ACTIONS(9),
        [anon_sym_interface] = ACTIONS(11),
        [anon_sym_local] = ACTIONS(13),
        [anon_sym_bitset] = ACTIONS(15),
        [anon_sym_bitmask] = ACTIONS(17),
        [anon_sym_ATannotation] = ACTIONS(19),
        [anon_sym_AT] = ACTIONS(21),
        [anon_sym_module] = ACTIONS(23),
        [anon_sym_valuetype] = ACTIONS(25),
        [anon_sym_struct] = ACTIONS(27),
        [anon_sym_union] = ACTIONS(29),
        [anon_sym_enum] = ACTIONS(31),
        [anon_sym_const] = ACTIONS(33),
        [anon_sym_typedef] = ACTIONS(35),
        [anon_sym_ATignore_literal_names] = ACTIONS(37),
        [anon_sym_native] = ACTIONS(39),
        [anon_sym_POUNDdefine] = ACTIONS(41),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [2] = {
        [sym_signed_short_int] = STATE(201),
        [sym_signed_long_int] = STATE(201),
        [sym_signed_longlong_int] = STATE(201),
        [sym_unsigned_int] = STATE(211),
        [sym_integer_type] = STATE(270),
        [sym_signed_int] = STATE(211),
        [sym_unsigned_short_int] = STATE(199),
        [sym_unsigned_long_int] = STATE(199),
        [sym_unsigned_longlong_int] = STATE(199),
        [sym_floating_pt_type] = STATE(270),
        [sym_char_type] = STATE(270),
        [sym_scoped_name] = STATE(215),
        [sym_string_type] = STATE(273),
        [sym_type_spec] = STATE(480),
        [sym_simple_type_spec] = STATE(289),
        [sym_base_type_spec] = STATE(276),
        [sym_any_type] = STATE(270),
        [sym_fixed_pt_type] = STATE(273),
        [sym_template_type_spec] = STATE(289),
        [sym_sequence_type] = STATE(273),
        [sym_map_type] = STATE(273),
        [sym_except_dcl] = STATE(537),
        [sym_export] = STATE(49),
        [sym_op_dcl] = STATE(537),
        [sym_op_type_spec] = STATE(489),
        [sym_attr_dcl] = STATE(537),
        [sym_readonly_attr_spec] = STATE(494),
        [sym_attr_spec] = STATE(494),
        [sym_bitset_dcl] = STATE(537),
        [sym_bitmask_dcl] = STATE(537),
        [sym_annotation_appl] = STATE(167),
        [sym_value_element] = STATE(50),
        [sym_state_member] = STATE(49),
        [sym_init_dcl] = STATE(49),
        [sym_typedef_dcl] = STATE(537),
        [sym_enum_dcl] = STATE(537),
        [sym_enum_anno] = STATE(476),
        [sym_union_forward_dcl] = STATE(537),
        [sym_union_def] = STATE(537),
        [sym_native_dcl] = STATE(537),
        [sym_struct_forward_dcl] = STATE(537),
        [sym_struct_def] = STATE(537),
        [sym_const_dcl] = STATE(537),
        [sym_comment] = STATE(2),
        [aux_sym_interface_def_repeat1] = STATE(183),
        [aux_sym_value_def_repeat1] = STATE(3),
        [anon_sym_short] = ACTIONS(43),
        [anon_sym_int16] = ACTIONS(43),
        [anon_sym_long] = ACTIONS(45),
        [anon_sym_int32] = ACTIONS(45),
        [anon_sym_longlong] = ACTIONS(47),
        [anon_sym_int64] = ACTIONS(49),
        [sym_unsigned_tiny_int] = ACTIONS(51),
        [sym_boolean_type] = ACTIONS(53),
        [anon_sym_fixed] = ACTIONS(55),
        [sym_octet_type] = ACTIONS(53),
        [sym_signed_tiny_int] = ACTIONS(57),
        [anon_sym_unsignedshort] = ACTIONS(59),
        [anon_sym_uint16] = ACTIONS(61),
        [anon_sym_unsignedlong] = ACTIONS(63),
        [anon_sym_uint32] = ACTIONS(63),
        [anon_sym_unsignedlonglong] = ACTIONS(65),
        [anon_sym_uint64] = ACTIONS(67),
        [anon_sym_float] = ACTIONS(69),
        [anon_sym_double] = ACTIONS(69),
        [anon_sym_longdouble] = ACTIONS(71),
        [anon_sym_char] = ACTIONS(73),
        [anon_sym_wchar] = ACTIONS(73),
        [anon_sym_COLON_COLON] = ACTIONS(75),
        [anon_sym_string] = ACTIONS(77),
        [anon_sym_wstring] = ACTIONS(77),
        [anon_sym_any] = ACTIONS(79),
        [anon_sym_sequence] = ACTIONS(81),
        [anon_sym_map] = ACTIONS(83),
        [anon_sym_exception] = ACTIONS(85),
        [anon_sym_RBRACE] = ACTIONS(87),
        [anon_sym_void] = ACTIONS(89),
        [anon_sym_readonly] = ACTIONS(91),
        [anon_sym_attribute] = ACTIONS(93),
        [anon_sym_bitset] = ACTIONS(95),
        [anon_sym_bitmask] = ACTIONS(97),
        [anon_sym_AT] = ACTIONS(21),
        [anon_sym_struct] = ACTIONS(99),
        [anon_sym_union] = ACTIONS(101),
        [anon_sym_enum] = ACTIONS(103),
        [anon_sym_const] = ACTIONS(105),
        [anon_sym_public] = ACTIONS(107),
        [anon_sym_private] = ACTIONS(107),
        [anon_sym_factory] = ACTIONS(109),
        [anon_sym_typedef] = ACTIONS(111),
        [anon_sym_ATignore_literal_names] = ACTIONS(37),
        [anon_sym_native] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [3] = {
        [sym_signed_short_int] = STATE(201),
        [sym_signed_long_int] = STATE(201),
        [sym_signed_longlong_int] = STATE(201),
        [sym_unsigned_int] = STATE(211),
        [sym_integer_type] = STATE(270),
        [sym_signed_int] = STATE(211),
        [sym_unsigned_short_int] = STATE(199),
        [sym_unsigned_long_int] = STATE(199),
        [sym_unsigned_longlong_int] = STATE(199),
        [sym_floating_pt_type] = STATE(270),
        [sym_char_type] = STATE(270),
        [sym_scoped_name] = STATE(215),
        [sym_string_type] = STATE(273),
        [sym_type_spec] = STATE(480),
        [sym_simple_type_spec] = STATE(289),
        [sym_base_type_spec] = STATE(276),
        [sym_any_type] = STATE(270),
        [sym_fixed_pt_type] = STATE(273),
        [sym_template_type_spec] = STATE(289),
        [sym_sequence_type] = STATE(273),
        [sym_map_type] = STATE(273),
        [sym_except_dcl] = STATE(537),
        [sym_export] = STATE(49),
        [sym_op_dcl] = STATE(537),
        [sym_op_type_spec] = STATE(489),
        [sym_attr_dcl] = STATE(537),
        [sym_readonly_attr_spec] = STATE(494),
        [sym_attr_spec] = STATE(494),
        [sym_bitset_dcl] = STATE(537),
        [sym_bitmask_dcl] = STATE(537),
        [sym_annotation_appl] = STATE(167),
        [sym_value_element] = STATE(50),
        [sym_state_member] = STATE(49),
        [sym_init_dcl] = STATE(49),
        [sym_typedef_dcl] = STATE(537),
        [sym_enum_dcl] = STATE(537),
        [sym_enum_anno] = STATE(476),
        [sym_union_forward_dcl] = STATE(537),
        [sym_union_def] = STATE(537),
        [sym_native_dcl] = STATE(537),
        [sym_struct_forward_dcl] = STATE(537),
        [sym_struct_def] = STATE(537),
        [sym_const_dcl] = STATE(537),
        [sym_comment] = STATE(3),
        [aux_sym_interface_def_repeat1] = STATE(183),
        [aux_sym_value_def_repeat1] = STATE(3),
        [anon_sym_short] = ACTIONS(117),
        [anon_sym_int16] = ACTIONS(117),
        [anon_sym_long] = ACTIONS(120),
        [anon_sym_int32] = ACTIONS(120),
        [anon_sym_longlong] = ACTIONS(123),
        [anon_sym_int64] = ACTIONS(126),
        [sym_unsigned_tiny_int] = ACTIONS(129),
        [sym_boolean_type] = ACTIONS(132),
        [anon_sym_fixed] = ACTIONS(135),
        [sym_octet_type] = ACTIONS(132),
        [sym_signed_tiny_int] = ACTIONS(138),
        [anon_sym_unsignedshort] = ACTIONS(141),
        [anon_sym_uint16] = ACTIONS(144),
        [anon_sym_unsignedlong] = ACTIONS(147),
        [anon_sym_uint32] = ACTIONS(147),
        [anon_sym_unsignedlonglong] = ACTIONS(150),
        [anon_sym_uint64] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(156),
        [anon_sym_double] = ACTIONS(156),
        [anon_sym_longdouble] = ACTIONS(159),
        [anon_sym_char] = ACTIONS(162),
        [anon_sym_wchar] = ACTIONS(162),
        [anon_sym_COLON_COLON] = ACTIONS(165),
        [anon_sym_string] = ACTIONS(168),
        [anon_sym_wstring] = ACTIONS(168),
        [anon_sym_any] = ACTIONS(171),
        [anon_sym_sequence] = ACTIONS(174),
        [anon_sym_map] = ACTIONS(177),
        [anon_sym_exception] = ACTIONS(180),
        [anon_sym_RBRACE] = ACTIONS(183),
        [anon_sym_void] = ACTIONS(185),
        [anon_sym_readonly] = ACTIONS(188),
        [anon_sym_attribute] = ACTIONS(191),
        [anon_sym_bitset] = ACTIONS(194),
        [anon_sym_bitmask] = ACTIONS(197),
        [anon_sym_AT] = ACTIONS(200),
        [anon_sym_struct] = ACTIONS(203),
        [anon_sym_union] = ACTIONS(206),
        [anon_sym_enum] = ACTIONS(209),
        [anon_sym_const] = ACTIONS(212),
        [anon_sym_public] = ACTIONS(215),
        [anon_sym_private] = ACTIONS(215),
        [anon_sym_factory] = ACTIONS(218),
        [anon_sym_typedef] = ACTIONS(221),
        [anon_sym_ATignore_literal_names] = ACTIONS(224),
        [anon_sym_native] = ACTIONS(227),
        [sym_identifier] = ACTIONS(230),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [4] = {
        [sym_signed_short_int] = STATE(201),
        [sym_signed_long_int] = STATE(201),
        [sym_signed_longlong_int] = STATE(201),
        [sym_unsigned_int] = STATE(211),
        [sym_integer_type] = STATE(270),
        [sym_signed_int] = STATE(211),
        [sym_unsigned_short_int] = STATE(199),
        [sym_unsigned_long_int] = STATE(199),
        [sym_unsigned_longlong_int] = STATE(199),
        [sym_floating_pt_type] = STATE(270),
        [sym_char_type] = STATE(270),
        [sym_scoped_name] = STATE(215),
        [sym_string_type] = STATE(273),
        [sym_type_spec] = STATE(480),
        [sym_simple_type_spec] = STATE(289),
        [sym_base_type_spec] = STATE(276),
        [sym_any_type] = STATE(270),
        [sym_fixed_pt_type] = STATE(273),
        [sym_template_type_spec] = STATE(289),
        [sym_sequence_type] = STATE(273),
        [sym_map_type] = STATE(273),
        [sym_except_dcl] = STATE(537),
        [sym_export] = STATE(49),
        [sym_op_dcl] = STATE(537),
        [sym_op_type_spec] = STATE(489),
        [sym_attr_dcl] = STATE(537),
        [sym_readonly_attr_spec] = STATE(494),
        [sym_attr_spec] = STATE(494),
        [sym_bitset_dcl] = STATE(537),
        [sym_bitmask_dcl] = STATE(537),
        [sym_annotation_appl] = STATE(167),
        [sym_value_element] = STATE(50),
        [sym_state_member] = STATE(49),
        [sym_init_dcl] = STATE(49),
        [sym_typedef_dcl] = STATE(537),
        [sym_enum_dcl] = STATE(537),
        [sym_enum_anno] = STATE(476),
        [sym_union_forward_dcl] = STATE(537),
        [sym_union_def] = STATE(537),
        [sym_native_dcl] = STATE(537),
        [sym_struct_forward_dcl] = STATE(537),
        [sym_struct_def] = STATE(537),
        [sym_const_dcl] = STATE(537),
        [sym_comment] = STATE(4),
        [aux_sym_interface_def_repeat1] = STATE(183),
        [aux_sym_value_def_repeat1] = STATE(2),
        [anon_sym_short] = ACTIONS(43),
        [anon_sym_int16] = ACTIONS(43),
        [anon_sym_long] = ACTIONS(45),
        [anon_sym_int32] = ACTIONS(45),
        [anon_sym_longlong] = ACTIONS(47),
        [anon_sym_int64] = ACTIONS(49),
        [sym_unsigned_tiny_int] = ACTIONS(51),
        [sym_boolean_type] = ACTIONS(53),
        [anon_sym_fixed] = ACTIONS(55),
        [sym_octet_type] = ACTIONS(53),
        [sym_signed_tiny_int] = ACTIONS(57),
        [anon_sym_unsignedshort] = ACTIONS(59),
        [anon_sym_uint16] = ACTIONS(61),
        [anon_sym_unsignedlong] = ACTIONS(63),
        [anon_sym_uint32] = ACTIONS(63),
        [anon_sym_unsignedlonglong] = ACTIONS(65),
        [anon_sym_uint64] = ACTIONS(67),
        [anon_sym_float] = ACTIONS(69),
        [anon_sym_double] = ACTIONS(69),
        [anon_sym_longdouble] = ACTIONS(71),
        [anon_sym_char] = ACTIONS(73),
        [anon_sym_wchar] = ACTIONS(73),
        [anon_sym_COLON_COLON] = ACTIONS(75),
        [anon_sym_string] = ACTIONS(77),
        [anon_sym_wstring] = ACTIONS(77),
        [anon_sym_any] = ACTIONS(79),
        [anon_sym_sequence] = ACTIONS(81),
        [anon_sym_map] = ACTIONS(83),
        [anon_sym_exception] = ACTIONS(85),
        [anon_sym_RBRACE] = ACTIONS(233),
        [anon_sym_void] = ACTIONS(89),
        [anon_sym_readonly] = ACTIONS(91),
        [anon_sym_attribute] = ACTIONS(93),
        [anon_sym_bitset] = ACTIONS(95),
        [anon_sym_bitmask] = ACTIONS(97),
        [anon_sym_AT] = ACTIONS(21),
        [anon_sym_struct] = ACTIONS(99),
        [anon_sym_union] = ACTIONS(101),
        [anon_sym_enum] = ACTIONS(103),
        [anon_sym_const] = ACTIONS(105),
        [anon_sym_public] = ACTIONS(107),
        [anon_sym_private] = ACTIONS(107),
        [anon_sym_factory] = ACTIONS(109),
        [anon_sym_typedef] = ACTIONS(111),
        [anon_sym_ATignore_literal_names] = ACTIONS(37),
        [anon_sym_native] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [5] = {
        [sym_signed_short_int] = STATE(201),
        [sym_signed_long_int] = STATE(201),
        [sym_signed_longlong_int] = STATE(201),
        [sym_unsigned_int] = STATE(211),
        [sym_integer_type] = STATE(270),
        [sym_signed_int] = STATE(211),
        [sym_unsigned_short_int] = STATE(199),
        [sym_unsigned_long_int] = STATE(199),
        [sym_unsigned_longlong_int] = STATE(199),
        [sym_floating_pt_type] = STATE(270),
        [sym_char_type] = STATE(270),
        [sym_scoped_name] = STATE(215),
        [sym_string_type] = STATE(273),
        [sym_type_spec] = STATE(480),
        [sym_simple_type_spec] = STATE(289),
        [sym_base_type_spec] = STATE(276),
        [sym_any_type] = STATE(270),
        [sym_fixed_pt_type] = STATE(273),
        [sym_template_type_spec] = STATE(289),
        [sym_sequence_type] = STATE(273),
        [sym_map_type] = STATE(273),
        [sym_except_dcl] = STATE(487),
        [sym_interface_body] = STATE(542),
        [sym_export] = STATE(56),
        [sym_op_dcl] = STATE(487),
        [sym_op_type_spec] = STATE(489),
        [sym_attr_dcl] = STATE(487),
        [sym_readonly_attr_spec] = STATE(494),
        [sym_attr_spec] = STATE(494),
        [sym_bitset_dcl] = STATE(487),
        [sym_bitmask_dcl] = STATE(487),
        [sym_annotation_appl] = STATE(167),
        [sym_typedef_dcl] = STATE(487),
        [sym_enum_dcl] = STATE(487),
        [sym_enum_anno] = STATE(476),
        [sym_union_forward_dcl] = STATE(487),
        [sym_union_def] = STATE(487),
        [sym_native_dcl] = STATE(487),
        [sym_struct_forward_dcl] = STATE(487),
        [sym_struct_def] = STATE(487),
        [sym_const_dcl] = STATE(487),
        [sym_comment] = STATE(5),
        [aux_sym_interface_def_repeat1] = STATE(183),
        [aux_sym_interface_body_repeat1] = STATE(9),
        [anon_sym_short] = ACTIONS(43),
        [anon_sym_int16] = ACTIONS(43),
        [anon_sym_long] = ACTIONS(45),
        [anon_sym_int32] = ACTIONS(45),
        [anon_sym_longlong] = ACTIONS(47),
        [anon_sym_int64] = ACTIONS(49),
        [sym_unsigned_tiny_int] = ACTIONS(51),
        [sym_boolean_type] = ACTIONS(53),
        [anon_sym_fixed] = ACTIONS(55),
        [sym_octet_type] = ACTIONS(53),
        [sym_signed_tiny_int] = ACTIONS(57),
        [anon_sym_unsignedshort] = ACTIONS(59),
        [anon_sym_uint16] = ACTIONS(61),
        [anon_sym_unsignedlong] = ACTIONS(63),
        [anon_sym_uint32] = ACTIONS(63),
        [anon_sym_unsignedlonglong] = ACTIONS(65),
        [anon_sym_uint64] = ACTIONS(67),
        [anon_sym_float] = ACTIONS(69),
        [anon_sym_double] = ACTIONS(69),
        [anon_sym_longdouble] = ACTIONS(71),
        [anon_sym_char] = ACTIONS(73),
        [anon_sym_wchar] = ACTIONS(73),
        [anon_sym_COLON_COLON] = ACTIONS(75),
        [anon_sym_string] = ACTIONS(77),
        [anon_sym_wstring] = ACTIONS(77),
        [anon_sym_any] = ACTIONS(79),
        [anon_sym_sequence] = ACTIONS(81),
        [anon_sym_map] = ACTIONS(83),
        [anon_sym_exception] = ACTIONS(85),
        [anon_sym_RBRACE] = ACTIONS(235),
        [anon_sym_void] = ACTIONS(89),
        [anon_sym_readonly] = ACTIONS(91),
        [anon_sym_attribute] = ACTIONS(93),
        [anon_sym_bitset] = ACTIONS(95),
        [anon_sym_bitmask] = ACTIONS(97),
        [anon_sym_AT] = ACTIONS(21),
        [anon_sym_struct] = ACTIONS(99),
        [anon_sym_union] = ACTIONS(101),
        [anon_sym_enum] = ACTIONS(103),
        [anon_sym_const] = ACTIONS(105),
        [anon_sym_typedef] = ACTIONS(111),
        [anon_sym_ATignore_literal_names] = ACTIONS(37),
        [anon_sym_native] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [6] = {
        [sym_signed_short_int] = STATE(201),
        [sym_signed_long_int] = STATE(201),
        [sym_signed_longlong_int] = STATE(201),
        [sym_unsigned_int] = STATE(211),
        [sym_integer_type] = STATE(270),
        [sym_signed_int] = STATE(211),
        [sym_unsigned_short_int] = STATE(199),
        [sym_unsigned_long_int] = STATE(199),
        [sym_unsigned_longlong_int] = STATE(199),
        [sym_floating_pt_type] = STATE(270),
        [sym_char_type] = STATE(270),
        [sym_scoped_name] = STATE(215),
        [sym_string_type] = STATE(273),
        [sym_type_spec] = STATE(480),
        [sym_simple_type_spec] = STATE(289),
        [sym_base_type_spec] = STATE(276),
        [sym_any_type] = STATE(270),
        [sym_fixed_pt_type] = STATE(273),
        [sym_template_type_spec] = STATE(289),
        [sym_sequence_type] = STATE(273),
        [sym_map_type] = STATE(273),
        [sym_except_dcl] = STATE(487),
        [sym_interface_body] = STATE(498),
        [sym_export] = STATE(56),
        [sym_op_dcl] = STATE(487),
        [sym_op_type_spec] = STATE(489),
        [sym_attr_dcl] = STATE(487),
        [sym_readonly_attr_spec] = STATE(494),
        [sym_attr_spec] = STATE(494),
        [sym_bitset_dcl] = STATE(487),
        [sym_bitmask_dcl] = STATE(487),
        [sym_annotation_appl] = STATE(167),
        [sym_typedef_dcl] = STATE(487),
        [sym_enum_dcl] = STATE(487),
        [sym_enum_anno] = STATE(476),
        [sym_union_forward_dcl] = STATE(487),
        [sym_union_def] = STATE(487),
        [sym_native_dcl] = STATE(487),
        [sym_struct_forward_dcl] = STATE(487),
        [sym_struct_def] = STATE(487),
        [sym_const_dcl] = STATE(487),
        [sym_comment] = STATE(6),
        [aux_sym_interface_def_repeat1] = STATE(183),
        [aux_sym_interface_body_repeat1] = STATE(9),
        [anon_sym_short] = ACTIONS(43),
        [anon_sym_int16] = ACTIONS(43),
        [anon_sym_long] = ACTIONS(45),
        [anon_sym_int32] = ACTIONS(45),
        [anon_sym_longlong] = ACTIONS(47),
        [anon_sym_int64] = ACTIONS(49),
        [sym_unsigned_tiny_int] = ACTIONS(51),
        [sym_boolean_type] = ACTIONS(53),
        [anon_sym_fixed] = ACTIONS(55),
        [sym_octet_type] = ACTIONS(53),
        [sym_signed_tiny_int] = ACTIONS(57),
        [anon_sym_unsignedshort] = ACTIONS(59),
        [anon_sym_uint16] = ACTIONS(61),
        [anon_sym_unsignedlong] = ACTIONS(63),
        [anon_sym_uint32] = ACTIONS(63),
        [anon_sym_unsignedlonglong] = ACTIONS(65),
        [anon_sym_uint64] = ACTIONS(67),
        [anon_sym_float] = ACTIONS(69),
        [anon_sym_double] = ACTIONS(69),
        [anon_sym_longdouble] = ACTIONS(71),
        [anon_sym_char] = ACTIONS(73),
        [anon_sym_wchar] = ACTIONS(73),
        [anon_sym_COLON_COLON] = ACTIONS(75),
        [anon_sym_string] = ACTIONS(77),
        [anon_sym_wstring] = ACTIONS(77),
        [anon_sym_any] = ACTIONS(79),
        [anon_sym_sequence] = ACTIONS(81),
        [anon_sym_map] = ACTIONS(83),
        [anon_sym_exception] = ACTIONS(85),
        [anon_sym_RBRACE] = ACTIONS(237),
        [anon_sym_void] = ACTIONS(89),
        [anon_sym_readonly] = ACTIONS(91),
        [anon_sym_attribute] = ACTIONS(93),
        [anon_sym_bitset] = ACTIONS(95),
        [anon_sym_bitmask] = ACTIONS(97),
        [anon_sym_AT] = ACTIONS(21),
        [anon_sym_struct] = ACTIONS(99),
        [anon_sym_union] = ACTIONS(101),
        [anon_sym_enum] = ACTIONS(103),
        [anon_sym_const] = ACTIONS(105),
        [anon_sym_typedef] = ACTIONS(111),
        [anon_sym_ATignore_literal_names] = ACTIONS(37),
        [anon_sym_native] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [7] = {
        [sym_signed_short_int] = STATE(201),
        [sym_signed_long_int] = STATE(201),
        [sym_signed_longlong_int] = STATE(201),
        [sym_unsigned_int] = STATE(211),
        [sym_integer_type] = STATE(270),
        [sym_signed_int] = STATE(211),
        [sym_unsigned_short_int] = STATE(199),
        [sym_unsigned_long_int] = STATE(199),
        [sym_unsigned_longlong_int] = STATE(199),
        [sym_floating_pt_type] = STATE(270),
        [sym_char_type] = STATE(270),
        [sym_scoped_name] = STATE(215),
        [sym_string_type] = STATE(273),
        [sym_type_spec] = STATE(480),
        [sym_simple_type_spec] = STATE(289),
        [sym_base_type_spec] = STATE(276),
        [sym_any_type] = STATE(270),
        [sym_fixed_pt_type] = STATE(273),
        [sym_template_type_spec] = STATE(289),
        [sym_sequence_type] = STATE(273),
        [sym_map_type] = STATE(273),
        [sym_except_dcl] = STATE(487),
        [sym_interface_body] = STATE(488),
        [sym_export] = STATE(56),
        [sym_op_dcl] = STATE(487),
        [sym_op_type_spec] = STATE(489),
        [sym_attr_dcl] = STATE(487),
        [sym_readonly_attr_spec] = STATE(494),
        [sym_attr_spec] = STATE(494),
        [sym_bitset_dcl] = STATE(487),
        [sym_bitmask_dcl] = STATE(487),
        [sym_annotation_appl] = STATE(167),
        [sym_typedef_dcl] = STATE(487),
        [sym_enum_dcl] = STATE(487),
        [sym_enum_anno] = STATE(476),
        [sym_union_forward_dcl] = STATE(487),
        [sym_union_def] = STATE(487),
        [sym_native_dcl] = STATE(487),
        [sym_struct_forward_dcl] = STATE(487),
        [sym_struct_def] = STATE(487),
        [sym_const_dcl] = STATE(487),
        [sym_comment] = STATE(7),
        [aux_sym_interface_def_repeat1] = STATE(183),
        [aux_sym_interface_body_repeat1] = STATE(9),
        [anon_sym_short] = ACTIONS(43),
        [anon_sym_int16] = ACTIONS(43),
        [anon_sym_long] = ACTIONS(45),
        [anon_sym_int32] = ACTIONS(45),
        [anon_sym_longlong] = ACTIONS(47),
        [anon_sym_int64] = ACTIONS(49),
        [sym_unsigned_tiny_int] = ACTIONS(51),
        [sym_boolean_type] = ACTIONS(53),
        [anon_sym_fixed] = ACTIONS(55),
        [sym_octet_type] = ACTIONS(53),
        [sym_signed_tiny_int] = ACTIONS(57),
        [anon_sym_unsignedshort] = ACTIONS(59),
        [anon_sym_uint16] = ACTIONS(61),
        [anon_sym_unsignedlong] = ACTIONS(63),
        [anon_sym_uint32] = ACTIONS(63),
        [anon_sym_unsignedlonglong] = ACTIONS(65),
        [anon_sym_uint64] = ACTIONS(67),
        [anon_sym_float] = ACTIONS(69),
        [anon_sym_double] = ACTIONS(69),
        [anon_sym_longdouble] = ACTIONS(71),
        [anon_sym_char] = ACTIONS(73),
        [anon_sym_wchar] = ACTIONS(73),
        [anon_sym_COLON_COLON] = ACTIONS(75),
        [anon_sym_string] = ACTIONS(77),
        [anon_sym_wstring] = ACTIONS(77),
        [anon_sym_any] = ACTIONS(79),
        [anon_sym_sequence] = ACTIONS(81),
        [anon_sym_map] = ACTIONS(83),
        [anon_sym_exception] = ACTIONS(85),
        [anon_sym_RBRACE] = ACTIONS(239),
        [anon_sym_void] = ACTIONS(89),
        [anon_sym_readonly] = ACTIONS(91),
        [anon_sym_attribute] = ACTIONS(93),
        [anon_sym_bitset] = ACTIONS(95),
        [anon_sym_bitmask] = ACTIONS(97),
        [anon_sym_AT] = ACTIONS(21),
        [anon_sym_struct] = ACTIONS(99),
        [anon_sym_union] = ACTIONS(101),
        [anon_sym_enum] = ACTIONS(103),
        [anon_sym_const] = ACTIONS(105),
        [anon_sym_typedef] = ACTIONS(111),
        [anon_sym_ATignore_literal_names] = ACTIONS(37),
        [anon_sym_native] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [8] = {
        [sym_signed_short_int] = STATE(201),
        [sym_signed_long_int] = STATE(201),
        [sym_signed_longlong_int] = STATE(201),
        [sym_unsigned_int] = STATE(211),
        [sym_integer_type] = STATE(270),
        [sym_signed_int] = STATE(211),
        [sym_unsigned_short_int] = STATE(199),
        [sym_unsigned_long_int] = STATE(199),
        [sym_unsigned_longlong_int] = STATE(199),
        [sym_floating_pt_type] = STATE(270),
        [sym_char_type] = STATE(270),
        [sym_scoped_name] = STATE(215),
        [sym_string_type] = STATE(273),
        [sym_type_spec] = STATE(480),
        [sym_simple_type_spec] = STATE(289),
        [sym_base_type_spec] = STATE(276),
        [sym_any_type] = STATE(270),
        [sym_fixed_pt_type] = STATE(273),
        [sym_template_type_spec] = STATE(289),
        [sym_sequence_type] = STATE(273),
        [sym_map_type] = STATE(273),
        [sym_except_dcl] = STATE(487),
        [sym_export] = STATE(56),
        [sym_op_dcl] = STATE(487),
        [sym_op_type_spec] = STATE(489),
        [sym_attr_dcl] = STATE(487),
        [sym_readonly_attr_spec] = STATE(494),
        [sym_attr_spec] = STATE(494),
        [sym_bitset_dcl] = STATE(487),
        [sym_bitmask_dcl] = STATE(487),
        [sym_annotation_appl] = STATE(167),
        [sym_typedef_dcl] = STATE(487),
        [sym_enum_dcl] = STATE(487),
        [sym_enum_anno] = STATE(476),
        [sym_union_forward_dcl] = STATE(487),
        [sym_union_def] = STATE(487),
        [sym_native_dcl] = STATE(487),
        [sym_struct_forward_dcl] = STATE(487),
        [sym_struct_def] = STATE(487),
        [sym_const_dcl] = STATE(487),
        [sym_comment] = STATE(8),
        [aux_sym_interface_def_repeat1] = STATE(183),
        [aux_sym_interface_body_repeat1] = STATE(8),
        [anon_sym_short] = ACTIONS(241),
        [anon_sym_int16] = ACTIONS(241),
        [anon_sym_long] = ACTIONS(244),
        [anon_sym_int32] = ACTIONS(244),
        [anon_sym_longlong] = ACTIONS(247),
        [anon_sym_int64] = ACTIONS(250),
        [sym_unsigned_tiny_int] = ACTIONS(253),
        [sym_boolean_type] = ACTIONS(256),
        [anon_sym_fixed] = ACTIONS(259),
        [sym_octet_type] = ACTIONS(256),
        [sym_signed_tiny_int] = ACTIONS(262),
        [anon_sym_unsignedshort] = ACTIONS(265),
        [anon_sym_uint16] = ACTIONS(268),
        [anon_sym_unsignedlong] = ACTIONS(271),
        [anon_sym_uint32] = ACTIONS(271),
        [anon_sym_unsignedlonglong] = ACTIONS(274),
        [anon_sym_uint64] = ACTIONS(277),
        [anon_sym_float] = ACTIONS(280),
        [anon_sym_double] = ACTIONS(280),
        [anon_sym_longdouble] = ACTIONS(283),
        [anon_sym_char] = ACTIONS(286),
        [anon_sym_wchar] = ACTIONS(286),
        [anon_sym_COLON_COLON] = ACTIONS(289),
        [anon_sym_string] = ACTIONS(292),
        [anon_sym_wstring] = ACTIONS(292),
        [anon_sym_any] = ACTIONS(295),
        [anon_sym_sequence] = ACTIONS(298),
        [anon_sym_map] = ACTIONS(301),
        [anon_sym_exception] = ACTIONS(304),
        [anon_sym_RBRACE] = ACTIONS(307),
        [anon_sym_void] = ACTIONS(309),
        [anon_sym_readonly] = ACTIONS(312),
        [anon_sym_attribute] = ACTIONS(315),
        [anon_sym_bitset] = ACTIONS(318),
        [anon_sym_bitmask] = ACTIONS(321),
        [anon_sym_AT] = ACTIONS(324),
        [anon_sym_struct] = ACTIONS(327),
        [anon_sym_union] = ACTIONS(330),
        [anon_sym_enum] = ACTIONS(333),
        [anon_sym_const] = ACTIONS(336),
        [anon_sym_typedef] = ACTIONS(339),
        [anon_sym_ATignore_literal_names] = ACTIONS(342),
        [anon_sym_native] = ACTIONS(345),
        [sym_identifier] = ACTIONS(348),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [9] = {
        [sym_signed_short_int] = STATE(201),
        [sym_signed_long_int] = STATE(201),
        [sym_signed_longlong_int] = STATE(201),
        [sym_unsigned_int] = STATE(211),
        [sym_integer_type] = STATE(270),
        [sym_signed_int] = STATE(211),
        [sym_unsigned_short_int] = STATE(199),
        [sym_unsigned_long_int] = STATE(199),
        [sym_unsigned_longlong_int] = STATE(199),
        [sym_floating_pt_type] = STATE(270),
        [sym_char_type] = STATE(270),
        [sym_scoped_name] = STATE(215),
        [sym_string_type] = STATE(273),
        [sym_type_spec] = STATE(480),
        [sym_simple_type_spec] = STATE(289),
        [sym_base_type_spec] = STATE(276),
        [sym_any_type] = STATE(270),
        [sym_fixed_pt_type] = STATE(273),
        [sym_template_type_spec] = STATE(289),
        [sym_sequence_type] = STATE(273),
        [sym_map_type] = STATE(273),
        [sym_except_dcl] = STATE(487),
        [sym_export] = STATE(56),
        [sym_op_dcl] = STATE(487),
        [sym_op_type_spec] = STATE(489),
        [sym_attr_dcl] = STATE(487),
        [sym_readonly_attr_spec] = STATE(494),
        [sym_attr_spec] = STATE(494),
        [sym_bitset_dcl] = STATE(487),
        [sym_bitmask_dcl] = STATE(487),
        [sym_annotation_appl] = STATE(167),
        [sym_typedef_dcl] = STATE(487),
        [sym_enum_dcl] = STATE(487),
        [sym_enum_anno] = STATE(476),
        [sym_union_forward_dcl] = STATE(487),
        [sym_union_def] = STATE(487),
        [sym_native_dcl] = STATE(487),
        [sym_struct_forward_dcl] = STATE(487),
        [sym_struct_def] = STATE(487),
        [sym_const_dcl] = STATE(487),
        [sym_comment] = STATE(9),
        [aux_sym_interface_def_repeat1] = STATE(183),
        [aux_sym_interface_body_repeat1] = STATE(8),
        [anon_sym_short] = ACTIONS(43),
        [anon_sym_int16] = ACTIONS(43),
        [anon_sym_long] = ACTIONS(45),
        [anon_sym_int32] = ACTIONS(45),
        [anon_sym_longlong] = ACTIONS(47),
        [anon_sym_int64] = ACTIONS(49),
        [sym_unsigned_tiny_int] = ACTIONS(51),
        [sym_boolean_type] = ACTIONS(53),
        [anon_sym_fixed] = ACTIONS(55),
        [sym_octet_type] = ACTIONS(53),
        [sym_signed_tiny_int] = ACTIONS(57),
        [anon_sym_unsignedshort] = ACTIONS(59),
        [anon_sym_uint16] = ACTIONS(61),
        [anon_sym_unsignedlong] = ACTIONS(63),
        [anon_sym_uint32] = ACTIONS(63),
        [anon_sym_unsignedlonglong] = ACTIONS(65),
        [anon_sym_uint64] = ACTIONS(67),
        [anon_sym_float] = ACTIONS(69),
        [anon_sym_double] = ACTIONS(69),
        [anon_sym_longdouble] = ACTIONS(71),
        [anon_sym_char] = ACTIONS(73),
        [anon_sym_wchar] = ACTIONS(73),
        [anon_sym_COLON_COLON] = ACTIONS(75),
        [anon_sym_string] = ACTIONS(77),
        [anon_sym_wstring] = ACTIONS(77),
        [anon_sym_any] = ACTIONS(79),
        [anon_sym_sequence] = ACTIONS(81),
        [anon_sym_map] = ACTIONS(83),
        [anon_sym_exception] = ACTIONS(85),
        [anon_sym_RBRACE] = ACTIONS(351),
        [anon_sym_void] = ACTIONS(89),
        [anon_sym_readonly] = ACTIONS(91),
        [anon_sym_attribute] = ACTIONS(93),
        [anon_sym_bitset] = ACTIONS(95),
        [anon_sym_bitmask] = ACTIONS(97),
        [anon_sym_AT] = ACTIONS(21),
        [anon_sym_struct] = ACTIONS(99),
        [anon_sym_union] = ACTIONS(101),
        [anon_sym_enum] = ACTIONS(103),
        [anon_sym_const] = ACTIONS(105),
        [anon_sym_typedef] = ACTIONS(111),
        [anon_sym_ATignore_literal_names] = ACTIONS(37),
        [anon_sym_native] = ACTIONS(113),
        [sym_identifier] = ACTIONS(115),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [10] = {
        [sym_signed_short_int] = STATE(201),
        [sym_signed_long_int] = STATE(201),
        [sym_signed_longlong_int] = STATE(201),
        [sym_unsigned_int] = STATE(211),
        [sym_integer_type] = STATE(270),
        [sym_signed_int] = STATE(211),
        [sym_unsigned_short_int] = STATE(199),
        [sym_unsigned_long_int] = STATE(199),
        [sym_unsigned_longlong_int] = STATE(199),
        [sym_floating_pt_type] = STATE(270),
        [sym_char_type] = STATE(270),
        [sym_scoped_name] = STATE(137),
        [sym_string_type] = STATE(273),
        [sym_type_spec] = STATE(322),
        [sym_simple_type_spec] = STATE(289),
        [sym_base_type_spec] = STATE(276),
        [sym_any_type] = STATE(270),
        [sym_fixed_pt_type] = STATE(273),
        [sym_template_type_spec] = STATE(289),
        [sym_sequence_type] = STATE(273),
        [sym_map_type] = STATE(273),
        [sym_const_expr] = STATE(322),
        [sym_or_expr] = STATE(152),
        [sym_xor_expr] = STATE(145),
        [sym_and_expr] = STATE(142),
        [sym_shift_expr] = STATE(140),
        [sym_add_expr] = STATE(135),
        [sym_mult_expr] = STATE(120),
        [sym_unary_expr] = STATE(131),
        [sym_unary_operator] = STATE(134),
        [sym_literal] = STATE(123),
        [sym_string_literal] = STATE(127),
        [sym_char_literal] = STATE(127),
        [sym_boolean_literal] = STATE(127),
        [sym_actual_parameters] = STATE(513),
        [sym_actual_parameter] = STATE(231),
        [sym_comment] = STATE(10),
        [anon_sym_short] = ACTIONS(43),
        [anon_sym_int16] = ACTIONS(43),
        [anon_sym_long] = ACTIONS(45),
        [anon_sym_int32] = ACTIONS(45),
        [anon_sym_longlong] = ACTIONS(47),
        [anon_sym_int64] = ACTIONS(49),
        [sym_unsigned_tiny_int] = ACTIONS(51),
        [sym_boolean_type] = ACTIONS(53),
        [anon_sym_fixed] = ACTIONS(55),
        [sym_octet_type] = ACTIONS(53),
        [sym_signed_tiny_int] = ACTIONS(57),
        [anon_sym_unsignedshort] = ACTIONS(59),
        [anon_sym_uint16] = ACTIONS(61),
        [anon_sym_unsignedlong] = ACTIONS(63),
        [anon_sym_uint32] = ACTIONS(63),
        [anon_sym_unsignedlonglong] = ACTIONS(65),
        [anon_sym_uint64] = ACTIONS(67),
        [anon_sym_float] = ACTIONS(69),
        [anon_sym_double] = ACTIONS(69),
        [anon_sym_longdouble] = ACTIONS(71),
        [anon_sym_char] = ACTIONS(73),
        [anon_sym_wchar] = ACTIONS(73),
        [anon_sym_COLON_COLON] = ACTIONS(353),
        [anon_sym_string] = ACTIONS(77),
        [anon_sym_wstring] = ACTIONS(77),
        [anon_sym_any] = ACTIONS(79),
        [anon_sym_sequence] = ACTIONS(81),
        [anon_sym_map] = ACTIONS(83),
        [anon_sym_PLUS] = ACTIONS(355),
        [anon_sym_DASH] = ACTIONS(355),
        [anon_sym_LPAREN] = ACTIONS(357),
        [anon_sym_TILDE] = ACTIONS(359),
        [anon_sym_L] = ACTIONS(361),
        [anon_sym_DQUOTE] = ACTIONS(363),
        [anon_sym_SQUOTE] = ACTIONS(365),
        [anon_sym_TRUE] = ACTIONS(367),
        [anon_sym_FALSE] = ACTIONS(367),
        [sym_number_literal] = ACTIONS(369),
        [sym_identifier] = ACTIONS(371),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [11] = {
        [sym_signed_short_int] = STATE(201),
        [sym_signed_long_int] = STATE(201),
        [sym_signed_longlong_int] = STATE(201),
        [sym_unsigned_int] = STATE(211),
        [sym_integer_type] = STATE(270),
        [sym_signed_int] = STATE(211),
        [sym_unsigned_short_int] = STATE(199),
        [sym_unsigned_long_int] = STATE(199),
        [sym_unsigned_longlong_int] = STATE(199),
        [sym_floating_pt_type] = STATE(270),
        [sym_char_type] = STATE(270),
        [sym_scoped_name] = STATE(137),
        [sym_string_type] = STATE(273),
        [sym_type_spec] = STATE(322),
        [sym_simple_type_spec] = STATE(289),
        [sym_base_type_spec] = STATE(276),
        [sym_any_type] = STATE(270),
        [sym_fixed_pt_type] = STATE(273),
        [sym_template_type_spec] = STATE(289),
        [sym_sequence_type] = STATE(273),
        [sym_map_type] = STATE(273),
        [sym_const_expr] = STATE(322),
        [sym_or_expr] = STATE(152),
        [sym_xor_expr] = STATE(145),
        [sym_and_expr] = STATE(142),
        [sym_shift_expr] = STATE(140),
        [sym_add_expr] = STATE(135),
        [sym_mult_expr] = STATE(120),
        [sym_unary_expr] = STATE(131),
        [sym_unary_operator] = STATE(134),
        [sym_literal] = STATE(123),
        [sym_string_literal] = STATE(127),
        [sym_char_literal] = STATE(127),
        [sym_boolean_literal] = STATE(127),
        [sym_actual_parameter] = STATE(373),
        [sym_comment] = STATE(11),
        [anon_sym_short] = ACTIONS(43),
        [anon_sym_int16] = ACTIONS(43),
        [anon_sym_long] = ACTIONS(45),
        [anon_sym_int32] = ACTIONS(45),
        [anon_sym_longlong] = ACTIONS(47),
        [anon_sym_int64] = ACTIONS(49),
        [sym_unsigned_tiny_int] = ACTIONS(51),
        [sym_boolean_type] = ACTIONS(53),
        [anon_sym_fixed] = ACTIONS(55),
        [sym_octet_type] = ACTIONS(53),
        [sym_signed_tiny_int] = ACTIONS(57),
        [anon_sym_unsignedshort] = ACTIONS(59),
        [anon_sym_uint16] = ACTIONS(61),
        [anon_sym_unsignedlong] = ACTIONS(63),
        [anon_sym_uint32] = ACTIONS(63),
        [anon_sym_unsignedlonglong] = ACTIONS(65),
        [anon_sym_uint64] = ACTIONS(67),
        [anon_sym_float] = ACTIONS(69),
        [anon_sym_double] = ACTIONS(69),
        [anon_sym_longdouble] = ACTIONS(71),
        [anon_sym_char] = ACTIONS(73),
        [anon_sym_wchar] = ACTIONS(73),
        [anon_sym_COLON_COLON] = ACTIONS(353),
        [anon_sym_string] = ACTIONS(77),
        [anon_sym_wstring] = ACTIONS(77),
        [anon_sym_any] = ACTIONS(79),
        [anon_sym_sequence] = ACTIONS(81),
        [anon_sym_map] = ACTIONS(83),
        [anon_sym_PLUS] = ACTIONS(355),
        [anon_sym_DASH] = ACTIONS(355),
        [anon_sym_LPAREN] = ACTIONS(357),
        [anon_sym_TILDE] = ACTIONS(359),
        [anon_sym_L] = ACTIONS(361),
        [anon_sym_DQUOTE] = ACTIONS(363),
        [anon_sym_SQUOTE] = ACTIONS(365),
        [anon_sym_TRUE] = ACTIONS(367),
        [anon_sym_FALSE] = ACTIONS(367),
        [sym_number_literal] = ACTIONS(369),
        [sym_identifier] = ACTIONS(371),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [12] = {
        [sym_signed_short_int] = STATE(201),
        [sym_signed_long_int] = STATE(201),
        [sym_signed_longlong_int] = STATE(201),
        [sym_unsigned_int] = STATE(211),
        [sym_integer_type] = STATE(270),
        [sym_signed_int] = STATE(211),
        [sym_unsigned_short_int] = STATE(199),
        [sym_unsigned_long_int] = STATE(199),
        [sym_unsigned_longlong_int] = STATE(199),
        [sym_floating_pt_type] = STATE(270),
        [sym_char_type] = STATE(270),
        [sym_scoped_name] = STATE(215),
        [sym_string_type] = STATE(273),
        [sym_type_spec] = STATE(207),
        [sym_simple_type_spec] = STATE(289),
        [sym_base_type_spec] = STATE(276),
        [sym_any_type] = STATE(270),
        [sym_fixed_pt_type] = STATE(273),
        [sym_template_type_spec] = STATE(289),
        [sym_sequence_type] = STATE(273),
        [sym_map_type] = STATE(273),
        [sym_bitset_dcl] = STATE(207),
        [sym_bitmask_dcl] = STATE(207),
        [sym_annotation_appl] = STATE(167),
        [sym_enum_dcl] = STATE(207),
        [sym_enum_anno] = STATE(476),
        [sym_union_forward_dcl] = STATE(207),
        [sym_union_def] = STATE(207),
        [sym_element_spec] = STATE(493),
        [sym_struct_forward_dcl] = STATE(207),
        [sym_struct_def] = STATE(207),
        [sym_comment] = STATE(12),
        [aux_sym_interface_def_repeat1] = STATE(183),
        [anon_sym_short] = ACTIONS(43),
        [anon_sym_int16] = ACTIONS(43),
        [anon_sym_long] = ACTIONS(45),
        [anon_sym_int32] = ACTIONS(45),
        [anon_sym_longlong] = ACTIONS(47),
        [anon_sym_int64] = ACTIONS(49),
        [sym_unsigned_tiny_int] = ACTIONS(51),
        [sym_boolean_type] = ACTIONS(53),
        [anon_sym_fixed] = ACTIONS(55),
        [sym_octet_type] = ACTIONS(53),
        [sym_signed_tiny_int] = ACTIONS(57),
        [anon_sym_unsignedshort] = ACTIONS(59),
        [anon_sym_uint16] = ACTIONS(61),
        [anon_sym_unsignedlong] = ACTIONS(63),
        [anon_sym_uint32] = ACTIONS(63),
        [anon_sym_unsignedlonglong] = ACTIONS(65),
        [anon_sym_uint64] = ACTIONS(67),
        [anon_sym_float] = ACTIONS(69),
        [anon_sym_double] = ACTIONS(69),
        [anon_sym_longdouble] = ACTIONS(71),
        [anon_sym_char] = ACTIONS(73),
        [anon_sym_wchar] = ACTIONS(73),
        [anon_sym_COLON_COLON] = ACTIONS(75),
        [anon_sym_string] = ACTIONS(77),
        [anon_sym_wstring] = ACTIONS(77),
        [anon_sym_any] = ACTIONS(79),
        [anon_sym_sequence] = ACTIONS(81),
        [anon_sym_map] = ACTIONS(83),
        [anon_sym_RBRACE] = ACTIONS(373),
        [anon_sym_bitset] = ACTIONS(95),
        [anon_sym_bitmask] = ACTIONS(97),
        [anon_sym_default] = ACTIONS(375),
        [anon_sym_AT] = ACTIONS(21),
        [anon_sym_struct] = ACTIONS(99),
        [anon_sym_union] = ACTIONS(101),
        [anon_sym_enum] = ACTIONS(103),
        [anon_sym_ATignore_literal_names] = ACTIONS(37),
        [anon_sym_case] = ACTIONS(375),
        [sym_identifier] = ACTIONS(115),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [13] = {
        [sym_signed_short_int] = STATE(201),
        [sym_signed_long_int] = STATE(201),
        [sym_signed_longlong_int] = STATE(201),
        [sym_unsigned_int] = STATE(211),
        [sym_integer_type] = STATE(270),
        [sym_signed_int] = STATE(211),
        [sym_unsigned_short_int] = STATE(199),
        [sym_unsigned_long_int] = STATE(199),
        [sym_unsigned_longlong_int] = STATE(199),
        [sym_floating_pt_type] = STATE(270),
        [sym_char_type] = STATE(270),
        [sym_scoped_name] = STATE(215),
        [sym_string_type] = STATE(273),
        [sym_simple_type_spec] = STATE(177),
        [sym_base_type_spec] = STATE(276),
        [sym_any_type] = STATE(270),
        [sym_fixed_pt_type] = STATE(273),
        [sym_template_type_spec] = STATE(177),
        [sym_sequence_type] = STATE(273),
        [sym_map_type] = STATE(273),
        [sym_bitset_dcl] = STATE(177),
        [sym_bitmask_dcl] = STATE(177),
        [sym_annotation_appl] = STATE(167),
        [sym_type_declarator] = STATE(410),
        [sym_enum_dcl] = STATE(177),
        [sym_enum_anno] = STATE(476),
        [sym_union_forward_dcl] = STATE(177),
        [sym_union_def] = STATE(177),
        [sym_struct_forward_dcl] = STATE(177),
        [sym_struct_def] = STATE(177),
        [sym_comment] = STATE(13),
        [aux_sym_interface_def_repeat1] = STATE(183),
        [anon_sym_short] = ACTIONS(43),
        [anon_sym_int16] = ACTIONS(43),
        [anon_sym_long] = ACTIONS(45),
        [anon_sym_int32] = ACTIONS(45),
        [anon_sym_longlong] = ACTIONS(47),
        [anon_sym_int64] = ACTIONS(49),
        [sym_unsigned_tiny_int] = ACTIONS(51),
        [sym_boolean_type] = ACTIONS(53),
        [anon_sym_fixed] = ACTIONS(55),
        [sym_octet_type] = ACTIONS(53),
        [sym_signed_tiny_int] = ACTIONS(57),
        [anon_sym_unsignedshort] = ACTIONS(59),
        [anon_sym_uint16] = ACTIONS(61),
        [anon_sym_unsignedlong] = ACTIONS(63),
        [anon_sym_uint32] = ACTIONS(63),
        [anon_sym_unsignedlonglong] = ACTIONS(65),
        [anon_sym_uint64] = ACTIONS(67),
        [anon_sym_float] = ACTIONS(69),
        [anon_sym_double] = ACTIONS(69),
        [anon_sym_longdouble] = ACTIONS(71),
        [anon_sym_char] = ACTIONS(73),
        [anon_sym_wchar] = ACTIONS(73),
        [anon_sym_COLON_COLON] = ACTIONS(75),
        [anon_sym_string] = ACTIONS(77),
        [anon_sym_wstring] = ACTIONS(77),
        [anon_sym_any] = ACTIONS(79),
        [anon_sym_sequence] = ACTIONS(81),
        [anon_sym_map] = ACTIONS(83),
        [anon_sym_bitset] = ACTIONS(95),
        [anon_sym_bitmask] = ACTIONS(97),
        [anon_sym_AT] = ACTIONS(21),
        [anon_sym_struct] = ACTIONS(99),
        [anon_sym_union] = ACTIONS(101),
        [anon_sym_enum] = ACTIONS(103),
        [anon_sym_ATignore_literal_names] = ACTIONS(37),
        [sym_identifier] = ACTIONS(115),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
};

static const uint16_t ts_small_parse_table[] = {
    [0] = 40,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(37),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(47),
    1,
    anon_sym_longlong,
    ACTIONS(49),
    1,
    anon_sym_int64,
    ACTIONS(51),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(57),
    1,
    sym_signed_tiny_int,
    ACTIONS(59),
    1,
    anon_sym_unsignedshort,
    ACTIONS(61),
    1,
    anon_sym_uint16,
    ACTIONS(65),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(67),
    1,
    anon_sym_uint64,
    ACTIONS(71),
    1,
    anon_sym_longdouble,
    ACTIONS(75),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(81),
    1,
    anon_sym_sequence,
    ACTIONS(103),
    1,
    anon_sym_enum,
    ACTIONS(105),
    1,
    anon_sym_const,
    ACTIONS(111),
    1,
    anon_sym_typedef,
    ACTIONS(115),
    1,
    sym_identifier,
    ACTIONS(379),
    1,
    anon_sym_fixed,
    ACTIONS(381),
    1,
    anon_sym_any,
    ACTIONS(383),
    1,
    anon_sym_RBRACE,
    STATE(14),
    1,
    sym_comment,
    STATE(16),
    1,
    aux_sym_annotation_dcl_repeat1,
    STATE(62),
    1,
    sym_annotation_body,
    STATE(63),
    1,
    sym_annotation_member,
    STATE(310),
    1,
    sym_annotation_member_type,
    STATE(394),
    1,
    sym_scoped_name,
    STATE(476),
    1,
    sym_enum_anno,
    ACTIONS(43),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(45),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(63),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(69),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(73),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(77),
    2,
    anon_sym_string,
    anon_sym_wstring,
    ACTIONS(377),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(211),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(408),
    2,
    sym_any_const_type,
    sym_const_type,
    STATE(199),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(201),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(419),
    3,
    sym_typedef_dcl,
    sym_enum_dcl,
    sym_const_dcl,
    STATE(429),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [141] = 39,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(391),
    1,
    anon_sym_longlong,
    ACTIONS(394),
    1,
    anon_sym_int64,
    ACTIONS(397),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(403),
    1,
    anon_sym_fixed,
    ACTIONS(406),
    1,
    sym_signed_tiny_int,
    ACTIONS(409),
    1,
    anon_sym_unsignedshort,
    ACTIONS(412),
    1,
    anon_sym_uint16,
    ACTIONS(418),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(421),
    1,
    anon_sym_uint64,
    ACTIONS(427),
    1,
    anon_sym_longdouble,
    ACTIONS(433),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(439),
    1,
    anon_sym_any,
    ACTIONS(442),
    1,
    anon_sym_sequence,
    ACTIONS(445),
    1,
    anon_sym_RBRACE,
    ACTIONS(447),
    1,
    anon_sym_enum,
    ACTIONS(450),
    1,
    anon_sym_const,
    ACTIONS(453),
    1,
    anon_sym_typedef,
    ACTIONS(456),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(459),
    1,
    sym_identifier,
    STATE(62),
    1,
    sym_annotation_body,
    STATE(63),
    1,
    sym_annotation_member,
    STATE(310),
    1,
    sym_annotation_member_type,
    STATE(394),
    1,
    sym_scoped_name,
    STATE(476),
    1,
    sym_enum_anno,
    ACTIONS(385),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(388),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(400),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(415),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(424),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(430),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(436),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(15),
    2,
    sym_comment,
    aux_sym_annotation_dcl_repeat1,
    STATE(211),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(408),
    2,
    sym_any_const_type,
    sym_const_type,
    STATE(199),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(201),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(419),
    3,
    sym_typedef_dcl,
    sym_enum_dcl,
    sym_const_dcl,
    STATE(429),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [280] = 40,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(37),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(47),
    1,
    anon_sym_longlong,
    ACTIONS(49),
    1,
    anon_sym_int64,
    ACTIONS(51),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(57),
    1,
    sym_signed_tiny_int,
    ACTIONS(59),
    1,
    anon_sym_unsignedshort,
    ACTIONS(61),
    1,
    anon_sym_uint16,
    ACTIONS(65),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(67),
    1,
    anon_sym_uint64,
    ACTIONS(71),
    1,
    anon_sym_longdouble,
    ACTIONS(75),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(81),
    1,
    anon_sym_sequence,
    ACTIONS(103),
    1,
    anon_sym_enum,
    ACTIONS(105),
    1,
    anon_sym_const,
    ACTIONS(111),
    1,
    anon_sym_typedef,
    ACTIONS(115),
    1,
    sym_identifier,
    ACTIONS(379),
    1,
    anon_sym_fixed,
    ACTIONS(381),
    1,
    anon_sym_any,
    ACTIONS(462),
    1,
    anon_sym_RBRACE,
    STATE(15),
    1,
    aux_sym_annotation_dcl_repeat1,
    STATE(16),
    1,
    sym_comment,
    STATE(62),
    1,
    sym_annotation_body,
    STATE(63),
    1,
    sym_annotation_member,
    STATE(310),
    1,
    sym_annotation_member_type,
    STATE(394),
    1,
    sym_scoped_name,
    STATE(476),
    1,
    sym_enum_anno,
    ACTIONS(43),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(45),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(63),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(69),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(73),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(77),
    2,
    anon_sym_string,
    anon_sym_wstring,
    ACTIONS(377),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(211),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(408),
    2,
    sym_any_const_type,
    sym_const_type,
    STATE(199),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(201),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(419),
    3,
    sym_typedef_dcl,
    sym_enum_dcl,
    sym_const_dcl,
    STATE(429),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [421] = 39,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(47),
    1,
    anon_sym_longlong,
    ACTIONS(49),
    1,
    anon_sym_int64,
    ACTIONS(51),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(55),
    1,
    anon_sym_fixed,
    ACTIONS(57),
    1,
    sym_signed_tiny_int,
    ACTIONS(59),
    1,
    anon_sym_unsignedshort,
    ACTIONS(61),
    1,
    anon_sym_uint16,
    ACTIONS(65),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(67),
    1,
    anon_sym_uint64,
    ACTIONS(71),
    1,
    anon_sym_longdouble,
    ACTIONS(75),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(79),
    1,
    anon_sym_any,
    ACTIONS(81),
    1,
    anon_sym_sequence,
    ACTIONS(83),
    1,
    anon_sym_map,
    ACTIONS(115),
    1,
    sym_identifier,
    ACTIONS(464),
    1,
    anon_sym_RBRACE,
    ACTIONS(466),
    1,
    anon_sym_AT,
    STATE(17),
    1,
    sym_comment,
    STATE(24),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(28),
    1,
    aux_sym_interface_def_repeat1,
    STATE(69),
    1,
    sym_member,
    STATE(77),
    1,
    sym_annotation_appl,
    STATE(170),
    1,
    sym_type_spec,
    STATE(215),
    1,
    sym_scoped_name,
    STATE(276),
    1,
    sym_base_type_spec,
    ACTIONS(43),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(45),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(53),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(63),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(69),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(73),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(77),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(211),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(289),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(199),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(201),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(270),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(273),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [558] = 39,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(47),
    1,
    anon_sym_longlong,
    ACTIONS(49),
    1,
    anon_sym_int64,
    ACTIONS(51),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(55),
    1,
    anon_sym_fixed,
    ACTIONS(57),
    1,
    sym_signed_tiny_int,
    ACTIONS(59),
    1,
    anon_sym_unsignedshort,
    ACTIONS(61),
    1,
    anon_sym_uint16,
    ACTIONS(65),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(67),
    1,
    anon_sym_uint64,
    ACTIONS(71),
    1,
    anon_sym_longdouble,
    ACTIONS(75),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(79),
    1,
    anon_sym_any,
    ACTIONS(81),
    1,
    anon_sym_sequence,
    ACTIONS(83),
    1,
    anon_sym_map,
    ACTIONS(115),
    1,
    sym_identifier,
    ACTIONS(466),
    1,
    anon_sym_AT,
    ACTIONS(468),
    1,
    anon_sym_RBRACE,
    STATE(18),
    1,
    sym_comment,
    STATE(19),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(28),
    1,
    aux_sym_interface_def_repeat1,
    STATE(69),
    1,
    sym_member,
    STATE(77),
    1,
    sym_annotation_appl,
    STATE(170),
    1,
    sym_type_spec,
    STATE(215),
    1,
    sym_scoped_name,
    STATE(276),
    1,
    sym_base_type_spec,
    ACTIONS(43),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(45),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(53),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(63),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(69),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(73),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(77),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(211),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(289),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(199),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(201),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(270),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(273),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [695] = 39,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(47),
    1,
    anon_sym_longlong,
    ACTIONS(49),
    1,
    anon_sym_int64,
    ACTIONS(51),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(55),
    1,
    anon_sym_fixed,
    ACTIONS(57),
    1,
    sym_signed_tiny_int,
    ACTIONS(59),
    1,
    anon_sym_unsignedshort,
    ACTIONS(61),
    1,
    anon_sym_uint16,
    ACTIONS(65),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(67),
    1,
    anon_sym_uint64,
    ACTIONS(71),
    1,
    anon_sym_longdouble,
    ACTIONS(75),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(79),
    1,
    anon_sym_any,
    ACTIONS(81),
    1,
    anon_sym_sequence,
    ACTIONS(83),
    1,
    anon_sym_map,
    ACTIONS(115),
    1,
    sym_identifier,
    ACTIONS(466),
    1,
    anon_sym_AT,
    ACTIONS(470),
    1,
    anon_sym_RBRACE,
    STATE(19),
    1,
    sym_comment,
    STATE(24),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(28),
    1,
    aux_sym_interface_def_repeat1,
    STATE(69),
    1,
    sym_member,
    STATE(77),
    1,
    sym_annotation_appl,
    STATE(170),
    1,
    sym_type_spec,
    STATE(215),
    1,
    sym_scoped_name,
    STATE(276),
    1,
    sym_base_type_spec,
    ACTIONS(43),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(45),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(53),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(63),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(69),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(73),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(77),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(211),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(289),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(199),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(201),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(270),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(273),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [832] = 39,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(47),
    1,
    anon_sym_longlong,
    ACTIONS(49),
    1,
    anon_sym_int64,
    ACTIONS(51),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(55),
    1,
    anon_sym_fixed,
    ACTIONS(57),
    1,
    sym_signed_tiny_int,
    ACTIONS(59),
    1,
    anon_sym_unsignedshort,
    ACTIONS(61),
    1,
    anon_sym_uint16,
    ACTIONS(65),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(67),
    1,
    anon_sym_uint64,
    ACTIONS(71),
    1,
    anon_sym_longdouble,
    ACTIONS(75),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(79),
    1,
    anon_sym_any,
    ACTIONS(81),
    1,
    anon_sym_sequence,
    ACTIONS(83),
    1,
    anon_sym_map,
    ACTIONS(115),
    1,
    sym_identifier,
    ACTIONS(466),
    1,
    anon_sym_AT,
    ACTIONS(472),
    1,
    anon_sym_RBRACE,
    STATE(20),
    1,
    sym_comment,
    STATE(24),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(28),
    1,
    aux_sym_interface_def_repeat1,
    STATE(69),
    1,
    sym_member,
    STATE(77),
    1,
    sym_annotation_appl,
    STATE(170),
    1,
    sym_type_spec,
    STATE(215),
    1,
    sym_scoped_name,
    STATE(276),
    1,
    sym_base_type_spec,
    ACTIONS(43),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(45),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(53),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(63),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(69),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(73),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(77),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(211),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(289),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(199),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(201),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(270),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(273),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [969] = 39,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(47),
    1,
    anon_sym_longlong,
    ACTIONS(49),
    1,
    anon_sym_int64,
    ACTIONS(51),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(55),
    1,
    anon_sym_fixed,
    ACTIONS(57),
    1,
    sym_signed_tiny_int,
    ACTIONS(59),
    1,
    anon_sym_unsignedshort,
    ACTIONS(61),
    1,
    anon_sym_uint16,
    ACTIONS(65),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(67),
    1,
    anon_sym_uint64,
    ACTIONS(71),
    1,
    anon_sym_longdouble,
    ACTIONS(75),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(79),
    1,
    anon_sym_any,
    ACTIONS(81),
    1,
    anon_sym_sequence,
    ACTIONS(83),
    1,
    anon_sym_map,
    ACTIONS(115),
    1,
    sym_identifier,
    ACTIONS(466),
    1,
    anon_sym_AT,
    ACTIONS(474),
    1,
    anon_sym_RBRACE,
    STATE(21),
    1,
    sym_comment,
    STATE(24),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(28),
    1,
    aux_sym_interface_def_repeat1,
    STATE(69),
    1,
    sym_member,
    STATE(77),
    1,
    sym_annotation_appl,
    STATE(170),
    1,
    sym_type_spec,
    STATE(215),
    1,
    sym_scoped_name,
    STATE(276),
    1,
    sym_base_type_spec,
    ACTIONS(43),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(45),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(53),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(63),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(69),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(73),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(77),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(211),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(289),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(199),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(201),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(270),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(273),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [1106] = 39,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(47),
    1,
    anon_sym_longlong,
    ACTIONS(49),
    1,
    anon_sym_int64,
    ACTIONS(51),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(55),
    1,
    anon_sym_fixed,
    ACTIONS(57),
    1,
    sym_signed_tiny_int,
    ACTIONS(59),
    1,
    anon_sym_unsignedshort,
    ACTIONS(61),
    1,
    anon_sym_uint16,
    ACTIONS(65),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(67),
    1,
    anon_sym_uint64,
    ACTIONS(71),
    1,
    anon_sym_longdouble,
    ACTIONS(75),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(79),
    1,
    anon_sym_any,
    ACTIONS(81),
    1,
    anon_sym_sequence,
    ACTIONS(83),
    1,
    anon_sym_map,
    ACTIONS(115),
    1,
    sym_identifier,
    ACTIONS(466),
    1,
    anon_sym_AT,
    ACTIONS(476),
    1,
    anon_sym_RBRACE,
    STATE(21),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(22),
    1,
    sym_comment,
    STATE(28),
    1,
    aux_sym_interface_def_repeat1,
    STATE(69),
    1,
    sym_member,
    STATE(77),
    1,
    sym_annotation_appl,
    STATE(170),
    1,
    sym_type_spec,
    STATE(215),
    1,
    sym_scoped_name,
    STATE(276),
    1,
    sym_base_type_spec,
    ACTIONS(43),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(45),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(53),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(63),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(69),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(73),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(77),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(211),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(289),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(199),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(201),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(270),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(273),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [1243] = 39,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(47),
    1,
    anon_sym_longlong,
    ACTIONS(49),
    1,
    anon_sym_int64,
    ACTIONS(51),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(55),
    1,
    anon_sym_fixed,
    ACTIONS(57),
    1,
    sym_signed_tiny_int,
    ACTIONS(59),
    1,
    anon_sym_unsignedshort,
    ACTIONS(61),
    1,
    anon_sym_uint16,
    ACTIONS(65),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(67),
    1,
    anon_sym_uint64,
    ACTIONS(71),
    1,
    anon_sym_longdouble,
    ACTIONS(75),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(79),
    1,
    anon_sym_any,
    ACTIONS(81),
    1,
    anon_sym_sequence,
    ACTIONS(83),
    1,
    anon_sym_map,
    ACTIONS(115),
    1,
    sym_identifier,
    ACTIONS(466),
    1,
    anon_sym_AT,
    ACTIONS(472),
    1,
    anon_sym_RBRACE,
    STATE(23),
    1,
    sym_comment,
    STATE(27),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(28),
    1,
    aux_sym_interface_def_repeat1,
    STATE(69),
    1,
    sym_member,
    STATE(77),
    1,
    sym_annotation_appl,
    STATE(170),
    1,
    sym_type_spec,
    STATE(215),
    1,
    sym_scoped_name,
    STATE(276),
    1,
    sym_base_type_spec,
    ACTIONS(43),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(45),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(53),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(63),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(69),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(73),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(77),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(211),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(289),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(199),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(201),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(270),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(273),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [1380] = 38,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(484),
    1,
    anon_sym_longlong,
    ACTIONS(487),
    1,
    anon_sym_int64,
    ACTIONS(490),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(496),
    1,
    anon_sym_fixed,
    ACTIONS(499),
    1,
    sym_signed_tiny_int,
    ACTIONS(502),
    1,
    anon_sym_unsignedshort,
    ACTIONS(505),
    1,
    anon_sym_uint16,
    ACTIONS(511),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(514),
    1,
    anon_sym_uint64,
    ACTIONS(520),
    1,
    anon_sym_longdouble,
    ACTIONS(526),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(532),
    1,
    anon_sym_any,
    ACTIONS(535),
    1,
    anon_sym_sequence,
    ACTIONS(538),
    1,
    anon_sym_map,
    ACTIONS(541),
    1,
    anon_sym_RBRACE,
    ACTIONS(543),
    1,
    anon_sym_AT,
    ACTIONS(546),
    1,
    sym_identifier,
    STATE(28),
    1,
    aux_sym_interface_def_repeat1,
    STATE(69),
    1,
    sym_member,
    STATE(77),
    1,
    sym_annotation_appl,
    STATE(170),
    1,
    sym_type_spec,
    STATE(215),
    1,
    sym_scoped_name,
    STATE(276),
    1,
    sym_base_type_spec,
    ACTIONS(478),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(481),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(493),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(508),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(517),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(523),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(529),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(24),
    2,
    sym_comment,
    aux_sym_except_dcl_repeat1,
    STATE(211),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(289),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(199),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(201),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(270),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(273),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [1515] = 39,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(47),
    1,
    anon_sym_longlong,
    ACTIONS(49),
    1,
    anon_sym_int64,
    ACTIONS(51),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(55),
    1,
    anon_sym_fixed,
    ACTIONS(57),
    1,
    sym_signed_tiny_int,
    ACTIONS(59),
    1,
    anon_sym_unsignedshort,
    ACTIONS(61),
    1,
    anon_sym_uint16,
    ACTIONS(65),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(67),
    1,
    anon_sym_uint64,
    ACTIONS(71),
    1,
    anon_sym_longdouble,
    ACTIONS(75),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(79),
    1,
    anon_sym_any,
    ACTIONS(81),
    1,
    anon_sym_sequence,
    ACTIONS(83),
    1,
    anon_sym_map,
    ACTIONS(115),
    1,
    sym_identifier,
    ACTIONS(466),
    1,
    anon_sym_AT,
    ACTIONS(549),
    1,
    anon_sym_RBRACE,
    STATE(17),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(25),
    1,
    sym_comment,
    STATE(28),
    1,
    aux_sym_interface_def_repeat1,
    STATE(69),
    1,
    sym_member,
    STATE(77),
    1,
    sym_annotation_appl,
    STATE(170),
    1,
    sym_type_spec,
    STATE(215),
    1,
    sym_scoped_name,
    STATE(276),
    1,
    sym_base_type_spec,
    ACTIONS(43),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(45),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(53),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(63),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(69),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(73),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(77),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(211),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(289),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(199),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(201),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(270),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(273),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [1652] = 39,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(47),
    1,
    anon_sym_longlong,
    ACTIONS(49),
    1,
    anon_sym_int64,
    ACTIONS(51),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(55),
    1,
    anon_sym_fixed,
    ACTIONS(57),
    1,
    sym_signed_tiny_int,
    ACTIONS(59),
    1,
    anon_sym_unsignedshort,
    ACTIONS(61),
    1,
    anon_sym_uint16,
    ACTIONS(65),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(67),
    1,
    anon_sym_uint64,
    ACTIONS(71),
    1,
    anon_sym_longdouble,
    ACTIONS(75),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(79),
    1,
    anon_sym_any,
    ACTIONS(81),
    1,
    anon_sym_sequence,
    ACTIONS(83),
    1,
    anon_sym_map,
    ACTIONS(115),
    1,
    sym_identifier,
    ACTIONS(466),
    1,
    anon_sym_AT,
    ACTIONS(551),
    1,
    anon_sym_RBRACE,
    STATE(20),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(26),
    1,
    sym_comment,
    STATE(28),
    1,
    aux_sym_interface_def_repeat1,
    STATE(69),
    1,
    sym_member,
    STATE(77),
    1,
    sym_annotation_appl,
    STATE(170),
    1,
    sym_type_spec,
    STATE(215),
    1,
    sym_scoped_name,
    STATE(276),
    1,
    sym_base_type_spec,
    ACTIONS(43),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(45),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(53),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(63),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(69),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(73),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(77),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(211),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(289),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(199),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(201),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(270),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(273),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [1789] = 39,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(47),
    1,
    anon_sym_longlong,
    ACTIONS(49),
    1,
    anon_sym_int64,
    ACTIONS(51),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(55),
    1,
    anon_sym_fixed,
    ACTIONS(57),
    1,
    sym_signed_tiny_int,
    ACTIONS(59),
    1,
    anon_sym_unsignedshort,
    ACTIONS(61),
    1,
    anon_sym_uint16,
    ACTIONS(65),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(67),
    1,
    anon_sym_uint64,
    ACTIONS(71),
    1,
    anon_sym_longdouble,
    ACTIONS(75),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(79),
    1,
    anon_sym_any,
    ACTIONS(81),
    1,
    anon_sym_sequence,
    ACTIONS(83),
    1,
    anon_sym_map,
    ACTIONS(115),
    1,
    sym_identifier,
    ACTIONS(466),
    1,
    anon_sym_AT,
    ACTIONS(553),
    1,
    anon_sym_RBRACE,
    STATE(24),
    1,
    aux_sym_except_dcl_repeat1,
    STATE(27),
    1,
    sym_comment,
    STATE(28),
    1,
    aux_sym_interface_def_repeat1,
    STATE(69),
    1,
    sym_member,
    STATE(77),
    1,
    sym_annotation_appl,
    STATE(170),
    1,
    sym_type_spec,
    STATE(215),
    1,
    sym_scoped_name,
    STATE(276),
    1,
    sym_base_type_spec,
    ACTIONS(43),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(45),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(53),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(63),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(69),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(73),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(77),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(211),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(289),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(199),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(201),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(270),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(273),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [1926] = 36,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(47),
    1,
    anon_sym_longlong,
    ACTIONS(49),
    1,
    anon_sym_int64,
    ACTIONS(51),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(55),
    1,
    anon_sym_fixed,
    ACTIONS(57),
    1,
    sym_signed_tiny_int,
    ACTIONS(59),
    1,
    anon_sym_unsignedshort,
    ACTIONS(61),
    1,
    anon_sym_uint16,
    ACTIONS(65),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(67),
    1,
    anon_sym_uint64,
    ACTIONS(71),
    1,
    anon_sym_longdouble,
    ACTIONS(75),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(79),
    1,
    anon_sym_any,
    ACTIONS(81),
    1,
    anon_sym_sequence,
    ACTIONS(83),
    1,
    anon_sym_map,
    ACTIONS(115),
    1,
    sym_identifier,
    ACTIONS(466),
    1,
    anon_sym_AT,
    STATE(28),
    1,
    sym_comment,
    STATE(66),
    1,
    aux_sym_interface_def_repeat1,
    STATE(77),
    1,
    sym_annotation_appl,
    STATE(182),
    1,
    sym_type_spec,
    STATE(215),
    1,
    sym_scoped_name,
    STATE(276),
    1,
    sym_base_type_spec,
    ACTIONS(43),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(45),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(53),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(63),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(69),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(73),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(77),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(211),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(289),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(199),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(201),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(270),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(273),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [2054] = 33,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(47),
    1,
    anon_sym_longlong,
    ACTIONS(49),
    1,
    anon_sym_int64,
    ACTIONS(51),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(57),
    1,
    sym_signed_tiny_int,
    ACTIONS(59),
    1,
    anon_sym_unsignedshort,
    ACTIONS(61),
    1,
    anon_sym_uint16,
    ACTIONS(65),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(67),
    1,
    anon_sym_uint64,
    ACTIONS(71),
    1,
    anon_sym_longdouble,
    ACTIONS(75),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(79),
    1,
    anon_sym_any,
    ACTIONS(115),
    1,
    sym_identifier,
    ACTIONS(555),
    1,
    anon_sym_sequence,
    ACTIONS(559),
    1,
    anon_sym_const,
    STATE(29),
    1,
    sym_comment,
    STATE(215),
    1,
    sym_scoped_name,
    STATE(226),
    1,
    sym_formal_parameter,
    STATE(276),
    1,
    sym_base_type_spec,
    STATE(526),
    1,
    sym_formal_parameter_type,
    STATE(534),
    1,
    sym_formal_parameters,
    ACTIONS(43),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(45),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(53),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(63),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(69),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(73),
    2,
    anon_sym_char,
    anon_sym_wchar,
    STATE(211),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(539),
    2,
    sym_simple_type_spec,
    sym_sequence_type,
    STATE(199),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(201),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(270),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    ACTIONS(557),
    8,
    anon_sym_exception,
    anon_sym_interface,
    anon_sym_typename,
    anon_sym_valuetype,
    anon_sym_eventtype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    [2176] = 32,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(47),
    1,
    anon_sym_longlong,
    ACTIONS(49),
    1,
    anon_sym_int64,
    ACTIONS(51),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(57),
    1,
    sym_signed_tiny_int,
    ACTIONS(59),
    1,
    anon_sym_unsignedshort,
    ACTIONS(61),
    1,
    anon_sym_uint16,
    ACTIONS(65),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(67),
    1,
    anon_sym_uint64,
    ACTIONS(71),
    1,
    anon_sym_longdouble,
    ACTIONS(75),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(79),
    1,
    anon_sym_any,
    ACTIONS(115),
    1,
    sym_identifier,
    ACTIONS(555),
    1,
    anon_sym_sequence,
    ACTIONS(559),
    1,
    anon_sym_const,
    STATE(30),
    1,
    sym_comment,
    STATE(215),
    1,
    sym_scoped_name,
    STATE(276),
    1,
    sym_base_type_spec,
    STATE(370),
    1,
    sym_formal_parameter,
    STATE(526),
    1,
    sym_formal_parameter_type,
    ACTIONS(43),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(45),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(53),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(63),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(69),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(73),
    2,
    anon_sym_char,
    anon_sym_wchar,
    STATE(211),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(539),
    2,
    sym_simple_type_spec,
    sym_sequence_type,
    STATE(199),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(201),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(270),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    ACTIONS(557),
    8,
    anon_sym_exception,
    anon_sym_interface,
    anon_sym_typename,
    anon_sym_valuetype,
    anon_sym_eventtype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    [2295] = 35,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(47),
    1,
    anon_sym_longlong,
    ACTIONS(49),
    1,
    anon_sym_int64,
    ACTIONS(51),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(55),
    1,
    anon_sym_fixed,
    ACTIONS(57),
    1,
    sym_signed_tiny_int,
    ACTIONS(59),
    1,
    anon_sym_unsignedshort,
    ACTIONS(61),
    1,
    anon_sym_uint16,
    ACTIONS(65),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(67),
    1,
    anon_sym_uint64,
    ACTIONS(71),
    1,
    anon_sym_longdouble,
    ACTIONS(75),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(79),
    1,
    anon_sym_any,
    ACTIONS(81),
    1,
    anon_sym_sequence,
    ACTIONS(83),
    1,
    anon_sym_map,
    ACTIONS(115),
    1,
    sym_identifier,
    ACTIONS(561),
    1,
    anon_sym_GT,
    ACTIONS(563),
    1,
    anon_sym_COMMA,
    STATE(31),
    1,
    sym_comment,
    STATE(215),
    1,
    sym_scoped_name,
    STATE(276),
    1,
    sym_base_type_spec,
    STATE(479),
    1,
    sym_type_spec,
    ACTIONS(43),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(45),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(53),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(63),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(69),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(73),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(77),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(211),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(289),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(199),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(201),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(270),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(273),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [2420] = 33,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(47),
    1,
    anon_sym_longlong,
    ACTIONS(49),
    1,
    anon_sym_int64,
    ACTIONS(51),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(55),
    1,
    anon_sym_fixed,
    ACTIONS(57),
    1,
    sym_signed_tiny_int,
    ACTIONS(59),
    1,
    anon_sym_unsignedshort,
    ACTIONS(61),
    1,
    anon_sym_uint16,
    ACTIONS(65),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(67),
    1,
    anon_sym_uint64,
    ACTIONS(71),
    1,
    anon_sym_longdouble,
    ACTIONS(75),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(79),
    1,
    anon_sym_any,
    ACTIONS(81),
    1,
    anon_sym_sequence,
    ACTIONS(83),
    1,
    anon_sym_map,
    ACTIONS(115),
    1,
    sym_identifier,
    STATE(32),
    1,
    sym_comment,
    STATE(172),
    1,
    sym_type_spec,
    STATE(215),
    1,
    sym_scoped_name,
    STATE(276),
    1,
    sym_base_type_spec,
    ACTIONS(43),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(45),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(53),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(63),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(69),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(73),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(77),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(211),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(289),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(199),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(201),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(270),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(273),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [2539] = 33,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(47),
    1,
    anon_sym_longlong,
    ACTIONS(49),
    1,
    anon_sym_int64,
    ACTIONS(51),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(55),
    1,
    anon_sym_fixed,
    ACTIONS(57),
    1,
    sym_signed_tiny_int,
    ACTIONS(59),
    1,
    anon_sym_unsignedshort,
    ACTIONS(61),
    1,
    anon_sym_uint16,
    ACTIONS(65),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(67),
    1,
    anon_sym_uint64,
    ACTIONS(71),
    1,
    anon_sym_longdouble,
    ACTIONS(75),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(79),
    1,
    anon_sym_any,
    ACTIONS(81),
    1,
    anon_sym_sequence,
    ACTIONS(83),
    1,
    anon_sym_map,
    ACTIONS(115),
    1,
    sym_identifier,
    STATE(33),
    1,
    sym_comment,
    STATE(215),
    1,
    sym_scoped_name,
    STATE(249),
    1,
    sym_type_spec,
    STATE(276),
    1,
    sym_base_type_spec,
    ACTIONS(43),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(45),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(53),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(63),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(69),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(73),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(77),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(211),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(289),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(199),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(201),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(270),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(273),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [2658] = 34,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(9),
    1,
    anon_sym_exception,
    ACTIONS(11),
    1,
    anon_sym_interface,
    ACTIONS(13),
    1,
    anon_sym_local,
    ACTIONS(15),
    1,
    anon_sym_bitset,
    ACTIONS(17),
    1,
    anon_sym_bitmask,
    ACTIONS(19),
    1,
    anon_sym_ATannotation,
    ACTIONS(21),
    1,
    anon_sym_AT,
    ACTIONS(23),
    1,
    anon_sym_module,
    ACTIONS(25),
    1,
    anon_sym_valuetype,
    ACTIONS(27),
    1,
    anon_sym_struct,
    ACTIONS(29),
    1,
    anon_sym_union,
    ACTIONS(31),
    1,
    anon_sym_enum,
    ACTIONS(33),
    1,
    anon_sym_const,
    ACTIONS(35),
    1,
    anon_sym_typedef,
    ACTIONS(37),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(39),
    1,
    anon_sym_native,
    ACTIONS(565),
    1,
    anon_sym_RBRACE,
    ACTIONS(567),
    1,
    anon_sym_alias,
    ACTIONS(569),
    1,
    anon_sym_POUNDdefine,
    STATE(34),
    1,
    sym_comment,
    STATE(38),
    1,
    aux_sym_template_module_dcl_repeat1,
    STATE(107),
    1,
    sym_predefine,
    STATE(113),
    1,
    sym_tpl_definition,
    STATE(115),
    1,
    sym__definition,
    STATE(144),
    1,
    aux_sym_interface_def_repeat1,
    STATE(167),
    1,
    sym_annotation_appl,
    STATE(428),
    1,
    sym_template_module_ref,
    STATE(476),
    1,
    sym_enum_anno,
    STATE(481),
    1,
    sym_value_header,
    STATE(492),
    1,
    sym_interface_header,
    STATE(490),
    2,
    sym_value_def,
    sym_value_forward_dcl,
    STATE(495),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(497),
    17,
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
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_const_dcl,
    [2779] = 33,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(47),
    1,
    anon_sym_longlong,
    ACTIONS(49),
    1,
    anon_sym_int64,
    ACTIONS(51),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(55),
    1,
    anon_sym_fixed,
    ACTIONS(57),
    1,
    sym_signed_tiny_int,
    ACTIONS(59),
    1,
    anon_sym_unsignedshort,
    ACTIONS(61),
    1,
    anon_sym_uint16,
    ACTIONS(65),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(67),
    1,
    anon_sym_uint64,
    ACTIONS(71),
    1,
    anon_sym_longdouble,
    ACTIONS(75),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(79),
    1,
    anon_sym_any,
    ACTIONS(81),
    1,
    anon_sym_sequence,
    ACTIONS(83),
    1,
    anon_sym_map,
    ACTIONS(115),
    1,
    sym_identifier,
    STATE(35),
    1,
    sym_comment,
    STATE(215),
    1,
    sym_scoped_name,
    STATE(276),
    1,
    sym_base_type_spec,
    STATE(299),
    1,
    sym_type_spec,
    ACTIONS(43),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(45),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(53),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(63),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(69),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(73),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(77),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(211),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(289),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(199),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(201),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(270),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(273),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [2898] = 33,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(47),
    1,
    anon_sym_longlong,
    ACTIONS(49),
    1,
    anon_sym_int64,
    ACTIONS(51),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(55),
    1,
    anon_sym_fixed,
    ACTIONS(57),
    1,
    sym_signed_tiny_int,
    ACTIONS(59),
    1,
    anon_sym_unsignedshort,
    ACTIONS(61),
    1,
    anon_sym_uint16,
    ACTIONS(65),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(67),
    1,
    anon_sym_uint64,
    ACTIONS(71),
    1,
    anon_sym_longdouble,
    ACTIONS(75),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(79),
    1,
    anon_sym_any,
    ACTIONS(81),
    1,
    anon_sym_sequence,
    ACTIONS(83),
    1,
    anon_sym_map,
    ACTIONS(115),
    1,
    sym_identifier,
    STATE(36),
    1,
    sym_comment,
    STATE(215),
    1,
    sym_scoped_name,
    STATE(276),
    1,
    sym_base_type_spec,
    STATE(360),
    1,
    sym_type_spec,
    ACTIONS(43),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(45),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(53),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(63),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(69),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(73),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(77),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(211),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(289),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(199),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(201),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(270),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(273),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [3017] = 33,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(47),
    1,
    anon_sym_longlong,
    ACTIONS(49),
    1,
    anon_sym_int64,
    ACTIONS(51),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(55),
    1,
    anon_sym_fixed,
    ACTIONS(57),
    1,
    sym_signed_tiny_int,
    ACTIONS(59),
    1,
    anon_sym_unsignedshort,
    ACTIONS(61),
    1,
    anon_sym_uint16,
    ACTIONS(65),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(67),
    1,
    anon_sym_uint64,
    ACTIONS(71),
    1,
    anon_sym_longdouble,
    ACTIONS(79),
    1,
    anon_sym_any,
    ACTIONS(81),
    1,
    anon_sym_sequence,
    ACTIONS(83),
    1,
    anon_sym_map,
    ACTIONS(353),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(371),
    1,
    sym_identifier,
    STATE(37),
    1,
    sym_comment,
    STATE(276),
    1,
    sym_base_type_spec,
    STATE(312),
    1,
    sym_scoped_name,
    STATE(471),
    1,
    sym_type_spec,
    ACTIONS(43),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(45),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(53),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(63),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(69),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(73),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(77),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(211),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(289),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(199),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(201),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(270),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(273),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [3136] = 33,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(571),
    1,
    anon_sym_exception,
    ACTIONS(574),
    1,
    anon_sym_RBRACE,
    ACTIONS(576),
    1,
    anon_sym_interface,
    ACTIONS(579),
    1,
    anon_sym_local,
    ACTIONS(582),
    1,
    anon_sym_bitset,
    ACTIONS(585),
    1,
    anon_sym_bitmask,
    ACTIONS(588),
    1,
    anon_sym_ATannotation,
    ACTIONS(591),
    1,
    anon_sym_AT,
    ACTIONS(594),
    1,
    anon_sym_module,
    ACTIONS(597),
    1,
    anon_sym_valuetype,
    ACTIONS(600),
    1,
    anon_sym_struct,
    ACTIONS(603),
    1,
    anon_sym_union,
    ACTIONS(606),
    1,
    anon_sym_enum,
    ACTIONS(609),
    1,
    anon_sym_const,
    ACTIONS(612),
    1,
    anon_sym_alias,
    ACTIONS(615),
    1,
    anon_sym_typedef,
    ACTIONS(618),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(621),
    1,
    anon_sym_native,
    ACTIONS(624),
    1,
    anon_sym_POUNDdefine,
    STATE(107),
    1,
    sym_predefine,
    STATE(113),
    1,
    sym_tpl_definition,
    STATE(115),
    1,
    sym__definition,
    STATE(144),
    1,
    aux_sym_interface_def_repeat1,
    STATE(167),
    1,
    sym_annotation_appl,
    STATE(428),
    1,
    sym_template_module_ref,
    STATE(476),
    1,
    sym_enum_anno,
    STATE(481),
    1,
    sym_value_header,
    STATE(492),
    1,
    sym_interface_header,
    STATE(38),
    2,
    sym_comment,
    aux_sym_template_module_dcl_repeat1,
    STATE(490),
    2,
    sym_value_def,
    sym_value_forward_dcl,
    STATE(495),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(497),
    17,
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
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_const_dcl,
    [3255] = 34,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(9),
    1,
    anon_sym_exception,
    ACTIONS(11),
    1,
    anon_sym_interface,
    ACTIONS(13),
    1,
    anon_sym_local,
    ACTIONS(15),
    1,
    anon_sym_bitset,
    ACTIONS(17),
    1,
    anon_sym_bitmask,
    ACTIONS(19),
    1,
    anon_sym_ATannotation,
    ACTIONS(21),
    1,
    anon_sym_AT,
    ACTIONS(23),
    1,
    anon_sym_module,
    ACTIONS(25),
    1,
    anon_sym_valuetype,
    ACTIONS(27),
    1,
    anon_sym_struct,
    ACTIONS(29),
    1,
    anon_sym_union,
    ACTIONS(31),
    1,
    anon_sym_enum,
    ACTIONS(33),
    1,
    anon_sym_const,
    ACTIONS(35),
    1,
    anon_sym_typedef,
    ACTIONS(37),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(39),
    1,
    anon_sym_native,
    ACTIONS(567),
    1,
    anon_sym_alias,
    ACTIONS(569),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(627),
    1,
    anon_sym_RBRACE,
    STATE(34),
    1,
    aux_sym_template_module_dcl_repeat1,
    STATE(39),
    1,
    sym_comment,
    STATE(107),
    1,
    sym_predefine,
    STATE(113),
    1,
    sym_tpl_definition,
    STATE(115),
    1,
    sym__definition,
    STATE(144),
    1,
    aux_sym_interface_def_repeat1,
    STATE(167),
    1,
    sym_annotation_appl,
    STATE(428),
    1,
    sym_template_module_ref,
    STATE(476),
    1,
    sym_enum_anno,
    STATE(481),
    1,
    sym_value_header,
    STATE(492),
    1,
    sym_interface_header,
    STATE(490),
    2,
    sym_value_def,
    sym_value_forward_dcl,
    STATE(495),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(497),
    17,
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
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_const_dcl,
    [3376] = 34,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(7),
    1,
    sym_preproc_directive,
    ACTIONS(9),
    1,
    anon_sym_exception,
    ACTIONS(11),
    1,
    anon_sym_interface,
    ACTIONS(13),
    1,
    anon_sym_local,
    ACTIONS(15),
    1,
    anon_sym_bitset,
    ACTIONS(17),
    1,
    anon_sym_bitmask,
    ACTIONS(19),
    1,
    anon_sym_ATannotation,
    ACTIONS(21),
    1,
    anon_sym_AT,
    ACTIONS(23),
    1,
    anon_sym_module,
    ACTIONS(25),
    1,
    anon_sym_valuetype,
    ACTIONS(27),
    1,
    anon_sym_struct,
    ACTIONS(29),
    1,
    anon_sym_union,
    ACTIONS(31),
    1,
    anon_sym_enum,
    ACTIONS(33),
    1,
    anon_sym_const,
    ACTIONS(35),
    1,
    anon_sym_typedef,
    ACTIONS(37),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(39),
    1,
    anon_sym_native,
    ACTIONS(41),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(629),
    1,
    ts_builtin_sym_end,
    STATE(40),
    1,
    sym_comment,
    STATE(53),
    1,
    aux_sym_specification_repeat2,
    STATE(104),
    1,
    aux_sym_specification_repeat1,
    STATE(107),
    1,
    sym_predefine,
    STATE(111),
    1,
    sym_preproc_call,
    STATE(112),
    1,
    sym__definition,
    STATE(144),
    1,
    aux_sym_interface_def_repeat1,
    STATE(167),
    1,
    sym_annotation_appl,
    STATE(476),
    1,
    sym_enum_anno,
    STATE(481),
    1,
    sym_value_header,
    STATE(492),
    1,
    sym_interface_header,
    STATE(490),
    2,
    sym_value_def,
    sym_value_forward_dcl,
    STATE(495),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(497),
    17,
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
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_const_dcl,
    [3497] = 33,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(47),
    1,
    anon_sym_longlong,
    ACTIONS(49),
    1,
    anon_sym_int64,
    ACTIONS(51),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(55),
    1,
    anon_sym_fixed,
    ACTIONS(57),
    1,
    sym_signed_tiny_int,
    ACTIONS(59),
    1,
    anon_sym_unsignedshort,
    ACTIONS(61),
    1,
    anon_sym_uint16,
    ACTIONS(65),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(67),
    1,
    anon_sym_uint64,
    ACTIONS(71),
    1,
    anon_sym_longdouble,
    ACTIONS(75),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(79),
    1,
    anon_sym_any,
    ACTIONS(81),
    1,
    anon_sym_sequence,
    ACTIONS(83),
    1,
    anon_sym_map,
    ACTIONS(115),
    1,
    sym_identifier,
    STATE(41),
    1,
    sym_comment,
    STATE(215),
    1,
    sym_scoped_name,
    STATE(276),
    1,
    sym_base_type_spec,
    STATE(359),
    1,
    sym_type_spec,
    ACTIONS(43),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(45),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(53),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(63),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(69),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(73),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(77),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(211),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(289),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(199),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(201),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(270),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(273),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [3616] = 33,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(47),
    1,
    anon_sym_longlong,
    ACTIONS(49),
    1,
    anon_sym_int64,
    ACTIONS(51),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(55),
    1,
    anon_sym_fixed,
    ACTIONS(57),
    1,
    sym_signed_tiny_int,
    ACTIONS(59),
    1,
    anon_sym_unsignedshort,
    ACTIONS(61),
    1,
    anon_sym_uint16,
    ACTIONS(65),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(67),
    1,
    anon_sym_uint64,
    ACTIONS(71),
    1,
    anon_sym_longdouble,
    ACTIONS(75),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(79),
    1,
    anon_sym_any,
    ACTIONS(81),
    1,
    anon_sym_sequence,
    ACTIONS(83),
    1,
    anon_sym_map,
    ACTIONS(115),
    1,
    sym_identifier,
    STATE(42),
    1,
    sym_comment,
    STATE(215),
    1,
    sym_scoped_name,
    STATE(276),
    1,
    sym_base_type_spec,
    STATE(384),
    1,
    sym_type_spec,
    ACTIONS(43),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(45),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(53),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(63),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(69),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(73),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(77),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(211),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(289),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(199),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(201),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(270),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(273),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [3735] = 30,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(633),
    1,
    anon_sym_exception,
    ACTIONS(636),
    1,
    anon_sym_interface,
    ACTIONS(639),
    1,
    anon_sym_local,
    ACTIONS(642),
    1,
    anon_sym_bitset,
    ACTIONS(645),
    1,
    anon_sym_bitmask,
    ACTIONS(648),
    1,
    anon_sym_ATannotation,
    ACTIONS(651),
    1,
    anon_sym_AT,
    ACTIONS(654),
    1,
    anon_sym_module,
    ACTIONS(657),
    1,
    anon_sym_valuetype,
    ACTIONS(660),
    1,
    anon_sym_struct,
    ACTIONS(663),
    1,
    anon_sym_union,
    ACTIONS(666),
    1,
    anon_sym_enum,
    ACTIONS(669),
    1,
    anon_sym_const,
    ACTIONS(672),
    1,
    anon_sym_typedef,
    ACTIONS(675),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(678),
    1,
    anon_sym_native,
    ACTIONS(681),
    1,
    anon_sym_POUNDdefine,
    STATE(107),
    1,
    sym_predefine,
    STATE(112),
    1,
    sym__definition,
    STATE(144),
    1,
    aux_sym_interface_def_repeat1,
    STATE(167),
    1,
    sym_annotation_appl,
    STATE(476),
    1,
    sym_enum_anno,
    STATE(481),
    1,
    sym_value_header,
    STATE(492),
    1,
    sym_interface_header,
    ACTIONS(631),
    2,
    ts_builtin_sym_end,
    anon_sym_RBRACE,
    STATE(43),
    2,
    sym_comment,
    aux_sym_specification_repeat2,
    STATE(490),
    2,
    sym_value_def,
    sym_value_forward_dcl,
    STATE(495),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(497),
    17,
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
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_const_dcl,
    [3846] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(44),
    1,
    sym_comment,
    ACTIONS(686),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(684),
    40,
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
    anon_sym_void,
    anon_sym_readonly,
    anon_sym_attribute,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_AT,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_public,
    anon_sym_private,
    anon_sym_factory,
    anon_sym_typedef,
    anon_sym_native,
    sym_identifier,
    [3904] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(45),
    1,
    sym_comment,
    ACTIONS(690),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(688),
    40,
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
    anon_sym_void,
    anon_sym_readonly,
    anon_sym_attribute,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_AT,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_public,
    anon_sym_private,
    anon_sym_factory,
    anon_sym_typedef,
    anon_sym_native,
    sym_identifier,
    [3962] = 31,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(9),
    1,
    anon_sym_exception,
    ACTIONS(11),
    1,
    anon_sym_interface,
    ACTIONS(13),
    1,
    anon_sym_local,
    ACTIONS(15),
    1,
    anon_sym_bitset,
    ACTIONS(17),
    1,
    anon_sym_bitmask,
    ACTIONS(19),
    1,
    anon_sym_ATannotation,
    ACTIONS(21),
    1,
    anon_sym_AT,
    ACTIONS(23),
    1,
    anon_sym_module,
    ACTIONS(25),
    1,
    anon_sym_valuetype,
    ACTIONS(27),
    1,
    anon_sym_struct,
    ACTIONS(29),
    1,
    anon_sym_union,
    ACTIONS(31),
    1,
    anon_sym_enum,
    ACTIONS(33),
    1,
    anon_sym_const,
    ACTIONS(35),
    1,
    anon_sym_typedef,
    ACTIONS(37),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(39),
    1,
    anon_sym_native,
    ACTIONS(569),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(629),
    1,
    ts_builtin_sym_end,
    STATE(43),
    1,
    aux_sym_specification_repeat2,
    STATE(46),
    1,
    sym_comment,
    STATE(107),
    1,
    sym_predefine,
    STATE(112),
    1,
    sym__definition,
    STATE(144),
    1,
    aux_sym_interface_def_repeat1,
    STATE(167),
    1,
    sym_annotation_appl,
    STATE(476),
    1,
    sym_enum_anno,
    STATE(481),
    1,
    sym_value_header,
    STATE(492),
    1,
    sym_interface_header,
    STATE(490),
    2,
    sym_value_def,
    sym_value_forward_dcl,
    STATE(495),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(497),
    17,
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
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_const_dcl,
    [4074] = 31,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(9),
    1,
    anon_sym_exception,
    ACTIONS(11),
    1,
    anon_sym_interface,
    ACTIONS(13),
    1,
    anon_sym_local,
    ACTIONS(15),
    1,
    anon_sym_bitset,
    ACTIONS(17),
    1,
    anon_sym_bitmask,
    ACTIONS(19),
    1,
    anon_sym_ATannotation,
    ACTIONS(21),
    1,
    anon_sym_AT,
    ACTIONS(23),
    1,
    anon_sym_module,
    ACTIONS(25),
    1,
    anon_sym_valuetype,
    ACTIONS(27),
    1,
    anon_sym_struct,
    ACTIONS(29),
    1,
    anon_sym_union,
    ACTIONS(31),
    1,
    anon_sym_enum,
    ACTIONS(33),
    1,
    anon_sym_const,
    ACTIONS(35),
    1,
    anon_sym_typedef,
    ACTIONS(37),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(39),
    1,
    anon_sym_native,
    ACTIONS(569),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(692),
    1,
    anon_sym_RBRACE,
    STATE(47),
    1,
    sym_comment,
    STATE(52),
    1,
    aux_sym_specification_repeat2,
    STATE(107),
    1,
    sym_predefine,
    STATE(112),
    1,
    sym__definition,
    STATE(144),
    1,
    aux_sym_interface_def_repeat1,
    STATE(167),
    1,
    sym_annotation_appl,
    STATE(476),
    1,
    sym_enum_anno,
    STATE(481),
    1,
    sym_value_header,
    STATE(492),
    1,
    sym_interface_header,
    STATE(490),
    2,
    sym_value_def,
    sym_value_forward_dcl,
    STATE(495),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(497),
    17,
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
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_const_dcl,
    [4186] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(48),
    1,
    sym_comment,
    ACTIONS(696),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(694),
    40,
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
    anon_sym_void,
    anon_sym_readonly,
    anon_sym_attribute,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_AT,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_public,
    anon_sym_private,
    anon_sym_factory,
    anon_sym_typedef,
    anon_sym_native,
    sym_identifier,
    [4244] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(49),
    1,
    sym_comment,
    ACTIONS(700),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(698),
    40,
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
    anon_sym_void,
    anon_sym_readonly,
    anon_sym_attribute,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_AT,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_public,
    anon_sym_private,
    anon_sym_factory,
    anon_sym_typedef,
    anon_sym_native,
    sym_identifier,
    [4302] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(50),
    1,
    sym_comment,
    ACTIONS(704),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(702),
    40,
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
    anon_sym_void,
    anon_sym_readonly,
    anon_sym_attribute,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_AT,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_public,
    anon_sym_private,
    anon_sym_factory,
    anon_sym_typedef,
    anon_sym_native,
    sym_identifier,
    [4360] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(51),
    1,
    sym_comment,
    ACTIONS(708),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(706),
    40,
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
    anon_sym_void,
    anon_sym_readonly,
    anon_sym_attribute,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_AT,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_public,
    anon_sym_private,
    anon_sym_factory,
    anon_sym_typedef,
    anon_sym_native,
    sym_identifier,
    [4418] = 31,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(9),
    1,
    anon_sym_exception,
    ACTIONS(11),
    1,
    anon_sym_interface,
    ACTIONS(13),
    1,
    anon_sym_local,
    ACTIONS(15),
    1,
    anon_sym_bitset,
    ACTIONS(17),
    1,
    anon_sym_bitmask,
    ACTIONS(19),
    1,
    anon_sym_ATannotation,
    ACTIONS(21),
    1,
    anon_sym_AT,
    ACTIONS(23),
    1,
    anon_sym_module,
    ACTIONS(25),
    1,
    anon_sym_valuetype,
    ACTIONS(27),
    1,
    anon_sym_struct,
    ACTIONS(29),
    1,
    anon_sym_union,
    ACTIONS(31),
    1,
    anon_sym_enum,
    ACTIONS(33),
    1,
    anon_sym_const,
    ACTIONS(35),
    1,
    anon_sym_typedef,
    ACTIONS(37),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(39),
    1,
    anon_sym_native,
    ACTIONS(569),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(710),
    1,
    anon_sym_RBRACE,
    STATE(43),
    1,
    aux_sym_specification_repeat2,
    STATE(52),
    1,
    sym_comment,
    STATE(107),
    1,
    sym_predefine,
    STATE(112),
    1,
    sym__definition,
    STATE(144),
    1,
    aux_sym_interface_def_repeat1,
    STATE(167),
    1,
    sym_annotation_appl,
    STATE(476),
    1,
    sym_enum_anno,
    STATE(481),
    1,
    sym_value_header,
    STATE(492),
    1,
    sym_interface_header,
    STATE(490),
    2,
    sym_value_def,
    sym_value_forward_dcl,
    STATE(495),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(497),
    17,
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
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_const_dcl,
    [4530] = 31,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(9),
    1,
    anon_sym_exception,
    ACTIONS(11),
    1,
    anon_sym_interface,
    ACTIONS(13),
    1,
    anon_sym_local,
    ACTIONS(15),
    1,
    anon_sym_bitset,
    ACTIONS(17),
    1,
    anon_sym_bitmask,
    ACTIONS(19),
    1,
    anon_sym_ATannotation,
    ACTIONS(21),
    1,
    anon_sym_AT,
    ACTIONS(23),
    1,
    anon_sym_module,
    ACTIONS(25),
    1,
    anon_sym_valuetype,
    ACTIONS(27),
    1,
    anon_sym_struct,
    ACTIONS(29),
    1,
    anon_sym_union,
    ACTIONS(31),
    1,
    anon_sym_enum,
    ACTIONS(33),
    1,
    anon_sym_const,
    ACTIONS(35),
    1,
    anon_sym_typedef,
    ACTIONS(37),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(39),
    1,
    anon_sym_native,
    ACTIONS(569),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(712),
    1,
    ts_builtin_sym_end,
    STATE(43),
    1,
    aux_sym_specification_repeat2,
    STATE(53),
    1,
    sym_comment,
    STATE(107),
    1,
    sym_predefine,
    STATE(112),
    1,
    sym__definition,
    STATE(144),
    1,
    aux_sym_interface_def_repeat1,
    STATE(167),
    1,
    sym_annotation_appl,
    STATE(476),
    1,
    sym_enum_anno,
    STATE(481),
    1,
    sym_value_header,
    STATE(492),
    1,
    sym_interface_header,
    STATE(490),
    2,
    sym_value_def,
    sym_value_forward_dcl,
    STATE(495),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(497),
    17,
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
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_const_dcl,
    [4642] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(54),
    1,
    sym_comment,
    ACTIONS(716),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(714),
    40,
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
    anon_sym_void,
    anon_sym_readonly,
    anon_sym_attribute,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_AT,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_public,
    anon_sym_private,
    anon_sym_factory,
    anon_sym_typedef,
    anon_sym_native,
    sym_identifier,
    [4700] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(55),
    1,
    sym_comment,
    ACTIONS(686),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(684),
    37,
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
    anon_sym_void,
    anon_sym_readonly,
    anon_sym_attribute,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_AT,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_typedef,
    anon_sym_native,
    sym_identifier,
    [4755] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(56),
    1,
    sym_comment,
    ACTIONS(720),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(718),
    37,
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
    anon_sym_void,
    anon_sym_readonly,
    anon_sym_attribute,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_AT,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_typedef,
    anon_sym_native,
    sym_identifier,
    [4810] = 28,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(47),
    1,
    anon_sym_longlong,
    ACTIONS(49),
    1,
    anon_sym_int64,
    ACTIONS(51),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(57),
    1,
    sym_signed_tiny_int,
    ACTIONS(59),
    1,
    anon_sym_unsignedshort,
    ACTIONS(61),
    1,
    anon_sym_uint16,
    ACTIONS(65),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(67),
    1,
    anon_sym_uint64,
    ACTIONS(71),
    1,
    anon_sym_longdouble,
    ACTIONS(75),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(81),
    1,
    anon_sym_sequence,
    ACTIONS(115),
    1,
    sym_identifier,
    ACTIONS(379),
    1,
    anon_sym_fixed,
    STATE(57),
    1,
    sym_comment,
    STATE(391),
    1,
    sym_scoped_name,
    STATE(441),
    1,
    sym_const_type,
    ACTIONS(43),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(45),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(63),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(69),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(73),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(77),
    2,
    anon_sym_string,
    anon_sym_wstring,
    ACTIONS(377),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(211),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(199),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(201),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(429),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [4912] = 28,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(47),
    1,
    anon_sym_longlong,
    ACTIONS(49),
    1,
    anon_sym_int64,
    ACTIONS(51),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(57),
    1,
    sym_signed_tiny_int,
    ACTIONS(59),
    1,
    anon_sym_unsignedshort,
    ACTIONS(61),
    1,
    anon_sym_uint16,
    ACTIONS(65),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(67),
    1,
    anon_sym_uint64,
    ACTIONS(71),
    1,
    anon_sym_longdouble,
    ACTIONS(75),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(81),
    1,
    anon_sym_sequence,
    ACTIONS(115),
    1,
    sym_identifier,
    ACTIONS(379),
    1,
    anon_sym_fixed,
    STATE(58),
    1,
    sym_comment,
    STATE(391),
    1,
    sym_scoped_name,
    STATE(486),
    1,
    sym_const_type,
    ACTIONS(43),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(45),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(63),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(69),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(73),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(77),
    2,
    anon_sym_string,
    anon_sym_wstring,
    ACTIONS(377),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(211),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(199),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(201),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(429),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [5014] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(59),
    1,
    sym_comment,
    ACTIONS(724),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(722),
    32,
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
    anon_sym_AT,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_case,
    sym_identifier,
    [5064] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(60),
    1,
    sym_comment,
    ACTIONS(728),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(726),
    32,
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
    anon_sym_AT,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_case,
    sym_identifier,
    [5114] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(61),
    1,
    sym_comment,
    ACTIONS(732),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(730),
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
    [5158] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(62),
    1,
    sym_comment,
    ACTIONS(736),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(734),
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
    [5202] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(63),
    1,
    sym_comment,
    ACTIONS(740),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(738),
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
    [5246] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(64),
    1,
    sym_comment,
    ACTIONS(744),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(742),
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
    [5290] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(65),
    1,
    sym_comment,
    ACTIONS(748),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(746),
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
    [5334] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(754),
    1,
    anon_sym_AT,
    STATE(77),
    1,
    sym_annotation_appl,
    STATE(66),
    2,
    sym_comment,
    aux_sym_interface_def_repeat1,
    ACTIONS(752),
    5,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    ACTIONS(750),
    24,
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
    sym_identifier,
    [5381] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(67),
    1,
    sym_comment,
    ACTIONS(759),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_LPAREN,
    anon_sym_AT,
    ACTIONS(757),
    24,
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
    sym_identifier,
    [5423] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(68),
    1,
    sym_comment,
    ACTIONS(763),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_LPAREN,
    anon_sym_AT,
    ACTIONS(761),
    24,
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
    sym_identifier,
    [5465] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(69),
    1,
    sym_comment,
    ACTIONS(767),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(765),
    24,
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
    sym_identifier,
    [5507] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(70),
    1,
    sym_comment,
    ACTIONS(771),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_LPAREN,
    anon_sym_AT,
    ACTIONS(769),
    24,
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
    sym_identifier,
    [5549] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(47),
    1,
    anon_sym_longlong,
    ACTIONS(49),
    1,
    anon_sym_int64,
    ACTIONS(51),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(57),
    1,
    sym_signed_tiny_int,
    ACTIONS(59),
    1,
    anon_sym_unsignedshort,
    ACTIONS(61),
    1,
    anon_sym_uint16,
    ACTIONS(65),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(67),
    1,
    anon_sym_uint64,
    ACTIONS(353),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(371),
    1,
    sym_identifier,
    ACTIONS(773),
    1,
    sym_boolean_type,
    STATE(71),
    1,
    sym_comment,
    STATE(318),
    1,
    sym_scoped_name,
    STATE(527),
    1,
    sym_switch_type_spec,
    ACTIONS(43),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(45),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(63),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(73),
    2,
    anon_sym_char,
    anon_sym_wchar,
    STATE(211),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(531),
    2,
    sym_integer_type,
    sym_char_type,
    STATE(199),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(201),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    [5629] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(779),
    1,
    anon_sym_LPAREN,
    STATE(72),
    1,
    sym_comment,
    ACTIONS(777),
    6,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_AT,
    ACTIONS(775),
    24,
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
    sym_identifier,
    [5673] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(73),
    1,
    sym_comment,
    ACTIONS(783),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(781),
    24,
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
    sym_identifier,
    [5715] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(74),
    1,
    sym_comment,
    ACTIONS(787),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(785),
    24,
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
    sym_identifier,
    [5757] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(75),
    1,
    sym_comment,
    ACTIONS(791),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(789),
    24,
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
    sym_identifier,
    [5799] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(76),
    1,
    sym_comment,
    ACTIONS(795),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(793),
    24,
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
    sym_identifier,
    [5841] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(77),
    1,
    sym_comment,
    ACTIONS(799),
    6,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_AT,
    ACTIONS(797),
    24,
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
    sym_identifier,
    [5882] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(78),
    1,
    sym_comment,
    ACTIONS(803),
    6,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_AT,
    ACTIONS(801),
    24,
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
    sym_identifier,
    [5923] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(79),
    1,
    sym_comment,
    ACTIONS(807),
    5,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    ACTIONS(805),
    24,
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
    sym_identifier,
    [5963] = 26,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(353),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(357),
    1,
    anon_sym_LPAREN,
    ACTIONS(359),
    1,
    anon_sym_TILDE,
    ACTIONS(361),
    1,
    anon_sym_L,
    ACTIONS(363),
    1,
    anon_sym_DQUOTE,
    ACTIONS(365),
    1,
    anon_sym_SQUOTE,
    ACTIONS(369),
    1,
    sym_number_literal,
    ACTIONS(809),
    1,
    sym_identifier,
    STATE(80),
    1,
    sym_comment,
    STATE(119),
    1,
    sym_scoped_name,
    STATE(120),
    1,
    sym_mult_expr,
    STATE(123),
    1,
    sym_literal,
    STATE(131),
    1,
    sym_unary_expr,
    STATE(134),
    1,
    sym_unary_operator,
    STATE(135),
    1,
    sym_add_expr,
    STATE(140),
    1,
    sym_shift_expr,
    STATE(142),
    1,
    sym_and_expr,
    STATE(145),
    1,
    sym_xor_expr,
    STATE(152),
    1,
    sym_or_expr,
    STATE(222),
    1,
    sym_annotation_appl_param,
    STATE(434),
    1,
    sym_const_expr,
    STATE(541),
    1,
    sym_annotation_appl_params,
    ACTIONS(355),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(367),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(127),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6046] = 26,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(353),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(357),
    1,
    anon_sym_LPAREN,
    ACTIONS(359),
    1,
    anon_sym_TILDE,
    ACTIONS(361),
    1,
    anon_sym_L,
    ACTIONS(363),
    1,
    anon_sym_DQUOTE,
    ACTIONS(365),
    1,
    anon_sym_SQUOTE,
    ACTIONS(369),
    1,
    sym_number_literal,
    ACTIONS(809),
    1,
    sym_identifier,
    STATE(81),
    1,
    sym_comment,
    STATE(119),
    1,
    sym_scoped_name,
    STATE(120),
    1,
    sym_mult_expr,
    STATE(123),
    1,
    sym_literal,
    STATE(131),
    1,
    sym_unary_expr,
    STATE(134),
    1,
    sym_unary_operator,
    STATE(135),
    1,
    sym_add_expr,
    STATE(140),
    1,
    sym_shift_expr,
    STATE(142),
    1,
    sym_and_expr,
    STATE(145),
    1,
    sym_xor_expr,
    STATE(152),
    1,
    sym_or_expr,
    STATE(222),
    1,
    sym_annotation_appl_param,
    STATE(434),
    1,
    sym_const_expr,
    STATE(538),
    1,
    sym_annotation_appl_params,
    ACTIONS(355),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(367),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(127),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6129] = 26,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(353),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(357),
    1,
    anon_sym_LPAREN,
    ACTIONS(359),
    1,
    anon_sym_TILDE,
    ACTIONS(361),
    1,
    anon_sym_L,
    ACTIONS(363),
    1,
    anon_sym_DQUOTE,
    ACTIONS(365),
    1,
    anon_sym_SQUOTE,
    ACTIONS(369),
    1,
    sym_number_literal,
    ACTIONS(809),
    1,
    sym_identifier,
    STATE(82),
    1,
    sym_comment,
    STATE(119),
    1,
    sym_scoped_name,
    STATE(120),
    1,
    sym_mult_expr,
    STATE(123),
    1,
    sym_literal,
    STATE(131),
    1,
    sym_unary_expr,
    STATE(134),
    1,
    sym_unary_operator,
    STATE(135),
    1,
    sym_add_expr,
    STATE(140),
    1,
    sym_shift_expr,
    STATE(142),
    1,
    sym_and_expr,
    STATE(145),
    1,
    sym_xor_expr,
    STATE(152),
    1,
    sym_or_expr,
    STATE(222),
    1,
    sym_annotation_appl_param,
    STATE(434),
    1,
    sym_const_expr,
    STATE(464),
    1,
    sym_annotation_appl_params,
    ACTIONS(355),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(367),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(127),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6212] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(353),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(357),
    1,
    anon_sym_LPAREN,
    ACTIONS(359),
    1,
    anon_sym_TILDE,
    ACTIONS(361),
    1,
    anon_sym_L,
    ACTIONS(363),
    1,
    anon_sym_DQUOTE,
    ACTIONS(365),
    1,
    anon_sym_SQUOTE,
    ACTIONS(369),
    1,
    sym_number_literal,
    ACTIONS(371),
    1,
    sym_identifier,
    STATE(83),
    1,
    sym_comment,
    STATE(119),
    1,
    sym_scoped_name,
    STATE(120),
    1,
    sym_mult_expr,
    STATE(123),
    1,
    sym_literal,
    STATE(131),
    1,
    sym_unary_expr,
    STATE(134),
    1,
    sym_unary_operator,
    STATE(135),
    1,
    sym_add_expr,
    STATE(140),
    1,
    sym_shift_expr,
    STATE(142),
    1,
    sym_and_expr,
    STATE(145),
    1,
    sym_xor_expr,
    STATE(152),
    1,
    sym_or_expr,
    STATE(243),
    1,
    sym_const_expr,
    STATE(344),
    1,
    sym_positive_int_const,
    ACTIONS(355),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(367),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(127),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6292] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(353),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(357),
    1,
    anon_sym_LPAREN,
    ACTIONS(359),
    1,
    anon_sym_TILDE,
    ACTIONS(361),
    1,
    anon_sym_L,
    ACTIONS(363),
    1,
    anon_sym_DQUOTE,
    ACTIONS(365),
    1,
    anon_sym_SQUOTE,
    ACTIONS(369),
    1,
    sym_number_literal,
    ACTIONS(371),
    1,
    sym_identifier,
    STATE(84),
    1,
    sym_comment,
    STATE(119),
    1,
    sym_scoped_name,
    STATE(120),
    1,
    sym_mult_expr,
    STATE(123),
    1,
    sym_literal,
    STATE(131),
    1,
    sym_unary_expr,
    STATE(134),
    1,
    sym_unary_operator,
    STATE(135),
    1,
    sym_add_expr,
    STATE(140),
    1,
    sym_shift_expr,
    STATE(142),
    1,
    sym_and_expr,
    STATE(145),
    1,
    sym_xor_expr,
    STATE(152),
    1,
    sym_or_expr,
    STATE(243),
    1,
    sym_const_expr,
    STATE(511),
    1,
    sym_positive_int_const,
    ACTIONS(355),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(367),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(127),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6372] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(353),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(357),
    1,
    anon_sym_LPAREN,
    ACTIONS(359),
    1,
    anon_sym_TILDE,
    ACTIONS(361),
    1,
    anon_sym_L,
    ACTIONS(363),
    1,
    anon_sym_DQUOTE,
    ACTIONS(365),
    1,
    anon_sym_SQUOTE,
    ACTIONS(369),
    1,
    sym_number_literal,
    ACTIONS(371),
    1,
    sym_identifier,
    STATE(85),
    1,
    sym_comment,
    STATE(119),
    1,
    sym_scoped_name,
    STATE(120),
    1,
    sym_mult_expr,
    STATE(123),
    1,
    sym_literal,
    STATE(131),
    1,
    sym_unary_expr,
    STATE(134),
    1,
    sym_unary_operator,
    STATE(135),
    1,
    sym_add_expr,
    STATE(140),
    1,
    sym_shift_expr,
    STATE(142),
    1,
    sym_and_expr,
    STATE(145),
    1,
    sym_xor_expr,
    STATE(152),
    1,
    sym_or_expr,
    STATE(243),
    1,
    sym_const_expr,
    STATE(400),
    1,
    sym_positive_int_const,
    ACTIONS(355),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(367),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(127),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6452] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(353),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(357),
    1,
    anon_sym_LPAREN,
    ACTIONS(359),
    1,
    anon_sym_TILDE,
    ACTIONS(361),
    1,
    anon_sym_L,
    ACTIONS(363),
    1,
    anon_sym_DQUOTE,
    ACTIONS(365),
    1,
    anon_sym_SQUOTE,
    ACTIONS(369),
    1,
    sym_number_literal,
    ACTIONS(371),
    1,
    sym_identifier,
    STATE(86),
    1,
    sym_comment,
    STATE(119),
    1,
    sym_scoped_name,
    STATE(120),
    1,
    sym_mult_expr,
    STATE(123),
    1,
    sym_literal,
    STATE(131),
    1,
    sym_unary_expr,
    STATE(134),
    1,
    sym_unary_operator,
    STATE(135),
    1,
    sym_add_expr,
    STATE(140),
    1,
    sym_shift_expr,
    STATE(142),
    1,
    sym_and_expr,
    STATE(145),
    1,
    sym_xor_expr,
    STATE(152),
    1,
    sym_or_expr,
    STATE(243),
    1,
    sym_const_expr,
    STATE(519),
    1,
    sym_positive_int_const,
    ACTIONS(355),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(367),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(127),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6532] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(353),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(357),
    1,
    anon_sym_LPAREN,
    ACTIONS(359),
    1,
    anon_sym_TILDE,
    ACTIONS(361),
    1,
    anon_sym_L,
    ACTIONS(363),
    1,
    anon_sym_DQUOTE,
    ACTIONS(365),
    1,
    anon_sym_SQUOTE,
    ACTIONS(369),
    1,
    sym_number_literal,
    ACTIONS(371),
    1,
    sym_identifier,
    STATE(87),
    1,
    sym_comment,
    STATE(119),
    1,
    sym_scoped_name,
    STATE(120),
    1,
    sym_mult_expr,
    STATE(123),
    1,
    sym_literal,
    STATE(131),
    1,
    sym_unary_expr,
    STATE(134),
    1,
    sym_unary_operator,
    STATE(135),
    1,
    sym_add_expr,
    STATE(140),
    1,
    sym_shift_expr,
    STATE(142),
    1,
    sym_and_expr,
    STATE(145),
    1,
    sym_xor_expr,
    STATE(152),
    1,
    sym_or_expr,
    STATE(243),
    1,
    sym_const_expr,
    STATE(485),
    1,
    sym_positive_int_const,
    ACTIONS(355),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(367),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(127),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6612] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(353),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(357),
    1,
    anon_sym_LPAREN,
    ACTIONS(359),
    1,
    anon_sym_TILDE,
    ACTIONS(361),
    1,
    anon_sym_L,
    ACTIONS(363),
    1,
    anon_sym_DQUOTE,
    ACTIONS(365),
    1,
    anon_sym_SQUOTE,
    ACTIONS(369),
    1,
    sym_number_literal,
    ACTIONS(371),
    1,
    sym_identifier,
    STATE(88),
    1,
    sym_comment,
    STATE(119),
    1,
    sym_scoped_name,
    STATE(120),
    1,
    sym_mult_expr,
    STATE(123),
    1,
    sym_literal,
    STATE(131),
    1,
    sym_unary_expr,
    STATE(134),
    1,
    sym_unary_operator,
    STATE(135),
    1,
    sym_add_expr,
    STATE(140),
    1,
    sym_shift_expr,
    STATE(142),
    1,
    sym_and_expr,
    STATE(145),
    1,
    sym_xor_expr,
    STATE(152),
    1,
    sym_or_expr,
    STATE(243),
    1,
    sym_const_expr,
    STATE(475),
    1,
    sym_positive_int_const,
    ACTIONS(355),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(367),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(127),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6692] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(353),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(357),
    1,
    anon_sym_LPAREN,
    ACTIONS(359),
    1,
    anon_sym_TILDE,
    ACTIONS(361),
    1,
    anon_sym_L,
    ACTIONS(363),
    1,
    anon_sym_DQUOTE,
    ACTIONS(365),
    1,
    anon_sym_SQUOTE,
    ACTIONS(369),
    1,
    sym_number_literal,
    ACTIONS(371),
    1,
    sym_identifier,
    STATE(89),
    1,
    sym_comment,
    STATE(119),
    1,
    sym_scoped_name,
    STATE(120),
    1,
    sym_mult_expr,
    STATE(123),
    1,
    sym_literal,
    STATE(131),
    1,
    sym_unary_expr,
    STATE(134),
    1,
    sym_unary_operator,
    STATE(135),
    1,
    sym_add_expr,
    STATE(140),
    1,
    sym_shift_expr,
    STATE(142),
    1,
    sym_and_expr,
    STATE(145),
    1,
    sym_xor_expr,
    STATE(152),
    1,
    sym_or_expr,
    STATE(243),
    1,
    sym_const_expr,
    STATE(474),
    1,
    sym_positive_int_const,
    ACTIONS(355),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(367),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(127),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6772] = 18,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(45),
    1,
    anon_sym_long,
    ACTIONS(63),
    1,
    anon_sym_unsignedlong,
    ACTIONS(813),
    1,
    anon_sym_int32,
    ACTIONS(815),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(819),
    1,
    sym_signed_tiny_int,
    ACTIONS(821),
    1,
    anon_sym_uint32,
    STATE(90),
    1,
    sym_comment,
    STATE(461),
    1,
    sym_integer_type,
    STATE(462),
    1,
    sym_destination_type,
    ACTIONS(47),
    2,
    anon_sym_longlong,
    anon_sym_int64,
    ACTIONS(59),
    2,
    anon_sym_unsignedshort,
    anon_sym_uint16,
    ACTIONS(65),
    2,
    anon_sym_unsignedlonglong,
    anon_sym_uint64,
    ACTIONS(811),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(817),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(211),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(199),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(201),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    [6837] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(353),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(357),
    1,
    anon_sym_LPAREN,
    ACTIONS(359),
    1,
    anon_sym_TILDE,
    ACTIONS(361),
    1,
    anon_sym_L,
    ACTIONS(363),
    1,
    anon_sym_DQUOTE,
    ACTIONS(365),
    1,
    anon_sym_SQUOTE,
    ACTIONS(369),
    1,
    sym_number_literal,
    ACTIONS(371),
    1,
    sym_identifier,
    STATE(91),
    1,
    sym_comment,
    STATE(119),
    1,
    sym_scoped_name,
    STATE(120),
    1,
    sym_mult_expr,
    STATE(123),
    1,
    sym_literal,
    STATE(131),
    1,
    sym_unary_expr,
    STATE(134),
    1,
    sym_unary_operator,
    STATE(135),
    1,
    sym_add_expr,
    STATE(140),
    1,
    sym_shift_expr,
    STATE(142),
    1,
    sym_and_expr,
    STATE(145),
    1,
    sym_xor_expr,
    STATE(152),
    1,
    sym_or_expr,
    STATE(517),
    1,
    sym_const_expr,
    ACTIONS(355),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(367),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(127),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6914] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(353),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(357),
    1,
    anon_sym_LPAREN,
    ACTIONS(359),
    1,
    anon_sym_TILDE,
    ACTIONS(361),
    1,
    anon_sym_L,
    ACTIONS(363),
    1,
    anon_sym_DQUOTE,
    ACTIONS(365),
    1,
    anon_sym_SQUOTE,
    ACTIONS(369),
    1,
    sym_number_literal,
    ACTIONS(371),
    1,
    sym_identifier,
    STATE(92),
    1,
    sym_comment,
    STATE(119),
    1,
    sym_scoped_name,
    STATE(120),
    1,
    sym_mult_expr,
    STATE(123),
    1,
    sym_literal,
    STATE(131),
    1,
    sym_unary_expr,
    STATE(134),
    1,
    sym_unary_operator,
    STATE(135),
    1,
    sym_add_expr,
    STATE(140),
    1,
    sym_shift_expr,
    STATE(142),
    1,
    sym_and_expr,
    STATE(145),
    1,
    sym_xor_expr,
    STATE(152),
    1,
    sym_or_expr,
    STATE(425),
    1,
    sym_const_expr,
    ACTIONS(355),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(367),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(127),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6991] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(353),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(357),
    1,
    anon_sym_LPAREN,
    ACTIONS(359),
    1,
    anon_sym_TILDE,
    ACTIONS(361),
    1,
    anon_sym_L,
    ACTIONS(363),
    1,
    anon_sym_DQUOTE,
    ACTIONS(365),
    1,
    anon_sym_SQUOTE,
    ACTIONS(369),
    1,
    sym_number_literal,
    ACTIONS(371),
    1,
    sym_identifier,
    STATE(93),
    1,
    sym_comment,
    STATE(119),
    1,
    sym_scoped_name,
    STATE(120),
    1,
    sym_mult_expr,
    STATE(123),
    1,
    sym_literal,
    STATE(131),
    1,
    sym_unary_expr,
    STATE(134),
    1,
    sym_unary_operator,
    STATE(135),
    1,
    sym_add_expr,
    STATE(140),
    1,
    sym_shift_expr,
    STATE(142),
    1,
    sym_and_expr,
    STATE(145),
    1,
    sym_xor_expr,
    STATE(152),
    1,
    sym_or_expr,
    STATE(421),
    1,
    sym_const_expr,
    ACTIONS(355),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(367),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(127),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7068] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(353),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(357),
    1,
    anon_sym_LPAREN,
    ACTIONS(359),
    1,
    anon_sym_TILDE,
    ACTIONS(361),
    1,
    anon_sym_L,
    ACTIONS(363),
    1,
    anon_sym_DQUOTE,
    ACTIONS(365),
    1,
    anon_sym_SQUOTE,
    ACTIONS(369),
    1,
    sym_number_literal,
    ACTIONS(371),
    1,
    sym_identifier,
    STATE(94),
    1,
    sym_comment,
    STATE(119),
    1,
    sym_scoped_name,
    STATE(120),
    1,
    sym_mult_expr,
    STATE(123),
    1,
    sym_literal,
    STATE(131),
    1,
    sym_unary_expr,
    STATE(134),
    1,
    sym_unary_operator,
    STATE(135),
    1,
    sym_add_expr,
    STATE(140),
    1,
    sym_shift_expr,
    STATE(142),
    1,
    sym_and_expr,
    STATE(145),
    1,
    sym_xor_expr,
    STATE(152),
    1,
    sym_or_expr,
    STATE(358),
    1,
    sym_const_expr,
    ACTIONS(355),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(367),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(127),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7145] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(95),
    1,
    sym_comment,
    ACTIONS(769),
    4,
    anon_sym_LT,
    anon_sym_GT,
    anon_sym_SLASH,
    anon_sym_COLON,
    ACTIONS(771),
    22,
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
    anon_sym_LBRACE,
    anon_sym_interface,
    anon_sym_local,
    anon_sym_SEMI,
    anon_sym_bitmask,
    anon_sym_AT,
    anon_sym_struct,
    anon_sym_supports,
    anon_sym_RBRACK,
    [7182] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(353),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(357),
    1,
    anon_sym_LPAREN,
    ACTIONS(359),
    1,
    anon_sym_TILDE,
    ACTIONS(361),
    1,
    anon_sym_L,
    ACTIONS(363),
    1,
    anon_sym_DQUOTE,
    ACTIONS(365),
    1,
    anon_sym_SQUOTE,
    ACTIONS(369),
    1,
    sym_number_literal,
    ACTIONS(371),
    1,
    sym_identifier,
    STATE(96),
    1,
    sym_comment,
    STATE(119),
    1,
    sym_scoped_name,
    STATE(120),
    1,
    sym_mult_expr,
    STATE(123),
    1,
    sym_literal,
    STATE(131),
    1,
    sym_unary_expr,
    STATE(134),
    1,
    sym_unary_operator,
    STATE(135),
    1,
    sym_add_expr,
    STATE(140),
    1,
    sym_shift_expr,
    STATE(142),
    1,
    sym_and_expr,
    STATE(145),
    1,
    sym_xor_expr,
    STATE(152),
    1,
    sym_or_expr,
    STATE(417),
    1,
    sym_const_expr,
    ACTIONS(355),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(367),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(127),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7259] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(97),
    1,
    sym_comment,
    ACTIONS(757),
    4,
    anon_sym_LT,
    anon_sym_GT,
    anon_sym_SLASH,
    anon_sym_COLON,
    ACTIONS(759),
    22,
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
    anon_sym_LBRACE,
    anon_sym_interface,
    anon_sym_local,
    anon_sym_SEMI,
    anon_sym_bitmask,
    anon_sym_AT,
    anon_sym_struct,
    anon_sym_supports,
    anon_sym_RBRACK,
    [7296] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(353),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(357),
    1,
    anon_sym_LPAREN,
    ACTIONS(359),
    1,
    anon_sym_TILDE,
    ACTIONS(361),
    1,
    anon_sym_L,
    ACTIONS(363),
    1,
    anon_sym_DQUOTE,
    ACTIONS(365),
    1,
    anon_sym_SQUOTE,
    ACTIONS(369),
    1,
    sym_number_literal,
    ACTIONS(371),
    1,
    sym_identifier,
    STATE(98),
    1,
    sym_comment,
    STATE(119),
    1,
    sym_scoped_name,
    STATE(120),
    1,
    sym_mult_expr,
    STATE(123),
    1,
    sym_literal,
    STATE(131),
    1,
    sym_unary_expr,
    STATE(134),
    1,
    sym_unary_operator,
    STATE(135),
    1,
    sym_add_expr,
    STATE(140),
    1,
    sym_shift_expr,
    STATE(142),
    1,
    sym_and_expr,
    STATE(145),
    1,
    sym_xor_expr,
    STATE(152),
    1,
    sym_or_expr,
    STATE(440),
    1,
    sym_const_expr,
    ACTIONS(355),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(367),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(127),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7373] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(353),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(357),
    1,
    anon_sym_LPAREN,
    ACTIONS(359),
    1,
    anon_sym_TILDE,
    ACTIONS(361),
    1,
    anon_sym_L,
    ACTIONS(363),
    1,
    anon_sym_DQUOTE,
    ACTIONS(365),
    1,
    anon_sym_SQUOTE,
    ACTIONS(369),
    1,
    sym_number_literal,
    ACTIONS(371),
    1,
    sym_identifier,
    STATE(99),
    1,
    sym_comment,
    STATE(119),
    1,
    sym_scoped_name,
    STATE(120),
    1,
    sym_mult_expr,
    STATE(123),
    1,
    sym_literal,
    STATE(131),
    1,
    sym_unary_expr,
    STATE(134),
    1,
    sym_unary_operator,
    STATE(135),
    1,
    sym_add_expr,
    STATE(140),
    1,
    sym_shift_expr,
    STATE(142),
    1,
    sym_and_expr,
    STATE(145),
    1,
    sym_xor_expr,
    STATE(152),
    1,
    sym_or_expr,
    STATE(491),
    1,
    sym_const_expr,
    ACTIONS(355),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(367),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(127),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7450] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(100),
    1,
    sym_comment,
    ACTIONS(761),
    4,
    anon_sym_LT,
    anon_sym_GT,
    anon_sym_SLASH,
    anon_sym_COLON,
    ACTIONS(763),
    22,
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
    anon_sym_LBRACE,
    anon_sym_interface,
    anon_sym_local,
    anon_sym_SEMI,
    anon_sym_bitmask,
    anon_sym_AT,
    anon_sym_struct,
    anon_sym_supports,
    anon_sym_RBRACK,
    [7487] = 22,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(353),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(357),
    1,
    anon_sym_LPAREN,
    ACTIONS(359),
    1,
    anon_sym_TILDE,
    ACTIONS(361),
    1,
    anon_sym_L,
    ACTIONS(363),
    1,
    anon_sym_DQUOTE,
    ACTIONS(365),
    1,
    anon_sym_SQUOTE,
    ACTIONS(369),
    1,
    sym_number_literal,
    ACTIONS(371),
    1,
    sym_identifier,
    STATE(101),
    1,
    sym_comment,
    STATE(119),
    1,
    sym_scoped_name,
    STATE(120),
    1,
    sym_mult_expr,
    STATE(123),
    1,
    sym_literal,
    STATE(131),
    1,
    sym_unary_expr,
    STATE(134),
    1,
    sym_unary_operator,
    STATE(135),
    1,
    sym_add_expr,
    STATE(140),
    1,
    sym_shift_expr,
    STATE(142),
    1,
    sym_and_expr,
    STATE(147),
    1,
    sym_xor_expr,
    ACTIONS(355),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(367),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(127),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7558] = 21,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(353),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(357),
    1,
    anon_sym_LPAREN,
    ACTIONS(359),
    1,
    anon_sym_TILDE,
    ACTIONS(361),
    1,
    anon_sym_L,
    ACTIONS(363),
    1,
    anon_sym_DQUOTE,
    ACTIONS(365),
    1,
    anon_sym_SQUOTE,
    ACTIONS(369),
    1,
    sym_number_literal,
    ACTIONS(371),
    1,
    sym_identifier,
    STATE(102),
    1,
    sym_comment,
    STATE(119),
    1,
    sym_scoped_name,
    STATE(120),
    1,
    sym_mult_expr,
    STATE(123),
    1,
    sym_literal,
    STATE(131),
    1,
    sym_unary_expr,
    STATE(134),
    1,
    sym_unary_operator,
    STATE(135),
    1,
    sym_add_expr,
    STATE(140),
    1,
    sym_shift_expr,
    STATE(143),
    1,
    sym_and_expr,
    ACTIONS(355),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(367),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(127),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7626] = 20,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(353),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(357),
    1,
    anon_sym_LPAREN,
    ACTIONS(359),
    1,
    anon_sym_TILDE,
    ACTIONS(361),
    1,
    anon_sym_L,
    ACTIONS(363),
    1,
    anon_sym_DQUOTE,
    ACTIONS(365),
    1,
    anon_sym_SQUOTE,
    ACTIONS(369),
    1,
    sym_number_literal,
    ACTIONS(371),
    1,
    sym_identifier,
    STATE(103),
    1,
    sym_comment,
    STATE(119),
    1,
    sym_scoped_name,
    STATE(120),
    1,
    sym_mult_expr,
    STATE(123),
    1,
    sym_literal,
    STATE(131),
    1,
    sym_unary_expr,
    STATE(134),
    1,
    sym_unary_operator,
    STATE(135),
    1,
    sym_add_expr,
    STATE(139),
    1,
    sym_shift_expr,
    ACTIONS(355),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(367),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(127),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7691] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(825),
    1,
    sym_preproc_directive,
    STATE(111),
    1,
    sym_preproc_call,
    ACTIONS(828),
    2,
    anon_sym_AT,
    anon_sym_POUNDdefine,
    STATE(104),
    2,
    sym_comment,
    aux_sym_specification_repeat1,
    ACTIONS(823),
    16,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_interface,
    anon_sym_local,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_ATannotation,
    anon_sym_module,
    anon_sym_valuetype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_typedef,
    anon_sym_ATignore_literal_names,
    anon_sym_native,
    [7727] = 19,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(353),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(357),
    1,
    anon_sym_LPAREN,
    ACTIONS(359),
    1,
    anon_sym_TILDE,
    ACTIONS(361),
    1,
    anon_sym_L,
    ACTIONS(363),
    1,
    anon_sym_DQUOTE,
    ACTIONS(365),
    1,
    anon_sym_SQUOTE,
    ACTIONS(369),
    1,
    sym_number_literal,
    ACTIONS(371),
    1,
    sym_identifier,
    STATE(105),
    1,
    sym_comment,
    STATE(119),
    1,
    sym_scoped_name,
    STATE(120),
    1,
    sym_mult_expr,
    STATE(123),
    1,
    sym_literal,
    STATE(131),
    1,
    sym_unary_expr,
    STATE(134),
    1,
    sym_unary_operator,
    STATE(138),
    1,
    sym_add_expr,
    ACTIONS(355),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(367),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(127),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7789] = 18,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(353),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(357),
    1,
    anon_sym_LPAREN,
    ACTIONS(359),
    1,
    anon_sym_TILDE,
    ACTIONS(361),
    1,
    anon_sym_L,
    ACTIONS(363),
    1,
    anon_sym_DQUOTE,
    ACTIONS(365),
    1,
    anon_sym_SQUOTE,
    ACTIONS(369),
    1,
    sym_number_literal,
    ACTIONS(371),
    1,
    sym_identifier,
    STATE(106),
    1,
    sym_comment,
    STATE(119),
    1,
    sym_scoped_name,
    STATE(123),
    1,
    sym_literal,
    STATE(126),
    1,
    sym_mult_expr,
    STATE(131),
    1,
    sym_unary_expr,
    STATE(134),
    1,
    sym_unary_operator,
    ACTIONS(355),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(367),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(127),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7848] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(832),
    1,
    anon_sym_AT,
    STATE(107),
    1,
    sym_comment,
    ACTIONS(830),
    19,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_RBRACE,
    anon_sym_interface,
    anon_sym_local,
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
    anon_sym_typedef,
    anon_sym_ATignore_literal_names,
    anon_sym_native,
    anon_sym_POUNDdefine,
    [7879] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(836),
    1,
    anon_sym_AT,
    STATE(108),
    1,
    sym_comment,
    ACTIONS(834),
    19,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_RBRACE,
    anon_sym_interface,
    anon_sym_local,
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
    anon_sym_typedef,
    anon_sym_ATignore_literal_names,
    anon_sym_native,
    anon_sym_POUNDdefine,
    [7910] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(840),
    1,
    anon_sym_AT,
    STATE(109),
    1,
    sym_comment,
    ACTIONS(838),
    19,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_RBRACE,
    anon_sym_interface,
    anon_sym_local,
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
    anon_sym_typedef,
    anon_sym_ATignore_literal_names,
    anon_sym_native,
    anon_sym_POUNDdefine,
    [7941] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(110),
    1,
    sym_comment,
    ACTIONS(844),
    3,
    sym_preproc_directive,
    anon_sym_AT,
    anon_sym_POUNDdefine,
    ACTIONS(842),
    16,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_interface,
    anon_sym_local,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_ATannotation,
    anon_sym_module,
    anon_sym_valuetype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_typedef,
    anon_sym_ATignore_literal_names,
    anon_sym_native,
    [7971] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(111),
    1,
    sym_comment,
    ACTIONS(848),
    3,
    sym_preproc_directive,
    anon_sym_AT,
    anon_sym_POUNDdefine,
    ACTIONS(846),
    16,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_interface,
    anon_sym_local,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_ATannotation,
    anon_sym_module,
    anon_sym_valuetype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_typedef,
    anon_sym_ATignore_literal_names,
    anon_sym_native,
    [8001] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(852),
    1,
    anon_sym_AT,
    STATE(112),
    1,
    sym_comment,
    ACTIONS(850),
    18,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_RBRACE,
    anon_sym_interface,
    anon_sym_local,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_ATannotation,
    anon_sym_module,
    anon_sym_valuetype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_typedef,
    anon_sym_ATignore_literal_names,
    anon_sym_native,
    anon_sym_POUNDdefine,
    [8031] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(856),
    1,
    anon_sym_AT,
    STATE(113),
    1,
    sym_comment,
    ACTIONS(854),
    18,
    anon_sym_exception,
    anon_sym_RBRACE,
    anon_sym_interface,
    anon_sym_local,
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
    anon_sym_typedef,
    anon_sym_ATignore_literal_names,
    anon_sym_native,
    anon_sym_POUNDdefine,
    [8061] = 17,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(353),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(357),
    1,
    anon_sym_LPAREN,
    ACTIONS(359),
    1,
    anon_sym_TILDE,
    ACTIONS(361),
    1,
    anon_sym_L,
    ACTIONS(363),
    1,
    anon_sym_DQUOTE,
    ACTIONS(365),
    1,
    anon_sym_SQUOTE,
    ACTIONS(369),
    1,
    sym_number_literal,
    ACTIONS(371),
    1,
    sym_identifier,
    STATE(114),
    1,
    sym_comment,
    STATE(119),
    1,
    sym_scoped_name,
    STATE(123),
    1,
    sym_literal,
    STATE(125),
    1,
    sym_unary_expr,
    STATE(134),
    1,
    sym_unary_operator,
    ACTIONS(355),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(367),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(127),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [8117] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(860),
    1,
    anon_sym_AT,
    STATE(115),
    1,
    sym_comment,
    ACTIONS(858),
    18,
    anon_sym_exception,
    anon_sym_RBRACE,
    anon_sym_interface,
    anon_sym_local,
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
    anon_sym_typedef,
    anon_sym_ATignore_literal_names,
    anon_sym_native,
    anon_sym_POUNDdefine,
    [8147] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(864),
    1,
    anon_sym_AT,
    STATE(116),
    1,
    sym_comment,
    ACTIONS(862),
    18,
    anon_sym_exception,
    anon_sym_RBRACE,
    anon_sym_interface,
    anon_sym_local,
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
    anon_sym_typedef,
    anon_sym_ATignore_literal_names,
    anon_sym_native,
    anon_sym_POUNDdefine,
    [8177] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(117),
    1,
    sym_comment,
    ACTIONS(868),
    3,
    sym_preproc_directive,
    anon_sym_AT,
    anon_sym_POUNDdefine,
    ACTIONS(866),
    16,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_interface,
    anon_sym_local,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_ATannotation,
    anon_sym_module,
    anon_sym_valuetype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_typedef,
    anon_sym_ATignore_literal_names,
    anon_sym_native,
    [8207] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(870),
    1,
    anon_sym_COLON_COLON,
    STATE(118),
    1,
    sym_comment,
    ACTIONS(872),
    3,
    anon_sym_GT,
    anon_sym_SLASH,
    anon_sym_COLON,
    ACTIONS(874),
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
    [8237] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(870),
    1,
    anon_sym_COLON_COLON,
    STATE(119),
    1,
    sym_comment,
    ACTIONS(876),
    3,
    anon_sym_GT,
    anon_sym_SLASH,
    anon_sym_COLON,
    ACTIONS(878),
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
    [8267] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(880),
    1,
    anon_sym_GT,
    ACTIONS(886),
    1,
    anon_sym_SLASH,
    STATE(120),
    1,
    sym_comment,
    ACTIONS(884),
    2,
    anon_sym_STAR,
    anon_sym_PERCENT,
    ACTIONS(882),
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
    [8298] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(121),
    1,
    sym_comment,
    ACTIONS(888),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(890),
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
    [8325] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(122),
    1,
    sym_comment,
    ACTIONS(892),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(894),
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
    [8352] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(123),
    1,
    sym_comment,
    ACTIONS(876),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(878),
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
    [8379] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(124),
    1,
    sym_comment,
    ACTIONS(896),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(898),
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
    [8406] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(125),
    1,
    sym_comment,
    ACTIONS(900),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(902),
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
    [8433] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(886),
    1,
    anon_sym_SLASH,
    ACTIONS(904),
    1,
    anon_sym_GT,
    STATE(126),
    1,
    sym_comment,
    ACTIONS(884),
    2,
    anon_sym_STAR,
    anon_sym_PERCENT,
    ACTIONS(906),
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
    [8464] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(127),
    1,
    sym_comment,
    ACTIONS(908),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(910),
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
    [8491] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(128),
    1,
    sym_comment,
    ACTIONS(912),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(914),
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
    [8518] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(129),
    1,
    sym_comment,
    ACTIONS(916),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(918),
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
    [8545] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(130),
    1,
    sym_comment,
    ACTIONS(872),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(874),
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
    [8572] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(131),
    1,
    sym_comment,
    ACTIONS(920),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(922),
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
    [8599] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(132),
    1,
    sym_comment,
    ACTIONS(924),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(926),
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
    [8626] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(133),
    1,
    sym_comment,
    ACTIONS(928),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(930),
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
    [8653] = 13,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(353),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(361),
    1,
    anon_sym_L,
    ACTIONS(363),
    1,
    anon_sym_DQUOTE,
    ACTIONS(365),
    1,
    anon_sym_SQUOTE,
    ACTIONS(369),
    1,
    sym_number_literal,
    ACTIONS(371),
    1,
    sym_identifier,
    ACTIONS(932),
    1,
    anon_sym_LPAREN,
    STATE(118),
    1,
    sym_scoped_name,
    STATE(130),
    1,
    sym_literal,
    STATE(134),
    1,
    sym_comment,
    ACTIONS(367),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(127),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [8696] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(934),
    1,
    anon_sym_GT,
    STATE(135),
    1,
    sym_comment,
    ACTIONS(938),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(936),
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
    [8722] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(769),
    1,
    anon_sym_SLASH,
    ACTIONS(940),
    1,
    anon_sym_EQ,
    STATE(136),
    1,
    sym_comment,
    ACTIONS(771),
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
    [8748] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(870),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(876),
    1,
    anon_sym_SLASH,
    ACTIONS(942),
    1,
    anon_sym_GT,
    ACTIONS(944),
    1,
    anon_sym_COMMA,
    STATE(137),
    1,
    sym_comment,
    ACTIONS(878),
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
    [8778] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(946),
    1,
    anon_sym_GT,
    STATE(138),
    1,
    sym_comment,
    ACTIONS(938),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(948),
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
    [8804] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(950),
    1,
    anon_sym_GT,
    STATE(139),
    1,
    sym_comment,
    ACTIONS(954),
    2,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    ACTIONS(952),
    8,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [8828] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(956),
    1,
    anon_sym_GT,
    STATE(140),
    1,
    sym_comment,
    ACTIONS(954),
    2,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    ACTIONS(958),
    8,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [8852] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(141),
    1,
    sym_comment,
    ACTIONS(960),
    4,
    anon_sym_COLON_COLON,
    anon_sym_LPAREN,
    anon_sym_DQUOTE,
    anon_sym_SQUOTE,
    ACTIONS(962),
    5,
    anon_sym_L,
    anon_sym_TRUE,
    anon_sym_FALSE,
    sym_number_literal,
    sym_identifier,
    [8872] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(966),
    1,
    anon_sym_DOLLAR,
    STATE(142),
    1,
    sym_comment,
    ACTIONS(964),
    8,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [8892] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(966),
    1,
    anon_sym_DOLLAR,
    STATE(143),
    1,
    sym_comment,
    ACTIONS(968),
    8,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [8912] = 10,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(970),
    1,
    anon_sym_interface,
    ACTIONS(972),
    1,
    anon_sym_local,
    ACTIONS(974),
    1,
    anon_sym_bitmask,
    ACTIONS(976),
    1,
    anon_sym_AT,
    ACTIONS(978),
    1,
    anon_sym_struct,
    STATE(144),
    1,
    sym_comment,
    STATE(149),
    1,
    aux_sym_interface_def_repeat1,
    STATE(167),
    1,
    sym_annotation_appl,
    STATE(465),
    1,
    sym_interface_header,
    [8943] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(982),
    1,
    anon_sym_CARET,
    STATE(145),
    1,
    sym_comment,
    ACTIONS(980),
    7,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [8962] = 10,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(984),
    1,
    anon_sym_COMMA,
    ACTIONS(986),
    1,
    anon_sym_SEMI,
    ACTIONS(988),
    1,
    anon_sym_getraises,
    ACTIONS(990),
    1,
    anon_sym_setraises,
    STATE(146),
    1,
    sym_comment,
    STATE(280),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    STATE(281),
    1,
    sym_get_excep_expr,
    STATE(403),
    1,
    sym_attr_raises_expr,
    STATE(405),
    1,
    sym_set_excep_expr,
    [8993] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(982),
    1,
    anon_sym_CARET,
    STATE(147),
    1,
    sym_comment,
    ACTIONS(992),
    7,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [9012] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(148),
    1,
    sym_comment,
    ACTIONS(994),
    7,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    anon_sym_SEMI,
    anon_sym_raises,
    anon_sym_getraises,
    anon_sym_setraises,
    anon_sym_default,
    [9028] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(996),
    1,
    anon_sym_AT,
    STATE(167),
    1,
    sym_annotation_appl,
    STATE(149),
    2,
    sym_comment,
    aux_sym_interface_def_repeat1,
    ACTIONS(752),
    4,
    anon_sym_interface,
    anon_sym_local,
    anon_sym_bitmask,
    anon_sym_struct,
    [9048] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(870),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(999),
    1,
    anon_sym_LPAREN,
    STATE(150),
    1,
    sym_comment,
    ACTIONS(777),
    5,
    anon_sym_interface,
    anon_sym_local,
    anon_sym_bitmask,
    anon_sym_AT,
    anon_sym_struct,
    [9068] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1001),
    1,
    anon_sym_RPAREN,
    ACTIONS(1003),
    1,
    anon_sym_in,
    STATE(36),
    1,
    sym_param_attribute,
    STATE(151),
    1,
    sym_comment,
    STATE(278),
    1,
    sym_param_dcl,
    STATE(407),
    1,
    sym_parameter_dcls,
    ACTIONS(1005),
    2,
    anon_sym_out,
    anon_sym_inout,
    [9094] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1009),
    1,
    anon_sym_PIPE,
    STATE(152),
    1,
    sym_comment,
    ACTIONS(1007),
    6,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [9112] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1011),
    1,
    anon_sym_RBRACE,
    ACTIONS(1013),
    1,
    anon_sym_default,
    ACTIONS(1015),
    1,
    anon_sym_case,
    STATE(12),
    1,
    sym_case_label,
    STATE(153),
    1,
    sym_comment,
    STATE(156),
    1,
    aux_sym_union_def_repeat1,
    STATE(246),
    1,
    sym_case,
    [9137] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1019),
    1,
    anon_sym_LBRACK,
    STATE(210),
    1,
    sym_fixed_array_size,
    STATE(154),
    2,
    sym_comment,
    aux_sym_array_declarator_repeat1,
    ACTIONS(1017),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [9156] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1022),
    1,
    anon_sym_RBRACE,
    ACTIONS(1024),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(1026),
    1,
    sym_identifier,
    STATE(155),
    1,
    sym_comment,
    STATE(197),
    1,
    aux_sym_enumerator_repeat1,
    STATE(308),
    1,
    sym_enumerator,
    STATE(334),
    1,
    sym_enum_modifier,
    [9181] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1013),
    1,
    anon_sym_default,
    ACTIONS(1015),
    1,
    anon_sym_case,
    ACTIONS(1028),
    1,
    anon_sym_RBRACE,
    STATE(12),
    1,
    sym_case_label,
    STATE(156),
    1,
    sym_comment,
    STATE(164),
    1,
    aux_sym_union_def_repeat1,
    STATE(246),
    1,
    sym_case,
    [9206] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(157),
    1,
    sym_comment,
    ACTIONS(763),
    6,
    anon_sym_COLON_COLON,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_LPAREN,
    anon_sym_AT,
    sym_identifier,
    [9221] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1024),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(1026),
    1,
    sym_identifier,
    ACTIONS(1030),
    1,
    anon_sym_RBRACE,
    STATE(158),
    1,
    sym_comment,
    STATE(197),
    1,
    aux_sym_enumerator_repeat1,
    STATE(240),
    1,
    sym_enumerator,
    STATE(334),
    1,
    sym_enum_modifier,
    [9246] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1032),
    1,
    anon_sym_LBRACK,
    STATE(159),
    1,
    sym_comment,
    STATE(163),
    1,
    aux_sym_array_declarator_repeat1,
    STATE(210),
    1,
    sym_fixed_array_size,
    ACTIONS(994),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [9267] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(160),
    1,
    sym_comment,
    ACTIONS(771),
    6,
    anon_sym_COLON_COLON,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_LPAREN,
    anon_sym_AT,
    sym_identifier,
    [9282] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1034),
    1,
    anon_sym_RBRACE,
    ACTIONS(1036),
    1,
    anon_sym_AT,
    ACTIONS(1038),
    1,
    sym_identifier,
    STATE(161),
    1,
    sym_comment,
    STATE(166),
    1,
    aux_sym_interface_def_repeat1,
    STATE(284),
    1,
    sym_bit_value,
    STATE(317),
    1,
    sym_annotation_appl,
    [9307] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(162),
    1,
    sym_comment,
    ACTIONS(759),
    6,
    anon_sym_COLON_COLON,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_LPAREN,
    anon_sym_AT,
    sym_identifier,
    [9322] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1032),
    1,
    anon_sym_LBRACK,
    STATE(154),
    1,
    aux_sym_array_declarator_repeat1,
    STATE(163),
    1,
    sym_comment,
    STATE(210),
    1,
    sym_fixed_array_size,
    ACTIONS(1040),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [9343] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1042),
    1,
    anon_sym_RBRACE,
    ACTIONS(1044),
    1,
    anon_sym_default,
    ACTIONS(1047),
    1,
    anon_sym_case,
    STATE(12),
    1,
    sym_case_label,
    STATE(246),
    1,
    sym_case,
    STATE(164),
    2,
    sym_comment,
    aux_sym_union_def_repeat1,
    [9366] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1036),
    1,
    anon_sym_AT,
    ACTIONS(1038),
    1,
    sym_identifier,
    ACTIONS(1050),
    1,
    anon_sym_RBRACE,
    STATE(165),
    1,
    sym_comment,
    STATE(178),
    1,
    aux_sym_interface_def_repeat1,
    STATE(269),
    1,
    sym_bit_value,
    STATE(317),
    1,
    sym_annotation_appl,
    [9391] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1036),
    1,
    anon_sym_AT,
    ACTIONS(1038),
    1,
    sym_identifier,
    STATE(166),
    1,
    sym_comment,
    STATE(193),
    1,
    aux_sym_interface_def_repeat1,
    STATE(269),
    1,
    sym_bit_value,
    STATE(317),
    1,
    sym_annotation_appl,
    [9413] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(167),
    1,
    sym_comment,
    ACTIONS(799),
    5,
    anon_sym_interface,
    anon_sym_local,
    anon_sym_bitmask,
    anon_sym_AT,
    anon_sym_struct,
    [9427] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1052),
    1,
    anon_sym_RBRACE,
    ACTIONS(1054),
    1,
    anon_sym_bitfield,
    STATE(168),
    1,
    sym_comment,
    STATE(175),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(288),
    1,
    sym_bitfield_spec,
    STATE(361),
    1,
    sym_bitfield,
    [9449] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1036),
    1,
    anon_sym_AT,
    ACTIONS(1038),
    1,
    sym_identifier,
    STATE(169),
    1,
    sym_comment,
    STATE(193),
    1,
    aux_sym_interface_def_repeat1,
    STATE(317),
    1,
    sym_annotation_appl,
    STATE(383),
    1,
    sym_bit_value,
    [9471] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1056),
    1,
    sym_identifier,
    STATE(170),
    1,
    sym_comment,
    STATE(198),
    1,
    sym_declarator,
    STATE(255),
    1,
    sym_declarators,
    STATE(254),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [9491] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1058),
    1,
    anon_sym_LBRACE,
    ACTIONS(1060),
    1,
    anon_sym_COLON,
    ACTIONS(1062),
    1,
    anon_sym_SEMI,
    ACTIONS(1064),
    1,
    anon_sym_supports,
    STATE(171),
    1,
    sym_comment,
    STATE(449),
    1,
    sym_value_inheritance_spec,
    [9513] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1056),
    1,
    sym_identifier,
    STATE(172),
    1,
    sym_comment,
    STATE(198),
    1,
    sym_declarator,
    STATE(500),
    1,
    sym_declarators,
    STATE(254),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [9533] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1054),
    1,
    anon_sym_bitfield,
    ACTIONS(1066),
    1,
    anon_sym_RBRACE,
    STATE(173),
    1,
    sym_comment,
    STATE(181),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(288),
    1,
    sym_bitfield_spec,
    STATE(361),
    1,
    sym_bitfield,
    [9555] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1003),
    1,
    anon_sym_in,
    STATE(36),
    1,
    sym_param_attribute,
    STATE(174),
    1,
    sym_comment,
    STATE(349),
    1,
    sym_param_dcl,
    ACTIONS(1005),
    2,
    anon_sym_out,
    anon_sym_inout,
    [9575] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1054),
    1,
    anon_sym_bitfield,
    ACTIONS(1068),
    1,
    anon_sym_RBRACE,
    STATE(175),
    1,
    sym_comment,
    STATE(181),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(288),
    1,
    sym_bitfield_spec,
    STATE(361),
    1,
    sym_bitfield,
    [9597] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(176),
    1,
    sym_comment,
    ACTIONS(803),
    5,
    anon_sym_interface,
    anon_sym_local,
    anon_sym_bitmask,
    anon_sym_AT,
    anon_sym_struct,
    [9611] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1056),
    1,
    sym_identifier,
    STATE(177),
    1,
    sym_comment,
    STATE(294),
    1,
    sym_any_declarator,
    STATE(458),
    1,
    sym_any_declarators,
    STATE(352),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [9631] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1036),
    1,
    anon_sym_AT,
    ACTIONS(1038),
    1,
    sym_identifier,
    STATE(178),
    1,
    sym_comment,
    STATE(193),
    1,
    aux_sym_interface_def_repeat1,
    STATE(220),
    1,
    sym_bit_value,
    STATE(317),
    1,
    sym_annotation_appl,
    [9653] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1036),
    1,
    anon_sym_AT,
    ACTIONS(1038),
    1,
    sym_identifier,
    STATE(169),
    1,
    aux_sym_interface_def_repeat1,
    STATE(179),
    1,
    sym_comment,
    STATE(317),
    1,
    sym_annotation_appl,
    STATE(348),
    1,
    sym_bit_value,
    [9675] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1054),
    1,
    anon_sym_bitfield,
    ACTIONS(1070),
    1,
    anon_sym_RBRACE,
    STATE(173),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(180),
    1,
    sym_comment,
    STATE(288),
    1,
    sym_bitfield_spec,
    STATE(361),
    1,
    sym_bitfield,
    [9697] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1072),
    1,
    anon_sym_RBRACE,
    ACTIONS(1074),
    1,
    anon_sym_bitfield,
    STATE(288),
    1,
    sym_bitfield_spec,
    STATE(361),
    1,
    sym_bitfield,
    STATE(181),
    2,
    sym_comment,
    aux_sym_bitset_dcl_repeat1,
    [9717] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1056),
    1,
    sym_identifier,
    STATE(182),
    1,
    sym_comment,
    STATE(198),
    1,
    sym_declarator,
    STATE(306),
    1,
    sym_declarators,
    STATE(254),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [9737] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(974),
    1,
    anon_sym_bitmask,
    ACTIONS(976),
    1,
    anon_sym_AT,
    ACTIONS(978),
    1,
    anon_sym_struct,
    STATE(149),
    1,
    aux_sym_interface_def_repeat1,
    STATE(167),
    1,
    sym_annotation_appl,
    STATE(183),
    1,
    sym_comment,
    [9759] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(984),
    1,
    anon_sym_COMMA,
    ACTIONS(1077),
    1,
    anon_sym_SEMI,
    ACTIONS(1079),
    1,
    anon_sym_raises,
    STATE(184),
    1,
    sym_comment,
    STATE(261),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    STATE(437),
    1,
    sym_raises_expr,
    [9781] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1024),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(1026),
    1,
    sym_identifier,
    STATE(185),
    1,
    sym_comment,
    STATE(197),
    1,
    aux_sym_enumerator_repeat1,
    STATE(334),
    1,
    sym_enum_modifier,
    STATE(379),
    1,
    sym_enumerator,
    [9803] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(186),
    1,
    sym_comment,
    ACTIONS(1081),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [9816] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(353),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1083),
    1,
    sym_identifier,
    STATE(187),
    1,
    sym_comment,
    STATE(297),
    1,
    sym_scoped_name,
    STATE(307),
    1,
    sym_interface_name,
    [9835] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1085),
    1,
    anon_sym_COMMA,
    STATE(188),
    1,
    sym_comment,
    STATE(213),
    1,
    aux_sym_declarators_repeat1,
    ACTIONS(1087),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    [9852] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1089),
    1,
    anon_sym_LBRACE,
    ACTIONS(1091),
    1,
    anon_sym_COLON,
    ACTIONS(1093),
    1,
    anon_sym_SEMI,
    STATE(189),
    1,
    sym_comment,
    STATE(438),
    1,
    sym_interface_inheritance_spec,
    [9871] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(190),
    1,
    sym_comment,
    ACTIONS(1095),
    4,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_LBRACK,
    [9884] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1097),
    1,
    anon_sym_LBRACE,
    ACTIONS(1099),
    1,
    anon_sym_COLON,
    STATE(191),
    1,
    sym_comment,
    ACTIONS(1101),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9901] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(192),
    1,
    sym_comment,
    ACTIONS(1103),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [9914] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(752),
    1,
    sym_identifier,
    ACTIONS(1105),
    1,
    anon_sym_AT,
    STATE(317),
    1,
    sym_annotation_appl,
    STATE(193),
    2,
    sym_comment,
    aux_sym_interface_def_repeat1,
    [9931] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(194),
    1,
    sym_comment,
    ACTIONS(1108),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [9944] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(353),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1083),
    1,
    sym_identifier,
    STATE(195),
    1,
    sym_comment,
    STATE(297),
    1,
    sym_scoped_name,
    STATE(509),
    1,
    sym_interface_name,
    [9963] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(196),
    1,
    sym_comment,
    ACTIONS(1110),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [9976] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1024),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(1112),
    1,
    sym_identifier,
    STATE(197),
    1,
    sym_comment,
    STATE(206),
    1,
    aux_sym_enumerator_repeat1,
    STATE(334),
    1,
    sym_enum_modifier,
    [9995] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1085),
    1,
    anon_sym_COMMA,
    STATE(188),
    1,
    aux_sym_declarators_repeat1,
    STATE(198),
    1,
    sym_comment,
    ACTIONS(1114),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    [10012] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(199),
    1,
    sym_comment,
    ACTIONS(1116),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [10025] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(353),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1083),
    1,
    sym_identifier,
    STATE(200),
    1,
    sym_comment,
    STATE(232),
    1,
    sym_scoped_name,
    STATE(324),
    1,
    sym_value_name,
    [10044] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(201),
    1,
    sym_comment,
    ACTIONS(1118),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [10057] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(353),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1083),
    1,
    sym_identifier,
    STATE(202),
    1,
    sym_comment,
    STATE(297),
    1,
    sym_scoped_name,
    STATE(470),
    1,
    sym_interface_name,
    [10076] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(203),
    1,
    sym_comment,
    ACTIONS(1120),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [10089] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(870),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1122),
    1,
    anon_sym_COMMA,
    ACTIONS(1124),
    1,
    anon_sym_RPAREN,
    STATE(204),
    1,
    sym_comment,
    STATE(237),
    1,
    aux_sym_raises_expr_repeat1,
    [10108] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(205),
    1,
    sym_comment,
    ACTIONS(1126),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [10121] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1128),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(1131),
    1,
    sym_identifier,
    STATE(334),
    1,
    sym_enum_modifier,
    STATE(206),
    2,
    sym_comment,
    aux_sym_enumerator_repeat1,
    [10138] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1056),
    1,
    sym_identifier,
    STATE(207),
    1,
    sym_comment,
    STATE(505),
    1,
    sym_declarator,
    STATE(254),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [10155] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(208),
    1,
    sym_comment,
    ACTIONS(1133),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [10168] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1135),
    1,
    anon_sym_LT,
    STATE(209),
    1,
    sym_comment,
    ACTIONS(1137),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [10183] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(210),
    1,
    sym_comment,
    ACTIONS(1139),
    4,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_LBRACK,
    [10196] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(211),
    1,
    sym_comment,
    ACTIONS(1141),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [10209] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1056),
    1,
    sym_identifier,
    STATE(212),
    1,
    sym_comment,
    STATE(328),
    1,
    sym_any_declarator,
    STATE(352),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [10226] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1143),
    1,
    anon_sym_COMMA,
    ACTIONS(1146),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    STATE(213),
    2,
    sym_comment,
    aux_sym_declarators_repeat1,
    [10241] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(870),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1122),
    1,
    anon_sym_COMMA,
    ACTIONS(1148),
    1,
    anon_sym_RPAREN,
    STATE(214),
    1,
    sym_comment,
    STATE(234),
    1,
    aux_sym_raises_expr_repeat1,
    [10260] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1150),
    1,
    anon_sym_COLON_COLON,
    STATE(215),
    1,
    sym_comment,
    ACTIONS(944),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [10275] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1152),
    1,
    anon_sym_RPAREN,
    ACTIONS(1154),
    1,
    anon_sym_in,
    STATE(216),
    1,
    sym_comment,
    STATE(275),
    1,
    sym_init_param_dcl,
    STATE(413),
    1,
    sym_init_param_dcls,
    [10294] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(353),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1083),
    1,
    sym_identifier,
    STATE(217),
    1,
    sym_comment,
    STATE(297),
    1,
    sym_scoped_name,
    STATE(343),
    1,
    sym_interface_name,
    [10313] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1056),
    1,
    sym_identifier,
    STATE(218),
    1,
    sym_comment,
    STATE(272),
    1,
    sym_declarator,
    STATE(254),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [10330] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1150),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1156),
    1,
    anon_sym_LPAREN,
    STATE(219),
    1,
    sym_comment,
    ACTIONS(777),
    2,
    anon_sym_AT,
    sym_identifier,
    [10347] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1158),
    1,
    anon_sym_COMMA,
    ACTIONS(1160),
    1,
    anon_sym_RBRACE,
    STATE(220),
    1,
    sym_comment,
    STATE(247),
    1,
    aux_sym_bitmask_dcl_repeat1,
    [10363] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1162),
    1,
    anon_sym_COMMA,
    ACTIONS(1164),
    1,
    anon_sym_RBRACE,
    STATE(221),
    1,
    sym_comment,
    STATE(283),
    1,
    aux_sym_enum_dcl_repeat1,
    [10379] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1166),
    1,
    anon_sym_COMMA,
    ACTIONS(1168),
    1,
    anon_sym_RPAREN,
    STATE(222),
    1,
    sym_comment,
    STATE(291),
    1,
    aux_sym_annotation_appl_params_repeat1,
    [10395] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(75),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1170),
    1,
    sym_identifier,
    STATE(219),
    1,
    sym_scoped_name,
    STATE(223),
    1,
    sym_comment,
    [10411] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1172),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1174),
    1,
    sym_identifier,
    STATE(72),
    1,
    sym_scoped_name,
    STATE(224),
    1,
    sym_comment,
    [10427] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(353),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1083),
    1,
    sym_identifier,
    STATE(150),
    1,
    sym_scoped_name,
    STATE(225),
    1,
    sym_comment,
    [10443] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1176),
    1,
    anon_sym_GT,
    ACTIONS(1178),
    1,
    anon_sym_COMMA,
    STATE(226),
    1,
    sym_comment,
    STATE(295),
    1,
    aux_sym_formal_parameters_repeat1,
    [10459] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(353),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1180),
    1,
    sym_identifier,
    STATE(227),
    1,
    sym_comment,
    STATE(369),
    1,
    sym_scoped_name,
    [10475] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1182),
    1,
    anon_sym_GT,
    ACTIONS(1184),
    1,
    anon_sym_COMMA,
    STATE(228),
    2,
    sym_comment,
    aux_sym_formal_parameter_names_repeat1,
    [10489] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1187),
    1,
    anon_sym_GT,
    ACTIONS(1189),
    1,
    anon_sym_COMMA,
    STATE(228),
    1,
    aux_sym_formal_parameter_names_repeat1,
    STATE(229),
    1,
    sym_comment,
    [10505] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1191),
    1,
    anon_sym_COMMA,
    ACTIONS(1194),
    1,
    anon_sym_RPAREN,
    STATE(230),
    2,
    sym_comment,
    aux_sym_raises_expr_repeat1,
    [10519] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1196),
    1,
    anon_sym_GT,
    ACTIONS(1198),
    1,
    anon_sym_COMMA,
    STATE(231),
    1,
    sym_comment,
    STATE(300),
    1,
    aux_sym_actual_parameters_repeat1,
    [10535] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(870),
    1,
    anon_sym_COLON_COLON,
    STATE(232),
    1,
    sym_comment,
    ACTIONS(1200),
    2,
    anon_sym_LBRACE,
    anon_sym_supports,
    [10549] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(870),
    1,
    anon_sym_COLON_COLON,
    STATE(233),
    1,
    sym_comment,
    ACTIONS(1194),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [10563] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1122),
    1,
    anon_sym_COMMA,
    ACTIONS(1202),
    1,
    anon_sym_RPAREN,
    STATE(230),
    1,
    aux_sym_raises_expr_repeat1,
    STATE(234),
    1,
    sym_comment,
    [10579] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(235),
    1,
    sym_comment,
    ACTIONS(1204),
    3,
    anon_sym_RBRACE,
    anon_sym_default,
    anon_sym_case,
    [10591] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1189),
    1,
    anon_sym_COMMA,
    ACTIONS(1206),
    1,
    anon_sym_GT,
    STATE(229),
    1,
    aux_sym_formal_parameter_names_repeat1,
    STATE(236),
    1,
    sym_comment,
    [10607] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1122),
    1,
    anon_sym_COMMA,
    ACTIONS(1208),
    1,
    anon_sym_RPAREN,
    STATE(230),
    1,
    aux_sym_raises_expr_repeat1,
    STATE(237),
    1,
    sym_comment,
    [10623] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(353),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1083),
    1,
    sym_identifier,
    STATE(233),
    1,
    sym_scoped_name,
    STATE(238),
    1,
    sym_comment,
    [10639] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(239),
    1,
    sym_comment,
    ACTIONS(1210),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [10651] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1022),
    1,
    anon_sym_RBRACE,
    ACTIONS(1162),
    1,
    anon_sym_COMMA,
    STATE(221),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(240),
    1,
    sym_comment,
    [10667] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1212),
    1,
    anon_sym_COMMA,
    ACTIONS(1215),
    1,
    anon_sym_RPAREN,
    STATE(241),
    2,
    sym_comment,
    aux_sym_init_param_dcls_repeat1,
    [10681] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1217),
    1,
    anon_sym_COMMA,
    ACTIONS(1220),
    1,
    anon_sym_RPAREN,
    STATE(242),
    2,
    sym_comment,
    aux_sym_parameter_dcls_repeat1,
    [10695] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(243),
    1,
    sym_comment,
    ACTIONS(1222),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [10707] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(244),
    1,
    sym_comment,
    ACTIONS(1224),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [10719] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(353),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1083),
    1,
    sym_identifier,
    STATE(214),
    1,
    sym_scoped_name,
    STATE(245),
    1,
    sym_comment,
    [10735] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(246),
    1,
    sym_comment,
    ACTIONS(1226),
    3,
    anon_sym_RBRACE,
    anon_sym_default,
    anon_sym_case,
    [10747] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1158),
    1,
    anon_sym_COMMA,
    ACTIONS(1228),
    1,
    anon_sym_RBRACE,
    STATE(247),
    1,
    sym_comment,
    STATE(305),
    1,
    aux_sym_bitmask_dcl_repeat1,
    [10763] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1230),
    1,
    anon_sym_COMMA,
    ACTIONS(1232),
    1,
    anon_sym_SEMI,
    STATE(248),
    1,
    sym_comment,
    STATE(296),
    1,
    aux_sym_any_declarators_repeat1,
    [10779] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1234),
    1,
    sym_identifier,
    STATE(146),
    1,
    sym_simple_declarator,
    STATE(249),
    1,
    sym_comment,
    STATE(508),
    1,
    sym_attr_declarator,
    [10795] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1236),
    1,
    anon_sym_COMMA,
    ACTIONS(1238),
    1,
    anon_sym_RPAREN,
    STATE(241),
    1,
    aux_sym_init_param_dcls_repeat1,
    STATE(250),
    1,
    sym_comment,
    [10811] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1079),
    1,
    anon_sym_raises,
    ACTIONS(1240),
    1,
    anon_sym_SEMI,
    STATE(251),
    1,
    sym_comment,
    STATE(483),
    1,
    sym_raises_expr,
    [10827] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1242),
    1,
    anon_sym_COMMA,
    ACTIONS(1244),
    1,
    anon_sym_RPAREN,
    STATE(242),
    1,
    aux_sym_parameter_dcls_repeat1,
    STATE(252),
    1,
    sym_comment,
    [10843] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(353),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1083),
    1,
    sym_identifier,
    STATE(253),
    1,
    sym_comment,
    STATE(337),
    1,
    sym_scoped_name,
    [10859] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(254),
    1,
    sym_comment,
    ACTIONS(1246),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [10871] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1248),
    1,
    anon_sym_SEMI,
    ACTIONS(1250),
    1,
    anon_sym_default,
    STATE(255),
    1,
    sym_comment,
    STATE(484),
    1,
    sym_default,
    [10887] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(771),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1252),
    1,
    anon_sym_LT,
    ACTIONS(1254),
    1,
    anon_sym_LBRACE,
    STATE(256),
    1,
    sym_comment,
    [10903] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1256),
    1,
    anon_sym_COMMA,
    ACTIONS(1258),
    1,
    anon_sym_LBRACE,
    STATE(257),
    1,
    sym_comment,
    STATE(303),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    [10919] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1079),
    1,
    anon_sym_raises,
    ACTIONS(1260),
    1,
    anon_sym_SEMI,
    STATE(258),
    1,
    sym_comment,
    STATE(477),
    1,
    sym_raises_expr,
    [10935] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1262),
    1,
    anon_sym_COMMA,
    ACTIONS(1265),
    1,
    anon_sym_SEMI,
    STATE(259),
    2,
    sym_comment,
    aux_sym_readonly_attr_declarator_repeat1,
    [10949] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(353),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1083),
    1,
    sym_identifier,
    STATE(204),
    1,
    sym_scoped_name,
    STATE(260),
    1,
    sym_comment,
    [10965] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(984),
    1,
    anon_sym_COMMA,
    ACTIONS(1267),
    1,
    anon_sym_SEMI,
    STATE(259),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    STATE(261),
    1,
    sym_comment,
    [10981] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1269),
    1,
    anon_sym_SEMI,
    ACTIONS(1271),
    1,
    sym_identifier,
    STATE(262),
    1,
    sym_comment,
    STATE(302),
    1,
    aux_sym_bitfield_repeat1,
    [10997] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(263),
    1,
    sym_comment,
    ACTIONS(1273),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [11009] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(264),
    1,
    sym_comment,
    ACTIONS(1275),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [11021] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1277),
    1,
    anon_sym_SEMI,
    ACTIONS(1279),
    1,
    anon_sym_switch,
    ACTIONS(1281),
    1,
    sym_identifier,
    STATE(265),
    1,
    sym_comment,
    [11037] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(353),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1083),
    1,
    sym_identifier,
    STATE(266),
    1,
    sym_comment,
    STATE(309),
    1,
    sym_scoped_name,
    [11053] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(267),
    1,
    sym_comment,
    ACTIONS(1283),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [11065] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1158),
    1,
    anon_sym_COMMA,
    ACTIONS(1285),
    1,
    anon_sym_RBRACE,
    STATE(268),
    1,
    sym_comment,
    STATE(305),
    1,
    aux_sym_bitmask_dcl_repeat1,
    [11081] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1158),
    1,
    anon_sym_COMMA,
    ACTIONS(1285),
    1,
    anon_sym_RBRACE,
    STATE(269),
    1,
    sym_comment,
    STATE(304),
    1,
    aux_sym_bitmask_dcl_repeat1,
    [11097] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(270),
    1,
    sym_comment,
    ACTIONS(1287),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [11109] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(271),
    1,
    sym_comment,
    ACTIONS(1289),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [11121] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(272),
    1,
    sym_comment,
    ACTIONS(1146),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [11133] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(273),
    1,
    sym_comment,
    ACTIONS(1291),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [11145] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1162),
    1,
    anon_sym_COMMA,
    ACTIONS(1293),
    1,
    anon_sym_RBRACE,
    STATE(274),
    1,
    sym_comment,
    STATE(283),
    1,
    aux_sym_enum_dcl_repeat1,
    [11161] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1236),
    1,
    anon_sym_COMMA,
    ACTIONS(1295),
    1,
    anon_sym_RPAREN,
    STATE(250),
    1,
    aux_sym_init_param_dcls_repeat1,
    STATE(275),
    1,
    sym_comment,
    [11177] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(276),
    1,
    sym_comment,
    ACTIONS(944),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [11189] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1079),
    1,
    anon_sym_raises,
    ACTIONS(1297),
    1,
    anon_sym_SEMI,
    STATE(277),
    1,
    sym_comment,
    STATE(451),
    1,
    sym_raises_expr,
    [11205] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1242),
    1,
    anon_sym_COMMA,
    ACTIONS(1299),
    1,
    anon_sym_RPAREN,
    STATE(252),
    1,
    aux_sym_parameter_dcls_repeat1,
    STATE(278),
    1,
    sym_comment,
    [11221] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1079),
    1,
    anon_sym_raises,
    ACTIONS(1301),
    1,
    anon_sym_SEMI,
    STATE(279),
    1,
    sym_comment,
    STATE(445),
    1,
    sym_raises_expr,
    [11237] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(984),
    1,
    anon_sym_COMMA,
    ACTIONS(1303),
    1,
    anon_sym_SEMI,
    STATE(259),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    STATE(280),
    1,
    sym_comment,
    [11253] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(990),
    1,
    anon_sym_setraises,
    ACTIONS(1305),
    1,
    anon_sym_SEMI,
    STATE(281),
    1,
    sym_comment,
    STATE(443),
    1,
    sym_set_excep_expr,
    [11269] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(282),
    1,
    sym_comment,
    ACTIONS(1307),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [11281] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1309),
    1,
    anon_sym_COMMA,
    ACTIONS(1312),
    1,
    anon_sym_RBRACE,
    STATE(283),
    2,
    sym_comment,
    aux_sym_enum_dcl_repeat1,
    [11295] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1050),
    1,
    anon_sym_RBRACE,
    ACTIONS(1158),
    1,
    anon_sym_COMMA,
    STATE(268),
    1,
    aux_sym_bitmask_dcl_repeat1,
    STATE(284),
    1,
    sym_comment,
    [11311] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1314),
    1,
    anon_sym_GT,
    ACTIONS(1316),
    1,
    anon_sym_COMMA,
    STATE(285),
    2,
    sym_comment,
    aux_sym_actual_parameters_repeat1,
    [11325] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1319),
    1,
    anon_sym_GT,
    ACTIONS(1321),
    1,
    anon_sym_COMMA,
    STATE(286),
    2,
    sym_comment,
    aux_sym_formal_parameters_repeat1,
    [11339] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1324),
    1,
    anon_sym_COMMA,
    ACTIONS(1327),
    1,
    anon_sym_RPAREN,
    STATE(287),
    2,
    sym_comment,
    aux_sym_annotation_appl_params_repeat1,
    [11353] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1271),
    1,
    sym_identifier,
    ACTIONS(1329),
    1,
    anon_sym_SEMI,
    STATE(262),
    1,
    aux_sym_bitfield_repeat1,
    STATE(288),
    1,
    sym_comment,
    [11369] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(289),
    1,
    sym_comment,
    ACTIONS(1331),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [11381] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1089),
    1,
    anon_sym_LBRACE,
    ACTIONS(1091),
    1,
    anon_sym_COLON,
    STATE(290),
    1,
    sym_comment,
    STATE(438),
    1,
    sym_interface_inheritance_spec,
    [11397] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1166),
    1,
    anon_sym_COMMA,
    ACTIONS(1333),
    1,
    anon_sym_RPAREN,
    STATE(287),
    1,
    aux_sym_annotation_appl_params_repeat1,
    STATE(291),
    1,
    sym_comment,
    [11413] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(353),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1083),
    1,
    sym_identifier,
    STATE(292),
    1,
    sym_comment,
    STATE(371),
    1,
    sym_scoped_name,
    [11429] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(353),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1083),
    1,
    sym_identifier,
    STATE(293),
    1,
    sym_comment,
    STATE(329),
    1,
    sym_scoped_name,
    [11445] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1230),
    1,
    anon_sym_COMMA,
    ACTIONS(1335),
    1,
    anon_sym_SEMI,
    STATE(248),
    1,
    aux_sym_any_declarators_repeat1,
    STATE(294),
    1,
    sym_comment,
    [11461] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1178),
    1,
    anon_sym_COMMA,
    ACTIONS(1337),
    1,
    anon_sym_GT,
    STATE(286),
    1,
    aux_sym_formal_parameters_repeat1,
    STATE(295),
    1,
    sym_comment,
    [11477] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1339),
    1,
    anon_sym_COMMA,
    ACTIONS(1342),
    1,
    anon_sym_SEMI,
    STATE(296),
    2,
    sym_comment,
    aux_sym_any_declarators_repeat1,
    [11491] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(870),
    1,
    anon_sym_COLON_COLON,
    STATE(297),
    1,
    sym_comment,
    ACTIONS(1344),
    2,
    anon_sym_COMMA,
    anon_sym_LBRACE,
    [11505] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(298),
    1,
    sym_comment,
    ACTIONS(1346),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [11517] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1234),
    1,
    sym_identifier,
    STATE(184),
    1,
    sym_simple_declarator,
    STATE(299),
    1,
    sym_comment,
    STATE(402),
    1,
    sym_readonly_attr_declarator,
    [11533] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1198),
    1,
    anon_sym_COMMA,
    ACTIONS(1348),
    1,
    anon_sym_GT,
    STATE(285),
    1,
    aux_sym_actual_parameters_repeat1,
    STATE(300),
    1,
    sym_comment,
    [11549] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(301),
    1,
    sym_comment,
    ACTIONS(1350),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [11561] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1352),
    1,
    anon_sym_SEMI,
    ACTIONS(1354),
    1,
    sym_identifier,
    STATE(302),
    2,
    sym_comment,
    aux_sym_bitfield_repeat1,
    [11575] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1357),
    1,
    anon_sym_COMMA,
    ACTIONS(1360),
    1,
    anon_sym_LBRACE,
    STATE(303),
    2,
    sym_comment,
    aux_sym_interface_inheritance_spec_repeat1,
    [11589] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1158),
    1,
    anon_sym_COMMA,
    ACTIONS(1160),
    1,
    anon_sym_RBRACE,
    STATE(304),
    1,
    sym_comment,
    STATE(305),
    1,
    aux_sym_bitmask_dcl_repeat1,
    [11605] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1362),
    1,
    anon_sym_COMMA,
    ACTIONS(1365),
    1,
    anon_sym_RBRACE,
    STATE(305),
    2,
    sym_comment,
    aux_sym_bitmask_dcl_repeat1,
    [11619] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1250),
    1,
    anon_sym_default,
    ACTIONS(1367),
    1,
    anon_sym_SEMI,
    STATE(306),
    1,
    sym_comment,
    STATE(423),
    1,
    sym_default,
    [11635] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1256),
    1,
    anon_sym_COMMA,
    ACTIONS(1369),
    1,
    anon_sym_LBRACE,
    STATE(257),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    STATE(307),
    1,
    sym_comment,
    [11651] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1162),
    1,
    anon_sym_COMMA,
    ACTIONS(1164),
    1,
    anon_sym_RBRACE,
    STATE(274),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(308),
    1,
    sym_comment,
    [11667] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(870),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1371),
    1,
    anon_sym_LT,
    STATE(309),
    1,
    sym_comment,
    [11680] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1234),
    1,
    sym_identifier,
    STATE(310),
    1,
    sym_comment,
    STATE(377),
    1,
    sym_simple_declarator,
    [11693] = 4,
    ACTIONS(1373),
    1,
    aux_sym_preproc_call_token1,
    ACTIONS(1375),
    1,
    sym_preproc_arg,
    ACTIONS(1377),
    1,
    anon_sym_SLASH_SLASH,
    STATE(311),
    1,
    sym_comment,
    [11706] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(870),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(944),
    1,
    anon_sym_COMMA,
    STATE(312),
    1,
    sym_comment,
    [11719] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(313),
    1,
    sym_comment,
    ACTIONS(1379),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [11730] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(314),
    1,
    sym_comment,
    ACTIONS(803),
    2,
    anon_sym_AT,
    sym_identifier,
    [11741] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(315),
    1,
    sym_comment,
    ACTIONS(1381),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [11752] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(970),
    1,
    anon_sym_interface,
    STATE(316),
    1,
    sym_comment,
    STATE(465),
    1,
    sym_interface_header,
    [11765] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(317),
    1,
    sym_comment,
    ACTIONS(799),
    2,
    anon_sym_AT,
    sym_identifier,
    [11776] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(870),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1383),
    1,
    anon_sym_RPAREN,
    STATE(318),
    1,
    sym_comment,
    [11789] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1234),
    1,
    sym_identifier,
    STATE(319),
    1,
    sym_comment,
    STATE(409),
    1,
    sym_simple_declarator,
    [11802] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(320),
    1,
    sym_comment,
    ACTIONS(1385),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [11813] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(321),
    1,
    sym_comment,
    ACTIONS(1387),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [11824] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(322),
    1,
    sym_comment,
    ACTIONS(1389),
    2,
    anon_sym_GT,
    anon_sym_COMMA,
    [11835] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(323),
    1,
    sym_comment,
    ACTIONS(1182),
    2,
    anon_sym_GT,
    anon_sym_COMMA,
    [11846] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1391),
    1,
    anon_sym_LBRACE,
    ACTIONS(1393),
    1,
    anon_sym_supports,
    STATE(324),
    1,
    sym_comment,
    [11859] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1395),
    1,
    anon_sym_LBRACE,
    ACTIONS(1397),
    1,
    anon_sym_COLON,
    STATE(325),
    1,
    sym_comment,
    [11872] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(326),
    1,
    sym_comment,
    ACTIONS(1399),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [11883] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(327),
    1,
    sym_comment,
    ACTIONS(1401),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [11894] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(328),
    1,
    sym_comment,
    ACTIONS(1342),
    2,
    anon_sym_COMMA,
    anon_sym_SEMI,
    [11905] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(870),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1403),
    1,
    anon_sym_LBRACE,
    STATE(329),
    1,
    sym_comment,
    [11918] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(330),
    1,
    sym_comment,
    ACTIONS(1405),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [11929] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(331),
    1,
    sym_comment,
    ACTIONS(1407),
    2,
    anon_sym_ATdefault_literal,
    sym_identifier,
    [11940] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(332),
    1,
    sym_comment,
    ACTIONS(1409),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [11951] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(333),
    1,
    sym_comment,
    ACTIONS(1411),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [11962] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(334),
    1,
    sym_comment,
    ACTIONS(1413),
    2,
    anon_sym_ATdefault_literal,
    sym_identifier,
    [11973] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(335),
    1,
    sym_comment,
    ACTIONS(1415),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [11984] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1417),
    1,
    sym_identifier,
    STATE(336),
    1,
    sym_comment,
    STATE(503),
    1,
    sym_formal_parameter_names,
    [11997] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(870),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1419),
    1,
    anon_sym_LBRACE,
    STATE(337),
    1,
    sym_comment,
    [12010] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(338),
    1,
    sym_comment,
    ACTIONS(1421),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [12021] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(339),
    1,
    sym_comment,
    ACTIONS(1423),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [12032] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(340),
    1,
    sym_comment,
    ACTIONS(1425),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [12043] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(341),
    1,
    sym_comment,
    ACTIONS(1215),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [12054] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(342),
    1,
    sym_comment,
    ACTIONS(1427),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [12065] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(343),
    1,
    sym_comment,
    ACTIONS(1360),
    2,
    anon_sym_COMMA,
    anon_sym_LBRACE,
    [12076] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1429),
    1,
    anon_sym_GT,
    ACTIONS(1431),
    1,
    anon_sym_COMMA,
    STATE(344),
    1,
    sym_comment,
    [12089] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(345),
    1,
    sym_comment,
    ACTIONS(1433),
    2,
    anon_sym_RBRACE,
    anon_sym_bitfield,
    [12100] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(346),
    1,
    sym_comment,
    ACTIONS(1435),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [12111] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(347),
    1,
    sym_comment,
    ACTIONS(1437),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [12122] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(348),
    1,
    sym_comment,
    ACTIONS(1365),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [12133] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(349),
    1,
    sym_comment,
    ACTIONS(1220),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [12144] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(350),
    1,
    sym_comment,
    ACTIONS(1439),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [12155] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(351),
    1,
    sym_comment,
    ACTIONS(1441),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [12166] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(352),
    1,
    sym_comment,
    ACTIONS(1443),
    2,
    anon_sym_COMMA,
    anon_sym_SEMI,
    [12177] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1445),
    1,
    anon_sym_DQUOTE,
    ACTIONS(1447),
    1,
    anon_sym_SQUOTE,
    STATE(353),
    1,
    sym_comment,
    [12190] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1449),
    1,
    anon_sym_LBRACE,
    ACTIONS(1451),
    1,
    anon_sym_COLON,
    STATE(354),
    1,
    sym_comment,
    [12203] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(355),
    1,
    sym_comment,
    ACTIONS(1453),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [12214] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(356),
    1,
    sym_comment,
    ACTIONS(1455),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [12225] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1154),
    1,
    anon_sym_in,
    STATE(341),
    1,
    sym_init_param_dcl,
    STATE(357),
    1,
    sym_comment,
    [12238] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(358),
    1,
    sym_comment,
    ACTIONS(1457),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [12249] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1234),
    1,
    sym_identifier,
    STATE(342),
    1,
    sym_simple_declarator,
    STATE(359),
    1,
    sym_comment,
    [12262] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1234),
    1,
    sym_identifier,
    STATE(347),
    1,
    sym_simple_declarator,
    STATE(360),
    1,
    sym_comment,
    [12275] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(361),
    1,
    sym_comment,
    ACTIONS(1459),
    2,
    anon_sym_RBRACE,
    anon_sym_bitfield,
    [12286] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(362),
    1,
    sym_comment,
    ACTIONS(1461),
    2,
    anon_sym_RBRACE,
    anon_sym_bitfield,
    [12297] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(363),
    1,
    sym_comment,
    ACTIONS(1463),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [12308] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(364),
    1,
    sym_comment,
    ACTIONS(1465),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [12319] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(365),
    1,
    sym_comment,
    ACTIONS(1265),
    2,
    anon_sym_COMMA,
    anon_sym_SEMI,
    [12330] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(366),
    1,
    sym_comment,
    ACTIONS(1467),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [12341] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(367),
    1,
    sym_comment,
    ACTIONS(1327),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [12352] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1469),
    1,
    sym_identifier,
    STATE(367),
    1,
    sym_annotation_appl_param,
    STATE(368),
    1,
    sym_comment,
    [12365] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(870),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1471),
    1,
    anon_sym_LT,
    STATE(369),
    1,
    sym_comment,
    [12378] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(370),
    1,
    sym_comment,
    ACTIONS(1319),
    2,
    anon_sym_GT,
    anon_sym_COMMA,
    [12389] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(870),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1473),
    1,
    anon_sym_LBRACE,
    STATE(371),
    1,
    sym_comment,
    [12402] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(372),
    1,
    sym_comment,
    ACTIONS(1475),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [12413] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(373),
    1,
    sym_comment,
    ACTIONS(1314),
    2,
    anon_sym_GT,
    anon_sym_COMMA,
    [12424] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(374),
    1,
    sym_comment,
    ACTIONS(1477),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [12435] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(375),
    1,
    sym_comment,
    ACTIONS(1479),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [12446] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(376),
    1,
    sym_comment,
    ACTIONS(1481),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [12457] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1483),
    1,
    anon_sym_SEMI,
    ACTIONS(1485),
    1,
    anon_sym_default,
    STATE(377),
    1,
    sym_comment,
    [12470] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(378),
    1,
    sym_comment,
    ACTIONS(1487),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [12481] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(379),
    1,
    sym_comment,
    ACTIONS(1312),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [12492] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(380),
    1,
    sym_comment,
    ACTIONS(1489),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [12503] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(381),
    1,
    sym_comment,
    ACTIONS(1491),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [12514] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(382),
    1,
    sym_comment,
    ACTIONS(1493),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [12525] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(383),
    1,
    sym_comment,
    ACTIONS(1495),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [12536] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1497),
    1,
    anon_sym_GT,
    ACTIONS(1499),
    1,
    anon_sym_COMMA,
    STATE(384),
    1,
    sym_comment,
    [12549] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(385),
    1,
    sym_comment,
    ACTIONS(1501),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [12560] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(386),
    1,
    sym_comment,
    ACTIONS(1503),
    2,
    anon_sym_GT,
    anon_sym_COMMA,
    [12571] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(970),
    1,
    anon_sym_interface,
    STATE(387),
    1,
    sym_comment,
    STATE(506),
    1,
    sym_interface_header,
    [12584] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1234),
    1,
    sym_identifier,
    STATE(365),
    1,
    sym_simple_declarator,
    STATE(388),
    1,
    sym_comment,
    [12597] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1505),
    1,
    anon_sym_LPAREN,
    STATE(363),
    1,
    sym_exception_list,
    STATE(389),
    1,
    sym_comment,
    [12610] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1505),
    1,
    anon_sym_LPAREN,
    STATE(390),
    1,
    sym_comment,
    STATE(442),
    1,
    sym_exception_list,
    [12623] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1150),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1507),
    1,
    sym_identifier,
    STATE(391),
    1,
    sym_comment,
    [12636] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1509),
    1,
    anon_sym_LT,
    ACTIONS(1511),
    1,
    sym_identifier,
    STATE(392),
    1,
    sym_comment,
    [12649] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(393),
    1,
    sym_comment,
    ACTIONS(1513),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [12660] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1150),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1507),
    1,
    sym_identifier,
    STATE(394),
    1,
    sym_comment,
    [12673] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1515),
    1,
    anon_sym_SEMI,
    STATE(395),
    1,
    sym_comment,
    [12683] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1517),
    1,
    anon_sym_LBRACE,
    STATE(396),
    1,
    sym_comment,
    [12693] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1519),
    1,
    sym_identifier,
    STATE(397),
    1,
    sym_comment,
    [12703] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1521),
    1,
    anon_sym_LBRACE,
    STATE(398),
    1,
    sym_comment,
    [12713] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1523),
    1,
    sym_identifier,
    STATE(399),
    1,
    sym_comment,
    [12723] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1525),
    1,
    anon_sym_GT,
    STATE(400),
    1,
    sym_comment,
    [12733] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1527),
    1,
    sym_identifier,
    STATE(401),
    1,
    sym_comment,
    [12743] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1529),
    1,
    anon_sym_SEMI,
    STATE(402),
    1,
    sym_comment,
    [12753] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1303),
    1,
    anon_sym_SEMI,
    STATE(403),
    1,
    sym_comment,
    [12763] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1531),
    1,
    anon_sym_SEMI,
    STATE(404),
    1,
    sym_comment,
    [12773] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1305),
    1,
    anon_sym_SEMI,
    STATE(405),
    1,
    sym_comment,
    [12783] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1533),
    1,
    sym_identifier,
    STATE(406),
    1,
    sym_comment,
    [12793] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1535),
    1,
    anon_sym_RPAREN,
    STATE(407),
    1,
    sym_comment,
    [12803] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1537),
    1,
    sym_identifier,
    STATE(408),
    1,
    sym_comment,
    [12813] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1539),
    1,
    anon_sym_SEMI,
    STATE(409),
    1,
    sym_comment,
    [12823] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1541),
    1,
    anon_sym_SEMI,
    STATE(410),
    1,
    sym_comment,
    [12833] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1543),
    1,
    anon_sym_SQUOTE,
    STATE(411),
    1,
    sym_comment,
    [12843] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1545),
    1,
    anon_sym_DQUOTE,
    STATE(412),
    1,
    sym_comment,
    [12853] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1547),
    1,
    anon_sym_RPAREN,
    STATE(413),
    1,
    sym_comment,
    [12863] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1549),
    1,
    aux_sym_char_literal_token1,
    STATE(414),
    1,
    sym_comment,
    [12873] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1551),
    1,
    aux_sym_string_literal_token1,
    STATE(415),
    1,
    sym_comment,
    [12883] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1553),
    1,
    anon_sym_SEMI,
    STATE(416),
    1,
    sym_comment,
    [12893] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1555),
    1,
    anon_sym_RPAREN,
    STATE(417),
    1,
    sym_comment,
    [12903] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1557),
    1,
    anon_sym_LT,
    STATE(418),
    1,
    sym_comment,
    [12913] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1559),
    1,
    anon_sym_SEMI,
    STATE(419),
    1,
    sym_comment,
    [12923] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1561),
    1,
    anon_sym_SEMI,
    STATE(420),
    1,
    sym_comment,
    [12933] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1563),
    1,
    anon_sym_SEMI,
    STATE(421),
    1,
    sym_comment,
    [12943] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1565),
    1,
    anon_sym_LT,
    STATE(422),
    1,
    sym_comment,
    [12953] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1567),
    1,
    anon_sym_SEMI,
    STATE(423),
    1,
    sym_comment,
    [12963] = 3,
    ACTIONS(1377),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1569),
    1,
    aux_sym_comment_token1,
    STATE(424),
    1,
    sym_comment,
    [12973] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1571),
    1,
    anon_sym_SEMI,
    STATE(425),
    1,
    sym_comment,
    [12983] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1509),
    1,
    anon_sym_LT,
    STATE(426),
    1,
    sym_comment,
    [12993] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1573),
    1,
    sym_identifier,
    STATE(427),
    1,
    sym_comment,
    [13003] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1575),
    1,
    anon_sym_SEMI,
    STATE(428),
    1,
    sym_comment,
    [13013] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1507),
    1,
    sym_identifier,
    STATE(429),
    1,
    sym_comment,
    [13023] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1577),
    1,
    anon_sym_LBRACE,
    STATE(430),
    1,
    sym_comment,
    [13033] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1579),
    1,
    anon_sym_SEMI,
    STATE(431),
    1,
    sym_comment,
    [13043] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1581),
    1,
    aux_sym_string_literal_token1,
    STATE(432),
    1,
    sym_comment,
    [13053] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1583),
    1,
    aux_sym_char_literal_token1,
    STATE(433),
    1,
    sym_comment,
    [13063] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1168),
    1,
    anon_sym_RPAREN,
    STATE(434),
    1,
    sym_comment,
    [13073] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1585),
    1,
    anon_sym_SEMI,
    STATE(435),
    1,
    sym_comment,
    [13083] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1587),
    1,
    anon_sym_LPAREN,
    STATE(436),
    1,
    sym_comment,
    [13093] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1267),
    1,
    anon_sym_SEMI,
    STATE(437),
    1,
    sym_comment,
    [13103] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1589),
    1,
    anon_sym_LBRACE,
    STATE(438),
    1,
    sym_comment,
    [13113] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(940),
    1,
    anon_sym_EQ,
    STATE(439),
    1,
    sym_comment,
    [13123] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1591),
    1,
    anon_sym_RPAREN,
    STATE(440),
    1,
    sym_comment,
    [13133] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1593),
    1,
    sym_identifier,
    STATE(441),
    1,
    sym_comment,
    [13143] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1595),
    1,
    anon_sym_SEMI,
    STATE(442),
    1,
    sym_comment,
    [13153] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1597),
    1,
    anon_sym_SEMI,
    STATE(443),
    1,
    sym_comment,
    [13163] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1599),
    1,
    anon_sym_LBRACE,
    STATE(444),
    1,
    sym_comment,
    [13173] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1260),
    1,
    anon_sym_SEMI,
    STATE(445),
    1,
    sym_comment,
    [13183] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1601),
    1,
    sym_identifier,
    STATE(446),
    1,
    sym_comment,
    [13193] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1603),
    1,
    anon_sym_SEMI,
    STATE(447),
    1,
    sym_comment,
    [13203] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1605),
    1,
    anon_sym_SEMI,
    STATE(448),
    1,
    sym_comment,
    [13213] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1607),
    1,
    anon_sym_LBRACE,
    STATE(449),
    1,
    sym_comment,
    [13223] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1609),
    1,
    sym_identifier,
    STATE(450),
    1,
    sym_comment,
    [13233] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1240),
    1,
    anon_sym_SEMI,
    STATE(451),
    1,
    sym_comment,
    [13243] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1611),
    1,
    anon_sym_LT,
    STATE(452),
    1,
    sym_comment,
    [13253] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1613),
    1,
    anon_sym_SEMI,
    STATE(453),
    1,
    sym_comment,
    [13263] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1615),
    1,
    anon_sym_LPAREN,
    STATE(454),
    1,
    sym_comment,
    [13273] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1617),
    1,
    anon_sym_LPAREN,
    STATE(455),
    1,
    sym_comment,
    [13283] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1619),
    1,
    anon_sym_EQ,
    STATE(456),
    1,
    sym_comment,
    [13293] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1621),
    1,
    anon_sym_LPAREN,
    STATE(457),
    1,
    sym_comment,
    [13303] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1623),
    1,
    anon_sym_SEMI,
    STATE(458),
    1,
    sym_comment,
    [13313] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1625),
    1,
    anon_sym_LBRACE,
    STATE(459),
    1,
    sym_comment,
    [13323] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1627),
    1,
    anon_sym_LBRACE,
    STATE(460),
    1,
    sym_comment,
    [13333] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1629),
    1,
    anon_sym_GT,
    STATE(461),
    1,
    sym_comment,
    [13343] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1631),
    1,
    anon_sym_GT,
    STATE(462),
    1,
    sym_comment,
    [13353] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1633),
    1,
    anon_sym_SQUOTE,
    STATE(463),
    1,
    sym_comment,
    [13363] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1635),
    1,
    anon_sym_RPAREN,
    STATE(464),
    1,
    sym_comment,
    [13373] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1637),
    1,
    anon_sym_LBRACE,
    STATE(465),
    1,
    sym_comment,
    [13383] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1639),
    1,
    anon_sym_SEMI,
    STATE(466),
    1,
    sym_comment,
    [13393] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1641),
    1,
    sym_identifier,
    STATE(467),
    1,
    sym_comment,
    [13403] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1643),
    1,
    anon_sym_DQUOTE,
    STATE(468),
    1,
    sym_comment,
    [13413] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1645),
    1,
    anon_sym_COLON,
    STATE(469),
    1,
    sym_comment,
    [13423] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1647),
    1,
    anon_sym_LBRACE,
    STATE(470),
    1,
    sym_comment,
    [13433] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1649),
    1,
    anon_sym_COMMA,
    STATE(471),
    1,
    sym_comment,
    [13443] = 3,
    ACTIONS(1377),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1651),
    1,
    aux_sym_preproc_call_token1,
    STATE(472),
    1,
    sym_comment,
    [13453] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1653),
    1,
    sym_identifier,
    STATE(473),
    1,
    sym_comment,
    [13463] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1655),
    1,
    anon_sym_GT,
    STATE(474),
    1,
    sym_comment,
    [13473] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1657),
    1,
    anon_sym_COMMA,
    STATE(475),
    1,
    sym_comment,
    [13483] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1659),
    1,
    anon_sym_enum,
    STATE(476),
    1,
    sym_comment,
    [13493] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1661),
    1,
    anon_sym_SEMI,
    STATE(477),
    1,
    sym_comment,
    [13503] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1663),
    1,
    anon_sym_SEMI,
    STATE(478),
    1,
    sym_comment,
    [13513] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1665),
    1,
    anon_sym_GT,
    STATE(479),
    1,
    sym_comment,
    [13523] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1667),
    1,
    sym_identifier,
    STATE(480),
    1,
    sym_comment,
    [13533] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1669),
    1,
    anon_sym_LBRACE,
    STATE(481),
    1,
    sym_comment,
    [13543] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1671),
    1,
    anon_sym_attribute,
    STATE(482),
    1,
    sym_comment,
    [13553] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1673),
    1,
    anon_sym_SEMI,
    STATE(483),
    1,
    sym_comment,
    [13563] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1675),
    1,
    anon_sym_SEMI,
    STATE(484),
    1,
    sym_comment,
    [13573] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1677),
    1,
    anon_sym_GT,
    STATE(485),
    1,
    sym_comment,
    [13583] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1679),
    1,
    sym_identifier,
    STATE(486),
    1,
    sym_comment,
    [13593] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1681),
    1,
    anon_sym_SEMI,
    STATE(487),
    1,
    sym_comment,
    [13603] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(235),
    1,
    anon_sym_RBRACE,
    STATE(488),
    1,
    sym_comment,
    [13613] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1683),
    1,
    sym_identifier,
    STATE(489),
    1,
    sym_comment,
    [13623] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1685),
    1,
    anon_sym_SEMI,
    STATE(490),
    1,
    sym_comment,
    [13633] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1687),
    1,
    anon_sym_COLON,
    STATE(491),
    1,
    sym_comment,
    [13643] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1689),
    1,
    anon_sym_LBRACE,
    STATE(492),
    1,
    sym_comment,
    [13653] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1691),
    1,
    anon_sym_SEMI,
    STATE(493),
    1,
    sym_comment,
    [13663] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1693),
    1,
    anon_sym_SEMI,
    STATE(494),
    1,
    sym_comment,
    [13673] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1695),
    1,
    anon_sym_SEMI,
    STATE(495),
    1,
    sym_comment,
    [13683] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1697),
    1,
    anon_sym_SEMI,
    STATE(496),
    1,
    sym_comment,
    [13693] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1699),
    1,
    anon_sym_SEMI,
    STATE(497),
    1,
    sym_comment,
    [13703] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1701),
    1,
    anon_sym_RBRACE,
    STATE(498),
    1,
    sym_comment,
    [13713] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1703),
    1,
    sym_identifier,
    STATE(499),
    1,
    sym_comment,
    [13723] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1705),
    1,
    anon_sym_SEMI,
    STATE(500),
    1,
    sym_comment,
    [13733] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1707),
    1,
    ts_builtin_sym_end,
    STATE(501),
    1,
    sym_comment,
    [13743] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1709),
    1,
    anon_sym_LBRACE,
    STATE(502),
    1,
    sym_comment,
    [13753] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1711),
    1,
    anon_sym_GT,
    STATE(503),
    1,
    sym_comment,
    [13763] = 3,
    ACTIONS(1377),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1713),
    1,
    aux_sym_predefine_token1,
    STATE(504),
    1,
    sym_comment,
    [13773] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1715),
    1,
    anon_sym_SEMI,
    STATE(505),
    1,
    sym_comment,
    [13783] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1717),
    1,
    anon_sym_LBRACE,
    STATE(506),
    1,
    sym_comment,
    [13793] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1719),
    1,
    anon_sym_SEMI,
    STATE(507),
    1,
    sym_comment,
    [13803] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1721),
    1,
    anon_sym_SEMI,
    STATE(508),
    1,
    sym_comment,
    [13813] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1391),
    1,
    anon_sym_LBRACE,
    STATE(509),
    1,
    sym_comment,
    [13823] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1723),
    1,
    anon_sym_LBRACE,
    STATE(510),
    1,
    sym_comment,
    [13833] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1725),
    1,
    anon_sym_RBRACK,
    STATE(511),
    1,
    sym_comment,
    [13843] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1727),
    1,
    sym_identifier,
    STATE(512),
    1,
    sym_comment,
    [13853] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1729),
    1,
    anon_sym_GT,
    STATE(513),
    1,
    sym_comment,
    [13863] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1731),
    1,
    sym_identifier,
    STATE(514),
    1,
    sym_comment,
    [13873] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1733),
    1,
    anon_sym_SEMI,
    STATE(515),
    1,
    sym_comment,
    [13883] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1735),
    1,
    anon_sym_SEMI,
    STATE(516),
    1,
    sym_comment,
    [13893] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1737),
    1,
    anon_sym_SEMI,
    STATE(517),
    1,
    sym_comment,
    [13903] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1739),
    1,
    anon_sym_SEMI,
    STATE(518),
    1,
    sym_comment,
    [13913] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1741),
    1,
    anon_sym_GT,
    STATE(519),
    1,
    sym_comment,
    [13923] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1743),
    1,
    anon_sym_enum,
    STATE(520),
    1,
    sym_comment,
    [13933] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1745),
    1,
    sym_identifier,
    STATE(521),
    1,
    sym_comment,
    [13943] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1747),
    1,
    sym_identifier,
    STATE(522),
    1,
    sym_comment,
    [13953] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1749),
    1,
    sym_identifier,
    STATE(523),
    1,
    sym_comment,
    [13963] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1751),
    1,
    sym_identifier,
    STATE(524),
    1,
    sym_comment,
    [13973] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1753),
    1,
    anon_sym_SEMI,
    STATE(525),
    1,
    sym_comment,
    [13983] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1755),
    1,
    sym_identifier,
    STATE(526),
    1,
    sym_comment,
    [13993] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1757),
    1,
    anon_sym_RPAREN,
    STATE(527),
    1,
    sym_comment,
    [14003] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1759),
    1,
    sym_identifier,
    STATE(528),
    1,
    sym_comment,
    [14013] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1761),
    1,
    sym_identifier,
    STATE(529),
    1,
    sym_comment,
    [14023] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1763),
    1,
    sym_identifier,
    STATE(530),
    1,
    sym_comment,
    [14033] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1383),
    1,
    anon_sym_RPAREN,
    STATE(531),
    1,
    sym_comment,
    [14043] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1765),
    1,
    sym_identifier,
    STATE(532),
    1,
    sym_comment,
    [14053] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1767),
    1,
    anon_sym_SEMI,
    STATE(533),
    1,
    sym_comment,
    [14063] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1769),
    1,
    anon_sym_GT,
    STATE(534),
    1,
    sym_comment,
    [14073] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1771),
    1,
    sym_identifier,
    STATE(535),
    1,
    sym_comment,
    [14083] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1773),
    1,
    sym_identifier,
    STATE(536),
    1,
    sym_comment,
    [14093] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1775),
    1,
    anon_sym_SEMI,
    STATE(537),
    1,
    sym_comment,
    [14103] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1777),
    1,
    anon_sym_RPAREN,
    STATE(538),
    1,
    sym_comment,
    [14113] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1511),
    1,
    sym_identifier,
    STATE(539),
    1,
    sym_comment,
    [14123] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1779),
    1,
    sym_identifier,
    STATE(540),
    1,
    sym_comment,
    [14133] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1781),
    1,
    anon_sym_RPAREN,
    STATE(541),
    1,
    sym_comment,
    [14143] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(237),
    1,
    anon_sym_RBRACE,
    STATE(542),
    1,
    sym_comment,
    [14153] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1783),
    1,
    sym_identifier,
    STATE(543),
    1,
    sym_comment,
    [14163] = 1,
    ACTIONS(1785),
    1,
    ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
    [SMALL_STATE(14)] = 0,
    [SMALL_STATE(15)] = 141,
    [SMALL_STATE(16)] = 280,
    [SMALL_STATE(17)] = 421,
    [SMALL_STATE(18)] = 558,
    [SMALL_STATE(19)] = 695,
    [SMALL_STATE(20)] = 832,
    [SMALL_STATE(21)] = 969,
    [SMALL_STATE(22)] = 1106,
    [SMALL_STATE(23)] = 1243,
    [SMALL_STATE(24)] = 1380,
    [SMALL_STATE(25)] = 1515,
    [SMALL_STATE(26)] = 1652,
    [SMALL_STATE(27)] = 1789,
    [SMALL_STATE(28)] = 1926,
    [SMALL_STATE(29)] = 2054,
    [SMALL_STATE(30)] = 2176,
    [SMALL_STATE(31)] = 2295,
    [SMALL_STATE(32)] = 2420,
    [SMALL_STATE(33)] = 2539,
    [SMALL_STATE(34)] = 2658,
    [SMALL_STATE(35)] = 2779,
    [SMALL_STATE(36)] = 2898,
    [SMALL_STATE(37)] = 3017,
    [SMALL_STATE(38)] = 3136,
    [SMALL_STATE(39)] = 3255,
    [SMALL_STATE(40)] = 3376,
    [SMALL_STATE(41)] = 3497,
    [SMALL_STATE(42)] = 3616,
    [SMALL_STATE(43)] = 3735,
    [SMALL_STATE(44)] = 3846,
    [SMALL_STATE(45)] = 3904,
    [SMALL_STATE(46)] = 3962,
    [SMALL_STATE(47)] = 4074,
    [SMALL_STATE(48)] = 4186,
    [SMALL_STATE(49)] = 4244,
    [SMALL_STATE(50)] = 4302,
    [SMALL_STATE(51)] = 4360,
    [SMALL_STATE(52)] = 4418,
    [SMALL_STATE(53)] = 4530,
    [SMALL_STATE(54)] = 4642,
    [SMALL_STATE(55)] = 4700,
    [SMALL_STATE(56)] = 4755,
    [SMALL_STATE(57)] = 4810,
    [SMALL_STATE(58)] = 4912,
    [SMALL_STATE(59)] = 5014,
    [SMALL_STATE(60)] = 5064,
    [SMALL_STATE(61)] = 5114,
    [SMALL_STATE(62)] = 5158,
    [SMALL_STATE(63)] = 5202,
    [SMALL_STATE(64)] = 5246,
    [SMALL_STATE(65)] = 5290,
    [SMALL_STATE(66)] = 5334,
    [SMALL_STATE(67)] = 5381,
    [SMALL_STATE(68)] = 5423,
    [SMALL_STATE(69)] = 5465,
    [SMALL_STATE(70)] = 5507,
    [SMALL_STATE(71)] = 5549,
    [SMALL_STATE(72)] = 5629,
    [SMALL_STATE(73)] = 5673,
    [SMALL_STATE(74)] = 5715,
    [SMALL_STATE(75)] = 5757,
    [SMALL_STATE(76)] = 5799,
    [SMALL_STATE(77)] = 5841,
    [SMALL_STATE(78)] = 5882,
    [SMALL_STATE(79)] = 5923,
    [SMALL_STATE(80)] = 5963,
    [SMALL_STATE(81)] = 6046,
    [SMALL_STATE(82)] = 6129,
    [SMALL_STATE(83)] = 6212,
    [SMALL_STATE(84)] = 6292,
    [SMALL_STATE(85)] = 6372,
    [SMALL_STATE(86)] = 6452,
    [SMALL_STATE(87)] = 6532,
    [SMALL_STATE(88)] = 6612,
    [SMALL_STATE(89)] = 6692,
    [SMALL_STATE(90)] = 6772,
    [SMALL_STATE(91)] = 6837,
    [SMALL_STATE(92)] = 6914,
    [SMALL_STATE(93)] = 6991,
    [SMALL_STATE(94)] = 7068,
    [SMALL_STATE(95)] = 7145,
    [SMALL_STATE(96)] = 7182,
    [SMALL_STATE(97)] = 7259,
    [SMALL_STATE(98)] = 7296,
    [SMALL_STATE(99)] = 7373,
    [SMALL_STATE(100)] = 7450,
    [SMALL_STATE(101)] = 7487,
    [SMALL_STATE(102)] = 7558,
    [SMALL_STATE(103)] = 7626,
    [SMALL_STATE(104)] = 7691,
    [SMALL_STATE(105)] = 7727,
    [SMALL_STATE(106)] = 7789,
    [SMALL_STATE(107)] = 7848,
    [SMALL_STATE(108)] = 7879,
    [SMALL_STATE(109)] = 7910,
    [SMALL_STATE(110)] = 7941,
    [SMALL_STATE(111)] = 7971,
    [SMALL_STATE(112)] = 8001,
    [SMALL_STATE(113)] = 8031,
    [SMALL_STATE(114)] = 8061,
    [SMALL_STATE(115)] = 8117,
    [SMALL_STATE(116)] = 8147,
    [SMALL_STATE(117)] = 8177,
    [SMALL_STATE(118)] = 8207,
    [SMALL_STATE(119)] = 8237,
    [SMALL_STATE(120)] = 8267,
    [SMALL_STATE(121)] = 8298,
    [SMALL_STATE(122)] = 8325,
    [SMALL_STATE(123)] = 8352,
    [SMALL_STATE(124)] = 8379,
    [SMALL_STATE(125)] = 8406,
    [SMALL_STATE(126)] = 8433,
    [SMALL_STATE(127)] = 8464,
    [SMALL_STATE(128)] = 8491,
    [SMALL_STATE(129)] = 8518,
    [SMALL_STATE(130)] = 8545,
    [SMALL_STATE(131)] = 8572,
    [SMALL_STATE(132)] = 8599,
    [SMALL_STATE(133)] = 8626,
    [SMALL_STATE(134)] = 8653,
    [SMALL_STATE(135)] = 8696,
    [SMALL_STATE(136)] = 8722,
    [SMALL_STATE(137)] = 8748,
    [SMALL_STATE(138)] = 8778,
    [SMALL_STATE(139)] = 8804,
    [SMALL_STATE(140)] = 8828,
    [SMALL_STATE(141)] = 8852,
    [SMALL_STATE(142)] = 8872,
    [SMALL_STATE(143)] = 8892,
    [SMALL_STATE(144)] = 8912,
    [SMALL_STATE(145)] = 8943,
    [SMALL_STATE(146)] = 8962,
    [SMALL_STATE(147)] = 8993,
    [SMALL_STATE(148)] = 9012,
    [SMALL_STATE(149)] = 9028,
    [SMALL_STATE(150)] = 9048,
    [SMALL_STATE(151)] = 9068,
    [SMALL_STATE(152)] = 9094,
    [SMALL_STATE(153)] = 9112,
    [SMALL_STATE(154)] = 9137,
    [SMALL_STATE(155)] = 9156,
    [SMALL_STATE(156)] = 9181,
    [SMALL_STATE(157)] = 9206,
    [SMALL_STATE(158)] = 9221,
    [SMALL_STATE(159)] = 9246,
    [SMALL_STATE(160)] = 9267,
    [SMALL_STATE(161)] = 9282,
    [SMALL_STATE(162)] = 9307,
    [SMALL_STATE(163)] = 9322,
    [SMALL_STATE(164)] = 9343,
    [SMALL_STATE(165)] = 9366,
    [SMALL_STATE(166)] = 9391,
    [SMALL_STATE(167)] = 9413,
    [SMALL_STATE(168)] = 9427,
    [SMALL_STATE(169)] = 9449,
    [SMALL_STATE(170)] = 9471,
    [SMALL_STATE(171)] = 9491,
    [SMALL_STATE(172)] = 9513,
    [SMALL_STATE(173)] = 9533,
    [SMALL_STATE(174)] = 9555,
    [SMALL_STATE(175)] = 9575,
    [SMALL_STATE(176)] = 9597,
    [SMALL_STATE(177)] = 9611,
    [SMALL_STATE(178)] = 9631,
    [SMALL_STATE(179)] = 9653,
    [SMALL_STATE(180)] = 9675,
    [SMALL_STATE(181)] = 9697,
    [SMALL_STATE(182)] = 9717,
    [SMALL_STATE(183)] = 9737,
    [SMALL_STATE(184)] = 9759,
    [SMALL_STATE(185)] = 9781,
    [SMALL_STATE(186)] = 9803,
    [SMALL_STATE(187)] = 9816,
    [SMALL_STATE(188)] = 9835,
    [SMALL_STATE(189)] = 9852,
    [SMALL_STATE(190)] = 9871,
    [SMALL_STATE(191)] = 9884,
    [SMALL_STATE(192)] = 9901,
    [SMALL_STATE(193)] = 9914,
    [SMALL_STATE(194)] = 9931,
    [SMALL_STATE(195)] = 9944,
    [SMALL_STATE(196)] = 9963,
    [SMALL_STATE(197)] = 9976,
    [SMALL_STATE(198)] = 9995,
    [SMALL_STATE(199)] = 10012,
    [SMALL_STATE(200)] = 10025,
    [SMALL_STATE(201)] = 10044,
    [SMALL_STATE(202)] = 10057,
    [SMALL_STATE(203)] = 10076,
    [SMALL_STATE(204)] = 10089,
    [SMALL_STATE(205)] = 10108,
    [SMALL_STATE(206)] = 10121,
    [SMALL_STATE(207)] = 10138,
    [SMALL_STATE(208)] = 10155,
    [SMALL_STATE(209)] = 10168,
    [SMALL_STATE(210)] = 10183,
    [SMALL_STATE(211)] = 10196,
    [SMALL_STATE(212)] = 10209,
    [SMALL_STATE(213)] = 10226,
    [SMALL_STATE(214)] = 10241,
    [SMALL_STATE(215)] = 10260,
    [SMALL_STATE(216)] = 10275,
    [SMALL_STATE(217)] = 10294,
    [SMALL_STATE(218)] = 10313,
    [SMALL_STATE(219)] = 10330,
    [SMALL_STATE(220)] = 10347,
    [SMALL_STATE(221)] = 10363,
    [SMALL_STATE(222)] = 10379,
    [SMALL_STATE(223)] = 10395,
    [SMALL_STATE(224)] = 10411,
    [SMALL_STATE(225)] = 10427,
    [SMALL_STATE(226)] = 10443,
    [SMALL_STATE(227)] = 10459,
    [SMALL_STATE(228)] = 10475,
    [SMALL_STATE(229)] = 10489,
    [SMALL_STATE(230)] = 10505,
    [SMALL_STATE(231)] = 10519,
    [SMALL_STATE(232)] = 10535,
    [SMALL_STATE(233)] = 10549,
    [SMALL_STATE(234)] = 10563,
    [SMALL_STATE(235)] = 10579,
    [SMALL_STATE(236)] = 10591,
    [SMALL_STATE(237)] = 10607,
    [SMALL_STATE(238)] = 10623,
    [SMALL_STATE(239)] = 10639,
    [SMALL_STATE(240)] = 10651,
    [SMALL_STATE(241)] = 10667,
    [SMALL_STATE(242)] = 10681,
    [SMALL_STATE(243)] = 10695,
    [SMALL_STATE(244)] = 10707,
    [SMALL_STATE(245)] = 10719,
    [SMALL_STATE(246)] = 10735,
    [SMALL_STATE(247)] = 10747,
    [SMALL_STATE(248)] = 10763,
    [SMALL_STATE(249)] = 10779,
    [SMALL_STATE(250)] = 10795,
    [SMALL_STATE(251)] = 10811,
    [SMALL_STATE(252)] = 10827,
    [SMALL_STATE(253)] = 10843,
    [SMALL_STATE(254)] = 10859,
    [SMALL_STATE(255)] = 10871,
    [SMALL_STATE(256)] = 10887,
    [SMALL_STATE(257)] = 10903,
    [SMALL_STATE(258)] = 10919,
    [SMALL_STATE(259)] = 10935,
    [SMALL_STATE(260)] = 10949,
    [SMALL_STATE(261)] = 10965,
    [SMALL_STATE(262)] = 10981,
    [SMALL_STATE(263)] = 10997,
    [SMALL_STATE(264)] = 11009,
    [SMALL_STATE(265)] = 11021,
    [SMALL_STATE(266)] = 11037,
    [SMALL_STATE(267)] = 11053,
    [SMALL_STATE(268)] = 11065,
    [SMALL_STATE(269)] = 11081,
    [SMALL_STATE(270)] = 11097,
    [SMALL_STATE(271)] = 11109,
    [SMALL_STATE(272)] = 11121,
    [SMALL_STATE(273)] = 11133,
    [SMALL_STATE(274)] = 11145,
    [SMALL_STATE(275)] = 11161,
    [SMALL_STATE(276)] = 11177,
    [SMALL_STATE(277)] = 11189,
    [SMALL_STATE(278)] = 11205,
    [SMALL_STATE(279)] = 11221,
    [SMALL_STATE(280)] = 11237,
    [SMALL_STATE(281)] = 11253,
    [SMALL_STATE(282)] = 11269,
    [SMALL_STATE(283)] = 11281,
    [SMALL_STATE(284)] = 11295,
    [SMALL_STATE(285)] = 11311,
    [SMALL_STATE(286)] = 11325,
    [SMALL_STATE(287)] = 11339,
    [SMALL_STATE(288)] = 11353,
    [SMALL_STATE(289)] = 11369,
    [SMALL_STATE(290)] = 11381,
    [SMALL_STATE(291)] = 11397,
    [SMALL_STATE(292)] = 11413,
    [SMALL_STATE(293)] = 11429,
    [SMALL_STATE(294)] = 11445,
    [SMALL_STATE(295)] = 11461,
    [SMALL_STATE(296)] = 11477,
    [SMALL_STATE(297)] = 11491,
    [SMALL_STATE(298)] = 11505,
    [SMALL_STATE(299)] = 11517,
    [SMALL_STATE(300)] = 11533,
    [SMALL_STATE(301)] = 11549,
    [SMALL_STATE(302)] = 11561,
    [SMALL_STATE(303)] = 11575,
    [SMALL_STATE(304)] = 11589,
    [SMALL_STATE(305)] = 11605,
    [SMALL_STATE(306)] = 11619,
    [SMALL_STATE(307)] = 11635,
    [SMALL_STATE(308)] = 11651,
    [SMALL_STATE(309)] = 11667,
    [SMALL_STATE(310)] = 11680,
    [SMALL_STATE(311)] = 11693,
    [SMALL_STATE(312)] = 11706,
    [SMALL_STATE(313)] = 11719,
    [SMALL_STATE(314)] = 11730,
    [SMALL_STATE(315)] = 11741,
    [SMALL_STATE(316)] = 11752,
    [SMALL_STATE(317)] = 11765,
    [SMALL_STATE(318)] = 11776,
    [SMALL_STATE(319)] = 11789,
    [SMALL_STATE(320)] = 11802,
    [SMALL_STATE(321)] = 11813,
    [SMALL_STATE(322)] = 11824,
    [SMALL_STATE(323)] = 11835,
    [SMALL_STATE(324)] = 11846,
    [SMALL_STATE(325)] = 11859,
    [SMALL_STATE(326)] = 11872,
    [SMALL_STATE(327)] = 11883,
    [SMALL_STATE(328)] = 11894,
    [SMALL_STATE(329)] = 11905,
    [SMALL_STATE(330)] = 11918,
    [SMALL_STATE(331)] = 11929,
    [SMALL_STATE(332)] = 11940,
    [SMALL_STATE(333)] = 11951,
    [SMALL_STATE(334)] = 11962,
    [SMALL_STATE(335)] = 11973,
    [SMALL_STATE(336)] = 11984,
    [SMALL_STATE(337)] = 11997,
    [SMALL_STATE(338)] = 12010,
    [SMALL_STATE(339)] = 12021,
    [SMALL_STATE(340)] = 12032,
    [SMALL_STATE(341)] = 12043,
    [SMALL_STATE(342)] = 12054,
    [SMALL_STATE(343)] = 12065,
    [SMALL_STATE(344)] = 12076,
    [SMALL_STATE(345)] = 12089,
    [SMALL_STATE(346)] = 12100,
    [SMALL_STATE(347)] = 12111,
    [SMALL_STATE(348)] = 12122,
    [SMALL_STATE(349)] = 12133,
    [SMALL_STATE(350)] = 12144,
    [SMALL_STATE(351)] = 12155,
    [SMALL_STATE(352)] = 12166,
    [SMALL_STATE(353)] = 12177,
    [SMALL_STATE(354)] = 12190,
    [SMALL_STATE(355)] = 12203,
    [SMALL_STATE(356)] = 12214,
    [SMALL_STATE(357)] = 12225,
    [SMALL_STATE(358)] = 12238,
    [SMALL_STATE(359)] = 12249,
    [SMALL_STATE(360)] = 12262,
    [SMALL_STATE(361)] = 12275,
    [SMALL_STATE(362)] = 12286,
    [SMALL_STATE(363)] = 12297,
    [SMALL_STATE(364)] = 12308,
    [SMALL_STATE(365)] = 12319,
    [SMALL_STATE(366)] = 12330,
    [SMALL_STATE(367)] = 12341,
    [SMALL_STATE(368)] = 12352,
    [SMALL_STATE(369)] = 12365,
    [SMALL_STATE(370)] = 12378,
    [SMALL_STATE(371)] = 12389,
    [SMALL_STATE(372)] = 12402,
    [SMALL_STATE(373)] = 12413,
    [SMALL_STATE(374)] = 12424,
    [SMALL_STATE(375)] = 12435,
    [SMALL_STATE(376)] = 12446,
    [SMALL_STATE(377)] = 12457,
    [SMALL_STATE(378)] = 12470,
    [SMALL_STATE(379)] = 12481,
    [SMALL_STATE(380)] = 12492,
    [SMALL_STATE(381)] = 12503,
    [SMALL_STATE(382)] = 12514,
    [SMALL_STATE(383)] = 12525,
    [SMALL_STATE(384)] = 12536,
    [SMALL_STATE(385)] = 12549,
    [SMALL_STATE(386)] = 12560,
    [SMALL_STATE(387)] = 12571,
    [SMALL_STATE(388)] = 12584,
    [SMALL_STATE(389)] = 12597,
    [SMALL_STATE(390)] = 12610,
    [SMALL_STATE(391)] = 12623,
    [SMALL_STATE(392)] = 12636,
    [SMALL_STATE(393)] = 12649,
    [SMALL_STATE(394)] = 12660,
    [SMALL_STATE(395)] = 12673,
    [SMALL_STATE(396)] = 12683,
    [SMALL_STATE(397)] = 12693,
    [SMALL_STATE(398)] = 12703,
    [SMALL_STATE(399)] = 12713,
    [SMALL_STATE(400)] = 12723,
    [SMALL_STATE(401)] = 12733,
    [SMALL_STATE(402)] = 12743,
    [SMALL_STATE(403)] = 12753,
    [SMALL_STATE(404)] = 12763,
    [SMALL_STATE(405)] = 12773,
    [SMALL_STATE(406)] = 12783,
    [SMALL_STATE(407)] = 12793,
    [SMALL_STATE(408)] = 12803,
    [SMALL_STATE(409)] = 12813,
    [SMALL_STATE(410)] = 12823,
    [SMALL_STATE(411)] = 12833,
    [SMALL_STATE(412)] = 12843,
    [SMALL_STATE(413)] = 12853,
    [SMALL_STATE(414)] = 12863,
    [SMALL_STATE(415)] = 12873,
    [SMALL_STATE(416)] = 12883,
    [SMALL_STATE(417)] = 12893,
    [SMALL_STATE(418)] = 12903,
    [SMALL_STATE(419)] = 12913,
    [SMALL_STATE(420)] = 12923,
    [SMALL_STATE(421)] = 12933,
    [SMALL_STATE(422)] = 12943,
    [SMALL_STATE(423)] = 12953,
    [SMALL_STATE(424)] = 12963,
    [SMALL_STATE(425)] = 12973,
    [SMALL_STATE(426)] = 12983,
    [SMALL_STATE(427)] = 12993,
    [SMALL_STATE(428)] = 13003,
    [SMALL_STATE(429)] = 13013,
    [SMALL_STATE(430)] = 13023,
    [SMALL_STATE(431)] = 13033,
    [SMALL_STATE(432)] = 13043,
    [SMALL_STATE(433)] = 13053,
    [SMALL_STATE(434)] = 13063,
    [SMALL_STATE(435)] = 13073,
    [SMALL_STATE(436)] = 13083,
    [SMALL_STATE(437)] = 13093,
    [SMALL_STATE(438)] = 13103,
    [SMALL_STATE(439)] = 13113,
    [SMALL_STATE(440)] = 13123,
    [SMALL_STATE(441)] = 13133,
    [SMALL_STATE(442)] = 13143,
    [SMALL_STATE(443)] = 13153,
    [SMALL_STATE(444)] = 13163,
    [SMALL_STATE(445)] = 13173,
    [SMALL_STATE(446)] = 13183,
    [SMALL_STATE(447)] = 13193,
    [SMALL_STATE(448)] = 13203,
    [SMALL_STATE(449)] = 13213,
    [SMALL_STATE(450)] = 13223,
    [SMALL_STATE(451)] = 13233,
    [SMALL_STATE(452)] = 13243,
    [SMALL_STATE(453)] = 13253,
    [SMALL_STATE(454)] = 13263,
    [SMALL_STATE(455)] = 13273,
    [SMALL_STATE(456)] = 13283,
    [SMALL_STATE(457)] = 13293,
    [SMALL_STATE(458)] = 13303,
    [SMALL_STATE(459)] = 13313,
    [SMALL_STATE(460)] = 13323,
    [SMALL_STATE(461)] = 13333,
    [SMALL_STATE(462)] = 13343,
    [SMALL_STATE(463)] = 13353,
    [SMALL_STATE(464)] = 13363,
    [SMALL_STATE(465)] = 13373,
    [SMALL_STATE(466)] = 13383,
    [SMALL_STATE(467)] = 13393,
    [SMALL_STATE(468)] = 13403,
    [SMALL_STATE(469)] = 13413,
    [SMALL_STATE(470)] = 13423,
    [SMALL_STATE(471)] = 13433,
    [SMALL_STATE(472)] = 13443,
    [SMALL_STATE(473)] = 13453,
    [SMALL_STATE(474)] = 13463,
    [SMALL_STATE(475)] = 13473,
    [SMALL_STATE(476)] = 13483,
    [SMALL_STATE(477)] = 13493,
    [SMALL_STATE(478)] = 13503,
    [SMALL_STATE(479)] = 13513,
    [SMALL_STATE(480)] = 13523,
    [SMALL_STATE(481)] = 13533,
    [SMALL_STATE(482)] = 13543,
    [SMALL_STATE(483)] = 13553,
    [SMALL_STATE(484)] = 13563,
    [SMALL_STATE(485)] = 13573,
    [SMALL_STATE(486)] = 13583,
    [SMALL_STATE(487)] = 13593,
    [SMALL_STATE(488)] = 13603,
    [SMALL_STATE(489)] = 13613,
    [SMALL_STATE(490)] = 13623,
    [SMALL_STATE(491)] = 13633,
    [SMALL_STATE(492)] = 13643,
    [SMALL_STATE(493)] = 13653,
    [SMALL_STATE(494)] = 13663,
    [SMALL_STATE(495)] = 13673,
    [SMALL_STATE(496)] = 13683,
    [SMALL_STATE(497)] = 13693,
    [SMALL_STATE(498)] = 13703,
    [SMALL_STATE(499)] = 13713,
    [SMALL_STATE(500)] = 13723,
    [SMALL_STATE(501)] = 13733,
    [SMALL_STATE(502)] = 13743,
    [SMALL_STATE(503)] = 13753,
    [SMALL_STATE(504)] = 13763,
    [SMALL_STATE(505)] = 13773,
    [SMALL_STATE(506)] = 13783,
    [SMALL_STATE(507)] = 13793,
    [SMALL_STATE(508)] = 13803,
    [SMALL_STATE(509)] = 13813,
    [SMALL_STATE(510)] = 13823,
    [SMALL_STATE(511)] = 13833,
    [SMALL_STATE(512)] = 13843,
    [SMALL_STATE(513)] = 13853,
    [SMALL_STATE(514)] = 13863,
    [SMALL_STATE(515)] = 13873,
    [SMALL_STATE(516)] = 13883,
    [SMALL_STATE(517)] = 13893,
    [SMALL_STATE(518)] = 13903,
    [SMALL_STATE(519)] = 13913,
    [SMALL_STATE(520)] = 13923,
    [SMALL_STATE(521)] = 13933,
    [SMALL_STATE(522)] = 13943,
    [SMALL_STATE(523)] = 13953,
    [SMALL_STATE(524)] = 13963,
    [SMALL_STATE(525)] = 13973,
    [SMALL_STATE(526)] = 13983,
    [SMALL_STATE(527)] = 13993,
    [SMALL_STATE(528)] = 14003,
    [SMALL_STATE(529)] = 14013,
    [SMALL_STATE(530)] = 14023,
    [SMALL_STATE(531)] = 14033,
    [SMALL_STATE(532)] = 14043,
    [SMALL_STATE(533)] = 14053,
    [SMALL_STATE(534)] = 14063,
    [SMALL_STATE(535)] = 14073,
    [SMALL_STATE(536)] = 14083,
    [SMALL_STATE(537)] = 14093,
    [SMALL_STATE(538)] = 14103,
    [SMALL_STATE(539)] = 14113,
    [SMALL_STATE(540)] = 14123,
    [SMALL_STATE(541)] = 14133,
    [SMALL_STATE(542)] = 14143,
    [SMALL_STATE(543)] = 14153,
    [SMALL_STATE(544)] = 14163,
};

static const TSParseActionEntry ts_parse_actions[] = {
    [0] = { .entry = { .count = 0, .reusable = false } },
    [1] = { .entry = { .count = 1, .reusable = false } },
    RECOVER(),
    [3] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(424),
    [5] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_specification, 0),
    [7] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(311),
    [9] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(543),
    [11] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(532),
    [13] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(316),
    [15] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(530),
    [17] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(529),
    [19] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(528),
    [21] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(225),
    [23] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(227),
    [25] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(524),
    [27] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(523),
    [29] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(522),
    [31] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(521),
    [33] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(58),
    [35] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(13),
    [37] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(520),
    [39] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(319),
    [41] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(504),
    [43] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(192),
    [45] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(194),
    [47] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(196),
    [49] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(196),
    [51] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(199),
    [53] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(270),
    [55] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(422),
    [57] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(201),
    [59] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(186),
    [61] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(186),
    [63] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(203),
    [65] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(205),
    [67] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(205),
    [69] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(267),
    [71] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(267),
    [73] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(208),
    [75] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(535),
    [77] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(209),
    [79] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(271),
    [81] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(426),
    [83] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(418),
    [85] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(543),
    [87] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(453),
    [89] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(480),
    [91] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(482),
    [93] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(33),
    [95] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(530),
    [97] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(529),
    [99] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(523),
    [101] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(522),
    [103] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(521),
    [105] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(58),
    [107] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(32),
    [109] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(499),
    [111] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(13),
    [113] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(319),
    [115] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(160),
    [117] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(192),
    [120] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(194),
    [123] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(196),
    [126] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(196),
    [129] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(199),
    [132] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(270),
    [135] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(422),
    [138] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(201),
    [141] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(186),
    [144] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(186),
    [147] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(203),
    [150] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(205),
    [153] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(205),
    [156] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(267),
    [159] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(267),
    [162] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(208),
    [165] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(535),
    [168] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(209),
    [171] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(271),
    [174] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(426),
    [177] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(418),
    [180] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(543),
    [183] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    [185] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(480),
    [188] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(482),
    [191] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(33),
    [194] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(530),
    [197] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(529),
    [200] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(225),
    [203] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(523),
    [206] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(522),
    [209] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(521),
    [212] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(58),
    [215] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(32),
    [218] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(499),
    [221] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(13),
    [224] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(520),
    [227] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(319),
    [230] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2),
    SHIFT_REPEAT(160),
    [233] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(496),
    [235] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(533),
    [237] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(447),
    [239] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(478),
    [241] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(192),
    [244] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(194),
    [247] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(196),
    [250] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(196),
    [253] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(199),
    [256] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(270),
    [259] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(422),
    [262] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(201),
    [265] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(186),
    [268] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(186),
    [271] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(203),
    [274] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(205),
    [277] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(205),
    [280] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(267),
    [283] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(267),
    [286] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(208),
    [289] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(535),
    [292] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(209),
    [295] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(271),
    [298] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(426),
    [301] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(418),
    [304] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(543),
    [307] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    [309] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(480),
    [312] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(482),
    [315] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(33),
    [318] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(530),
    [321] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(529),
    [324] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(225),
    [327] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(523),
    [330] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(522),
    [333] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(521),
    [336] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(58),
    [339] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(13),
    [342] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(520),
    [345] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(319),
    [348] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(160),
    [351] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_body, 1),
    [353] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(450),
    [355] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(141),
    [357] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(96),
    [359] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(141),
    [361] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(353),
    [363] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(432),
    [365] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(433),
    [367] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(122),
    [369] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(127),
    [371] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(95),
    [373] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case, 1),
    [375] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_case, 1),
    [377] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(429),
    [379] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(427),
    [381] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(399),
    [383] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(404),
    [385] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(192),
    [388] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(194),
    [391] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(196),
    [394] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(196),
    [397] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(199),
    [400] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(429),
    [403] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(427),
    [406] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(201),
    [409] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(186),
    [412] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(186),
    [415] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(203),
    [418] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(205),
    [421] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(205),
    [424] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(267),
    [427] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(267),
    [430] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(208),
    [433] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(535),
    [436] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(209),
    [439] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(399),
    [442] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(426),
    [445] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    [447] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(521),
    [450] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(58),
    [453] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(13),
    [456] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(520),
    [459] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(160),
    [462] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(420),
    [464] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(339),
    [466] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(224),
    [468] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(516),
    [470] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(448),
    [472] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(315),
    [474] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(372),
    [476] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(376),
    [478] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(192),
    [481] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(194),
    [484] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(196),
    [487] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(196),
    [490] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(199),
    [493] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(270),
    [496] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(422),
    [499] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(201),
    [502] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(186),
    [505] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(186),
    [508] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(203),
    [511] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(205),
    [514] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(205),
    [517] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(267),
    [520] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(267),
    [523] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(208),
    [526] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(535),
    [529] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(209),
    [532] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(271),
    [535] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(426),
    [538] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(418),
    [541] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    [543] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(224),
    [546] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(160),
    [549] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(355),
    [551] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(327),
    [553] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(378),
    [555] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(392),
    [557] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(539),
    [559] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(57),
    [561] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(244),
    [563] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(86),
    [565] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(466),
    [567] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(266),
    [569] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(504),
    [571] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(543),
    [574] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    [576] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(532),
    [579] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(316),
    [582] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(530),
    [585] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(529),
    [588] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(528),
    [591] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(225),
    [594] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(227),
    [597] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(524),
    [600] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(523),
    [603] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(522),
    [606] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(521),
    [609] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(58),
    [612] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(266),
    [615] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(13),
    [618] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(520),
    [621] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(319),
    [624] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(504),
    [627] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(395),
    [629] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_specification, 1),
    [631] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    [633] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(543),
    [636] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(532),
    [639] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(316),
    [642] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(530),
    [645] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(529),
    [648] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(528),
    [651] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(225),
    [654] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(227),
    [657] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(524),
    [660] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(523),
    [663] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(522),
    [666] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(521),
    [669] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(58),
    [672] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(13),
    [675] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(520),
    [678] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(319),
    [681] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(504),
    [684] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_export, 2),
    [686] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_export, 2),
    [688] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_init_dcl, 5),
    [690] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_init_dcl, 5),
    [692] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(525),
    [694] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_state_member, 4),
    [696] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_state_member, 4),
    [698] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_value_element, 1),
    [700] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_element, 1),
    [702] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 1),
    [704] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_value_def_repeat1, 1),
    [706] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_init_dcl, 6),
    [708] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_init_dcl, 6),
    [710] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(431),
    [712] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_specification, 2),
    [714] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_init_dcl, 7),
    [716] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_init_dcl, 7),
    [718] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 1),
    [720] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 1),
    [722] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_case_label, 2),
    [724] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case_label, 2),
    [726] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_case_label, 3),
    [728] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case_label, 3),
    [730] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_member, 5),
    [732] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_member, 5),
    [734] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 1),
    [736] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 1),
    [738] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_body, 1),
    [740] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_body, 1),
    [742] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_member, 3),
    [744] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_member, 3),
    [746] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_body, 2),
    [748] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_body, 2),
    [750] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_interface_def_repeat1, 2),
    [752] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2),
    [754] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2),
    SHIFT_REPEAT(224),
    [757] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_scoped_name, 3),
    [759] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_scoped_name, 3),
    [761] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_scoped_name, 2),
    [763] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_scoped_name, 2),
    [765] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 1),
    [767] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 1),
    [769] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_scoped_name, 1),
    [771] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_scoped_name, 1),
    [773] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(531),
    [775] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_appl, 2),
    [777] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_appl, 2),
    [779] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(81),
    [781] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 4, .production_id = 6),
    [783] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 4, .production_id = 6),
    [785] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 4, .production_id = 3),
    [787] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 4, .production_id = 3),
    [789] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 3, .production_id = 3),
    [791] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 3, .production_id = 3),
    [793] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 5, .production_id = 6),
    [795] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 5, .production_id = 6),
    [797] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_interface_def_repeat1, 1),
    [799] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 1),
    [801] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_appl, 5),
    [803] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_appl, 5),
    [805] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_param_attribute, 1),
    [807] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_param_attribute, 1),
    [809] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(136),
    [811] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(192),
    [813] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(194),
    [815] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(199),
    [817] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(461),
    [819] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(201),
    [821] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(203),
    [823] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    [825] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(311),
    [828] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_specification_repeat1, 2),
    [830] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym__definition, 1),
    [832] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym__definition, 1),
    [834] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_predefine, 2),
    [836] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_predefine, 2),
    [838] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym__definition, 2),
    [840] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym__definition, 2),
    [842] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_preproc_call, 3, .production_id = 2),
    [844] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_preproc_call, 3, .production_id = 2),
    [846] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 1),
    [848] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_specification_repeat1, 1),
    [850] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 1),
    [852] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_specification_repeat2, 1),
    [854] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 1),
    [856] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 1),
    [858] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_tpl_definition, 1),
    [860] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_tpl_definition, 1),
    [862] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_tpl_definition, 2),
    [864] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_tpl_definition, 2),
    [866] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_preproc_call, 2, .production_id = 1),
    [868] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_preproc_call, 2, .production_id = 1),
    [870] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(446),
    [872] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 2),
    [874] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 2),
    [876] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 1),
    [878] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 1),
    [880] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_add_expr, 1),
    [882] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_add_expr, 1),
    [884] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(114),
    [886] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(114),
    [888] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_string_literal, 3),
    [890] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_literal, 3),
    [892] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_boolean_literal, 1),
    [894] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_boolean_literal, 1),
    [896] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 3),
    [898] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 3),
    [900] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_mult_expr, 3),
    [902] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_mult_expr, 3),
    [904] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_add_expr, 3),
    [906] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_add_expr, 3),
    [908] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_literal, 1),
    [910] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_literal, 1),
    [912] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_char_literal, 3, .production_id = 4),
    [914] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_char_literal, 3, .production_id = 4),
    [916] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_char_literal, 4, .production_id = 7),
    [918] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_char_literal, 4, .production_id = 7),
    [920] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_mult_expr, 1),
    [922] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_mult_expr, 1),
    [924] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 4),
    [926] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 4),
    [928] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_string_literal, 4),
    [930] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_literal, 4),
    [932] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(98),
    [934] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_shift_expr, 1),
    [936] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_shift_expr, 1),
    [938] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(106),
    [940] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(94),
    [942] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_simple_type_spec, 1),
    [944] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_simple_type_spec, 1),
    [946] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_shift_expr, 3),
    [948] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_shift_expr, 3),
    [950] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_and_expr, 3),
    [952] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_and_expr, 3),
    [954] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(105),
    [956] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_and_expr, 1),
    [958] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_and_expr, 1),
    [960] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_operator, 1),
    [962] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_operator, 1),
    [964] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xor_expr, 1),
    [966] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(103),
    [968] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xor_expr, 3),
    [970] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(467),
    [972] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(387),
    [974] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(401),
    [976] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(225),
    [978] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(397),
    [980] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_or_expr, 1),
    [982] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(102),
    [984] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(388),
    [986] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_declarator, 1),
    [988] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(389),
    [990] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(390),
    [992] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_or_expr, 3),
    [994] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_simple_declarator, 1),
    [996] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2),
    SHIFT_REPEAT(225),
    [999] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(82),
    [1001] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(279),
    [1003] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(79),
    [1005] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(79),
    [1007] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_expr, 1),
    [1009] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(101),
    [1011] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(351),
    [1013] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(469),
    [1015] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(99),
    [1017] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 2),
    [1019] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 2),
    SHIFT_REPEAT(84),
    [1022] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(320),
    [1024] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(331),
    [1026] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(333),
    [1028] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(335),
    [1030] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(330),
    [1032] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(84),
    [1034] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(374),
    [1036] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(223),
    [1038] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(381),
    [1040] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_array_declarator, 2),
    [1042] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2),
    [1044] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2),
    SHIFT_REPEAT(469),
    [1047] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2),
    SHIFT_REPEAT(99),
    [1050] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(393),
    [1052] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(313),
    [1054] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(452),
    [1056] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(159),
    [1058] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_header, 2),
    [1060] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(200),
    [1062] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_forward_dcl, 2),
    [1064] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(195),
    [1066] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(382),
    [1068] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(366),
    [1070] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(346),
    [1072] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitset_dcl_repeat1, 2),
    [1074] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_bitset_dcl_repeat1, 2),
    SHIFT_REPEAT(452),
    [1077] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_readonly_attr_declarator, 1),
    [1079] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(436),
    [1081] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unsigned_short_int, 1),
    [1083] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(95),
    [1085] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(218),
    [1087] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarators, 2),
    [1089] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_header, 2),
    [1091] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(187),
    [1093] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_forward_dcl, 2),
    [1095] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_fixed_array_size, 3),
    [1097] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(26),
    [1099] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(293),
    [1101] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_forward_dcl, 2),
    [1103] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_signed_short_int, 1),
    [1105] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2),
    SHIFT_REPEAT(223),
    [1108] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_signed_long_int, 1),
    [1110] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_signed_longlong_int, 1),
    [1112] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(321),
    [1114] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarators, 1),
    [1116] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unsigned_int, 1),
    [1118] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_signed_int, 1),
    [1120] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unsigned_long_int, 1),
    [1122] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(238),
    [1124] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(332),
    [1126] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unsigned_longlong_int, 1),
    [1128] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 2),
    SHIFT_REPEAT(331),
    [1131] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 2),
    [1133] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_char_type, 1),
    [1135] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(87),
    [1137] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_type, 1),
    [1139] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 1),
    [1141] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_integer_type, 1),
    [1143] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_declarators_repeat1, 2),
    SHIFT_REPEAT(218),
    [1146] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_declarators_repeat1, 2),
    [1148] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(507),
    [1150] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(536),
    [1152] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(277),
    [1154] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(41),
    [1156] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(80),
    [1158] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(179),
    [1160] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(385),
    [1162] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(185),
    [1164] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(380),
    [1166] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(368),
    [1168] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_appl_params, 1),
    [1170] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(160),
    [1172] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(540),
    [1174] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(70),
    [1176] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameters, 1),
    [1178] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(30),
    [1180] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(256),
    [1182] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_formal_parameter_names_repeat1, 2),
    [1184] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_formal_parameter_names_repeat1, 2),
    SHIFT_REPEAT(512),
    [1187] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameter_names, 2),
    [1189] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(512),
    [1191] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_raises_expr_repeat1, 2),
    SHIFT_REPEAT(238),
    [1194] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_raises_expr_repeat1, 2),
    [1196] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_actual_parameters, 1),
    [1198] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(11),
    [1200] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_name, 1),
    [1202] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(515),
    [1204] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case, 3),
    [1206] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameter_names, 1),
    [1208] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(326),
    [1210] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_map_type, 8),
    [1212] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_init_param_dcls_repeat1, 2),
    SHIFT_REPEAT(357),
    [1215] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_init_param_dcls_repeat1, 2),
    [1217] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_parameter_dcls_repeat1, 2),
    SHIFT_REPEAT(174),
    [1220] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_parameter_dcls_repeat1, 2),
    [1222] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_positive_int_const, 1),
    [1224] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 3),
    [1226] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 1),
    [1228] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(340),
    [1230] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(212),
    [1232] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarators, 2),
    [1234] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(148),
    [1236] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(357),
    [1238] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_init_param_dcls, 2),
    [1240] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(51),
    [1242] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(174),
    [1244] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_parameter_dcls, 2),
    [1246] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarator, 1),
    [1248] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(75),
    [1250] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(93),
    [1252] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(29),
    [1254] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(47),
    [1256] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(217),
    [1258] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_inheritance_spec, 3),
    [1260] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_dcl, 5),
    [1262] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_readonly_attr_declarator_repeat1, 2),
    SHIFT_REPEAT(388),
    [1265] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_readonly_attr_declarator_repeat1, 2),
    [1267] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_readonly_attr_declarator, 2),
    [1269] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(345),
    [1271] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(364),
    [1273] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_map_type, 6),
    [1275] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_fixed_pt_type, 6),
    [1277] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_forward_dcl, 2),
    [1279] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(454),
    [1281] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_union_forward_dcl, 2),
    [1283] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_floating_pt_type, 1),
    [1285] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(350),
    [1287] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_base_type_spec, 1),
    [1289] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_type, 1),
    [1291] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_template_type_spec, 1),
    [1293] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(356),
    [1295] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_init_param_dcls, 1),
    [1297] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(45),
    [1299] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_parameter_dcls, 1),
    [1301] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_dcl, 4),
    [1303] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_declarator, 2),
    [1305] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_raises_expr, 1),
    [1307] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 5),
    [1309] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_enum_dcl_repeat1, 2),
    SHIFT_REPEAT(185),
    [1312] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enum_dcl_repeat1, 2),
    [1314] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_actual_parameters_repeat1, 2),
    [1316] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_actual_parameters_repeat1, 2),
    SHIFT_REPEAT(11),
    [1319] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_formal_parameters_repeat1, 2),
    [1321] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_formal_parameters_repeat1, 2),
    SHIFT_REPEAT(30),
    [1324] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_appl_params_repeat1, 2),
    SHIFT_REPEAT(368),
    [1327] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_annotation_appl_params_repeat1, 2),
    [1329] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(362),
    [1331] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_type_spec, 1),
    [1333] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_appl_params, 2),
    [1335] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarators, 1),
    [1337] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameters, 2),
    [1339] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_any_declarators_repeat1, 2),
    SHIFT_REPEAT(212),
    [1342] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_any_declarators_repeat1, 2),
    [1344] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_name, 1),
    [1346] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_type, 4),
    [1348] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_actual_parameters, 2),
    [1350] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 4),
    [1352] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitfield_repeat1, 2),
    [1354] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_bitfield_repeat1, 2),
    SHIFT_REPEAT(364),
    [1357] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_inheritance_spec_repeat1, 2),
    SHIFT_REPEAT(217),
    [1360] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_inheritance_spec_repeat1, 2),
    [1362] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_bitmask_dcl_repeat1, 2),
    SHIFT_REPEAT(179),
    [1365] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitmask_dcl_repeat1, 2),
    [1367] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(73),
    [1369] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_inheritance_spec, 2),
    [1371] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(336),
    [1373] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(117),
    [1375] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(472),
    [1377] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(424),
    [1379] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 4),
    [1381] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 5),
    [1383] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_switch_type_spec, 1),
    [1385] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 5),
    [1387] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enumerator, 2),
    [1389] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_actual_parameter, 1),
    [1391] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_inheritance_spec, 2),
    [1393] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(202),
    [1395] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(23),
    [1397] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(253),
    [1399] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_exception_list, 4),
    [1401] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 4),
    [1403] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(22),
    [1405] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 4),
    [1407] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_modifier, 1),
    [1409] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_exception_list, 3),
    [1411] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enumerator, 1),
    [1413] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 1),
    [1415] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_def, 9),
    [1417] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(236),
    [1419] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(25),
    [1421] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield_spec, 6),
    [1423] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 8, .production_id = 8),
    [1425] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 8),
    [1427] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_init_param_dcl, 3),
    [1429] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(375),
    [1431] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(90),
    [1433] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield, 3),
    [1435] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 6),
    [1437] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_param_dcl, 3),
    [1439] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 6),
    [1441] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_def, 8),
    [1443] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarator, 1),
    [1445] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(415),
    [1447] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(414),
    [1449] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(168),
    [1451] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(292),
    [1453] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 7, .production_id = 8),
    [1455] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 7),
    [1457] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_appl_param, 3),
    [1459] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitset_dcl_repeat1, 1),
    [1461] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield, 2),
    [1463] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_get_excep_expr, 2),
    [1465] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitfield_repeat1, 1),
    [1467] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 5),
    [1469] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(439),
    [1471] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(10),
    [1473] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(180),
    [1475] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 7, .production_id = 5),
    [1477] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 4),
    [1479] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield_spec, 4),
    [1481] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 6, .production_id = 5),
    [1483] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(64),
    [1485] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(92),
    [1487] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 6),
    [1489] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 6),
    [1491] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bit_value, 1),
    [1493] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 7),
    [1495] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitmask_dcl_repeat1, 3),
    [1497] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(263),
    [1499] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(89),
    [1501] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 7),
    [1503] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameter, 2),
    [1505] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(260),
    [1507] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_type, 1),
    [1509] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(31),
    [1511] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameter_type, 1),
    [1513] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 5),
    [1515] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_template_module_dcl, 7),
    [1517] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(18),
    [1519] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(325),
    [1521] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(153),
    [1523] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_const_type, 1),
    [1525] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(264),
    [1527] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(510),
    [1529] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_readonly_attr_spec, 4),
    [1531] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_dcl, 4),
    [1533] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(502),
    [1535] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(258),
    [1537] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_member_type, 1),
    [1539] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_native_dcl, 2),
    [1541] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_typedef_dcl, 2),
    [1543] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(128),
    [1545] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(121),
    [1547] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(251),
    [1549] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(463),
    [1551] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(468),
    [1553] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 6),
    [1555] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(124),
    [1557] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(37),
    [1559] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(65),
    [1561] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_dcl, 5),
    [1563] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_default, 2),
    [1565] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(88),
    [1567] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(76),
    [1569] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(544),
    [1571] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(61),
    [1573] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_fixed_pt_const_type, 1),
    [1575] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(116),
    [1577] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(158),
    [1579] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_module_dcl, 5),
    [1581] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(412),
    [1583] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(411),
    [1585] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_template_module_inst, 6),
    [1587] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(245),
    [1589] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_header, 3),
    [1591] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(132),
    [1593] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameter_type, 2),
    [1595] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_set_excep_expr, 2),
    [1597] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_raises_expr, 2),
    [1599] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(39),
    [1601] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(97),
    [1603] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 5),
    [1605] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_except_dcl, 5),
    [1607] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_header, 3),
    [1609] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(100),
    [1611] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(83),
    [1613] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_def, 4),
    [1615] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(71),
    [1617] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(216),
    [1619] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(91),
    [1621] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(151),
    [1623] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_type_declarator, 2),
    [1625] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(14),
    [1627] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(161),
    [1629] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_destination_type, 1),
    [1631] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(338),
    [1633] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(129),
    [1635] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(176),
    [1637] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(5),
    [1639] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_template_module_dcl, 8),
    [1641] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(290),
    [1643] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(133),
    [1645] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(59),
    [1647] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_inheritance_spec, 4),
    [1649] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(42),
    [1651] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(110),
    [1653] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(435),
    [1655] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(239),
    [1657] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(85),
    [1659] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(406),
    [1661] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_dcl, 6),
    [1663] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 3),
    [1665] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(301),
    [1667] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_type_spec, 1),
    [1669] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(4),
    [1671] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(35),
    [1673] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(54),
    [1675] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(74),
    [1677] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(298),
    [1679] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(456),
    [1681] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(55),
    [1683] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(457),
    [1685] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_dcl, 1),
    [1687] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(60),
    [1689] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(7),
    [1691] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(235),
    [1693] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_dcl, 1),
    [1695] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_dcl, 1),
    [1697] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_def, 3),
    [1699] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(109),
    [1701] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(416),
    [1703] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(455),
    [1705] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(48),
    [1707] = { .entry = { .count = 1, .reusable = true } },
    ACCEPT_INPUT(),
    [1709] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(155),
    [1711] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(514),
    [1713] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(108),
    [1715] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_element_spec, 2),
    [1717] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(6),
    [1719] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_raises_expr, 4),
    [1721] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_spec, 3),
    [1723] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(165),
    [1725] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(190),
    [1727] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(323),
    [1729] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(473),
    [1731] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(518),
    [1733] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_raises_expr, 5),
    [1735] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_except_dcl, 4),
    [1737] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_dcl, 5),
    [1739] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_template_module_ref, 6),
    [1741] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(282),
    [1743] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_anno, 1),
    [1745] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(430),
    [1747] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(265),
    [1749] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(191),
    [1751] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(171),
    [1753] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_module_dcl, 4),
    [1755] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(386),
    [1757] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(398),
    [1759] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(459),
    [1761] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(460),
    [1763] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(354),
    [1765] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(189),
    [1767] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 4),
    [1769] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(444),
    [1771] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(157),
    [1773] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(162),
    [1775] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(44),
    [1777] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(78),
    [1779] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(68),
    [1781] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(314),
    [1783] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(396),
    [1785] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_comment, 2),
};

enum ts_external_scanner_symbol_identifiers {
    ts_external_token__eof = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
    [ts_external_token__eof] = sym__eof,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
    [1] = {
        [ts_external_token__eof] = true,
    },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_idl_external_scanner_create(void);
void tree_sitter_idl_external_scanner_destroy(void *);
bool tree_sitter_idl_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_idl_external_scanner_serialize(void *, char *);
void tree_sitter_idl_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_idl() {
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
        .external_scanner = {
            &ts_external_scanner_states[0][0],
            ts_external_scanner_symbol_map,
            tree_sitter_idl_external_scanner_create,
            tree_sitter_idl_external_scanner_destroy,
            tree_sitter_idl_external_scanner_scan,
            tree_sitter_idl_external_scanner_serialize,
            tree_sitter_idl_external_scanner_deserialize,
        },
        .primary_state_ids = ts_primary_state_ids,
    };
    return &language;
}
#ifdef __cplusplus
}
#endif
