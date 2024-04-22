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
#define STATE_COUNT 527
#define LARGE_STATE_COUNT 14
#define SYMBOL_COUNT 257
#define ALIAS_COUNT 0
#define TOKEN_COUNT 105
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
    sym_comment = 103,
    sym__eof = 104,
    sym_specification = 105,
    sym_signed_short_int = 106,
    sym_signed_long_int = 107,
    sym_signed_longlong_int = 108,
    sym_unsigned_int = 109,
    sym_fixed_pt_const_type = 110,
    sym_integer_type = 111,
    sym_signed_int = 112,
    sym_unsigned_short_int = 113,
    sym_unsigned_long_int = 114,
    sym_unsigned_longlong_int = 115,
    sym_floating_pt_type = 116,
    sym_char_type = 117,
    sym_scoped_name = 118,
    sym_string_type = 119,
    sym_type_spec = 120,
    sym_simple_type_spec = 121,
    sym_base_type_spec = 122,
    sym_any_type = 123,
    sym_fixed_pt_type = 124,
    sym_template_type_spec = 125,
    sym_sequence_type = 126,
    sym_map_type = 127,
    sym_positive_int_const = 128,
    sym_const_expr = 129,
    sym_or_expr = 130,
    sym_xor_expr = 131,
    sym_and_expr = 132,
    sym_shift_expr = 133,
    sym_add_expr = 134,
    sym_mult_expr = 135,
    sym_unary_expr = 136,
    sym_unary_operator = 137,
    sym_literal = 138,
    sym_string_literal = 139,
    sym_char_literal = 140,
    sym_boolean_literal = 141,
    sym_preproc_call = 142,
    sym_except_dcl = 143,
    sym_interface_dcl = 144,
    sym_interface_forward_dcl = 145,
    sym_interface_def = 146,
    sym_interface_header = 147,
    sym_interface_inheritance_spec = 148,
    sym_interface_name = 149,
    sym_interface_body = 150,
    sym_export = 151,
    sym_op_dcl = 152,
    sym_op_type_spec = 153,
    sym_parameter_dcls = 154,
    sym_param_dcl = 155,
    sym_param_attribute = 156,
    sym_raises_expr = 157,
    sym_attr_dcl = 158,
    sym_readonly_attr_spec = 159,
    sym_readonly_attr_declarator = 160,
    sym_attr_spec = 161,
    sym_attr_declarator = 162,
    sym_attr_raises_expr = 163,
    sym_get_excep_expr = 164,
    sym_set_excep_expr = 165,
    sym_exception_list = 166,
    sym_bitset_dcl = 167,
    sym_bitfield = 168,
    sym_bitfield_spec = 169,
    sym_destination_type = 170,
    sym_bitmask_dcl = 171,
    sym_bit_value = 172,
    sym_annotation_dcl = 173,
    sym_annotation_body = 174,
    sym_annotation_member = 175,
    sym_annotation_member_type = 176,
    sym_any_const_type = 177,
    sym_annotation_appl = 178,
    sym_annotation_appl_params = 179,
    sym_annotation_appl_param = 180,
    sym_template_module_dcl = 181,
    sym_formal_parameters = 182,
    sym_formal_parameter = 183,
    sym_formal_parameter_type = 184,
    sym_tpl_definition = 185,
    sym_template_module_inst = 186,
    sym_actual_parameters = 187,
    sym_actual_parameter = 188,
    sym_template_module_ref = 189,
    sym_formal_parameter_names = 190,
    sym_value_dcl = 191,
    sym_value_def = 192,
    sym_value_header = 193,
    sym_value_inheritance_spec = 194,
    sym_value_name = 195,
    sym_value_element = 196,
    sym_state_member = 197,
    sym_init_dcl = 198,
    sym_init_param_dcls = 199,
    sym_init_param_dcl = 200,
    sym_value_forward_dcl = 201,
    sym_typedef_dcl = 202,
    sym_type_declarator = 203,
    sym_any_declarators = 204,
    sym_any_declarator = 205,
    sym_simple_declarator = 206,
    sym_declarator = 207,
    sym_declarators = 208,
    sym_array_declarator = 209,
    sym_fixed_array_size = 210,
    sym_enum_dcl = 211,
    sym_enumerator = 212,
    sym_enum_modifier = 213,
    sym_enum_anno = 214,
    sym_union_forward_dcl = 215,
    sym_union_def = 216,
    sym_case = 217,
    sym_case_label = 218,
    sym_element_spec = 219,
    sym_switch_type_spec = 220,
    sym__definition = 221,
    sym_native_dcl = 222,
    sym_module_dcl = 223,
    sym_struct_forward_dcl = 224,
    sym_struct_def = 225,
    sym_member = 226,
    sym_default = 227,
    sym_predefine = 228,
    sym_const_dcl = 229,
    sym_const_type = 230,
    aux_sym_specification_repeat1 = 231,
    aux_sym_specification_repeat2 = 232,
    aux_sym_except_dcl_repeat1 = 233,
    aux_sym_interface_def_repeat1 = 234,
    aux_sym_interface_inheritance_spec_repeat1 = 235,
    aux_sym_interface_body_repeat1 = 236,
    aux_sym_parameter_dcls_repeat1 = 237,
    aux_sym_raises_expr_repeat1 = 238,
    aux_sym_readonly_attr_declarator_repeat1 = 239,
    aux_sym_bitset_dcl_repeat1 = 240,
    aux_sym_bitfield_repeat1 = 241,
    aux_sym_bitmask_dcl_repeat1 = 242,
    aux_sym_annotation_dcl_repeat1 = 243,
    aux_sym_annotation_appl_params_repeat1 = 244,
    aux_sym_template_module_dcl_repeat1 = 245,
    aux_sym_formal_parameters_repeat1 = 246,
    aux_sym_actual_parameters_repeat1 = 247,
    aux_sym_formal_parameter_names_repeat1 = 248,
    aux_sym_value_def_repeat1 = 249,
    aux_sym_init_param_dcls_repeat1 = 250,
    aux_sym_any_declarators_repeat1 = 251,
    aux_sym_declarators_repeat1 = 252,
    aux_sym_array_declarator_repeat1 = 253,
    aux_sym_enum_dcl_repeat1 = 254,
    aux_sym_enumerator_repeat1 = 255,
    aux_sym_union_def_repeat1 = 256,
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
    [sym_comment] = "comment",
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
    [sym_comment] = sym_comment,
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
    [sym_comment] = {
        .visible = true,
        .named = true,
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
    [54] = 51,
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
    [76] = 75,
    [77] = 75,
    [78] = 78,
    [79] = 79,
    [80] = 80,
    [81] = 81,
    [82] = 82,
    [83] = 83,
    [84] = 84,
    [85] = 69,
    [86] = 70,
    [87] = 87,
    [88] = 88,
    [89] = 65,
    [90] = 90,
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
    [141] = 63,
    [142] = 142,
    [143] = 71,
    [144] = 65,
    [145] = 145,
    [146] = 146,
    [147] = 147,
    [148] = 148,
    [149] = 149,
    [150] = 150,
    [151] = 151,
    [152] = 152,
    [153] = 153,
    [154] = 70,
    [155] = 69,
    [156] = 156,
    [157] = 157,
    [158] = 158,
    [159] = 73,
    [160] = 160,
    [161] = 161,
    [162] = 162,
    [163] = 163,
    [164] = 164,
    [165] = 165,
    [166] = 166,
    [167] = 167,
    [168] = 168,
    [169] = 169,
    [170] = 170,
    [171] = 171,
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
    [183] = 71,
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
    [199] = 63,
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
    [288] = 210,
    [289] = 289,
    [290] = 290,
    [291] = 291,
    [292] = 292,
    [293] = 210,
    [294] = 294,
    [295] = 295,
    [296] = 296,
    [297] = 297,
    [298] = 298,
    [299] = 196,
    [300] = 300,
    [301] = 73,
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
    [517] = 481,
    [518] = 444,
    [519] = 425,
    [520] = 381,
    [521] = 521,
    [522] = 481,
    [523] = 381,
    [524] = 524,
    [525] = 525,
    [526] = 526,
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
                ADVANCE(407);
            ADVANCE_MAP(
                '"', 482,
                '#', 129,
                '$', 467,
                '%', 476,
                '\'', 484,
                '(', 477,
                ')', 478,
                '*', 474,
                '+', 470,
                ',', 460,
                '-', 472,
                '/', 475,
                ':', 568,
                ';', 569,
                '<', 455,
                '=', 594,
                '>', 457,
                '@', 592,
                'F', 486,
                'L', 480,
                'T', 487,
                '[', 620,
            );
            if(lookahead == '\\')
                SKIP(400);
            if(lookahead == ']')
                ADVANCE(621);
            if(lookahead == '^')
                ADVANCE(466);
            if(lookahead == 'a')
                ADVANCE(501);
            if(lookahead == 'b')
                ADVANCE(499);
            if(lookahead == 'c')
                ADVANCE(488);
            if(lookahead == 'd')
                ADVANCE(496);
            if(lookahead == 'e')
                ADVANCE(503);
            if(lookahead == 'f')
                ADVANCE(491);
            if(lookahead == 'g')
                ADVANCE(498);
            if(lookahead == 'i')
                ADVANCE(502);
            if(lookahead == 'l')
                ADVANCE(504);
            if(lookahead == 'm')
                ADVANCE(489);
            if(lookahead == 'n')
                ADVANCE(493);
            if(lookahead == 'o')
                ADVANCE(495);
            if(lookahead == 'p')
                ADVANCE(505);
            if(lookahead == 'r')
                ADVANCE(492);
            if(lookahead == 's')
                ADVANCE(497);
            if(lookahead == 't')
                ADVANCE(506);
            if(lookahead == 'u')
                ADVANCE(500);
            if(lookahead == 'v')
                ADVANCE(490);
            if(lookahead == 'w')
                ADVANCE(494);
            if(lookahead == '{')
                ADVANCE(562);
            if(lookahead == '|')
                ADVANCE(465);
            if(lookahead == '}')
                ADVANCE(563);
            if(lookahead == '~')
                ADVANCE(479);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(0);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= '_') ||
               ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(485);
            END_STATE();
        case 1:
            if(lookahead == '\n')
                SKIP(58);
            END_STATE();
        case 2:
            if(lookahead == '\n')
                SKIP(58);
            if(lookahead == '\r')
                SKIP(1);
            END_STATE();
        case 3:
            if(lookahead == '\n')
                SKIP(60);
            END_STATE();
        case 4:
            if(lookahead == '\n')
                SKIP(60);
            if(lookahead == '\r')
                SKIP(3);
            END_STATE();
        case 5:
            if(lookahead == '\n')
                SKIP(47);
            END_STATE();
        case 6:
            if(lookahead == '\n')
                SKIP(47);
            if(lookahead == '\r')
                SKIP(5);
            END_STATE();
        case 7:
            if(lookahead == '\n')
                SKIP(61);
            END_STATE();
        case 8:
            if(lookahead == '\n')
                SKIP(61);
            if(lookahead == '\r')
                SKIP(7);
            END_STATE();
        case 9:
            if(lookahead == '\n')
                SKIP(62);
            END_STATE();
        case 10:
            if(lookahead == '\n')
                SKIP(62);
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
                SKIP(52);
            END_STATE();
        case 14:
            if(lookahead == '\n')
                SKIP(52);
            if(lookahead == '\r')
                SKIP(13);
            END_STATE();
        case 15:
            if(lookahead == '\n')
                SKIP(64);
            END_STATE();
        case 16:
            if(lookahead == '\n')
                SKIP(64);
            if(lookahead == '\r')
                SKIP(15);
            END_STATE();
        case 17:
            if(lookahead == '\n')
                SKIP(65);
            END_STATE();
        case 18:
            if(lookahead == '\n')
                SKIP(65);
            if(lookahead == '\r')
                SKIP(17);
            END_STATE();
        case 19:
            if(lookahead == '\n')
                SKIP(66);
            END_STATE();
        case 20:
            if(lookahead == '\n')
                SKIP(66);
            if(lookahead == '\r')
                SKIP(19);
            END_STATE();
        case 21:
            if(lookahead == '\n')
                SKIP(48);
            END_STATE();
        case 22:
            if(lookahead == '\n')
                SKIP(48);
            if(lookahead == '\r')
                SKIP(21);
            END_STATE();
        case 23:
            if(lookahead == '\n')
                SKIP(49);
            END_STATE();
        case 24:
            if(lookahead == '\n')
                SKIP(49);
            if(lookahead == '\r')
                SKIP(23);
            END_STATE();
        case 25:
            if(lookahead == '\n')
                SKIP(50);
            END_STATE();
        case 26:
            if(lookahead == '\n')
                SKIP(50);
            if(lookahead == '\r')
                SKIP(25);
            END_STATE();
        case 27:
            if(lookahead == '\n')
                SKIP(51);
            END_STATE();
        case 28:
            if(lookahead == '\n')
                SKIP(51);
            if(lookahead == '\r')
                SKIP(27);
            END_STATE();
        case 29:
            if(lookahead == '\n')
                SKIP(67);
            END_STATE();
        case 30:
            if(lookahead == '\n')
                SKIP(67);
            if(lookahead == '\r')
                SKIP(29);
            END_STATE();
        case 31:
            if(lookahead == '\n')
                SKIP(53);
            END_STATE();
        case 32:
            if(lookahead == '\n')
                SKIP(53);
            if(lookahead == '\r')
                SKIP(31);
            END_STATE();
        case 33:
            if(lookahead == '\n')
                SKIP(68);
            END_STATE();
        case 34:
            if(lookahead == '\n')
                SKIP(68);
            if(lookahead == '\r')
                SKIP(33);
            END_STATE();
        case 35:
            if(lookahead == '\n')
                ADVANCE(541);
            if(lookahead == '\r')
                ADVANCE(38);
            if(lookahead == '/')
                ADVANCE(556);
            if(lookahead == '\\')
                ADVANCE(551);
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                SKIP(72);
            if(lookahead != 0)
                ADVANCE(558);
            END_STATE();
        case 36:
            if(lookahead == '\n')
                ADVANCE(541);
            if(lookahead == '\r')
                ADVANCE(37);
            if(lookahead == '/')
                ADVANCE(54);
            if(lookahead == '\\')
                SKIP(42);
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                SKIP(71);
            END_STATE();
        case 37:
            if(lookahead == '\n')
                ADVANCE(541);
            if(lookahead == '/')
                ADVANCE(54);
            if(lookahead == '\\')
                SKIP(42);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(71);
            END_STATE();
        case 38:
            if(lookahead == '\n')
                ADVANCE(541);
            if(lookahead == '/')
                ADVANCE(556);
            if(lookahead == '\\')
                ADVANCE(551);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(72);
            if(lookahead != 0)
                ADVANCE(558);
            END_STATE();
        case 39:
            if(lookahead == '\n')
                SKIP(69);
            END_STATE();
        case 40:
            if(lookahead == '\n')
                SKIP(69);
            if(lookahead == '\r')
                SKIP(39);
            END_STATE();
        case 41:
            if(lookahead == '\n')
                SKIP(71);
            END_STATE();
        case 42:
            if(lookahead == '\n')
                SKIP(71);
            if(lookahead == '\r')
                SKIP(41);
            END_STATE();
        case 43:
            if(lookahead == '\n')
                SKIP(70);
            END_STATE();
        case 44:
            if(lookahead == '\n')
                SKIP(70);
            if(lookahead == '\r')
                SKIP(43);
            END_STATE();
        case 45:
            if(lookahead == '\r')
                ADVANCE(865);
            if(lookahead == '\\')
                ADVANCE(859);
            if(lookahead != 0)
                ADVANCE(864);
            END_STATE();
        case 46:
            if(lookahead == ' ')
                ADVANCE(241);
            END_STATE();
        case 47:
            ADVANCE_MAP(
                '"', 482,
                '\'', 484,
                '(', 477,
                '+', 471,
                '-', 473,
                '.', 393,
                '/', 54,
                '0', 518,
                ':', 81,
                'F', 652,
                'L', 481,
                'T', 656,
            );
            if(lookahead == '\\')
                SKIP(6);
            if(lookahead == 'a')
                ADVANCE(765);
            if(lookahead == 'b')
                ADVANCE(784);
            if(lookahead == 'c')
                ADVANCE(729);
            if(lookahead == 'd')
                ADVANCE(780);
            if(lookahead == 'f')
                ADVANCE(732);
            if(lookahead == 'i')
                ADVANCE(769);
            if(lookahead == 'l')
                ADVANCE(783);
            if(lookahead == 'm')
                ADVANCE(659);
            if(lookahead == 'o')
                ADVANCE(682);
            if(lookahead == 's')
                ADVANCE(694);
            if(lookahead == 'u')
                ADVANCE(745);
            if(lookahead == 'w')
                ADVANCE(677);
            if(lookahead == '~')
                ADVANCE(479);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(47);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(522);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 48:
            ADVANCE_MAP(
                '"', 482,
                '\'', 484,
                '(', 477,
                '+', 471,
                '-', 473,
                '.', 393,
                '/', 54,
                '0', 518,
                ':', 81,
                'F', 652,
                'L', 481,
                'T', 656,
            );
            if(lookahead == '\\')
                SKIP(22);
            if(lookahead == '~')
                ADVANCE(479);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(48);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(522);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 49:
            ADVANCE_MAP(
                '$', 467,
                '%', 476,
                '(', 477,
                ')', 478,
                '*', 474,
                '+', 470,
                ',', 460,
                '-', 472,
                '/', 475,
                ':', 568,
                ';', 569,
                '<', 455,
                '>', 457,
                '@', 591,
            );
            if(lookahead == '\\')
                SKIP(24);
            if(lookahead == ']')
                ADVANCE(621);
            if(lookahead == '^')
                ADVANCE(466);
            if(lookahead == 'b')
                ADVANCE(215);
            if(lookahead == 'i')
                ADVANCE(274);
            if(lookahead == 'l')
                ADVANCE(279);
            if(lookahead == 's')
                ADVANCE(355);
            if(lookahead == '{')
                ADVANCE(562);
            if(lookahead == '|')
                ADVANCE(465);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(49);
            END_STATE();
        case 50:
            if(lookahead == '$')
                ADVANCE(467);
            if(lookahead == ')')
                ADVANCE(478);
            if(lookahead == ',')
                ADVANCE(460);
            if(lookahead == '/')
                ADVANCE(54);
            if(lookahead == ':')
                ADVANCE(567);
            if(lookahead == ';')
                ADVANCE(569);
            if(lookahead == '>')
                ADVANCE(456);
            if(lookahead == '\\')
                SKIP(26);
            if(lookahead == ']')
                ADVANCE(621);
            if(lookahead == '^')
                ADVANCE(466);
            if(lookahead == 'i')
                ADVANCE(249);
            if(lookahead == 'o')
                ADVANCE(371);
            if(lookahead == '|')
                ADVANCE(465);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(50);
            END_STATE();
        case 51:
            ADVANCE_MAP(
                '(', 477,
                ')', 478,
                ',', 460,
                '/', 54,
                ':', 81,
                ';', 569,
                '<', 454,
                '>', 456,
                '@', 591,
            );
            if(lookahead == '\\')
                SKIP(28);
            if(lookahead == '}')
                ADVANCE(563);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(51);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 52:
            if(lookahead == '(')
                ADVANCE(477);
            if(lookahead == ',')
                ADVANCE(460);
            if(lookahead == '/')
                ADVANCE(54);
            if(lookahead == ':')
                ADVANCE(81);
            if(lookahead == '>')
                ADVANCE(456);
            if(lookahead == '@')
                ADVANCE(591);
            if(lookahead == '\\')
                SKIP(14);
            if(lookahead == 'a')
                ADVANCE(765);
            if(lookahead == 'b')
                ADVANCE(784);
            if(lookahead == 'c')
                ADVANCE(729);
            if(lookahead == 'd')
                ADVANCE(780);
            if(lookahead == 'f')
                ADVANCE(732);
            if(lookahead == 'i')
                ADVANCE(769);
            if(lookahead == 'l')
                ADVANCE(783);
            if(lookahead == 'm')
                ADVANCE(659);
            if(lookahead == 'o')
                ADVANCE(682);
            if(lookahead == 's')
                ADVANCE(694);
            if(lookahead == 'u')
                ADVANCE(745);
            if(lookahead == 'w')
                ADVANCE(677);
            if(lookahead == '}')
                ADVANCE(563);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(52);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 53:
            if(lookahead == ')')
                ADVANCE(478);
            if(lookahead == '/')
                ADVANCE(54);
            if(lookahead == '\\')
                SKIP(32);
            if(lookahead == 'i')
                ADVANCE(254);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(53);
            END_STATE();
        case 54:
            if(lookahead == '*')
                ADVANCE(56);
            if(lookahead == '/')
                ADVANCE(864);
            END_STATE();
        case 55:
            if(lookahead == '*')
                ADVANCE(55);
            if(lookahead == '/')
                ADVANCE(857);
            if(lookahead != 0)
                ADVANCE(56);
            END_STATE();
        case 56:
            if(lookahead == '*')
                ADVANCE(55);
            if(lookahead != 0)
                ADVANCE(56);
            END_STATE();
        case 57:
            if(lookahead == '*')
                ADVANCE(55);
            if(lookahead != 0)
                ADVANCE(549);
            END_STATE();
        case 58:
            if(lookahead == ',')
                ADVANCE(460);
            if(lookahead == '/')
                ADVANCE(54);
            if(lookahead == ':')
                ADVANCE(81);
            if(lookahead == '<')
                ADVANCE(454);
            if(lookahead == '>')
                ADVANCE(456);
            if(lookahead == '@')
                ADVANCE(593);
            if(lookahead == '\\')
                SKIP(2);
            if(lookahead == ']')
                ADVANCE(621);
            if(lookahead == 'a')
                ADVANCE(764);
            if(lookahead == 'b')
                ADVANCE(734);
            if(lookahead == 'c')
                ADVANCE(728);
            if(lookahead == 'd')
                ADVANCE(780);
            if(lookahead == 'e')
                ADVANCE(767);
            if(lookahead == 'f')
                ADVANCE(672);
            if(lookahead == 'i')
                ADVANCE(769);
            if(lookahead == 'l')
                ADVANCE(783);
            if(lookahead == 'm')
                ADVANCE(659);
            if(lookahead == 'n')
                ADVANCE(664);
            if(lookahead == 'o')
                ADVANCE(682);
            if(lookahead == 'p')
                ADVANCE(799);
            if(lookahead == 'r')
                ADVANCE(709);
            if(lookahead == 's')
                ADVANCE(692);
            if(lookahead == 't')
                ADVANCE(851);
            if(lookahead == 'u')
                ADVANCE(744);
            if(lookahead == 'v')
                ADVANCE(782);
            if(lookahead == 'w')
                ADVANCE(677);
            if(lookahead == '{')
                ADVANCE(562);
            if(lookahead == '}')
                ADVANCE(563);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(58);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 59:
            if(lookahead == '.')
                ADVANCE(393);
            if(lookahead == '0')
                ADVANCE(515);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(517);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(531);
            END_STATE();
        case 60:
            if(lookahead == '/')
                ADVANCE(54);
            if(lookahead == ':')
                ADVANCE(81);
            if(lookahead == '@')
                ADVANCE(593);
            if(lookahead == '\\')
                SKIP(4);
            if(lookahead == 'a')
                ADVANCE(764);
            if(lookahead == 'b')
                ADVANCE(734);
            if(lookahead == 'c')
                ADVANCE(728);
            if(lookahead == 'd')
                ADVANCE(780);
            if(lookahead == 'e')
                ADVANCE(767);
            if(lookahead == 'f')
                ADVANCE(732);
            if(lookahead == 'i')
                ADVANCE(769);
            if(lookahead == 'l')
                ADVANCE(783);
            if(lookahead == 'm')
                ADVANCE(659);
            if(lookahead == 'n')
                ADVANCE(664);
            if(lookahead == 'o')
                ADVANCE(682);
            if(lookahead == 'r')
                ADVANCE(709);
            if(lookahead == 's')
                ADVANCE(692);
            if(lookahead == 't')
                ADVANCE(851);
            if(lookahead == 'u')
                ADVANCE(744);
            if(lookahead == 'v')
                ADVANCE(782);
            if(lookahead == 'w')
                ADVANCE(677);
            if(lookahead == '}')
                ADVANCE(563);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(60);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 61:
            if(lookahead == '/')
                ADVANCE(54);
            if(lookahead == ':')
                ADVANCE(81);
            if(lookahead == '@')
                ADVANCE(593);
            if(lookahead == '\\')
                SKIP(8);
            if(lookahead == 'a')
                ADVANCE(765);
            if(lookahead == 'b')
                ADVANCE(734);
            if(lookahead == 'c')
                ADVANCE(665);
            if(lookahead == 'd')
                ADVANCE(706);
            if(lookahead == 'e')
                ADVANCE(768);
            if(lookahead == 'f')
                ADVANCE(732);
            if(lookahead == 'i')
                ADVANCE(769);
            if(lookahead == 'l')
                ADVANCE(783);
            if(lookahead == 'm')
                ADVANCE(659);
            if(lookahead == 'o')
                ADVANCE(682);
            if(lookahead == 's')
                ADVANCE(692);
            if(lookahead == 'u')
                ADVANCE(744);
            if(lookahead == 'w')
                ADVANCE(677);
            if(lookahead == '}')
                ADVANCE(563);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(61);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 62:
            if(lookahead == '/')
                ADVANCE(54);
            if(lookahead == ':')
                ADVANCE(81);
            if(lookahead == '@')
                ADVANCE(593);
            if(lookahead == '\\')
                SKIP(10);
            if(lookahead == 'a')
                ADVANCE(765);
            if(lookahead == 'b')
                ADVANCE(734);
            if(lookahead == 'c')
                ADVANCE(729);
            if(lookahead == 'd')
                ADVANCE(780);
            if(lookahead == 'e')
                ADVANCE(768);
            if(lookahead == 'f')
                ADVANCE(732);
            if(lookahead == 'i')
                ADVANCE(769);
            if(lookahead == 'l')
                ADVANCE(783);
            if(lookahead == 'm')
                ADVANCE(659);
            if(lookahead == 'o')
                ADVANCE(682);
            if(lookahead == 's')
                ADVANCE(692);
            if(lookahead == 'u')
                ADVANCE(744);
            if(lookahead == 'w')
                ADVANCE(677);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(62);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 63:
            if(lookahead == '/')
                ADVANCE(54);
            if(lookahead == ':')
                ADVANCE(81);
            if(lookahead == '@')
                ADVANCE(198);
            if(lookahead == '\\')
                SKIP(12);
            if(lookahead == 'a')
                ADVANCE(765);
            if(lookahead == 'b')
                ADVANCE(784);
            if(lookahead == 'c')
                ADVANCE(728);
            if(lookahead == 'd')
                ADVANCE(780);
            if(lookahead == 'e')
                ADVANCE(768);
            if(lookahead == 'f')
                ADVANCE(732);
            if(lookahead == 'i')
                ADVANCE(769);
            if(lookahead == 'l')
                ADVANCE(783);
            if(lookahead == 'o')
                ADVANCE(682);
            if(lookahead == 's')
                ADVANCE(694);
            if(lookahead == 't')
                ADVANCE(851);
            if(lookahead == 'u')
                ADVANCE(745);
            if(lookahead == 'w')
                ADVANCE(677);
            if(lookahead == '}')
                ADVANCE(563);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(63);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 64:
            if(lookahead == '/')
                ADVANCE(54);
            if(lookahead == ':')
                ADVANCE(81);
            if(lookahead == '\\')
                SKIP(16);
            if(lookahead == 'a')
                ADVANCE(765);
            if(lookahead == 'b')
                ADVANCE(784);
            if(lookahead == 'c')
                ADVANCE(728);
            if(lookahead == 'd')
                ADVANCE(780);
            if(lookahead == 'e')
                ADVANCE(766);
            if(lookahead == 'f')
                ADVANCE(750);
            if(lookahead == 'i')
                ADVANCE(775);
            if(lookahead == 'l')
                ADVANCE(783);
            if(lookahead == 'o')
                ADVANCE(682);
            if(lookahead == 's')
                ADVANCE(693);
            if(lookahead == 't')
                ADVANCE(852);
            if(lookahead == 'u')
                ADVANCE(744);
            if(lookahead == 'v')
                ADVANCE(668);
            if(lookahead == 'w')
                ADVANCE(678);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(64);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 65:
            if(lookahead == '/')
                ADVANCE(54);
            if(lookahead == ':')
                ADVANCE(81);
            if(lookahead == '\\')
                SKIP(18);
            if(lookahead == 'b')
                ADVANCE(784);
            if(lookahead == 'c')
                ADVANCE(729);
            if(lookahead == 'd')
                ADVANCE(780);
            if(lookahead == 'f')
                ADVANCE(732);
            if(lookahead == 'i')
                ADVANCE(769);
            if(lookahead == 'l')
                ADVANCE(783);
            if(lookahead == 'o')
                ADVANCE(682);
            if(lookahead == 's')
                ADVANCE(694);
            if(lookahead == 'u')
                ADVANCE(745);
            if(lookahead == 'w')
                ADVANCE(677);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(65);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 66:
            if(lookahead == '/')
                ADVANCE(54);
            if(lookahead == ':')
                ADVANCE(81);
            if(lookahead == '\\')
                SKIP(20);
            if(lookahead == 'b')
                ADVANCE(784);
            if(lookahead == 'c')
                ADVANCE(729);
            if(lookahead == 'i')
                ADVANCE(769);
            if(lookahead == 'l')
                ADVANCE(791);
            if(lookahead == 's')
                ADVANCE(730);
            if(lookahead == 'u')
                ADVANCE(745);
            if(lookahead == 'w')
                ADVANCE(678);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(66);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 67:
            if(lookahead == '/')
                ADVANCE(54);
            if(lookahead == ':')
                ADVANCE(567);
            if(lookahead == ';')
                ADVANCE(569);
            if(lookahead == '@')
                ADVANCE(140);
            if(lookahead == '\\')
                SKIP(30);
            if(lookahead == '{')
                ADVANCE(562);
            if(lookahead == '}')
                ADVANCE(563);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(67);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 68:
            if(lookahead == '/')
                ADVANCE(54);
            if(lookahead == ';')
                ADVANCE(569);
            if(lookahead == '\\')
                SKIP(34);
            if(lookahead == 's')
                ADVANCE(846);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(68);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 69:
            if(lookahead == '/')
                ADVANCE(54);
            if(lookahead == '\\')
                SKIP(40);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(69);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(485);
            END_STATE();
        case 70:
            if(lookahead == '/')
                ADVANCE(54);
            if(lookahead == '\\')
                SKIP(44);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(70);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(483);
            END_STATE();
        case 71:
            if(lookahead == '/')
                ADVANCE(54);
            if(lookahead == '\\')
                SKIP(42);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(71);
            END_STATE();
        case 72:
            if(lookahead == '/')
                ADVANCE(556);
            if(lookahead == '\\')
                ADVANCE(551);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(72);
            if(lookahead != 0)
                ADVANCE(558);
            END_STATE();
        case 73:
            if(lookahead == '1')
                ADVANCE(79);
            if(lookahead == '3')
                ADVANCE(75);
            if(lookahead == '6')
                ADVANCE(77);
            if(lookahead == '8')
                ADVANCE(421);
            END_STATE();
        case 74:
            if(lookahead == '1')
                ADVANCE(80);
            if(lookahead == '3')
                ADVANCE(76);
            if(lookahead == '6')
                ADVANCE(78);
            if(lookahead == '8')
                ADVANCE(429);
            if(lookahead == 'e')
                ADVANCE(318);
            END_STATE();
        case 75:
            if(lookahead == '2')
                ADVANCE(435);
            END_STATE();
        case 76:
            if(lookahead == '2')
                ADVANCE(416);
            END_STATE();
        case 77:
            if(lookahead == '4')
                ADVANCE(438);
            END_STATE();
        case 78:
            if(lookahead == '4')
                ADVANCE(419);
            END_STATE();
        case 79:
            if(lookahead == '6')
                ADVANCE(432);
            END_STATE();
        case 80:
            if(lookahead == '6')
                ADVANCE(410);
            END_STATE();
        case 81:
            if(lookahead == ':')
                ADVANCE(449);
            END_STATE();
        case 82:
            if(lookahead == '<')
                ADVANCE(469);
            END_STATE();
        case 83:
            if(lookahead == 'E')
                ADVANCE(507);
            END_STATE();
        case 84:
            if(lookahead == 'E')
                ADVANCE(509);
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
                ADVANCE(612);
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
                ADVANCE(542);
            if(lookahead == '\t' ||
               lookahead == ' ')
                ADVANCE(391);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(547);
            END_STATE();
        case 130:
            if(lookahead == 'd')
                ADVANCE(570);
            END_STATE();
        case 131:
            if(lookahead == 'd')
                ADVANCE(425);
            END_STATE();
        case 132:
            if(lookahead == 'd')
                ADVANCE(585);
            END_STATE();
        case 133:
            if(lookahead == 'd')
                ADVANCE(46);
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
                ADVANCE(626);
            END_STATE();
        case 143:
            if(lookahead == 'e')
                ADVANCE(137);
            END_STATE();
        case 144:
            if(lookahead == 'e')
                ADVANCE(442);
            END_STATE();
        case 145:
            if(lookahead == 'e')
                ADVANCE(595);
            END_STATE();
        case 146:
            if(lookahead == 'e')
                ADVANCE(628);
            END_STATE();
        case 147:
            if(lookahead == 'e')
                ADVANCE(89);
            END_STATE();
        case 148:
            if(lookahead == 'e')
                ADVANCE(614);
            END_STATE();
        case 149:
            if(lookahead == 'e')
                ADVANCE(461);
            END_STATE();
        case 150:
            if(lookahead == 'e')
                ADVANCE(596);
            END_STATE();
        case 151:
            if(lookahead == 'e')
                ADVANCE(579);
            END_STATE();
        case 152:
            if(lookahead == 'e')
                ADVANCE(600);
            END_STATE();
        case 153:
            if(lookahead == 'e')
                ADVANCE(598);
            END_STATE();
        case 154:
            if(lookahead == 'e')
                ADVANCE(444);
            END_STATE();
        case 155:
            if(lookahead == 'e')
                ADVANCE(564);
            END_STATE();
        case 156:
            if(lookahead == 'e')
                ADVANCE(630);
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
                ADVANCE(618);
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
                ADVANCE(412);
            END_STATE();
        case 187:
            if(lookahead == 'g')
                ADVANCE(450);
            END_STATE();
        case 188:
            if(lookahead == 'g')
                ADVANCE(452);
            END_STATE();
        case 189:
            if(lookahead == 'g')
                ADVANCE(418);
            END_STATE();
        case 190:
            if(lookahead == 'g')
                ADVANCE(434);
            END_STATE();
        case 191:
            if(lookahead == 'g')
                ADVANCE(437);
            END_STATE();
        case 192:
            if(lookahead == 'g')
                ADVANCE(414);
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
                ADVANCE(624);
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
                ADVANCE(586);
            END_STATE();
        case 225:
            if(lookahead == 'l')
                ADVANCE(204);
            END_STATE();
        case 226:
            if(lookahead == 'l')
                ADVANCE(566);
            END_STATE();
        case 227:
            if(lookahead == 'l')
                ADVANCE(622);
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
                ADVANCE(606);
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
                ADVANCE(573);
            END_STATE();
        case 250:
            if(lookahead == 'n')
                ADVANCE(604);
            END_STATE();
        case 251:
            if(lookahead == 'n')
                ADVANCE(423);
            END_STATE();
        case 252:
            if(lookahead == 'n')
                ADVANCE(560);
            END_STATE();
        case 253:
            if(lookahead == 'n')
                ADVANCE(588);
            END_STATE();
        case 254:
            if(lookahead == 'n')
                ADVANCE(572);
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
                ADVANCE(463);
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
                ADVANCE(445);
            END_STATE();
        case 306:
            if(lookahead == 'r')
                ADVANCE(447);
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
                ADVANCE(610);
            END_STATE();
        case 321:
            if(lookahead == 's')
                ADVANCE(224);
            END_STATE();
        case 322:
            if(lookahead == 's')
                ADVANCE(576);
            END_STATE();
        case 323:
            if(lookahead == 's')
                ADVANCE(611);
            END_STATE();
        case 324:
            if(lookahead == 's')
                ADVANCE(581);
            END_STATE();
        case 325:
            if(lookahead == 's')
                ADVANCE(582);
            END_STATE();
        case 326:
            if(lookahead == 's')
                ADVANCE(623);
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
                ADVANCE(574);
            END_STATE();
        case 335:
            if(lookahead == 't')
                ADVANCE(73);
            END_STATE();
        case 336:
            if(lookahead == 't')
                ADVANCE(608);
            END_STATE();
        case 337:
            if(lookahead == 't')
                ADVANCE(440);
            END_STATE();
        case 338:
            if(lookahead == 't')
                ADVANCE(575);
            END_STATE();
        case 339:
            if(lookahead == 't')
                ADVANCE(427);
            END_STATE();
        case 340:
            if(lookahead == 't')
                ADVANCE(408);
            END_STATE();
        case 341:
            if(lookahead == 't')
                ADVANCE(583);
            END_STATE();
        case 342:
            if(lookahead == 't')
                ADVANCE(602);
            END_STATE();
        case 343:
            if(lookahead == 't')
                ADVANCE(589);
            END_STATE();
        case 344:
            if(lookahead == 't')
                ADVANCE(431);
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
                ADVANCE(458);
            END_STATE();
        case 386:
            if(lookahead == 'y')
                ADVANCE(616);
            END_STATE();
        case 387:
            if(lookahead == 'y')
                ADVANCE(577);
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
                ADVANCE(547);
            END_STATE();
        case 392:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(523);
            END_STATE();
        case 393:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(511);
            END_STATE();
        case 394:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(517);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(531);
            END_STATE();
        case 395:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(525);
            END_STATE();
        case 396:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(531);
            END_STATE();
        case 397:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(513);
            END_STATE();
        case 398:
            if(lookahead != 0 &&
               lookahead != '*')
                ADVANCE(558);
            END_STATE();
        case 399:
            if(eof)
                ADVANCE(407);
            if(lookahead == '\n')
                SKIP(0);
            END_STATE();
        case 400:
            if(eof)
                ADVANCE(407);
            if(lookahead == '\n')
                SKIP(0);
            if(lookahead == '\r')
                SKIP(399);
            END_STATE();
        case 401:
            if(eof)
                ADVANCE(407);
            if(lookahead == '\n')
                SKIP(405);
            END_STATE();
        case 402:
            if(eof)
                ADVANCE(407);
            if(lookahead == '\n')
                SKIP(405);
            if(lookahead == '\r')
                SKIP(401);
            END_STATE();
        case 403:
            if(eof)
                ADVANCE(407);
            if(lookahead == '\n')
                SKIP(406);
            END_STATE();
        case 404:
            if(eof)
                ADVANCE(407);
            if(lookahead == '\n')
                SKIP(406);
            if(lookahead == '\r')
                SKIP(403);
            END_STATE();
        case 405:
            if(eof)
                ADVANCE(407);
            ADVANCE_MAP(
                '#', 129,
                '$', 467,
                '%', 476,
                ')', 478,
                '*', 474,
                '+', 470,
                ',', 460,
                '-', 472,
                '/', 475,
                ':', 568,
                ';', 569,
                '<', 82,
                '=', 594,
                '>', 457,
                '@', 592,
                '[', 620,
            );
            if(lookahead == '\\')
                SKIP(402);
            if(lookahead == ']')
                ADVANCE(621);
            if(lookahead == '^')
                ADVANCE(466);
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
                ADVANCE(562);
            if(lookahead == '|')
                ADVANCE(465);
            if(lookahead == '}')
                ADVANCE(563);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(405);
            END_STATE();
        case 406:
            if(eof)
                ADVANCE(407);
            ADVANCE_MAP(
                '#', 138,
                '$', 467,
                '%', 476,
                ')', 478,
                '*', 474,
                '+', 470,
                ',', 460,
                '-', 472,
                '/', 475,
                ':', 567,
                ';', 569,
                '<', 82,
                '>', 457,
                '@', 592,
            );
            if(lookahead == '\\')
                SKIP(404);
            if(lookahead == ']')
                ADVANCE(621);
            if(lookahead == '^')
                ADVANCE(466);
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
                ADVANCE(562);
            if(lookahead == '|')
                ADVANCE(465);
            if(lookahead == '}')
                ADVANCE(563);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(406);
            END_STATE();
        case 407:
            ACCEPT_TOKEN(ts_builtin_sym_end);
            END_STATE();
        case 408:
            ACCEPT_TOKEN(anon_sym_short);
            END_STATE();
        case 409:
            ACCEPT_TOKEN(anon_sym_short);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 410:
            ACCEPT_TOKEN(anon_sym_int16);
            END_STATE();
        case 411:
            ACCEPT_TOKEN(anon_sym_int16);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 412:
            ACCEPT_TOKEN(anon_sym_long);
            if(lookahead == ' ')
                ADVANCE(135);
            END_STATE();
        case 413:
            ACCEPT_TOKEN(anon_sym_long);
            if(lookahead == ' ')
                ADVANCE(135);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 414:
            ACCEPT_TOKEN(anon_sym_long);
            if(lookahead == ' ')
                ADVANCE(240);
            END_STATE();
        case 415:
            ACCEPT_TOKEN(anon_sym_long);
            if(lookahead == ' ')
                ADVANCE(240);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 416:
            ACCEPT_TOKEN(anon_sym_int32);
            END_STATE();
        case 417:
            ACCEPT_TOKEN(anon_sym_int32);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 418:
            ACCEPT_TOKEN(anon_sym_longlong);
            END_STATE();
        case 419:
            ACCEPT_TOKEN(anon_sym_int64);
            END_STATE();
        case 420:
            ACCEPT_TOKEN(anon_sym_int64);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 421:
            ACCEPT_TOKEN(sym_unsigned_tiny_int);
            END_STATE();
        case 422:
            ACCEPT_TOKEN(sym_unsigned_tiny_int);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 423:
            ACCEPT_TOKEN(sym_boolean_type);
            END_STATE();
        case 424:
            ACCEPT_TOKEN(sym_boolean_type);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 425:
            ACCEPT_TOKEN(anon_sym_fixed);
            END_STATE();
        case 426:
            ACCEPT_TOKEN(anon_sym_fixed);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 427:
            ACCEPT_TOKEN(sym_octet_type);
            END_STATE();
        case 428:
            ACCEPT_TOKEN(sym_octet_type);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 429:
            ACCEPT_TOKEN(sym_signed_tiny_int);
            END_STATE();
        case 430:
            ACCEPT_TOKEN(sym_signed_tiny_int);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 431:
            ACCEPT_TOKEN(anon_sym_unsignedshort);
            END_STATE();
        case 432:
            ACCEPT_TOKEN(anon_sym_uint16);
            END_STATE();
        case 433:
            ACCEPT_TOKEN(anon_sym_uint16);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 434:
            ACCEPT_TOKEN(anon_sym_unsignedlong);
            if(lookahead == ' ')
                ADVANCE(242);
            END_STATE();
        case 435:
            ACCEPT_TOKEN(anon_sym_uint32);
            END_STATE();
        case 436:
            ACCEPT_TOKEN(anon_sym_uint32);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 437:
            ACCEPT_TOKEN(anon_sym_unsignedlonglong);
            END_STATE();
        case 438:
            ACCEPT_TOKEN(anon_sym_uint64);
            END_STATE();
        case 439:
            ACCEPT_TOKEN(anon_sym_uint64);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 440:
            ACCEPT_TOKEN(anon_sym_float);
            END_STATE();
        case 441:
            ACCEPT_TOKEN(anon_sym_float);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 442:
            ACCEPT_TOKEN(anon_sym_double);
            END_STATE();
        case 443:
            ACCEPT_TOKEN(anon_sym_double);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 444:
            ACCEPT_TOKEN(anon_sym_longdouble);
            END_STATE();
        case 445:
            ACCEPT_TOKEN(anon_sym_char);
            END_STATE();
        case 446:
            ACCEPT_TOKEN(anon_sym_char);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 447:
            ACCEPT_TOKEN(anon_sym_wchar);
            END_STATE();
        case 448:
            ACCEPT_TOKEN(anon_sym_wchar);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 449:
            ACCEPT_TOKEN(anon_sym_COLON_COLON);
            END_STATE();
        case 450:
            ACCEPT_TOKEN(anon_sym_string);
            END_STATE();
        case 451:
            ACCEPT_TOKEN(anon_sym_string);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 452:
            ACCEPT_TOKEN(anon_sym_wstring);
            END_STATE();
        case 453:
            ACCEPT_TOKEN(anon_sym_wstring);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 454:
            ACCEPT_TOKEN(anon_sym_LT);
            END_STATE();
        case 455:
            ACCEPT_TOKEN(anon_sym_LT);
            if(lookahead == '<')
                ADVANCE(469);
            END_STATE();
        case 456:
            ACCEPT_TOKEN(anon_sym_GT);
            END_STATE();
        case 457:
            ACCEPT_TOKEN(anon_sym_GT);
            if(lookahead == '>')
                ADVANCE(468);
            END_STATE();
        case 458:
            ACCEPT_TOKEN(anon_sym_any);
            END_STATE();
        case 459:
            ACCEPT_TOKEN(anon_sym_any);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 460:
            ACCEPT_TOKEN(anon_sym_COMMA);
            END_STATE();
        case 461:
            ACCEPT_TOKEN(anon_sym_sequence);
            END_STATE();
        case 462:
            ACCEPT_TOKEN(anon_sym_sequence);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 463:
            ACCEPT_TOKEN(anon_sym_map);
            END_STATE();
        case 464:
            ACCEPT_TOKEN(anon_sym_map);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 465:
            ACCEPT_TOKEN(anon_sym_PIPE);
            END_STATE();
        case 466:
            ACCEPT_TOKEN(anon_sym_CARET);
            END_STATE();
        case 467:
            ACCEPT_TOKEN(anon_sym_DOLLAR);
            END_STATE();
        case 468:
            ACCEPT_TOKEN(anon_sym_GT_GT);
            END_STATE();
        case 469:
            ACCEPT_TOKEN(anon_sym_LT_LT);
            END_STATE();
        case 470:
            ACCEPT_TOKEN(anon_sym_PLUS);
            END_STATE();
        case 471:
            ACCEPT_TOKEN(anon_sym_PLUS);
            if(lookahead == '.')
                ADVANCE(393);
            if(lookahead == '0')
                ADVANCE(519);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(523);
            END_STATE();
        case 472:
            ACCEPT_TOKEN(anon_sym_DASH);
            END_STATE();
        case 473:
            ACCEPT_TOKEN(anon_sym_DASH);
            if(lookahead == '.')
                ADVANCE(393);
            if(lookahead == '0')
                ADVANCE(519);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(523);
            END_STATE();
        case 474:
            ACCEPT_TOKEN(anon_sym_STAR);
            END_STATE();
        case 475:
            ACCEPT_TOKEN(anon_sym_SLASH);
            if(lookahead == '*')
                ADVANCE(56);
            if(lookahead == '/')
                ADVANCE(864);
            END_STATE();
        case 476:
            ACCEPT_TOKEN(anon_sym_PERCENT);
            END_STATE();
        case 477:
            ACCEPT_TOKEN(anon_sym_LPAREN);
            END_STATE();
        case 478:
            ACCEPT_TOKEN(anon_sym_RPAREN);
            END_STATE();
        case 479:
            ACCEPT_TOKEN(anon_sym_TILDE);
            END_STATE();
        case 480:
            ACCEPT_TOKEN(anon_sym_L);
            END_STATE();
        case 481:
            ACCEPT_TOKEN(anon_sym_L);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 482:
            ACCEPT_TOKEN(anon_sym_DQUOTE);
            END_STATE();
        case 483:
            ACCEPT_TOKEN(aux_sym_string_literal_token1);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(483);
            END_STATE();
        case 484:
            ACCEPT_TOKEN(anon_sym_SQUOTE);
            END_STATE();
        case 485:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            END_STATE();
        case 486:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'A')
                ADVANCE(85);
            END_STATE();
        case 487:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'R')
                ADVANCE(87);
            END_STATE();
        case 488:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(327);
            if(lookahead == 'h')
                ADVANCE(98);
            if(lookahead == 'o')
                ADVANCE(255);
            END_STATE();
        case 489:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(295);
            if(lookahead == 'o')
                ADVANCE(134);
            END_STATE();
        case 490:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(231);
            if(lookahead == 'o')
                ADVANCE(205);
            END_STATE();
        case 491:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(122);
            if(lookahead == 'i')
                ADVANCE(384);
            if(lookahead == 'l')
                ADVANCE(278);
            END_STATE();
        case 492:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(217);
            if(lookahead == 'e')
                ADVANCE(93);
            END_STATE();
        case 493:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(353);
            END_STATE();
        case 494:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'c')
                ADVANCE(196);
            if(lookahead == 's')
                ADVANCE(363);
            END_STATE();
        case 495:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'c')
                ADVANCE(352);
            if(lookahead == 'u')
                ADVANCE(334);
            END_STATE();
        case 496:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'e')
                ADVANCE(181);
            if(lookahead == 'o')
                ADVANCE(375);
            END_STATE();
        case 497:
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
        case 498:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'e')
                ADVANCE(351);
            END_STATE();
        case 499:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'i')
                ADVANCE(333);
            if(lookahead == 'o')
                ADVANCE(277);
            END_STATE();
        case 500:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'i')
                ADVANCE(265);
            if(lookahead == 'n')
                ADVANCE(207);
            END_STATE();
        case 501:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'l')
                ADVANCE(204);
            if(lookahead == 'n')
                ADVANCE(385);
            if(lookahead == 't')
                ADVANCE(348);
            END_STATE();
        case 502:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'n')
                ADVANCE(573);
            END_STATE();
        case 503:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'n')
                ADVANCE(370);
            if(lookahead == 'v')
                ADVANCE(174);
            if(lookahead == 'x')
                ADVANCE(120);
            END_STATE();
        case 504:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'o')
                ADVANCE(124);
            END_STATE();
        case 505:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'r')
                ADVANCE(199);
            if(lookahead == 'u')
                ADVANCE(114);
            END_STATE();
        case 506:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'y')
                ADVANCE(297);
            END_STATE();
        case 507:
            ACCEPT_TOKEN(anon_sym_TRUE);
            END_STATE();
        case 508:
            ACCEPT_TOKEN(anon_sym_TRUE);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 509:
            ACCEPT_TOKEN(anon_sym_FALSE);
            END_STATE();
        case 510:
            ACCEPT_TOKEN(anon_sym_FALSE);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 511:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(393);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(535);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(511);
            if(set_contains(sym_number_literal_character_set_13, 13, lookahead))
                ADVANCE(540);
            END_STATE();
        case 512:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 397,
                'B', 512,
                'D', 512,
                'F', 512,
                'b', 512,
                'd', 512,
                'f', 512,
                'L', 539,
                'U', 539,
                'W', 539,
                'l', 539,
                'u', 539,
                'w', 539,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(512);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 513:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 397,
                'B', 513,
                'D', 513,
                'F', 513,
                'b', 513,
                'd', 513,
                'f', 513,
                'L', 540,
                'U', 540,
                'W', 540,
                'l', 540,
                'u', 540,
                'w', 540,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(513);
            END_STATE();
        case 514:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 394,
                '.', 536,
                'B', 528,
                'b', 528,
                'E', 526,
                'e', 526,
                'P', 534,
                'p', 534,
                'X', 855,
                'x', 855,
                'A', 529,
                'C', 529,
                'a', 529,
                'c', 529,
                'D', 529,
                'F', 529,
                'd', 529,
                'f', 529,
                'L', 539,
                'U', 539,
                'W', 539,
                'l', 539,
                'u', 539,
                'w', 539,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(516);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 515:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 394,
                '.', 536,
                'B', 530,
                'b', 530,
                'E', 527,
                'e', 527,
                'P', 535,
                'p', 535,
                'X', 396,
                'x', 396,
                'A', 531,
                'C', 531,
                'a', 531,
                'c', 531,
                'D', 531,
                'F', 531,
                'd', 531,
                'f', 531,
                'L', 540,
                'U', 540,
                'W', 540,
                'l', 540,
                'u', 540,
                'w', 540,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(517);
            END_STATE();
        case 516:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 394,
                '.', 536,
                'E', 526,
                'e', 526,
                'P', 534,
                'p', 534,
                'A', 529,
                'C', 529,
                'a', 529,
                'c', 529,
                'B', 529,
                'D', 529,
                'F', 529,
                'b', 529,
                'd', 529,
                'f', 529,
                'L', 539,
                'U', 539,
                'W', 539,
                'l', 539,
                'u', 539,
                'w', 539,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(516);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 517:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 394,
                '.', 536,
                'E', 527,
                'e', 527,
                'P', 535,
                'p', 535,
                'A', 531,
                'C', 531,
                'a', 531,
                'c', 531,
                'B', 531,
                'D', 531,
                'F', 531,
                'b', 531,
                'd', 531,
                'f', 531,
                'L', 540,
                'U', 540,
                'W', 540,
                'l', 540,
                'u', 540,
                'w', 540,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(517);
            END_STATE();
        case 518:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 392,
                '.', 536,
                'B', 532,
                'b', 532,
                'X', 642,
                'x', 642,
                'E', 534,
                'P', 534,
                'e', 534,
                'p', 534,
                'D', 539,
                'F', 539,
                'L', 539,
                'U', 539,
                'W', 539,
                'd', 539,
                'f', 539,
                'l', 539,
                'u', 539,
                'w', 539,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(522);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 519:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 392,
                '.', 536,
                'B', 533,
                'b', 533,
                'X', 59,
                'x', 59,
                'E', 535,
                'P', 535,
                'e', 535,
                'p', 535,
                'D', 540,
                'F', 540,
                'L', 540,
                'U', 540,
                'W', 540,
                'd', 540,
                'f', 540,
                'l', 540,
                'u', 540,
                'w', 540,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(523);
            END_STATE();
        case 520:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 392,
                '.', 536,
                'B', 537,
                'b', 537,
                'X', 855,
                'x', 855,
                'E', 534,
                'P', 534,
                'e', 534,
                'p', 534,
                'D', 539,
                'F', 539,
                'L', 539,
                'U', 539,
                'W', 539,
                'd', 539,
                'f', 539,
                'l', 539,
                'u', 539,
                'w', 539,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(522);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 521:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 392,
                '.', 536,
                'B', 538,
                'b', 538,
                'X', 396,
                'x', 396,
                'E', 535,
                'P', 535,
                'e', 535,
                'p', 535,
                'D', 540,
                'F', 540,
                'L', 540,
                'U', 540,
                'W', 540,
                'd', 540,
                'f', 540,
                'l', 540,
                'u', 540,
                'w', 540,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(523);
            END_STATE();
        case 522:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(392);
            if(lookahead == '.')
                ADVANCE(536);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(534);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(522);
            if(set_contains(sym_number_literal_character_set_13, 13, lookahead))
                ADVANCE(539);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 523:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(392);
            if(lookahead == '.')
                ADVANCE(536);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(535);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(523);
            if(set_contains(sym_number_literal_character_set_13, 13, lookahead))
                ADVANCE(540);
            END_STATE();
        case 524:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 395,
                '+', 397,
                '-', 397,
                'E', 524,
                'e', 524,
                'P', 535,
                'p', 535,
                'B', 525,
                'D', 525,
                'F', 525,
                'b', 525,
                'd', 525,
                'f', 525,
                'L', 540,
                'U', 540,
                'W', 540,
                'l', 540,
                'u', 540,
                'w', 540,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(525);
            END_STATE();
        case 525:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 395,
                'E', 524,
                'e', 524,
                'P', 535,
                'p', 535,
                'B', 525,
                'D', 525,
                'F', 525,
                'b', 525,
                'd', 525,
                'f', 525,
                'L', 540,
                'U', 540,
                'W', 540,
                'l', 540,
                'u', 540,
                'w', 540,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(525);
            END_STATE();
        case 526:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 396,
                '.', 536,
                '+', 397,
                '-', 397,
                'E', 526,
                'e', 526,
                'P', 534,
                'p', 534,
                'B', 529,
                'D', 529,
                'F', 529,
                'b', 529,
                'd', 529,
                'f', 529,
                'L', 539,
                'U', 539,
                'W', 539,
                'l', 539,
                'u', 539,
                'w', 539,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(529);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 527:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 396,
                '.', 536,
                '+', 397,
                '-', 397,
                'E', 527,
                'e', 527,
                'P', 535,
                'p', 535,
                'B', 531,
                'D', 531,
                'F', 531,
                'b', 531,
                'd', 531,
                'f', 531,
                'L', 540,
                'U', 540,
                'W', 540,
                'l', 540,
                'u', 540,
                'w', 540,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(531);
            END_STATE();
        case 528:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 396,
                '.', 536,
                'E', 526,
                'e', 526,
                'P', 534,
                'p', 534,
                'A', 529,
                'C', 529,
                'a', 529,
                'c', 529,
                'B', 529,
                'D', 529,
                'F', 529,
                'b', 529,
                'd', 529,
                'f', 529,
                'L', 539,
                'U', 539,
                'W', 539,
                'l', 539,
                'u', 539,
                'w', 539,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(516);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 529:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 396,
                '.', 536,
                'E', 526,
                'e', 526,
                'P', 534,
                'p', 534,
                'B', 529,
                'D', 529,
                'F', 529,
                'b', 529,
                'd', 529,
                'f', 529,
                'L', 539,
                'U', 539,
                'W', 539,
                'l', 539,
                'u', 539,
                'w', 539,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(529);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 530:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 396,
                '.', 536,
                'E', 527,
                'e', 527,
                'P', 535,
                'p', 535,
                'A', 531,
                'C', 531,
                'a', 531,
                'c', 531,
                'B', 531,
                'D', 531,
                'F', 531,
                'b', 531,
                'd', 531,
                'f', 531,
                'L', 540,
                'U', 540,
                'W', 540,
                'l', 540,
                'u', 540,
                'w', 540,
            );
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(517);
            END_STATE();
        case 531:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '\'', 396,
                '.', 536,
                'E', 527,
                'e', 527,
                'P', 535,
                'p', 535,
                'B', 531,
                'D', 531,
                'F', 531,
                'b', 531,
                'd', 531,
                'f', 531,
                'L', 540,
                'U', 540,
                'W', 540,
                'l', 540,
                'u', 540,
                'w', 540,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(531);
            END_STATE();
        case 532:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '.')
                ADVANCE(393);
            if(lookahead == '0')
                ADVANCE(520);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(522);
            if(set_contains(sym_number_literal_character_set_13, 13, lookahead))
                ADVANCE(539);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 533:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '.')
                ADVANCE(393);
            if(lookahead == '0')
                ADVANCE(521);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(523);
            if(set_contains(sym_number_literal_character_set_13, 13, lookahead))
                ADVANCE(540);
            END_STATE();
        case 534:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '+', 397,
                '-', 397,
                'B', 512,
                'D', 512,
                'F', 512,
                'b', 512,
                'd', 512,
                'f', 512,
                'L', 539,
                'U', 539,
                'W', 539,
                'l', 539,
                'u', 539,
                'w', 539,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(512);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 535:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                '+', 397,
                '-', 397,
                'B', 513,
                'D', 513,
                'F', 513,
                'b', 513,
                'd', 513,
                'f', 513,
                'L', 540,
                'U', 540,
                'W', 540,
                'l', 540,
                'u', 540,
                'w', 540,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(513);
            END_STATE();
        case 536:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                'E', 524,
                'e', 524,
                'P', 535,
                'p', 535,
                'B', 525,
                'D', 525,
                'F', 525,
                'b', 525,
                'd', 525,
                'f', 525,
                'L', 540,
                'U', 540,
                'W', 540,
                'l', 540,
                'u', 540,
                'w', 540,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(525);
            END_STATE();
        case 537:
            ACCEPT_TOKEN(sym_number_literal);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(522);
            if(set_contains(sym_number_literal_character_set_13, 13, lookahead))
                ADVANCE(539);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 538:
            ACCEPT_TOKEN(sym_number_literal);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(523);
            if(set_contains(sym_number_literal_character_set_13, 13, lookahead))
                ADVANCE(540);
            END_STATE();
        case 539:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                'B', 539,
                'D', 539,
                'F', 539,
                'L', 539,
                'U', 539,
                'W', 539,
                'b', 539,
                'd', 539,
                'f', 539,
                'l', 539,
                'u', 539,
                'w', 539,
            );
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 540:
            ACCEPT_TOKEN(sym_number_literal);
            ADVANCE_MAP(
                'B', 540,
                'D', 540,
                'F', 540,
                'L', 540,
                'U', 540,
                'W', 540,
                'b', 540,
                'd', 540,
                'f', 540,
                'l', 540,
                'u', 540,
                'w', 540,
            );
            END_STATE();
        case 541:
            ACCEPT_TOKEN(aux_sym_preproc_call_token1);
            END_STATE();
        case 542:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'e')
                ADVANCE(544);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(547);
            END_STATE();
        case 543:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'e')
                ADVANCE(631);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(547);
            END_STATE();
        case 544:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'f')
                ADVANCE(545);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(547);
            END_STATE();
        case 545:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'i')
                ADVANCE(546);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(547);
            END_STATE();
        case 546:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'n')
                ADVANCE(543);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(547);
            END_STATE();
        case 547:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(547);
            END_STATE();
        case 548:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '\n')
                ADVANCE(56);
            if(lookahead == '*')
                ADVANCE(548);
            if(lookahead == '/')
                ADVANCE(857);
            if(lookahead == '\\')
                ADVANCE(554);
            if(lookahead != 0)
                ADVANCE(549);
            END_STATE();
        case 549:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '\n')
                ADVANCE(56);
            if(lookahead == '*')
                ADVANCE(548);
            if(lookahead == '/')
                ADVANCE(57);
            if(lookahead == '\\')
                ADVANCE(554);
            if(lookahead != 0)
                ADVANCE(549);
            END_STATE();
        case 550:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '\n')
                ADVANCE(864);
            if(lookahead == '\r')
                ADVANCE(858);
            if(lookahead == '/')
                ADVANCE(861);
            if(lookahead == '\\')
                ADVANCE(860);
            if(lookahead != 0)
                ADVANCE(862);
            END_STATE();
        case 551:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '\n')
                SKIP(72);
            if(lookahead == '\r')
                ADVANCE(552);
            if(lookahead == '/')
                ADVANCE(398);
            if(lookahead == '\\')
                ADVANCE(553);
            if(lookahead != 0)
                ADVANCE(558);
            END_STATE();
        case 552:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '\n')
                SKIP(72);
            if(lookahead == '/')
                ADVANCE(398);
            if(lookahead == '\\')
                ADVANCE(553);
            if(lookahead != 0)
                ADVANCE(558);
            END_STATE();
        case 553:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '\r')
                ADVANCE(559);
            if(lookahead == '/')
                ADVANCE(398);
            if(lookahead == '\\')
                ADVANCE(553);
            if(lookahead != 0)
                ADVANCE(558);
            END_STATE();
        case 554:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '\r')
                ADVANCE(557);
            if(lookahead == '*')
                ADVANCE(548);
            if(lookahead == '/')
                ADVANCE(57);
            if(lookahead == '\\')
                ADVANCE(554);
            if(lookahead != 0)
                ADVANCE(549);
            END_STATE();
        case 555:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '\r')
                ADVANCE(863);
            if(lookahead == '/')
                ADVANCE(861);
            if(lookahead == '\\')
                ADVANCE(860);
            if(lookahead != 0)
                ADVANCE(862);
            END_STATE();
        case 556:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '*')
                ADVANCE(549);
            if(lookahead == '/')
                ADVANCE(861);
            if(lookahead == '\\')
                ADVANCE(553);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(558);
            END_STATE();
        case 557:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '*')
                ADVANCE(548);
            if(lookahead == '/')
                ADVANCE(57);
            if(lookahead == '\\')
                ADVANCE(554);
            if(lookahead != 0)
                ADVANCE(549);
            END_STATE();
        case 558:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(398);
            if(lookahead == '\\')
                ADVANCE(553);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(558);
            END_STATE();
        case 559:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(398);
            if(lookahead == '\\')
                ADVANCE(553);
            if(lookahead != 0)
                ADVANCE(558);
            END_STATE();
        case 560:
            ACCEPT_TOKEN(anon_sym_exception);
            END_STATE();
        case 561:
            ACCEPT_TOKEN(anon_sym_exception);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 562:
            ACCEPT_TOKEN(anon_sym_LBRACE);
            END_STATE();
        case 563:
            ACCEPT_TOKEN(anon_sym_RBRACE);
            END_STATE();
        case 564:
            ACCEPT_TOKEN(anon_sym_interface);
            END_STATE();
        case 565:
            ACCEPT_TOKEN(anon_sym_interface);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 566:
            ACCEPT_TOKEN(anon_sym_local);
            END_STATE();
        case 567:
            ACCEPT_TOKEN(anon_sym_COLON);
            END_STATE();
        case 568:
            ACCEPT_TOKEN(anon_sym_COLON);
            if(lookahead == ':')
                ADVANCE(449);
            END_STATE();
        case 569:
            ACCEPT_TOKEN(anon_sym_SEMI);
            END_STATE();
        case 570:
            ACCEPT_TOKEN(anon_sym_void);
            END_STATE();
        case 571:
            ACCEPT_TOKEN(anon_sym_void);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 572:
            ACCEPT_TOKEN(anon_sym_in);
            END_STATE();
        case 573:
            ACCEPT_TOKEN(anon_sym_in);
            if(lookahead == 'o')
                ADVANCE(373);
            END_STATE();
        case 574:
            ACCEPT_TOKEN(anon_sym_out);
            END_STATE();
        case 575:
            ACCEPT_TOKEN(anon_sym_inout);
            END_STATE();
        case 576:
            ACCEPT_TOKEN(anon_sym_raises);
            END_STATE();
        case 577:
            ACCEPT_TOKEN(anon_sym_readonly);
            END_STATE();
        case 578:
            ACCEPT_TOKEN(anon_sym_readonly);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 579:
            ACCEPT_TOKEN(anon_sym_attribute);
            END_STATE();
        case 580:
            ACCEPT_TOKEN(anon_sym_attribute);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 581:
            ACCEPT_TOKEN(anon_sym_getraises);
            END_STATE();
        case 582:
            ACCEPT_TOKEN(anon_sym_setraises);
            END_STATE();
        case 583:
            ACCEPT_TOKEN(anon_sym_bitset);
            END_STATE();
        case 584:
            ACCEPT_TOKEN(anon_sym_bitset);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 585:
            ACCEPT_TOKEN(anon_sym_bitfield);
            END_STATE();
        case 586:
            ACCEPT_TOKEN(anon_sym_bitmask);
            END_STATE();
        case 587:
            ACCEPT_TOKEN(anon_sym_bitmask);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 588:
            ACCEPT_TOKEN(anon_sym_ATannotation);
            END_STATE();
        case 589:
            ACCEPT_TOKEN(anon_sym_default);
            END_STATE();
        case 590:
            ACCEPT_TOKEN(anon_sym_default);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 591:
            ACCEPT_TOKEN(anon_sym_AT);
            END_STATE();
        case 592:
            ACCEPT_TOKEN(anon_sym_AT);
            if(lookahead == 'a')
                ADVANCE(258);
            if(lookahead == 'i')
                ADVANCE(193);
            END_STATE();
        case 593:
            ACCEPT_TOKEN(anon_sym_AT);
            if(lookahead == 'i')
                ADVANCE(193);
            END_STATE();
        case 594:
            ACCEPT_TOKEN(anon_sym_EQ);
            END_STATE();
        case 595:
            ACCEPT_TOKEN(anon_sym_module);
            END_STATE();
        case 596:
            ACCEPT_TOKEN(anon_sym_typename);
            END_STATE();
        case 597:
            ACCEPT_TOKEN(anon_sym_typename);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 598:
            ACCEPT_TOKEN(anon_sym_valuetype);
            END_STATE();
        case 599:
            ACCEPT_TOKEN(anon_sym_valuetype);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 600:
            ACCEPT_TOKEN(anon_sym_eventtype);
            END_STATE();
        case 601:
            ACCEPT_TOKEN(anon_sym_eventtype);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 602:
            ACCEPT_TOKEN(anon_sym_struct);
            END_STATE();
        case 603:
            ACCEPT_TOKEN(anon_sym_struct);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 604:
            ACCEPT_TOKEN(anon_sym_union);
            END_STATE();
        case 605:
            ACCEPT_TOKEN(anon_sym_union);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 606:
            ACCEPT_TOKEN(anon_sym_enum);
            END_STATE();
        case 607:
            ACCEPT_TOKEN(anon_sym_enum);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 608:
            ACCEPT_TOKEN(anon_sym_const);
            END_STATE();
        case 609:
            ACCEPT_TOKEN(anon_sym_const);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 610:
            ACCEPT_TOKEN(anon_sym_alias);
            END_STATE();
        case 611:
            ACCEPT_TOKEN(anon_sym_supports);
            END_STATE();
        case 612:
            ACCEPT_TOKEN(anon_sym_public);
            END_STATE();
        case 613:
            ACCEPT_TOKEN(anon_sym_public);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 614:
            ACCEPT_TOKEN(anon_sym_private);
            END_STATE();
        case 615:
            ACCEPT_TOKEN(anon_sym_private);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 616:
            ACCEPT_TOKEN(anon_sym_factory);
            END_STATE();
        case 617:
            ACCEPT_TOKEN(anon_sym_factory);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 618:
            ACCEPT_TOKEN(anon_sym_typedef);
            END_STATE();
        case 619:
            ACCEPT_TOKEN(anon_sym_typedef);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 620:
            ACCEPT_TOKEN(anon_sym_LBRACK);
            END_STATE();
        case 621:
            ACCEPT_TOKEN(anon_sym_RBRACK);
            END_STATE();
        case 622:
            ACCEPT_TOKEN(anon_sym_ATdefault_literal);
            END_STATE();
        case 623:
            ACCEPT_TOKEN(anon_sym_ATignore_literal_names);
            END_STATE();
        case 624:
            ACCEPT_TOKEN(anon_sym_switch);
            END_STATE();
        case 625:
            ACCEPT_TOKEN(anon_sym_switch);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 626:
            ACCEPT_TOKEN(anon_sym_case);
            END_STATE();
        case 627:
            ACCEPT_TOKEN(anon_sym_case);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 628:
            ACCEPT_TOKEN(anon_sym_native);
            END_STATE();
        case 629:
            ACCEPT_TOKEN(anon_sym_native);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 630:
            ACCEPT_TOKEN(anon_sym_POUNDdefine);
            END_STATE();
        case 631:
            ACCEPT_TOKEN(anon_sym_POUNDdefine);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(547);
            END_STATE();
        case 632:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '\n')
                ADVANCE(56);
            if(lookahead == '*')
                ADVANCE(632);
            if(lookahead == '/')
                ADVANCE(640);
            if(lookahead != 0)
                ADVANCE(633);
            END_STATE();
        case 633:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '\n')
                ADVANCE(56);
            if(lookahead == '*')
                ADVANCE(632);
            if(lookahead != 0)
                ADVANCE(633);
            END_STATE();
        case 634:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '\n')
                ADVANCE(864);
            if(lookahead == '\r')
                ADVANCE(635);
            if(lookahead == '\\')
                ADVANCE(634);
            if(lookahead != 0)
                ADVANCE(639);
            END_STATE();
        case 635:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '\n')
                ADVANCE(864);
            if(lookahead == '\\')
                ADVANCE(634);
            if(lookahead != 0)
                ADVANCE(639);
            END_STATE();
        case 636:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '\r')
                ADVANCE(640);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(640);
            END_STATE();
        case 637:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '*')
                ADVANCE(633);
            if(lookahead == '/')
                ADVANCE(639);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(640);
            END_STATE();
        case 638:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '/')
                ADVANCE(637);
            if(lookahead == '\\')
                ADVANCE(636);
            if(lookahead == '\t' ||
               (0x0b <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(638);
            if(lookahead != 0 &&
               (lookahead < '\t' || '\r' < lookahead))
                ADVANCE(640);
            END_STATE();
        case 639:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '\\')
                ADVANCE(634);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(639);
            END_STATE();
        case 640:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(640);
            END_STATE();
        case 641:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == ' ')
                ADVANCE(241);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 642:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '.')
                ADVANCE(393);
            if(lookahead == '0')
                ADVANCE(514);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(516);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(529);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 643:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '1')
                ADVANCE(650);
            if(lookahead == '3')
                ADVANCE(646);
            if(lookahead == '6')
                ADVANCE(648);
            if(lookahead == '8')
                ADVANCE(430);
            if(lookahead == 'e')
                ADVANCE(809);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 644:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '1')
                ADVANCE(650);
            if(lookahead == '3')
                ADVANCE(646);
            if(lookahead == '6')
                ADVANCE(648);
            if(lookahead == '8')
                ADVANCE(430);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 645:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '1')
                ADVANCE(651);
            if(lookahead == '3')
                ADVANCE(647);
            if(lookahead == '6')
                ADVANCE(649);
            if(lookahead == '8')
                ADVANCE(422);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 646:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '2')
                ADVANCE(417);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 647:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '2')
                ADVANCE(436);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 648:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '4')
                ADVANCE(420);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 649:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '4')
                ADVANCE(439);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 650:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '6')
                ADVANCE(411);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 651:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '6')
                ADVANCE(433);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 652:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'A')
                ADVANCE(655);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('B' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 653:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'E')
                ADVANCE(508);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 654:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'E')
                ADVANCE(510);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 655:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'L')
                ADVANCE(657);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 656:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'R')
                ADVANCE(658);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 657:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'S')
                ADVANCE(654);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 658:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'U')
                ADVANCE(653);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 659:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(792);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 660:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(691);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 661:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(810);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 662:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(758);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 663:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(801);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 664:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(833);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 665:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(813);
            if(lookahead == 'h')
                ADVANCE(663);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 666:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(839);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 667:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(802);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 668:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(755);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 669:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(817);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 670:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(762);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 671:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(830);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 672:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(683);
            if(lookahead == 'i')
                ADVANCE(847);
            if(lookahead == 'l')
                ADVANCE(790);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 673:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(686);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 674:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(751);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 675:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(752);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 676:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(840);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 677:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(731);
            if(lookahead == 's')
                ADVANCE(834);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 678:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(731);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 679:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(613);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 680:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(707);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 681:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(727);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 682:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(826);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 683:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(828);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 684:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(699);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 685:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(821);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 686:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(704);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 687:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(571);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 688:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(426);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 689:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(641);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 690:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(697);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 691:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(787);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 692:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(798);
            if(lookahead == 'h')
                ADVANCE(785);
            if(lookahead == 't')
                ADVANCE(800);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 693:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(798);
            if(lookahead == 'h')
                ADVANCE(785);
            if(lookahead == 't')
                ADVANCE(805);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 694:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(798);
            if(lookahead == 'h')
                ADVANCE(785);
            if(lookahead == 't')
                ADVANCE(807);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 695:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(443);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 696:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(629);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 697:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(719);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 698:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(615);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 699:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(462);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 700:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(580);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 701:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(627);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 702:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(597);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 703:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(601);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 704:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(565);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 705:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(599);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 706:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(720);
            if(lookahead == 'o')
                ADVANCE(841);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 707:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(793);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 708:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(688);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 709:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(660);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 710:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(690);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 711:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(689);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 712:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(670);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 713:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(778);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 714:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(818);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 715:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(820);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 716:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(774);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 717:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(776);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 718:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(836);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 719:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'f')
                ADVANCE(619);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 720:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'f')
                ADVANCE(666);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 721:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'f')
                ADVANCE(673);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 722:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(413);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 723:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(451);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 724:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(453);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 725:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(415);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 726:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(779);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 727:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(625);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 728:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(663);
            if(lookahead == 'o')
                ADVANCE(759);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 729:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(663);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 730:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(785);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 731:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(667);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 732:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(847);
            if(lookahead == 'l')
                ADVANCE(790);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 733:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(845);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 734:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(814);
            if(lookahead == 'o')
                ADVANCE(781);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 735:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(676);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 736:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(726);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 737:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(844);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 738:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(687);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 739:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(679);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 740:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(770);
            if(lookahead == 'u')
                ADVANCE(685);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 741:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(770);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 742:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(772);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 743:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(827);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 744:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(773);
            if(lookahead == 'n')
                ADVANCE(746);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 745:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(773);
            if(lookahead == 'n')
                ADVANCE(811);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 746:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(786);
            if(lookahead == 's')
                ADVANCE(736);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 747:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(789);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 748:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'k')
                ADVANCE(587);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 749:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(850);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 750:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(790);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 751:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(739);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 752:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(695);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 753:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(822);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 754:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(712);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 755:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(843);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 756:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'm')
                ADVANCE(607);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 757:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'm')
                ADVANCE(661);
            if(lookahead == 's')
                ADVANCE(715);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 758:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'm')
                ADVANCE(702);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 759:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(812);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 760:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(722);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 761:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(605);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 762:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(424);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 763:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(561);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 764:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(848);
            if(lookahead == 't')
                ADVANCE(824);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 765:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(848);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 766:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(837);
            if(lookahead == 'v')
                ADVANCE(717);
            if(lookahead == 'x')
                ADVANCE(680);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 767:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(837);
            if(lookahead == 'x')
                ADVANCE(680);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 768:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(837);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 769:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(815);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 770:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(723);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 771:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(749);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 772:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(724);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 773:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(825);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 774:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(662);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 775:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(823);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 776:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(832);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 777:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(725);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 778:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(684);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 779:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(711);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 780:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(841);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 781:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(754);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 782:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(738);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 783:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(760);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 784:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(781);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 785:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(808);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 786:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(761);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 787:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(771);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 788:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(803);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 789:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(763);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 790:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(669);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 791:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(777);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 792:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(464);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 793:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(829);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 794:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(703);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 795:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(705);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 796:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(710);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 797:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(716);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 798:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'q')
                ADVANCE(838);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 799:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(733);
            if(lookahead == 'u')
                ADVANCE(674);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 800:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(740);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 801:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(446);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 802:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(448);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 803:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(849);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 804:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(735);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 805:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(842);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 806:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(742);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 807:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(741);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 808:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(819);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 809:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(721);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 810:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(748);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 811:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(736);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 812:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(816);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 813:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(701);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 814:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(757);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 815:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(644);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 816:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(609);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 817:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(441);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 818:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(428);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 819:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(409);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 820:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(584);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 821:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(603);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 822:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(590);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 823:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(643);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 824:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(804);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 825:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(645);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 826:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(714);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 827:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(681);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 828:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(788);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 829:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(747);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 830:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(698);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 831:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(700);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 832:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(835);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 833:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(737);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 834:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(806);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 835:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(853);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 836:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(854);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 837:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(756);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 838:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(713);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 839:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(753);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 840:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(831);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 841:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(675);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 842:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(685);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 843:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(718);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 844:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'v')
                ADVANCE(696);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 845:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'v')
                ADVANCE(671);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 846:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'w')
                ADVANCE(743);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 847:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'x')
                ADVANCE(708);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 848:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(459);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 849:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(617);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 850:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(578);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 851:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(796);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 852:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(797);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 853:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(794);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 854:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(795);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 855:
            ACCEPT_TOKEN(sym_identifier);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(529);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 856:
            ACCEPT_TOKEN(sym_identifier);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(856);
            END_STATE();
        case 857:
            ACCEPT_TOKEN(sym_comment);
            END_STATE();
        case 858:
            ACCEPT_TOKEN(sym_comment);
            if(lookahead == '\n')
                ADVANCE(864);
            if(lookahead == '/')
                ADVANCE(861);
            if(lookahead == '\\')
                ADVANCE(555);
            if(lookahead != 0)
                ADVANCE(862);
            END_STATE();
        case 859:
            ACCEPT_TOKEN(sym_comment);
            if(lookahead == '\r')
                ADVANCE(865);
            if(lookahead == '\\')
                ADVANCE(859);
            if(lookahead != 0)
                ADVANCE(864);
            END_STATE();
        case 860:
            ACCEPT_TOKEN(sym_comment);
            if(lookahead == '\r')
                ADVANCE(863);
            if(lookahead == '/')
                ADVANCE(861);
            if(lookahead == '\\')
                ADVANCE(860);
            if(lookahead != 0)
                ADVANCE(862);
            END_STATE();
        case 861:
            ACCEPT_TOKEN(sym_comment);
            if(lookahead == '*')
                ADVANCE(864);
            if(lookahead == '\\')
                ADVANCE(550);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(862);
            END_STATE();
        case 862:
            ACCEPT_TOKEN(sym_comment);
            if(lookahead == '/')
                ADVANCE(861);
            if(lookahead == '\\')
                ADVANCE(555);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(862);
            END_STATE();
        case 863:
            ACCEPT_TOKEN(sym_comment);
            if(lookahead == '/')
                ADVANCE(861);
            if(lookahead == '\\')
                ADVANCE(555);
            if(lookahead != 0)
                ADVANCE(862);
            END_STATE();
        case 864:
            ACCEPT_TOKEN(sym_comment);
            if(lookahead == '\\')
                ADVANCE(45);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(864);
            END_STATE();
        case 865:
            ACCEPT_TOKEN(sym_comment);
            if(lookahead == '\\')
                ADVANCE(45);
            if(lookahead != 0)
                ADVANCE(864);
            END_STATE();
        default:
            return false;
    }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
    [0] = { .lex_state = 0, .external_lex_state = 1 },
    [1] = { .lex_state = 405 },
    [2] = { .lex_state = 58 },
    [3] = { .lex_state = 58 },
    [4] = { .lex_state = 58 },
    [5] = { .lex_state = 60 },
    [6] = { .lex_state = 60 },
    [7] = { .lex_state = 60 },
    [8] = { .lex_state = 60 },
    [9] = { .lex_state = 60 },
    [10] = { .lex_state = 47 },
    [11] = { .lex_state = 47 },
    [12] = { .lex_state = 61 },
    [13] = { .lex_state = 62 },
    [14] = { .lex_state = 63 },
    [15] = { .lex_state = 63 },
    [16] = { .lex_state = 63 },
    [17] = { .lex_state = 52 },
    [18] = { .lex_state = 52 },
    [19] = { .lex_state = 52 },
    [20] = { .lex_state = 52 },
    [21] = { .lex_state = 52 },
    [22] = { .lex_state = 52 },
    [23] = { .lex_state = 52 },
    [24] = { .lex_state = 52 },
    [25] = { .lex_state = 52 },
    [26] = { .lex_state = 52 },
    [27] = { .lex_state = 52 },
    [28] = { .lex_state = 64 },
    [29] = { .lex_state = 52 },
    [30] = { .lex_state = 52 },
    [31] = { .lex_state = 64 },
    [32] = { .lex_state = 52 },
    [33] = { .lex_state = 406 },
    [34] = { .lex_state = 52 },
    [35] = { .lex_state = 52 },
    [36] = { .lex_state = 406 },
    [37] = { .lex_state = 52 },
    [38] = { .lex_state = 52 },
    [39] = { .lex_state = 405 },
    [40] = { .lex_state = 406 },
    [41] = { .lex_state = 52 },
    [42] = { .lex_state = 52 },
    [43] = { .lex_state = 406 },
    [44] = { .lex_state = 58 },
    [45] = { .lex_state = 58 },
    [46] = { .lex_state = 406 },
    [47] = { .lex_state = 406 },
    [48] = { .lex_state = 58 },
    [49] = { .lex_state = 406 },
    [50] = { .lex_state = 58 },
    [51] = { .lex_state = 58 },
    [52] = { .lex_state = 406 },
    [53] = { .lex_state = 58 },
    [54] = { .lex_state = 60 },
    [55] = { .lex_state = 65 },
    [56] = { .lex_state = 65 },
    [57] = { .lex_state = 61 },
    [58] = { .lex_state = 61 },
    [59] = { .lex_state = 63 },
    [60] = { .lex_state = 63 },
    [61] = { .lex_state = 63 },
    [62] = { .lex_state = 63 },
    [63] = { .lex_state = 52 },
    [64] = { .lex_state = 52 },
    [65] = { .lex_state = 52 },
    [66] = { .lex_state = 66 },
    [67] = { .lex_state = 52 },
    [68] = { .lex_state = 52 },
    [69] = { .lex_state = 52 },
    [70] = { .lex_state = 52 },
    [71] = { .lex_state = 52 },
    [72] = { .lex_state = 52 },
    [73] = { .lex_state = 52 },
    [74] = { .lex_state = 52 },
    [75] = { .lex_state = 48 },
    [76] = { .lex_state = 48 },
    [77] = { .lex_state = 48 },
    [78] = { .lex_state = 48 },
    [79] = { .lex_state = 48 },
    [80] = { .lex_state = 48 },
    [81] = { .lex_state = 48 },
    [82] = { .lex_state = 48 },
    [83] = { .lex_state = 48 },
    [84] = { .lex_state = 48 },
    [85] = { .lex_state = 49 },
    [86] = { .lex_state = 49 },
    [87] = { .lex_state = 405 },
    [88] = { .lex_state = 48 },
    [89] = { .lex_state = 49 },
    [90] = { .lex_state = 48 },
    [91] = { .lex_state = 48 },
    [92] = { .lex_state = 48 },
    [93] = { .lex_state = 48 },
    [94] = { .lex_state = 48 },
    [95] = { .lex_state = 48 },
    [96] = { .lex_state = 48 },
    [97] = { .lex_state = 48 },
    [98] = { .lex_state = 48 },
    [99] = { .lex_state = 48 },
    [100] = { .lex_state = 405 },
    [101] = { .lex_state = 48 },
    [102] = { .lex_state = 406 },
    [103] = { .lex_state = 406 },
    [104] = { .lex_state = 405 },
    [105] = { .lex_state = 406 },
    [106] = { .lex_state = 48 },
    [107] = { .lex_state = 405 },
    [108] = { .lex_state = 406 },
    [109] = { .lex_state = 405 },
    [110] = { .lex_state = 405 },
    [111] = { .lex_state = 406 },
    [112] = { .lex_state = 406 },
    [113] = { .lex_state = 406 },
    [114] = { .lex_state = 406 },
    [115] = { .lex_state = 406 },
    [116] = { .lex_state = 406 },
    [117] = { .lex_state = 406 },
    [118] = { .lex_state = 406 },
    [119] = { .lex_state = 406 },
    [120] = { .lex_state = 406 },
    [121] = { .lex_state = 406 },
    [122] = { .lex_state = 406 },
    [123] = { .lex_state = 406 },
    [124] = { .lex_state = 406 },
    [125] = { .lex_state = 48 },
    [126] = { .lex_state = 405 },
    [127] = { .lex_state = 406 },
    [128] = { .lex_state = 406 },
    [129] = { .lex_state = 405 },
    [130] = { .lex_state = 406 },
    [131] = { .lex_state = 406 },
    [132] = { .lex_state = 50 },
    [133] = { .lex_state = 48 },
    [134] = { .lex_state = 50 },
    [135] = { .lex_state = 49 },
    [136] = { .lex_state = 405 },
    [137] = { .lex_state = 50 },
    [138] = { .lex_state = 50 },
    [139] = { .lex_state = 405 },
    [140] = { .lex_state = 50 },
    [141] = { .lex_state = 49 },
    [142] = { .lex_state = 50 },
    [143] = { .lex_state = 49 },
    [144] = { .lex_state = 51 },
    [145] = { .lex_state = 405 },
    [146] = { .lex_state = 405 },
    [147] = { .lex_state = 405 },
    [148] = { .lex_state = 405 },
    [149] = { .lex_state = 405 },
    [150] = { .lex_state = 67 },
    [151] = { .lex_state = 51 },
    [152] = { .lex_state = 51 },
    [153] = { .lex_state = 405 },
    [154] = { .lex_state = 51 },
    [155] = { .lex_state = 51 },
    [156] = { .lex_state = 67 },
    [157] = { .lex_state = 51 },
    [158] = { .lex_state = 51 },
    [159] = { .lex_state = 49 },
    [160] = { .lex_state = 51 },
    [161] = { .lex_state = 51 },
    [162] = { .lex_state = 51 },
    [163] = { .lex_state = 405 },
    [164] = { .lex_state = 49 },
    [165] = { .lex_state = 50 },
    [166] = { .lex_state = 51 },
    [167] = { .lex_state = 405 },
    [168] = { .lex_state = 405 },
    [169] = { .lex_state = 405 },
    [170] = { .lex_state = 51 },
    [171] = { .lex_state = 67 },
    [172] = { .lex_state = 406 },
    [173] = { .lex_state = 405 },
    [174] = { .lex_state = 405 },
    [175] = { .lex_state = 51 },
    [176] = { .lex_state = 51 },
    [177] = { .lex_state = 51 },
    [178] = { .lex_state = 405 },
    [179] = { .lex_state = 51 },
    [180] = { .lex_state = 51 },
    [181] = { .lex_state = 51 },
    [182] = { .lex_state = 51 },
    [183] = { .lex_state = 51 },
    [184] = { .lex_state = 0 },
    [185] = { .lex_state = 405 },
    [186] = { .lex_state = 67 },
    [187] = { .lex_state = 67 },
    [188] = { .lex_state = 405 },
    [189] = { .lex_state = 51 },
    [190] = { .lex_state = 405 },
    [191] = { .lex_state = 51 },
    [192] = { .lex_state = 51 },
    [193] = { .lex_state = 406 },
    [194] = { .lex_state = 51 },
    [195] = { .lex_state = 51 },
    [196] = { .lex_state = 51 },
    [197] = { .lex_state = 51 },
    [198] = { .lex_state = 51 },
    [199] = { .lex_state = 51 },
    [200] = { .lex_state = 67 },
    [201] = { .lex_state = 53 },
    [202] = { .lex_state = 51 },
    [203] = { .lex_state = 51 },
    [204] = { .lex_state = 51 },
    [205] = { .lex_state = 51 },
    [206] = { .lex_state = 0 },
    [207] = { .lex_state = 51 },
    [208] = { .lex_state = 51 },
    [209] = { .lex_state = 51 },
    [210] = { .lex_state = 51 },
    [211] = { .lex_state = 0 },
    [212] = { .lex_state = 51 },
    [213] = { .lex_state = 51 },
    [214] = { .lex_state = 51 },
    [215] = { .lex_state = 0 },
    [216] = { .lex_state = 0 },
    [217] = { .lex_state = 58 },
    [218] = { .lex_state = 51 },
    [219] = { .lex_state = 51 },
    [220] = { .lex_state = 0 },
    [221] = { .lex_state = 405 },
    [222] = { .lex_state = 0 },
    [223] = { .lex_state = 0 },
    [224] = { .lex_state = 51 },
    [225] = { .lex_state = 58 },
    [226] = { .lex_state = 58 },
    [227] = { .lex_state = 51 },
    [228] = { .lex_state = 0 },
    [229] = { .lex_state = 51 },
    [230] = { .lex_state = 58 },
    [231] = { .lex_state = 68 },
    [232] = { .lex_state = 51 },
    [233] = { .lex_state = 405 },
    [234] = { .lex_state = 0 },
    [235] = { .lex_state = 0 },
    [236] = { .lex_state = 51 },
    [237] = { .lex_state = 405 },
    [238] = { .lex_state = 406 },
    [239] = { .lex_state = 405 },
    [240] = { .lex_state = 0 },
    [241] = { .lex_state = 51 },
    [242] = { .lex_state = 405 },
    [243] = { .lex_state = 0 },
    [244] = { .lex_state = 0 },
    [245] = { .lex_state = 0 },
    [246] = { .lex_state = 58 },
    [247] = { .lex_state = 0 },
    [248] = { .lex_state = 51 },
    [249] = { .lex_state = 51 },
    [250] = { .lex_state = 0 },
    [251] = { .lex_state = 405 },
    [252] = { .lex_state = 58 },
    [253] = { .lex_state = 51 },
    [254] = { .lex_state = 0 },
    [255] = { .lex_state = 0 },
    [256] = { .lex_state = 0 },
    [257] = { .lex_state = 0 },
    [258] = { .lex_state = 405 },
    [259] = { .lex_state = 51 },
    [260] = { .lex_state = 0 },
    [261] = { .lex_state = 51 },
    [262] = { .lex_state = 405 },
    [263] = { .lex_state = 405 },
    [264] = { .lex_state = 0 },
    [265] = { .lex_state = 58 },
    [266] = { .lex_state = 0 },
    [267] = { .lex_state = 405 },
    [268] = { .lex_state = 0 },
    [269] = { .lex_state = 0 },
    [270] = { .lex_state = 0 },
    [271] = { .lex_state = 58 },
    [272] = { .lex_state = 58 },
    [273] = { .lex_state = 0 },
    [274] = { .lex_state = 0 },
    [275] = { .lex_state = 0 },
    [276] = { .lex_state = 0 },
    [277] = { .lex_state = 0 },
    [278] = { .lex_state = 58 },
    [279] = { .lex_state = 51 },
    [280] = { .lex_state = 58 },
    [281] = { .lex_state = 51 },
    [282] = { .lex_state = 51 },
    [283] = { .lex_state = 405 },
    [284] = { .lex_state = 0 },
    [285] = { .lex_state = 51 },
    [286] = { .lex_state = 51 },
    [287] = { .lex_state = 51 },
    [288] = { .lex_state = 51 },
    [289] = { .lex_state = 0 },
    [290] = { .lex_state = 51 },
    [291] = { .lex_state = 0 },
    [292] = { .lex_state = 51 },
    [293] = { .lex_state = 51 },
    [294] = { .lex_state = 51 },
    [295] = { .lex_state = 0 },
    [296] = { .lex_state = 0 },
    [297] = { .lex_state = 51 },
    [298] = { .lex_state = 51 },
    [299] = { .lex_state = 0 },
    [300] = { .lex_state = 405 },
    [301] = { .lex_state = 51 },
    [302] = { .lex_state = 51 },
    [303] = { .lex_state = 58 },
    [304] = { .lex_state = 51 },
    [305] = { .lex_state = 58 },
    [306] = { .lex_state = 0 },
    [307] = { .lex_state = 0 },
    [308] = { .lex_state = 405 },
    [309] = { .lex_state = 406 },
    [310] = { .lex_state = 405 },
    [311] = { .lex_state = 51 },
    [312] = { .lex_state = 58 },
    [313] = { .lex_state = 51 },
    [314] = { .lex_state = 0 },
    [315] = { .lex_state = 51 },
    [316] = { .lex_state = 51 },
    [317] = { .lex_state = 51 },
    [318] = { .lex_state = 0 },
    [319] = { .lex_state = 51 },
    [320] = { .lex_state = 0 },
    [321] = { .lex_state = 0 },
    [322] = { .lex_state = 51 },
    [323] = { .lex_state = 0 },
    [324] = { .lex_state = 0 },
    [325] = { .lex_state = 0 },
    [326] = { .lex_state = 51 },
    [327] = { .lex_state = 58 },
    [328] = { .lex_state = 405 },
    [329] = { .lex_state = 405 },
    [330] = { .lex_state = 51 },
    [331] = { .lex_state = 51 },
    [332] = { .lex_state = 0 },
    [333] = { .lex_state = 51 },
    [334] = { .lex_state = 51 },
    [335] = { .lex_state = 405 },
    [336] = { .lex_state = 405 },
    [337] = { .lex_state = 58 },
    [338] = { .lex_state = 51 },
    [339] = { .lex_state = 51 },
    [340] = { .lex_state = 53 },
    [341] = { .lex_state = 51 },
    [342] = { .lex_state = 51 },
    [343] = { .lex_state = 0 },
    [344] = { .lex_state = 0 },
    [345] = { .lex_state = 405 },
    [346] = { .lex_state = 0 },
    [347] = { .lex_state = 35 },
    [348] = { .lex_state = 0 },
    [349] = { .lex_state = 67 },
    [350] = { .lex_state = 51 },
    [351] = { .lex_state = 51 },
    [352] = { .lex_state = 406 },
    [353] = { .lex_state = 0 },
    [354] = { .lex_state = 0 },
    [355] = { .lex_state = 51 },
    [356] = { .lex_state = 58 },
    [357] = { .lex_state = 51 },
    [358] = { .lex_state = 0 },
    [359] = { .lex_state = 58 },
    [360] = { .lex_state = 405 },
    [361] = { .lex_state = 51 },
    [362] = { .lex_state = 51 },
    [363] = { .lex_state = 51 },
    [364] = { .lex_state = 51 },
    [365] = { .lex_state = 0 },
    [366] = { .lex_state = 51 },
    [367] = { .lex_state = 58 },
    [368] = { .lex_state = 0 },
    [369] = { .lex_state = 51 },
    [370] = { .lex_state = 58 },
    [371] = { .lex_state = 0 },
    [372] = { .lex_state = 51 },
    [373] = { .lex_state = 51 },
    [374] = { .lex_state = 51 },
    [375] = { .lex_state = 0 },
    [376] = { .lex_state = 0 },
    [377] = { .lex_state = 0 },
    [378] = { .lex_state = 51 },
    [379] = { .lex_state = 0 },
    [380] = { .lex_state = 51 },
    [381] = { .lex_state = 0 },
    [382] = { .lex_state = 0 },
    [383] = { .lex_state = 0 },
    [384] = { .lex_state = 69 },
    [385] = { .lex_state = 70 },
    [386] = { .lex_state = 0 },
    [387] = { .lex_state = 0 },
    [388] = { .lex_state = 51 },
    [389] = { .lex_state = 0 },
    [390] = { .lex_state = 58 },
    [391] = { .lex_state = 0 },
    [392] = { .lex_state = 0 },
    [393] = { .lex_state = 0 },
    [394] = { .lex_state = 51 },
    [395] = { .lex_state = 51 },
    [396] = { .lex_state = 58 },
    [397] = { .lex_state = 0 },
    [398] = { .lex_state = 0 },
    [399] = { .lex_state = 0 },
    [400] = { .lex_state = 0 },
    [401] = { .lex_state = 0 },
    [402] = { .lex_state = 58 },
    [403] = { .lex_state = 0 },
    [404] = { .lex_state = 0 },
    [405] = { .lex_state = 0 },
    [406] = { .lex_state = 0 },
    [407] = { .lex_state = 0 },
    [408] = { .lex_state = 0 },
    [409] = { .lex_state = 0 },
    [410] = { .lex_state = 0 },
    [411] = { .lex_state = 0 },
    [412] = { .lex_state = 0 },
    [413] = { .lex_state = 0 },
    [414] = { .lex_state = 0 },
    [415] = { .lex_state = 0 },
    [416] = { .lex_state = 0 },
    [417] = { .lex_state = 51 },
    [418] = { .lex_state = 58 },
    [419] = { .lex_state = 0 },
    [420] = { .lex_state = 51 },
    [421] = { .lex_state = 0 },
    [422] = { .lex_state = 0 },
    [423] = { .lex_state = 0 },
    [424] = { .lex_state = 58 },
    [425] = { .lex_state = 0 },
    [426] = { .lex_state = 0 },
    [427] = { .lex_state = 0 },
    [428] = { .lex_state = 0 },
    [429] = { .lex_state = 405 },
    [430] = { .lex_state = 0 },
    [431] = { .lex_state = 51 },
    [432] = { .lex_state = 0 },
    [433] = { .lex_state = 0 },
    [434] = { .lex_state = 0 },
    [435] = { .lex_state = 0 },
    [436] = { .lex_state = 0 },
    [437] = { .lex_state = 0 },
    [438] = { .lex_state = 0 },
    [439] = { .lex_state = 0 },
    [440] = { .lex_state = 0 },
    [441] = { .lex_state = 0 },
    [442] = { .lex_state = 0 },
    [443] = { .lex_state = 0 },
    [444] = { .lex_state = 51 },
    [445] = { .lex_state = 0 },
    [446] = { .lex_state = 58 },
    [447] = { .lex_state = 58 },
    [448] = { .lex_state = 51 },
    [449] = { .lex_state = 0 },
    [450] = { .lex_state = 51 },
    [451] = { .lex_state = 0 },
    [452] = { .lex_state = 0 },
    [453] = { .lex_state = 58 },
    [454] = { .lex_state = 406 },
    [455] = { .lex_state = 51 },
    [456] = { .lex_state = 0 },
    [457] = { .lex_state = 0 },
    [458] = { .lex_state = 58 },
    [459] = { .lex_state = 58 },
    [460] = { .lex_state = 58 },
    [461] = { .lex_state = 0 },
    [462] = { .lex_state = 0 },
    [463] = { .lex_state = 51 },
    [464] = { .lex_state = 0 },
    [465] = { .lex_state = 70 },
    [466] = { .lex_state = 69 },
    [467] = { .lex_state = 0 },
    [468] = { .lex_state = 0 },
    [469] = { .lex_state = 58 },
    [470] = { .lex_state = 0 },
    [471] = { .lex_state = 0 },
    [472] = { .lex_state = 0 },
    [473] = { .lex_state = 0 },
    [474] = { .lex_state = 51 },
    [475] = { .lex_state = 406 },
    [476] = { .lex_state = 51 },
    [477] = { .lex_state = 0 },
    [478] = { .lex_state = 51 },
    [479] = { .lex_state = 0 },
    [480] = { .lex_state = 0 },
    [481] = { .lex_state = 51 },
    [482] = { .lex_state = 0 },
    [483] = { .lex_state = 0 },
    [484] = { .lex_state = 0 },
    [485] = { .lex_state = 0 },
    [486] = { .lex_state = 0 },
    [487] = { .lex_state = 58 },
    [488] = { .lex_state = 51 },
    [489] = { .lex_state = 0 },
    [490] = { .lex_state = 0 },
    [491] = { .lex_state = 0 },
    [492] = { .lex_state = 36 },
    [493] = { .lex_state = 405 },
    [494] = { .lex_state = 0 },
    [495] = { .lex_state = 0 },
    [496] = { .lex_state = 51 },
    [497] = { .lex_state = 0 },
    [498] = { .lex_state = 51 },
    [499] = { .lex_state = 0 },
    [500] = { .lex_state = 0 },
    [501] = { .lex_state = 0 },
    [502] = { .lex_state = 0 },
    [503] = { .lex_state = 0 },
    [504] = { .lex_state = 0 },
    [505] = { .lex_state = 0 },
    [506] = { .lex_state = 638 },
    [507] = { .lex_state = 0 },
    [508] = { .lex_state = 405 },
    [509] = { .lex_state = 51 },
    [510] = { .lex_state = 51 },
    [511] = { .lex_state = 51 },
    [512] = { .lex_state = 51 },
    [513] = { .lex_state = 51 },
    [514] = { .lex_state = 51 },
    [515] = { .lex_state = 0 },
    [516] = { .lex_state = 51 },
    [517] = { .lex_state = 51 },
    [518] = { .lex_state = 51 },
    [519] = { .lex_state = 0 },
    [520] = { .lex_state = 0 },
    [521] = { .lex_state = 51 },
    [522] = { .lex_state = 51 },
    [523] = { .lex_state = 0 },
    [524] = { .lex_state = 58 },
    [525] = { .lex_state = 51 },
    [526] = { .lex_state = 51 },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
    [0] = {
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
        [sym_comment] = ACTIONS(3),
        [sym__eof] = ACTIONS(1),
    },
    [1] = {
        [sym_specification] = STATE(505),
        [sym_preproc_call] = STATE(39),
        [sym_except_dcl] = STATE(504),
        [sym_interface_dcl] = STATE(504),
        [sym_interface_forward_dcl] = STATE(503),
        [sym_interface_def] = STATE(503),
        [sym_interface_header] = STATE(501),
        [sym_bitset_dcl] = STATE(504),
        [sym_bitmask_dcl] = STATE(504),
        [sym_annotation_dcl] = STATE(504),
        [sym_annotation_appl] = STATE(135),
        [sym_template_module_dcl] = STATE(504),
        [sym_template_module_inst] = STATE(504),
        [sym_value_dcl] = STATE(504),
        [sym_value_def] = STATE(497),
        [sym_value_header] = STATE(495),
        [sym_value_forward_dcl] = STATE(497),
        [sym_typedef_dcl] = STATE(504),
        [sym_enum_dcl] = STATE(504),
        [sym_enum_anno] = STATE(493),
        [sym_union_forward_dcl] = STATE(504),
        [sym_union_def] = STATE(504),
        [sym__definition] = STATE(47),
        [sym_native_dcl] = STATE(504),
        [sym_module_dcl] = STATE(504),
        [sym_struct_forward_dcl] = STATE(504),
        [sym_struct_def] = STATE(504),
        [sym_predefine] = STATE(47),
        [sym_const_dcl] = STATE(504),
        [aux_sym_specification_repeat1] = STATE(39),
        [aux_sym_specification_repeat2] = STATE(47),
        [aux_sym_interface_def_repeat1] = STATE(135),
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
        [sym_comment] = ACTIONS(3),
    },
    [2] = {
        [sym_signed_short_int] = STATE(207),
        [sym_signed_long_int] = STATE(207),
        [sym_signed_longlong_int] = STATE(207),
        [sym_unsigned_int] = STATE(208),
        [sym_integer_type] = STATE(214),
        [sym_signed_int] = STATE(208),
        [sym_unsigned_short_int] = STATE(197),
        [sym_unsigned_long_int] = STATE(197),
        [sym_unsigned_longlong_int] = STATE(197),
        [sym_floating_pt_type] = STATE(214),
        [sym_char_type] = STATE(214),
        [sym_scoped_name] = STATE(196),
        [sym_string_type] = STATE(227),
        [sym_type_spec] = STATE(431),
        [sym_simple_type_spec] = STATE(281),
        [sym_base_type_spec] = STATE(232),
        [sym_any_type] = STATE(214),
        [sym_fixed_pt_type] = STATE(227),
        [sym_template_type_spec] = STATE(281),
        [sym_sequence_type] = STATE(227),
        [sym_map_type] = STATE(227),
        [sym_except_dcl] = STATE(519),
        [sym_export] = STATE(53),
        [sym_op_dcl] = STATE(519),
        [sym_op_type_spec] = STATE(420),
        [sym_attr_dcl] = STATE(519),
        [sym_readonly_attr_spec] = STATE(419),
        [sym_attr_spec] = STATE(419),
        [sym_bitset_dcl] = STATE(519),
        [sym_bitmask_dcl] = STATE(519),
        [sym_annotation_appl] = STATE(164),
        [sym_value_element] = STATE(3),
        [sym_state_member] = STATE(53),
        [sym_init_dcl] = STATE(53),
        [sym_typedef_dcl] = STATE(519),
        [sym_enum_dcl] = STATE(519),
        [sym_enum_anno] = STATE(493),
        [sym_union_forward_dcl] = STATE(519),
        [sym_union_def] = STATE(519),
        [sym_native_dcl] = STATE(519),
        [sym_struct_forward_dcl] = STATE(519),
        [sym_struct_def] = STATE(519),
        [sym_const_dcl] = STATE(519),
        [aux_sym_interface_def_repeat1] = STATE(164),
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
        [sym_comment] = ACTIONS(3),
    },
    [3] = {
        [sym_signed_short_int] = STATE(207),
        [sym_signed_long_int] = STATE(207),
        [sym_signed_longlong_int] = STATE(207),
        [sym_unsigned_int] = STATE(208),
        [sym_integer_type] = STATE(214),
        [sym_signed_int] = STATE(208),
        [sym_unsigned_short_int] = STATE(197),
        [sym_unsigned_long_int] = STATE(197),
        [sym_unsigned_longlong_int] = STATE(197),
        [sym_floating_pt_type] = STATE(214),
        [sym_char_type] = STATE(214),
        [sym_scoped_name] = STATE(196),
        [sym_string_type] = STATE(227),
        [sym_type_spec] = STATE(431),
        [sym_simple_type_spec] = STATE(281),
        [sym_base_type_spec] = STATE(232),
        [sym_any_type] = STATE(214),
        [sym_fixed_pt_type] = STATE(227),
        [sym_template_type_spec] = STATE(281),
        [sym_sequence_type] = STATE(227),
        [sym_map_type] = STATE(227),
        [sym_except_dcl] = STATE(519),
        [sym_export] = STATE(53),
        [sym_op_dcl] = STATE(519),
        [sym_op_type_spec] = STATE(420),
        [sym_attr_dcl] = STATE(519),
        [sym_readonly_attr_spec] = STATE(419),
        [sym_attr_spec] = STATE(419),
        [sym_bitset_dcl] = STATE(519),
        [sym_bitmask_dcl] = STATE(519),
        [sym_annotation_appl] = STATE(164),
        [sym_value_element] = STATE(3),
        [sym_state_member] = STATE(53),
        [sym_init_dcl] = STATE(53),
        [sym_typedef_dcl] = STATE(519),
        [sym_enum_dcl] = STATE(519),
        [sym_enum_anno] = STATE(493),
        [sym_union_forward_dcl] = STATE(519),
        [sym_union_def] = STATE(519),
        [sym_native_dcl] = STATE(519),
        [sym_struct_forward_dcl] = STATE(519),
        [sym_struct_def] = STATE(519),
        [sym_const_dcl] = STATE(519),
        [aux_sym_interface_def_repeat1] = STATE(164),
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
        [sym_comment] = ACTIONS(3),
    },
    [4] = {
        [sym_signed_short_int] = STATE(207),
        [sym_signed_long_int] = STATE(207),
        [sym_signed_longlong_int] = STATE(207),
        [sym_unsigned_int] = STATE(208),
        [sym_integer_type] = STATE(214),
        [sym_signed_int] = STATE(208),
        [sym_unsigned_short_int] = STATE(197),
        [sym_unsigned_long_int] = STATE(197),
        [sym_unsigned_longlong_int] = STATE(197),
        [sym_floating_pt_type] = STATE(214),
        [sym_char_type] = STATE(214),
        [sym_scoped_name] = STATE(196),
        [sym_string_type] = STATE(227),
        [sym_type_spec] = STATE(431),
        [sym_simple_type_spec] = STATE(281),
        [sym_base_type_spec] = STATE(232),
        [sym_any_type] = STATE(214),
        [sym_fixed_pt_type] = STATE(227),
        [sym_template_type_spec] = STATE(281),
        [sym_sequence_type] = STATE(227),
        [sym_map_type] = STATE(227),
        [sym_except_dcl] = STATE(519),
        [sym_export] = STATE(53),
        [sym_op_dcl] = STATE(519),
        [sym_op_type_spec] = STATE(420),
        [sym_attr_dcl] = STATE(519),
        [sym_readonly_attr_spec] = STATE(419),
        [sym_attr_spec] = STATE(419),
        [sym_bitset_dcl] = STATE(519),
        [sym_bitmask_dcl] = STATE(519),
        [sym_annotation_appl] = STATE(164),
        [sym_value_element] = STATE(2),
        [sym_state_member] = STATE(53),
        [sym_init_dcl] = STATE(53),
        [sym_typedef_dcl] = STATE(519),
        [sym_enum_dcl] = STATE(519),
        [sym_enum_anno] = STATE(493),
        [sym_union_forward_dcl] = STATE(519),
        [sym_union_def] = STATE(519),
        [sym_native_dcl] = STATE(519),
        [sym_struct_forward_dcl] = STATE(519),
        [sym_struct_def] = STATE(519),
        [sym_const_dcl] = STATE(519),
        [aux_sym_interface_def_repeat1] = STATE(164),
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
        [sym_comment] = ACTIONS(3),
    },
    [5] = {
        [sym_signed_short_int] = STATE(207),
        [sym_signed_long_int] = STATE(207),
        [sym_signed_longlong_int] = STATE(207),
        [sym_unsigned_int] = STATE(208),
        [sym_integer_type] = STATE(214),
        [sym_signed_int] = STATE(208),
        [sym_unsigned_short_int] = STATE(197),
        [sym_unsigned_long_int] = STATE(197),
        [sym_unsigned_longlong_int] = STATE(197),
        [sym_floating_pt_type] = STATE(214),
        [sym_char_type] = STATE(214),
        [sym_scoped_name] = STATE(196),
        [sym_string_type] = STATE(227),
        [sym_type_spec] = STATE(431),
        [sym_simple_type_spec] = STATE(281),
        [sym_base_type_spec] = STATE(232),
        [sym_any_type] = STATE(214),
        [sym_fixed_pt_type] = STATE(227),
        [sym_template_type_spec] = STATE(281),
        [sym_sequence_type] = STATE(227),
        [sym_map_type] = STATE(227),
        [sym_except_dcl] = STATE(425),
        [sym_interface_body] = STATE(473),
        [sym_export] = STATE(9),
        [sym_op_dcl] = STATE(425),
        [sym_op_type_spec] = STATE(420),
        [sym_attr_dcl] = STATE(425),
        [sym_readonly_attr_spec] = STATE(419),
        [sym_attr_spec] = STATE(419),
        [sym_bitset_dcl] = STATE(425),
        [sym_bitmask_dcl] = STATE(425),
        [sym_annotation_appl] = STATE(164),
        [sym_typedef_dcl] = STATE(425),
        [sym_enum_dcl] = STATE(425),
        [sym_enum_anno] = STATE(493),
        [sym_union_forward_dcl] = STATE(425),
        [sym_union_def] = STATE(425),
        [sym_native_dcl] = STATE(425),
        [sym_struct_forward_dcl] = STATE(425),
        [sym_struct_def] = STATE(425),
        [sym_const_dcl] = STATE(425),
        [aux_sym_interface_def_repeat1] = STATE(164),
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
        [sym_comment] = ACTIONS(3),
    },
    [6] = {
        [sym_signed_short_int] = STATE(207),
        [sym_signed_long_int] = STATE(207),
        [sym_signed_longlong_int] = STATE(207),
        [sym_unsigned_int] = STATE(208),
        [sym_integer_type] = STATE(214),
        [sym_signed_int] = STATE(208),
        [sym_unsigned_short_int] = STATE(197),
        [sym_unsigned_long_int] = STATE(197),
        [sym_unsigned_longlong_int] = STATE(197),
        [sym_floating_pt_type] = STATE(214),
        [sym_char_type] = STATE(214),
        [sym_scoped_name] = STATE(196),
        [sym_string_type] = STATE(227),
        [sym_type_spec] = STATE(431),
        [sym_simple_type_spec] = STATE(281),
        [sym_base_type_spec] = STATE(232),
        [sym_any_type] = STATE(214),
        [sym_fixed_pt_type] = STATE(227),
        [sym_template_type_spec] = STATE(281),
        [sym_sequence_type] = STATE(227),
        [sym_map_type] = STATE(227),
        [sym_except_dcl] = STATE(425),
        [sym_interface_body] = STATE(423),
        [sym_export] = STATE(9),
        [sym_op_dcl] = STATE(425),
        [sym_op_type_spec] = STATE(420),
        [sym_attr_dcl] = STATE(425),
        [sym_readonly_attr_spec] = STATE(419),
        [sym_attr_spec] = STATE(419),
        [sym_bitset_dcl] = STATE(425),
        [sym_bitmask_dcl] = STATE(425),
        [sym_annotation_appl] = STATE(164),
        [sym_typedef_dcl] = STATE(425),
        [sym_enum_dcl] = STATE(425),
        [sym_enum_anno] = STATE(493),
        [sym_union_forward_dcl] = STATE(425),
        [sym_union_def] = STATE(425),
        [sym_native_dcl] = STATE(425),
        [sym_struct_forward_dcl] = STATE(425),
        [sym_struct_def] = STATE(425),
        [sym_const_dcl] = STATE(425),
        [aux_sym_interface_def_repeat1] = STATE(164),
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
        [sym_comment] = ACTIONS(3),
    },
    [7] = {
        [sym_signed_short_int] = STATE(207),
        [sym_signed_long_int] = STATE(207),
        [sym_signed_longlong_int] = STATE(207),
        [sym_unsigned_int] = STATE(208),
        [sym_integer_type] = STATE(214),
        [sym_signed_int] = STATE(208),
        [sym_unsigned_short_int] = STATE(197),
        [sym_unsigned_long_int] = STATE(197),
        [sym_unsigned_longlong_int] = STATE(197),
        [sym_floating_pt_type] = STATE(214),
        [sym_char_type] = STATE(214),
        [sym_scoped_name] = STATE(196),
        [sym_string_type] = STATE(227),
        [sym_type_spec] = STATE(431),
        [sym_simple_type_spec] = STATE(281),
        [sym_base_type_spec] = STATE(232),
        [sym_any_type] = STATE(214),
        [sym_fixed_pt_type] = STATE(227),
        [sym_template_type_spec] = STATE(281),
        [sym_sequence_type] = STATE(227),
        [sym_map_type] = STATE(227),
        [sym_except_dcl] = STATE(425),
        [sym_interface_body] = STATE(403),
        [sym_export] = STATE(9),
        [sym_op_dcl] = STATE(425),
        [sym_op_type_spec] = STATE(420),
        [sym_attr_dcl] = STATE(425),
        [sym_readonly_attr_spec] = STATE(419),
        [sym_attr_spec] = STATE(419),
        [sym_bitset_dcl] = STATE(425),
        [sym_bitmask_dcl] = STATE(425),
        [sym_annotation_appl] = STATE(164),
        [sym_typedef_dcl] = STATE(425),
        [sym_enum_dcl] = STATE(425),
        [sym_enum_anno] = STATE(493),
        [sym_union_forward_dcl] = STATE(425),
        [sym_union_def] = STATE(425),
        [sym_native_dcl] = STATE(425),
        [sym_struct_forward_dcl] = STATE(425),
        [sym_struct_def] = STATE(425),
        [sym_const_dcl] = STATE(425),
        [aux_sym_interface_def_repeat1] = STATE(164),
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
        [sym_comment] = ACTIONS(3),
    },
    [8] = {
        [sym_signed_short_int] = STATE(207),
        [sym_signed_long_int] = STATE(207),
        [sym_signed_longlong_int] = STATE(207),
        [sym_unsigned_int] = STATE(208),
        [sym_integer_type] = STATE(214),
        [sym_signed_int] = STATE(208),
        [sym_unsigned_short_int] = STATE(197),
        [sym_unsigned_long_int] = STATE(197),
        [sym_unsigned_longlong_int] = STATE(197),
        [sym_floating_pt_type] = STATE(214),
        [sym_char_type] = STATE(214),
        [sym_scoped_name] = STATE(196),
        [sym_string_type] = STATE(227),
        [sym_type_spec] = STATE(431),
        [sym_simple_type_spec] = STATE(281),
        [sym_base_type_spec] = STATE(232),
        [sym_any_type] = STATE(214),
        [sym_fixed_pt_type] = STATE(227),
        [sym_template_type_spec] = STATE(281),
        [sym_sequence_type] = STATE(227),
        [sym_map_type] = STATE(227),
        [sym_except_dcl] = STATE(425),
        [sym_export] = STATE(8),
        [sym_op_dcl] = STATE(425),
        [sym_op_type_spec] = STATE(420),
        [sym_attr_dcl] = STATE(425),
        [sym_readonly_attr_spec] = STATE(419),
        [sym_attr_spec] = STATE(419),
        [sym_bitset_dcl] = STATE(425),
        [sym_bitmask_dcl] = STATE(425),
        [sym_annotation_appl] = STATE(164),
        [sym_typedef_dcl] = STATE(425),
        [sym_enum_dcl] = STATE(425),
        [sym_enum_anno] = STATE(493),
        [sym_union_forward_dcl] = STATE(425),
        [sym_union_def] = STATE(425),
        [sym_native_dcl] = STATE(425),
        [sym_struct_forward_dcl] = STATE(425),
        [sym_struct_def] = STATE(425),
        [sym_const_dcl] = STATE(425),
        [aux_sym_interface_def_repeat1] = STATE(164),
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
        [sym_comment] = ACTIONS(3),
    },
    [9] = {
        [sym_signed_short_int] = STATE(207),
        [sym_signed_long_int] = STATE(207),
        [sym_signed_longlong_int] = STATE(207),
        [sym_unsigned_int] = STATE(208),
        [sym_integer_type] = STATE(214),
        [sym_signed_int] = STATE(208),
        [sym_unsigned_short_int] = STATE(197),
        [sym_unsigned_long_int] = STATE(197),
        [sym_unsigned_longlong_int] = STATE(197),
        [sym_floating_pt_type] = STATE(214),
        [sym_char_type] = STATE(214),
        [sym_scoped_name] = STATE(196),
        [sym_string_type] = STATE(227),
        [sym_type_spec] = STATE(431),
        [sym_simple_type_spec] = STATE(281),
        [sym_base_type_spec] = STATE(232),
        [sym_any_type] = STATE(214),
        [sym_fixed_pt_type] = STATE(227),
        [sym_template_type_spec] = STATE(281),
        [sym_sequence_type] = STATE(227),
        [sym_map_type] = STATE(227),
        [sym_except_dcl] = STATE(425),
        [sym_export] = STATE(8),
        [sym_op_dcl] = STATE(425),
        [sym_op_type_spec] = STATE(420),
        [sym_attr_dcl] = STATE(425),
        [sym_readonly_attr_spec] = STATE(419),
        [sym_attr_spec] = STATE(419),
        [sym_bitset_dcl] = STATE(425),
        [sym_bitmask_dcl] = STATE(425),
        [sym_annotation_appl] = STATE(164),
        [sym_typedef_dcl] = STATE(425),
        [sym_enum_dcl] = STATE(425),
        [sym_enum_anno] = STATE(493),
        [sym_union_forward_dcl] = STATE(425),
        [sym_union_def] = STATE(425),
        [sym_native_dcl] = STATE(425),
        [sym_struct_forward_dcl] = STATE(425),
        [sym_struct_def] = STATE(425),
        [sym_const_dcl] = STATE(425),
        [aux_sym_interface_def_repeat1] = STATE(164),
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
        [sym_comment] = ACTIONS(3),
    },
    [10] = {
        [sym_signed_short_int] = STATE(207),
        [sym_signed_long_int] = STATE(207),
        [sym_signed_longlong_int] = STATE(207),
        [sym_unsigned_int] = STATE(208),
        [sym_integer_type] = STATE(214),
        [sym_signed_int] = STATE(208),
        [sym_unsigned_short_int] = STATE(197),
        [sym_unsigned_long_int] = STATE(197),
        [sym_unsigned_longlong_int] = STATE(197),
        [sym_floating_pt_type] = STATE(214),
        [sym_char_type] = STATE(214),
        [sym_scoped_name] = STATE(126),
        [sym_string_type] = STATE(227),
        [sym_type_spec] = STATE(367),
        [sym_simple_type_spec] = STATE(281),
        [sym_base_type_spec] = STATE(232),
        [sym_any_type] = STATE(214),
        [sym_fixed_pt_type] = STATE(227),
        [sym_template_type_spec] = STATE(281),
        [sym_sequence_type] = STATE(227),
        [sym_map_type] = STATE(227),
        [sym_const_expr] = STATE(367),
        [sym_or_expr] = STATE(142),
        [sym_xor_expr] = STATE(138),
        [sym_and_expr] = STATE(134),
        [sym_shift_expr] = STATE(130),
        [sym_add_expr] = STATE(127),
        [sym_mult_expr] = STATE(123),
        [sym_unary_expr] = STATE(112),
        [sym_unary_operator] = STATE(125),
        [sym_literal] = STATE(122),
        [sym_string_literal] = STATE(116),
        [sym_char_literal] = STATE(116),
        [sym_boolean_literal] = STATE(116),
        [sym_actual_parameters] = STATE(402),
        [sym_actual_parameter] = STATE(225),
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
        [sym_comment] = ACTIONS(3),
    },
    [11] = {
        [sym_signed_short_int] = STATE(207),
        [sym_signed_long_int] = STATE(207),
        [sym_signed_longlong_int] = STATE(207),
        [sym_unsigned_int] = STATE(208),
        [sym_integer_type] = STATE(214),
        [sym_signed_int] = STATE(208),
        [sym_unsigned_short_int] = STATE(197),
        [sym_unsigned_long_int] = STATE(197),
        [sym_unsigned_longlong_int] = STATE(197),
        [sym_floating_pt_type] = STATE(214),
        [sym_char_type] = STATE(214),
        [sym_scoped_name] = STATE(126),
        [sym_string_type] = STATE(227),
        [sym_type_spec] = STATE(367),
        [sym_simple_type_spec] = STATE(281),
        [sym_base_type_spec] = STATE(232),
        [sym_any_type] = STATE(214),
        [sym_fixed_pt_type] = STATE(227),
        [sym_template_type_spec] = STATE(281),
        [sym_sequence_type] = STATE(227),
        [sym_map_type] = STATE(227),
        [sym_const_expr] = STATE(367),
        [sym_or_expr] = STATE(142),
        [sym_xor_expr] = STATE(138),
        [sym_and_expr] = STATE(134),
        [sym_shift_expr] = STATE(130),
        [sym_add_expr] = STATE(127),
        [sym_mult_expr] = STATE(123),
        [sym_unary_expr] = STATE(112),
        [sym_unary_operator] = STATE(125),
        [sym_literal] = STATE(122),
        [sym_string_literal] = STATE(116),
        [sym_char_literal] = STATE(116),
        [sym_boolean_literal] = STATE(116),
        [sym_actual_parameter] = STATE(359),
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
        [sym_comment] = ACTIONS(3),
    },
    [12] = {
        [sym_signed_short_int] = STATE(207),
        [sym_signed_long_int] = STATE(207),
        [sym_signed_longlong_int] = STATE(207),
        [sym_unsigned_int] = STATE(208),
        [sym_integer_type] = STATE(214),
        [sym_signed_int] = STATE(208),
        [sym_unsigned_short_int] = STATE(197),
        [sym_unsigned_long_int] = STATE(197),
        [sym_unsigned_longlong_int] = STATE(197),
        [sym_floating_pt_type] = STATE(214),
        [sym_char_type] = STATE(214),
        [sym_scoped_name] = STATE(196),
        [sym_string_type] = STATE(227),
        [sym_type_spec] = STATE(189),
        [sym_simple_type_spec] = STATE(281),
        [sym_base_type_spec] = STATE(232),
        [sym_any_type] = STATE(214),
        [sym_fixed_pt_type] = STATE(227),
        [sym_template_type_spec] = STATE(281),
        [sym_sequence_type] = STATE(227),
        [sym_map_type] = STATE(227),
        [sym_bitset_dcl] = STATE(189),
        [sym_bitmask_dcl] = STATE(189),
        [sym_annotation_appl] = STATE(164),
        [sym_enum_dcl] = STATE(189),
        [sym_enum_anno] = STATE(493),
        [sym_union_forward_dcl] = STATE(189),
        [sym_union_def] = STATE(189),
        [sym_element_spec] = STATE(477),
        [sym_struct_forward_dcl] = STATE(189),
        [sym_struct_def] = STATE(189),
        [aux_sym_interface_def_repeat1] = STATE(164),
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
        [sym_comment] = ACTIONS(3),
    },
    [13] = {
        [sym_signed_short_int] = STATE(207),
        [sym_signed_long_int] = STATE(207),
        [sym_signed_longlong_int] = STATE(207),
        [sym_unsigned_int] = STATE(208),
        [sym_integer_type] = STATE(214),
        [sym_signed_int] = STATE(208),
        [sym_unsigned_short_int] = STATE(197),
        [sym_unsigned_long_int] = STATE(197),
        [sym_unsigned_longlong_int] = STATE(197),
        [sym_floating_pt_type] = STATE(214),
        [sym_char_type] = STATE(214),
        [sym_scoped_name] = STATE(196),
        [sym_string_type] = STATE(227),
        [sym_simple_type_spec] = STATE(161),
        [sym_base_type_spec] = STATE(232),
        [sym_any_type] = STATE(214),
        [sym_fixed_pt_type] = STATE(227),
        [sym_template_type_spec] = STATE(161),
        [sym_sequence_type] = STATE(227),
        [sym_map_type] = STATE(227),
        [sym_bitset_dcl] = STATE(161),
        [sym_bitmask_dcl] = STATE(161),
        [sym_annotation_appl] = STATE(164),
        [sym_type_declarator] = STATE(457),
        [sym_enum_dcl] = STATE(161),
        [sym_enum_anno] = STATE(493),
        [sym_union_forward_dcl] = STATE(161),
        [sym_union_def] = STATE(161),
        [sym_struct_forward_dcl] = STATE(161),
        [sym_struct_def] = STATE(161),
        [aux_sym_interface_def_repeat1] = STATE(164),
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
        [sym_comment] = ACTIONS(3),
    },
};

static const uint16_t ts_small_parse_table[] = {
    [0] = 38,
    ACTIONS(3),
    1,
    sym_comment,
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
    STATE(61),
    1,
    sym_annotation_member,
    STATE(372),
    1,
    sym_scoped_name,
    STATE(373),
    1,
    sym_annotation_member_type,
    STATE(493),
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
    STATE(16),
    2,
    sym_annotation_body,
    aux_sym_annotation_dcl_repeat1,
    STATE(208),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(388),
    2,
    sym_any_const_type,
    sym_const_type,
    STATE(197),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(207),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(387),
    3,
    sym_typedef_dcl,
    sym_enum_dcl,
    sym_const_dcl,
    STATE(476),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [136] = 38,
    ACTIONS(3),
    1,
    sym_comment,
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
    ACTIONS(385),
    1,
    anon_sym_RBRACE,
    STATE(61),
    1,
    sym_annotation_member,
    STATE(372),
    1,
    sym_scoped_name,
    STATE(373),
    1,
    sym_annotation_member_type,
    STATE(493),
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
    STATE(14),
    2,
    sym_annotation_body,
    aux_sym_annotation_dcl_repeat1,
    STATE(208),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(388),
    2,
    sym_any_const_type,
    sym_const_type,
    STATE(197),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(207),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(387),
    3,
    sym_typedef_dcl,
    sym_enum_dcl,
    sym_const_dcl,
    STATE(476),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [272] = 38,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(393),
    1,
    anon_sym_longlong,
    ACTIONS(396),
    1,
    anon_sym_int64,
    ACTIONS(399),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(405),
    1,
    anon_sym_fixed,
    ACTIONS(408),
    1,
    sym_signed_tiny_int,
    ACTIONS(411),
    1,
    anon_sym_unsignedshort,
    ACTIONS(414),
    1,
    anon_sym_uint16,
    ACTIONS(420),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(423),
    1,
    anon_sym_uint64,
    ACTIONS(429),
    1,
    anon_sym_longdouble,
    ACTIONS(435),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(441),
    1,
    anon_sym_any,
    ACTIONS(444),
    1,
    anon_sym_sequence,
    ACTIONS(447),
    1,
    anon_sym_RBRACE,
    ACTIONS(449),
    1,
    anon_sym_enum,
    ACTIONS(452),
    1,
    anon_sym_const,
    ACTIONS(455),
    1,
    anon_sym_typedef,
    ACTIONS(458),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(461),
    1,
    sym_identifier,
    STATE(61),
    1,
    sym_annotation_member,
    STATE(372),
    1,
    sym_scoped_name,
    STATE(373),
    1,
    sym_annotation_member_type,
    STATE(493),
    1,
    sym_enum_anno,
    ACTIONS(387),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(390),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(402),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(417),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(426),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(432),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(438),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(16),
    2,
    sym_annotation_body,
    aux_sym_annotation_dcl_repeat1,
    STATE(208),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(388),
    2,
    sym_any_const_type,
    sym_const_type,
    STATE(197),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(207),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(387),
    3,
    sym_typedef_dcl,
    sym_enum_dcl,
    sym_const_dcl,
    STATE(476),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [408] = 36,
    ACTIONS(3),
    1,
    sym_comment,
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
    STATE(175),
    1,
    sym_type_spec,
    STATE(196),
    1,
    sym_scoped_name,
    STATE(232),
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
    STATE(20),
    2,
    sym_member,
    aux_sym_except_dcl_repeat1,
    STATE(29),
    2,
    sym_annotation_appl,
    aux_sym_interface_def_repeat1,
    STATE(208),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(281),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(197),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(207),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(214),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(227),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [538] = 36,
    ACTIONS(3),
    1,
    sym_comment,
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
    STATE(175),
    1,
    sym_type_spec,
    STATE(196),
    1,
    sym_scoped_name,
    STATE(232),
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
    STATE(24),
    2,
    sym_member,
    aux_sym_except_dcl_repeat1,
    STATE(29),
    2,
    sym_annotation_appl,
    aux_sym_interface_def_repeat1,
    STATE(208),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(281),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(197),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(207),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(214),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(227),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [668] = 36,
    ACTIONS(3),
    1,
    sym_comment,
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
    STATE(175),
    1,
    sym_type_spec,
    STATE(196),
    1,
    sym_scoped_name,
    STATE(232),
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
    STATE(17),
    2,
    sym_member,
    aux_sym_except_dcl_repeat1,
    STATE(29),
    2,
    sym_annotation_appl,
    aux_sym_interface_def_repeat1,
    STATE(208),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(281),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(197),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(207),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(214),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(227),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [798] = 36,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(478),
    1,
    anon_sym_longlong,
    ACTIONS(481),
    1,
    anon_sym_int64,
    ACTIONS(484),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(490),
    1,
    anon_sym_fixed,
    ACTIONS(493),
    1,
    sym_signed_tiny_int,
    ACTIONS(496),
    1,
    anon_sym_unsignedshort,
    ACTIONS(499),
    1,
    anon_sym_uint16,
    ACTIONS(505),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(508),
    1,
    anon_sym_uint64,
    ACTIONS(514),
    1,
    anon_sym_longdouble,
    ACTIONS(520),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(526),
    1,
    anon_sym_any,
    ACTIONS(529),
    1,
    anon_sym_sequence,
    ACTIONS(532),
    1,
    anon_sym_map,
    ACTIONS(535),
    1,
    anon_sym_RBRACE,
    ACTIONS(537),
    1,
    anon_sym_AT,
    ACTIONS(540),
    1,
    sym_identifier,
    STATE(175),
    1,
    sym_type_spec,
    STATE(196),
    1,
    sym_scoped_name,
    STATE(232),
    1,
    sym_base_type_spec,
    ACTIONS(472),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(475),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(487),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(502),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(511),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(517),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(523),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(20),
    2,
    sym_member,
    aux_sym_except_dcl_repeat1,
    STATE(29),
    2,
    sym_annotation_appl,
    aux_sym_interface_def_repeat1,
    STATE(208),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(281),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(197),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(207),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(214),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(227),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [928] = 36,
    ACTIONS(3),
    1,
    sym_comment,
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
    STATE(175),
    1,
    sym_type_spec,
    STATE(196),
    1,
    sym_scoped_name,
    STATE(232),
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
    STATE(20),
    2,
    sym_member,
    aux_sym_except_dcl_repeat1,
    STATE(29),
    2,
    sym_annotation_appl,
    aux_sym_interface_def_repeat1,
    STATE(208),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(281),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(197),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(207),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(214),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(227),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [1058] = 36,
    ACTIONS(3),
    1,
    sym_comment,
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
    ACTIONS(543),
    1,
    anon_sym_RBRACE,
    STATE(175),
    1,
    sym_type_spec,
    STATE(196),
    1,
    sym_scoped_name,
    STATE(232),
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
    STATE(21),
    2,
    sym_member,
    aux_sym_except_dcl_repeat1,
    STATE(29),
    2,
    sym_annotation_appl,
    aux_sym_interface_def_repeat1,
    STATE(208),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(281),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(197),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(207),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(214),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(227),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [1188] = 36,
    ACTIONS(3),
    1,
    sym_comment,
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
    ACTIONS(545),
    1,
    anon_sym_RBRACE,
    STATE(175),
    1,
    sym_type_spec,
    STATE(196),
    1,
    sym_scoped_name,
    STATE(232),
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
    STATE(20),
    2,
    sym_member,
    aux_sym_except_dcl_repeat1,
    STATE(29),
    2,
    sym_annotation_appl,
    aux_sym_interface_def_repeat1,
    STATE(208),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(281),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(197),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(207),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(214),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(227),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [1318] = 36,
    ACTIONS(3),
    1,
    sym_comment,
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
    ACTIONS(547),
    1,
    anon_sym_RBRACE,
    STATE(175),
    1,
    sym_type_spec,
    STATE(196),
    1,
    sym_scoped_name,
    STATE(232),
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
    STATE(20),
    2,
    sym_member,
    aux_sym_except_dcl_repeat1,
    STATE(29),
    2,
    sym_annotation_appl,
    aux_sym_interface_def_repeat1,
    STATE(208),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(281),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(197),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(207),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(214),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(227),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [1448] = 36,
    ACTIONS(3),
    1,
    sym_comment,
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
    STATE(175),
    1,
    sym_type_spec,
    STATE(196),
    1,
    sym_scoped_name,
    STATE(232),
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
    STATE(27),
    2,
    sym_member,
    aux_sym_except_dcl_repeat1,
    STATE(29),
    2,
    sym_annotation_appl,
    aux_sym_interface_def_repeat1,
    STATE(208),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(281),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(197),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(207),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(214),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(227),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [1578] = 36,
    ACTIONS(3),
    1,
    sym_comment,
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
    STATE(175),
    1,
    sym_type_spec,
    STATE(196),
    1,
    sym_scoped_name,
    STATE(232),
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
    STATE(23),
    2,
    sym_member,
    aux_sym_except_dcl_repeat1,
    STATE(29),
    2,
    sym_annotation_appl,
    aux_sym_interface_def_repeat1,
    STATE(208),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(281),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(197),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(207),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(214),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(227),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [1708] = 36,
    ACTIONS(3),
    1,
    sym_comment,
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
    STATE(175),
    1,
    sym_type_spec,
    STATE(196),
    1,
    sym_scoped_name,
    STATE(232),
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
    STATE(20),
    2,
    sym_member,
    aux_sym_except_dcl_repeat1,
    STATE(29),
    2,
    sym_annotation_appl,
    aux_sym_interface_def_repeat1,
    STATE(208),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(281),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(197),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(207),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(214),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(227),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [1838] = 32,
    ACTIONS(3),
    1,
    sym_comment,
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
    STATE(196),
    1,
    sym_scoped_name,
    STATE(230),
    1,
    sym_formal_parameter,
    STATE(232),
    1,
    sym_base_type_spec,
    STATE(390),
    1,
    sym_formal_parameters,
    STATE(395),
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
    STATE(208),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(380),
    2,
    sym_simple_type_spec,
    sym_sequence_type,
    STATE(197),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(207),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(214),
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
    [1957] = 34,
    ACTIONS(3),
    1,
    sym_comment,
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
    STATE(157),
    1,
    sym_type_spec,
    STATE(196),
    1,
    sym_scoped_name,
    STATE(232),
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
    STATE(63),
    2,
    sym_annotation_appl,
    aux_sym_interface_def_repeat1,
    STATE(208),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(281),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(197),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(207),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(214),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(227),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [2080] = 34,
    ACTIONS(3),
    1,
    sym_comment,
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
    STATE(196),
    1,
    sym_scoped_name,
    STATE(232),
    1,
    sym_base_type_spec,
    STATE(424),
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
    STATE(208),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(281),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(197),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(207),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(214),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(227),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [2202] = 31,
    ACTIONS(3),
    1,
    sym_comment,
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
    STATE(196),
    1,
    sym_scoped_name,
    STATE(232),
    1,
    sym_base_type_spec,
    STATE(356),
    1,
    sym_formal_parameter,
    STATE(395),
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
    STATE(208),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(380),
    2,
    sym_simple_type_spec,
    sym_sequence_type,
    STATE(197),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(207),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(214),
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
    [2318] = 32,
    ACTIONS(3),
    1,
    sym_comment,
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
    STATE(196),
    1,
    sym_scoped_name,
    STATE(232),
    1,
    sym_base_type_spec,
    STATE(342),
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
    STATE(208),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(281),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(197),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(207),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(214),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(227),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [2434] = 30,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(565),
    1,
    anon_sym_exception,
    ACTIONS(568),
    1,
    anon_sym_RBRACE,
    ACTIONS(570),
    1,
    anon_sym_interface,
    ACTIONS(573),
    1,
    anon_sym_local,
    ACTIONS(576),
    1,
    anon_sym_bitset,
    ACTIONS(579),
    1,
    anon_sym_bitmask,
    ACTIONS(582),
    1,
    anon_sym_ATannotation,
    ACTIONS(585),
    1,
    anon_sym_AT,
    ACTIONS(588),
    1,
    anon_sym_module,
    ACTIONS(591),
    1,
    anon_sym_valuetype,
    ACTIONS(594),
    1,
    anon_sym_struct,
    ACTIONS(597),
    1,
    anon_sym_union,
    ACTIONS(600),
    1,
    anon_sym_enum,
    ACTIONS(603),
    1,
    anon_sym_const,
    ACTIONS(606),
    1,
    anon_sym_alias,
    ACTIONS(609),
    1,
    anon_sym_typedef,
    ACTIONS(612),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(615),
    1,
    anon_sym_native,
    ACTIONS(618),
    1,
    anon_sym_POUNDdefine,
    STATE(413),
    1,
    sym_template_module_ref,
    STATE(493),
    1,
    sym_enum_anno,
    STATE(495),
    1,
    sym_value_header,
    STATE(501),
    1,
    sym_interface_header,
    STATE(33),
    2,
    sym_tpl_definition,
    aux_sym_template_module_dcl_repeat1,
    STATE(108),
    2,
    sym__definition,
    sym_predefine,
    STATE(135),
    2,
    sym_annotation_appl,
    aux_sym_interface_def_repeat1,
    STATE(497),
    2,
    sym_value_def,
    sym_value_forward_dcl,
    STATE(503),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(504),
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
    [2546] = 32,
    ACTIONS(3),
    1,
    sym_comment,
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
    STATE(196),
    1,
    sym_scoped_name,
    STATE(232),
    1,
    sym_base_type_spec,
    STATE(370),
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
    STATE(208),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(281),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(197),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(207),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(214),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(227),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [2662] = 32,
    ACTIONS(3),
    1,
    sym_comment,
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
    STATE(196),
    1,
    sym_scoped_name,
    STATE(232),
    1,
    sym_base_type_spec,
    STATE(292),
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
    STATE(208),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(281),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(197),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(207),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(214),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(227),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [2778] = 30,
    ACTIONS(3),
    1,
    sym_comment,
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
    ACTIONS(621),
    1,
    anon_sym_RBRACE,
    ACTIONS(623),
    1,
    anon_sym_alias,
    ACTIONS(625),
    1,
    anon_sym_POUNDdefine,
    STATE(413),
    1,
    sym_template_module_ref,
    STATE(493),
    1,
    sym_enum_anno,
    STATE(495),
    1,
    sym_value_header,
    STATE(501),
    1,
    sym_interface_header,
    STATE(40),
    2,
    sym_tpl_definition,
    aux_sym_template_module_dcl_repeat1,
    STATE(108),
    2,
    sym__definition,
    sym_predefine,
    STATE(135),
    2,
    sym_annotation_appl,
    aux_sym_interface_def_repeat1,
    STATE(497),
    2,
    sym_value_def,
    sym_value_forward_dcl,
    STATE(503),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(504),
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
    [2890] = 32,
    ACTIONS(3),
    1,
    sym_comment,
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
    STATE(196),
    1,
    sym_scoped_name,
    STATE(232),
    1,
    sym_base_type_spec,
    STATE(341),
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
    STATE(208),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(281),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(197),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(207),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(214),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(227),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [3006] = 32,
    ACTIONS(3),
    1,
    sym_comment,
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
    STATE(162),
    1,
    sym_type_spec,
    STATE(196),
    1,
    sym_scoped_name,
    STATE(232),
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
    STATE(208),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(281),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(197),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(207),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(214),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(227),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [3122] = 29,
    ACTIONS(3),
    1,
    sym_comment,
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
    ACTIONS(627),
    1,
    ts_builtin_sym_end,
    STATE(493),
    1,
    sym_enum_anno,
    STATE(495),
    1,
    sym_value_header,
    STATE(501),
    1,
    sym_interface_header,
    STATE(100),
    2,
    sym_preproc_call,
    aux_sym_specification_repeat1,
    STATE(135),
    2,
    sym_annotation_appl,
    aux_sym_interface_def_repeat1,
    STATE(497),
    2,
    sym_value_def,
    sym_value_forward_dcl,
    STATE(503),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(49),
    3,
    sym__definition,
    sym_predefine,
    aux_sym_specification_repeat2,
    STATE(504),
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
    [3232] = 30,
    ACTIONS(3),
    1,
    sym_comment,
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
    ACTIONS(623),
    1,
    anon_sym_alias,
    ACTIONS(625),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(629),
    1,
    anon_sym_RBRACE,
    STATE(413),
    1,
    sym_template_module_ref,
    STATE(493),
    1,
    sym_enum_anno,
    STATE(495),
    1,
    sym_value_header,
    STATE(501),
    1,
    sym_interface_header,
    STATE(33),
    2,
    sym_tpl_definition,
    aux_sym_template_module_dcl_repeat1,
    STATE(108),
    2,
    sym__definition,
    sym_predefine,
    STATE(135),
    2,
    sym_annotation_appl,
    aux_sym_interface_def_repeat1,
    STATE(497),
    2,
    sym_value_def,
    sym_value_forward_dcl,
    STATE(503),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(504),
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
    [3344] = 32,
    ACTIONS(3),
    1,
    sym_comment,
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
    STATE(196),
    1,
    sym_scoped_name,
    STATE(224),
    1,
    sym_type_spec,
    STATE(232),
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
    STATE(208),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(281),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(197),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(207),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(214),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(227),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [3460] = 32,
    ACTIONS(3),
    1,
    sym_comment,
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
    STATE(232),
    1,
    sym_base_type_spec,
    STATE(299),
    1,
    sym_scoped_name,
    STATE(433),
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
    STATE(208),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(281),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(197),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(207),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(214),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(227),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [3576] = 27,
    ACTIONS(3),
    1,
    sym_comment,
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
    STATE(493),
    1,
    sym_enum_anno,
    STATE(495),
    1,
    sym_value_header,
    STATE(501),
    1,
    sym_interface_header,
    ACTIONS(631),
    2,
    ts_builtin_sym_end,
    anon_sym_RBRACE,
    STATE(135),
    2,
    sym_annotation_appl,
    aux_sym_interface_def_repeat1,
    STATE(497),
    2,
    sym_value_def,
    sym_value_forward_dcl,
    STATE(503),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(43),
    3,
    sym__definition,
    sym_predefine,
    aux_sym_specification_repeat2,
    STATE(504),
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
    [3680] = 3,
    ACTIONS(3),
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
    [3735] = 3,
    ACTIONS(3),
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
    [3790] = 27,
    ACTIONS(3),
    1,
    sym_comment,
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
    ACTIONS(625),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(692),
    1,
    anon_sym_RBRACE,
    STATE(493),
    1,
    sym_enum_anno,
    STATE(495),
    1,
    sym_value_header,
    STATE(501),
    1,
    sym_interface_header,
    STATE(135),
    2,
    sym_annotation_appl,
    aux_sym_interface_def_repeat1,
    STATE(497),
    2,
    sym_value_def,
    sym_value_forward_dcl,
    STATE(503),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(52),
    3,
    sym__definition,
    sym_predefine,
    aux_sym_specification_repeat2,
    STATE(504),
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
    [3893] = 27,
    ACTIONS(3),
    1,
    sym_comment,
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
    ACTIONS(625),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(627),
    1,
    ts_builtin_sym_end,
    STATE(493),
    1,
    sym_enum_anno,
    STATE(495),
    1,
    sym_value_header,
    STATE(501),
    1,
    sym_interface_header,
    STATE(135),
    2,
    sym_annotation_appl,
    aux_sym_interface_def_repeat1,
    STATE(497),
    2,
    sym_value_def,
    sym_value_forward_dcl,
    STATE(503),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(43),
    3,
    sym__definition,
    sym_predefine,
    aux_sym_specification_repeat2,
    STATE(504),
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
    [3996] = 3,
    ACTIONS(3),
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
    [4051] = 27,
    ACTIONS(3),
    1,
    sym_comment,
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
    ACTIONS(625),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(698),
    1,
    ts_builtin_sym_end,
    STATE(493),
    1,
    sym_enum_anno,
    STATE(495),
    1,
    sym_value_header,
    STATE(501),
    1,
    sym_interface_header,
    STATE(135),
    2,
    sym_annotation_appl,
    aux_sym_interface_def_repeat1,
    STATE(497),
    2,
    sym_value_def,
    sym_value_forward_dcl,
    STATE(503),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(43),
    3,
    sym__definition,
    sym_predefine,
    aux_sym_specification_repeat2,
    STATE(504),
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
    [4154] = 3,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(702),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(700),
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
    [4209] = 3,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(706),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(704),
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
    [4264] = 27,
    ACTIONS(3),
    1,
    sym_comment,
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
    ACTIONS(625),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(708),
    1,
    anon_sym_RBRACE,
    STATE(493),
    1,
    sym_enum_anno,
    STATE(495),
    1,
    sym_value_header,
    STATE(501),
    1,
    sym_interface_header,
    STATE(135),
    2,
    sym_annotation_appl,
    aux_sym_interface_def_repeat1,
    STATE(497),
    2,
    sym_value_def,
    sym_value_forward_dcl,
    STATE(503),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(43),
    3,
    sym__definition,
    sym_predefine,
    aux_sym_specification_repeat2,
    STATE(504),
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
    [4367] = 3,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(712),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(710),
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
    [4422] = 3,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(706),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(704),
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
    [4474] = 27,
    ACTIONS(3),
    1,
    sym_comment,
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
    STATE(322),
    1,
    sym_scoped_name,
    STATE(463),
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
    STATE(208),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(197),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(207),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(476),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [4573] = 27,
    ACTIONS(3),
    1,
    sym_comment,
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
    STATE(322),
    1,
    sym_scoped_name,
    STATE(521),
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
    STATE(208),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(197),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(207),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(476),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [4672] = 3,
    ACTIONS(3),
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
    [4719] = 3,
    ACTIONS(3),
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
    [4766] = 3,
    ACTIONS(3),
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
    [4807] = 3,
    ACTIONS(3),
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
    [4848] = 3,
    ACTIONS(3),
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
    [4889] = 3,
    ACTIONS(3),
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
    [4930] = 5,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(742),
    1,
    anon_sym_AT,
    STATE(63),
    2,
    sym_annotation_appl,
    aux_sym_interface_def_repeat1,
    ACTIONS(740),
    5,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    ACTIONS(738),
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
    [4974] = 3,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(747),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(745),
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
    [5013] = 3,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(751),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_LPAREN,
    anon_sym_AT,
    ACTIONS(749),
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
    [5052] = 22,
    ACTIONS(3),
    1,
    sym_comment,
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
    ACTIONS(753),
    1,
    sym_boolean_type,
    STATE(307),
    1,
    sym_scoped_name,
    STATE(494),
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
    STATE(208),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(500),
    2,
    sym_integer_type,
    sym_char_type,
    STATE(197),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(207),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    [5129] = 3,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(757),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(755),
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
    [5168] = 3,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(761),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(759),
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
    [5207] = 3,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(765),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_LPAREN,
    anon_sym_AT,
    ACTIONS(763),
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
    [5246] = 3,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(769),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_LPAREN,
    anon_sym_AT,
    ACTIONS(767),
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
    [5285] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(775),
    1,
    anon_sym_LPAREN,
    ACTIONS(773),
    6,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_AT,
    ACTIONS(771),
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
    [5326] = 3,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(779),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_AT,
    ACTIONS(777),
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
    [5365] = 3,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(783),
    6,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
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
    [5403] = 3,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(787),
    5,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
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
    [5440] = 25,
    ACTIONS(3),
    1,
    sym_comment,
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
    ACTIONS(789),
    1,
    sym_identifier,
    STATE(110),
    1,
    sym_scoped_name,
    STATE(112),
    1,
    sym_unary_expr,
    STATE(122),
    1,
    sym_literal,
    STATE(123),
    1,
    sym_mult_expr,
    STATE(125),
    1,
    sym_unary_operator,
    STATE(127),
    1,
    sym_add_expr,
    STATE(130),
    1,
    sym_shift_expr,
    STATE(134),
    1,
    sym_and_expr,
    STATE(138),
    1,
    sym_xor_expr,
    STATE(142),
    1,
    sym_or_expr,
    STATE(234),
    1,
    sym_annotation_appl_param,
    STATE(382),
    1,
    sym_const_expr,
    STATE(520),
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
    STATE(116),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5520] = 25,
    ACTIONS(3),
    1,
    sym_comment,
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
    ACTIONS(789),
    1,
    sym_identifier,
    STATE(110),
    1,
    sym_scoped_name,
    STATE(112),
    1,
    sym_unary_expr,
    STATE(122),
    1,
    sym_literal,
    STATE(123),
    1,
    sym_mult_expr,
    STATE(125),
    1,
    sym_unary_operator,
    STATE(127),
    1,
    sym_add_expr,
    STATE(130),
    1,
    sym_shift_expr,
    STATE(134),
    1,
    sym_and_expr,
    STATE(138),
    1,
    sym_xor_expr,
    STATE(142),
    1,
    sym_or_expr,
    STATE(234),
    1,
    sym_annotation_appl_param,
    STATE(382),
    1,
    sym_const_expr,
    STATE(523),
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
    STATE(116),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5600] = 25,
    ACTIONS(3),
    1,
    sym_comment,
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
    ACTIONS(789),
    1,
    sym_identifier,
    STATE(110),
    1,
    sym_scoped_name,
    STATE(112),
    1,
    sym_unary_expr,
    STATE(122),
    1,
    sym_literal,
    STATE(123),
    1,
    sym_mult_expr,
    STATE(125),
    1,
    sym_unary_operator,
    STATE(127),
    1,
    sym_add_expr,
    STATE(130),
    1,
    sym_shift_expr,
    STATE(134),
    1,
    sym_and_expr,
    STATE(138),
    1,
    sym_xor_expr,
    STATE(142),
    1,
    sym_or_expr,
    STATE(234),
    1,
    sym_annotation_appl_param,
    STATE(381),
    1,
    sym_annotation_appl_params,
    STATE(382),
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
    STATE(116),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5680] = 24,
    ACTIONS(3),
    1,
    sym_comment,
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
    STATE(110),
    1,
    sym_scoped_name,
    STATE(112),
    1,
    sym_unary_expr,
    STATE(122),
    1,
    sym_literal,
    STATE(123),
    1,
    sym_mult_expr,
    STATE(125),
    1,
    sym_unary_operator,
    STATE(127),
    1,
    sym_add_expr,
    STATE(130),
    1,
    sym_shift_expr,
    STATE(134),
    1,
    sym_and_expr,
    STATE(138),
    1,
    sym_xor_expr,
    STATE(142),
    1,
    sym_or_expr,
    STATE(217),
    1,
    sym_const_expr,
    STATE(418),
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
    STATE(116),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5757] = 24,
    ACTIONS(3),
    1,
    sym_comment,
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
    STATE(110),
    1,
    sym_scoped_name,
    STATE(112),
    1,
    sym_unary_expr,
    STATE(122),
    1,
    sym_literal,
    STATE(123),
    1,
    sym_mult_expr,
    STATE(125),
    1,
    sym_unary_operator,
    STATE(127),
    1,
    sym_add_expr,
    STATE(130),
    1,
    sym_shift_expr,
    STATE(134),
    1,
    sym_and_expr,
    STATE(138),
    1,
    sym_xor_expr,
    STATE(142),
    1,
    sym_or_expr,
    STATE(217),
    1,
    sym_const_expr,
    STATE(458),
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
    STATE(116),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5834] = 24,
    ACTIONS(3),
    1,
    sym_comment,
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
    STATE(110),
    1,
    sym_scoped_name,
    STATE(112),
    1,
    sym_unary_expr,
    STATE(122),
    1,
    sym_literal,
    STATE(123),
    1,
    sym_mult_expr,
    STATE(125),
    1,
    sym_unary_operator,
    STATE(127),
    1,
    sym_add_expr,
    STATE(130),
    1,
    sym_shift_expr,
    STATE(134),
    1,
    sym_and_expr,
    STATE(138),
    1,
    sym_xor_expr,
    STATE(142),
    1,
    sym_or_expr,
    STATE(217),
    1,
    sym_const_expr,
    STATE(507),
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
    STATE(116),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5911] = 24,
    ACTIONS(3),
    1,
    sym_comment,
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
    STATE(110),
    1,
    sym_scoped_name,
    STATE(112),
    1,
    sym_unary_expr,
    STATE(122),
    1,
    sym_literal,
    STATE(123),
    1,
    sym_mult_expr,
    STATE(125),
    1,
    sym_unary_operator,
    STATE(127),
    1,
    sym_add_expr,
    STATE(130),
    1,
    sym_shift_expr,
    STATE(134),
    1,
    sym_and_expr,
    STATE(138),
    1,
    sym_xor_expr,
    STATE(142),
    1,
    sym_or_expr,
    STATE(217),
    1,
    sym_const_expr,
    STATE(426),
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
    STATE(116),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5988] = 24,
    ACTIONS(3),
    1,
    sym_comment,
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
    STATE(110),
    1,
    sym_scoped_name,
    STATE(112),
    1,
    sym_unary_expr,
    STATE(122),
    1,
    sym_literal,
    STATE(123),
    1,
    sym_mult_expr,
    STATE(125),
    1,
    sym_unary_operator,
    STATE(127),
    1,
    sym_add_expr,
    STATE(130),
    1,
    sym_shift_expr,
    STATE(134),
    1,
    sym_and_expr,
    STATE(138),
    1,
    sym_xor_expr,
    STATE(142),
    1,
    sym_or_expr,
    STATE(217),
    1,
    sym_const_expr,
    STATE(524),
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
    STATE(116),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6065] = 24,
    ACTIONS(3),
    1,
    sym_comment,
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
    STATE(110),
    1,
    sym_scoped_name,
    STATE(112),
    1,
    sym_unary_expr,
    STATE(122),
    1,
    sym_literal,
    STATE(123),
    1,
    sym_mult_expr,
    STATE(125),
    1,
    sym_unary_operator,
    STATE(127),
    1,
    sym_add_expr,
    STATE(130),
    1,
    sym_shift_expr,
    STATE(134),
    1,
    sym_and_expr,
    STATE(138),
    1,
    sym_xor_expr,
    STATE(142),
    1,
    sym_or_expr,
    STATE(217),
    1,
    sym_const_expr,
    STATE(396),
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
    STATE(116),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6142] = 24,
    ACTIONS(3),
    1,
    sym_comment,
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
    STATE(110),
    1,
    sym_scoped_name,
    STATE(112),
    1,
    sym_unary_expr,
    STATE(122),
    1,
    sym_literal,
    STATE(123),
    1,
    sym_mult_expr,
    STATE(125),
    1,
    sym_unary_operator,
    STATE(127),
    1,
    sym_add_expr,
    STATE(130),
    1,
    sym_shift_expr,
    STATE(134),
    1,
    sym_and_expr,
    STATE(138),
    1,
    sym_xor_expr,
    STATE(142),
    1,
    sym_or_expr,
    STATE(217),
    1,
    sym_const_expr,
    STATE(327),
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
    STATE(116),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6219] = 3,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(763),
    4,
    anon_sym_LT,
    anon_sym_GT,
    anon_sym_SLASH,
    anon_sym_COLON,
    ACTIONS(765),
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
    [6253] = 3,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(767),
    4,
    anon_sym_LT,
    anon_sym_GT,
    anon_sym_SLASH,
    anon_sym_COLON,
    ACTIONS(769),
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
    [6287] = 17,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(45),
    1,
    anon_sym_long,
    ACTIONS(63),
    1,
    anon_sym_unsignedlong,
    ACTIONS(793),
    1,
    anon_sym_int32,
    ACTIONS(795),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(799),
    1,
    sym_signed_tiny_int,
    ACTIONS(801),
    1,
    anon_sym_uint32,
    STATE(446),
    1,
    sym_integer_type,
    STATE(447),
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
    ACTIONS(791),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(797),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(208),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(197),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(207),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    [6349] = 23,
    ACTIONS(3),
    1,
    sym_comment,
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
    STATE(110),
    1,
    sym_scoped_name,
    STATE(112),
    1,
    sym_unary_expr,
    STATE(122),
    1,
    sym_literal,
    STATE(123),
    1,
    sym_mult_expr,
    STATE(125),
    1,
    sym_unary_operator,
    STATE(127),
    1,
    sym_add_expr,
    STATE(130),
    1,
    sym_shift_expr,
    STATE(134),
    1,
    sym_and_expr,
    STATE(138),
    1,
    sym_xor_expr,
    STATE(142),
    1,
    sym_or_expr,
    STATE(407),
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
    STATE(116),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6423] = 3,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(749),
    4,
    anon_sym_LT,
    anon_sym_GT,
    anon_sym_SLASH,
    anon_sym_COLON,
    ACTIONS(751),
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
    [6457] = 23,
    ACTIONS(3),
    1,
    sym_comment,
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
    STATE(110),
    1,
    sym_scoped_name,
    STATE(112),
    1,
    sym_unary_expr,
    STATE(122),
    1,
    sym_literal,
    STATE(123),
    1,
    sym_mult_expr,
    STATE(125),
    1,
    sym_unary_operator,
    STATE(127),
    1,
    sym_add_expr,
    STATE(130),
    1,
    sym_shift_expr,
    STATE(134),
    1,
    sym_and_expr,
    STATE(138),
    1,
    sym_xor_expr,
    STATE(142),
    1,
    sym_or_expr,
    STATE(344),
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
    STATE(116),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6531] = 23,
    ACTIONS(3),
    1,
    sym_comment,
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
    STATE(110),
    1,
    sym_scoped_name,
    STATE(112),
    1,
    sym_unary_expr,
    STATE(122),
    1,
    sym_literal,
    STATE(123),
    1,
    sym_mult_expr,
    STATE(125),
    1,
    sym_unary_operator,
    STATE(127),
    1,
    sym_add_expr,
    STATE(130),
    1,
    sym_shift_expr,
    STATE(134),
    1,
    sym_and_expr,
    STATE(138),
    1,
    sym_xor_expr,
    STATE(142),
    1,
    sym_or_expr,
    STATE(398),
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
    STATE(116),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6605] = 23,
    ACTIONS(3),
    1,
    sym_comment,
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
    STATE(110),
    1,
    sym_scoped_name,
    STATE(112),
    1,
    sym_unary_expr,
    STATE(122),
    1,
    sym_literal,
    STATE(123),
    1,
    sym_mult_expr,
    STATE(125),
    1,
    sym_unary_operator,
    STATE(127),
    1,
    sym_add_expr,
    STATE(130),
    1,
    sym_shift_expr,
    STATE(134),
    1,
    sym_and_expr,
    STATE(138),
    1,
    sym_xor_expr,
    STATE(142),
    1,
    sym_or_expr,
    STATE(475),
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
    STATE(116),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6679] = 23,
    ACTIONS(3),
    1,
    sym_comment,
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
    STATE(110),
    1,
    sym_scoped_name,
    STATE(112),
    1,
    sym_unary_expr,
    STATE(122),
    1,
    sym_literal,
    STATE(123),
    1,
    sym_mult_expr,
    STATE(125),
    1,
    sym_unary_operator,
    STATE(127),
    1,
    sym_add_expr,
    STATE(130),
    1,
    sym_shift_expr,
    STATE(134),
    1,
    sym_and_expr,
    STATE(138),
    1,
    sym_xor_expr,
    STATE(142),
    1,
    sym_or_expr,
    STATE(416),
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
    STATE(116),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6753] = 23,
    ACTIONS(3),
    1,
    sym_comment,
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
    STATE(110),
    1,
    sym_scoped_name,
    STATE(112),
    1,
    sym_unary_expr,
    STATE(122),
    1,
    sym_literal,
    STATE(123),
    1,
    sym_mult_expr,
    STATE(125),
    1,
    sym_unary_operator,
    STATE(127),
    1,
    sym_add_expr,
    STATE(130),
    1,
    sym_shift_expr,
    STATE(134),
    1,
    sym_and_expr,
    STATE(138),
    1,
    sym_xor_expr,
    STATE(142),
    1,
    sym_or_expr,
    STATE(462),
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
    STATE(116),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6827] = 23,
    ACTIONS(3),
    1,
    sym_comment,
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
    STATE(110),
    1,
    sym_scoped_name,
    STATE(112),
    1,
    sym_unary_expr,
    STATE(122),
    1,
    sym_literal,
    STATE(123),
    1,
    sym_mult_expr,
    STATE(125),
    1,
    sym_unary_operator,
    STATE(127),
    1,
    sym_add_expr,
    STATE(130),
    1,
    sym_shift_expr,
    STATE(134),
    1,
    sym_and_expr,
    STATE(138),
    1,
    sym_xor_expr,
    STATE(142),
    1,
    sym_or_expr,
    STATE(515),
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
    STATE(116),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6901] = 21,
    ACTIONS(3),
    1,
    sym_comment,
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
    STATE(110),
    1,
    sym_scoped_name,
    STATE(112),
    1,
    sym_unary_expr,
    STATE(122),
    1,
    sym_literal,
    STATE(123),
    1,
    sym_mult_expr,
    STATE(125),
    1,
    sym_unary_operator,
    STATE(127),
    1,
    sym_add_expr,
    STATE(130),
    1,
    sym_shift_expr,
    STATE(134),
    1,
    sym_and_expr,
    STATE(137),
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
    STATE(116),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6969] = 20,
    ACTIONS(3),
    1,
    sym_comment,
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
    STATE(110),
    1,
    sym_scoped_name,
    STATE(112),
    1,
    sym_unary_expr,
    STATE(122),
    1,
    sym_literal,
    STATE(123),
    1,
    sym_mult_expr,
    STATE(125),
    1,
    sym_unary_operator,
    STATE(127),
    1,
    sym_add_expr,
    STATE(130),
    1,
    sym_shift_expr,
    STATE(132),
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
    STATE(116),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7034] = 19,
    ACTIONS(3),
    1,
    sym_comment,
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
    STATE(110),
    1,
    sym_scoped_name,
    STATE(112),
    1,
    sym_unary_expr,
    STATE(122),
    1,
    sym_literal,
    STATE(123),
    1,
    sym_mult_expr,
    STATE(125),
    1,
    sym_unary_operator,
    STATE(127),
    1,
    sym_add_expr,
    STATE(131),
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
    STATE(116),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7096] = 18,
    ACTIONS(3),
    1,
    sym_comment,
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
    STATE(110),
    1,
    sym_scoped_name,
    STATE(112),
    1,
    sym_unary_expr,
    STATE(122),
    1,
    sym_literal,
    STATE(123),
    1,
    sym_mult_expr,
    STATE(125),
    1,
    sym_unary_operator,
    STATE(128),
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
    STATE(116),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7155] = 5,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(805),
    1,
    sym_preproc_directive,
    ACTIONS(808),
    2,
    anon_sym_AT,
    anon_sym_POUNDdefine,
    STATE(100),
    2,
    sym_preproc_call,
    aux_sym_specification_repeat1,
    ACTIONS(803),
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
    [7188] = 17,
    ACTIONS(3),
    1,
    sym_comment,
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
    STATE(110),
    1,
    sym_scoped_name,
    STATE(112),
    1,
    sym_unary_expr,
    STATE(119),
    1,
    sym_mult_expr,
    STATE(122),
    1,
    sym_literal,
    STATE(125),
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
    STATE(116),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7244] = 3,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(812),
    1,
    anon_sym_AT,
    ACTIONS(810),
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
    [7272] = 3,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(816),
    1,
    anon_sym_AT,
    ACTIONS(814),
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
    [7300] = 3,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(820),
    3,
    sym_preproc_directive,
    anon_sym_AT,
    anon_sym_POUNDdefine,
    ACTIONS(818),
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
    [7327] = 3,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(824),
    1,
    anon_sym_AT,
    ACTIONS(822),
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
    [7354] = 16,
    ACTIONS(3),
    1,
    sym_comment,
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
    STATE(110),
    1,
    sym_scoped_name,
    STATE(111),
    1,
    sym_unary_expr,
    STATE(122),
    1,
    sym_literal,
    STATE(125),
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
    STATE(116),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7407] = 3,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(828),
    3,
    sym_preproc_directive,
    anon_sym_AT,
    anon_sym_POUNDdefine,
    ACTIONS(826),
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
    [7434] = 3,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(832),
    1,
    anon_sym_AT,
    ACTIONS(830),
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
    [7461] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(834),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(836),
    3,
    anon_sym_GT,
    anon_sym_SLASH,
    anon_sym_COLON,
    ACTIONS(838),
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
    [7488] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(834),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(840),
    3,
    anon_sym_GT,
    anon_sym_SLASH,
    anon_sym_COLON,
    ACTIONS(842),
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
    [7515] = 3,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(844),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(846),
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
    [7539] = 3,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(848),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(850),
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
    [7563] = 3,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(852),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(854),
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
    [7587] = 3,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(856),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(858),
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
    [7611] = 3,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(860),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(862),
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
    [7635] = 3,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(864),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(866),
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
    [7659] = 3,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(868),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(870),
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
    [7683] = 3,
    ACTIONS(3),
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
    [7707] = 5,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(876),
    1,
    anon_sym_GT,
    ACTIONS(882),
    1,
    anon_sym_SLASH,
    ACTIONS(880),
    2,
    anon_sym_STAR,
    anon_sym_PERCENT,
    ACTIONS(878),
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
    [7735] = 3,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(836),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(838),
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
    [7759] = 3,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(884),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(886),
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
    [7783] = 3,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(840),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(842),
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
    [7807] = 5,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(882),
    1,
    anon_sym_SLASH,
    ACTIONS(888),
    1,
    anon_sym_GT,
    ACTIONS(880),
    2,
    anon_sym_STAR,
    anon_sym_PERCENT,
    ACTIONS(890),
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
    [7835] = 3,
    ACTIONS(3),
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
    [7859] = 12,
    ACTIONS(3),
    1,
    sym_comment,
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
    ACTIONS(896),
    1,
    anon_sym_LPAREN,
    STATE(109),
    1,
    sym_scoped_name,
    STATE(120),
    1,
    sym_literal,
    ACTIONS(367),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(116),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [7899] = 6,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(834),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(840),
    1,
    anon_sym_SLASH,
    ACTIONS(898),
    1,
    anon_sym_GT,
    ACTIONS(900),
    1,
    anon_sym_COMMA,
    ACTIONS(842),
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
    [7926] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(902),
    1,
    anon_sym_GT,
    ACTIONS(906),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(904),
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
    [7949] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(908),
    1,
    anon_sym_GT,
    ACTIONS(906),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(910),
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
    [7972] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(767),
    1,
    anon_sym_SLASH,
    ACTIONS(912),
    1,
    anon_sym_EQ,
    ACTIONS(769),
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
    [7995] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(914),
    1,
    anon_sym_GT,
    ACTIONS(918),
    2,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    ACTIONS(916),
    8,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [8016] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(920),
    1,
    anon_sym_GT,
    ACTIONS(918),
    2,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    ACTIONS(922),
    8,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [8037] = 3,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(926),
    1,
    anon_sym_DOLLAR,
    ACTIONS(924),
    8,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [8054] = 3,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(928),
    4,
    anon_sym_COLON_COLON,
    anon_sym_LPAREN,
    anon_sym_DQUOTE,
    anon_sym_SQUOTE,
    ACTIONS(930),
    5,
    anon_sym_L,
    anon_sym_TRUE,
    anon_sym_FALSE,
    sym_number_literal,
    sym_identifier,
    [8071] = 3,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(926),
    1,
    anon_sym_DOLLAR,
    ACTIONS(932),
    8,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [8088] = 8,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(934),
    1,
    anon_sym_interface,
    ACTIONS(936),
    1,
    anon_sym_local,
    ACTIONS(938),
    1,
    anon_sym_bitmask,
    ACTIONS(940),
    1,
    anon_sym_AT,
    ACTIONS(942),
    1,
    anon_sym_struct,
    STATE(486),
    1,
    sym_interface_header,
    STATE(141),
    2,
    sym_annotation_appl,
    aux_sym_interface_def_repeat1,
    [8114] = 9,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(944),
    1,
    anon_sym_COMMA,
    ACTIONS(946),
    1,
    anon_sym_SEMI,
    ACTIONS(948),
    1,
    anon_sym_getraises,
    ACTIONS(950),
    1,
    anon_sym_setraises,
    STATE(233),
    1,
    sym_get_excep_expr,
    STATE(235),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    STATE(379),
    1,
    sym_set_excep_expr,
    STATE(386),
    1,
    sym_attr_raises_expr,
    [8142] = 3,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(954),
    1,
    anon_sym_CARET,
    ACTIONS(952),
    7,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [8158] = 3,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(954),
    1,
    anon_sym_CARET,
    ACTIONS(956),
    7,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [8174] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(958),
    7,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    anon_sym_SEMI,
    anon_sym_raises,
    anon_sym_getraises,
    anon_sym_setraises,
    anon_sym_default,
    [8187] = 7,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(960),
    1,
    anon_sym_RPAREN,
    ACTIONS(962),
    1,
    anon_sym_in,
    STATE(32),
    1,
    sym_param_attribute,
    STATE(250),
    1,
    sym_param_dcl,
    STATE(383),
    1,
    sym_parameter_dcls,
    ACTIONS(964),
    2,
    anon_sym_out,
    anon_sym_inout,
    [8210] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(966),
    1,
    anon_sym_AT,
    STATE(141),
    2,
    sym_annotation_appl,
    aux_sym_interface_def_repeat1,
    ACTIONS(740),
    4,
    anon_sym_interface,
    anon_sym_local,
    anon_sym_bitmask,
    anon_sym_struct,
    [8227] = 3,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(971),
    1,
    anon_sym_PIPE,
    ACTIONS(969),
    6,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [8242] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(834),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(973),
    1,
    anon_sym_LPAREN,
    ACTIONS(773),
    5,
    anon_sym_interface,
    anon_sym_local,
    anon_sym_bitmask,
    anon_sym_AT,
    anon_sym_struct,
    [8259] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(751),
    6,
    anon_sym_COLON_COLON,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_LPAREN,
    anon_sym_AT,
    sym_identifier,
    [8271] = 6,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(975),
    1,
    anon_sym_RBRACE,
    ACTIONS(977),
    1,
    anon_sym_default,
    ACTIONS(979),
    1,
    anon_sym_case,
    STATE(12),
    1,
    sym_case_label,
    STATE(153),
    2,
    sym_case,
    aux_sym_union_def_repeat1,
    [8291] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(981),
    1,
    anon_sym_LBRACK,
    STATE(148),
    2,
    sym_fixed_array_size,
    aux_sym_array_declarator_repeat1,
    ACTIONS(958),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [8307] = 6,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(977),
    1,
    anon_sym_default,
    ACTIONS(979),
    1,
    anon_sym_case,
    ACTIONS(983),
    1,
    anon_sym_RBRACE,
    STATE(12),
    1,
    sym_case_label,
    STATE(145),
    2,
    sym_case,
    aux_sym_union_def_repeat1,
    [8327] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(981),
    1,
    anon_sym_LBRACK,
    STATE(149),
    2,
    sym_fixed_array_size,
    aux_sym_array_declarator_repeat1,
    ACTIONS(985),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [8343] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(989),
    1,
    anon_sym_LBRACK,
    STATE(149),
    2,
    sym_fixed_array_size,
    aux_sym_array_declarator_repeat1,
    ACTIONS(987),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [8359] = 6,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(992),
    1,
    anon_sym_RBRACE,
    ACTIONS(994),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(996),
    1,
    sym_identifier,
    STATE(296),
    1,
    sym_enumerator,
    STATE(200),
    2,
    sym_enum_modifier,
    aux_sym_enumerator_repeat1,
    [8379] = 6,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(998),
    1,
    anon_sym_RBRACE,
    ACTIONS(1000),
    1,
    anon_sym_AT,
    ACTIONS(1002),
    1,
    sym_identifier,
    STATE(255),
    1,
    sym_bit_value,
    STATE(158),
    2,
    sym_annotation_appl,
    aux_sym_interface_def_repeat1,
    [8399] = 6,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1000),
    1,
    anon_sym_AT,
    ACTIONS(1002),
    1,
    sym_identifier,
    ACTIONS(1004),
    1,
    anon_sym_RBRACE,
    STATE(277),
    1,
    sym_bit_value,
    STATE(160),
    2,
    sym_annotation_appl,
    aux_sym_interface_def_repeat1,
    [8419] = 6,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1006),
    1,
    anon_sym_RBRACE,
    ACTIONS(1008),
    1,
    anon_sym_default,
    ACTIONS(1011),
    1,
    anon_sym_case,
    STATE(12),
    1,
    sym_case_label,
    STATE(153),
    2,
    sym_case,
    aux_sym_union_def_repeat1,
    [8439] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(769),
    6,
    anon_sym_COLON_COLON,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_LPAREN,
    anon_sym_AT,
    sym_identifier,
    [8451] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(765),
    6,
    anon_sym_COLON_COLON,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_LPAREN,
    anon_sym_AT,
    sym_identifier,
    [8463] = 6,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(994),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(996),
    1,
    sym_identifier,
    ACTIONS(1014),
    1,
    anon_sym_RBRACE,
    STATE(216),
    1,
    sym_enumerator,
    STATE(200),
    2,
    sym_enum_modifier,
    aux_sym_enumerator_repeat1,
    [8483] = 5,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1016),
    1,
    sym_identifier,
    STATE(178),
    1,
    sym_declarator,
    STATE(258),
    1,
    sym_declarators,
    STATE(237),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [8500] = 5,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1000),
    1,
    anon_sym_AT,
    ACTIONS(1002),
    1,
    sym_identifier,
    STATE(275),
    1,
    sym_bit_value,
    STATE(199),
    2,
    sym_annotation_appl,
    aux_sym_interface_def_repeat1,
    [8517] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(783),
    5,
    anon_sym_interface,
    anon_sym_local,
    anon_sym_bitmask,
    anon_sym_AT,
    anon_sym_struct,
    [8528] = 5,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1000),
    1,
    anon_sym_AT,
    ACTIONS(1002),
    1,
    sym_identifier,
    STATE(255),
    1,
    sym_bit_value,
    STATE(199),
    2,
    sym_annotation_appl,
    aux_sym_interface_def_repeat1,
    [8545] = 5,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1016),
    1,
    sym_identifier,
    STATE(260),
    1,
    sym_any_declarator,
    STATE(435),
    1,
    sym_any_declarators,
    STATE(343),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [8562] = 5,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1016),
    1,
    sym_identifier,
    STATE(178),
    1,
    sym_declarator,
    STATE(480),
    1,
    sym_declarators,
    STATE(237),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [8579] = 6,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(944),
    1,
    anon_sym_COMMA,
    ACTIONS(1018),
    1,
    anon_sym_SEMI,
    ACTIONS(1020),
    1,
    anon_sym_raises,
    STATE(289),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    STATE(422),
    1,
    sym_raises_expr,
    [8598] = 5,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(938),
    1,
    anon_sym_bitmask,
    ACTIONS(940),
    1,
    anon_sym_AT,
    ACTIONS(942),
    1,
    anon_sym_struct,
    STATE(141),
    2,
    sym_annotation_appl,
    aux_sym_interface_def_repeat1,
    [8615] = 5,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(962),
    1,
    anon_sym_in,
    STATE(32),
    1,
    sym_param_attribute,
    STATE(324),
    1,
    sym_param_dcl,
    ACTIONS(964),
    2,
    anon_sym_out,
    anon_sym_inout,
    [8632] = 5,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1000),
    1,
    anon_sym_AT,
    ACTIONS(1002),
    1,
    sym_identifier,
    STATE(332),
    1,
    sym_bit_value,
    STATE(170),
    2,
    sym_annotation_appl,
    aux_sym_interface_def_repeat1,
    [8649] = 5,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1022),
    1,
    anon_sym_RBRACE,
    ACTIONS(1024),
    1,
    anon_sym_bitfield,
    STATE(285),
    1,
    sym_bitfield_spec,
    STATE(169),
    2,
    sym_bitfield,
    aux_sym_bitset_dcl_repeat1,
    [8666] = 5,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1026),
    1,
    anon_sym_RBRACE,
    ACTIONS(1028),
    1,
    anon_sym_bitfield,
    STATE(285),
    1,
    sym_bitfield_spec,
    STATE(168),
    2,
    sym_bitfield,
    aux_sym_bitset_dcl_repeat1,
    [8683] = 5,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1024),
    1,
    anon_sym_bitfield,
    ACTIONS(1031),
    1,
    anon_sym_RBRACE,
    STATE(285),
    1,
    sym_bitfield_spec,
    STATE(168),
    2,
    sym_bitfield,
    aux_sym_bitset_dcl_repeat1,
    [8700] = 5,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1000),
    1,
    anon_sym_AT,
    ACTIONS(1002),
    1,
    sym_identifier,
    STATE(358),
    1,
    sym_bit_value,
    STATE(199),
    2,
    sym_annotation_appl,
    aux_sym_interface_def_repeat1,
    [8717] = 5,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(994),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(996),
    1,
    sym_identifier,
    STATE(365),
    1,
    sym_enumerator,
    STATE(200),
    2,
    sym_enum_modifier,
    aux_sym_enumerator_repeat1,
    [8734] = 6,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1033),
    1,
    anon_sym_LBRACE,
    ACTIONS(1035),
    1,
    anon_sym_COLON,
    ACTIONS(1037),
    1,
    anon_sym_SEMI,
    ACTIONS(1039),
    1,
    anon_sym_supports,
    STATE(442),
    1,
    sym_value_inheritance_spec,
    [8753] = 5,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1024),
    1,
    anon_sym_bitfield,
    ACTIONS(1041),
    1,
    anon_sym_RBRACE,
    STATE(285),
    1,
    sym_bitfield_spec,
    STATE(174),
    2,
    sym_bitfield,
    aux_sym_bitset_dcl_repeat1,
    [8770] = 5,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1024),
    1,
    anon_sym_bitfield,
    ACTIONS(1043),
    1,
    anon_sym_RBRACE,
    STATE(285),
    1,
    sym_bitfield_spec,
    STATE(168),
    2,
    sym_bitfield,
    aux_sym_bitset_dcl_repeat1,
    [8787] = 5,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1016),
    1,
    sym_identifier,
    STATE(178),
    1,
    sym_declarator,
    STATE(239),
    1,
    sym_declarators,
    STATE(237),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [8804] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1016),
    1,
    sym_identifier,
    STATE(283),
    1,
    sym_declarator,
    STATE(237),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [8818] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1045),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [8828] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1047),
    1,
    anon_sym_COMMA,
    STATE(188),
    1,
    aux_sym_declarators_repeat1,
    ACTIONS(1049),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    [8842] = 5,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(353),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1051),
    1,
    sym_identifier,
    STATE(221),
    1,
    sym_scoped_name,
    STATE(360),
    1,
    sym_value_name,
    [8858] = 5,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(353),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1051),
    1,
    sym_identifier,
    STATE(220),
    1,
    sym_scoped_name,
    STATE(406),
    1,
    sym_interface_name,
    [8874] = 5,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(353),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1051),
    1,
    sym_identifier,
    STATE(220),
    1,
    sym_scoped_name,
    STATE(295),
    1,
    sym_interface_name,
    [8890] = 5,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(353),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1051),
    1,
    sym_identifier,
    STATE(220),
    1,
    sym_scoped_name,
    STATE(325),
    1,
    sym_interface_name,
    [8906] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1053),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1055),
    1,
    anon_sym_LPAREN,
    ACTIONS(773),
    2,
    anon_sym_AT,
    sym_identifier,
    [8920] = 5,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(834),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1057),
    1,
    anon_sym_COMMA,
    ACTIONS(1059),
    1,
    anon_sym_RPAREN,
    STATE(268),
    1,
    aux_sym_raises_expr_repeat1,
    [8936] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1061),
    1,
    anon_sym_COMMA,
    STATE(185),
    1,
    aux_sym_declarators_repeat1,
    ACTIONS(1064),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    [8950] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1066),
    1,
    anon_sym_LBRACE,
    ACTIONS(1068),
    1,
    anon_sym_COLON,
    ACTIONS(1070),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [8964] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1072),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(1075),
    1,
    sym_identifier,
    STATE(187),
    2,
    sym_enum_modifier,
    aux_sym_enumerator_repeat1,
    [8978] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1047),
    1,
    anon_sym_COMMA,
    STATE(185),
    1,
    aux_sym_declarators_repeat1,
    ACTIONS(1077),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    [8992] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1016),
    1,
    sym_identifier,
    STATE(489),
    1,
    sym_declarator,
    STATE(237),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [9006] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1079),
    4,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_LBRACK,
    [9016] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1081),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [9026] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1083),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [9036] = 5,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1085),
    1,
    anon_sym_LBRACE,
    ACTIONS(1087),
    1,
    anon_sym_COLON,
    ACTIONS(1089),
    1,
    anon_sym_SEMI,
    STATE(445),
    1,
    sym_interface_inheritance_spec,
    [9052] = 5,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(353),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1051),
    1,
    sym_identifier,
    STATE(220),
    1,
    sym_scoped_name,
    STATE(404),
    1,
    sym_interface_name,
    [9068] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1091),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [9078] = 3,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1053),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(900),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [9090] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1093),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [9100] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1016),
    1,
    sym_identifier,
    STATE(306),
    1,
    sym_any_declarator,
    STATE(343),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [9114] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(740),
    1,
    sym_identifier,
    ACTIONS(1095),
    1,
    anon_sym_AT,
    STATE(199),
    2,
    sym_annotation_appl,
    aux_sym_interface_def_repeat1,
    [9128] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(994),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(1098),
    1,
    sym_identifier,
    STATE(187),
    2,
    sym_enum_modifier,
    aux_sym_enumerator_repeat1,
    [9142] = 5,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1100),
    1,
    anon_sym_RPAREN,
    ACTIONS(1102),
    1,
    anon_sym_in,
    STATE(273),
    1,
    sym_init_param_dcl,
    STATE(389),
    1,
    sym_init_param_dcls,
    [9158] = 3,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1104),
    1,
    anon_sym_LT,
    ACTIONS(1106),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [9170] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1108),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [9180] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1110),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [9190] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1112),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [9200] = 5,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(834),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1057),
    1,
    anon_sym_COMMA,
    ACTIONS(1114),
    1,
    anon_sym_RPAREN,
    STATE(264),
    1,
    aux_sym_raises_expr_repeat1,
    [9216] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1116),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [9226] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1118),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [9236] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(353),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1051),
    1,
    sym_identifier,
    STATE(368),
    1,
    sym_scoped_name,
    [9249] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(75),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1120),
    1,
    sym_identifier,
    STATE(183),
    1,
    sym_scoped_name,
    [9262] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1122),
    1,
    anon_sym_COMMA,
    ACTIONS(1125),
    1,
    anon_sym_RPAREN,
    STATE(211),
    1,
    aux_sym_annotation_appl_params_repeat1,
    [9275] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1127),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [9284] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(353),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1051),
    1,
    sym_identifier,
    STATE(184),
    1,
    sym_scoped_name,
    [9297] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1129),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [9306] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1131),
    1,
    anon_sym_COMMA,
    ACTIONS(1134),
    1,
    anon_sym_RPAREN,
    STATE(215),
    1,
    aux_sym_parameter_dcls_repeat1,
    [9319] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(992),
    1,
    anon_sym_RBRACE,
    ACTIONS(1136),
    1,
    anon_sym_COMMA,
    STATE(284),
    1,
    aux_sym_enum_dcl_repeat1,
    [9332] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1138),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [9341] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1140),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [9350] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1142),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [9359] = 3,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(834),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1144),
    2,
    anon_sym_COMMA,
    anon_sym_LBRACE,
    [9370] = 3,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(834),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1146),
    2,
    anon_sym_LBRACE,
    anon_sym_supports,
    [9381] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1148),
    1,
    anon_sym_COMMA,
    ACTIONS(1150),
    1,
    anon_sym_SEMI,
    STATE(291),
    1,
    aux_sym_any_declarators_repeat1,
    [9394] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1152),
    1,
    anon_sym_COMMA,
    ACTIONS(1155),
    1,
    anon_sym_RPAREN,
    STATE(223),
    1,
    aux_sym_init_param_dcls_repeat1,
    [9407] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1157),
    1,
    sym_identifier,
    STATE(136),
    1,
    sym_simple_declarator,
    STATE(485),
    1,
    sym_attr_declarator,
    [9420] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1159),
    1,
    anon_sym_GT,
    ACTIONS(1161),
    1,
    anon_sym_COMMA,
    STATE(280),
    1,
    aux_sym_actual_parameters_repeat1,
    [9433] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1163),
    1,
    anon_sym_GT,
    ACTIONS(1165),
    1,
    anon_sym_COMMA,
    STATE(226),
    1,
    aux_sym_actual_parameters_repeat1,
    [9446] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1168),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [9455] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1170),
    1,
    anon_sym_COMMA,
    ACTIONS(1173),
    1,
    anon_sym_RBRACE,
    STATE(228),
    1,
    aux_sym_enum_dcl_repeat1,
    [9468] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1175),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [9477] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1177),
    1,
    anon_sym_GT,
    ACTIONS(1179),
    1,
    anon_sym_COMMA,
    STATE(278),
    1,
    aux_sym_formal_parameters_repeat1,
    [9490] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1181),
    1,
    anon_sym_SEMI,
    ACTIONS(1183),
    1,
    anon_sym_switch,
    ACTIONS(1185),
    1,
    sym_identifier,
    [9503] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(900),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [9512] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(950),
    1,
    anon_sym_setraises,
    ACTIONS(1187),
    1,
    anon_sym_SEMI,
    STATE(428),
    1,
    sym_set_excep_expr,
    [9525] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1189),
    1,
    anon_sym_COMMA,
    ACTIONS(1191),
    1,
    anon_sym_RPAREN,
    STATE(276),
    1,
    aux_sym_annotation_appl_params_repeat1,
    [9538] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(944),
    1,
    anon_sym_COMMA,
    ACTIONS(1193),
    1,
    anon_sym_SEMI,
    STATE(266),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    [9551] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(353),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1051),
    1,
    sym_identifier,
    STATE(318),
    1,
    sym_scoped_name,
    [9564] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1195),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [9573] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1085),
    1,
    anon_sym_LBRACE,
    ACTIONS(1087),
    1,
    anon_sym_COLON,
    STATE(445),
    1,
    sym_interface_inheritance_spec,
    [9586] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1197),
    1,
    anon_sym_SEMI,
    ACTIONS(1199),
    1,
    anon_sym_default,
    STATE(464),
    1,
    sym_default,
    [9599] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1201),
    1,
    anon_sym_COMMA,
    ACTIONS(1203),
    1,
    anon_sym_RBRACE,
    STATE(245),
    1,
    aux_sym_bitmask_dcl_repeat1,
    [9612] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(353),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1051),
    1,
    sym_identifier,
    STATE(337),
    1,
    sym_scoped_name,
    [9625] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1020),
    1,
    anon_sym_raises,
    ACTIONS(1205),
    1,
    anon_sym_SEMI,
    STATE(430),
    1,
    sym_raises_expr,
    [9638] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1201),
    1,
    anon_sym_COMMA,
    ACTIONS(1207),
    1,
    anon_sym_RBRACE,
    STATE(245),
    1,
    aux_sym_bitmask_dcl_repeat1,
    [9651] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1209),
    1,
    anon_sym_COMMA,
    ACTIONS(1211),
    1,
    anon_sym_LBRACE,
    STATE(256),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    [9664] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1213),
    1,
    anon_sym_COMMA,
    ACTIONS(1216),
    1,
    anon_sym_RBRACE,
    STATE(245),
    1,
    aux_sym_bitmask_dcl_repeat1,
    [9677] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(769),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1218),
    1,
    anon_sym_LT,
    ACTIONS(1220),
    1,
    anon_sym_LBRACE,
    [9690] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1222),
    1,
    anon_sym_COMMA,
    ACTIONS(1224),
    1,
    anon_sym_RPAREN,
    STATE(223),
    1,
    aux_sym_init_param_dcls_repeat1,
    [9703] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1226),
    1,
    anon_sym_SEMI,
    ACTIONS(1228),
    1,
    sym_identifier,
    STATE(253),
    1,
    aux_sym_bitfield_repeat1,
    [9716] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(353),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1051),
    1,
    sym_identifier,
    STATE(354),
    1,
    sym_scoped_name,
    [9729] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1230),
    1,
    anon_sym_COMMA,
    ACTIONS(1232),
    1,
    anon_sym_RPAREN,
    STATE(257),
    1,
    aux_sym_parameter_dcls_repeat1,
    [9742] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1020),
    1,
    anon_sym_raises,
    ACTIONS(1234),
    1,
    anon_sym_SEMI,
    STATE(467),
    1,
    sym_raises_expr,
    [9755] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1236),
    1,
    anon_sym_GT,
    ACTIONS(1238),
    1,
    anon_sym_COMMA,
    STATE(252),
    1,
    aux_sym_formal_parameters_repeat1,
    [9768] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1241),
    1,
    anon_sym_SEMI,
    ACTIONS(1243),
    1,
    sym_identifier,
    STATE(253),
    1,
    aux_sym_bitfield_repeat1,
    [9781] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1201),
    1,
    anon_sym_COMMA,
    ACTIONS(1246),
    1,
    anon_sym_RBRACE,
    STATE(245),
    1,
    aux_sym_bitmask_dcl_repeat1,
    [9794] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1201),
    1,
    anon_sym_COMMA,
    ACTIONS(1246),
    1,
    anon_sym_RBRACE,
    STATE(240),
    1,
    aux_sym_bitmask_dcl_repeat1,
    [9807] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1248),
    1,
    anon_sym_COMMA,
    ACTIONS(1251),
    1,
    anon_sym_LBRACE,
    STATE(256),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    [9820] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1230),
    1,
    anon_sym_COMMA,
    ACTIONS(1253),
    1,
    anon_sym_RPAREN,
    STATE(215),
    1,
    aux_sym_parameter_dcls_repeat1,
    [9833] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1199),
    1,
    anon_sym_default,
    ACTIONS(1255),
    1,
    anon_sym_SEMI,
    STATE(401),
    1,
    sym_default,
    [9846] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1257),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [9855] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1148),
    1,
    anon_sym_COMMA,
    ACTIONS(1259),
    1,
    anon_sym_SEMI,
    STATE(222),
    1,
    aux_sym_any_declarators_repeat1,
    [9868] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(353),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1051),
    1,
    sym_identifier,
    STATE(269),
    1,
    sym_scoped_name,
    [9881] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1020),
    1,
    anon_sym_raises,
    ACTIONS(1261),
    1,
    anon_sym_SEMI,
    STATE(436),
    1,
    sym_raises_expr,
    [9894] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1020),
    1,
    anon_sym_raises,
    ACTIONS(1263),
    1,
    anon_sym_SEMI,
    STATE(461),
    1,
    sym_raises_expr,
    [9907] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1057),
    1,
    anon_sym_COMMA,
    ACTIONS(1265),
    1,
    anon_sym_RPAREN,
    STATE(270),
    1,
    aux_sym_raises_expr_repeat1,
    [9920] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1267),
    1,
    anon_sym_GT,
    ACTIONS(1269),
    1,
    anon_sym_COMMA,
    STATE(271),
    1,
    aux_sym_formal_parameter_names_repeat1,
    [9933] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1271),
    1,
    anon_sym_COMMA,
    ACTIONS(1274),
    1,
    anon_sym_SEMI,
    STATE(266),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    [9946] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1276),
    3,
    anon_sym_RBRACE,
    anon_sym_default,
    anon_sym_case,
    [9955] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1057),
    1,
    anon_sym_COMMA,
    ACTIONS(1278),
    1,
    anon_sym_RPAREN,
    STATE(270),
    1,
    aux_sym_raises_expr_repeat1,
    [9968] = 3,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(834),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1280),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [9979] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1280),
    1,
    anon_sym_RPAREN,
    ACTIONS(1282),
    1,
    anon_sym_COMMA,
    STATE(270),
    1,
    aux_sym_raises_expr_repeat1,
    [9992] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1269),
    1,
    anon_sym_COMMA,
    ACTIONS(1285),
    1,
    anon_sym_GT,
    STATE(272),
    1,
    aux_sym_formal_parameter_names_repeat1,
    [10005] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1287),
    1,
    anon_sym_GT,
    ACTIONS(1289),
    1,
    anon_sym_COMMA,
    STATE(272),
    1,
    aux_sym_formal_parameter_names_repeat1,
    [10018] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1222),
    1,
    anon_sym_COMMA,
    ACTIONS(1292),
    1,
    anon_sym_RPAREN,
    STATE(247),
    1,
    aux_sym_init_param_dcls_repeat1,
    [10031] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1136),
    1,
    anon_sym_COMMA,
    ACTIONS(1294),
    1,
    anon_sym_RBRACE,
    STATE(228),
    1,
    aux_sym_enum_dcl_repeat1,
    [10044] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1201),
    1,
    anon_sym_COMMA,
    ACTIONS(1203),
    1,
    anon_sym_RBRACE,
    STATE(243),
    1,
    aux_sym_bitmask_dcl_repeat1,
    [10057] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1189),
    1,
    anon_sym_COMMA,
    ACTIONS(1296),
    1,
    anon_sym_RPAREN,
    STATE(211),
    1,
    aux_sym_annotation_appl_params_repeat1,
    [10070] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(998),
    1,
    anon_sym_RBRACE,
    ACTIONS(1201),
    1,
    anon_sym_COMMA,
    STATE(254),
    1,
    aux_sym_bitmask_dcl_repeat1,
    [10083] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1179),
    1,
    anon_sym_COMMA,
    ACTIONS(1298),
    1,
    anon_sym_GT,
    STATE(252),
    1,
    aux_sym_formal_parameters_repeat1,
    [10096] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(353),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1051),
    1,
    sym_identifier,
    STATE(206),
    1,
    sym_scoped_name,
    [10109] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1161),
    1,
    anon_sym_COMMA,
    ACTIONS(1300),
    1,
    anon_sym_GT,
    STATE(226),
    1,
    aux_sym_actual_parameters_repeat1,
    [10122] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1302),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [10131] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(353),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1304),
    1,
    sym_identifier,
    STATE(312),
    1,
    sym_scoped_name,
    [10144] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1064),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [10153] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1136),
    1,
    anon_sym_COMMA,
    ACTIONS(1306),
    1,
    anon_sym_RBRACE,
    STATE(228),
    1,
    aux_sym_enum_dcl_repeat1,
    [10166] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1308),
    1,
    anon_sym_SEMI,
    ACTIONS(1310),
    1,
    sym_identifier,
    STATE(248),
    1,
    aux_sym_bitfield_repeat1,
    [10179] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1312),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [10188] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1314),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [10197] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(353),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1051),
    1,
    sym_identifier,
    STATE(143),
    1,
    sym_scoped_name,
    [10210] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(944),
    1,
    anon_sym_COMMA,
    ACTIONS(1316),
    1,
    anon_sym_SEMI,
    STATE(266),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    [10223] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1318),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [10232] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1320),
    1,
    anon_sym_COMMA,
    ACTIONS(1323),
    1,
    anon_sym_SEMI,
    STATE(291),
    1,
    aux_sym_any_declarators_repeat1,
    [10245] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1157),
    1,
    sym_identifier,
    STATE(163),
    1,
    sym_simple_declarator,
    STATE(391),
    1,
    sym_readonly_attr_declarator,
    [10258] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1325),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1327),
    1,
    sym_identifier,
    STATE(71),
    1,
    sym_scoped_name,
    [10271] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1329),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [10280] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1209),
    1,
    anon_sym_COMMA,
    ACTIONS(1331),
    1,
    anon_sym_LBRACE,
    STATE(244),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    [10293] = 4,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1136),
    1,
    anon_sym_COMMA,
    ACTIONS(1306),
    1,
    anon_sym_RBRACE,
    STATE(274),
    1,
    aux_sym_enum_dcl_repeat1,
    [10306] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1333),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10314] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1335),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10322] = 3,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(834),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(900),
    1,
    anon_sym_COMMA,
    [10332] = 3,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(934),
    1,
    anon_sym_interface,
    STATE(486),
    1,
    sym_interface_header,
    [10342] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(783),
    2,
    anon_sym_AT,
    sym_identifier,
    [10350] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1337),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10358] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1339),
    2,
    anon_sym_GT,
    anon_sym_COMMA,
    [10366] = 3,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1157),
    1,
    sym_identifier,
    STATE(456),
    1,
    sym_simple_declarator,
    [10376] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1287),
    2,
    anon_sym_GT,
    anon_sym_COMMA,
    [10384] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1323),
    2,
    anon_sym_COMMA,
    anon_sym_SEMI,
    [10392] = 3,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(834),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1341),
    1,
    anon_sym_RPAREN,
    [10402] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1343),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [10410] = 3,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1345),
    1,
    anon_sym_LBRACE,
    ACTIONS(1347),
    1,
    anon_sym_COLON,
    [10420] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1349),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [10428] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1351),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10436] = 3,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(834),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1353),
    1,
    anon_sym_LT,
    [10446] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1355),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10454] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1357),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [10462] = 3,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1359),
    1,
    sym_identifier,
    STATE(487),
    1,
    sym_formal_parameter_names,
    [10472] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1361),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10480] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1363),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10488] = 3,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(834),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1365),
    1,
    anon_sym_LBRACE,
    [10498] = 3,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1367),
    1,
    sym_identifier,
    STATE(353),
    1,
    sym_annotation_appl_param,
    [10508] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1155),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [10516] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1369),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [10524] = 3,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1053),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1371),
    1,
    sym_identifier,
    [10534] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1373),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [10542] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1134),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [10550] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1251),
    2,
    anon_sym_COMMA,
    anon_sym_LBRACE,
    [10558] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1375),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10566] = 3,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1377),
    1,
    anon_sym_GT,
    ACTIONS(1379),
    1,
    anon_sym_COMMA,
    [10576] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1381),
    2,
    anon_sym_RBRACE,
    anon_sym_bitfield,
    [10584] = 3,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1383),
    1,
    anon_sym_SEMI,
    ACTIONS(1385),
    1,
    anon_sym_default,
    [10594] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1387),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10602] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1389),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10610] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1216),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [10618] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1391),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10626] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1393),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10634] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1395),
    2,
    anon_sym_RBRACE,
    anon_sym_bitfield,
    [10642] = 3,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(934),
    1,
    anon_sym_interface,
    STATE(414),
    1,
    sym_interface_header,
    [10652] = 3,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(834),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1397),
    1,
    anon_sym_LT,
    [10662] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1399),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10670] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1401),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10678] = 3,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1102),
    1,
    anon_sym_in,
    STATE(320),
    1,
    sym_init_param_dcl,
    [10688] = 3,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1157),
    1,
    sym_identifier,
    STATE(321),
    1,
    sym_simple_declarator,
    [10698] = 3,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1157),
    1,
    sym_identifier,
    STATE(323),
    1,
    sym_simple_declarator,
    [10708] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1403),
    2,
    anon_sym_COMMA,
    anon_sym_SEMI,
    [10716] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1405),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [10724] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1407),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [10732] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1274),
    2,
    anon_sym_COMMA,
    anon_sym_SEMI,
    [10740] = 3,
    ACTIONS(1409),
    1,
    aux_sym_preproc_call_token1,
    ACTIONS(1411),
    1,
    sym_preproc_arg,
    ACTIONS(1413),
    1,
    sym_comment,
    [10750] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1415),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [10758] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1417),
    2,
    anon_sym_ATdefault_literal,
    sym_identifier,
    [10766] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1419),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10774] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1421),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10782] = 3,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1423),
    1,
    anon_sym_LBRACE,
    ACTIONS(1425),
    1,
    anon_sym_COLON,
    [10792] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1125),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [10800] = 3,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(834),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1427),
    1,
    anon_sym_LBRACE,
    [10810] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1429),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10818] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1236),
    2,
    anon_sym_GT,
    anon_sym_COMMA,
    [10826] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1431),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10834] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1433),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [10842] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1163),
    2,
    anon_sym_GT,
    anon_sym_COMMA,
    [10850] = 3,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1435),
    1,
    anon_sym_LBRACE,
    ACTIONS(1437),
    1,
    anon_sym_supports,
    [10860] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1439),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10868] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1441),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10876] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1443),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10884] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1445),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10892] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1173),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [10900] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1447),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10908] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1449),
    2,
    anon_sym_GT,
    anon_sym_COMMA,
    [10916] = 3,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(834),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1451),
    1,
    anon_sym_LBRACE,
    [10926] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1453),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [10934] = 3,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1455),
    1,
    anon_sym_GT,
    ACTIONS(1457),
    1,
    anon_sym_COMMA,
    [10944] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1459),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [10952] = 3,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1053),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1371),
    1,
    sym_identifier,
    [10962] = 3,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1157),
    1,
    sym_identifier,
    STATE(329),
    1,
    sym_simple_declarator,
    [10972] = 3,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1157),
    1,
    sym_identifier,
    STATE(346),
    1,
    sym_simple_declarator,
    [10982] = 3,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1461),
    1,
    anon_sym_LPAREN,
    STATE(345),
    1,
    sym_exception_list,
    [10992] = 3,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1461),
    1,
    anon_sym_LPAREN,
    STATE(427),
    1,
    sym_exception_list,
    [11002] = 3,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1463),
    1,
    anon_sym_DQUOTE,
    ACTIONS(1465),
    1,
    anon_sym_SQUOTE,
    [11012] = 3,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1467),
    1,
    anon_sym_LT,
    ACTIONS(1469),
    1,
    sym_identifier,
    [11022] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1187),
    1,
    anon_sym_SEMI,
    [11029] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1469),
    1,
    sym_identifier,
    [11036] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1471),
    1,
    anon_sym_RPAREN,
    [11043] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1191),
    1,
    anon_sym_RPAREN,
    [11050] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1473),
    1,
    anon_sym_RPAREN,
    [11057] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1475),
    1,
    aux_sym_char_literal_token1,
    [11064] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1477),
    1,
    aux_sym_string_literal_token1,
    [11071] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1193),
    1,
    anon_sym_SEMI,
    [11078] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1479),
    1,
    anon_sym_SEMI,
    [11085] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1481),
    1,
    sym_identifier,
    [11092] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1483),
    1,
    anon_sym_RPAREN,
    [11099] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1485),
    1,
    anon_sym_GT,
    [11106] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1487),
    1,
    anon_sym_SEMI,
    [11113] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1489),
    1,
    anon_sym_SEMI,
    [11120] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1491),
    1,
    anon_sym_SEMI,
    [11127] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1493),
    1,
    sym_identifier,
    [11134] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1495),
    1,
    sym_identifier,
    [11141] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1497),
    1,
    anon_sym_GT,
    [11148] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1499),
    1,
    anon_sym_SEMI,
    [11155] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1501),
    1,
    anon_sym_SEMI,
    [11162] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1503),
    1,
    anon_sym_SEMI,
    [11169] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1505),
    1,
    anon_sym_LBRACE,
    [11176] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1507),
    1,
    anon_sym_SEMI,
    [11183] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1509),
    1,
    anon_sym_GT,
    [11190] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(235),
    1,
    anon_sym_RBRACE,
    [11197] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1511),
    1,
    anon_sym_LBRACE,
    [11204] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1513),
    1,
    anon_sym_SEMI,
    [11211] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1435),
    1,
    anon_sym_LBRACE,
    [11218] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1515),
    1,
    anon_sym_SEMI,
    [11225] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1517),
    1,
    anon_sym_SEMI,
    [11232] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1519),
    1,
    anon_sym_SEMI,
    [11239] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(912),
    1,
    anon_sym_EQ,
    [11246] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1521),
    1,
    anon_sym_SEMI,
    [11253] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1523),
    1,
    anon_sym_LBRACE,
    [11260] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1525),
    1,
    anon_sym_SEMI,
    [11267] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1527),
    1,
    anon_sym_LBRACE,
    [11274] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1529),
    1,
    anon_sym_LBRACE,
    [11281] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1531),
    1,
    anon_sym_RPAREN,
    [11288] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1533),
    1,
    sym_identifier,
    [11295] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1535),
    1,
    anon_sym_GT,
    [11302] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1537),
    1,
    anon_sym_SEMI,
    [11309] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1539),
    1,
    sym_identifier,
    [11316] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1541),
    1,
    anon_sym_LPAREN,
    [11323] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1316),
    1,
    anon_sym_SEMI,
    [11330] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(239),
    1,
    anon_sym_RBRACE,
    [11337] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1543),
    1,
    anon_sym_GT,
    [11344] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1545),
    1,
    anon_sym_SEMI,
    [11351] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1547),
    1,
    anon_sym_COMMA,
    [11358] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1549),
    1,
    anon_sym_SEMI,
    [11365] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1551),
    1,
    anon_sym_SEMI,
    [11372] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1553),
    1,
    anon_sym_attribute,
    [11379] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1263),
    1,
    anon_sym_SEMI,
    [11386] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1555),
    1,
    sym_identifier,
    [11393] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1557),
    1,
    anon_sym_SEMI,
    [11400] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1559),
    1,
    anon_sym_COMMA,
    [11407] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1561),
    1,
    anon_sym_LPAREN,
    [11414] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1563),
    1,
    anon_sym_SEMI,
    [11421] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1234),
    1,
    anon_sym_SEMI,
    [11428] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1565),
    1,
    anon_sym_SQUOTE,
    [11435] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1567),
    1,
    anon_sym_EQ,
    [11442] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1569),
    1,
    anon_sym_DQUOTE,
    [11449] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1571),
    1,
    anon_sym_LPAREN,
    [11456] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1573),
    1,
    anon_sym_LPAREN,
    [11463] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1575),
    1,
    anon_sym_LBRACE,
    [11470] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1577),
    1,
    anon_sym_SEMI,
    [11477] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1579),
    1,
    sym_identifier,
    [11484] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1581),
    1,
    anon_sym_LBRACE,
    [11491] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1583),
    1,
    anon_sym_GT,
    [11498] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1585),
    1,
    anon_sym_GT,
    [11505] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1587),
    1,
    sym_identifier,
    [11512] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1589),
    1,
    anon_sym_SEMI,
    [11519] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1591),
    1,
    sym_identifier,
    [11526] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1593),
    1,
    anon_sym_SEMI,
    [11533] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1595),
    1,
    anon_sym_SEMI,
    [11540] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1597),
    1,
    anon_sym_LT,
    [11547] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1599),
    1,
    anon_sym_COLON,
    [11554] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1601),
    1,
    sym_identifier,
    [11561] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1603),
    1,
    anon_sym_SEMI,
    [11568] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1605),
    1,
    anon_sym_SEMI,
    [11575] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1607),
    1,
    anon_sym_GT,
    [11582] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1609),
    1,
    anon_sym_LT,
    [11589] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1611),
    1,
    anon_sym_LT,
    [11596] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1613),
    1,
    anon_sym_SEMI,
    [11603] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1615),
    1,
    anon_sym_RPAREN,
    [11610] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1617),
    1,
    sym_identifier,
    [11617] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1619),
    1,
    anon_sym_SEMI,
    [11624] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1621),
    1,
    aux_sym_string_literal_token1,
    [11631] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1623),
    1,
    aux_sym_char_literal_token1,
    [11638] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1625),
    1,
    anon_sym_SEMI,
    [11645] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1627),
    1,
    anon_sym_DQUOTE,
    [11652] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1467),
    1,
    anon_sym_LT,
    [11659] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1629),
    1,
    anon_sym_SQUOTE,
    [11666] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1631),
    1,
    anon_sym_SEMI,
    [11673] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1633),
    1,
    anon_sym_LBRACE,
    [11680] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1635),
    1,
    anon_sym_RBRACE,
    [11687] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1637),
    1,
    sym_identifier,
    [11694] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1639),
    1,
    anon_sym_COLON,
    [11701] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1371),
    1,
    sym_identifier,
    [11708] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1641),
    1,
    anon_sym_SEMI,
    [11715] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1643),
    1,
    sym_identifier,
    [11722] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1645),
    1,
    anon_sym_LBRACE,
    [11729] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1647),
    1,
    anon_sym_SEMI,
    [11736] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1649),
    1,
    sym_identifier,
    [11743] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1651),
    1,
    anon_sym_LBRACE,
    [11750] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1653),
    1,
    anon_sym_SEMI,
    [11757] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1655),
    1,
    anon_sym_LBRACE,
    [11764] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1657),
    1,
    anon_sym_SEMI,
    [11771] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1659),
    1,
    anon_sym_LBRACE,
    [11778] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1661),
    1,
    anon_sym_GT,
    [11785] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1663),
    1,
    sym_identifier,
    [11792] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1665),
    1,
    anon_sym_SEMI,
    [11799] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1667),
    1,
    anon_sym_LBRACE,
    [11806] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1669),
    1,
    anon_sym_SEMI,
    [11813] = 2,
    ACTIONS(1413),
    1,
    sym_comment,
    ACTIONS(1671),
    1,
    aux_sym_preproc_call_token1,
    [11820] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1673),
    1,
    anon_sym_enum,
    [11827] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1675),
    1,
    anon_sym_RPAREN,
    [11834] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1677),
    1,
    anon_sym_LBRACE,
    [11841] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1679),
    1,
    sym_identifier,
    [11848] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1681),
    1,
    anon_sym_SEMI,
    [11855] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1683),
    1,
    sym_identifier,
    [11862] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1685),
    1,
    anon_sym_SEMI,
    [11869] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1341),
    1,
    anon_sym_RPAREN,
    [11876] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1687),
    1,
    anon_sym_LBRACE,
    [11883] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1689),
    1,
    anon_sym_SEMI,
    [11890] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1691),
    1,
    anon_sym_SEMI,
    [11897] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1693),
    1,
    anon_sym_SEMI,
    [11904] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1695),
    1,
    ts_builtin_sym_end,
    [11911] = 2,
    ACTIONS(1413),
    1,
    sym_comment,
    ACTIONS(1697),
    1,
    aux_sym_predefine_token1,
    [11918] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1699),
    1,
    anon_sym_RBRACK,
    [11925] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1701),
    1,
    anon_sym_enum,
    [11932] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1703),
    1,
    sym_identifier,
    [11939] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1705),
    1,
    sym_identifier,
    [11946] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1707),
    1,
    sym_identifier,
    [11953] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1709),
    1,
    sym_identifier,
    [11960] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1711),
    1,
    sym_identifier,
    [11967] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1713),
    1,
    sym_identifier,
    [11974] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1715),
    1,
    anon_sym_SEMI,
    [11981] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1717),
    1,
    sym_identifier,
    [11988] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1719),
    1,
    sym_identifier,
    [11995] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1721),
    1,
    sym_identifier,
    [12002] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1723),
    1,
    anon_sym_SEMI,
    [12009] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1725),
    1,
    anon_sym_RPAREN,
    [12016] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1727),
    1,
    sym_identifier,
    [12023] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1729),
    1,
    sym_identifier,
    [12030] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1731),
    1,
    anon_sym_RPAREN,
    [12037] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1733),
    1,
    anon_sym_GT,
    [12044] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1735),
    1,
    sym_identifier,
    [12051] = 2,
    ACTIONS(3),
    1,
    sym_comment,
    ACTIONS(1737),
    1,
    sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
    [SMALL_STATE(14)] = 0,
    [SMALL_STATE(15)] = 136,
    [SMALL_STATE(16)] = 272,
    [SMALL_STATE(17)] = 408,
    [SMALL_STATE(18)] = 538,
    [SMALL_STATE(19)] = 668,
    [SMALL_STATE(20)] = 798,
    [SMALL_STATE(21)] = 928,
    [SMALL_STATE(22)] = 1058,
    [SMALL_STATE(23)] = 1188,
    [SMALL_STATE(24)] = 1318,
    [SMALL_STATE(25)] = 1448,
    [SMALL_STATE(26)] = 1578,
    [SMALL_STATE(27)] = 1708,
    [SMALL_STATE(28)] = 1838,
    [SMALL_STATE(29)] = 1957,
    [SMALL_STATE(30)] = 2080,
    [SMALL_STATE(31)] = 2202,
    [SMALL_STATE(32)] = 2318,
    [SMALL_STATE(33)] = 2434,
    [SMALL_STATE(34)] = 2546,
    [SMALL_STATE(35)] = 2662,
    [SMALL_STATE(36)] = 2778,
    [SMALL_STATE(37)] = 2890,
    [SMALL_STATE(38)] = 3006,
    [SMALL_STATE(39)] = 3122,
    [SMALL_STATE(40)] = 3232,
    [SMALL_STATE(41)] = 3344,
    [SMALL_STATE(42)] = 3460,
    [SMALL_STATE(43)] = 3576,
    [SMALL_STATE(44)] = 3680,
    [SMALL_STATE(45)] = 3735,
    [SMALL_STATE(46)] = 3790,
    [SMALL_STATE(47)] = 3893,
    [SMALL_STATE(48)] = 3996,
    [SMALL_STATE(49)] = 4051,
    [SMALL_STATE(50)] = 4154,
    [SMALL_STATE(51)] = 4209,
    [SMALL_STATE(52)] = 4264,
    [SMALL_STATE(53)] = 4367,
    [SMALL_STATE(54)] = 4422,
    [SMALL_STATE(55)] = 4474,
    [SMALL_STATE(56)] = 4573,
    [SMALL_STATE(57)] = 4672,
    [SMALL_STATE(58)] = 4719,
    [SMALL_STATE(59)] = 4766,
    [SMALL_STATE(60)] = 4807,
    [SMALL_STATE(61)] = 4848,
    [SMALL_STATE(62)] = 4889,
    [SMALL_STATE(63)] = 4930,
    [SMALL_STATE(64)] = 4974,
    [SMALL_STATE(65)] = 5013,
    [SMALL_STATE(66)] = 5052,
    [SMALL_STATE(67)] = 5129,
    [SMALL_STATE(68)] = 5168,
    [SMALL_STATE(69)] = 5207,
    [SMALL_STATE(70)] = 5246,
    [SMALL_STATE(71)] = 5285,
    [SMALL_STATE(72)] = 5326,
    [SMALL_STATE(73)] = 5365,
    [SMALL_STATE(74)] = 5403,
    [SMALL_STATE(75)] = 5440,
    [SMALL_STATE(76)] = 5520,
    [SMALL_STATE(77)] = 5600,
    [SMALL_STATE(78)] = 5680,
    [SMALL_STATE(79)] = 5757,
    [SMALL_STATE(80)] = 5834,
    [SMALL_STATE(81)] = 5911,
    [SMALL_STATE(82)] = 5988,
    [SMALL_STATE(83)] = 6065,
    [SMALL_STATE(84)] = 6142,
    [SMALL_STATE(85)] = 6219,
    [SMALL_STATE(86)] = 6253,
    [SMALL_STATE(87)] = 6287,
    [SMALL_STATE(88)] = 6349,
    [SMALL_STATE(89)] = 6423,
    [SMALL_STATE(90)] = 6457,
    [SMALL_STATE(91)] = 6531,
    [SMALL_STATE(92)] = 6605,
    [SMALL_STATE(93)] = 6679,
    [SMALL_STATE(94)] = 6753,
    [SMALL_STATE(95)] = 6827,
    [SMALL_STATE(96)] = 6901,
    [SMALL_STATE(97)] = 6969,
    [SMALL_STATE(98)] = 7034,
    [SMALL_STATE(99)] = 7096,
    [SMALL_STATE(100)] = 7155,
    [SMALL_STATE(101)] = 7188,
    [SMALL_STATE(102)] = 7244,
    [SMALL_STATE(103)] = 7272,
    [SMALL_STATE(104)] = 7300,
    [SMALL_STATE(105)] = 7327,
    [SMALL_STATE(106)] = 7354,
    [SMALL_STATE(107)] = 7407,
    [SMALL_STATE(108)] = 7434,
    [SMALL_STATE(109)] = 7461,
    [SMALL_STATE(110)] = 7488,
    [SMALL_STATE(111)] = 7515,
    [SMALL_STATE(112)] = 7539,
    [SMALL_STATE(113)] = 7563,
    [SMALL_STATE(114)] = 7587,
    [SMALL_STATE(115)] = 7611,
    [SMALL_STATE(116)] = 7635,
    [SMALL_STATE(117)] = 7659,
    [SMALL_STATE(118)] = 7683,
    [SMALL_STATE(119)] = 7707,
    [SMALL_STATE(120)] = 7735,
    [SMALL_STATE(121)] = 7759,
    [SMALL_STATE(122)] = 7783,
    [SMALL_STATE(123)] = 7807,
    [SMALL_STATE(124)] = 7835,
    [SMALL_STATE(125)] = 7859,
    [SMALL_STATE(126)] = 7899,
    [SMALL_STATE(127)] = 7926,
    [SMALL_STATE(128)] = 7949,
    [SMALL_STATE(129)] = 7972,
    [SMALL_STATE(130)] = 7995,
    [SMALL_STATE(131)] = 8016,
    [SMALL_STATE(132)] = 8037,
    [SMALL_STATE(133)] = 8054,
    [SMALL_STATE(134)] = 8071,
    [SMALL_STATE(135)] = 8088,
    [SMALL_STATE(136)] = 8114,
    [SMALL_STATE(137)] = 8142,
    [SMALL_STATE(138)] = 8158,
    [SMALL_STATE(139)] = 8174,
    [SMALL_STATE(140)] = 8187,
    [SMALL_STATE(141)] = 8210,
    [SMALL_STATE(142)] = 8227,
    [SMALL_STATE(143)] = 8242,
    [SMALL_STATE(144)] = 8259,
    [SMALL_STATE(145)] = 8271,
    [SMALL_STATE(146)] = 8291,
    [SMALL_STATE(147)] = 8307,
    [SMALL_STATE(148)] = 8327,
    [SMALL_STATE(149)] = 8343,
    [SMALL_STATE(150)] = 8359,
    [SMALL_STATE(151)] = 8379,
    [SMALL_STATE(152)] = 8399,
    [SMALL_STATE(153)] = 8419,
    [SMALL_STATE(154)] = 8439,
    [SMALL_STATE(155)] = 8451,
    [SMALL_STATE(156)] = 8463,
    [SMALL_STATE(157)] = 8483,
    [SMALL_STATE(158)] = 8500,
    [SMALL_STATE(159)] = 8517,
    [SMALL_STATE(160)] = 8528,
    [SMALL_STATE(161)] = 8545,
    [SMALL_STATE(162)] = 8562,
    [SMALL_STATE(163)] = 8579,
    [SMALL_STATE(164)] = 8598,
    [SMALL_STATE(165)] = 8615,
    [SMALL_STATE(166)] = 8632,
    [SMALL_STATE(167)] = 8649,
    [SMALL_STATE(168)] = 8666,
    [SMALL_STATE(169)] = 8683,
    [SMALL_STATE(170)] = 8700,
    [SMALL_STATE(171)] = 8717,
    [SMALL_STATE(172)] = 8734,
    [SMALL_STATE(173)] = 8753,
    [SMALL_STATE(174)] = 8770,
    [SMALL_STATE(175)] = 8787,
    [SMALL_STATE(176)] = 8804,
    [SMALL_STATE(177)] = 8818,
    [SMALL_STATE(178)] = 8828,
    [SMALL_STATE(179)] = 8842,
    [SMALL_STATE(180)] = 8858,
    [SMALL_STATE(181)] = 8874,
    [SMALL_STATE(182)] = 8890,
    [SMALL_STATE(183)] = 8906,
    [SMALL_STATE(184)] = 8920,
    [SMALL_STATE(185)] = 8936,
    [SMALL_STATE(186)] = 8950,
    [SMALL_STATE(187)] = 8964,
    [SMALL_STATE(188)] = 8978,
    [SMALL_STATE(189)] = 8992,
    [SMALL_STATE(190)] = 9006,
    [SMALL_STATE(191)] = 9016,
    [SMALL_STATE(192)] = 9026,
    [SMALL_STATE(193)] = 9036,
    [SMALL_STATE(194)] = 9052,
    [SMALL_STATE(195)] = 9068,
    [SMALL_STATE(196)] = 9078,
    [SMALL_STATE(197)] = 9090,
    [SMALL_STATE(198)] = 9100,
    [SMALL_STATE(199)] = 9114,
    [SMALL_STATE(200)] = 9128,
    [SMALL_STATE(201)] = 9142,
    [SMALL_STATE(202)] = 9158,
    [SMALL_STATE(203)] = 9170,
    [SMALL_STATE(204)] = 9180,
    [SMALL_STATE(205)] = 9190,
    [SMALL_STATE(206)] = 9200,
    [SMALL_STATE(207)] = 9216,
    [SMALL_STATE(208)] = 9226,
    [SMALL_STATE(209)] = 9236,
    [SMALL_STATE(210)] = 9249,
    [SMALL_STATE(211)] = 9262,
    [SMALL_STATE(212)] = 9275,
    [SMALL_STATE(213)] = 9284,
    [SMALL_STATE(214)] = 9297,
    [SMALL_STATE(215)] = 9306,
    [SMALL_STATE(216)] = 9319,
    [SMALL_STATE(217)] = 9332,
    [SMALL_STATE(218)] = 9341,
    [SMALL_STATE(219)] = 9350,
    [SMALL_STATE(220)] = 9359,
    [SMALL_STATE(221)] = 9370,
    [SMALL_STATE(222)] = 9381,
    [SMALL_STATE(223)] = 9394,
    [SMALL_STATE(224)] = 9407,
    [SMALL_STATE(225)] = 9420,
    [SMALL_STATE(226)] = 9433,
    [SMALL_STATE(227)] = 9446,
    [SMALL_STATE(228)] = 9455,
    [SMALL_STATE(229)] = 9468,
    [SMALL_STATE(230)] = 9477,
    [SMALL_STATE(231)] = 9490,
    [SMALL_STATE(232)] = 9503,
    [SMALL_STATE(233)] = 9512,
    [SMALL_STATE(234)] = 9525,
    [SMALL_STATE(235)] = 9538,
    [SMALL_STATE(236)] = 9551,
    [SMALL_STATE(237)] = 9564,
    [SMALL_STATE(238)] = 9573,
    [SMALL_STATE(239)] = 9586,
    [SMALL_STATE(240)] = 9599,
    [SMALL_STATE(241)] = 9612,
    [SMALL_STATE(242)] = 9625,
    [SMALL_STATE(243)] = 9638,
    [SMALL_STATE(244)] = 9651,
    [SMALL_STATE(245)] = 9664,
    [SMALL_STATE(246)] = 9677,
    [SMALL_STATE(247)] = 9690,
    [SMALL_STATE(248)] = 9703,
    [SMALL_STATE(249)] = 9716,
    [SMALL_STATE(250)] = 9729,
    [SMALL_STATE(251)] = 9742,
    [SMALL_STATE(252)] = 9755,
    [SMALL_STATE(253)] = 9768,
    [SMALL_STATE(254)] = 9781,
    [SMALL_STATE(255)] = 9794,
    [SMALL_STATE(256)] = 9807,
    [SMALL_STATE(257)] = 9820,
    [SMALL_STATE(258)] = 9833,
    [SMALL_STATE(259)] = 9846,
    [SMALL_STATE(260)] = 9855,
    [SMALL_STATE(261)] = 9868,
    [SMALL_STATE(262)] = 9881,
    [SMALL_STATE(263)] = 9894,
    [SMALL_STATE(264)] = 9907,
    [SMALL_STATE(265)] = 9920,
    [SMALL_STATE(266)] = 9933,
    [SMALL_STATE(267)] = 9946,
    [SMALL_STATE(268)] = 9955,
    [SMALL_STATE(269)] = 9968,
    [SMALL_STATE(270)] = 9979,
    [SMALL_STATE(271)] = 9992,
    [SMALL_STATE(272)] = 10005,
    [SMALL_STATE(273)] = 10018,
    [SMALL_STATE(274)] = 10031,
    [SMALL_STATE(275)] = 10044,
    [SMALL_STATE(276)] = 10057,
    [SMALL_STATE(277)] = 10070,
    [SMALL_STATE(278)] = 10083,
    [SMALL_STATE(279)] = 10096,
    [SMALL_STATE(280)] = 10109,
    [SMALL_STATE(281)] = 10122,
    [SMALL_STATE(282)] = 10131,
    [SMALL_STATE(283)] = 10144,
    [SMALL_STATE(284)] = 10153,
    [SMALL_STATE(285)] = 10166,
    [SMALL_STATE(286)] = 10179,
    [SMALL_STATE(287)] = 10188,
    [SMALL_STATE(288)] = 10197,
    [SMALL_STATE(289)] = 10210,
    [SMALL_STATE(290)] = 10223,
    [SMALL_STATE(291)] = 10232,
    [SMALL_STATE(292)] = 10245,
    [SMALL_STATE(293)] = 10258,
    [SMALL_STATE(294)] = 10271,
    [SMALL_STATE(295)] = 10280,
    [SMALL_STATE(296)] = 10293,
    [SMALL_STATE(297)] = 10306,
    [SMALL_STATE(298)] = 10314,
    [SMALL_STATE(299)] = 10322,
    [SMALL_STATE(300)] = 10332,
    [SMALL_STATE(301)] = 10342,
    [SMALL_STATE(302)] = 10350,
    [SMALL_STATE(303)] = 10358,
    [SMALL_STATE(304)] = 10366,
    [SMALL_STATE(305)] = 10376,
    [SMALL_STATE(306)] = 10384,
    [SMALL_STATE(307)] = 10392,
    [SMALL_STATE(308)] = 10402,
    [SMALL_STATE(309)] = 10410,
    [SMALL_STATE(310)] = 10420,
    [SMALL_STATE(311)] = 10428,
    [SMALL_STATE(312)] = 10436,
    [SMALL_STATE(313)] = 10446,
    [SMALL_STATE(314)] = 10454,
    [SMALL_STATE(315)] = 10462,
    [SMALL_STATE(316)] = 10472,
    [SMALL_STATE(317)] = 10480,
    [SMALL_STATE(318)] = 10488,
    [SMALL_STATE(319)] = 10498,
    [SMALL_STATE(320)] = 10508,
    [SMALL_STATE(321)] = 10516,
    [SMALL_STATE(322)] = 10524,
    [SMALL_STATE(323)] = 10534,
    [SMALL_STATE(324)] = 10542,
    [SMALL_STATE(325)] = 10550,
    [SMALL_STATE(326)] = 10558,
    [SMALL_STATE(327)] = 10566,
    [SMALL_STATE(328)] = 10576,
    [SMALL_STATE(329)] = 10584,
    [SMALL_STATE(330)] = 10594,
    [SMALL_STATE(331)] = 10602,
    [SMALL_STATE(332)] = 10610,
    [SMALL_STATE(333)] = 10618,
    [SMALL_STATE(334)] = 10626,
    [SMALL_STATE(335)] = 10634,
    [SMALL_STATE(336)] = 10642,
    [SMALL_STATE(337)] = 10652,
    [SMALL_STATE(338)] = 10662,
    [SMALL_STATE(339)] = 10670,
    [SMALL_STATE(340)] = 10678,
    [SMALL_STATE(341)] = 10688,
    [SMALL_STATE(342)] = 10698,
    [SMALL_STATE(343)] = 10708,
    [SMALL_STATE(344)] = 10716,
    [SMALL_STATE(345)] = 10724,
    [SMALL_STATE(346)] = 10732,
    [SMALL_STATE(347)] = 10740,
    [SMALL_STATE(348)] = 10750,
    [SMALL_STATE(349)] = 10758,
    [SMALL_STATE(350)] = 10766,
    [SMALL_STATE(351)] = 10774,
    [SMALL_STATE(352)] = 10782,
    [SMALL_STATE(353)] = 10792,
    [SMALL_STATE(354)] = 10800,
    [SMALL_STATE(355)] = 10810,
    [SMALL_STATE(356)] = 10818,
    [SMALL_STATE(357)] = 10826,
    [SMALL_STATE(358)] = 10834,
    [SMALL_STATE(359)] = 10842,
    [SMALL_STATE(360)] = 10850,
    [SMALL_STATE(361)] = 10860,
    [SMALL_STATE(362)] = 10868,
    [SMALL_STATE(363)] = 10876,
    [SMALL_STATE(364)] = 10884,
    [SMALL_STATE(365)] = 10892,
    [SMALL_STATE(366)] = 10900,
    [SMALL_STATE(367)] = 10908,
    [SMALL_STATE(368)] = 10916,
    [SMALL_STATE(369)] = 10926,
    [SMALL_STATE(370)] = 10934,
    [SMALL_STATE(371)] = 10944,
    [SMALL_STATE(372)] = 10952,
    [SMALL_STATE(373)] = 10962,
    [SMALL_STATE(374)] = 10972,
    [SMALL_STATE(375)] = 10982,
    [SMALL_STATE(376)] = 10992,
    [SMALL_STATE(377)] = 11002,
    [SMALL_STATE(378)] = 11012,
    [SMALL_STATE(379)] = 11022,
    [SMALL_STATE(380)] = 11029,
    [SMALL_STATE(381)] = 11036,
    [SMALL_STATE(382)] = 11043,
    [SMALL_STATE(383)] = 11050,
    [SMALL_STATE(384)] = 11057,
    [SMALL_STATE(385)] = 11064,
    [SMALL_STATE(386)] = 11071,
    [SMALL_STATE(387)] = 11078,
    [SMALL_STATE(388)] = 11085,
    [SMALL_STATE(389)] = 11092,
    [SMALL_STATE(390)] = 11099,
    [SMALL_STATE(391)] = 11106,
    [SMALL_STATE(392)] = 11113,
    [SMALL_STATE(393)] = 11120,
    [SMALL_STATE(394)] = 11127,
    [SMALL_STATE(395)] = 11134,
    [SMALL_STATE(396)] = 11141,
    [SMALL_STATE(397)] = 11148,
    [SMALL_STATE(398)] = 11155,
    [SMALL_STATE(399)] = 11162,
    [SMALL_STATE(400)] = 11169,
    [SMALL_STATE(401)] = 11176,
    [SMALL_STATE(402)] = 11183,
    [SMALL_STATE(403)] = 11190,
    [SMALL_STATE(404)] = 11197,
    [SMALL_STATE(405)] = 11204,
    [SMALL_STATE(406)] = 11211,
    [SMALL_STATE(407)] = 11218,
    [SMALL_STATE(408)] = 11225,
    [SMALL_STATE(409)] = 11232,
    [SMALL_STATE(410)] = 11239,
    [SMALL_STATE(411)] = 11246,
    [SMALL_STATE(412)] = 11253,
    [SMALL_STATE(413)] = 11260,
    [SMALL_STATE(414)] = 11267,
    [SMALL_STATE(415)] = 11274,
    [SMALL_STATE(416)] = 11281,
    [SMALL_STATE(417)] = 11288,
    [SMALL_STATE(418)] = 11295,
    [SMALL_STATE(419)] = 11302,
    [SMALL_STATE(420)] = 11309,
    [SMALL_STATE(421)] = 11316,
    [SMALL_STATE(422)] = 11323,
    [SMALL_STATE(423)] = 11330,
    [SMALL_STATE(424)] = 11337,
    [SMALL_STATE(425)] = 11344,
    [SMALL_STATE(426)] = 11351,
    [SMALL_STATE(427)] = 11358,
    [SMALL_STATE(428)] = 11365,
    [SMALL_STATE(429)] = 11372,
    [SMALL_STATE(430)] = 11379,
    [SMALL_STATE(431)] = 11386,
    [SMALL_STATE(432)] = 11393,
    [SMALL_STATE(433)] = 11400,
    [SMALL_STATE(434)] = 11407,
    [SMALL_STATE(435)] = 11414,
    [SMALL_STATE(436)] = 11421,
    [SMALL_STATE(437)] = 11428,
    [SMALL_STATE(438)] = 11435,
    [SMALL_STATE(439)] = 11442,
    [SMALL_STATE(440)] = 11449,
    [SMALL_STATE(441)] = 11456,
    [SMALL_STATE(442)] = 11463,
    [SMALL_STATE(443)] = 11470,
    [SMALL_STATE(444)] = 11477,
    [SMALL_STATE(445)] = 11484,
    [SMALL_STATE(446)] = 11491,
    [SMALL_STATE(447)] = 11498,
    [SMALL_STATE(448)] = 11505,
    [SMALL_STATE(449)] = 11512,
    [SMALL_STATE(450)] = 11519,
    [SMALL_STATE(451)] = 11526,
    [SMALL_STATE(452)] = 11533,
    [SMALL_STATE(453)] = 11540,
    [SMALL_STATE(454)] = 11547,
    [SMALL_STATE(455)] = 11554,
    [SMALL_STATE(456)] = 11561,
    [SMALL_STATE(457)] = 11568,
    [SMALL_STATE(458)] = 11575,
    [SMALL_STATE(459)] = 11582,
    [SMALL_STATE(460)] = 11589,
    [SMALL_STATE(461)] = 11596,
    [SMALL_STATE(462)] = 11603,
    [SMALL_STATE(463)] = 11610,
    [SMALL_STATE(464)] = 11617,
    [SMALL_STATE(465)] = 11624,
    [SMALL_STATE(466)] = 11631,
    [SMALL_STATE(467)] = 11638,
    [SMALL_STATE(468)] = 11645,
    [SMALL_STATE(469)] = 11652,
    [SMALL_STATE(470)] = 11659,
    [SMALL_STATE(471)] = 11666,
    [SMALL_STATE(472)] = 11673,
    [SMALL_STATE(473)] = 11680,
    [SMALL_STATE(474)] = 11687,
    [SMALL_STATE(475)] = 11694,
    [SMALL_STATE(476)] = 11701,
    [SMALL_STATE(477)] = 11708,
    [SMALL_STATE(478)] = 11715,
    [SMALL_STATE(479)] = 11722,
    [SMALL_STATE(480)] = 11729,
    [SMALL_STATE(481)] = 11736,
    [SMALL_STATE(482)] = 11743,
    [SMALL_STATE(483)] = 11750,
    [SMALL_STATE(484)] = 11757,
    [SMALL_STATE(485)] = 11764,
    [SMALL_STATE(486)] = 11771,
    [SMALL_STATE(487)] = 11778,
    [SMALL_STATE(488)] = 11785,
    [SMALL_STATE(489)] = 11792,
    [SMALL_STATE(490)] = 11799,
    [SMALL_STATE(491)] = 11806,
    [SMALL_STATE(492)] = 11813,
    [SMALL_STATE(493)] = 11820,
    [SMALL_STATE(494)] = 11827,
    [SMALL_STATE(495)] = 11834,
    [SMALL_STATE(496)] = 11841,
    [SMALL_STATE(497)] = 11848,
    [SMALL_STATE(498)] = 11855,
    [SMALL_STATE(499)] = 11862,
    [SMALL_STATE(500)] = 11869,
    [SMALL_STATE(501)] = 11876,
    [SMALL_STATE(502)] = 11883,
    [SMALL_STATE(503)] = 11890,
    [SMALL_STATE(504)] = 11897,
    [SMALL_STATE(505)] = 11904,
    [SMALL_STATE(506)] = 11911,
    [SMALL_STATE(507)] = 11918,
    [SMALL_STATE(508)] = 11925,
    [SMALL_STATE(509)] = 11932,
    [SMALL_STATE(510)] = 11939,
    [SMALL_STATE(511)] = 11946,
    [SMALL_STATE(512)] = 11953,
    [SMALL_STATE(513)] = 11960,
    [SMALL_STATE(514)] = 11967,
    [SMALL_STATE(515)] = 11974,
    [SMALL_STATE(516)] = 11981,
    [SMALL_STATE(517)] = 11988,
    [SMALL_STATE(518)] = 11995,
    [SMALL_STATE(519)] = 12002,
    [SMALL_STATE(520)] = 12009,
    [SMALL_STATE(521)] = 12016,
    [SMALL_STATE(522)] = 12023,
    [SMALL_STATE(523)] = 12030,
    [SMALL_STATE(524)] = 12037,
    [SMALL_STATE(525)] = 12044,
    [SMALL_STATE(526)] = 12051,
};

static const TSParseActionEntry ts_parse_actions[] = {
    [0] = { .entry = { .count = 0, .reusable = false } },
    [1] = { .entry = { .count = 1, .reusable = false } },
    RECOVER(),
    [3] = { .entry = { .count = 1, .reusable = true } },
    SHIFT_EXTRA(),
    [5] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_specification, 0, 0, 0),
    [7] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(347),
    [9] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(526),
    [11] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(525),
    [13] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(300),
    [15] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(516),
    [17] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(514),
    [19] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(513),
    [21] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(288),
    [23] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(282),
    [25] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(512),
    [27] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(511),
    [29] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(510),
    [31] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(509),
    [33] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(55),
    [35] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(13),
    [37] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(508),
    [39] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(304),
    [41] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(506),
    [43] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(191),
    [45] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(177),
    [47] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(195),
    [49] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(195),
    [51] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(197),
    [53] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(214),
    [55] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(460),
    [57] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(207),
    [59] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(204),
    [61] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(204),
    [63] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(203),
    [65] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(192),
    [67] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(192),
    [69] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(219),
    [71] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(219),
    [73] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(205),
    [75] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(517),
    [77] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(202),
    [79] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(212),
    [81] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(469),
    [83] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(459),
    [85] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(526),
    [87] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(443),
    [89] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(431),
    [91] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(429),
    [93] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(41),
    [95] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(516),
    [97] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(514),
    [99] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(511),
    [101] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(510),
    [103] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(509),
    [105] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(55),
    [107] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(38),
    [109] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(417),
    [111] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(13),
    [113] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(304),
    [115] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(154),
    [117] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(191),
    [120] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(177),
    [123] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(195),
    [126] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(195),
    [129] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(197),
    [132] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(214),
    [135] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(460),
    [138] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(207),
    [141] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(204),
    [144] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(204),
    [147] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(203),
    [150] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(192),
    [153] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(192),
    [156] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(219),
    [159] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(219),
    [162] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(205),
    [165] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(517),
    [168] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(202),
    [171] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(212),
    [174] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(469),
    [177] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(459),
    [180] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(526),
    [183] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    [185] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(431),
    [188] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(429),
    [191] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(41),
    [194] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(516),
    [197] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(514),
    [200] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(288),
    [203] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(511),
    [206] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(510),
    [209] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(509),
    [212] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(55),
    [215] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(38),
    [218] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(417),
    [221] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(13),
    [224] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(508),
    [227] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(304),
    [230] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_value_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(154),
    [233] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(399),
    [235] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(452),
    [237] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(432),
    [239] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(408),
    [241] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(191),
    [244] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(177),
    [247] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(195),
    [250] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(195),
    [253] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(197),
    [256] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(214),
    [259] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(460),
    [262] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(207),
    [265] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(204),
    [268] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(204),
    [271] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(203),
    [274] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(192),
    [277] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(192),
    [280] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(219),
    [283] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(219),
    [286] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(205),
    [289] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(517),
    [292] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(202),
    [295] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(212),
    [298] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(469),
    [301] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(459),
    [304] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(526),
    [307] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    [309] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(431),
    [312] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(429),
    [315] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(41),
    [318] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(516),
    [321] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(514),
    [324] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(288),
    [327] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(511),
    [330] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(510),
    [333] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(509),
    [336] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(55),
    [339] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(13),
    [342] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(508),
    [345] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(304),
    [348] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2, 0, 0),
    SHIFT_REPEAT(154),
    [351] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_body, 1, 0, 0),
    [353] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(481),
    [355] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(133),
    [357] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(94),
    [359] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(133),
    [361] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(377),
    [363] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(385),
    [365] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(384),
    [367] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(124),
    [369] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(116),
    [371] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(86),
    [373] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case, 1, 0, 0),
    [375] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_case, 1, 0, 0),
    [377] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(476),
    [379] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(474),
    [381] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(394),
    [383] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(471),
    [385] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(393),
    [387] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(191),
    [390] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(177),
    [393] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(195),
    [396] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(195),
    [399] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(197),
    [402] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(476),
    [405] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(474),
    [408] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(207),
    [411] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(204),
    [414] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(204),
    [417] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(203),
    [420] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(192),
    [423] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(192),
    [426] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(219),
    [429] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(219),
    [432] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(205),
    [435] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(517),
    [438] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(202),
    [441] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(394),
    [444] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(469),
    [447] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    [449] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(509),
    [452] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(55),
    [455] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(13),
    [458] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(508),
    [461] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(154),
    [464] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(297),
    [466] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(293),
    [468] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(338),
    [470] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(302),
    [472] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(191),
    [475] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(177),
    [478] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(195),
    [481] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(195),
    [484] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(197),
    [487] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(214),
    [490] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(460),
    [493] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(207),
    [496] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(204),
    [499] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(204),
    [502] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(203),
    [505] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(192),
    [508] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(192),
    [511] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(219),
    [514] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(219),
    [517] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(205),
    [520] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(517),
    [523] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(202),
    [526] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(212),
    [529] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(469),
    [532] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(459),
    [535] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    [537] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(293),
    [540] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(154),
    [543] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(355),
    [545] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(351),
    [547] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(317),
    [549] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(409),
    [551] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(362),
    [553] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(449),
    [555] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(378),
    [557] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(380),
    [559] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(56),
    [561] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(218),
    [563] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(82),
    [565] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(526),
    [568] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    [570] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(525),
    [573] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(300),
    [576] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(516),
    [579] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(514),
    [582] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(513),
    [585] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(288),
    [588] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(282),
    [591] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(512),
    [594] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(511),
    [597] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(510),
    [600] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(509),
    [603] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(55),
    [606] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(241),
    [609] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(13),
    [612] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(508),
    [615] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(304),
    [618] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(506),
    [621] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(411),
    [623] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(241),
    [625] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(506),
    [627] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_specification, 1, 0, 0),
    [629] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(451),
    [631] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    [633] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(526),
    [636] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(525),
    [639] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(300),
    [642] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(516),
    [645] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(514),
    [648] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(513),
    [651] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(288),
    [654] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(282),
    [657] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(512),
    [660] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(511),
    [663] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(510),
    [666] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(509),
    [669] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(55),
    [672] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(13),
    [675] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(508),
    [678] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(304),
    [681] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2, 0, 0),
    SHIFT_REPEAT(506),
    [684] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_init_dcl, 7, 0, 0),
    [686] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_init_dcl, 7, 0, 0),
    [688] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_init_dcl, 6, 0, 0),
    [690] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_init_dcl, 6, 0, 0),
    [692] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(397),
    [694] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_state_member, 4, 0, 0),
    [696] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_state_member, 4, 0, 0),
    [698] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_specification, 2, 0, 0),
    [700] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_init_dcl, 5, 0, 0),
    [702] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_init_dcl, 5, 0, 0),
    [704] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_export, 2, 0, 0),
    [706] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_export, 2, 0, 0),
    [708] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(483),
    [710] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_value_element, 1, 0, 0),
    [712] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_element, 1, 0, 0),
    [714] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_case_label, 3, 0, 0),
    [716] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case_label, 3, 0, 0),
    [718] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_case_label, 2, 0, 0),
    [720] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case_label, 2, 0, 0),
    [722] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_member, 5, 0, 0),
    [724] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_member, 5, 0, 0),
    [726] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_body, 2, 0, 0),
    [728] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_body, 2, 0, 0),
    [730] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_body, 1, 0, 0),
    [732] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_body, 1, 0, 0),
    [734] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_member, 3, 0, 0),
    [736] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_member, 3, 0, 0),
    [738] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_interface_def_repeat1, 2, 0, 0),
    [740] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2, 0, 0),
    [742] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(293),
    [745] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 4, 0, 6),
    [747] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 4, 0, 6),
    [749] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_scoped_name, 2, 0, 0),
    [751] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_scoped_name, 2, 0, 0),
    [753] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(500),
    [755] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 3, 0, 3),
    [757] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 3, 0, 3),
    [759] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 4, 0, 3),
    [761] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 4, 0, 3),
    [763] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_scoped_name, 3, 0, 0),
    [765] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_scoped_name, 3, 0, 0),
    [767] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_scoped_name, 1, 0, 0),
    [769] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_scoped_name, 1, 0, 0),
    [771] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_appl, 2, 0, 0),
    [773] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_appl, 2, 0, 0),
    [775] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(75),
    [777] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 5, 0, 6),
    [779] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 5, 0, 6),
    [781] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_appl, 5, 0, 0),
    [783] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_appl, 5, 0, 0),
    [785] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_param_attribute, 1, 0, 0),
    [787] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_param_attribute, 1, 0, 0),
    [789] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(129),
    [791] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(191),
    [793] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(177),
    [795] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(197),
    [797] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(446),
    [799] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(207),
    [801] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(203),
    [803] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2, 0, 0),
    [805] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_specification_repeat1, 2, 0, 0),
    SHIFT_REPEAT(347),
    [808] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_specification_repeat1, 2, 0, 0),
    [810] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym__definition, 2, 0, 0),
    [812] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym__definition, 2, 0, 0),
    [814] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_predefine, 2, 0, 0),
    [816] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_predefine, 2, 0, 0),
    [818] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_preproc_call, 2, 0, 1),
    [820] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_preproc_call, 2, 0, 1),
    [822] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_tpl_definition, 2, 0, 0),
    [824] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_tpl_definition, 2, 0, 0),
    [826] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_preproc_call, 3, 0, 2),
    [828] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_preproc_call, 3, 0, 2),
    [830] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_tpl_definition, 1, 0, 0),
    [832] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_tpl_definition, 1, 0, 0),
    [834] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(444),
    [836] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 2, 0, 0),
    [838] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 2, 0, 0),
    [840] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 1, 0, 0),
    [842] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 1, 0, 0),
    [844] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_mult_expr, 3, 0, 0),
    [846] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_mult_expr, 3, 0, 0),
    [848] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_mult_expr, 1, 0, 0),
    [850] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_mult_expr, 1, 0, 0),
    [852] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_char_literal, 4, 0, 7),
    [854] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_char_literal, 4, 0, 7),
    [856] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 4, 0, 0),
    [858] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 4, 0, 0),
    [860] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_string_literal, 3, 0, 0),
    [862] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_literal, 3, 0, 0),
    [864] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_literal, 1, 0, 0),
    [866] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_literal, 1, 0, 0),
    [868] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_char_literal, 3, 0, 4),
    [870] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_char_literal, 3, 0, 4),
    [872] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 3, 0, 0),
    [874] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 3, 0, 0),
    [876] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_add_expr, 3, 0, 0),
    [878] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_add_expr, 3, 0, 0),
    [880] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(106),
    [882] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(106),
    [884] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_string_literal, 4, 0, 0),
    [886] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_literal, 4, 0, 0),
    [888] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_add_expr, 1, 0, 0),
    [890] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_add_expr, 1, 0, 0),
    [892] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_boolean_literal, 1, 0, 0),
    [894] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_boolean_literal, 1, 0, 0),
    [896] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(93),
    [898] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_simple_type_spec, 1, 0, 0),
    [900] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_simple_type_spec, 1, 0, 0),
    [902] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_shift_expr, 1, 0, 0),
    [904] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_shift_expr, 1, 0, 0),
    [906] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(101),
    [908] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_shift_expr, 3, 0, 0),
    [910] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_shift_expr, 3, 0, 0),
    [912] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(90),
    [914] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_and_expr, 1, 0, 0),
    [916] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_and_expr, 1, 0, 0),
    [918] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(99),
    [920] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_and_expr, 3, 0, 0),
    [922] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_and_expr, 3, 0, 0),
    [924] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xor_expr, 3, 0, 0),
    [926] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(98),
    [928] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_operator, 1, 0, 0),
    [930] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_operator, 1, 0, 0),
    [932] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xor_expr, 1, 0, 0),
    [934] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(488),
    [936] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(336),
    [938] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(450),
    [940] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(288),
    [942] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(448),
    [944] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(374),
    [946] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_declarator, 1, 0, 0),
    [948] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(375),
    [950] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(376),
    [952] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_or_expr, 3, 0, 0),
    [954] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(97),
    [956] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_or_expr, 1, 0, 0),
    [958] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_simple_declarator, 1, 0, 0),
    [960] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(242),
    [962] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(74),
    [964] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(74),
    [966] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(288),
    [969] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_expr, 1, 0, 0),
    [971] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(96),
    [973] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(77),
    [975] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(313),
    [977] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(454),
    [979] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(92),
    [981] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(80),
    [983] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(326),
    [985] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_array_declarator, 2, 0, 0),
    [987] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 2, 0, 0),
    [989] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 2, 0, 0),
    SHIFT_REPEAT(80),
    [992] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(311),
    [994] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(349),
    [996] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(348),
    [998] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(331),
    [1000] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(210),
    [1002] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(371),
    [1004] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(369),
    [1006] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2, 0, 0),
    [1008] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(454),
    [1011] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(92),
    [1014] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(350),
    [1016] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(146),
    [1018] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_readonly_attr_declarator, 1, 0, 0),
    [1020] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(421),
    [1022] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(330),
    [1024] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(453),
    [1026] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitset_dcl_repeat1, 2, 0, 0),
    [1028] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_bitset_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(453),
    [1031] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(361),
    [1033] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_header, 2, 0, 0),
    [1035] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(179),
    [1037] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_forward_dcl, 2, 0, 0),
    [1039] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(180),
    [1041] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(364),
    [1043] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(333),
    [1045] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_signed_long_int, 1, 0, 0),
    [1047] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(176),
    [1049] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarators, 1, 0, 0),
    [1051] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(86),
    [1053] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(518),
    [1055] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(76),
    [1057] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(261),
    [1059] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(491),
    [1061] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_declarators_repeat1, 2, 0, 0),
    SHIFT_REPEAT(176),
    [1064] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_declarators_repeat1, 2, 0, 0),
    [1066] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(22),
    [1068] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(249),
    [1070] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_forward_dcl, 2, 0, 0),
    [1072] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 2, 0, 0),
    SHIFT_REPEAT(349),
    [1075] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 2, 0, 0),
    [1077] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarators, 2, 0, 0),
    [1079] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_fixed_array_size, 3, 0, 0),
    [1081] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_signed_short_int, 1, 0, 0),
    [1083] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unsigned_longlong_int, 1, 0, 0),
    [1085] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_header, 2, 0, 0),
    [1087] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(181),
    [1089] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_forward_dcl, 2, 0, 0),
    [1091] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_signed_longlong_int, 1, 0, 0),
    [1093] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unsigned_int, 1, 0, 0),
    [1095] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2, 0, 0),
    SHIFT_REPEAT(210),
    [1098] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(314),
    [1100] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(262),
    [1102] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(37),
    [1104] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(78),
    [1106] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_type, 1, 0, 0),
    [1108] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unsigned_long_int, 1, 0, 0),
    [1110] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unsigned_short_int, 1, 0, 0),
    [1112] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_char_type, 1, 0, 0),
    [1114] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(310),
    [1116] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_signed_int, 1, 0, 0),
    [1118] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_integer_type, 1, 0, 0),
    [1120] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(154),
    [1122] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_appl_params_repeat1, 2, 0, 0),
    SHIFT_REPEAT(319),
    [1125] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_annotation_appl_params_repeat1, 2, 0, 0),
    [1127] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_type, 1, 0, 0),
    [1129] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_base_type_spec, 1, 0, 0),
    [1131] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_parameter_dcls_repeat1, 2, 0, 0),
    SHIFT_REPEAT(165),
    [1134] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_parameter_dcls_repeat1, 2, 0, 0),
    [1136] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(171),
    [1138] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_positive_int_const, 1, 0, 0),
    [1140] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 3, 0, 0),
    [1142] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_floating_pt_type, 1, 0, 0),
    [1144] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_name, 1, 0, 0),
    [1146] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_name, 1, 0, 0),
    [1148] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(198),
    [1150] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarators, 2, 0, 0),
    [1152] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_init_param_dcls_repeat1, 2, 0, 0),
    SHIFT_REPEAT(340),
    [1155] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_init_param_dcls_repeat1, 2, 0, 0),
    [1157] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(139),
    [1159] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_actual_parameters, 1, 0, 0),
    [1161] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(11),
    [1163] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_actual_parameters_repeat1, 2, 0, 0),
    [1165] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_actual_parameters_repeat1, 2, 0, 0),
    SHIFT_REPEAT(11),
    [1168] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_template_type_spec, 1, 0, 0),
    [1170] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_enum_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(171),
    [1173] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enum_dcl_repeat1, 2, 0, 0),
    [1175] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 5, 0, 0),
    [1177] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameters, 1, 0, 0),
    [1179] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(31),
    [1181] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_forward_dcl, 2, 0, 0),
    [1183] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(440),
    [1185] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_union_forward_dcl, 2, 0, 0),
    [1187] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_raises_expr, 1, 0, 0),
    [1189] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(319),
    [1191] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_appl_params, 1, 0, 0),
    [1193] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_declarator, 2, 0, 0),
    [1195] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarator, 1, 0, 0),
    [1197] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(67),
    [1199] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(91),
    [1201] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(166),
    [1203] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(357),
    [1205] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_dcl, 4, 0, 0),
    [1207] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(298),
    [1209] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(182),
    [1211] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_inheritance_spec, 3, 0, 0),
    [1213] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_bitmask_dcl_repeat1, 2, 0, 0),
    SHIFT_REPEAT(166),
    [1216] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitmask_dcl_repeat1, 2, 0, 0),
    [1218] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(28),
    [1220] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(46),
    [1222] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(340),
    [1224] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_init_param_dcls, 2, 0, 0),
    [1226] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(328),
    [1228] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(253),
    [1230] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(165),
    [1232] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_parameter_dcls, 1, 0, 0),
    [1234] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(45),
    [1236] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_formal_parameters_repeat1, 2, 0, 0),
    [1238] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_formal_parameters_repeat1, 2, 0, 0),
    SHIFT_REPEAT(31),
    [1241] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitfield_repeat1, 2, 0, 0),
    [1243] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_bitfield_repeat1, 2, 0, 0),
    SHIFT_REPEAT(253),
    [1246] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(334),
    [1248] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_inheritance_spec_repeat1, 2, 0, 0),
    SHIFT_REPEAT(182),
    [1251] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_inheritance_spec_repeat1, 2, 0, 0),
    [1253] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_parameter_dcls, 2, 0, 0),
    [1255] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(64),
    [1257] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_map_type, 8, 0, 0),
    [1259] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarators, 1, 0, 0),
    [1261] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(50),
    [1263] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_dcl, 5, 0, 0),
    [1265] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(308),
    [1267] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameter_names, 1, 0, 0),
    [1269] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(496),
    [1271] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_readonly_attr_declarator_repeat1, 2, 0, 0),
    SHIFT_REPEAT(374),
    [1274] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_readonly_attr_declarator_repeat1, 2, 0, 0),
    [1276] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case, 3, 0, 0),
    [1278] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(499),
    [1280] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_raises_expr_repeat1, 2, 0, 0),
    [1282] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_raises_expr_repeat1, 2, 0, 0),
    SHIFT_REPEAT(261),
    [1285] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameter_names, 2, 0, 0),
    [1287] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_formal_parameter_names_repeat1, 2, 0, 0),
    [1289] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_formal_parameter_names_repeat1, 2, 0, 0),
    SHIFT_REPEAT(496),
    [1292] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_init_param_dcls, 1, 0, 0),
    [1294] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(339),
    [1296] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_appl_params, 2, 0, 0),
    [1298] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameters, 2, 0, 0),
    [1300] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_actual_parameters, 2, 0, 0),
    [1302] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_type_spec, 1, 0, 0),
    [1304] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(246),
    [1306] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(366),
    [1308] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(335),
    [1310] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(248),
    [1312] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_type, 4, 0, 0),
    [1314] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 4, 0, 0),
    [1316] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_readonly_attr_declarator, 2, 0, 0),
    [1318] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_map_type, 6, 0, 0),
    [1320] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_any_declarators_repeat1, 2, 0, 0),
    SHIFT_REPEAT(198),
    [1323] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_any_declarators_repeat1, 2, 0, 0),
    [1325] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(522),
    [1327] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(70),
    [1329] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_fixed_pt_type, 6, 0, 0),
    [1331] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_inheritance_spec, 2, 0, 0),
    [1333] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 6, 0, 0),
    [1335] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 8, 0, 0),
    [1337] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 5, 0, 0),
    [1339] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameter, 2, 0, 0),
    [1341] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_switch_type_spec, 1, 0, 0),
    [1343] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_exception_list, 4, 0, 0),
    [1345] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(173),
    [1347] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(209),
    [1349] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_exception_list, 3, 0, 0),
    [1351] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 5, 0, 0),
    [1353] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(10),
    [1355] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_def, 9, 0, 0),
    [1357] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enumerator, 2, 0, 0),
    [1359] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(265),
    [1361] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield_spec, 6, 0, 0),
    [1363] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 8, 0, 8),
    [1365] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(18),
    [1367] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(410),
    [1369] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_init_param_dcl, 3, 0, 0),
    [1371] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_type, 1, 0, 0),
    [1373] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_param_dcl, 3, 0, 0),
    [1375] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_def, 8, 0, 0),
    [1377] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(363),
    [1379] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(87),
    [1381] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield, 3, 0, 0),
    [1383] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(62),
    [1385] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(88),
    [1387] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 6, 0, 0),
    [1389] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 5, 0, 0),
    [1391] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 5, 0, 0),
    [1393] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 6, 0, 0),
    [1395] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield, 2, 0, 0),
    [1397] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(315),
    [1399] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 7, 0, 8),
    [1401] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 7, 0, 0),
    [1403] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarator, 1, 0, 0),
    [1405] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_appl_param, 3, 0, 0),
    [1407] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_get_excep_expr, 2, 0, 0),
    [1409] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(104),
    [1411] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(492),
    [1413] = { .entry = { .count = 1, .reusable = false } },
    SHIFT_EXTRA(),
    [1415] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enumerator, 1, 0, 0),
    [1417] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_modifier, 1, 0, 0),
    [1419] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 4, 0, 0),
    [1421] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 7, 0, 5),
    [1423] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(19),
    [1425] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(236),
    [1427] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(26),
    [1429] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 4, 0, 0),
    [1431] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 7, 0, 0),
    [1433] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitmask_dcl_repeat1, 3, 0, 0),
    [1435] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_inheritance_spec, 2, 0, 0),
    [1437] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(194),
    [1439] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 7, 0, 0),
    [1441] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 6, 0, 5),
    [1443] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield_spec, 4, 0, 0),
    [1445] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 4, 0, 0),
    [1447] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 6, 0, 0),
    [1449] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_actual_parameter, 1, 0, 0),
    [1451] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(167),
    [1453] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 4, 0, 0),
    [1455] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(290),
    [1457] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(79),
    [1459] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bit_value, 1, 0, 0),
    [1461] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(279),
    [1463] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(465),
    [1465] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(466),
    [1467] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(30),
    [1469] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameter_type, 1, 0, 0),
    [1471] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(159),
    [1473] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(263),
    [1475] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(470),
    [1477] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(468),
    [1479] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(60),
    [1481] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_member_type, 1, 0, 0),
    [1483] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(251),
    [1485] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(472),
    [1487] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_readonly_attr_spec, 4, 0, 0),
    [1489] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 6, 0, 0),
    [1491] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_dcl, 4, 0, 0),
    [1493] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_const_type, 1, 0, 0),
    [1495] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(303),
    [1497] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(294),
    [1499] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_module_dcl, 4, 0, 0),
    [1501] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_default, 2, 0, 0),
    [1503] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_def, 3, 0, 0),
    [1505] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(147),
    [1507] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(72),
    [1509] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(478),
    [1511] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_inheritance_spec, 4, 0, 0),
    [1513] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_template_module_inst, 6, 0, 0),
    [1515] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(59),
    [1517] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 4, 0, 0),
    [1519] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_except_dcl, 4, 0, 0),
    [1521] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_template_module_dcl, 7, 0, 0),
    [1523] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(151),
    [1525] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(105),
    [1527] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(5),
    [1529] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(150),
    [1531] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(114),
    [1533] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(441),
    [1535] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(286),
    [1537] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_dcl, 1, 0, 0),
    [1539] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(434),
    [1541] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(213),
    [1543] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(287),
    [1545] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(54),
    [1547] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(83),
    [1549] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_set_excep_expr, 2, 0, 0),
    [1551] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_raises_expr, 2, 0, 0),
    [1553] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(35),
    [1555] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_type_spec, 1, 0, 0),
    [1557] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 3, 0, 0),
    [1559] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(34),
    [1561] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(140),
    [1563] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_type_declarator, 2, 0, 0),
    [1565] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(113),
    [1567] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(95),
    [1569] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(121),
    [1571] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(66),
    [1573] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(201),
    [1575] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_header, 3, 0, 0),
    [1577] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_def, 4, 0, 0),
    [1579] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(85),
    [1581] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_header, 3, 0, 0),
    [1583] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_destination_type, 1, 0, 0),
    [1585] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(316),
    [1587] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(352),
    [1589] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_except_dcl, 5, 0, 0),
    [1591] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(412),
    [1593] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_template_module_dcl, 8, 0, 0),
    [1595] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 5, 0, 0),
    [1597] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(84),
    [1599] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(58),
    [1601] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(415),
    [1603] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_native_dcl, 2, 0, 0),
    [1605] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_typedef_dcl, 2, 0, 0),
    [1607] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(259),
    [1609] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(42),
    [1611] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(81),
    [1613] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_dcl, 6, 0, 0),
    [1615] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(118),
    [1617] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(438),
    [1619] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(68),
    [1621] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(439),
    [1623] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(437),
    [1625] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(44),
    [1627] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(115),
    [1629] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(117),
    [1631] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_dcl, 5, 0, 0),
    [1633] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(36),
    [1635] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(392),
    [1637] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_fixed_pt_const_type, 1, 0, 0),
    [1639] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(57),
    [1641] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(267),
    [1643] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(405),
    [1645] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(156),
    [1647] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(48),
    [1649] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(89),
    [1651] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(15),
    [1653] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_module_dcl, 5, 0, 0),
    [1655] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(152),
    [1657] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_spec, 3, 0, 0),
    [1659] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(7),
    [1661] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(498),
    [1663] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(238),
    [1665] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_element_spec, 2, 0, 0),
    [1667] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(25),
    [1669] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_raises_expr, 4, 0, 0),
    [1671] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(107),
    [1673] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(455),
    [1675] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(400),
    [1677] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(4),
    [1679] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(305),
    [1681] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_value_dcl, 1, 0, 0),
    [1683] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(502),
    [1685] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_raises_expr, 5, 0, 0),
    [1687] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(6),
    [1689] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_template_module_ref, 6, 0, 0),
    [1691] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_dcl, 1, 0, 0),
    [1693] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(102),
    [1695] = { .entry = { .count = 1, .reusable = true } },
    ACCEPT_INPUT(),
    [1697] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(103),
    [1699] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(190),
    [1701] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_anno, 1, 0, 0),
    [1703] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(479),
    [1705] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(231),
    [1707] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(186),
    [1709] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(172),
    [1711] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(482),
    [1713] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(484),
    [1715] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_dcl, 5, 0, 0),
    [1717] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(309),
    [1719] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(144),
    [1721] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(155),
    [1723] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(51),
    [1725] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(73),
    [1727] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameter_type, 2, 0, 0),
    [1729] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(65),
    [1731] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(301),
    [1733] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(229),
    [1735] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(193),
    [1737] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(490),
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
