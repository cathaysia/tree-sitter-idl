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
#define STATE_COUNT 485
#define LARGE_STATE_COUNT 22
#define SYMBOL_COUNT 265
#define ALIAS_COUNT 3
#define TOKEN_COUNT 119
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 12

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
    anon_sym_native = 88,
    anon_sym_ATdefault_literal = 89,
    anon_sym_ATignore_literal_names = 90,
    anon_sym_switch = 91,
    anon_sym_case = 92,
    anon_sym_typedef = 93,
    anon_sym_POUNDdefine = 94,
    aux_sym_predefine_token1 = 95,
    sym_dds_service = 96,
    anon_sym_ATDDSRequestTopic = 97,
    anon_sym_name = 98,
    anon_sym_ATDDSReplyTopic = 99,
    sym_optional = 100,
    sym_key = 101,
    sym_must_understand = 102,
    sym_non_serialized = 103,
    sym_id = 104,
    sym_external = 105,
    anon_sym_AThashid = 106,
    anon_sym_LPAREN_DQUOTE = 107,
    anon_sym_ATtry_construct = 108,
    sym_final = 109,
    anon_sym_ATdata_representation = 110,
    anon_sym_XCDR = 111,
    anon_sym_XCDR2 = 112,
    sym_identifier = 113,
    anon_sym_LBRACK = 114,
    anon_sym_RBRACK = 115,
    anon_sym_SLASH_SLASH = 116,
    aux_sym_comment_token1 = 117,
    sym__eof = 118,
    sym_specification = 119,
    sym_signed_short_int = 120,
    sym_signed_long_int = 121,
    sym_signed_longlong_int = 122,
    sym_unsigned_int = 123,
    sym_fixed_pt_const_type = 124,
    sym_integer_type = 125,
    sym_signed_int = 126,
    sym_unsigned_short_int = 127,
    sym_unsigned_long_int = 128,
    sym_unsigned_longlong_int = 129,
    sym_floating_pt_type = 130,
    sym_char_type = 131,
    sym_scoped_name = 132,
    sym_string_type = 133,
    sym_type_spec = 134,
    sym_simple_type_spec = 135,
    sym_base_type_spec = 136,
    sym_any_type = 137,
    sym_fixed_pt_type = 138,
    sym_template_type_spec = 139,
    sym_sequence_type = 140,
    sym_map_type = 141,
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
    sym_interface_forward_dcl = 158,
    sym_interface_def = 159,
    sym_interface_header = 160,
    sym_interface_inheritance_spec = 161,
    sym_interface_name = 162,
    sym_interface_body = 163,
    sym_export = 164,
    sym_op_dcl = 165,
    sym_op_type_spec = 166,
    sym_parameter_dcls = 167,
    sym_param_dcl = 168,
    sym_param_attribute = 169,
    sym_raises_expr = 170,
    sym_attr_dcl = 171,
    sym_readonly_attr_spec = 172,
    sym_readonly_attr_declarator = 173,
    sym_attr_spec = 174,
    sym_attr_declarator = 175,
    sym_attr_raises_expr = 176,
    sym_get_excep_expr = 177,
    sym_set_excep_expr = 178,
    sym_exception_list = 179,
    sym_interface_anno = 180,
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
    sym_template_module_dcl = 192,
    sym_formal_parameters = 193,
    sym_formal_parameter = 194,
    sym_formal_parameter_type = 195,
    sym_tpl_definition = 196,
    sym_template_module_inst = 197,
    sym_actual_parameters = 198,
    sym_actual_parameter = 199,
    sym_template_module_ref = 200,
    sym_formal_parameter_names = 201,
    sym__definition = 202,
    sym_native_dcl = 203,
    sym_module_dcl = 204,
    sym_struct_forward_dcl = 205,
    sym_struct_def = 206,
    sym_member = 207,
    sym_default = 208,
    sym_enum_dcl = 209,
    sym_enumerator = 210,
    sym_enum_modifier = 211,
    sym_enum_anno = 212,
    sym_union_forward_dcl = 213,
    sym_union_def = 214,
    sym_case = 215,
    sym_case_label = 216,
    sym_element_spec = 217,
    sym_switch_type_spec = 218,
    sym_typedef_dcl = 219,
    sym_predefine = 220,
    sym_dds_request_topic = 221,
    sym_dds_reply_topic = 222,
    sym_const_dcl = 223,
    sym_const_type = 224,
    sym_hashid = 225,
    sym_try_construct = 226,
    sym_data_representation = 227,
    sym_struct_modifier = 228,
    sym_simple_declarator = 229,
    sym_declarator = 230,
    sym_declarators = 231,
    sym_array_declarator = 232,
    sym_positive_int_const = 233,
    sym_fixed_array_size = 234,
    sym_type_declarator = 235,
    sym_any_declarators = 236,
    sym_any_declarator = 237,
    sym_comment = 238,
    aux_sym_specification_repeat1 = 239,
    aux_sym_specification_repeat2 = 240,
    aux_sym_except_dcl_repeat1 = 241,
    aux_sym_interface_def_repeat1 = 242,
    aux_sym_interface_inheritance_spec_repeat1 = 243,
    aux_sym_interface_body_repeat1 = 244,
    aux_sym_parameter_dcls_repeat1 = 245,
    aux_sym_raises_expr_repeat1 = 246,
    aux_sym_readonly_attr_declarator_repeat1 = 247,
    aux_sym_bitset_dcl_repeat1 = 248,
    aux_sym_bitfield_repeat1 = 249,
    aux_sym_bitmask_dcl_repeat1 = 250,
    aux_sym_annotation_dcl_repeat1 = 251,
    aux_sym_template_module_dcl_repeat1 = 252,
    aux_sym_formal_parameters_repeat1 = 253,
    aux_sym_actual_parameters_repeat1 = 254,
    aux_sym_formal_parameter_names_repeat1 = 255,
    aux_sym_struct_def_repeat1 = 256,
    aux_sym_member_repeat1 = 257,
    aux_sym_enum_dcl_repeat1 = 258,
    aux_sym_enumerator_repeat1 = 259,
    aux_sym_union_def_repeat1 = 260,
    aux_sym_data_representation_repeat1 = 261,
    aux_sym_declarators_repeat1 = 262,
    aux_sym_array_declarator_repeat1 = 263,
    aux_sym_any_declarators_repeat1 = 264,
    alias_sym_data_rep = 265,
    alias_sym_hashid_value = 266,
    alias_sym_try_construct_value = 267,
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
    [anon_sym_native] = "native",
    [anon_sym_ATdefault_literal] = "@default_literal",
    [anon_sym_ATignore_literal_names] = "@ignore_literal_names",
    [anon_sym_switch] = "switch",
    [anon_sym_case] = "case",
    [anon_sym_typedef] = "typedef",
    [anon_sym_POUNDdefine] = "#define",
    [aux_sym_predefine_token1] = "predefine_token1",
    [sym_dds_service] = "dds_service",
    [anon_sym_ATDDSRequestTopic] = "@DDSRequestTopic",
    [anon_sym_name] = "name",
    [anon_sym_ATDDSReplyTopic] = "@DDSReplyTopic",
    [sym_optional] = "optional",
    [sym_key] = "key",
    [sym_must_understand] = "must_understand",
    [sym_non_serialized] = "non_serialized",
    [sym_id] = "id",
    [sym_external] = "external",
    [anon_sym_AThashid] = "@hashid",
    [anon_sym_LPAREN_DQUOTE] = "(\"",
    [anon_sym_ATtry_construct] = "@try_construct",
    [sym_final] = "final",
    [anon_sym_ATdata_representation] = "@data_representation",
    [anon_sym_XCDR] = "XCDR",
    [anon_sym_XCDR2] = "XCDR2",
    [sym_identifier] = "identifier",
    [anon_sym_LBRACK] = "[",
    [anon_sym_RBRACK] = "]",
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
    [sym_interface_anno] = "interface_anno",
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
    [sym__definition] = "_definition",
    [sym_native_dcl] = "native_dcl",
    [sym_module_dcl] = "module_dcl",
    [sym_struct_forward_dcl] = "struct_forward_dcl",
    [sym_struct_def] = "struct_def",
    [sym_member] = "member",
    [sym_default] = "default",
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
    [sym_typedef_dcl] = "typedef_dcl",
    [sym_predefine] = "predefine",
    [sym_dds_request_topic] = "dds_request_topic",
    [sym_dds_reply_topic] = "dds_reply_topic",
    [sym_const_dcl] = "const_dcl",
    [sym_const_type] = "const_type",
    [sym_hashid] = "hashid",
    [sym_try_construct] = "try_construct",
    [sym_data_representation] = "data_representation",
    [sym_struct_modifier] = "struct_modifier",
    [sym_simple_declarator] = "simple_declarator",
    [sym_declarator] = "declarator",
    [sym_declarators] = "declarators",
    [sym_array_declarator] = "array_declarator",
    [sym_positive_int_const] = "positive_int_const",
    [sym_fixed_array_size] = "fixed_array_size",
    [sym_type_declarator] = "type_declarator",
    [sym_any_declarators] = "any_declarators",
    [sym_any_declarator] = "any_declarator",
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
    [aux_sym_template_module_dcl_repeat1] = "template_module_dcl_repeat1",
    [aux_sym_formal_parameters_repeat1] = "formal_parameters_repeat1",
    [aux_sym_actual_parameters_repeat1] = "actual_parameters_repeat1",
    [aux_sym_formal_parameter_names_repeat1] = "formal_parameter_names_repeat1",
    [aux_sym_struct_def_repeat1] = "struct_def_repeat1",
    [aux_sym_member_repeat1] = "member_repeat1",
    [aux_sym_enum_dcl_repeat1] = "enum_dcl_repeat1",
    [aux_sym_enumerator_repeat1] = "enumerator_repeat1",
    [aux_sym_union_def_repeat1] = "union_def_repeat1",
    [aux_sym_data_representation_repeat1] = "data_representation_repeat1",
    [aux_sym_declarators_repeat1] = "declarators_repeat1",
    [aux_sym_array_declarator_repeat1] = "array_declarator_repeat1",
    [aux_sym_any_declarators_repeat1] = "any_declarators_repeat1",
    [alias_sym_data_rep] = "data_rep",
    [alias_sym_hashid_value] = "hashid_value",
    [alias_sym_try_construct_value] = "try_construct_value",
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
    [anon_sym_native] = anon_sym_native,
    [anon_sym_ATdefault_literal] = anon_sym_ATdefault_literal,
    [anon_sym_ATignore_literal_names] = anon_sym_ATignore_literal_names,
    [anon_sym_switch] = anon_sym_switch,
    [anon_sym_case] = anon_sym_case,
    [anon_sym_typedef] = anon_sym_typedef,
    [anon_sym_POUNDdefine] = anon_sym_POUNDdefine,
    [aux_sym_predefine_token1] = aux_sym_predefine_token1,
    [sym_dds_service] = sym_dds_service,
    [anon_sym_ATDDSRequestTopic] = anon_sym_ATDDSRequestTopic,
    [anon_sym_name] = anon_sym_name,
    [anon_sym_ATDDSReplyTopic] = anon_sym_ATDDSReplyTopic,
    [sym_optional] = sym_optional,
    [sym_key] = sym_key,
    [sym_must_understand] = sym_must_understand,
    [sym_non_serialized] = sym_non_serialized,
    [sym_id] = sym_id,
    [sym_external] = sym_external,
    [anon_sym_AThashid] = anon_sym_AThashid,
    [anon_sym_LPAREN_DQUOTE] = anon_sym_LPAREN_DQUOTE,
    [anon_sym_ATtry_construct] = anon_sym_ATtry_construct,
    [sym_final] = sym_final,
    [anon_sym_ATdata_representation] = anon_sym_ATdata_representation,
    [anon_sym_XCDR] = anon_sym_XCDR,
    [anon_sym_XCDR2] = anon_sym_XCDR2,
    [sym_identifier] = sym_identifier,
    [anon_sym_LBRACK] = anon_sym_LBRACK,
    [anon_sym_RBRACK] = anon_sym_RBRACK,
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
    [sym_interface_anno] = sym_interface_anno,
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
    [sym__definition] = sym__definition,
    [sym_native_dcl] = sym_native_dcl,
    [sym_module_dcl] = sym_module_dcl,
    [sym_struct_forward_dcl] = sym_struct_forward_dcl,
    [sym_struct_def] = sym_struct_def,
    [sym_member] = sym_member,
    [sym_default] = sym_default,
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
    [sym_typedef_dcl] = sym_typedef_dcl,
    [sym_predefine] = sym_predefine,
    [sym_dds_request_topic] = sym_dds_request_topic,
    [sym_dds_reply_topic] = sym_dds_reply_topic,
    [sym_const_dcl] = sym_const_dcl,
    [sym_const_type] = sym_const_type,
    [sym_hashid] = sym_hashid,
    [sym_try_construct] = sym_try_construct,
    [sym_data_representation] = sym_data_representation,
    [sym_struct_modifier] = sym_struct_modifier,
    [sym_simple_declarator] = sym_simple_declarator,
    [sym_declarator] = sym_declarator,
    [sym_declarators] = sym_declarators,
    [sym_array_declarator] = sym_array_declarator,
    [sym_positive_int_const] = sym_positive_int_const,
    [sym_fixed_array_size] = sym_fixed_array_size,
    [sym_type_declarator] = sym_type_declarator,
    [sym_any_declarators] = sym_any_declarators,
    [sym_any_declarator] = sym_any_declarator,
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
    [aux_sym_template_module_dcl_repeat1] = aux_sym_template_module_dcl_repeat1,
    [aux_sym_formal_parameters_repeat1] = aux_sym_formal_parameters_repeat1,
    [aux_sym_actual_parameters_repeat1] = aux_sym_actual_parameters_repeat1,
    [aux_sym_formal_parameter_names_repeat1] = aux_sym_formal_parameter_names_repeat1,
    [aux_sym_struct_def_repeat1] = aux_sym_struct_def_repeat1,
    [aux_sym_member_repeat1] = aux_sym_member_repeat1,
    [aux_sym_enum_dcl_repeat1] = aux_sym_enum_dcl_repeat1,
    [aux_sym_enumerator_repeat1] = aux_sym_enumerator_repeat1,
    [aux_sym_union_def_repeat1] = aux_sym_union_def_repeat1,
    [aux_sym_data_representation_repeat1] = aux_sym_data_representation_repeat1,
    [aux_sym_declarators_repeat1] = aux_sym_declarators_repeat1,
    [aux_sym_array_declarator_repeat1] = aux_sym_array_declarator_repeat1,
    [aux_sym_any_declarators_repeat1] = aux_sym_any_declarators_repeat1,
    [alias_sym_data_rep] = alias_sym_data_rep,
    [alias_sym_hashid_value] = alias_sym_hashid_value,
    [alias_sym_try_construct_value] = alias_sym_try_construct_value,
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
    [anon_sym_native] = {
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
    [anon_sym_typedef] = {
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
    [sym_dds_service] = {
        .visible = true,
        .named = true,
    },
    [anon_sym_ATDDSRequestTopic] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_name] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_ATDDSReplyTopic] = {
        .visible = true,
        .named = false,
    },
    [sym_optional] = {
        .visible = true,
        .named = true,
    },
    [sym_key] = {
        .visible = true,
        .named = true,
    },
    [sym_must_understand] = {
        .visible = true,
        .named = true,
    },
    [sym_non_serialized] = {
        .visible = true,
        .named = true,
    },
    [sym_id] = {
        .visible = true,
        .named = true,
    },
    [sym_external] = {
        .visible = true,
        .named = true,
    },
    [anon_sym_AThashid] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_LPAREN_DQUOTE] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_ATtry_construct] = {
        .visible = true,
        .named = false,
    },
    [sym_final] = {
        .visible = true,
        .named = true,
    },
    [anon_sym_ATdata_representation] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_XCDR] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_XCDR2] = {
        .visible = true,
        .named = false,
    },
    [sym_identifier] = {
        .visible = true,
        .named = true,
    },
    [anon_sym_LBRACK] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_RBRACK] = {
        .visible = true,
        .named = false,
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
    [sym_interface_anno] = {
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
    [sym_typedef_dcl] = {
        .visible = true,
        .named = true,
    },
    [sym_predefine] = {
        .visible = true,
        .named = true,
    },
    [sym_dds_request_topic] = {
        .visible = true,
        .named = true,
    },
    [sym_dds_reply_topic] = {
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
    [sym_hashid] = {
        .visible = true,
        .named = true,
    },
    [sym_try_construct] = {
        .visible = true,
        .named = true,
    },
    [sym_data_representation] = {
        .visible = true,
        .named = true,
    },
    [sym_struct_modifier] = {
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
    [sym_positive_int_const] = {
        .visible = true,
        .named = true,
    },
    [sym_fixed_array_size] = {
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
    [aux_sym_struct_def_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_member_repeat1] = {
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
    [aux_sym_data_representation_repeat1] = {
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
    [aux_sym_any_declarators_repeat1] = {
        .visible = false,
        .named = false,
    },
    [alias_sym_data_rep] = {
        .visible = true,
        .named = true,
    },
    [alias_sym_hashid_value] = {
        .visible = true,
        .named = true,
    },
    [alias_sym_try_construct_value] = {
        .visible = true,
        .named = true,
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
    [5] = { .index = 3, .length = 2 },
    [6] = { .index = 5, .length = 1 },
    [7] = { .index = 6, .length = 1 },
    [9] = { .index = 7, .length = 2 },
    [10] = { .index = 9, .length = 1 },
    [11] = { .index = 10, .length = 1 },
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
    [3] = {
        [2] = alias_sym_data_rep,
    },
    [4] = {
        [1] = alias_sym_try_construct_value,
    },
    [8] = {
        [2] = alias_sym_hashid_value,
    },
};

static const uint16_t ts_non_terminal_alias_map[] = {
    aux_sym_data_representation_repeat1,
    2,
    aux_sym_data_representation_repeat1,
    alias_sym_data_rep,
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
    [153] = 153,
    [154] = 154,
    [155] = 155,
    [156] = 156,
    [157] = 157,
    [158] = 158,
    [159] = 159,
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
    [219] = 219,
    [220] = 220,
    [221] = 221,
    [222] = 199,
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
    [267] = 98,
    [268] = 97,
    [269] = 95,
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
    [482] = 427,
    [483] = 397,
    [484] = 484,
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
                ADVANCE(491);
            if(lookahead == '"')
                ADVANCE(566);
            if(lookahead == '#')
                ADVANCE(141);
            if(lookahead == '$')
                ADVANCE(551);
            if(lookahead == '%')
                ADVANCE(560);
            if(lookahead == '\'')
                ADVANCE(568);
            if(lookahead == '(')
                ADVANCE(561);
            if(lookahead == ')')
                ADVANCE(562);
            if(lookahead == '*')
                ADVANCE(558);
            if(lookahead == '+')
                ADVANCE(554);
            if(lookahead == ',')
                ADVANCE(544);
            if(lookahead == '-')
                ADVANCE(556);
            if(lookahead == '/')
                ADVANCE(559);
            if(lookahead == ':')
                ADVANCE(646);
            if(lookahead == ';')
                ADVANCE(647);
            if(lookahead == '<')
                ADVANCE(539);
            if(lookahead == '=')
                ADVANCE(669);
            if(lookahead == '>')
                ADVANCE(541);
            if(lookahead == '@')
                ADVANCE(668);
            if(lookahead == 'F')
                ADVANCE(570);
            if(lookahead == 'L')
                ADVANCE(564);
            if(lookahead == 'T')
                ADVANCE(572);
            if(lookahead == 'X')
                ADVANCE(571);
            if(lookahead == '[')
                ADVANCE(919);
            if(lookahead == '\\')
                SKIP(484)
            if(lookahead == ']')
                ADVANCE(920);
            if(lookahead == '^')
                ADVANCE(550);
            if(lookahead == 'a')
                ADVANCE(586);
            if(lookahead == 'b')
                ADVANCE(584);
            if(lookahead == 'c')
                ADVANCE(573);
            if(lookahead == 'd')
                ADVANCE(580);
            if(lookahead == 'e')
                ADVANCE(588);
            if(lookahead == 'f')
                ADVANCE(583);
            if(lookahead == 'g')
                ADVANCE(582);
            if(lookahead == 'i')
                ADVANCE(587);
            if(lookahead == 'l')
                ADVANCE(589);
            if(lookahead == 'm')
                ADVANCE(574);
            if(lookahead == 'n')
                ADVANCE(575);
            if(lookahead == 'o')
                ADVANCE(579);
            if(lookahead == 'r')
                ADVANCE(577);
            if(lookahead == 's')
                ADVANCE(581);
            if(lookahead == 't')
                ADVANCE(590);
            if(lookahead == 'u')
                ADVANCE(585);
            if(lookahead == 'v')
                ADVANCE(576);
            if(lookahead == 'w')
                ADVANCE(578);
            if(lookahead == '{')
                ADVANCE(640);
            if(lookahead == '|')
                ADVANCE(549);
            if(lookahead == '}')
                ADVANCE(641);
            if(lookahead == '~')
                ADVANCE(563);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(0)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= '_') ||
               ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(569);
            END_STATE();
        case 1:
            if(lookahead == '\n')
                SKIP(47)
            END_STATE();
        case 2:
            if(lookahead == '\n')
                SKIP(47)
            if(lookahead == '\r')
                SKIP(1)
            END_STATE();
        case 3:
            if(lookahead == '\n')
                SKIP(41)
            END_STATE();
        case 4:
            if(lookahead == '\n')
                SKIP(41)
            if(lookahead == '\r')
                SKIP(3)
            END_STATE();
        case 5:
            if(lookahead == '\n')
                SKIP(51)
            END_STATE();
        case 6:
            if(lookahead == '\n')
                SKIP(51)
            if(lookahead == '\r')
                SKIP(5)
            END_STATE();
        case 7:
            if(lookahead == '\n')
                SKIP(52)
            END_STATE();
        case 8:
            if(lookahead == '\n')
                SKIP(52)
            if(lookahead == '\r')
                SKIP(7)
            END_STATE();
        case 9:
            if(lookahead == '\n')
                SKIP(48)
            END_STATE();
        case 10:
            if(lookahead == '\n')
                SKIP(48)
            if(lookahead == '\r')
                SKIP(9)
            END_STATE();
        case 11:
            if(lookahead == '\n')
                SKIP(53)
            END_STATE();
        case 12:
            if(lookahead == '\n')
                SKIP(53)
            if(lookahead == '\r')
                SKIP(11)
            END_STATE();
        case 13:
            if(lookahead == '\n')
                SKIP(54)
            END_STATE();
        case 14:
            if(lookahead == '\n')
                SKIP(54)
            if(lookahead == '\r')
                SKIP(13)
            END_STATE();
        case 15:
            if(lookahead == '\n')
                SKIP(55)
            END_STATE();
        case 16:
            if(lookahead == '\n')
                SKIP(55)
            if(lookahead == '\r')
                SKIP(15)
            END_STATE();
        case 17:
            if(lookahead == '\n')
                SKIP(56)
            END_STATE();
        case 18:
            if(lookahead == '\n')
                SKIP(56)
            if(lookahead == '\r')
                SKIP(17)
            END_STATE();
        case 19:
            if(lookahead == '\n')
                SKIP(42)
            END_STATE();
        case 20:
            if(lookahead == '\n')
                SKIP(42)
            if(lookahead == '\r')
                SKIP(19)
            END_STATE();
        case 21:
            if(lookahead == '\n')
                SKIP(44)
            END_STATE();
        case 22:
            if(lookahead == '\n')
                SKIP(44)
            if(lookahead == '\r')
                SKIP(21)
            END_STATE();
        case 23:
            if(lookahead == '\n')
                SKIP(45)
            END_STATE();
        case 24:
            if(lookahead == '\n')
                SKIP(45)
            if(lookahead == '\r')
                SKIP(23)
            END_STATE();
        case 25:
            if(lookahead == '\n')
                SKIP(46)
            END_STATE();
        case 26:
            if(lookahead == '\n')
                SKIP(46)
            if(lookahead == '\r')
                SKIP(25)
            END_STATE();
        case 27:
            if(lookahead == '\n')
                SKIP(57)
            END_STATE();
        case 28:
            if(lookahead == '\n')
                SKIP(57)
            if(lookahead == '\r')
                SKIP(27)
            END_STATE();
        case 29:
            if(lookahead == '\n')
                ADVANCE(625);
            if(lookahead == '\r')
                ADVANCE(32);
            if(lookahead == '/')
                ADVANCE(634);
            if(lookahead == '\\')
                ADVANCE(632);
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                SKIP(61)
            if(lookahead != 0)
                ADVANCE(635);
            END_STATE();
        case 30:
            if(lookahead == '\n')
                ADVANCE(625);
            if(lookahead == '\r')
                ADVANCE(31);
            if(lookahead == '/')
                ADVANCE(50);
            if(lookahead == '\\')
                SKIP(37)
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                SKIP(60)
            END_STATE();
        case 31:
            if(lookahead == '\n')
                ADVANCE(625);
            if(lookahead == '/')
                ADVANCE(50);
            if(lookahead == '\\')
                SKIP(37)
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(60)
            END_STATE();
        case 32:
            if(lookahead == '\n')
                ADVANCE(625);
            if(lookahead == '/')
                ADVANCE(634);
            if(lookahead == '\\')
                ADVANCE(632);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(61)
            if(lookahead != 0)
                ADVANCE(635);
            END_STATE();
        case 33:
            if(lookahead == '\n')
                SKIP(58)
            END_STATE();
        case 34:
            if(lookahead == '\n')
                SKIP(58)
            if(lookahead == '\r')
                SKIP(33)
            END_STATE();
        case 35:
            if(lookahead == '\n')
                ADVANCE(925);
            if(lookahead == '\r')
                ADVANCE(924);
            if(lookahead == '\\')
                ADVANCE(928);
            if(lookahead != 0)
                ADVANCE(927);
            END_STATE();
        case 36:
            if(lookahead == '\n')
                SKIP(60)
            END_STATE();
        case 37:
            if(lookahead == '\n')
                SKIP(60)
            if(lookahead == '\r')
                SKIP(36)
            END_STATE();
        case 38:
            if(lookahead == '\n')
                SKIP(59)
            END_STATE();
        case 39:
            if(lookahead == '\n')
                SKIP(59)
            if(lookahead == '\r')
                SKIP(38)
            END_STATE();
        case 40:
            if(lookahead == ' ')
                ADVANCE(283);
            END_STATE();
        case 41:
            if(lookahead == '"')
                ADVANCE(566);
            if(lookahead == '\'')
                ADVANCE(568);
            if(lookahead == '(')
                ADVANCE(561);
            if(lookahead == '+')
                ADVANCE(555);
            if(lookahead == '-')
                ADVANCE(557);
            if(lookahead == '.')
                ADVANCE(476);
            if(lookahead == '/')
                ADVANCE(50);
            if(lookahead == '0')
                ADVANCE(602);
            if(lookahead == ':')
                ADVANCE(70);
            if(lookahead == 'F')
                ADVANCE(730);
            if(lookahead == 'L')
                ADVANCE(565);
            if(lookahead == 'T')
                ADVANCE(734);
            if(lookahead == '\\')
                SKIP(4)
            if(lookahead == 'a')
                ADVANCE(834);
            if(lookahead == 'b')
                ADVANCE(853);
            if(lookahead == 'c')
                ADVANCE(801);
            if(lookahead == 'd')
                ADVANCE(849);
            if(lookahead == 'f')
                ADVANCE(804);
            if(lookahead == 'i')
                ADVANCE(838);
            if(lookahead == 'l')
                ADVANCE(852);
            if(lookahead == 'm')
                ADVANCE(737);
            if(lookahead == 'o')
                ADVANCE(756);
            if(lookahead == 's')
                ADVANCE(767);
            if(lookahead == 'u')
                ADVANCE(815);
            if(lookahead == 'w')
                ADVANCE(752);
            if(lookahead == '~')
                ADVANCE(563);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(41)
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(606);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 42:
            if(lookahead == '"')
                ADVANCE(566);
            if(lookahead == '\'')
                ADVANCE(568);
            if(lookahead == '(')
                ADVANCE(561);
            if(lookahead == '+')
                ADVANCE(555);
            if(lookahead == '-')
                ADVANCE(557);
            if(lookahead == '.')
                ADVANCE(476);
            if(lookahead == '/')
                ADVANCE(50);
            if(lookahead == '0')
                ADVANCE(602);
            if(lookahead == ':')
                ADVANCE(70);
            if(lookahead == 'F')
                ADVANCE(730);
            if(lookahead == 'L')
                ADVANCE(565);
            if(lookahead == 'T')
                ADVANCE(734);
            if(lookahead == '\\')
                SKIP(20)
            if(lookahead == '~')
                ADVANCE(563);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(42)
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(606);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 43:
            if(lookahead == '"')
                ADVANCE(713);
            END_STATE();
        case 44:
            if(lookahead == '$')
                ADVANCE(551);
            if(lookahead == '%')
                ADVANCE(560);
            if(lookahead == ')')
                ADVANCE(562);
            if(lookahead == '*')
                ADVANCE(558);
            if(lookahead == '+')
                ADVANCE(554);
            if(lookahead == ',')
                ADVANCE(544);
            if(lookahead == '-')
                ADVANCE(556);
            if(lookahead == '/')
                ADVANCE(559);
            if(lookahead == ':')
                ADVANCE(646);
            if(lookahead == ';')
                ADVANCE(647);
            if(lookahead == '<')
                ADVANCE(539);
            if(lookahead == '>')
                ADVANCE(541);
            if(lookahead == '@')
                ADVANCE(158);
            if(lookahead == '\\')
                SKIP(22)
            if(lookahead == ']')
                ADVANCE(920);
            if(lookahead == '^')
                ADVANCE(550);
            if(lookahead == '{')
                ADVANCE(640);
            if(lookahead == '|')
                ADVANCE(549);
            if(lookahead == '}')
                ADVANCE(641);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(44)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 45:
            if(lookahead == '$')
                ADVANCE(551);
            if(lookahead == ')')
                ADVANCE(562);
            if(lookahead == ',')
                ADVANCE(544);
            if(lookahead == '/')
                ADVANCE(50);
            if(lookahead == ':')
                ADVANCE(645);
            if(lookahead == ';')
                ADVANCE(647);
            if(lookahead == '>')
                ADVANCE(540);
            if(lookahead == '\\')
                SKIP(24)
            if(lookahead == ']')
                ADVANCE(920);
            if(lookahead == '^')
                ADVANCE(550);
            if(lookahead == 'i')
                ADVANCE(291);
            if(lookahead == 'o')
                ADVANCE(448);
            if(lookahead == '|')
                ADVANCE(549);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(45)
            END_STATE();
        case 46:
            if(lookahead == ')')
                ADVANCE(562);
            if(lookahead == ',')
                ADVANCE(544);
            if(lookahead == '/')
                ADVANCE(50);
            if(lookahead == ':')
                ADVANCE(645);
            if(lookahead == ';')
                ADVANCE(647);
            if(lookahead == '<')
                ADVANCE(538);
            if(lookahead == '>')
                ADVANCE(540);
            if(lookahead == '\\')
                SKIP(26)
            if(lookahead == '{')
                ADVANCE(640);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(46)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 47:
            if(lookahead == ',')
                ADVANCE(544);
            if(lookahead == '/')
                ADVANCE(50);
            if(lookahead == ':')
                ADVANCE(70);
            if(lookahead == '<')
                ADVANCE(538);
            if(lookahead == '>')
                ADVANCE(540);
            if(lookahead == '@')
                ADVANCE(157);
            if(lookahead == '\\')
                SKIP(2)
            if(lookahead == ']')
                ADVANCE(920);
            if(lookahead == 'a')
                ADVANCE(833);
            if(lookahead == 'b')
                ADVANCE(806);
            if(lookahead == 'c')
                ADVANCE(800);
            if(lookahead == 'd')
                ADVANCE(849);
            if(lookahead == 'e')
                ADVANCE(836);
            if(lookahead == 'f')
                ADVANCE(804);
            if(lookahead == 'i')
                ADVANCE(838);
            if(lookahead == 'l')
                ADVANCE(852);
            if(lookahead == 'm')
                ADVANCE(737);
            if(lookahead == 'n')
                ADVANCE(742);
            if(lookahead == 'o')
                ADVANCE(756);
            if(lookahead == 'r')
                ADVANCE(781);
            if(lookahead == 's')
                ADVANCE(765);
            if(lookahead == 't')
                ADVANCE(913);
            if(lookahead == 'u')
                ADVANCE(814);
            if(lookahead == 'v')
                ADVANCE(850);
            if(lookahead == 'w')
                ADVANCE(752);
            if(lookahead == '{')
                ADVANCE(640);
            if(lookahead == '}')
                ADVANCE(641);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(47)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 48:
            if(lookahead == ',')
                ADVANCE(544);
            if(lookahead == '/')
                ADVANCE(50);
            if(lookahead == ':')
                ADVANCE(70);
            if(lookahead == '>')
                ADVANCE(540);
            if(lookahead == '@')
                ADVANCE(177);
            if(lookahead == '\\')
                SKIP(10)
            if(lookahead == 'a')
                ADVANCE(834);
            if(lookahead == 'b')
                ADVANCE(853);
            if(lookahead == 'c')
                ADVANCE(801);
            if(lookahead == 'd')
                ADVANCE(849);
            if(lookahead == 'f')
                ADVANCE(804);
            if(lookahead == 'i')
                ADVANCE(838);
            if(lookahead == 'l')
                ADVANCE(852);
            if(lookahead == 'm')
                ADVANCE(737);
            if(lookahead == 'o')
                ADVANCE(756);
            if(lookahead == 's')
                ADVANCE(767);
            if(lookahead == 'u')
                ADVANCE(815);
            if(lookahead == 'w')
                ADVANCE(752);
            if(lookahead == '}')
                ADVANCE(641);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(48)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 49:
            if(lookahead == '.')
                ADVANCE(476);
            if(lookahead == '0')
                ADVANCE(599);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(601);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(615);
            END_STATE();
        case 50:
            if(lookahead == '/')
                ADVANCE(921);
            END_STATE();
        case 51:
            if(lookahead == '/')
                ADVANCE(50);
            if(lookahead == ':')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(157);
            if(lookahead == '\\')
                SKIP(6)
            if(lookahead == 'a')
                ADVANCE(834);
            if(lookahead == 'b')
                ADVANCE(806);
            if(lookahead == 'c')
                ADVANCE(743);
            if(lookahead == 'd')
                ADVANCE(778);
            if(lookahead == 'e')
                ADVANCE(837);
            if(lookahead == 'f')
                ADVANCE(804);
            if(lookahead == 'i')
                ADVANCE(838);
            if(lookahead == 'l')
                ADVANCE(852);
            if(lookahead == 'm')
                ADVANCE(737);
            if(lookahead == 'o')
                ADVANCE(756);
            if(lookahead == 's')
                ADVANCE(765);
            if(lookahead == 'u')
                ADVANCE(814);
            if(lookahead == 'w')
                ADVANCE(752);
            if(lookahead == '}')
                ADVANCE(641);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(51)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 52:
            if(lookahead == '/')
                ADVANCE(50);
            if(lookahead == ':')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(157);
            if(lookahead == '\\')
                SKIP(8)
            if(lookahead == 'a')
                ADVANCE(834);
            if(lookahead == 'b')
                ADVANCE(806);
            if(lookahead == 'c')
                ADVANCE(801);
            if(lookahead == 'd')
                ADVANCE(849);
            if(lookahead == 'e')
                ADVANCE(837);
            if(lookahead == 'f')
                ADVANCE(804);
            if(lookahead == 'i')
                ADVANCE(838);
            if(lookahead == 'l')
                ADVANCE(852);
            if(lookahead == 'm')
                ADVANCE(737);
            if(lookahead == 'o')
                ADVANCE(756);
            if(lookahead == 's')
                ADVANCE(765);
            if(lookahead == 'u')
                ADVANCE(814);
            if(lookahead == 'w')
                ADVANCE(752);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(52)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 53:
            if(lookahead == '/')
                ADVANCE(50);
            if(lookahead == ':')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(251);
            if(lookahead == '\\')
                SKIP(12)
            if(lookahead == 'a')
                ADVANCE(834);
            if(lookahead == 'b')
                ADVANCE(853);
            if(lookahead == 'c')
                ADVANCE(800);
            if(lookahead == 'd')
                ADVANCE(849);
            if(lookahead == 'e')
                ADVANCE(837);
            if(lookahead == 'f')
                ADVANCE(804);
            if(lookahead == 'i')
                ADVANCE(838);
            if(lookahead == 'l')
                ADVANCE(852);
            if(lookahead == 'o')
                ADVANCE(756);
            if(lookahead == 's')
                ADVANCE(767);
            if(lookahead == 't')
                ADVANCE(913);
            if(lookahead == 'u')
                ADVANCE(815);
            if(lookahead == 'w')
                ADVANCE(752);
            if(lookahead == '}')
                ADVANCE(641);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(53)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 54:
            if(lookahead == '/')
                ADVANCE(50);
            if(lookahead == ':')
                ADVANCE(70);
            if(lookahead == '\\')
                SKIP(14)
            if(lookahead == 'a')
                ADVANCE(834);
            if(lookahead == 'b')
                ADVANCE(853);
            if(lookahead == 'c')
                ADVANCE(800);
            if(lookahead == 'd')
                ADVANCE(849);
            if(lookahead == 'e')
                ADVANCE(835);
            if(lookahead == 'f')
                ADVANCE(820);
            if(lookahead == 'i')
                ADVANCE(844);
            if(lookahead == 'l')
                ADVANCE(852);
            if(lookahead == 'o')
                ADVANCE(756);
            if(lookahead == 's')
                ADVANCE(766);
            if(lookahead == 't')
                ADVANCE(914);
            if(lookahead == 'u')
                ADVANCE(814);
            if(lookahead == 'v')
                ADVANCE(746);
            if(lookahead == 'w')
                ADVANCE(753);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(54)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 55:
            if(lookahead == '/')
                ADVANCE(50);
            if(lookahead == ':')
                ADVANCE(70);
            if(lookahead == '\\')
                SKIP(16)
            if(lookahead == 'b')
                ADVANCE(853);
            if(lookahead == 'c')
                ADVANCE(801);
            if(lookahead == 'd')
                ADVANCE(849);
            if(lookahead == 'f')
                ADVANCE(804);
            if(lookahead == 'i')
                ADVANCE(838);
            if(lookahead == 'l')
                ADVANCE(852);
            if(lookahead == 'o')
                ADVANCE(756);
            if(lookahead == 's')
                ADVANCE(767);
            if(lookahead == 'u')
                ADVANCE(815);
            if(lookahead == 'w')
                ADVANCE(752);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(55)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 56:
            if(lookahead == '/')
                ADVANCE(50);
            if(lookahead == ':')
                ADVANCE(70);
            if(lookahead == '\\')
                SKIP(18)
            if(lookahead == 'b')
                ADVANCE(853);
            if(lookahead == 'c')
                ADVANCE(801);
            if(lookahead == 'i')
                ADVANCE(838);
            if(lookahead == 'l')
                ADVANCE(859);
            if(lookahead == 's')
                ADVANCE(802);
            if(lookahead == 'u')
                ADVANCE(815);
            if(lookahead == 'w')
                ADVANCE(753);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(56)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 57:
            if(lookahead == '/')
                ADVANCE(50);
            if(lookahead == ';')
                ADVANCE(647);
            if(lookahead == '\\')
                SKIP(28)
            if(lookahead == 's')
                ADVANCE(909);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(57)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 58:
            if(lookahead == '/')
                ADVANCE(50);
            if(lookahead == '\\')
                SKIP(34)
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(58)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(569);
            END_STATE();
        case 59:
            if(lookahead == '/')
                ADVANCE(50);
            if(lookahead == '\\')
                SKIP(39)
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(59)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(567);
            END_STATE();
        case 60:
            if(lookahead == '/')
                ADVANCE(50);
            if(lookahead == '\\')
                SKIP(37)
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(60)
            END_STATE();
        case 61:
            if(lookahead == '/')
                ADVANCE(634);
            if(lookahead == '\\')
                ADVANCE(632);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(61)
            if(lookahead != 0)
                ADVANCE(635);
            END_STATE();
        case 62:
            if(lookahead == '1')
                ADVANCE(68);
            if(lookahead == '3')
                ADVANCE(64);
            if(lookahead == '6')
                ADVANCE(66);
            if(lookahead == '8')
                ADVANCE(505);
            END_STATE();
        case 63:
            if(lookahead == '1')
                ADVANCE(69);
            if(lookahead == '3')
                ADVANCE(65);
            if(lookahead == '6')
                ADVANCE(67);
            if(lookahead == '8')
                ADVANCE(513);
            if(lookahead == 'e')
                ADVANCE(377);
            END_STATE();
        case 64:
            if(lookahead == '2')
                ADVANCE(519);
            END_STATE();
        case 65:
            if(lookahead == '2')
                ADVANCE(500);
            END_STATE();
        case 66:
            if(lookahead == '4')
                ADVANCE(522);
            END_STATE();
        case 67:
            if(lookahead == '4')
                ADVANCE(503);
            END_STATE();
        case 68:
            if(lookahead == '6')
                ADVANCE(516);
            END_STATE();
        case 69:
            if(lookahead == '6')
                ADVANCE(494);
            END_STATE();
        case 70:
            if(lookahead == ':')
                ADVANCE(533);
            END_STATE();
        case 71:
            if(lookahead == '<')
                ADVANCE(553);
            END_STATE();
        case 72:
            if(lookahead == 'C')
                ADVANCE(73);
            END_STATE();
        case 73:
            if(lookahead == 'D')
                ADVANCE(79);
            END_STATE();
        case 74:
            if(lookahead == 'D')
                ADVANCE(75);
            if(lookahead == 'a')
                ADVANCE(310);
            if(lookahead == 'd')
                ADVANCE(115);
            if(lookahead == 'f')
                ADVANCE(246);
            if(lookahead == 'i')
                ADVANCE(225);
            END_STATE();
        case 75:
            if(lookahead == 'D')
                ADVANCE(81);
            END_STATE();
        case 76:
            if(lookahead == 'E')
                ADVANCE(591);
            END_STATE();
        case 77:
            if(lookahead == 'E')
                ADVANCE(593);
            END_STATE();
        case 78:
            if(lookahead == 'L')
                ADVANCE(82);
            END_STATE();
        case 79:
            if(lookahead == 'R')
                ADVANCE(717);
            END_STATE();
        case 80:
            if(lookahead == 'R')
                ADVANCE(172);
            if(lookahead == 'S')
                ADVANCE(195);
            END_STATE();
        case 81:
            if(lookahead == 'S')
                ADVANCE(80);
            END_STATE();
        case 82:
            if(lookahead == 'S')
                ADVANCE(77);
            END_STATE();
        case 83:
            if(lookahead == 'T')
                ADVANCE(331);
            END_STATE();
        case 84:
            if(lookahead == 'T')
                ADVANCE(341);
            END_STATE();
        case 85:
            if(lookahead == 'U')
                ADVANCE(76);
            END_STATE();
        case 86:
            if(lookahead == '_')
                ADVANCE(135);
            END_STATE();
        case 87:
            if(lookahead == '_')
                ADVANCE(282);
            END_STATE();
        case 88:
            if(lookahead == '_')
                ADVANCE(451);
            END_STATE();
        case 89:
            if(lookahead == '_')
                ADVANCE(378);
            END_STATE();
        case 90:
            if(lookahead == '_')
                ADVANCE(322);
            END_STATE();
        case 91:
            if(lookahead == '_')
                ADVANCE(398);
            END_STATE();
        case 92:
            if(lookahead == '_')
                ADVANCE(285);
            END_STATE();
        case 93:
            if(lookahead == 'a')
                ADVANCE(389);
            if(lookahead == 'o')
                ADVANCE(297);
            END_STATE();
        case 94:
            if(lookahead == 'a')
                ADVANCE(287);
            END_STATE();
        case 95:
            if(lookahead == 'a')
                ADVANCE(89);
            END_STATE();
        case 96:
            if(lookahead == 'a')
                ADVANCE(250);
            END_STATE();
        case 97:
            if(lookahead == 'a')
                ADVANCE(156);
            END_STATE();
        case 98:
            if(lookahead == 'a')
                ADVANCE(289);
            END_STATE();
        case 99:
            if(lookahead == 'a')
                ADVANCE(383);
            END_STATE();
        case 100:
            if(lookahead == 'a')
                ADVANCE(362);
            END_STATE();
        case 101:
            if(lookahead == 'a')
                ADVANCE(264);
            END_STATE();
        case 102:
            if(lookahead == 'a')
                ADVANCE(384);
            END_STATE();
        case 103:
            if(lookahead == 'a')
                ADVANCE(363);
            END_STATE();
        case 104:
            if(lookahead == 'a')
                ADVANCE(449);
            END_STATE();
        case 105:
            if(lookahead == 'a')
                ADVANCE(293);
            END_STATE();
        case 106:
            if(lookahead == 'a')
                ADVANCE(265);
            END_STATE();
        case 107:
            if(lookahead == 'a')
                ADVANCE(406);
            END_STATE();
        case 108:
            if(lookahead == 'a')
                ADVANCE(390);
            END_STATE();
        case 109:
            if(lookahead == 'a')
                ADVANCE(270);
            END_STATE();
        case 110:
            if(lookahead == 'a')
                ADVANCE(266);
            END_STATE();
        case 111:
            if(lookahead == 'a')
                ADVANCE(267);
            END_STATE();
        case 112:
            if(lookahead == 'a')
                ADVANCE(278);
            END_STATE();
        case 113:
            if(lookahead == 'a')
                ADVANCE(268);
            END_STATE();
        case 114:
            if(lookahead == 'a')
                ADVANCE(311);
            END_STATE();
        case 115:
            if(lookahead == 'a')
                ADVANCE(426);
            END_STATE();
        case 116:
            if(lookahead == 'a')
                ADVANCE(421);
            END_STATE();
        case 117:
            if(lookahead == 'a')
                ADVANCE(290);
            END_STATE();
        case 118:
            if(lookahead == 'a')
                ADVANCE(455);
            END_STATE();
        case 119:
            if(lookahead == 'a')
                ADVANCE(139);
            END_STATE();
        case 120:
            if(lookahead == 'a')
                ADVANCE(253);
            END_STATE();
        case 121:
            if(lookahead == 'a')
                ADVANCE(438);
            END_STATE();
        case 122:
            if(lookahead == 'a')
                ADVANCE(256);
            END_STATE();
        case 123:
            if(lookahead == 'a')
                ADVANCE(440);
            END_STATE();
        case 124:
            if(lookahead == 'b')
                ADVANCE(454);
            END_STATE();
        case 125:
            if(lookahead == 'b')
                ADVANCE(276);
            END_STATE();
        case 126:
            if(lookahead == 'b')
                ADVANCE(280);
            END_STATE();
        case 127:
            if(lookahead == 'c')
                ADVANCE(705);
            END_STATE();
        case 128:
            if(lookahead == 'c')
                ADVANCE(703);
            END_STATE();
        case 129:
            if(lookahead == 'c')
                ADVANCE(226);
            END_STATE();
        case 130:
            if(lookahead == 'c')
                ADVANCE(422);
            END_STATE();
        case 131:
            if(lookahead == 'c')
                ADVANCE(180);
            END_STATE();
        case 132:
            if(lookahead == 'c')
                ADVANCE(101);
            END_STATE();
        case 133:
            if(lookahead == 'c')
                ADVANCE(101);
            if(lookahead == 'n')
                ADVANCE(217);
            END_STATE();
        case 134:
            if(lookahead == 'c')
                ADVANCE(101);
            if(lookahead == 'n')
                ADVANCE(223);
            END_STATE();
        case 135:
            if(lookahead == 'c')
                ADVANCE(340);
            END_STATE();
        case 136:
            if(lookahead == 'c')
                ADVANCE(411);
            END_STATE();
        case 137:
            if(lookahead == 'c')
                ADVANCE(166);
            END_STATE();
        case 138:
            if(lookahead == 'c')
                ADVANCE(415);
            END_STATE();
        case 139:
            if(lookahead == 'c')
                ADVANCE(173);
            END_STATE();
        case 140:
            if(lookahead == 'c')
                ADVANCE(174);
            END_STATE();
        case 141:
            if(lookahead == 'd')
                ADVANCE(626);
            if(lookahead == '\t' ||
               lookahead == ' ')
                ADVANCE(474);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(631);
            END_STATE();
        case 142:
            if(lookahead == 'd')
                ADVANCE(648);
            END_STATE();
        case 143:
            if(lookahead == 'd')
                ADVANCE(509);
            END_STATE();
        case 144:
            if(lookahead == 'd')
                ADVANCE(662);
            END_STATE();
        case 145:
            if(lookahead == 'd')
                ADVANCE(40);
            END_STATE();
        case 146:
            if(lookahead == 'd')
                ADVANCE(710);
            END_STATE();
        case 147:
            if(lookahead == 'd')
                ADVANCE(712);
            END_STATE();
        case 148:
            if(lookahead == 'd')
                ADVANCE(709);
            END_STATE();
        case 149:
            if(lookahead == 'd')
                ADVANCE(708);
            END_STATE();
        case 150:
            if(lookahead == 'd')
                ADVANCE(458);
            END_STATE();
        case 151:
            if(lookahead == 'd')
                ADVANCE(348);
            if(lookahead == 'l')
                ADVANCE(343);
            END_STATE();
        case 152:
            if(lookahead == 'd')
                ADVANCE(176);
            END_STATE();
        case 153:
            if(lookahead == 'd')
                ADVANCE(176);
            if(lookahead == 'n')
                ADVANCE(98);
            END_STATE();
        case 154:
            if(lookahead == 'd')
                ADVANCE(200);
            END_STATE();
        case 155:
            if(lookahead == 'd')
                ADVANCE(179);
            END_STATE();
        case 156:
            if(lookahead == 'd')
                ADVANCE(330);
            END_STATE();
        case 157:
            if(lookahead == 'd')
                ADVANCE(115);
            if(lookahead == 'f')
                ADVANCE(246);
            if(lookahead == 'i')
                ADVANCE(225);
            END_STATE();
        case 158:
            if(lookahead == 'd')
                ADVANCE(209);
            END_STATE();
        case 159:
            if(lookahead == 'e')
                ADVANCE(212);
            END_STATE();
        case 160:
            if(lookahead == 'e')
                ADVANCE(692);
            END_STATE();
        case 161:
            if(lookahead == 'e')
                ADVANCE(704);
            END_STATE();
        case 162:
            if(lookahead == 'e')
                ADVANCE(153);
            END_STATE();
        case 163:
            if(lookahead == 'e')
                ADVANCE(526);
            END_STATE();
        case 164:
            if(lookahead == 'e')
                ADVANCE(670);
            END_STATE();
        case 165:
            if(lookahead == 'e')
                ADVANCE(686);
            END_STATE();
        case 166:
            if(lookahead == 'e')
                ADVANCE(545);
            END_STATE();
        case 167:
            if(lookahead == 'e')
                ADVANCE(671);
            END_STATE();
        case 168:
            if(lookahead == 'e')
                ADVANCE(656);
            END_STATE();
        case 169:
            if(lookahead == 'e')
                ADVANCE(675);
            END_STATE();
        case 170:
            if(lookahead == 'e')
                ADVANCE(673);
            END_STATE();
        case 171:
            if(lookahead == 'e')
                ADVANCE(528);
            END_STATE();
        case 172:
            if(lookahead == 'e')
                ADVANCE(351);
            END_STATE();
        case 173:
            if(lookahead == 'e')
                ADVANCE(642);
            END_STATE();
        case 174:
            if(lookahead == 'e')
                ADVANCE(702);
            END_STATE();
        case 175:
            if(lookahead == 'e')
                ADVANCE(696);
            END_STATE();
        case 176:
            if(lookahead == 'e')
                ADVANCE(211);
            END_STATE();
        case 177:
            if(lookahead == 'e')
                ADVANCE(464);
            if(lookahead == 'h')
                ADVANCE(108);
            if(lookahead == 'i')
                ADVANCE(146);
            if(lookahead == 'k')
                ADVANCE(183);
            if(lookahead == 'm')
                ADVANCE(456);
            if(lookahead == 'n')
                ADVANCE(338);
            if(lookahead == 'o')
                ADVANCE(359);
            if(lookahead == 't')
                ADVANCE(365);
            END_STATE();
        case 178:
            if(lookahead == 'e')
                ADVANCE(87);
            END_STATE();
        case 179:
            if(lookahead == 'e')
                ADVANCE(215);
            END_STATE();
        case 180:
            if(lookahead == 'e')
                ADVANCE(354);
            END_STATE();
        case 181:
            if(lookahead == 'e')
                ADVANCE(357);
            END_STATE();
        case 182:
            if(lookahead == 'e')
                ADVANCE(143);
            END_STATE();
        case 183:
            if(lookahead == 'e')
                ADVANCE(468);
            END_STATE();
        case 184:
            if(lookahead == 'e')
                ADVANCE(385);
            END_STATE();
        case 185:
            if(lookahead == 'e')
                ADVANCE(272);
            END_STATE();
        case 186:
            if(lookahead == 'e')
                ADVANCE(386);
            END_STATE();
        case 187:
            if(lookahead == 'e')
                ADVANCE(317);
            END_STATE();
        case 188:
            if(lookahead == 'e')
                ADVANCE(145);
            END_STATE();
        case 189:
            if(lookahead == 'e')
                ADVANCE(387);
            END_STATE();
        case 190:
            if(lookahead == 'e')
                ADVANCE(152);
            END_STATE();
        case 191:
            if(lookahead == 'e')
                ADVANCE(388);
            END_STATE();
        case 192:
            if(lookahead == 'e')
                ADVANCE(377);
            END_STATE();
        case 193:
            if(lookahead == 'e')
                ADVANCE(105);
            END_STATE();
        case 194:
            if(lookahead == 'e')
                ADVANCE(148);
            END_STATE();
        case 195:
            if(lookahead == 'e')
                ADVANCE(364);
            END_STATE();
        case 196:
            if(lookahead == 'e')
                ADVANCE(408);
            END_STATE();
        case 197:
            if(lookahead == 'e')
                ADVANCE(410);
            END_STATE();
        case 198:
            if(lookahead == 'e')
                ADVANCE(380);
            END_STATE();
        case 199:
            if(lookahead == 'e')
                ADVANCE(376);
            END_STATE();
        case 200:
            if(lookahead == 'e')
                ADVANCE(381);
            END_STATE();
        case 201:
            if(lookahead == 'e')
                ADVANCE(420);
            END_STATE();
        case 202:
            if(lookahead == 'e')
                ADVANCE(395);
            END_STATE();
        case 203:
            if(lookahead == 'e')
                ADVANCE(307);
            END_STATE();
        case 204:
            if(lookahead == 'e')
                ADVANCE(371);
            END_STATE();
        case 205:
            if(lookahead == 'e')
                ADVANCE(373);
            END_STATE();
        case 206:
            if(lookahead == 'e')
                ADVANCE(324);
            END_STATE();
        case 207:
            if(lookahead == 'e')
                ADVANCE(400);
            END_STATE();
        case 208:
            if(lookahead == 'e')
                ADVANCE(436);
            END_STATE();
        case 209:
            if(lookahead == 'e')
                ADVANCE(216);
            END_STATE();
        case 210:
            if(lookahead == 'e')
                ADVANCE(443);
            if(lookahead == 'h')
                ADVANCE(332);
            if(lookahead == 't')
                ADVANCE(369);
            END_STATE();
        case 211:
            if(lookahead == 'f')
                ADVANCE(694);
            END_STATE();
        case 212:
            if(lookahead == 'f')
                ADVANCE(104);
            END_STATE();
        case 213:
            if(lookahead == 'f')
                ADVANCE(245);
            if(lookahead == 'm')
                ADVANCE(102);
            if(lookahead == 's')
                ADVANCE(197);
            END_STATE();
        case 214:
            if(lookahead == 'f')
                ADVANCE(119);
            END_STATE();
        case 215:
            if(lookahead == 'f')
                ADVANCE(248);
            END_STATE();
        case 216:
            if(lookahead == 'f')
                ADVANCE(118);
            END_STATE();
        case 217:
            if(lookahead == 'g')
                ADVANCE(496);
            END_STATE();
        case 218:
            if(lookahead == 'g')
                ADVANCE(534);
            END_STATE();
        case 219:
            if(lookahead == 'g')
                ADVANCE(536);
            END_STATE();
        case 220:
            if(lookahead == 'g')
                ADVANCE(502);
            END_STATE();
        case 221:
            if(lookahead == 'g')
                ADVANCE(518);
            END_STATE();
        case 222:
            if(lookahead == 'g')
                ADVANCE(521);
            END_STATE();
        case 223:
            if(lookahead == 'g')
                ADVANCE(498);
            END_STATE();
        case 224:
            if(lookahead == 'g')
                ADVANCE(319);
            END_STATE();
        case 225:
            if(lookahead == 'g')
                ADVANCE(318);
            END_STATE();
        case 226:
            if(lookahead == 'h')
                ADVANCE(690);
            END_STATE();
        case 227:
            if(lookahead == 'h')
                ADVANCE(244);
            END_STATE();
        case 228:
            if(lookahead == 'h')
                ADVANCE(103);
            END_STATE();
        case 229:
            if(lookahead == 'h')
                ADVANCE(342);
            END_STATE();
        case 230:
            if(lookahead == 'i')
                ADVANCE(462);
            END_STATE();
        case 231:
            if(lookahead == 'i')
                ADVANCE(473);
            END_STATE();
        case 232:
            if(lookahead == 'i')
                ADVANCE(402);
            if(lookahead == 'o')
                ADVANCE(327);
            END_STATE();
        case 233:
            if(lookahead == 'i')
                ADVANCE(303);
            if(lookahead == 'n')
                ADVANCE(240);
            END_STATE();
        case 234:
            if(lookahead == 'i')
                ADVANCE(124);
            END_STATE();
        case 235:
            if(lookahead == 'i')
                ADVANCE(224);
            END_STATE();
        case 236:
            if(lookahead == 'i')
                ADVANCE(99);
            END_STATE();
        case 237:
            if(lookahead == 'i')
                ADVANCE(299);
            if(lookahead == 'u')
                ADVANCE(136);
            END_STATE();
        case 238:
            if(lookahead == 'i')
                ADVANCE(142);
            END_STATE();
        case 239:
            if(lookahead == 'i')
                ADVANCE(328);
            END_STATE();
        case 240:
            if(lookahead == 'i')
                ADVANCE(328);
            if(lookahead == 's')
                ADVANCE(235);
            END_STATE();
        case 241:
            if(lookahead == 'i')
                ADVANCE(127);
            END_STATE();
        case 242:
            if(lookahead == 'i')
                ADVANCE(419);
            END_STATE();
        case 243:
            if(lookahead == 'i')
                ADVANCE(128);
            END_STATE();
        case 244:
            if(lookahead == 'i')
                ADVANCE(147);
            END_STATE();
        case 245:
            if(lookahead == 'i')
                ADVANCE(185);
            END_STATE();
        case 246:
            if(lookahead == 'i')
                ADVANCE(312);
            END_STATE();
        case 247:
            if(lookahead == 'i')
                ADVANCE(112);
            END_STATE();
        case 248:
            if(lookahead == 'i')
                ADVANCE(316);
            END_STATE();
        case 249:
            if(lookahead == 'i')
                ADVANCE(416);
            END_STATE();
        case 250:
            if(lookahead == 'i')
                ADVANCE(392);
            END_STATE();
        case 251:
            if(lookahead == 'i')
                ADVANCE(225);
            END_STATE();
        case 252:
            if(lookahead == 'i')
                ADVANCE(300);
            END_STATE();
        case 253:
            if(lookahead == 'i')
                ADVANCE(393);
            END_STATE();
        case 254:
            if(lookahead == 'i')
                ADVANCE(430);
            END_STATE();
        case 255:
            if(lookahead == 'i')
                ADVANCE(334);
            END_STATE();
        case 256:
            if(lookahead == 'i')
                ADVANCE(394);
            END_STATE();
        case 257:
            if(lookahead == 'i')
                ADVANCE(140);
            END_STATE();
        case 258:
            if(lookahead == 'i')
                ADVANCE(336);
            END_STATE();
        case 259:
            if(lookahead == 'i')
                ADVANCE(337);
            END_STATE();
        case 260:
            if(lookahead == 'i')
                ADVANCE(344);
            END_STATE();
        case 261:
            if(lookahead == 'i')
                ADVANCE(439);
            END_STATE();
        case 262:
            if(lookahead == 'k')
                ADVANCE(663);
            END_STATE();
        case 263:
            if(lookahead == 'l')
                ADVANCE(236);
            END_STATE();
        case 264:
            if(lookahead == 'l')
                ADVANCE(644);
            END_STATE();
        case 265:
            if(lookahead == 'l')
                ADVANCE(715);
            END_STATE();
        case 266:
            if(lookahead == 'l')
                ADVANCE(711);
            END_STATE();
        case 267:
            if(lookahead == 'l')
                ADVANCE(706);
            END_STATE();
        case 268:
            if(lookahead == 'l')
                ADVANCE(688);
            END_STATE();
        case 269:
            if(lookahead == 'l')
                ADVANCE(466);
            END_STATE();
        case 270:
            if(lookahead == 'l')
                ADVANCE(90);
            END_STATE();
        case 271:
            if(lookahead == 'l')
                ADVANCE(467);
            END_STATE();
        case 272:
            if(lookahead == 'l')
                ADVANCE(144);
            END_STATE();
        case 273:
            if(lookahead == 'l')
                ADVANCE(343);
            END_STATE();
        case 274:
            if(lookahead == 'l')
                ADVANCE(459);
            END_STATE();
        case 275:
            if(lookahead == 'l')
                ADVANCE(193);
            END_STATE();
        case 276:
            if(lookahead == 'l')
                ADVANCE(163);
            END_STATE();
        case 277:
            if(lookahead == 'l')
                ADVANCE(164);
            END_STATE();
        case 278:
            if(lookahead == 'l')
                ADVANCE(231);
            END_STATE();
        case 279:
            if(lookahead == 'l')
                ADVANCE(412);
            END_STATE();
        case 280:
            if(lookahead == 'l')
                ADVANCE(171);
            END_STATE();
        case 281:
            if(lookahead == 'l')
                ADVANCE(444);
            END_STATE();
        case 282:
            if(lookahead == 'l')
                ADVANCE(254);
            END_STATE();
        case 283:
            if(lookahead == 'l')
                ADVANCE(345);
            if(lookahead == 's')
                ADVANCE(229);
            END_STATE();
        case 284:
            if(lookahead == 'l')
                ADVANCE(346);
            END_STATE();
        case 285:
            if(lookahead == 'l')
                ADVANCE(261);
            END_STATE();
        case 286:
            if(lookahead == 'm')
                ADVANCE(681);
            END_STATE();
        case 287:
            if(lookahead == 'm')
                ADVANCE(161);
            if(lookahead == 't')
                ADVANCE(230);
            END_STATE();
        case 288:
            if(lookahead == 'm')
                ADVANCE(102);
            if(lookahead == 's')
                ADVANCE(197);
            END_STATE();
        case 289:
            if(lookahead == 'm')
                ADVANCE(167);
            END_STATE();
        case 290:
            if(lookahead == 'm')
                ADVANCE(191);
            END_STATE();
        case 291:
            if(lookahead == 'n')
                ADVANCE(650);
            END_STATE();
        case 292:
            if(lookahead == 'n')
                ADVANCE(679);
            END_STATE();
        case 293:
            if(lookahead == 'n')
                ADVANCE(507);
            END_STATE();
        case 294:
            if(lookahead == 'n')
                ADVANCE(638);
            END_STATE();
        case 295:
            if(lookahead == 'n')
                ADVANCE(665);
            END_STATE();
        case 296:
            if(lookahead == 'n')
                ADVANCE(716);
            END_STATE();
        case 297:
            if(lookahead == 'n')
                ADVANCE(391);
            END_STATE();
        case 298:
            if(lookahead == 'n')
                ADVANCE(446);
            if(lookahead == 'x')
                ADVANCE(131);
            END_STATE();
        case 299:
            if(lookahead == 'n')
                ADVANCE(218);
            END_STATE();
        case 300:
            if(lookahead == 'n')
                ADVANCE(219);
            END_STATE();
        case 301:
            if(lookahead == 'n')
                ADVANCE(91);
            END_STATE();
        case 302:
            if(lookahead == 'n')
                ADVANCE(220);
            END_STATE();
        case 303:
            if(lookahead == 'n')
                ADVANCE(404);
            END_STATE();
        case 304:
            if(lookahead == 'n')
                ADVANCE(269);
            END_STATE();
        case 305:
            if(lookahead == 'n')
                ADVANCE(221);
            END_STATE();
        case 306:
            if(lookahead == 'n')
                ADVANCE(222);
            END_STATE();
        case 307:
            if(lookahead == 'n')
                ADVANCE(427);
            END_STATE();
        case 308:
            if(lookahead == 'n')
                ADVANCE(339);
            END_STATE();
        case 309:
            if(lookahead == 'n')
                ADVANCE(399);
            END_STATE();
        case 310:
            if(lookahead == 'n')
                ADVANCE(308);
            END_STATE();
        case 311:
            if(lookahead == 'n')
                ADVANCE(149);
            END_STATE();
        case 312:
            if(lookahead == 'n')
                ADVANCE(106);
            END_STATE();
        case 313:
            if(lookahead == 'n')
                ADVANCE(110);
            END_STATE();
        case 314:
            if(lookahead == 'n')
                ADVANCE(111);
            END_STATE();
        case 315:
            if(lookahead == 'n')
                ADVANCE(414);
            END_STATE();
        case 316:
            if(lookahead == 'n')
                ADVANCE(175);
            END_STATE();
        case 317:
            if(lookahead == 'n')
                ADVANCE(137);
            END_STATE();
        case 318:
            if(lookahead == 'n')
                ADVANCE(335);
            END_STATE();
        case 319:
            if(lookahead == 'n')
                ADVANCE(188);
            END_STATE();
        case 320:
            if(lookahead == 'n')
                ADVANCE(154);
            END_STATE();
        case 321:
            if(lookahead == 'n')
                ADVANCE(239);
            END_STATE();
        case 322:
            if(lookahead == 'n')
                ADVANCE(117);
            END_STATE();
        case 323:
            if(lookahead == 'n')
                ADVANCE(432);
            END_STATE();
        case 324:
            if(lookahead == 'n')
                ADVANCE(442);
            END_STATE();
        case 325:
            if(lookahead == 'o')
                ADVANCE(297);
            END_STATE();
        case 326:
            if(lookahead == 'o')
                ADVANCE(150);
            END_STATE();
        case 327:
            if(lookahead == 'o')
                ADVANCE(275);
            END_STATE();
        case 328:
            if(lookahead == 'o')
                ADVANCE(292);
            END_STATE();
        case 329:
            if(lookahead == 'o')
                ADVANCE(107);
            END_STATE();
        case 330:
            if(lookahead == 'o')
                ADVANCE(304);
            END_STATE();
        case 331:
            if(lookahead == 'o')
                ADVANCE(352);
            END_STATE();
        case 332:
            if(lookahead == 'o')
                ADVANCE(370);
            END_STATE();
        case 333:
            if(lookahead == 'o')
                ADVANCE(132);
            END_STATE();
        case 334:
            if(lookahead == 'o')
                ADVANCE(294);
            END_STATE();
        case 335:
            if(lookahead == 'o')
                ADVANCE(374);
            END_STATE();
        case 336:
            if(lookahead == 'o')
                ADVANCE(295);
            END_STATE();
        case 337:
            if(lookahead == 'o')
                ADVANCE(296);
            END_STATE();
        case 338:
            if(lookahead == 'o')
                ADVANCE(301);
            END_STATE();
        case 339:
            if(lookahead == 'o')
                ADVANCE(434);
            END_STATE();
        case 340:
            if(lookahead == 'o')
                ADVANCE(309);
            END_STATE();
        case 341:
            if(lookahead == 'o')
                ADVANCE(353);
            END_STATE();
        case 342:
            if(lookahead == 'o')
                ADVANCE(372);
            END_STATE();
        case 343:
            if(lookahead == 'o')
                ADVANCE(302);
            END_STATE();
        case 344:
            if(lookahead == 'o')
                ADVANCE(314);
            END_STATE();
        case 345:
            if(lookahead == 'o')
                ADVANCE(305);
            END_STATE();
        case 346:
            if(lookahead == 'o')
                ADVANCE(306);
            END_STATE();
        case 347:
            if(lookahead == 'o')
                ADVANCE(134);
            END_STATE();
        case 348:
            if(lookahead == 'o')
                ADVANCE(460);
            END_STATE();
        case 349:
            if(lookahead == 'p')
                ADVANCE(547);
            END_STATE();
        case 350:
            if(lookahead == 'p')
                ADVANCE(162);
            END_STATE();
        case 351:
            if(lookahead == 'p')
                ADVANCE(271);
            if(lookahead == 'q')
                ADVANCE(452);
            END_STATE();
        case 352:
            if(lookahead == 'p')
                ADVANCE(241);
            END_STATE();
        case 353:
            if(lookahead == 'p')
                ADVANCE(243);
            END_STATE();
        case 354:
            if(lookahead == 'p')
                ADVANCE(425);
            END_STATE();
        case 355:
            if(lookahead == 'p')
                ADVANCE(169);
            END_STATE();
        case 356:
            if(lookahead == 'p')
                ADVANCE(170);
            END_STATE();
        case 357:
            if(lookahead == 'p')
                ADVANCE(375);
            END_STATE();
        case 358:
            if(lookahead == 'p')
                ADVANCE(190);
            END_STATE();
        case 359:
            if(lookahead == 'p')
                ADVANCE(441);
            END_STATE();
        case 360:
            if(lookahead == 'q')
                ADVANCE(453);
            if(lookahead == 't')
                ADVANCE(382);
            END_STATE();
        case 361:
            if(lookahead == 'r')
                ADVANCE(237);
            END_STATE();
        case 362:
            if(lookahead == 'r')
                ADVANCE(529);
            END_STATE();
        case 363:
            if(lookahead == 'r')
                ADVANCE(531);
            END_STATE();
        case 364:
            if(lookahead == 'r')
                ADVANCE(461);
            END_STATE();
        case 365:
            if(lookahead == 'r')
                ADVANCE(469);
            END_STATE();
        case 366:
            if(lookahead == 'r')
                ADVANCE(234);
            END_STATE();
        case 367:
            if(lookahead == 'r')
                ADVANCE(120);
            END_STATE();
        case 368:
            if(lookahead == 'r')
                ADVANCE(252);
            END_STATE();
        case 369:
            if(lookahead == 'r')
                ADVANCE(447);
            END_STATE();
        case 370:
            if(lookahead == 'r')
                ADVANCE(409);
            END_STATE();
        case 371:
            if(lookahead == 'r')
                ADVANCE(109);
            END_STATE();
        case 372:
            if(lookahead == 'r')
                ADVANCE(413);
            END_STATE();
        case 373:
            if(lookahead == 'r')
                ADVANCE(113);
            END_STATE();
        case 374:
            if(lookahead == 'r')
                ADVANCE(178);
            END_STATE();
        case 375:
            if(lookahead == 'r')
                ADVANCE(207);
            END_STATE();
        case 376:
            if(lookahead == 'r')
                ADVANCE(247);
            END_STATE();
        case 377:
            if(lookahead == 'r')
                ADVANCE(214);
            END_STATE();
        case 378:
            if(lookahead == 'r')
                ADVANCE(181);
            END_STATE();
        case 379:
            if(lookahead == 'r')
                ADVANCE(457);
            END_STATE();
        case 380:
            if(lookahead == 'r')
                ADVANCE(313);
            END_STATE();
        case 381:
            if(lookahead == 'r')
                ADVANCE(397);
            END_STATE();
        case 382:
            if(lookahead == 'r')
                ADVANCE(122);
            END_STATE();
        case 383:
            if(lookahead == 's')
                ADVANCE(685);
            END_STATE();
        case 384:
            if(lookahead == 's')
                ADVANCE(262);
            END_STATE();
        case 385:
            if(lookahead == 's')
                ADVANCE(653);
            END_STATE();
        case 386:
            if(lookahead == 's')
                ADVANCE(658);
            END_STATE();
        case 387:
            if(lookahead == 's')
                ADVANCE(659);
            END_STATE();
        case 388:
            if(lookahead == 's')
                ADVANCE(689);
            END_STATE();
        case 389:
            if(lookahead == 's')
                ADVANCE(160);
            END_STATE();
        case 390:
            if(lookahead == 's')
                ADVANCE(227);
            END_STATE();
        case 391:
            if(lookahead == 's')
                ADVANCE(405);
            END_STATE();
        case 392:
            if(lookahead == 's')
                ADVANCE(184);
            END_STATE();
        case 393:
            if(lookahead == 's')
                ADVANCE(186);
            END_STATE();
        case 394:
            if(lookahead == 's')
                ADVANCE(189);
            END_STATE();
        case 395:
            if(lookahead == 's')
                ADVANCE(435);
            END_STATE();
        case 396:
            if(lookahead == 's')
                ADVANCE(423);
            END_STATE();
        case 397:
            if(lookahead == 's')
                ADVANCE(429);
            END_STATE();
        case 398:
            if(lookahead == 's')
                ADVANCE(199);
            END_STATE();
        case 399:
            if(lookahead == 's')
                ADVANCE(437);
            END_STATE();
        case 400:
            if(lookahead == 's')
                ADVANCE(206);
            END_STATE();
        case 401:
            if(lookahead == 't')
                ADVANCE(418);
            END_STATE();
        case 402:
            if(lookahead == 't')
                ADVANCE(213);
            END_STATE();
        case 403:
            if(lookahead == 't')
                ADVANCE(651);
            END_STATE();
        case 404:
            if(lookahead == 't')
                ADVANCE(62);
            END_STATE();
        case 405:
            if(lookahead == 't')
                ADVANCE(683);
            END_STATE();
        case 406:
            if(lookahead == 't')
                ADVANCE(524);
            END_STATE();
        case 407:
            if(lookahead == 't')
                ADVANCE(652);
            END_STATE();
        case 408:
            if(lookahead == 't')
                ADVANCE(511);
            END_STATE();
        case 409:
            if(lookahead == 't')
                ADVANCE(492);
            END_STATE();
        case 410:
            if(lookahead == 't')
                ADVANCE(660);
            END_STATE();
        case 411:
            if(lookahead == 't')
                ADVANCE(677);
            END_STATE();
        case 412:
            if(lookahead == 't')
                ADVANCE(666);
            END_STATE();
        case 413:
            if(lookahead == 't')
                ADVANCE(515);
            END_STATE();
        case 414:
            if(lookahead == 't')
                ADVANCE(63);
            END_STATE();
        case 415:
            if(lookahead == 't')
                ADVANCE(714);
            END_STATE();
        case 416:
            if(lookahead == 't')
                ADVANCE(288);
            END_STATE();
        case 417:
            if(lookahead == 't')
                ADVANCE(470);
            END_STATE();
        case 418:
            if(lookahead == 't')
                ADVANCE(366);
            END_STATE();
        case 419:
            if(lookahead == 't')
                ADVANCE(129);
            END_STATE();
        case 420:
            if(lookahead == 't')
                ADVANCE(367);
            END_STATE();
        case 421:
            if(lookahead == 't')
                ADVANCE(230);
            END_STATE();
        case 422:
            if(lookahead == 't')
                ADVANCE(196);
            END_STATE();
        case 423:
            if(lookahead == 't')
                ADVANCE(88);
            END_STATE();
        case 424:
            if(lookahead == 't')
                ADVANCE(369);
            END_STATE();
        case 425:
            if(lookahead == 't')
                ADVANCE(255);
            END_STATE();
        case 426:
            if(lookahead == 't')
                ADVANCE(95);
            END_STATE();
        case 427:
            if(lookahead == 't')
                ADVANCE(417);
            END_STATE();
        case 428:
            if(lookahead == 't')
                ADVANCE(168);
            END_STATE();
        case 429:
            if(lookahead == 't')
                ADVANCE(114);
            END_STATE();
        case 430:
            if(lookahead == 't')
                ADVANCE(204);
            END_STATE();
        case 431:
            if(lookahead == 't')
                ADVANCE(198);
            END_STATE();
        case 432:
            if(lookahead == 't')
                ADVANCE(192);
            END_STATE();
        case 433:
            if(lookahead == 't')
                ADVANCE(368);
            END_STATE();
        case 434:
            if(lookahead == 't')
                ADVANCE(121);
            END_STATE();
        case 435:
            if(lookahead == 't')
                ADVANCE(84);
            END_STATE();
        case 436:
            if(lookahead == 't')
                ADVANCE(471);
            END_STATE();
        case 437:
            if(lookahead == 't')
                ADVANCE(379);
            END_STATE();
        case 438:
            if(lookahead == 't')
                ADVANCE(258);
            END_STATE();
        case 439:
            if(lookahead == 't')
                ADVANCE(205);
            END_STATE();
        case 440:
            if(lookahead == 't')
                ADVANCE(259);
            END_STATE();
        case 441:
            if(lookahead == 't')
                ADVANCE(260);
            END_STATE();
        case 442:
            if(lookahead == 't')
                ADVANCE(123);
            END_STATE();
        case 443:
            if(lookahead == 't')
                ADVANCE(382);
            END_STATE();
        case 444:
            if(lookahead == 't')
                ADVANCE(92);
            END_STATE();
        case 445:
            if(lookahead == 'u')
                ADVANCE(125);
            END_STATE();
        case 446:
            if(lookahead == 'u')
                ADVANCE(286);
            END_STATE();
        case 447:
            if(lookahead == 'u')
                ADVANCE(136);
            END_STATE();
        case 448:
            if(lookahead == 'u')
                ADVANCE(403);
            END_STATE();
        case 449:
            if(lookahead == 'u')
                ADVANCE(279);
            END_STATE();
        case 450:
            if(lookahead == 'u')
                ADVANCE(407);
            END_STATE();
        case 451:
            if(lookahead == 'u')
                ADVANCE(320);
            END_STATE();
        case 452:
            if(lookahead == 'u')
                ADVANCE(202);
            END_STATE();
        case 453:
            if(lookahead == 'u')
                ADVANCE(187);
            END_STATE();
        case 454:
            if(lookahead == 'u')
                ADVANCE(428);
            END_STATE();
        case 455:
            if(lookahead == 'u')
                ADVANCE(281);
            END_STATE();
        case 456:
            if(lookahead == 'u')
                ADVANCE(396);
            END_STATE();
        case 457:
            if(lookahead == 'u')
                ADVANCE(138);
            END_STATE();
        case 458:
            if(lookahead == 'u')
                ADVANCE(277);
            END_STATE();
        case 459:
            if(lookahead == 'u')
                ADVANCE(208);
            END_STATE();
        case 460:
            if(lookahead == 'u')
                ADVANCE(126);
            END_STATE();
        case 461:
            if(lookahead == 'v')
                ADVANCE(257);
            END_STATE();
        case 462:
            if(lookahead == 'v')
                ADVANCE(165);
            END_STATE();
        case 463:
            if(lookahead == 'x')
                ADVANCE(182);
            END_STATE();
        case 464:
            if(lookahead == 'x')
                ADVANCE(431);
            END_STATE();
        case 465:
            if(lookahead == 'y')
                ADVANCE(542);
            END_STATE();
        case 466:
            if(lookahead == 'y')
                ADVANCE(654);
            END_STATE();
        case 467:
            if(lookahead == 'y')
                ADVANCE(83);
            END_STATE();
        case 468:
            if(lookahead == 'y')
                ADVANCE(707);
            END_STATE();
        case 469:
            if(lookahead == 'y')
                ADVANCE(86);
            END_STATE();
        case 470:
            if(lookahead == 'y')
                ADVANCE(355);
            END_STATE();
        case 471:
            if(lookahead == 'y')
                ADVANCE(356);
            END_STATE();
        case 472:
            if(lookahead == 'y')
                ADVANCE(358);
            END_STATE();
        case 473:
            if(lookahead == 'z')
                ADVANCE(194);
            END_STATE();
        case 474:
            if(lookahead == '\t' ||
               lookahead == ' ')
                ADVANCE(474);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(631);
            END_STATE();
        case 475:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(607);
            END_STATE();
        case 476:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(595);
            END_STATE();
        case 477:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(601);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(615);
            END_STATE();
        case 478:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(609);
            END_STATE();
        case 479:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(615);
            END_STATE();
        case 480:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(597);
            END_STATE();
        case 481:
            if(lookahead != 0 &&
               lookahead != '\r' &&
               lookahead != '\\')
                ADVANCE(927);
            if(lookahead == '\r')
                ADVANCE(929);
            if(lookahead == '\\')
                ADVANCE(928);
            END_STATE();
        case 482:
            if(lookahead != 0 &&
               lookahead != '*')
                ADVANCE(635);
            END_STATE();
        case 483:
            if(eof)
                ADVANCE(491);
            if(lookahead == '\n')
                SKIP(0)
            END_STATE();
        case 484:
            if(eof)
                ADVANCE(491);
            if(lookahead == '\n')
                SKIP(0)
            if(lookahead == '\r')
                SKIP(483)
            END_STATE();
        case 485:
            if(eof)
                ADVANCE(491);
            if(lookahead == '\n')
                SKIP(489)
            END_STATE();
        case 486:
            if(eof)
                ADVANCE(491);
            if(lookahead == '\n')
                SKIP(489)
            if(lookahead == '\r')
                SKIP(485)
            END_STATE();
        case 487:
            if(eof)
                ADVANCE(491);
            if(lookahead == '\n')
                SKIP(490)
            END_STATE();
        case 488:
            if(eof)
                ADVANCE(491);
            if(lookahead == '\n')
                SKIP(490)
            if(lookahead == '\r')
                SKIP(487)
            END_STATE();
        case 489:
            if(eof)
                ADVANCE(491);
            if(lookahead == '#')
                ADVANCE(141);
            if(lookahead == '$')
                ADVANCE(551);
            if(lookahead == '%')
                ADVANCE(560);
            if(lookahead == '(')
                ADVANCE(43);
            if(lookahead == ')')
                ADVANCE(562);
            if(lookahead == '*')
                ADVANCE(558);
            if(lookahead == '+')
                ADVANCE(554);
            if(lookahead == ',')
                ADVANCE(544);
            if(lookahead == '-')
                ADVANCE(556);
            if(lookahead == '/')
                ADVANCE(559);
            if(lookahead == ':')
                ADVANCE(646);
            if(lookahead == ';')
                ADVANCE(647);
            if(lookahead == '<')
                ADVANCE(71);
            if(lookahead == '>')
                ADVANCE(541);
            if(lookahead == '@')
                ADVANCE(74);
            if(lookahead == 'X')
                ADVANCE(72);
            if(lookahead == '[')
                ADVANCE(919);
            if(lookahead == '\\')
                SKIP(486)
            if(lookahead == ']')
                ADVANCE(920);
            if(lookahead == '^')
                ADVANCE(550);
            if(lookahead == 'a')
                ADVANCE(401);
            if(lookahead == 'b')
                ADVANCE(232);
            if(lookahead == 'c')
                ADVANCE(93);
            if(lookahead == 'd')
                ADVANCE(159);
            if(lookahead == 'e')
                ADVANCE(298);
            if(lookahead == 'g')
                ADVANCE(201);
            if(lookahead == 'i')
                ADVANCE(315);
            if(lookahead == 'l')
                ADVANCE(347);
            if(lookahead == 'm')
                ADVANCE(326);
            if(lookahead == 'n')
                ADVANCE(94);
            if(lookahead == 'o')
                ADVANCE(130);
            if(lookahead == 'r')
                ADVANCE(96);
            if(lookahead == 's')
                ADVANCE(210);
            if(lookahead == 't')
                ADVANCE(472);
            if(lookahead == 'u')
                ADVANCE(233);
            if(lookahead == '|')
                ADVANCE(549);
            if(lookahead == '}')
                ADVANCE(641);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(489)
            END_STATE();
        case 490:
            if(eof)
                ADVANCE(491);
            if(lookahead == '#')
                ADVANCE(155);
            if(lookahead == '$')
                ADVANCE(551);
            if(lookahead == '%')
                ADVANCE(560);
            if(lookahead == ')')
                ADVANCE(562);
            if(lookahead == '*')
                ADVANCE(558);
            if(lookahead == '+')
                ADVANCE(554);
            if(lookahead == ',')
                ADVANCE(544);
            if(lookahead == '-')
                ADVANCE(556);
            if(lookahead == '/')
                ADVANCE(559);
            if(lookahead == ':')
                ADVANCE(645);
            if(lookahead == ';')
                ADVANCE(647);
            if(lookahead == '<')
                ADVANCE(71);
            if(lookahead == '>')
                ADVANCE(541);
            if(lookahead == '@')
                ADVANCE(74);
            if(lookahead == '\\')
                SKIP(488)
            if(lookahead == ']')
                ADVANCE(920);
            if(lookahead == '^')
                ADVANCE(550);
            if(lookahead == 'a')
                ADVANCE(263);
            if(lookahead == 'b')
                ADVANCE(249);
            if(lookahead == 'c')
                ADVANCE(325);
            if(lookahead == 'e')
                ADVANCE(298);
            if(lookahead == 'i')
                ADVANCE(323);
            if(lookahead == 'l')
                ADVANCE(333);
            if(lookahead == 'm')
                ADVANCE(326);
            if(lookahead == 'n')
                ADVANCE(116);
            if(lookahead == 's')
                ADVANCE(424);
            if(lookahead == 't')
                ADVANCE(472);
            if(lookahead == 'u')
                ADVANCE(321);
            if(lookahead == '{')
                ADVANCE(640);
            if(lookahead == '|')
                ADVANCE(549);
            if(lookahead == '}')
                ADVANCE(641);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(490)
            END_STATE();
        case 491:
            ACCEPT_TOKEN(ts_builtin_sym_end);
            END_STATE();
        case 492:
            ACCEPT_TOKEN(anon_sym_short);
            END_STATE();
        case 493:
            ACCEPT_TOKEN(anon_sym_short);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 494:
            ACCEPT_TOKEN(anon_sym_int16);
            END_STATE();
        case 495:
            ACCEPT_TOKEN(anon_sym_int16);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 496:
            ACCEPT_TOKEN(anon_sym_long);
            if(lookahead == ' ')
                ADVANCE(151);
            END_STATE();
        case 497:
            ACCEPT_TOKEN(anon_sym_long);
            if(lookahead == ' ')
                ADVANCE(151);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 498:
            ACCEPT_TOKEN(anon_sym_long);
            if(lookahead == ' ')
                ADVANCE(273);
            END_STATE();
        case 499:
            ACCEPT_TOKEN(anon_sym_long);
            if(lookahead == ' ')
                ADVANCE(273);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 500:
            ACCEPT_TOKEN(anon_sym_int32);
            END_STATE();
        case 501:
            ACCEPT_TOKEN(anon_sym_int32);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 502:
            ACCEPT_TOKEN(anon_sym_longlong);
            END_STATE();
        case 503:
            ACCEPT_TOKEN(anon_sym_int64);
            END_STATE();
        case 504:
            ACCEPT_TOKEN(anon_sym_int64);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 505:
            ACCEPT_TOKEN(sym_unsigned_tiny_int);
            END_STATE();
        case 506:
            ACCEPT_TOKEN(sym_unsigned_tiny_int);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 507:
            ACCEPT_TOKEN(sym_boolean_type);
            END_STATE();
        case 508:
            ACCEPT_TOKEN(sym_boolean_type);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 509:
            ACCEPT_TOKEN(anon_sym_fixed);
            END_STATE();
        case 510:
            ACCEPT_TOKEN(anon_sym_fixed);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 511:
            ACCEPT_TOKEN(sym_octet_type);
            END_STATE();
        case 512:
            ACCEPT_TOKEN(sym_octet_type);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 513:
            ACCEPT_TOKEN(sym_signed_tiny_int);
            END_STATE();
        case 514:
            ACCEPT_TOKEN(sym_signed_tiny_int);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 515:
            ACCEPT_TOKEN(anon_sym_unsignedshort);
            END_STATE();
        case 516:
            ACCEPT_TOKEN(anon_sym_uint16);
            END_STATE();
        case 517:
            ACCEPT_TOKEN(anon_sym_uint16);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 518:
            ACCEPT_TOKEN(anon_sym_unsignedlong);
            if(lookahead == ' ')
                ADVANCE(284);
            END_STATE();
        case 519:
            ACCEPT_TOKEN(anon_sym_uint32);
            END_STATE();
        case 520:
            ACCEPT_TOKEN(anon_sym_uint32);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 521:
            ACCEPT_TOKEN(anon_sym_unsignedlonglong);
            END_STATE();
        case 522:
            ACCEPT_TOKEN(anon_sym_uint64);
            END_STATE();
        case 523:
            ACCEPT_TOKEN(anon_sym_uint64);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 524:
            ACCEPT_TOKEN(anon_sym_float);
            END_STATE();
        case 525:
            ACCEPT_TOKEN(anon_sym_float);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 526:
            ACCEPT_TOKEN(anon_sym_double);
            END_STATE();
        case 527:
            ACCEPT_TOKEN(anon_sym_double);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 528:
            ACCEPT_TOKEN(anon_sym_longdouble);
            END_STATE();
        case 529:
            ACCEPT_TOKEN(anon_sym_char);
            END_STATE();
        case 530:
            ACCEPT_TOKEN(anon_sym_char);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 531:
            ACCEPT_TOKEN(anon_sym_wchar);
            END_STATE();
        case 532:
            ACCEPT_TOKEN(anon_sym_wchar);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 533:
            ACCEPT_TOKEN(anon_sym_COLON_COLON);
            END_STATE();
        case 534:
            ACCEPT_TOKEN(anon_sym_string);
            END_STATE();
        case 535:
            ACCEPT_TOKEN(anon_sym_string);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 536:
            ACCEPT_TOKEN(anon_sym_wstring);
            END_STATE();
        case 537:
            ACCEPT_TOKEN(anon_sym_wstring);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 538:
            ACCEPT_TOKEN(anon_sym_LT);
            END_STATE();
        case 539:
            ACCEPT_TOKEN(anon_sym_LT);
            if(lookahead == '<')
                ADVANCE(553);
            END_STATE();
        case 540:
            ACCEPT_TOKEN(anon_sym_GT);
            END_STATE();
        case 541:
            ACCEPT_TOKEN(anon_sym_GT);
            if(lookahead == '>')
                ADVANCE(552);
            END_STATE();
        case 542:
            ACCEPT_TOKEN(anon_sym_any);
            END_STATE();
        case 543:
            ACCEPT_TOKEN(anon_sym_any);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 544:
            ACCEPT_TOKEN(anon_sym_COMMA);
            END_STATE();
        case 545:
            ACCEPT_TOKEN(anon_sym_sequence);
            END_STATE();
        case 546:
            ACCEPT_TOKEN(anon_sym_sequence);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 547:
            ACCEPT_TOKEN(anon_sym_map);
            END_STATE();
        case 548:
            ACCEPT_TOKEN(anon_sym_map);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 549:
            ACCEPT_TOKEN(anon_sym_PIPE);
            END_STATE();
        case 550:
            ACCEPT_TOKEN(anon_sym_CARET);
            END_STATE();
        case 551:
            ACCEPT_TOKEN(anon_sym_DOLLAR);
            END_STATE();
        case 552:
            ACCEPT_TOKEN(anon_sym_GT_GT);
            END_STATE();
        case 553:
            ACCEPT_TOKEN(anon_sym_LT_LT);
            END_STATE();
        case 554:
            ACCEPT_TOKEN(anon_sym_PLUS);
            END_STATE();
        case 555:
            ACCEPT_TOKEN(anon_sym_PLUS);
            if(lookahead == '.')
                ADVANCE(476);
            if(lookahead == '0')
                ADVANCE(603);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(607);
            END_STATE();
        case 556:
            ACCEPT_TOKEN(anon_sym_DASH);
            END_STATE();
        case 557:
            ACCEPT_TOKEN(anon_sym_DASH);
            if(lookahead == '.')
                ADVANCE(476);
            if(lookahead == '0')
                ADVANCE(603);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(607);
            END_STATE();
        case 558:
            ACCEPT_TOKEN(anon_sym_STAR);
            END_STATE();
        case 559:
            ACCEPT_TOKEN(anon_sym_SLASH);
            if(lookahead == '/')
                ADVANCE(921);
            END_STATE();
        case 560:
            ACCEPT_TOKEN(anon_sym_PERCENT);
            END_STATE();
        case 561:
            ACCEPT_TOKEN(anon_sym_LPAREN);
            END_STATE();
        case 562:
            ACCEPT_TOKEN(anon_sym_RPAREN);
            END_STATE();
        case 563:
            ACCEPT_TOKEN(anon_sym_TILDE);
            END_STATE();
        case 564:
            ACCEPT_TOKEN(anon_sym_L);
            END_STATE();
        case 565:
            ACCEPT_TOKEN(anon_sym_L);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 566:
            ACCEPT_TOKEN(anon_sym_DQUOTE);
            END_STATE();
        case 567:
            ACCEPT_TOKEN(aux_sym_string_literal_token1);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(567);
            END_STATE();
        case 568:
            ACCEPT_TOKEN(anon_sym_SQUOTE);
            END_STATE();
        case 569:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            END_STATE();
        case 570:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'A')
                ADVANCE(78);
            END_STATE();
        case 571:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'C')
                ADVANCE(73);
            END_STATE();
        case 572:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'R')
                ADVANCE(85);
            END_STATE();
        case 573:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(389);
            if(lookahead == 'h')
                ADVANCE(100);
            if(lookahead == 'o')
                ADVANCE(297);
            END_STATE();
        case 574:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(349);
            if(lookahead == 'o')
                ADVANCE(150);
            END_STATE();
        case 575:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(287);
            END_STATE();
        case 576:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(274);
            if(lookahead == 'o')
                ADVANCE(238);
            END_STATE();
        case 577:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(250);
            if(lookahead == 'e')
                ADVANCE(97);
            END_STATE();
        case 578:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'c')
                ADVANCE(228);
            if(lookahead == 's')
                ADVANCE(433);
            END_STATE();
        case 579:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'c')
                ADVANCE(422);
            if(lookahead == 'u')
                ADVANCE(403);
            END_STATE();
        case 580:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'e')
                ADVANCE(212);
            if(lookahead == 'o')
                ADVANCE(445);
            END_STATE();
        case 581:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'e')
                ADVANCE(360);
            if(lookahead == 'h')
                ADVANCE(332);
            if(lookahead == 't')
                ADVANCE(361);
            if(lookahead == 'w')
                ADVANCE(242);
            END_STATE();
        case 582:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'e')
                ADVANCE(420);
            END_STATE();
        case 583:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'i')
                ADVANCE(463);
            if(lookahead == 'l')
                ADVANCE(329);
            END_STATE();
        case 584:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'i')
                ADVANCE(402);
            if(lookahead == 'o')
                ADVANCE(327);
            END_STATE();
        case 585:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'i')
                ADVANCE(303);
            if(lookahead == 'n')
                ADVANCE(240);
            END_STATE();
        case 586:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'l')
                ADVANCE(236);
            if(lookahead == 'n')
                ADVANCE(465);
            if(lookahead == 't')
                ADVANCE(418);
            END_STATE();
        case 587:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'n')
                ADVANCE(650);
            END_STATE();
        case 588:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'n')
                ADVANCE(446);
            if(lookahead == 'v')
                ADVANCE(203);
            if(lookahead == 'x')
                ADVANCE(131);
            END_STATE();
        case 589:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'o')
                ADVANCE(133);
            END_STATE();
        case 590:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'y')
                ADVANCE(350);
            END_STATE();
        case 591:
            ACCEPT_TOKEN(anon_sym_TRUE);
            END_STATE();
        case 592:
            ACCEPT_TOKEN(anon_sym_TRUE);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 593:
            ACCEPT_TOKEN(anon_sym_FALSE);
            END_STATE();
        case 594:
            ACCEPT_TOKEN(anon_sym_FALSE);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 595:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(476);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(619);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(595);
            if(sym_number_literal_character_set_1(lookahead))
                ADVANCE(624);
            END_STATE();
        case 596:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(480);
            if(lookahead == 'B' ||
               lookahead == 'D' ||
               lookahead == 'F' ||
               lookahead == 'b' ||
               lookahead == 'd' ||
               lookahead == 'f')
                ADVANCE(596);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(623);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(596);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 597:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(480);
            if(lookahead == 'B' ||
               lookahead == 'D' ||
               lookahead == 'F' ||
               lookahead == 'b' ||
               lookahead == 'd' ||
               lookahead == 'f')
                ADVANCE(597);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(624);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(597);
            END_STATE();
        case 598:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(477);
            if(lookahead == '.')
                ADVANCE(620);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(612);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(610);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(618);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(917);
            if(('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(613);
            if(('D' <= lookahead && lookahead <= 'F') ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(613);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(623);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(600);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 599:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(477);
            if(lookahead == '.')
                ADVANCE(620);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(614);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(611);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(619);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(479);
            if(('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(615);
            if(('D' <= lookahead && lookahead <= 'F') ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(615);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(624);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(601);
            END_STATE();
        case 600:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(477);
            if(lookahead == '.')
                ADVANCE(620);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(610);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(618);
            if(lookahead == 'A' ||
               lookahead == 'C' ||
               lookahead == 'a' ||
               lookahead == 'c')
                ADVANCE(613);
            if(('B' <= lookahead && lookahead <= 'F') ||
               ('b' <= lookahead && lookahead <= 'f'))
                ADVANCE(613);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(623);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(600);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 601:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(477);
            if(lookahead == '.')
                ADVANCE(620);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(611);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(619);
            if(lookahead == 'A' ||
               lookahead == 'C' ||
               lookahead == 'a' ||
               lookahead == 'c')
                ADVANCE(615);
            if(('B' <= lookahead && lookahead <= 'F') ||
               ('b' <= lookahead && lookahead <= 'f'))
                ADVANCE(615);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(624);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(601);
            END_STATE();
        case 602:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(475);
            if(lookahead == '.')
                ADVANCE(620);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(616);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(720);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(618);
            if(('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               ('d' <= lookahead && lookahead <= 'f') ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(623);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(606);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 603:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(475);
            if(lookahead == '.')
                ADVANCE(620);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(617);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(49);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(619);
            if(('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               ('d' <= lookahead && lookahead <= 'f') ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(624);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(607);
            END_STATE();
        case 604:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(475);
            if(lookahead == '.')
                ADVANCE(620);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(621);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(917);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(618);
            if(('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               ('d' <= lookahead && lookahead <= 'f') ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(623);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(606);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 605:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(475);
            if(lookahead == '.')
                ADVANCE(620);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(622);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(479);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(619);
            if(('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               ('d' <= lookahead && lookahead <= 'f') ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(624);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(607);
            END_STATE();
        case 606:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(475);
            if(lookahead == '.')
                ADVANCE(620);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(618);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(606);
            if(sym_number_literal_character_set_1(lookahead))
                ADVANCE(623);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 607:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(475);
            if(lookahead == '.')
                ADVANCE(620);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(619);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(607);
            if(sym_number_literal_character_set_1(lookahead))
                ADVANCE(624);
            END_STATE();
        case 608:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(478);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(480);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(608);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(619);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(609);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(624);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(609);
            END_STATE();
        case 609:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(478);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(608);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(619);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(609);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(624);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(609);
            END_STATE();
        case 610:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(479);
            if(lookahead == '.')
                ADVANCE(620);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(480);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(610);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(618);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(613);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(623);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(613);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 611:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(479);
            if(lookahead == '.')
                ADVANCE(620);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(480);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(611);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(619);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(615);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(624);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(615);
            END_STATE();
        case 612:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(479);
            if(lookahead == '.')
                ADVANCE(620);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(610);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(618);
            if(lookahead == 'A' ||
               lookahead == 'C' ||
               lookahead == 'a' ||
               lookahead == 'c')
                ADVANCE(613);
            if(('B' <= lookahead && lookahead <= 'F') ||
               ('b' <= lookahead && lookahead <= 'f'))
                ADVANCE(613);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(623);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(600);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 613:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(479);
            if(lookahead == '.')
                ADVANCE(620);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(610);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(618);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(613);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(623);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(613);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 614:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(479);
            if(lookahead == '.')
                ADVANCE(620);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(611);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(619);
            if(lookahead == 'A' ||
               lookahead == 'C' ||
               lookahead == 'a' ||
               lookahead == 'c')
                ADVANCE(615);
            if(('B' <= lookahead && lookahead <= 'F') ||
               ('b' <= lookahead && lookahead <= 'f'))
                ADVANCE(615);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(624);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(601);
            END_STATE();
        case 615:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(479);
            if(lookahead == '.')
                ADVANCE(620);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(611);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(619);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(615);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(624);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(615);
            END_STATE();
        case 616:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '.')
                ADVANCE(476);
            if(lookahead == '0')
                ADVANCE(604);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(606);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(623);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 617:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '.')
                ADVANCE(476);
            if(lookahead == '0')
                ADVANCE(605);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(607);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(624);
            END_STATE();
        case 618:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(480);
            if(lookahead == 'B' ||
               lookahead == 'D' ||
               lookahead == 'F' ||
               lookahead == 'b' ||
               lookahead == 'd' ||
               lookahead == 'f')
                ADVANCE(596);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(623);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(596);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 619:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(480);
            if(lookahead == 'B' ||
               lookahead == 'D' ||
               lookahead == 'F' ||
               lookahead == 'b' ||
               lookahead == 'd' ||
               lookahead == 'f')
                ADVANCE(597);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(624);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(597);
            END_STATE();
        case 620:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(608);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(619);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(609);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(624);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(609);
            END_STATE();
        case 621:
            ACCEPT_TOKEN(sym_number_literal);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(606);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(623);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 622:
            ACCEPT_TOKEN(sym_number_literal);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(607);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(624);
            END_STATE();
        case 623:
            ACCEPT_TOKEN(sym_number_literal);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(623);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 624:
            ACCEPT_TOKEN(sym_number_literal);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(624);
            END_STATE();
        case 625:
            ACCEPT_TOKEN(aux_sym_preproc_call_token1);
            END_STATE();
        case 626:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'e')
                ADVANCE(628);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(631);
            END_STATE();
        case 627:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'e')
                ADVANCE(697);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(631);
            END_STATE();
        case 628:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'f')
                ADVANCE(629);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(631);
            END_STATE();
        case 629:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'i')
                ADVANCE(630);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(631);
            END_STATE();
        case 630:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'n')
                ADVANCE(627);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(631);
            END_STATE();
        case 631:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(631);
            END_STATE();
        case 632:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '\n')
                SKIP(61)
            if(lookahead == '\r')
                ADVANCE(633);
            if(lookahead == '/')
                ADVANCE(482);
            if(lookahead == '\\')
                ADVANCE(636);
            if(lookahead != 0)
                ADVANCE(635);
            END_STATE();
        case 633:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '\n')
                SKIP(61)
            if(lookahead == '/')
                ADVANCE(482);
            if(lookahead == '\\')
                ADVANCE(636);
            if(lookahead != 0)
                ADVANCE(635);
            END_STATE();
        case 634:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(921);
            if(lookahead == '\\')
                ADVANCE(636);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(635);
            END_STATE();
        case 635:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(482);
            if(lookahead == '\\')
                ADVANCE(636);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(635);
            END_STATE();
        case 636:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead != 0 &&
               lookahead != '\r' &&
               lookahead != '/' &&
               lookahead != '\\')
                ADVANCE(635);
            if(lookahead == '\r')
                ADVANCE(637);
            if(lookahead == '/')
                ADVANCE(482);
            if(lookahead == '\\')
                ADVANCE(636);
            END_STATE();
        case 637:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead != 0 &&
               lookahead != '/' &&
               lookahead != '\\')
                ADVANCE(635);
            if(lookahead == '/')
                ADVANCE(482);
            if(lookahead == '\\')
                ADVANCE(636);
            END_STATE();
        case 638:
            ACCEPT_TOKEN(anon_sym_exception);
            END_STATE();
        case 639:
            ACCEPT_TOKEN(anon_sym_exception);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 640:
            ACCEPT_TOKEN(anon_sym_LBRACE);
            END_STATE();
        case 641:
            ACCEPT_TOKEN(anon_sym_RBRACE);
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
                ADVANCE(918);
            END_STATE();
        case 644:
            ACCEPT_TOKEN(anon_sym_local);
            END_STATE();
        case 645:
            ACCEPT_TOKEN(anon_sym_COLON);
            END_STATE();
        case 646:
            ACCEPT_TOKEN(anon_sym_COLON);
            if(lookahead == ':')
                ADVANCE(533);
            END_STATE();
        case 647:
            ACCEPT_TOKEN(anon_sym_SEMI);
            END_STATE();
        case 648:
            ACCEPT_TOKEN(anon_sym_void);
            END_STATE();
        case 649:
            ACCEPT_TOKEN(anon_sym_void);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 650:
            ACCEPT_TOKEN(anon_sym_in);
            if(lookahead == 'o')
                ADVANCE(450);
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
                ADVANCE(918);
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
                ADVANCE(918);
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
                ADVANCE(918);
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
                ADVANCE(918);
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
                ADVANCE(918);
            END_STATE();
        case 668:
            ACCEPT_TOKEN(anon_sym_AT);
            END_STATE();
        case 669:
            ACCEPT_TOKEN(anon_sym_EQ);
            END_STATE();
        case 670:
            ACCEPT_TOKEN(anon_sym_module);
            END_STATE();
        case 671:
            ACCEPT_TOKEN(anon_sym_typename);
            END_STATE();
        case 672:
            ACCEPT_TOKEN(anon_sym_typename);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 673:
            ACCEPT_TOKEN(anon_sym_valuetype);
            END_STATE();
        case 674:
            ACCEPT_TOKEN(anon_sym_valuetype);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 675:
            ACCEPT_TOKEN(anon_sym_eventtype);
            END_STATE();
        case 676:
            ACCEPT_TOKEN(anon_sym_eventtype);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 677:
            ACCEPT_TOKEN(anon_sym_struct);
            END_STATE();
        case 678:
            ACCEPT_TOKEN(anon_sym_struct);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 679:
            ACCEPT_TOKEN(anon_sym_union);
            END_STATE();
        case 680:
            ACCEPT_TOKEN(anon_sym_union);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 681:
            ACCEPT_TOKEN(anon_sym_enum);
            END_STATE();
        case 682:
            ACCEPT_TOKEN(anon_sym_enum);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 683:
            ACCEPT_TOKEN(anon_sym_const);
            END_STATE();
        case 684:
            ACCEPT_TOKEN(anon_sym_const);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 685:
            ACCEPT_TOKEN(anon_sym_alias);
            END_STATE();
        case 686:
            ACCEPT_TOKEN(anon_sym_native);
            END_STATE();
        case 687:
            ACCEPT_TOKEN(anon_sym_native);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 688:
            ACCEPT_TOKEN(anon_sym_ATdefault_literal);
            END_STATE();
        case 689:
            ACCEPT_TOKEN(anon_sym_ATignore_literal_names);
            END_STATE();
        case 690:
            ACCEPT_TOKEN(anon_sym_switch);
            END_STATE();
        case 691:
            ACCEPT_TOKEN(anon_sym_switch);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 692:
            ACCEPT_TOKEN(anon_sym_case);
            END_STATE();
        case 693:
            ACCEPT_TOKEN(anon_sym_case);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 694:
            ACCEPT_TOKEN(anon_sym_typedef);
            END_STATE();
        case 695:
            ACCEPT_TOKEN(anon_sym_typedef);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 696:
            ACCEPT_TOKEN(anon_sym_POUNDdefine);
            END_STATE();
        case 697:
            ACCEPT_TOKEN(anon_sym_POUNDdefine);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(631);
            END_STATE();
        case 698:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '\r')
                ADVANCE(701);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(701);
            END_STATE();
        case 699:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '/')
                ADVANCE(700);
            if(lookahead == '\\')
                ADVANCE(698);
            if(lookahead == '\t' ||
               (11 <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(699);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(701);
            END_STATE();
        case 700:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '/')
                ADVANCE(923);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(701);
            END_STATE();
        case 701:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(701);
            END_STATE();
        case 702:
            ACCEPT_TOKEN(sym_dds_service);
            END_STATE();
        case 703:
            ACCEPT_TOKEN(anon_sym_ATDDSRequestTopic);
            END_STATE();
        case 704:
            ACCEPT_TOKEN(anon_sym_name);
            END_STATE();
        case 705:
            ACCEPT_TOKEN(anon_sym_ATDDSReplyTopic);
            END_STATE();
        case 706:
            ACCEPT_TOKEN(sym_optional);
            END_STATE();
        case 707:
            ACCEPT_TOKEN(sym_key);
            END_STATE();
        case 708:
            ACCEPT_TOKEN(sym_must_understand);
            END_STATE();
        case 709:
            ACCEPT_TOKEN(sym_non_serialized);
            END_STATE();
        case 710:
            ACCEPT_TOKEN(sym_id);
            END_STATE();
        case 711:
            ACCEPT_TOKEN(sym_external);
            END_STATE();
        case 712:
            ACCEPT_TOKEN(anon_sym_AThashid);
            END_STATE();
        case 713:
            ACCEPT_TOKEN(anon_sym_LPAREN_DQUOTE);
            END_STATE();
        case 714:
            ACCEPT_TOKEN(anon_sym_ATtry_construct);
            END_STATE();
        case 715:
            ACCEPT_TOKEN(sym_final);
            END_STATE();
        case 716:
            ACCEPT_TOKEN(anon_sym_ATdata_representation);
            END_STATE();
        case 717:
            ACCEPT_TOKEN(anon_sym_XCDR);
            if(lookahead == '2')
                ADVANCE(718);
            END_STATE();
        case 718:
            ACCEPT_TOKEN(anon_sym_XCDR2);
            END_STATE();
        case 719:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == ' ')
                ADVANCE(283);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 720:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '.')
                ADVANCE(476);
            if(lookahead == '0')
                ADVANCE(598);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(600);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(613);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 721:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '1')
                ADVANCE(728);
            if(lookahead == '3')
                ADVANCE(724);
            if(lookahead == '6')
                ADVANCE(726);
            if(lookahead == '8')
                ADVANCE(514);
            if(lookahead == 'e')
                ADVANCE(875);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 722:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '1')
                ADVANCE(728);
            if(lookahead == '3')
                ADVANCE(724);
            if(lookahead == '6')
                ADVANCE(726);
            if(lookahead == '8')
                ADVANCE(514);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 723:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '1')
                ADVANCE(729);
            if(lookahead == '3')
                ADVANCE(725);
            if(lookahead == '6')
                ADVANCE(727);
            if(lookahead == '8')
                ADVANCE(506);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 724:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '2')
                ADVANCE(501);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 725:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '2')
                ADVANCE(520);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 726:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '4')
                ADVANCE(504);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 727:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '4')
                ADVANCE(523);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 728:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '6')
                ADVANCE(495);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 729:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '6')
                ADVANCE(517);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 730:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'A')
                ADVANCE(733);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('B' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 731:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'E')
                ADVANCE(592);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 732:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'E')
                ADVANCE(594);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 733:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'L')
                ADVANCE(735);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 734:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'R')
                ADVANCE(736);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 735:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'S')
                ADVANCE(732);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 736:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'U')
                ADVANCE(731);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 737:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(860);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 738:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(764);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 739:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(876);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 740:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(827);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 741:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(868);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 742:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(891);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 743:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(879);
            if(lookahead == 'h')
                ADVANCE(741);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 744:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(903);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 745:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(869);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 746:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(824);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 747:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(883);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 748:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(831);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 749:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(759);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 750:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(821);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 751:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(905);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 752:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(803);
            if(lookahead == 's')
                ADVANCE(898);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 753:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(803);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 754:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(779);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 755:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(799);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 756:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(894);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 757:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(771);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 758:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(887);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 759:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(776);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 760:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(649);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 761:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(510);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 762:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(719);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 763:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(770);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 764:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(856);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 765:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(866);
            if(lookahead == 'h')
                ADVANCE(854);
            if(lookahead == 't')
                ADVANCE(867);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 766:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(866);
            if(lookahead == 'h')
                ADVANCE(854);
            if(lookahead == 't')
                ADVANCE(872);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 767:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(866);
            if(lookahead == 'h')
                ADVANCE(854);
            if(lookahead == 't')
                ADVANCE(873);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 768:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(527);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 769:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(687);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 770:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(791);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 771:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(546);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 772:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(657);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 773:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(693);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 774:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(672);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 775:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(676);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 776:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(643);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 777:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(674);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 778:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(792);
            if(lookahead == 'o')
                ADVANCE(901);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 779:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(861);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 780:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(761);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 781:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(738);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 782:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(763);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 783:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(762);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 784:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(748);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 785:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(847);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 786:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(884);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 787:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(886);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 788:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(843);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 789:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(845);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 790:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(900);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 791:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'f')
                ADVANCE(695);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 792:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'f')
                ADVANCE(744);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 793:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'f')
                ADVANCE(749);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 794:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(497);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 795:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(535);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 796:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(537);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 797:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(499);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 798:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(848);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 799:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(691);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 800:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(741);
            if(lookahead == 'o')
                ADVANCE(828);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 801:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(741);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 802:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(854);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 803:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(745);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 804:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(910);
            if(lookahead == 'l')
                ADVANCE(858);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 805:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(908);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 806:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(880);
            if(lookahead == 'o')
                ADVANCE(851);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 807:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(751);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 808:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(798);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 809:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(760);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 810:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(840);
            if(lookahead == 'u')
                ADVANCE(758);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 811:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(840);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 812:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(841);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 813:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(893);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 814:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(842);
            if(lookahead == 'n')
                ADVANCE(816);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 815:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(842);
            if(lookahead == 'n')
                ADVANCE(877);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 816:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(855);
            if(lookahead == 's')
                ADVANCE(808);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 817:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(857);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 818:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'k')
                ADVANCE(664);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 819:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(912);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 820:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(858);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 821:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(768);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 822:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(888);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 823:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(784);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 824:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(907);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 825:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'm')
                ADVANCE(682);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 826:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'm')
                ADVANCE(739);
            if(lookahead == 's')
                ADVANCE(787);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 827:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'm')
                ADVANCE(774);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 828:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(878);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 829:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(794);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 830:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(680);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 831:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(508);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 832:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(639);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 833:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(911);
            if(lookahead == 't')
                ADVANCE(890);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 834:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(911);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 835:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(902);
            if(lookahead == 'v')
                ADVANCE(789);
            if(lookahead == 'x')
                ADVANCE(754);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 836:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(902);
            if(lookahead == 'x')
                ADVANCE(754);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 837:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(902);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 838:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(881);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 839:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(819);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 840:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(795);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 841:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(796);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 842:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(892);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 843:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(740);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 844:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(889);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 845:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(897);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 846:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(797);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 847:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(757);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 848:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(783);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 849:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(901);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 850:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(809);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 851:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(823);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 852:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(829);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 853:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(851);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 854:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(874);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 855:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(830);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 856:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(839);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 857:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(832);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 858:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(747);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 859:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(846);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 860:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(548);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 861:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(895);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 862:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(775);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 863:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(777);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 864:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(782);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 865:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(788);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 866:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'q')
                ADVANCE(904);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 867:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(810);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 868:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(530);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 869:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(532);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 870:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(807);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 871:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(812);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 872:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(906);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 873:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(811);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 874:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(885);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 875:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(793);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 876:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(818);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 877:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(808);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 878:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(882);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 879:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(773);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 880:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(826);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 881:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(722);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 882:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(684);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 883:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(525);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 884:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(512);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 885:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(493);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 886:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(661);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 887:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(678);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 888:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(667);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 889:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(721);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 890:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(870);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 891:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(805);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 892:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(723);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 893:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(755);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 894:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(786);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 895:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(817);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 896:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(772);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 897:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(899);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 898:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(871);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 899:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(915);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 900:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(916);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 901:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(750);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 902:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(825);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 903:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(822);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 904:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(785);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 905:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(896);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 906:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(758);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 907:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(790);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 908:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'v')
                ADVANCE(769);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 909:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'w')
                ADVANCE(813);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 910:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'x')
                ADVANCE(780);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 911:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(543);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 912:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(655);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 913:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(864);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 914:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(865);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 915:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(862);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 916:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(863);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 917:
            ACCEPT_TOKEN(sym_identifier);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(613);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 918:
            ACCEPT_TOKEN(sym_identifier);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(918);
            END_STATE();
        case 919:
            ACCEPT_TOKEN(anon_sym_LBRACK);
            END_STATE();
        case 920:
            ACCEPT_TOKEN(anon_sym_RBRACK);
            END_STATE();
        case 921:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            END_STATE();
        case 922:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            if(lookahead == '\\')
                ADVANCE(481);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(927);
            END_STATE();
        case 923:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(701);
            END_STATE();
        case 924:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '\n')
                ADVANCE(925);
            if(lookahead == '\\')
                ADVANCE(481);
            if(lookahead != 0)
                ADVANCE(927);
            END_STATE();
        case 925:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '/')
                ADVANCE(926);
            if(lookahead == '\\')
                ADVANCE(35);
            if(lookahead == '\t' ||
               (11 <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(925);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(927);
            END_STATE();
        case 926:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '/')
                ADVANCE(922);
            if(lookahead == '\\')
                ADVANCE(481);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(927);
            END_STATE();
        case 927:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '\\')
                ADVANCE(481);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(927);
            END_STATE();
        case 928:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead != 0 &&
               lookahead != '\r' &&
               lookahead != '\\')
                ADVANCE(927);
            if(lookahead == '\r')
                ADVANCE(929);
            if(lookahead == '\\')
                ADVANCE(928);
            END_STATE();
        case 929:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead != 0 &&
               lookahead != '\\')
                ADVANCE(927);
            if(lookahead == '\\')
                ADVANCE(481);
            END_STATE();
        default:
            return false;
    }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
    [0] = { .lex_state = 0, .external_lex_state = 1 },
    [1] = { .lex_state = 489 },
    [2] = { .lex_state = 47 },
    [3] = { .lex_state = 47 },
    [4] = { .lex_state = 47 },
    [5] = { .lex_state = 47 },
    [6] = { .lex_state = 47 },
    [7] = { .lex_state = 41 },
    [8] = { .lex_state = 41 },
    [9] = { .lex_state = 51 },
    [10] = { .lex_state = 52 },
    [11] = { .lex_state = 48 },
    [12] = { .lex_state = 48 },
    [13] = { .lex_state = 48 },
    [14] = { .lex_state = 48 },
    [15] = { .lex_state = 48 },
    [16] = { .lex_state = 48 },
    [17] = { .lex_state = 48 },
    [18] = { .lex_state = 48 },
    [19] = { .lex_state = 48 },
    [20] = { .lex_state = 48 },
    [21] = { .lex_state = 48 },
    [22] = { .lex_state = 48 },
    [23] = { .lex_state = 53 },
    [24] = { .lex_state = 53 },
    [25] = { .lex_state = 53 },
    [26] = { .lex_state = 490 },
    [27] = { .lex_state = 490 },
    [28] = { .lex_state = 490 },
    [29] = { .lex_state = 54 },
    [30] = { .lex_state = 489 },
    [31] = { .lex_state = 48 },
    [32] = { .lex_state = 54 },
    [33] = { .lex_state = 490 },
    [34] = { .lex_state = 490 },
    [35] = { .lex_state = 490 },
    [36] = { .lex_state = 490 },
    [37] = { .lex_state = 48 },
    [38] = { .lex_state = 490 },
    [39] = { .lex_state = 48 },
    [40] = { .lex_state = 48 },
    [41] = { .lex_state = 48 },
    [42] = { .lex_state = 48 },
    [43] = { .lex_state = 47 },
    [44] = { .lex_state = 47 },
    [45] = { .lex_state = 55 },
    [46] = { .lex_state = 55 },
    [47] = { .lex_state = 48 },
    [48] = { .lex_state = 51 },
    [49] = { .lex_state = 51 },
    [50] = { .lex_state = 48 },
    [51] = { .lex_state = 48 },
    [52] = { .lex_state = 48 },
    [53] = { .lex_state = 48 },
    [54] = { .lex_state = 48 },
    [55] = { .lex_state = 48 },
    [56] = { .lex_state = 48 },
    [57] = { .lex_state = 48 },
    [58] = { .lex_state = 48 },
    [59] = { .lex_state = 53 },
    [60] = { .lex_state = 53 },
    [61] = { .lex_state = 53 },
    [62] = { .lex_state = 53 },
    [63] = { .lex_state = 53 },
    [64] = { .lex_state = 56 },
    [65] = { .lex_state = 48 },
    [66] = { .lex_state = 42 },
    [67] = { .lex_state = 42 },
    [68] = { .lex_state = 42 },
    [69] = { .lex_state = 42 },
    [70] = { .lex_state = 42 },
    [71] = { .lex_state = 42 },
    [72] = { .lex_state = 42 },
    [73] = { .lex_state = 42 },
    [74] = { .lex_state = 489 },
    [75] = { .lex_state = 42 },
    [76] = { .lex_state = 42 },
    [77] = { .lex_state = 42 },
    [78] = { .lex_state = 42 },
    [79] = { .lex_state = 42 },
    [80] = { .lex_state = 42 },
    [81] = { .lex_state = 489 },
    [82] = { .lex_state = 490 },
    [83] = { .lex_state = 490 },
    [84] = { .lex_state = 490 },
    [85] = { .lex_state = 42 },
    [86] = { .lex_state = 489 },
    [87] = { .lex_state = 42 },
    [88] = { .lex_state = 490 },
    [89] = { .lex_state = 490 },
    [90] = { .lex_state = 490 },
    [91] = { .lex_state = 489 },
    [92] = { .lex_state = 490 },
    [93] = { .lex_state = 489 },
    [94] = { .lex_state = 42 },
    [95] = { .lex_state = 44 },
    [96] = { .lex_state = 42 },
    [97] = { .lex_state = 44 },
    [98] = { .lex_state = 44 },
    [99] = { .lex_state = 42 },
    [100] = { .lex_state = 489 },
    [101] = { .lex_state = 489 },
    [102] = { .lex_state = 490 },
    [103] = { .lex_state = 490 },
    [104] = { .lex_state = 490 },
    [105] = { .lex_state = 490 },
    [106] = { .lex_state = 490 },
    [107] = { .lex_state = 490 },
    [108] = { .lex_state = 490 },
    [109] = { .lex_state = 490 },
    [110] = { .lex_state = 490 },
    [111] = { .lex_state = 490 },
    [112] = { .lex_state = 490 },
    [113] = { .lex_state = 490 },
    [114] = { .lex_state = 490 },
    [115] = { .lex_state = 490 },
    [116] = { .lex_state = 42 },
    [117] = { .lex_state = 489 },
    [118] = { .lex_state = 490 },
    [119] = { .lex_state = 490 },
    [120] = { .lex_state = 490 },
    [121] = { .lex_state = 490 },
    [122] = { .lex_state = 489 },
    [123] = { .lex_state = 45 },
    [124] = { .lex_state = 45 },
    [125] = { .lex_state = 489 },
    [126] = { .lex_state = 42 },
    [127] = { .lex_state = 45 },
    [128] = { .lex_state = 45 },
    [129] = { .lex_state = 489 },
    [130] = { .lex_state = 45 },
    [131] = { .lex_state = 45 },
    [132] = { .lex_state = 489 },
    [133] = { .lex_state = 44 },
    [134] = { .lex_state = 489 },
    [135] = { .lex_state = 489 },
    [136] = { .lex_state = 44 },
    [137] = { .lex_state = 489 },
    [138] = { .lex_state = 489 },
    [139] = { .lex_state = 489 },
    [140] = { .lex_state = 489 },
    [141] = { .lex_state = 489 },
    [142] = { .lex_state = 44 },
    [143] = { .lex_state = 44 },
    [144] = { .lex_state = 44 },
    [145] = { .lex_state = 489 },
    [146] = { .lex_state = 489 },
    [147] = { .lex_state = 489 },
    [148] = { .lex_state = 489 },
    [149] = { .lex_state = 45 },
    [150] = { .lex_state = 489 },
    [151] = { .lex_state = 489 },
    [152] = { .lex_state = 489 },
    [153] = { .lex_state = 489 },
    [154] = { .lex_state = 44 },
    [155] = { .lex_state = 489 },
    [156] = { .lex_state = 489 },
    [157] = { .lex_state = 489 },
    [158] = { .lex_state = 46 },
    [159] = { .lex_state = 46 },
    [160] = { .lex_state = 489 },
    [161] = { .lex_state = 489 },
    [162] = { .lex_state = 44 },
    [163] = { .lex_state = 489 },
    [164] = { .lex_state = 0 },
    [165] = { .lex_state = 44 },
    [166] = { .lex_state = 44 },
    [167] = { .lex_state = 0 },
    [168] = { .lex_state = 489 },
    [169] = { .lex_state = 490 },
    [170] = { .lex_state = 46 },
    [171] = { .lex_state = 44 },
    [172] = { .lex_state = 46 },
    [173] = { .lex_state = 489 },
    [174] = { .lex_state = 44 },
    [175] = { .lex_state = 46 },
    [176] = { .lex_state = 489 },
    [177] = { .lex_state = 46 },
    [178] = { .lex_state = 46 },
    [179] = { .lex_state = 46 },
    [180] = { .lex_state = 46 },
    [181] = { .lex_state = 489 },
    [182] = { .lex_state = 46 },
    [183] = { .lex_state = 44 },
    [184] = { .lex_state = 46 },
    [185] = { .lex_state = 46 },
    [186] = { .lex_state = 44 },
    [187] = { .lex_state = 47 },
    [188] = { .lex_state = 489 },
    [189] = { .lex_state = 44 },
    [190] = { .lex_state = 0 },
    [191] = { .lex_state = 489 },
    [192] = { .lex_state = 44 },
    [193] = { .lex_state = 44 },
    [194] = { .lex_state = 490 },
    [195] = { .lex_state = 44 },
    [196] = { .lex_state = 489 },
    [197] = { .lex_state = 46 },
    [198] = { .lex_state = 46 },
    [199] = { .lex_state = 44 },
    [200] = { .lex_state = 46 },
    [201] = { .lex_state = 46 },
    [202] = { .lex_state = 46 },
    [203] = { .lex_state = 46 },
    [204] = { .lex_state = 0 },
    [205] = { .lex_state = 47 },
    [206] = { .lex_state = 44 },
    [207] = { .lex_state = 0 },
    [208] = { .lex_state = 46 },
    [209] = { .lex_state = 0 },
    [210] = { .lex_state = 44 },
    [211] = { .lex_state = 0 },
    [212] = { .lex_state = 489 },
    [213] = { .lex_state = 44 },
    [214] = { .lex_state = 0 },
    [215] = { .lex_state = 46 },
    [216] = { .lex_state = 489 },
    [217] = { .lex_state = 47 },
    [218] = { .lex_state = 0 },
    [219] = { .lex_state = 489 },
    [220] = { .lex_state = 0 },
    [221] = { .lex_state = 0 },
    [222] = { .lex_state = 47 },
    [223] = { .lex_state = 0 },
    [224] = { .lex_state = 489 },
    [225] = { .lex_state = 0 },
    [226] = { .lex_state = 46 },
    [227] = { .lex_state = 46 },
    [228] = { .lex_state = 0 },
    [229] = { .lex_state = 47 },
    [230] = { .lex_state = 0 },
    [231] = { .lex_state = 44 },
    [232] = { .lex_state = 57 },
    [233] = { .lex_state = 489 },
    [234] = { .lex_state = 46 },
    [235] = { .lex_state = 0 },
    [236] = { .lex_state = 47 },
    [237] = { .lex_state = 44 },
    [238] = { .lex_state = 44 },
    [239] = { .lex_state = 0 },
    [240] = { .lex_state = 489 },
    [241] = { .lex_state = 489 },
    [242] = { .lex_state = 0 },
    [243] = { .lex_state = 489 },
    [244] = { .lex_state = 44 },
    [245] = { .lex_state = 0 },
    [246] = { .lex_state = 0 },
    [247] = { .lex_state = 47 },
    [248] = { .lex_state = 46 },
    [249] = { .lex_state = 0 },
    [250] = { .lex_state = 489 },
    [251] = { .lex_state = 46 },
    [252] = { .lex_state = 47 },
    [253] = { .lex_state = 0 },
    [254] = { .lex_state = 44 },
    [255] = { .lex_state = 44 },
    [256] = { .lex_state = 0 },
    [257] = { .lex_state = 47 },
    [258] = { .lex_state = 0 },
    [259] = { .lex_state = 489 },
    [260] = { .lex_state = 0 },
    [261] = { .lex_state = 44 },
    [262] = { .lex_state = 47 },
    [263] = { .lex_state = 0 },
    [264] = { .lex_state = 0 },
    [265] = { .lex_state = 47 },
    [266] = { .lex_state = 47 },
    [267] = { .lex_state = 47 },
    [268] = { .lex_state = 47 },
    [269] = { .lex_state = 47 },
    [270] = { .lex_state = 0 },
    [271] = { .lex_state = 44 },
    [272] = { .lex_state = 29 },
    [273] = { .lex_state = 489 },
    [274] = { .lex_state = 47 },
    [275] = { .lex_state = 489 },
    [276] = { .lex_state = 44 },
    [277] = { .lex_state = 44 },
    [278] = { .lex_state = 489 },
    [279] = { .lex_state = 44 },
    [280] = { .lex_state = 489 },
    [281] = { .lex_state = 44 },
    [282] = { .lex_state = 47 },
    [283] = { .lex_state = 44 },
    [284] = { .lex_state = 44 },
    [285] = { .lex_state = 44 },
    [286] = { .lex_state = 44 },
    [287] = { .lex_state = 44 },
    [288] = { .lex_state = 44 },
    [289] = { .lex_state = 489 },
    [290] = { .lex_state = 0 },
    [291] = { .lex_state = 0 },
    [292] = { .lex_state = 0 },
    [293] = { .lex_state = 44 },
    [294] = { .lex_state = 44 },
    [295] = { .lex_state = 490 },
    [296] = { .lex_state = 0 },
    [297] = { .lex_state = 47 },
    [298] = { .lex_state = 47 },
    [299] = { .lex_state = 44 },
    [300] = { .lex_state = 44 },
    [301] = { .lex_state = 44 },
    [302] = { .lex_state = 489 },
    [303] = { .lex_state = 44 },
    [304] = { .lex_state = 0 },
    [305] = { .lex_state = 44 },
    [306] = { .lex_state = 0 },
    [307] = { .lex_state = 489 },
    [308] = { .lex_state = 44 },
    [309] = { .lex_state = 44 },
    [310] = { .lex_state = 44 },
    [311] = { .lex_state = 44 },
    [312] = { .lex_state = 44 },
    [313] = { .lex_state = 0 },
    [314] = { .lex_state = 44 },
    [315] = { .lex_state = 44 },
    [316] = { .lex_state = 44 },
    [317] = { .lex_state = 0 },
    [318] = { .lex_state = 44 },
    [319] = { .lex_state = 0 },
    [320] = { .lex_state = 44 },
    [321] = { .lex_state = 0 },
    [322] = { .lex_state = 47 },
    [323] = { .lex_state = 44 },
    [324] = { .lex_state = 0 },
    [325] = { .lex_state = 0 },
    [326] = { .lex_state = 489 },
    [327] = { .lex_state = 47 },
    [328] = { .lex_state = 489 },
    [329] = { .lex_state = 0 },
    [330] = { .lex_state = 44 },
    [331] = { .lex_state = 0 },
    [332] = { .lex_state = 0 },
    [333] = { .lex_state = 44 },
    [334] = { .lex_state = 0 },
    [335] = { .lex_state = 47 },
    [336] = { .lex_state = 47 },
    [337] = { .lex_state = 46 },
    [338] = { .lex_state = 47 },
    [339] = { .lex_state = 44 },
    [340] = { .lex_state = 44 },
    [341] = { .lex_state = 490 },
    [342] = { .lex_state = 0 },
    [343] = { .lex_state = 44 },
    [344] = { .lex_state = 0 },
    [345] = { .lex_state = 0 },
    [346] = { .lex_state = 0 },
    [347] = { .lex_state = 47 },
    [348] = { .lex_state = 0 },
    [349] = { .lex_state = 58 },
    [350] = { .lex_state = 59 },
    [351] = { .lex_state = 0 },
    [352] = { .lex_state = 44 },
    [353] = { .lex_state = 47 },
    [354] = { .lex_state = 44 },
    [355] = { .lex_state = 0 },
    [356] = { .lex_state = 44 },
    [357] = { .lex_state = 0 },
    [358] = { .lex_state = 0 },
    [359] = { .lex_state = 0 },
    [360] = { .lex_state = 44 },
    [361] = { .lex_state = 0 },
    [362] = { .lex_state = 0 },
    [363] = { .lex_state = 47 },
    [364] = { .lex_state = 0 },
    [365] = { .lex_state = 489 },
    [366] = { .lex_state = 0 },
    [367] = { .lex_state = 47 },
    [368] = { .lex_state = 44 },
    [369] = { .lex_state = 489 },
    [370] = { .lex_state = 0 },
    [371] = { .lex_state = 0 },
    [372] = { .lex_state = 0 },
    [373] = { .lex_state = 0 },
    [374] = { .lex_state = 0 },
    [375] = { .lex_state = 0 },
    [376] = { .lex_state = 0 },
    [377] = { .lex_state = 0 },
    [378] = { .lex_state = 0 },
    [379] = { .lex_state = 0 },
    [380] = { .lex_state = 0 },
    [381] = { .lex_state = 925 },
    [382] = { .lex_state = 0 },
    [383] = { .lex_state = 59 },
    [384] = { .lex_state = 44 },
    [385] = { .lex_state = 0 },
    [386] = { .lex_state = 0 },
    [387] = { .lex_state = 0 },
    [388] = { .lex_state = 0 },
    [389] = { .lex_state = 0 },
    [390] = { .lex_state = 0 },
    [391] = { .lex_state = 0 },
    [392] = { .lex_state = 47 },
    [393] = { .lex_state = 0 },
    [394] = { .lex_state = 0 },
    [395] = { .lex_state = 0 },
    [396] = { .lex_state = 0 },
    [397] = { .lex_state = 44 },
    [398] = { .lex_state = 0 },
    [399] = { .lex_state = 0 },
    [400] = { .lex_state = 44 },
    [401] = { .lex_state = 0 },
    [402] = { .lex_state = 44 },
    [403] = { .lex_state = 489 },
    [404] = { .lex_state = 489 },
    [405] = { .lex_state = 47 },
    [406] = { .lex_state = 0 },
    [407] = { .lex_state = 47 },
    [408] = { .lex_state = 47 },
    [409] = { .lex_state = 0 },
    [410] = { .lex_state = 0 },
    [411] = { .lex_state = 0 },
    [412] = { .lex_state = 44 },
    [413] = { .lex_state = 0 },
    [414] = { .lex_state = 0 },
    [415] = { .lex_state = 0 },
    [416] = { .lex_state = 0 },
    [417] = { .lex_state = 0 },
    [418] = { .lex_state = 47 },
    [419] = { .lex_state = 0 },
    [420] = { .lex_state = 44 },
    [421] = { .lex_state = 44 },
    [422] = { .lex_state = 0 },
    [423] = { .lex_state = 59 },
    [424] = { .lex_state = 0 },
    [425] = { .lex_state = 59 },
    [426] = { .lex_state = 47 },
    [427] = { .lex_state = 44 },
    [428] = { .lex_state = 47 },
    [429] = { .lex_state = 47 },
    [430] = { .lex_state = 0 },
    [431] = { .lex_state = 0 },
    [432] = { .lex_state = 0 },
    [433] = { .lex_state = 0 },
    [434] = { .lex_state = 44 },
    [435] = { .lex_state = 0 },
    [436] = { .lex_state = 490 },
    [437] = { .lex_state = 0 },
    [438] = { .lex_state = 44 },
    [439] = { .lex_state = 0 },
    [440] = { .lex_state = 30 },
    [441] = { .lex_state = 47 },
    [442] = { .lex_state = 58 },
    [443] = { .lex_state = 489 },
    [444] = { .lex_state = 0 },
    [445] = { .lex_state = 0 },
    [446] = { .lex_state = 0 },
    [447] = { .lex_state = 0 },
    [448] = { .lex_state = 0 },
    [449] = { .lex_state = 44 },
    [450] = { .lex_state = 0 },
    [451] = { .lex_state = 0 },
    [452] = { .lex_state = 490 },
    [453] = { .lex_state = 0 },
    [454] = { .lex_state = 0 },
    [455] = { .lex_state = 0 },
    [456] = { .lex_state = 0 },
    [457] = { .lex_state = 0 },
    [458] = { .lex_state = 0 },
    [459] = { .lex_state = 0 },
    [460] = { .lex_state = 0 },
    [461] = { .lex_state = 699 },
    [462] = { .lex_state = 489 },
    [463] = { .lex_state = 47 },
    [464] = { .lex_state = 44 },
    [465] = { .lex_state = 0 },
    [466] = { .lex_state = 44 },
    [467] = { .lex_state = 0 },
    [468] = { .lex_state = 44 },
    [469] = { .lex_state = 44 },
    [470] = { .lex_state = 0 },
    [471] = { .lex_state = 44 },
    [472] = { .lex_state = 44 },
    [473] = { .lex_state = 44 },
    [474] = { .lex_state = 44 },
    [475] = { .lex_state = 0 },
    [476] = { .lex_state = 0 },
    [477] = { .lex_state = 44 },
    [478] = { .lex_state = 0 },
    [479] = { .lex_state = 0 },
    [480] = { .lex_state = 44 },
    [481] = { .lex_state = 44 },
    [482] = { .lex_state = 44 },
    [483] = { .lex_state = 44 },
    [484] = { (TSStateId)(-1) },
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
        [anon_sym_native] = ACTIONS(1),
        [anon_sym_switch] = ACTIONS(1),
        [anon_sym_case] = ACTIONS(1),
        [anon_sym_typedef] = ACTIONS(1),
        [anon_sym_POUNDdefine] = ACTIONS(1),
        [anon_sym_name] = ACTIONS(1),
        [anon_sym_XCDR] = ACTIONS(1),
        [anon_sym_XCDR2] = ACTIONS(1),
        [anon_sym_LBRACK] = ACTIONS(1),
        [anon_sym_RBRACK] = ACTIONS(1),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [sym__eof] = ACTIONS(1),
    },
    [1] = {
        [sym_specification] = STATE(456),
        [sym_preproc_call] = STATE(93),
        [sym_except_dcl] = STATE(453),
        [sym_interface_dcl] = STATE(453),
        [sym_interface_forward_dcl] = STATE(451),
        [sym_interface_def] = STATE(451),
        [sym_interface_header] = STATE(446),
        [sym_interface_anno] = STATE(155),
        [sym_bitset_dcl] = STATE(453),
        [sym_bitmask_dcl] = STATE(453),
        [sym_annotation_dcl] = STATE(453),
        [sym_template_module_dcl] = STATE(453),
        [sym_template_module_inst] = STATE(453),
        [sym__definition] = STATE(92),
        [sym_native_dcl] = STATE(453),
        [sym_module_dcl] = STATE(453),
        [sym_struct_forward_dcl] = STATE(453),
        [sym_struct_def] = STATE(453),
        [sym_enum_dcl] = STATE(453),
        [sym_enum_anno] = STATE(443),
        [sym_union_forward_dcl] = STATE(453),
        [sym_union_def] = STATE(453),
        [sym_typedef_dcl] = STATE(453),
        [sym_predefine] = STATE(84),
        [sym_dds_request_topic] = STATE(150),
        [sym_dds_reply_topic] = STATE(150),
        [sym_const_dcl] = STATE(453),
        [sym_data_representation] = STATE(250),
        [sym_comment] = STATE(1),
        [aux_sym_specification_repeat1] = STATE(30),
        [aux_sym_specification_repeat2] = STATE(34),
        [aux_sym_interface_def_repeat1] = STATE(122),
        [aux_sym_struct_def_repeat1] = STATE(157),
        [ts_builtin_sym_end] = ACTIONS(5),
        [sym_preproc_directive] = ACTIONS(7),
        [anon_sym_exception] = ACTIONS(9),
        [anon_sym_interface] = ACTIONS(11),
        [anon_sym_local] = ACTIONS(13),
        [anon_sym_bitset] = ACTIONS(15),
        [anon_sym_bitmask] = ACTIONS(17),
        [anon_sym_ATannotation] = ACTIONS(19),
        [anon_sym_module] = ACTIONS(21),
        [anon_sym_struct] = ACTIONS(23),
        [anon_sym_union] = ACTIONS(25),
        [anon_sym_enum] = ACTIONS(27),
        [anon_sym_const] = ACTIONS(29),
        [anon_sym_native] = ACTIONS(31),
        [anon_sym_ATignore_literal_names] = ACTIONS(33),
        [anon_sym_typedef] = ACTIONS(35),
        [anon_sym_POUNDdefine] = ACTIONS(37),
        [sym_dds_service] = ACTIONS(39),
        [anon_sym_ATDDSRequestTopic] = ACTIONS(41),
        [anon_sym_ATDDSReplyTopic] = ACTIONS(43),
        [sym_final] = ACTIONS(45),
        [anon_sym_ATdata_representation] = ACTIONS(47),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [2] = {
        [sym_signed_short_int] = STATE(179),
        [sym_signed_long_int] = STATE(179),
        [sym_signed_longlong_int] = STATE(179),
        [sym_unsigned_int] = STATE(158),
        [sym_integer_type] = STATE(202),
        [sym_signed_int] = STATE(158),
        [sym_unsigned_short_int] = STATE(178),
        [sym_unsigned_long_int] = STATE(178),
        [sym_unsigned_longlong_int] = STATE(178),
        [sym_floating_pt_type] = STATE(202),
        [sym_char_type] = STATE(202),
        [sym_scoped_name] = STATE(199),
        [sym_string_type] = STATE(198),
        [sym_type_spec] = STATE(384),
        [sym_simple_type_spec] = STATE(234),
        [sym_base_type_spec] = STATE(197),
        [sym_any_type] = STATE(202),
        [sym_fixed_pt_type] = STATE(198),
        [sym_template_type_spec] = STATE(234),
        [sym_sequence_type] = STATE(198),
        [sym_map_type] = STATE(198),
        [sym_except_dcl] = STATE(380),
        [sym_interface_body] = STATE(379),
        [sym_export] = STATE(44),
        [sym_op_dcl] = STATE(380),
        [sym_op_type_spec] = STATE(343),
        [sym_attr_dcl] = STATE(380),
        [sym_readonly_attr_spec] = STATE(376),
        [sym_attr_spec] = STATE(376),
        [sym_bitset_dcl] = STATE(380),
        [sym_bitmask_dcl] = STATE(380),
        [sym_native_dcl] = STATE(380),
        [sym_struct_forward_dcl] = STATE(380),
        [sym_struct_def] = STATE(380),
        [sym_enum_dcl] = STATE(380),
        [sym_enum_anno] = STATE(443),
        [sym_union_forward_dcl] = STATE(380),
        [sym_union_def] = STATE(380),
        [sym_typedef_dcl] = STATE(380),
        [sym_const_dcl] = STATE(380),
        [sym_data_representation] = STATE(250),
        [sym_comment] = STATE(2),
        [aux_sym_interface_body_repeat1] = STATE(5),
        [aux_sym_struct_def_repeat1] = STATE(157),
        [anon_sym_short] = ACTIONS(49),
        [anon_sym_int16] = ACTIONS(49),
        [anon_sym_long] = ACTIONS(51),
        [anon_sym_int32] = ACTIONS(51),
        [anon_sym_longlong] = ACTIONS(53),
        [anon_sym_int64] = ACTIONS(55),
        [sym_unsigned_tiny_int] = ACTIONS(57),
        [sym_boolean_type] = ACTIONS(59),
        [anon_sym_fixed] = ACTIONS(61),
        [sym_octet_type] = ACTIONS(59),
        [sym_signed_tiny_int] = ACTIONS(63),
        [anon_sym_unsignedshort] = ACTIONS(65),
        [anon_sym_uint16] = ACTIONS(67),
        [anon_sym_unsignedlong] = ACTIONS(69),
        [anon_sym_uint32] = ACTIONS(69),
        [anon_sym_unsignedlonglong] = ACTIONS(71),
        [anon_sym_uint64] = ACTIONS(73),
        [anon_sym_float] = ACTIONS(75),
        [anon_sym_double] = ACTIONS(75),
        [anon_sym_longdouble] = ACTIONS(77),
        [anon_sym_char] = ACTIONS(79),
        [anon_sym_wchar] = ACTIONS(79),
        [anon_sym_COLON_COLON] = ACTIONS(81),
        [anon_sym_string] = ACTIONS(83),
        [anon_sym_wstring] = ACTIONS(83),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_sequence] = ACTIONS(87),
        [anon_sym_map] = ACTIONS(89),
        [anon_sym_exception] = ACTIONS(91),
        [anon_sym_RBRACE] = ACTIONS(93),
        [anon_sym_void] = ACTIONS(95),
        [anon_sym_readonly] = ACTIONS(97),
        [anon_sym_attribute] = ACTIONS(99),
        [anon_sym_bitset] = ACTIONS(101),
        [anon_sym_bitmask] = ACTIONS(103),
        [anon_sym_struct] = ACTIONS(105),
        [anon_sym_union] = ACTIONS(107),
        [anon_sym_enum] = ACTIONS(109),
        [anon_sym_const] = ACTIONS(111),
        [anon_sym_native] = ACTIONS(113),
        [anon_sym_ATignore_literal_names] = ACTIONS(33),
        [anon_sym_typedef] = ACTIONS(115),
        [sym_final] = ACTIONS(45),
        [anon_sym_ATdata_representation] = ACTIONS(47),
        [sym_identifier] = ACTIONS(117),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [3] = {
        [sym_signed_short_int] = STATE(179),
        [sym_signed_long_int] = STATE(179),
        [sym_signed_longlong_int] = STATE(179),
        [sym_unsigned_int] = STATE(158),
        [sym_integer_type] = STATE(202),
        [sym_signed_int] = STATE(158),
        [sym_unsigned_short_int] = STATE(178),
        [sym_unsigned_long_int] = STATE(178),
        [sym_unsigned_longlong_int] = STATE(178),
        [sym_floating_pt_type] = STATE(202),
        [sym_char_type] = STATE(202),
        [sym_scoped_name] = STATE(199),
        [sym_string_type] = STATE(198),
        [sym_type_spec] = STATE(384),
        [sym_simple_type_spec] = STATE(234),
        [sym_base_type_spec] = STATE(197),
        [sym_any_type] = STATE(202),
        [sym_fixed_pt_type] = STATE(198),
        [sym_template_type_spec] = STATE(234),
        [sym_sequence_type] = STATE(198),
        [sym_map_type] = STATE(198),
        [sym_except_dcl] = STATE(380),
        [sym_interface_body] = STATE(345),
        [sym_export] = STATE(44),
        [sym_op_dcl] = STATE(380),
        [sym_op_type_spec] = STATE(343),
        [sym_attr_dcl] = STATE(380),
        [sym_readonly_attr_spec] = STATE(376),
        [sym_attr_spec] = STATE(376),
        [sym_bitset_dcl] = STATE(380),
        [sym_bitmask_dcl] = STATE(380),
        [sym_native_dcl] = STATE(380),
        [sym_struct_forward_dcl] = STATE(380),
        [sym_struct_def] = STATE(380),
        [sym_enum_dcl] = STATE(380),
        [sym_enum_anno] = STATE(443),
        [sym_union_forward_dcl] = STATE(380),
        [sym_union_def] = STATE(380),
        [sym_typedef_dcl] = STATE(380),
        [sym_const_dcl] = STATE(380),
        [sym_data_representation] = STATE(250),
        [sym_comment] = STATE(3),
        [aux_sym_interface_body_repeat1] = STATE(5),
        [aux_sym_struct_def_repeat1] = STATE(157),
        [anon_sym_short] = ACTIONS(49),
        [anon_sym_int16] = ACTIONS(49),
        [anon_sym_long] = ACTIONS(51),
        [anon_sym_int32] = ACTIONS(51),
        [anon_sym_longlong] = ACTIONS(53),
        [anon_sym_int64] = ACTIONS(55),
        [sym_unsigned_tiny_int] = ACTIONS(57),
        [sym_boolean_type] = ACTIONS(59),
        [anon_sym_fixed] = ACTIONS(61),
        [sym_octet_type] = ACTIONS(59),
        [sym_signed_tiny_int] = ACTIONS(63),
        [anon_sym_unsignedshort] = ACTIONS(65),
        [anon_sym_uint16] = ACTIONS(67),
        [anon_sym_unsignedlong] = ACTIONS(69),
        [anon_sym_uint32] = ACTIONS(69),
        [anon_sym_unsignedlonglong] = ACTIONS(71),
        [anon_sym_uint64] = ACTIONS(73),
        [anon_sym_float] = ACTIONS(75),
        [anon_sym_double] = ACTIONS(75),
        [anon_sym_longdouble] = ACTIONS(77),
        [anon_sym_char] = ACTIONS(79),
        [anon_sym_wchar] = ACTIONS(79),
        [anon_sym_COLON_COLON] = ACTIONS(81),
        [anon_sym_string] = ACTIONS(83),
        [anon_sym_wstring] = ACTIONS(83),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_sequence] = ACTIONS(87),
        [anon_sym_map] = ACTIONS(89),
        [anon_sym_exception] = ACTIONS(91),
        [anon_sym_RBRACE] = ACTIONS(119),
        [anon_sym_void] = ACTIONS(95),
        [anon_sym_readonly] = ACTIONS(97),
        [anon_sym_attribute] = ACTIONS(99),
        [anon_sym_bitset] = ACTIONS(101),
        [anon_sym_bitmask] = ACTIONS(103),
        [anon_sym_struct] = ACTIONS(105),
        [anon_sym_union] = ACTIONS(107),
        [anon_sym_enum] = ACTIONS(109),
        [anon_sym_const] = ACTIONS(111),
        [anon_sym_native] = ACTIONS(113),
        [anon_sym_ATignore_literal_names] = ACTIONS(33),
        [anon_sym_typedef] = ACTIONS(115),
        [sym_final] = ACTIONS(45),
        [anon_sym_ATdata_representation] = ACTIONS(47),
        [sym_identifier] = ACTIONS(117),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [4] = {
        [sym_signed_short_int] = STATE(179),
        [sym_signed_long_int] = STATE(179),
        [sym_signed_longlong_int] = STATE(179),
        [sym_unsigned_int] = STATE(158),
        [sym_integer_type] = STATE(202),
        [sym_signed_int] = STATE(158),
        [sym_unsigned_short_int] = STATE(178),
        [sym_unsigned_long_int] = STATE(178),
        [sym_unsigned_longlong_int] = STATE(178),
        [sym_floating_pt_type] = STATE(202),
        [sym_char_type] = STATE(202),
        [sym_scoped_name] = STATE(199),
        [sym_string_type] = STATE(198),
        [sym_type_spec] = STATE(384),
        [sym_simple_type_spec] = STATE(234),
        [sym_base_type_spec] = STATE(197),
        [sym_any_type] = STATE(202),
        [sym_fixed_pt_type] = STATE(198),
        [sym_template_type_spec] = STATE(234),
        [sym_sequence_type] = STATE(198),
        [sym_map_type] = STATE(198),
        [sym_except_dcl] = STATE(380),
        [sym_interface_body] = STATE(450),
        [sym_export] = STATE(44),
        [sym_op_dcl] = STATE(380),
        [sym_op_type_spec] = STATE(343),
        [sym_attr_dcl] = STATE(380),
        [sym_readonly_attr_spec] = STATE(376),
        [sym_attr_spec] = STATE(376),
        [sym_bitset_dcl] = STATE(380),
        [sym_bitmask_dcl] = STATE(380),
        [sym_native_dcl] = STATE(380),
        [sym_struct_forward_dcl] = STATE(380),
        [sym_struct_def] = STATE(380),
        [sym_enum_dcl] = STATE(380),
        [sym_enum_anno] = STATE(443),
        [sym_union_forward_dcl] = STATE(380),
        [sym_union_def] = STATE(380),
        [sym_typedef_dcl] = STATE(380),
        [sym_const_dcl] = STATE(380),
        [sym_data_representation] = STATE(250),
        [sym_comment] = STATE(4),
        [aux_sym_interface_body_repeat1] = STATE(5),
        [aux_sym_struct_def_repeat1] = STATE(157),
        [anon_sym_short] = ACTIONS(49),
        [anon_sym_int16] = ACTIONS(49),
        [anon_sym_long] = ACTIONS(51),
        [anon_sym_int32] = ACTIONS(51),
        [anon_sym_longlong] = ACTIONS(53),
        [anon_sym_int64] = ACTIONS(55),
        [sym_unsigned_tiny_int] = ACTIONS(57),
        [sym_boolean_type] = ACTIONS(59),
        [anon_sym_fixed] = ACTIONS(61),
        [sym_octet_type] = ACTIONS(59),
        [sym_signed_tiny_int] = ACTIONS(63),
        [anon_sym_unsignedshort] = ACTIONS(65),
        [anon_sym_uint16] = ACTIONS(67),
        [anon_sym_unsignedlong] = ACTIONS(69),
        [anon_sym_uint32] = ACTIONS(69),
        [anon_sym_unsignedlonglong] = ACTIONS(71),
        [anon_sym_uint64] = ACTIONS(73),
        [anon_sym_float] = ACTIONS(75),
        [anon_sym_double] = ACTIONS(75),
        [anon_sym_longdouble] = ACTIONS(77),
        [anon_sym_char] = ACTIONS(79),
        [anon_sym_wchar] = ACTIONS(79),
        [anon_sym_COLON_COLON] = ACTIONS(81),
        [anon_sym_string] = ACTIONS(83),
        [anon_sym_wstring] = ACTIONS(83),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_sequence] = ACTIONS(87),
        [anon_sym_map] = ACTIONS(89),
        [anon_sym_exception] = ACTIONS(91),
        [anon_sym_RBRACE] = ACTIONS(121),
        [anon_sym_void] = ACTIONS(95),
        [anon_sym_readonly] = ACTIONS(97),
        [anon_sym_attribute] = ACTIONS(99),
        [anon_sym_bitset] = ACTIONS(101),
        [anon_sym_bitmask] = ACTIONS(103),
        [anon_sym_struct] = ACTIONS(105),
        [anon_sym_union] = ACTIONS(107),
        [anon_sym_enum] = ACTIONS(109),
        [anon_sym_const] = ACTIONS(111),
        [anon_sym_native] = ACTIONS(113),
        [anon_sym_ATignore_literal_names] = ACTIONS(33),
        [anon_sym_typedef] = ACTIONS(115),
        [sym_final] = ACTIONS(45),
        [anon_sym_ATdata_representation] = ACTIONS(47),
        [sym_identifier] = ACTIONS(117),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [5] = {
        [sym_signed_short_int] = STATE(179),
        [sym_signed_long_int] = STATE(179),
        [sym_signed_longlong_int] = STATE(179),
        [sym_unsigned_int] = STATE(158),
        [sym_integer_type] = STATE(202),
        [sym_signed_int] = STATE(158),
        [sym_unsigned_short_int] = STATE(178),
        [sym_unsigned_long_int] = STATE(178),
        [sym_unsigned_longlong_int] = STATE(178),
        [sym_floating_pt_type] = STATE(202),
        [sym_char_type] = STATE(202),
        [sym_scoped_name] = STATE(199),
        [sym_string_type] = STATE(198),
        [sym_type_spec] = STATE(384),
        [sym_simple_type_spec] = STATE(234),
        [sym_base_type_spec] = STATE(197),
        [sym_any_type] = STATE(202),
        [sym_fixed_pt_type] = STATE(198),
        [sym_template_type_spec] = STATE(234),
        [sym_sequence_type] = STATE(198),
        [sym_map_type] = STATE(198),
        [sym_except_dcl] = STATE(380),
        [sym_export] = STATE(44),
        [sym_op_dcl] = STATE(380),
        [sym_op_type_spec] = STATE(343),
        [sym_attr_dcl] = STATE(380),
        [sym_readonly_attr_spec] = STATE(376),
        [sym_attr_spec] = STATE(376),
        [sym_bitset_dcl] = STATE(380),
        [sym_bitmask_dcl] = STATE(380),
        [sym_native_dcl] = STATE(380),
        [sym_struct_forward_dcl] = STATE(380),
        [sym_struct_def] = STATE(380),
        [sym_enum_dcl] = STATE(380),
        [sym_enum_anno] = STATE(443),
        [sym_union_forward_dcl] = STATE(380),
        [sym_union_def] = STATE(380),
        [sym_typedef_dcl] = STATE(380),
        [sym_const_dcl] = STATE(380),
        [sym_data_representation] = STATE(250),
        [sym_comment] = STATE(5),
        [aux_sym_interface_body_repeat1] = STATE(6),
        [aux_sym_struct_def_repeat1] = STATE(157),
        [anon_sym_short] = ACTIONS(49),
        [anon_sym_int16] = ACTIONS(49),
        [anon_sym_long] = ACTIONS(51),
        [anon_sym_int32] = ACTIONS(51),
        [anon_sym_longlong] = ACTIONS(53),
        [anon_sym_int64] = ACTIONS(55),
        [sym_unsigned_tiny_int] = ACTIONS(57),
        [sym_boolean_type] = ACTIONS(59),
        [anon_sym_fixed] = ACTIONS(61),
        [sym_octet_type] = ACTIONS(59),
        [sym_signed_tiny_int] = ACTIONS(63),
        [anon_sym_unsignedshort] = ACTIONS(65),
        [anon_sym_uint16] = ACTIONS(67),
        [anon_sym_unsignedlong] = ACTIONS(69),
        [anon_sym_uint32] = ACTIONS(69),
        [anon_sym_unsignedlonglong] = ACTIONS(71),
        [anon_sym_uint64] = ACTIONS(73),
        [anon_sym_float] = ACTIONS(75),
        [anon_sym_double] = ACTIONS(75),
        [anon_sym_longdouble] = ACTIONS(77),
        [anon_sym_char] = ACTIONS(79),
        [anon_sym_wchar] = ACTIONS(79),
        [anon_sym_COLON_COLON] = ACTIONS(81),
        [anon_sym_string] = ACTIONS(83),
        [anon_sym_wstring] = ACTIONS(83),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_sequence] = ACTIONS(87),
        [anon_sym_map] = ACTIONS(89),
        [anon_sym_exception] = ACTIONS(91),
        [anon_sym_RBRACE] = ACTIONS(123),
        [anon_sym_void] = ACTIONS(95),
        [anon_sym_readonly] = ACTIONS(97),
        [anon_sym_attribute] = ACTIONS(99),
        [anon_sym_bitset] = ACTIONS(101),
        [anon_sym_bitmask] = ACTIONS(103),
        [anon_sym_struct] = ACTIONS(105),
        [anon_sym_union] = ACTIONS(107),
        [anon_sym_enum] = ACTIONS(109),
        [anon_sym_const] = ACTIONS(111),
        [anon_sym_native] = ACTIONS(113),
        [anon_sym_ATignore_literal_names] = ACTIONS(33),
        [anon_sym_typedef] = ACTIONS(115),
        [sym_final] = ACTIONS(45),
        [anon_sym_ATdata_representation] = ACTIONS(47),
        [sym_identifier] = ACTIONS(117),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [6] = {
        [sym_signed_short_int] = STATE(179),
        [sym_signed_long_int] = STATE(179),
        [sym_signed_longlong_int] = STATE(179),
        [sym_unsigned_int] = STATE(158),
        [sym_integer_type] = STATE(202),
        [sym_signed_int] = STATE(158),
        [sym_unsigned_short_int] = STATE(178),
        [sym_unsigned_long_int] = STATE(178),
        [sym_unsigned_longlong_int] = STATE(178),
        [sym_floating_pt_type] = STATE(202),
        [sym_char_type] = STATE(202),
        [sym_scoped_name] = STATE(199),
        [sym_string_type] = STATE(198),
        [sym_type_spec] = STATE(384),
        [sym_simple_type_spec] = STATE(234),
        [sym_base_type_spec] = STATE(197),
        [sym_any_type] = STATE(202),
        [sym_fixed_pt_type] = STATE(198),
        [sym_template_type_spec] = STATE(234),
        [sym_sequence_type] = STATE(198),
        [sym_map_type] = STATE(198),
        [sym_except_dcl] = STATE(380),
        [sym_export] = STATE(44),
        [sym_op_dcl] = STATE(380),
        [sym_op_type_spec] = STATE(343),
        [sym_attr_dcl] = STATE(380),
        [sym_readonly_attr_spec] = STATE(376),
        [sym_attr_spec] = STATE(376),
        [sym_bitset_dcl] = STATE(380),
        [sym_bitmask_dcl] = STATE(380),
        [sym_native_dcl] = STATE(380),
        [sym_struct_forward_dcl] = STATE(380),
        [sym_struct_def] = STATE(380),
        [sym_enum_dcl] = STATE(380),
        [sym_enum_anno] = STATE(443),
        [sym_union_forward_dcl] = STATE(380),
        [sym_union_def] = STATE(380),
        [sym_typedef_dcl] = STATE(380),
        [sym_const_dcl] = STATE(380),
        [sym_data_representation] = STATE(250),
        [sym_comment] = STATE(6),
        [aux_sym_interface_body_repeat1] = STATE(6),
        [aux_sym_struct_def_repeat1] = STATE(157),
        [anon_sym_short] = ACTIONS(125),
        [anon_sym_int16] = ACTIONS(125),
        [anon_sym_long] = ACTIONS(128),
        [anon_sym_int32] = ACTIONS(128),
        [anon_sym_longlong] = ACTIONS(131),
        [anon_sym_int64] = ACTIONS(134),
        [sym_unsigned_tiny_int] = ACTIONS(137),
        [sym_boolean_type] = ACTIONS(140),
        [anon_sym_fixed] = ACTIONS(143),
        [sym_octet_type] = ACTIONS(140),
        [sym_signed_tiny_int] = ACTIONS(146),
        [anon_sym_unsignedshort] = ACTIONS(149),
        [anon_sym_uint16] = ACTIONS(152),
        [anon_sym_unsignedlong] = ACTIONS(155),
        [anon_sym_uint32] = ACTIONS(155),
        [anon_sym_unsignedlonglong] = ACTIONS(158),
        [anon_sym_uint64] = ACTIONS(161),
        [anon_sym_float] = ACTIONS(164),
        [anon_sym_double] = ACTIONS(164),
        [anon_sym_longdouble] = ACTIONS(167),
        [anon_sym_char] = ACTIONS(170),
        [anon_sym_wchar] = ACTIONS(170),
        [anon_sym_COLON_COLON] = ACTIONS(173),
        [anon_sym_string] = ACTIONS(176),
        [anon_sym_wstring] = ACTIONS(176),
        [anon_sym_any] = ACTIONS(179),
        [anon_sym_sequence] = ACTIONS(182),
        [anon_sym_map] = ACTIONS(185),
        [anon_sym_exception] = ACTIONS(188),
        [anon_sym_RBRACE] = ACTIONS(191),
        [anon_sym_void] = ACTIONS(193),
        [anon_sym_readonly] = ACTIONS(196),
        [anon_sym_attribute] = ACTIONS(199),
        [anon_sym_bitset] = ACTIONS(202),
        [anon_sym_bitmask] = ACTIONS(205),
        [anon_sym_struct] = ACTIONS(208),
        [anon_sym_union] = ACTIONS(211),
        [anon_sym_enum] = ACTIONS(214),
        [anon_sym_const] = ACTIONS(217),
        [anon_sym_native] = ACTIONS(220),
        [anon_sym_ATignore_literal_names] = ACTIONS(223),
        [anon_sym_typedef] = ACTIONS(226),
        [sym_final] = ACTIONS(229),
        [anon_sym_ATdata_representation] = ACTIONS(232),
        [sym_identifier] = ACTIONS(235),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [7] = {
        [sym_signed_short_int] = STATE(179),
        [sym_signed_long_int] = STATE(179),
        [sym_signed_longlong_int] = STATE(179),
        [sym_unsigned_int] = STATE(158),
        [sym_integer_type] = STATE(202),
        [sym_signed_int] = STATE(158),
        [sym_unsigned_short_int] = STATE(178),
        [sym_unsigned_long_int] = STATE(178),
        [sym_unsigned_longlong_int] = STATE(178),
        [sym_floating_pt_type] = STATE(202),
        [sym_char_type] = STATE(202),
        [sym_scoped_name] = STATE(117),
        [sym_string_type] = STATE(198),
        [sym_type_spec] = STATE(322),
        [sym_simple_type_spec] = STATE(234),
        [sym_base_type_spec] = STATE(197),
        [sym_any_type] = STATE(202),
        [sym_fixed_pt_type] = STATE(198),
        [sym_template_type_spec] = STATE(234),
        [sym_sequence_type] = STATE(198),
        [sym_map_type] = STATE(198),
        [sym_const_expr] = STATE(322),
        [sym_or_expr] = STATE(131),
        [sym_xor_expr] = STATE(127),
        [sym_and_expr] = STATE(124),
        [sym_shift_expr] = STATE(120),
        [sym_add_expr] = STATE(119),
        [sym_mult_expr] = STATE(109),
        [sym_unary_expr] = STATE(113),
        [sym_unary_operator] = STATE(116),
        [sym_literal] = STATE(110),
        [sym_string_literal] = STATE(106),
        [sym_char_literal] = STATE(106),
        [sym_boolean_literal] = STATE(106),
        [sym_actual_parameters] = STATE(347),
        [sym_actual_parameter] = STATE(205),
        [sym_comment] = STATE(7),
        [anon_sym_short] = ACTIONS(49),
        [anon_sym_int16] = ACTIONS(49),
        [anon_sym_long] = ACTIONS(51),
        [anon_sym_int32] = ACTIONS(51),
        [anon_sym_longlong] = ACTIONS(53),
        [anon_sym_int64] = ACTIONS(55),
        [sym_unsigned_tiny_int] = ACTIONS(57),
        [sym_boolean_type] = ACTIONS(59),
        [anon_sym_fixed] = ACTIONS(61),
        [sym_octet_type] = ACTIONS(59),
        [sym_signed_tiny_int] = ACTIONS(63),
        [anon_sym_unsignedshort] = ACTIONS(65),
        [anon_sym_uint16] = ACTIONS(67),
        [anon_sym_unsignedlong] = ACTIONS(69),
        [anon_sym_uint32] = ACTIONS(69),
        [anon_sym_unsignedlonglong] = ACTIONS(71),
        [anon_sym_uint64] = ACTIONS(73),
        [anon_sym_float] = ACTIONS(75),
        [anon_sym_double] = ACTIONS(75),
        [anon_sym_longdouble] = ACTIONS(77),
        [anon_sym_char] = ACTIONS(79),
        [anon_sym_wchar] = ACTIONS(79),
        [anon_sym_COLON_COLON] = ACTIONS(81),
        [anon_sym_string] = ACTIONS(83),
        [anon_sym_wstring] = ACTIONS(83),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_sequence] = ACTIONS(87),
        [anon_sym_map] = ACTIONS(89),
        [anon_sym_PLUS] = ACTIONS(238),
        [anon_sym_DASH] = ACTIONS(238),
        [anon_sym_LPAREN] = ACTIONS(240),
        [anon_sym_TILDE] = ACTIONS(242),
        [anon_sym_L] = ACTIONS(244),
        [anon_sym_DQUOTE] = ACTIONS(246),
        [anon_sym_SQUOTE] = ACTIONS(248),
        [anon_sym_TRUE] = ACTIONS(250),
        [anon_sym_FALSE] = ACTIONS(250),
        [sym_number_literal] = ACTIONS(252),
        [sym_identifier] = ACTIONS(117),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [8] = {
        [sym_signed_short_int] = STATE(179),
        [sym_signed_long_int] = STATE(179),
        [sym_signed_longlong_int] = STATE(179),
        [sym_unsigned_int] = STATE(158),
        [sym_integer_type] = STATE(202),
        [sym_signed_int] = STATE(158),
        [sym_unsigned_short_int] = STATE(178),
        [sym_unsigned_long_int] = STATE(178),
        [sym_unsigned_longlong_int] = STATE(178),
        [sym_floating_pt_type] = STATE(202),
        [sym_char_type] = STATE(202),
        [sym_scoped_name] = STATE(117),
        [sym_string_type] = STATE(198),
        [sym_type_spec] = STATE(322),
        [sym_simple_type_spec] = STATE(234),
        [sym_base_type_spec] = STATE(197),
        [sym_any_type] = STATE(202),
        [sym_fixed_pt_type] = STATE(198),
        [sym_template_type_spec] = STATE(234),
        [sym_sequence_type] = STATE(198),
        [sym_map_type] = STATE(198),
        [sym_const_expr] = STATE(322),
        [sym_or_expr] = STATE(131),
        [sym_xor_expr] = STATE(127),
        [sym_and_expr] = STATE(124),
        [sym_shift_expr] = STATE(120),
        [sym_add_expr] = STATE(119),
        [sym_mult_expr] = STATE(109),
        [sym_unary_expr] = STATE(113),
        [sym_unary_operator] = STATE(116),
        [sym_literal] = STATE(110),
        [sym_string_literal] = STATE(106),
        [sym_char_literal] = STATE(106),
        [sym_boolean_literal] = STATE(106),
        [sym_actual_parameter] = STATE(335),
        [sym_comment] = STATE(8),
        [anon_sym_short] = ACTIONS(49),
        [anon_sym_int16] = ACTIONS(49),
        [anon_sym_long] = ACTIONS(51),
        [anon_sym_int32] = ACTIONS(51),
        [anon_sym_longlong] = ACTIONS(53),
        [anon_sym_int64] = ACTIONS(55),
        [sym_unsigned_tiny_int] = ACTIONS(57),
        [sym_boolean_type] = ACTIONS(59),
        [anon_sym_fixed] = ACTIONS(61),
        [sym_octet_type] = ACTIONS(59),
        [sym_signed_tiny_int] = ACTIONS(63),
        [anon_sym_unsignedshort] = ACTIONS(65),
        [anon_sym_uint16] = ACTIONS(67),
        [anon_sym_unsignedlong] = ACTIONS(69),
        [anon_sym_uint32] = ACTIONS(69),
        [anon_sym_unsignedlonglong] = ACTIONS(71),
        [anon_sym_uint64] = ACTIONS(73),
        [anon_sym_float] = ACTIONS(75),
        [anon_sym_double] = ACTIONS(75),
        [anon_sym_longdouble] = ACTIONS(77),
        [anon_sym_char] = ACTIONS(79),
        [anon_sym_wchar] = ACTIONS(79),
        [anon_sym_COLON_COLON] = ACTIONS(81),
        [anon_sym_string] = ACTIONS(83),
        [anon_sym_wstring] = ACTIONS(83),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_sequence] = ACTIONS(87),
        [anon_sym_map] = ACTIONS(89),
        [anon_sym_PLUS] = ACTIONS(238),
        [anon_sym_DASH] = ACTIONS(238),
        [anon_sym_LPAREN] = ACTIONS(240),
        [anon_sym_TILDE] = ACTIONS(242),
        [anon_sym_L] = ACTIONS(244),
        [anon_sym_DQUOTE] = ACTIONS(246),
        [anon_sym_SQUOTE] = ACTIONS(248),
        [anon_sym_TRUE] = ACTIONS(250),
        [anon_sym_FALSE] = ACTIONS(250),
        [sym_number_literal] = ACTIONS(252),
        [sym_identifier] = ACTIONS(117),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [9] = {
        [sym_signed_short_int] = STATE(179),
        [sym_signed_long_int] = STATE(179),
        [sym_signed_longlong_int] = STATE(179),
        [sym_unsigned_int] = STATE(158),
        [sym_integer_type] = STATE(202),
        [sym_signed_int] = STATE(158),
        [sym_unsigned_short_int] = STATE(178),
        [sym_unsigned_long_int] = STATE(178),
        [sym_unsigned_longlong_int] = STATE(178),
        [sym_floating_pt_type] = STATE(202),
        [sym_char_type] = STATE(202),
        [sym_scoped_name] = STATE(199),
        [sym_string_type] = STATE(198),
        [sym_type_spec] = STATE(166),
        [sym_simple_type_spec] = STATE(234),
        [sym_base_type_spec] = STATE(197),
        [sym_any_type] = STATE(202),
        [sym_fixed_pt_type] = STATE(198),
        [sym_template_type_spec] = STATE(234),
        [sym_sequence_type] = STATE(198),
        [sym_map_type] = STATE(198),
        [sym_bitset_dcl] = STATE(166),
        [sym_bitmask_dcl] = STATE(166),
        [sym_struct_forward_dcl] = STATE(166),
        [sym_struct_def] = STATE(166),
        [sym_enum_dcl] = STATE(166),
        [sym_enum_anno] = STATE(443),
        [sym_union_forward_dcl] = STATE(166),
        [sym_union_def] = STATE(166),
        [sym_element_spec] = STATE(454),
        [sym_data_representation] = STATE(250),
        [sym_comment] = STATE(9),
        [aux_sym_struct_def_repeat1] = STATE(157),
        [anon_sym_short] = ACTIONS(49),
        [anon_sym_int16] = ACTIONS(49),
        [anon_sym_long] = ACTIONS(51),
        [anon_sym_int32] = ACTIONS(51),
        [anon_sym_longlong] = ACTIONS(53),
        [anon_sym_int64] = ACTIONS(55),
        [sym_unsigned_tiny_int] = ACTIONS(57),
        [sym_boolean_type] = ACTIONS(59),
        [anon_sym_fixed] = ACTIONS(61),
        [sym_octet_type] = ACTIONS(59),
        [sym_signed_tiny_int] = ACTIONS(63),
        [anon_sym_unsignedshort] = ACTIONS(65),
        [anon_sym_uint16] = ACTIONS(67),
        [anon_sym_unsignedlong] = ACTIONS(69),
        [anon_sym_uint32] = ACTIONS(69),
        [anon_sym_unsignedlonglong] = ACTIONS(71),
        [anon_sym_uint64] = ACTIONS(73),
        [anon_sym_float] = ACTIONS(75),
        [anon_sym_double] = ACTIONS(75),
        [anon_sym_longdouble] = ACTIONS(77),
        [anon_sym_char] = ACTIONS(79),
        [anon_sym_wchar] = ACTIONS(79),
        [anon_sym_COLON_COLON] = ACTIONS(81),
        [anon_sym_string] = ACTIONS(83),
        [anon_sym_wstring] = ACTIONS(83),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_sequence] = ACTIONS(87),
        [anon_sym_map] = ACTIONS(89),
        [anon_sym_RBRACE] = ACTIONS(254),
        [anon_sym_bitset] = ACTIONS(101),
        [anon_sym_bitmask] = ACTIONS(103),
        [anon_sym_default] = ACTIONS(256),
        [anon_sym_struct] = ACTIONS(105),
        [anon_sym_union] = ACTIONS(107),
        [anon_sym_enum] = ACTIONS(109),
        [anon_sym_ATignore_literal_names] = ACTIONS(33),
        [anon_sym_case] = ACTIONS(256),
        [sym_final] = ACTIONS(45),
        [anon_sym_ATdata_representation] = ACTIONS(47),
        [sym_identifier] = ACTIONS(117),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [10] = {
        [sym_signed_short_int] = STATE(179),
        [sym_signed_long_int] = STATE(179),
        [sym_signed_longlong_int] = STATE(179),
        [sym_unsigned_int] = STATE(158),
        [sym_integer_type] = STATE(202),
        [sym_signed_int] = STATE(158),
        [sym_unsigned_short_int] = STATE(178),
        [sym_unsigned_long_int] = STATE(178),
        [sym_unsigned_longlong_int] = STATE(178),
        [sym_floating_pt_type] = STATE(202),
        [sym_char_type] = STATE(202),
        [sym_scoped_name] = STATE(199),
        [sym_string_type] = STATE(198),
        [sym_simple_type_spec] = STATE(142),
        [sym_base_type_spec] = STATE(197),
        [sym_any_type] = STATE(202),
        [sym_fixed_pt_type] = STATE(198),
        [sym_template_type_spec] = STATE(142),
        [sym_sequence_type] = STATE(198),
        [sym_map_type] = STATE(198),
        [sym_bitset_dcl] = STATE(142),
        [sym_bitmask_dcl] = STATE(142),
        [sym_struct_forward_dcl] = STATE(142),
        [sym_struct_def] = STATE(142),
        [sym_enum_dcl] = STATE(142),
        [sym_enum_anno] = STATE(443),
        [sym_union_forward_dcl] = STATE(142),
        [sym_union_def] = STATE(142),
        [sym_data_representation] = STATE(250),
        [sym_type_declarator] = STATE(406),
        [sym_comment] = STATE(10),
        [aux_sym_struct_def_repeat1] = STATE(157),
        [anon_sym_short] = ACTIONS(49),
        [anon_sym_int16] = ACTIONS(49),
        [anon_sym_long] = ACTIONS(51),
        [anon_sym_int32] = ACTIONS(51),
        [anon_sym_longlong] = ACTIONS(53),
        [anon_sym_int64] = ACTIONS(55),
        [sym_unsigned_tiny_int] = ACTIONS(57),
        [sym_boolean_type] = ACTIONS(59),
        [anon_sym_fixed] = ACTIONS(61),
        [sym_octet_type] = ACTIONS(59),
        [sym_signed_tiny_int] = ACTIONS(63),
        [anon_sym_unsignedshort] = ACTIONS(65),
        [anon_sym_uint16] = ACTIONS(67),
        [anon_sym_unsignedlong] = ACTIONS(69),
        [anon_sym_uint32] = ACTIONS(69),
        [anon_sym_unsignedlonglong] = ACTIONS(71),
        [anon_sym_uint64] = ACTIONS(73),
        [anon_sym_float] = ACTIONS(75),
        [anon_sym_double] = ACTIONS(75),
        [anon_sym_longdouble] = ACTIONS(77),
        [anon_sym_char] = ACTIONS(79),
        [anon_sym_wchar] = ACTIONS(79),
        [anon_sym_COLON_COLON] = ACTIONS(81),
        [anon_sym_string] = ACTIONS(83),
        [anon_sym_wstring] = ACTIONS(83),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_sequence] = ACTIONS(87),
        [anon_sym_map] = ACTIONS(89),
        [anon_sym_bitset] = ACTIONS(101),
        [anon_sym_bitmask] = ACTIONS(103),
        [anon_sym_struct] = ACTIONS(105),
        [anon_sym_union] = ACTIONS(107),
        [anon_sym_enum] = ACTIONS(109),
        [anon_sym_ATignore_literal_names] = ACTIONS(33),
        [sym_final] = ACTIONS(45),
        [anon_sym_ATdata_representation] = ACTIONS(47),
        [sym_identifier] = ACTIONS(117),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [11] = {
        [sym_signed_short_int] = STATE(179),
        [sym_signed_long_int] = STATE(179),
        [sym_signed_longlong_int] = STATE(179),
        [sym_unsigned_int] = STATE(158),
        [sym_integer_type] = STATE(202),
        [sym_signed_int] = STATE(158),
        [sym_unsigned_short_int] = STATE(178),
        [sym_unsigned_long_int] = STATE(178),
        [sym_unsigned_longlong_int] = STATE(178),
        [sym_floating_pt_type] = STATE(202),
        [sym_char_type] = STATE(202),
        [sym_scoped_name] = STATE(199),
        [sym_string_type] = STATE(198),
        [sym_type_spec] = STATE(144),
        [sym_simple_type_spec] = STATE(234),
        [sym_base_type_spec] = STATE(197),
        [sym_any_type] = STATE(202),
        [sym_fixed_pt_type] = STATE(198),
        [sym_template_type_spec] = STATE(234),
        [sym_sequence_type] = STATE(198),
        [sym_map_type] = STATE(198),
        [sym_member] = STATE(54),
        [sym_hashid] = STATE(58),
        [sym_try_construct] = STATE(58),
        [sym_struct_modifier] = STATE(56),
        [sym_comment] = STATE(11),
        [aux_sym_except_dcl_repeat1] = STATE(11),
        [aux_sym_member_repeat1] = STATE(22),
        [anon_sym_short] = ACTIONS(258),
        [anon_sym_int16] = ACTIONS(258),
        [anon_sym_long] = ACTIONS(261),
        [anon_sym_int32] = ACTIONS(261),
        [anon_sym_longlong] = ACTIONS(264),
        [anon_sym_int64] = ACTIONS(267),
        [sym_unsigned_tiny_int] = ACTIONS(270),
        [sym_boolean_type] = ACTIONS(273),
        [anon_sym_fixed] = ACTIONS(276),
        [sym_octet_type] = ACTIONS(273),
        [sym_signed_tiny_int] = ACTIONS(279),
        [anon_sym_unsignedshort] = ACTIONS(282),
        [anon_sym_uint16] = ACTIONS(285),
        [anon_sym_unsignedlong] = ACTIONS(288),
        [anon_sym_uint32] = ACTIONS(288),
        [anon_sym_unsignedlonglong] = ACTIONS(291),
        [anon_sym_uint64] = ACTIONS(294),
        [anon_sym_float] = ACTIONS(297),
        [anon_sym_double] = ACTIONS(297),
        [anon_sym_longdouble] = ACTIONS(300),
        [anon_sym_char] = ACTIONS(303),
        [anon_sym_wchar] = ACTIONS(303),
        [anon_sym_COLON_COLON] = ACTIONS(306),
        [anon_sym_string] = ACTIONS(309),
        [anon_sym_wstring] = ACTIONS(309),
        [anon_sym_any] = ACTIONS(312),
        [anon_sym_sequence] = ACTIONS(315),
        [anon_sym_map] = ACTIONS(318),
        [anon_sym_RBRACE] = ACTIONS(321),
        [sym_optional] = ACTIONS(323),
        [sym_key] = ACTIONS(323),
        [sym_must_understand] = ACTIONS(323),
        [sym_non_serialized] = ACTIONS(323),
        [sym_id] = ACTIONS(323),
        [sym_external] = ACTIONS(323),
        [anon_sym_AThashid] = ACTIONS(326),
        [anon_sym_ATtry_construct] = ACTIONS(329),
        [sym_identifier] = ACTIONS(332),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [12] = {
        [sym_signed_short_int] = STATE(179),
        [sym_signed_long_int] = STATE(179),
        [sym_signed_longlong_int] = STATE(179),
        [sym_unsigned_int] = STATE(158),
        [sym_integer_type] = STATE(202),
        [sym_signed_int] = STATE(158),
        [sym_unsigned_short_int] = STATE(178),
        [sym_unsigned_long_int] = STATE(178),
        [sym_unsigned_longlong_int] = STATE(178),
        [sym_floating_pt_type] = STATE(202),
        [sym_char_type] = STATE(202),
        [sym_scoped_name] = STATE(199),
        [sym_string_type] = STATE(198),
        [sym_type_spec] = STATE(144),
        [sym_simple_type_spec] = STATE(234),
        [sym_base_type_spec] = STATE(197),
        [sym_any_type] = STATE(202),
        [sym_fixed_pt_type] = STATE(198),
        [sym_template_type_spec] = STATE(234),
        [sym_sequence_type] = STATE(198),
        [sym_map_type] = STATE(198),
        [sym_member] = STATE(54),
        [sym_hashid] = STATE(58),
        [sym_try_construct] = STATE(58),
        [sym_struct_modifier] = STATE(56),
        [sym_comment] = STATE(12),
        [aux_sym_except_dcl_repeat1] = STATE(11),
        [aux_sym_member_repeat1] = STATE(22),
        [anon_sym_short] = ACTIONS(49),
        [anon_sym_int16] = ACTIONS(49),
        [anon_sym_long] = ACTIONS(51),
        [anon_sym_int32] = ACTIONS(51),
        [anon_sym_longlong] = ACTIONS(53),
        [anon_sym_int64] = ACTIONS(55),
        [sym_unsigned_tiny_int] = ACTIONS(57),
        [sym_boolean_type] = ACTIONS(59),
        [anon_sym_fixed] = ACTIONS(61),
        [sym_octet_type] = ACTIONS(59),
        [sym_signed_tiny_int] = ACTIONS(63),
        [anon_sym_unsignedshort] = ACTIONS(65),
        [anon_sym_uint16] = ACTIONS(67),
        [anon_sym_unsignedlong] = ACTIONS(69),
        [anon_sym_uint32] = ACTIONS(69),
        [anon_sym_unsignedlonglong] = ACTIONS(71),
        [anon_sym_uint64] = ACTIONS(73),
        [anon_sym_float] = ACTIONS(75),
        [anon_sym_double] = ACTIONS(75),
        [anon_sym_longdouble] = ACTIONS(77),
        [anon_sym_char] = ACTIONS(79),
        [anon_sym_wchar] = ACTIONS(79),
        [anon_sym_COLON_COLON] = ACTIONS(81),
        [anon_sym_string] = ACTIONS(83),
        [anon_sym_wstring] = ACTIONS(83),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_sequence] = ACTIONS(87),
        [anon_sym_map] = ACTIONS(89),
        [anon_sym_RBRACE] = ACTIONS(335),
        [sym_optional] = ACTIONS(337),
        [sym_key] = ACTIONS(337),
        [sym_must_understand] = ACTIONS(337),
        [sym_non_serialized] = ACTIONS(337),
        [sym_id] = ACTIONS(337),
        [sym_external] = ACTIONS(337),
        [anon_sym_AThashid] = ACTIONS(339),
        [anon_sym_ATtry_construct] = ACTIONS(341),
        [sym_identifier] = ACTIONS(117),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [13] = {
        [sym_signed_short_int] = STATE(179),
        [sym_signed_long_int] = STATE(179),
        [sym_signed_longlong_int] = STATE(179),
        [sym_unsigned_int] = STATE(158),
        [sym_integer_type] = STATE(202),
        [sym_signed_int] = STATE(158),
        [sym_unsigned_short_int] = STATE(178),
        [sym_unsigned_long_int] = STATE(178),
        [sym_unsigned_longlong_int] = STATE(178),
        [sym_floating_pt_type] = STATE(202),
        [sym_char_type] = STATE(202),
        [sym_scoped_name] = STATE(199),
        [sym_string_type] = STATE(198),
        [sym_type_spec] = STATE(144),
        [sym_simple_type_spec] = STATE(234),
        [sym_base_type_spec] = STATE(197),
        [sym_any_type] = STATE(202),
        [sym_fixed_pt_type] = STATE(198),
        [sym_template_type_spec] = STATE(234),
        [sym_sequence_type] = STATE(198),
        [sym_map_type] = STATE(198),
        [sym_member] = STATE(54),
        [sym_hashid] = STATE(58),
        [sym_try_construct] = STATE(58),
        [sym_struct_modifier] = STATE(56),
        [sym_comment] = STATE(13),
        [aux_sym_except_dcl_repeat1] = STATE(11),
        [aux_sym_member_repeat1] = STATE(22),
        [anon_sym_short] = ACTIONS(49),
        [anon_sym_int16] = ACTIONS(49),
        [anon_sym_long] = ACTIONS(51),
        [anon_sym_int32] = ACTIONS(51),
        [anon_sym_longlong] = ACTIONS(53),
        [anon_sym_int64] = ACTIONS(55),
        [sym_unsigned_tiny_int] = ACTIONS(57),
        [sym_boolean_type] = ACTIONS(59),
        [anon_sym_fixed] = ACTIONS(61),
        [sym_octet_type] = ACTIONS(59),
        [sym_signed_tiny_int] = ACTIONS(63),
        [anon_sym_unsignedshort] = ACTIONS(65),
        [anon_sym_uint16] = ACTIONS(67),
        [anon_sym_unsignedlong] = ACTIONS(69),
        [anon_sym_uint32] = ACTIONS(69),
        [anon_sym_unsignedlonglong] = ACTIONS(71),
        [anon_sym_uint64] = ACTIONS(73),
        [anon_sym_float] = ACTIONS(75),
        [anon_sym_double] = ACTIONS(75),
        [anon_sym_longdouble] = ACTIONS(77),
        [anon_sym_char] = ACTIONS(79),
        [anon_sym_wchar] = ACTIONS(79),
        [anon_sym_COLON_COLON] = ACTIONS(81),
        [anon_sym_string] = ACTIONS(83),
        [anon_sym_wstring] = ACTIONS(83),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_sequence] = ACTIONS(87),
        [anon_sym_map] = ACTIONS(89),
        [anon_sym_RBRACE] = ACTIONS(343),
        [sym_optional] = ACTIONS(337),
        [sym_key] = ACTIONS(337),
        [sym_must_understand] = ACTIONS(337),
        [sym_non_serialized] = ACTIONS(337),
        [sym_id] = ACTIONS(337),
        [sym_external] = ACTIONS(337),
        [anon_sym_AThashid] = ACTIONS(339),
        [anon_sym_ATtry_construct] = ACTIONS(341),
        [sym_identifier] = ACTIONS(117),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [14] = {
        [sym_signed_short_int] = STATE(179),
        [sym_signed_long_int] = STATE(179),
        [sym_signed_longlong_int] = STATE(179),
        [sym_unsigned_int] = STATE(158),
        [sym_integer_type] = STATE(202),
        [sym_signed_int] = STATE(158),
        [sym_unsigned_short_int] = STATE(178),
        [sym_unsigned_long_int] = STATE(178),
        [sym_unsigned_longlong_int] = STATE(178),
        [sym_floating_pt_type] = STATE(202),
        [sym_char_type] = STATE(202),
        [sym_scoped_name] = STATE(199),
        [sym_string_type] = STATE(198),
        [sym_type_spec] = STATE(144),
        [sym_simple_type_spec] = STATE(234),
        [sym_base_type_spec] = STATE(197),
        [sym_any_type] = STATE(202),
        [sym_fixed_pt_type] = STATE(198),
        [sym_template_type_spec] = STATE(234),
        [sym_sequence_type] = STATE(198),
        [sym_map_type] = STATE(198),
        [sym_member] = STATE(54),
        [sym_hashid] = STATE(58),
        [sym_try_construct] = STATE(58),
        [sym_struct_modifier] = STATE(56),
        [sym_comment] = STATE(14),
        [aux_sym_except_dcl_repeat1] = STATE(16),
        [aux_sym_member_repeat1] = STATE(22),
        [anon_sym_short] = ACTIONS(49),
        [anon_sym_int16] = ACTIONS(49),
        [anon_sym_long] = ACTIONS(51),
        [anon_sym_int32] = ACTIONS(51),
        [anon_sym_longlong] = ACTIONS(53),
        [anon_sym_int64] = ACTIONS(55),
        [sym_unsigned_tiny_int] = ACTIONS(57),
        [sym_boolean_type] = ACTIONS(59),
        [anon_sym_fixed] = ACTIONS(61),
        [sym_octet_type] = ACTIONS(59),
        [sym_signed_tiny_int] = ACTIONS(63),
        [anon_sym_unsignedshort] = ACTIONS(65),
        [anon_sym_uint16] = ACTIONS(67),
        [anon_sym_unsignedlong] = ACTIONS(69),
        [anon_sym_uint32] = ACTIONS(69),
        [anon_sym_unsignedlonglong] = ACTIONS(71),
        [anon_sym_uint64] = ACTIONS(73),
        [anon_sym_float] = ACTIONS(75),
        [anon_sym_double] = ACTIONS(75),
        [anon_sym_longdouble] = ACTIONS(77),
        [anon_sym_char] = ACTIONS(79),
        [anon_sym_wchar] = ACTIONS(79),
        [anon_sym_COLON_COLON] = ACTIONS(81),
        [anon_sym_string] = ACTIONS(83),
        [anon_sym_wstring] = ACTIONS(83),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_sequence] = ACTIONS(87),
        [anon_sym_map] = ACTIONS(89),
        [anon_sym_RBRACE] = ACTIONS(345),
        [sym_optional] = ACTIONS(337),
        [sym_key] = ACTIONS(337),
        [sym_must_understand] = ACTIONS(337),
        [sym_non_serialized] = ACTIONS(337),
        [sym_id] = ACTIONS(337),
        [sym_external] = ACTIONS(337),
        [anon_sym_AThashid] = ACTIONS(339),
        [anon_sym_ATtry_construct] = ACTIONS(341),
        [sym_identifier] = ACTIONS(117),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [15] = {
        [sym_signed_short_int] = STATE(179),
        [sym_signed_long_int] = STATE(179),
        [sym_signed_longlong_int] = STATE(179),
        [sym_unsigned_int] = STATE(158),
        [sym_integer_type] = STATE(202),
        [sym_signed_int] = STATE(158),
        [sym_unsigned_short_int] = STATE(178),
        [sym_unsigned_long_int] = STATE(178),
        [sym_unsigned_longlong_int] = STATE(178),
        [sym_floating_pt_type] = STATE(202),
        [sym_char_type] = STATE(202),
        [sym_scoped_name] = STATE(199),
        [sym_string_type] = STATE(198),
        [sym_type_spec] = STATE(144),
        [sym_simple_type_spec] = STATE(234),
        [sym_base_type_spec] = STATE(197),
        [sym_any_type] = STATE(202),
        [sym_fixed_pt_type] = STATE(198),
        [sym_template_type_spec] = STATE(234),
        [sym_sequence_type] = STATE(198),
        [sym_map_type] = STATE(198),
        [sym_member] = STATE(54),
        [sym_hashid] = STATE(58),
        [sym_try_construct] = STATE(58),
        [sym_struct_modifier] = STATE(56),
        [sym_comment] = STATE(15),
        [aux_sym_except_dcl_repeat1] = STATE(12),
        [aux_sym_member_repeat1] = STATE(22),
        [anon_sym_short] = ACTIONS(49),
        [anon_sym_int16] = ACTIONS(49),
        [anon_sym_long] = ACTIONS(51),
        [anon_sym_int32] = ACTIONS(51),
        [anon_sym_longlong] = ACTIONS(53),
        [anon_sym_int64] = ACTIONS(55),
        [sym_unsigned_tiny_int] = ACTIONS(57),
        [sym_boolean_type] = ACTIONS(59),
        [anon_sym_fixed] = ACTIONS(61),
        [sym_octet_type] = ACTIONS(59),
        [sym_signed_tiny_int] = ACTIONS(63),
        [anon_sym_unsignedshort] = ACTIONS(65),
        [anon_sym_uint16] = ACTIONS(67),
        [anon_sym_unsignedlong] = ACTIONS(69),
        [anon_sym_uint32] = ACTIONS(69),
        [anon_sym_unsignedlonglong] = ACTIONS(71),
        [anon_sym_uint64] = ACTIONS(73),
        [anon_sym_float] = ACTIONS(75),
        [anon_sym_double] = ACTIONS(75),
        [anon_sym_longdouble] = ACTIONS(77),
        [anon_sym_char] = ACTIONS(79),
        [anon_sym_wchar] = ACTIONS(79),
        [anon_sym_COLON_COLON] = ACTIONS(81),
        [anon_sym_string] = ACTIONS(83),
        [anon_sym_wstring] = ACTIONS(83),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_sequence] = ACTIONS(87),
        [anon_sym_map] = ACTIONS(89),
        [anon_sym_RBRACE] = ACTIONS(347),
        [sym_optional] = ACTIONS(337),
        [sym_key] = ACTIONS(337),
        [sym_must_understand] = ACTIONS(337),
        [sym_non_serialized] = ACTIONS(337),
        [sym_id] = ACTIONS(337),
        [sym_external] = ACTIONS(337),
        [anon_sym_AThashid] = ACTIONS(339),
        [anon_sym_ATtry_construct] = ACTIONS(341),
        [sym_identifier] = ACTIONS(117),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [16] = {
        [sym_signed_short_int] = STATE(179),
        [sym_signed_long_int] = STATE(179),
        [sym_signed_longlong_int] = STATE(179),
        [sym_unsigned_int] = STATE(158),
        [sym_integer_type] = STATE(202),
        [sym_signed_int] = STATE(158),
        [sym_unsigned_short_int] = STATE(178),
        [sym_unsigned_long_int] = STATE(178),
        [sym_unsigned_longlong_int] = STATE(178),
        [sym_floating_pt_type] = STATE(202),
        [sym_char_type] = STATE(202),
        [sym_scoped_name] = STATE(199),
        [sym_string_type] = STATE(198),
        [sym_type_spec] = STATE(144),
        [sym_simple_type_spec] = STATE(234),
        [sym_base_type_spec] = STATE(197),
        [sym_any_type] = STATE(202),
        [sym_fixed_pt_type] = STATE(198),
        [sym_template_type_spec] = STATE(234),
        [sym_sequence_type] = STATE(198),
        [sym_map_type] = STATE(198),
        [sym_member] = STATE(54),
        [sym_hashid] = STATE(58),
        [sym_try_construct] = STATE(58),
        [sym_struct_modifier] = STATE(56),
        [sym_comment] = STATE(16),
        [aux_sym_except_dcl_repeat1] = STATE(11),
        [aux_sym_member_repeat1] = STATE(22),
        [anon_sym_short] = ACTIONS(49),
        [anon_sym_int16] = ACTIONS(49),
        [anon_sym_long] = ACTIONS(51),
        [anon_sym_int32] = ACTIONS(51),
        [anon_sym_longlong] = ACTIONS(53),
        [anon_sym_int64] = ACTIONS(55),
        [sym_unsigned_tiny_int] = ACTIONS(57),
        [sym_boolean_type] = ACTIONS(59),
        [anon_sym_fixed] = ACTIONS(61),
        [sym_octet_type] = ACTIONS(59),
        [sym_signed_tiny_int] = ACTIONS(63),
        [anon_sym_unsignedshort] = ACTIONS(65),
        [anon_sym_uint16] = ACTIONS(67),
        [anon_sym_unsignedlong] = ACTIONS(69),
        [anon_sym_uint32] = ACTIONS(69),
        [anon_sym_unsignedlonglong] = ACTIONS(71),
        [anon_sym_uint64] = ACTIONS(73),
        [anon_sym_float] = ACTIONS(75),
        [anon_sym_double] = ACTIONS(75),
        [anon_sym_longdouble] = ACTIONS(77),
        [anon_sym_char] = ACTIONS(79),
        [anon_sym_wchar] = ACTIONS(79),
        [anon_sym_COLON_COLON] = ACTIONS(81),
        [anon_sym_string] = ACTIONS(83),
        [anon_sym_wstring] = ACTIONS(83),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_sequence] = ACTIONS(87),
        [anon_sym_map] = ACTIONS(89),
        [anon_sym_RBRACE] = ACTIONS(349),
        [sym_optional] = ACTIONS(337),
        [sym_key] = ACTIONS(337),
        [sym_must_understand] = ACTIONS(337),
        [sym_non_serialized] = ACTIONS(337),
        [sym_id] = ACTIONS(337),
        [sym_external] = ACTIONS(337),
        [anon_sym_AThashid] = ACTIONS(339),
        [anon_sym_ATtry_construct] = ACTIONS(341),
        [sym_identifier] = ACTIONS(117),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [17] = {
        [sym_signed_short_int] = STATE(179),
        [sym_signed_long_int] = STATE(179),
        [sym_signed_longlong_int] = STATE(179),
        [sym_unsigned_int] = STATE(158),
        [sym_integer_type] = STATE(202),
        [sym_signed_int] = STATE(158),
        [sym_unsigned_short_int] = STATE(178),
        [sym_unsigned_long_int] = STATE(178),
        [sym_unsigned_longlong_int] = STATE(178),
        [sym_floating_pt_type] = STATE(202),
        [sym_char_type] = STATE(202),
        [sym_scoped_name] = STATE(199),
        [sym_string_type] = STATE(198),
        [sym_type_spec] = STATE(144),
        [sym_simple_type_spec] = STATE(234),
        [sym_base_type_spec] = STATE(197),
        [sym_any_type] = STATE(202),
        [sym_fixed_pt_type] = STATE(198),
        [sym_template_type_spec] = STATE(234),
        [sym_sequence_type] = STATE(198),
        [sym_map_type] = STATE(198),
        [sym_member] = STATE(54),
        [sym_hashid] = STATE(58),
        [sym_try_construct] = STATE(58),
        [sym_struct_modifier] = STATE(56),
        [sym_comment] = STATE(17),
        [aux_sym_except_dcl_repeat1] = STATE(11),
        [aux_sym_member_repeat1] = STATE(22),
        [anon_sym_short] = ACTIONS(49),
        [anon_sym_int16] = ACTIONS(49),
        [anon_sym_long] = ACTIONS(51),
        [anon_sym_int32] = ACTIONS(51),
        [anon_sym_longlong] = ACTIONS(53),
        [anon_sym_int64] = ACTIONS(55),
        [sym_unsigned_tiny_int] = ACTIONS(57),
        [sym_boolean_type] = ACTIONS(59),
        [anon_sym_fixed] = ACTIONS(61),
        [sym_octet_type] = ACTIONS(59),
        [sym_signed_tiny_int] = ACTIONS(63),
        [anon_sym_unsignedshort] = ACTIONS(65),
        [anon_sym_uint16] = ACTIONS(67),
        [anon_sym_unsignedlong] = ACTIONS(69),
        [anon_sym_uint32] = ACTIONS(69),
        [anon_sym_unsignedlonglong] = ACTIONS(71),
        [anon_sym_uint64] = ACTIONS(73),
        [anon_sym_float] = ACTIONS(75),
        [anon_sym_double] = ACTIONS(75),
        [anon_sym_longdouble] = ACTIONS(77),
        [anon_sym_char] = ACTIONS(79),
        [anon_sym_wchar] = ACTIONS(79),
        [anon_sym_COLON_COLON] = ACTIONS(81),
        [anon_sym_string] = ACTIONS(83),
        [anon_sym_wstring] = ACTIONS(83),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_sequence] = ACTIONS(87),
        [anon_sym_map] = ACTIONS(89),
        [anon_sym_RBRACE] = ACTIONS(351),
        [sym_optional] = ACTIONS(337),
        [sym_key] = ACTIONS(337),
        [sym_must_understand] = ACTIONS(337),
        [sym_non_serialized] = ACTIONS(337),
        [sym_id] = ACTIONS(337),
        [sym_external] = ACTIONS(337),
        [anon_sym_AThashid] = ACTIONS(339),
        [anon_sym_ATtry_construct] = ACTIONS(341),
        [sym_identifier] = ACTIONS(117),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [18] = {
        [sym_signed_short_int] = STATE(179),
        [sym_signed_long_int] = STATE(179),
        [sym_signed_longlong_int] = STATE(179),
        [sym_unsigned_int] = STATE(158),
        [sym_integer_type] = STATE(202),
        [sym_signed_int] = STATE(158),
        [sym_unsigned_short_int] = STATE(178),
        [sym_unsigned_long_int] = STATE(178),
        [sym_unsigned_longlong_int] = STATE(178),
        [sym_floating_pt_type] = STATE(202),
        [sym_char_type] = STATE(202),
        [sym_scoped_name] = STATE(199),
        [sym_string_type] = STATE(198),
        [sym_type_spec] = STATE(144),
        [sym_simple_type_spec] = STATE(234),
        [sym_base_type_spec] = STATE(197),
        [sym_any_type] = STATE(202),
        [sym_fixed_pt_type] = STATE(198),
        [sym_template_type_spec] = STATE(234),
        [sym_sequence_type] = STATE(198),
        [sym_map_type] = STATE(198),
        [sym_member] = STATE(54),
        [sym_hashid] = STATE(58),
        [sym_try_construct] = STATE(58),
        [sym_struct_modifier] = STATE(56),
        [sym_comment] = STATE(18),
        [aux_sym_except_dcl_repeat1] = STATE(19),
        [aux_sym_member_repeat1] = STATE(22),
        [anon_sym_short] = ACTIONS(49),
        [anon_sym_int16] = ACTIONS(49),
        [anon_sym_long] = ACTIONS(51),
        [anon_sym_int32] = ACTIONS(51),
        [anon_sym_longlong] = ACTIONS(53),
        [anon_sym_int64] = ACTIONS(55),
        [sym_unsigned_tiny_int] = ACTIONS(57),
        [sym_boolean_type] = ACTIONS(59),
        [anon_sym_fixed] = ACTIONS(61),
        [sym_octet_type] = ACTIONS(59),
        [sym_signed_tiny_int] = ACTIONS(63),
        [anon_sym_unsignedshort] = ACTIONS(65),
        [anon_sym_uint16] = ACTIONS(67),
        [anon_sym_unsignedlong] = ACTIONS(69),
        [anon_sym_uint32] = ACTIONS(69),
        [anon_sym_unsignedlonglong] = ACTIONS(71),
        [anon_sym_uint64] = ACTIONS(73),
        [anon_sym_float] = ACTIONS(75),
        [anon_sym_double] = ACTIONS(75),
        [anon_sym_longdouble] = ACTIONS(77),
        [anon_sym_char] = ACTIONS(79),
        [anon_sym_wchar] = ACTIONS(79),
        [anon_sym_COLON_COLON] = ACTIONS(81),
        [anon_sym_string] = ACTIONS(83),
        [anon_sym_wstring] = ACTIONS(83),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_sequence] = ACTIONS(87),
        [anon_sym_map] = ACTIONS(89),
        [anon_sym_RBRACE] = ACTIONS(353),
        [sym_optional] = ACTIONS(337),
        [sym_key] = ACTIONS(337),
        [sym_must_understand] = ACTIONS(337),
        [sym_non_serialized] = ACTIONS(337),
        [sym_id] = ACTIONS(337),
        [sym_external] = ACTIONS(337),
        [anon_sym_AThashid] = ACTIONS(339),
        [anon_sym_ATtry_construct] = ACTIONS(341),
        [sym_identifier] = ACTIONS(117),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [19] = {
        [sym_signed_short_int] = STATE(179),
        [sym_signed_long_int] = STATE(179),
        [sym_signed_longlong_int] = STATE(179),
        [sym_unsigned_int] = STATE(158),
        [sym_integer_type] = STATE(202),
        [sym_signed_int] = STATE(158),
        [sym_unsigned_short_int] = STATE(178),
        [sym_unsigned_long_int] = STATE(178),
        [sym_unsigned_longlong_int] = STATE(178),
        [sym_floating_pt_type] = STATE(202),
        [sym_char_type] = STATE(202),
        [sym_scoped_name] = STATE(199),
        [sym_string_type] = STATE(198),
        [sym_type_spec] = STATE(144),
        [sym_simple_type_spec] = STATE(234),
        [sym_base_type_spec] = STATE(197),
        [sym_any_type] = STATE(202),
        [sym_fixed_pt_type] = STATE(198),
        [sym_template_type_spec] = STATE(234),
        [sym_sequence_type] = STATE(198),
        [sym_map_type] = STATE(198),
        [sym_member] = STATE(54),
        [sym_hashid] = STATE(58),
        [sym_try_construct] = STATE(58),
        [sym_struct_modifier] = STATE(56),
        [sym_comment] = STATE(19),
        [aux_sym_except_dcl_repeat1] = STATE(11),
        [aux_sym_member_repeat1] = STATE(22),
        [anon_sym_short] = ACTIONS(49),
        [anon_sym_int16] = ACTIONS(49),
        [anon_sym_long] = ACTIONS(51),
        [anon_sym_int32] = ACTIONS(51),
        [anon_sym_longlong] = ACTIONS(53),
        [anon_sym_int64] = ACTIONS(55),
        [sym_unsigned_tiny_int] = ACTIONS(57),
        [sym_boolean_type] = ACTIONS(59),
        [anon_sym_fixed] = ACTIONS(61),
        [sym_octet_type] = ACTIONS(59),
        [sym_signed_tiny_int] = ACTIONS(63),
        [anon_sym_unsignedshort] = ACTIONS(65),
        [anon_sym_uint16] = ACTIONS(67),
        [anon_sym_unsignedlong] = ACTIONS(69),
        [anon_sym_uint32] = ACTIONS(69),
        [anon_sym_unsignedlonglong] = ACTIONS(71),
        [anon_sym_uint64] = ACTIONS(73),
        [anon_sym_float] = ACTIONS(75),
        [anon_sym_double] = ACTIONS(75),
        [anon_sym_longdouble] = ACTIONS(77),
        [anon_sym_char] = ACTIONS(79),
        [anon_sym_wchar] = ACTIONS(79),
        [anon_sym_COLON_COLON] = ACTIONS(81),
        [anon_sym_string] = ACTIONS(83),
        [anon_sym_wstring] = ACTIONS(83),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_sequence] = ACTIONS(87),
        [anon_sym_map] = ACTIONS(89),
        [anon_sym_RBRACE] = ACTIONS(355),
        [sym_optional] = ACTIONS(337),
        [sym_key] = ACTIONS(337),
        [sym_must_understand] = ACTIONS(337),
        [sym_non_serialized] = ACTIONS(337),
        [sym_id] = ACTIONS(337),
        [sym_external] = ACTIONS(337),
        [anon_sym_AThashid] = ACTIONS(339),
        [anon_sym_ATtry_construct] = ACTIONS(341),
        [sym_identifier] = ACTIONS(117),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [20] = {
        [sym_signed_short_int] = STATE(179),
        [sym_signed_long_int] = STATE(179),
        [sym_signed_longlong_int] = STATE(179),
        [sym_unsigned_int] = STATE(158),
        [sym_integer_type] = STATE(202),
        [sym_signed_int] = STATE(158),
        [sym_unsigned_short_int] = STATE(178),
        [sym_unsigned_long_int] = STATE(178),
        [sym_unsigned_longlong_int] = STATE(178),
        [sym_floating_pt_type] = STATE(202),
        [sym_char_type] = STATE(202),
        [sym_scoped_name] = STATE(199),
        [sym_string_type] = STATE(198),
        [sym_type_spec] = STATE(144),
        [sym_simple_type_spec] = STATE(234),
        [sym_base_type_spec] = STATE(197),
        [sym_any_type] = STATE(202),
        [sym_fixed_pt_type] = STATE(198),
        [sym_template_type_spec] = STATE(234),
        [sym_sequence_type] = STATE(198),
        [sym_map_type] = STATE(198),
        [sym_member] = STATE(54),
        [sym_hashid] = STATE(58),
        [sym_try_construct] = STATE(58),
        [sym_struct_modifier] = STATE(56),
        [sym_comment] = STATE(20),
        [aux_sym_except_dcl_repeat1] = STATE(17),
        [aux_sym_member_repeat1] = STATE(22),
        [anon_sym_short] = ACTIONS(49),
        [anon_sym_int16] = ACTIONS(49),
        [anon_sym_long] = ACTIONS(51),
        [anon_sym_int32] = ACTIONS(51),
        [anon_sym_longlong] = ACTIONS(53),
        [anon_sym_int64] = ACTIONS(55),
        [sym_unsigned_tiny_int] = ACTIONS(57),
        [sym_boolean_type] = ACTIONS(59),
        [anon_sym_fixed] = ACTIONS(61),
        [sym_octet_type] = ACTIONS(59),
        [sym_signed_tiny_int] = ACTIONS(63),
        [anon_sym_unsignedshort] = ACTIONS(65),
        [anon_sym_uint16] = ACTIONS(67),
        [anon_sym_unsignedlong] = ACTIONS(69),
        [anon_sym_uint32] = ACTIONS(69),
        [anon_sym_unsignedlonglong] = ACTIONS(71),
        [anon_sym_uint64] = ACTIONS(73),
        [anon_sym_float] = ACTIONS(75),
        [anon_sym_double] = ACTIONS(75),
        [anon_sym_longdouble] = ACTIONS(77),
        [anon_sym_char] = ACTIONS(79),
        [anon_sym_wchar] = ACTIONS(79),
        [anon_sym_COLON_COLON] = ACTIONS(81),
        [anon_sym_string] = ACTIONS(83),
        [anon_sym_wstring] = ACTIONS(83),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_sequence] = ACTIONS(87),
        [anon_sym_map] = ACTIONS(89),
        [anon_sym_RBRACE] = ACTIONS(357),
        [sym_optional] = ACTIONS(337),
        [sym_key] = ACTIONS(337),
        [sym_must_understand] = ACTIONS(337),
        [sym_non_serialized] = ACTIONS(337),
        [sym_id] = ACTIONS(337),
        [sym_external] = ACTIONS(337),
        [anon_sym_AThashid] = ACTIONS(339),
        [anon_sym_ATtry_construct] = ACTIONS(341),
        [sym_identifier] = ACTIONS(117),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [21] = {
        [sym_signed_short_int] = STATE(179),
        [sym_signed_long_int] = STATE(179),
        [sym_signed_longlong_int] = STATE(179),
        [sym_unsigned_int] = STATE(158),
        [sym_integer_type] = STATE(202),
        [sym_signed_int] = STATE(158),
        [sym_unsigned_short_int] = STATE(178),
        [sym_unsigned_long_int] = STATE(178),
        [sym_unsigned_longlong_int] = STATE(178),
        [sym_floating_pt_type] = STATE(202),
        [sym_char_type] = STATE(202),
        [sym_scoped_name] = STATE(199),
        [sym_string_type] = STATE(198),
        [sym_type_spec] = STATE(144),
        [sym_simple_type_spec] = STATE(234),
        [sym_base_type_spec] = STATE(197),
        [sym_any_type] = STATE(202),
        [sym_fixed_pt_type] = STATE(198),
        [sym_template_type_spec] = STATE(234),
        [sym_sequence_type] = STATE(198),
        [sym_map_type] = STATE(198),
        [sym_member] = STATE(54),
        [sym_hashid] = STATE(58),
        [sym_try_construct] = STATE(58),
        [sym_struct_modifier] = STATE(56),
        [sym_comment] = STATE(21),
        [aux_sym_except_dcl_repeat1] = STATE(13),
        [aux_sym_member_repeat1] = STATE(22),
        [anon_sym_short] = ACTIONS(49),
        [anon_sym_int16] = ACTIONS(49),
        [anon_sym_long] = ACTIONS(51),
        [anon_sym_int32] = ACTIONS(51),
        [anon_sym_longlong] = ACTIONS(53),
        [anon_sym_int64] = ACTIONS(55),
        [sym_unsigned_tiny_int] = ACTIONS(57),
        [sym_boolean_type] = ACTIONS(59),
        [anon_sym_fixed] = ACTIONS(61),
        [sym_octet_type] = ACTIONS(59),
        [sym_signed_tiny_int] = ACTIONS(63),
        [anon_sym_unsignedshort] = ACTIONS(65),
        [anon_sym_uint16] = ACTIONS(67),
        [anon_sym_unsignedlong] = ACTIONS(69),
        [anon_sym_uint32] = ACTIONS(69),
        [anon_sym_unsignedlonglong] = ACTIONS(71),
        [anon_sym_uint64] = ACTIONS(73),
        [anon_sym_float] = ACTIONS(75),
        [anon_sym_double] = ACTIONS(75),
        [anon_sym_longdouble] = ACTIONS(77),
        [anon_sym_char] = ACTIONS(79),
        [anon_sym_wchar] = ACTIONS(79),
        [anon_sym_COLON_COLON] = ACTIONS(81),
        [anon_sym_string] = ACTIONS(83),
        [anon_sym_wstring] = ACTIONS(83),
        [anon_sym_any] = ACTIONS(85),
        [anon_sym_sequence] = ACTIONS(87),
        [anon_sym_map] = ACTIONS(89),
        [anon_sym_RBRACE] = ACTIONS(349),
        [sym_optional] = ACTIONS(337),
        [sym_key] = ACTIONS(337),
        [sym_must_understand] = ACTIONS(337),
        [sym_non_serialized] = ACTIONS(337),
        [sym_id] = ACTIONS(337),
        [sym_external] = ACTIONS(337),
        [anon_sym_AThashid] = ACTIONS(339),
        [anon_sym_ATtry_construct] = ACTIONS(341),
        [sym_identifier] = ACTIONS(117),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
};

static const uint16_t ts_small_parse_table[] = {
    [0] = 39,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(53),
    1,
    anon_sym_longlong,
    ACTIONS(55),
    1,
    anon_sym_int64,
    ACTIONS(57),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(61),
    1,
    anon_sym_fixed,
    ACTIONS(63),
    1,
    sym_signed_tiny_int,
    ACTIONS(65),
    1,
    anon_sym_unsignedshort,
    ACTIONS(67),
    1,
    anon_sym_uint16,
    ACTIONS(71),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(73),
    1,
    anon_sym_uint64,
    ACTIONS(77),
    1,
    anon_sym_longdouble,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(85),
    1,
    anon_sym_any,
    ACTIONS(87),
    1,
    anon_sym_sequence,
    ACTIONS(89),
    1,
    anon_sym_map,
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(339),
    1,
    anon_sym_AThashid,
    ACTIONS(341),
    1,
    anon_sym_ATtry_construct,
    STATE(22),
    1,
    sym_comment,
    STATE(47),
    1,
    aux_sym_member_repeat1,
    STATE(56),
    1,
    sym_struct_modifier,
    STATE(143),
    1,
    sym_type_spec,
    STATE(197),
    1,
    sym_base_type_spec,
    STATE(199),
    1,
    sym_scoped_name,
    ACTIONS(49),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(51),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(59),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(69),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(75),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(79),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(83),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(58),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(158),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(234),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(178),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(179),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(198),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(202),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    ACTIONS(337),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    [143] = 40,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(33),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(53),
    1,
    anon_sym_longlong,
    ACTIONS(55),
    1,
    anon_sym_int64,
    ACTIONS(57),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(63),
    1,
    sym_signed_tiny_int,
    ACTIONS(65),
    1,
    anon_sym_unsignedshort,
    ACTIONS(67),
    1,
    anon_sym_uint16,
    ACTIONS(71),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(73),
    1,
    anon_sym_uint64,
    ACTIONS(77),
    1,
    anon_sym_longdouble,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(87),
    1,
    anon_sym_sequence,
    ACTIONS(109),
    1,
    anon_sym_enum,
    ACTIONS(111),
    1,
    anon_sym_const,
    ACTIONS(115),
    1,
    anon_sym_typedef,
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(361),
    1,
    anon_sym_fixed,
    ACTIONS(363),
    1,
    anon_sym_any,
    ACTIONS(365),
    1,
    anon_sym_RBRACE,
    STATE(23),
    1,
    sym_comment,
    STATE(24),
    1,
    aux_sym_annotation_dcl_repeat1,
    STATE(59),
    1,
    sym_annotation_body,
    STATE(62),
    1,
    sym_annotation_member,
    STATE(271),
    1,
    sym_annotation_member_type,
    STATE(311),
    1,
    sym_scoped_name,
    STATE(443),
    1,
    sym_enum_anno,
    ACTIONS(49),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(51),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(69),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(75),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(79),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(83),
    2,
    anon_sym_string,
    anon_sym_wstring,
    ACTIONS(359),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(158),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(356),
    2,
    sym_any_const_type,
    sym_const_type,
    STATE(178),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(179),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(355),
    3,
    sym_enum_dcl,
    sym_typedef_dcl,
    sym_const_dcl,
    STATE(421),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [284] = 39,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(373),
    1,
    anon_sym_longlong,
    ACTIONS(376),
    1,
    anon_sym_int64,
    ACTIONS(379),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(385),
    1,
    anon_sym_fixed,
    ACTIONS(388),
    1,
    sym_signed_tiny_int,
    ACTIONS(391),
    1,
    anon_sym_unsignedshort,
    ACTIONS(394),
    1,
    anon_sym_uint16,
    ACTIONS(400),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(403),
    1,
    anon_sym_uint64,
    ACTIONS(409),
    1,
    anon_sym_longdouble,
    ACTIONS(415),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(421),
    1,
    anon_sym_any,
    ACTIONS(424),
    1,
    anon_sym_sequence,
    ACTIONS(427),
    1,
    anon_sym_RBRACE,
    ACTIONS(429),
    1,
    anon_sym_enum,
    ACTIONS(432),
    1,
    anon_sym_const,
    ACTIONS(435),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(438),
    1,
    anon_sym_typedef,
    ACTIONS(441),
    1,
    sym_identifier,
    STATE(59),
    1,
    sym_annotation_body,
    STATE(62),
    1,
    sym_annotation_member,
    STATE(271),
    1,
    sym_annotation_member_type,
    STATE(311),
    1,
    sym_scoped_name,
    STATE(443),
    1,
    sym_enum_anno,
    ACTIONS(367),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(370),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(382),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(397),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(406),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(412),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(418),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(24),
    2,
    sym_comment,
    aux_sym_annotation_dcl_repeat1,
    STATE(158),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(356),
    2,
    sym_any_const_type,
    sym_const_type,
    STATE(178),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(179),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(355),
    3,
    sym_enum_dcl,
    sym_typedef_dcl,
    sym_const_dcl,
    STATE(421),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [423] = 40,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(33),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(53),
    1,
    anon_sym_longlong,
    ACTIONS(55),
    1,
    anon_sym_int64,
    ACTIONS(57),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(63),
    1,
    sym_signed_tiny_int,
    ACTIONS(65),
    1,
    anon_sym_unsignedshort,
    ACTIONS(67),
    1,
    anon_sym_uint16,
    ACTIONS(71),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(73),
    1,
    anon_sym_uint64,
    ACTIONS(77),
    1,
    anon_sym_longdouble,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(87),
    1,
    anon_sym_sequence,
    ACTIONS(109),
    1,
    anon_sym_enum,
    ACTIONS(111),
    1,
    anon_sym_const,
    ACTIONS(115),
    1,
    anon_sym_typedef,
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(361),
    1,
    anon_sym_fixed,
    ACTIONS(363),
    1,
    anon_sym_any,
    ACTIONS(444),
    1,
    anon_sym_RBRACE,
    STATE(23),
    1,
    aux_sym_annotation_dcl_repeat1,
    STATE(25),
    1,
    sym_comment,
    STATE(59),
    1,
    sym_annotation_body,
    STATE(62),
    1,
    sym_annotation_member,
    STATE(271),
    1,
    sym_annotation_member_type,
    STATE(311),
    1,
    sym_scoped_name,
    STATE(443),
    1,
    sym_enum_anno,
    ACTIONS(49),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(51),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(69),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(75),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(79),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(83),
    2,
    anon_sym_string,
    anon_sym_wstring,
    ACTIONS(359),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(158),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(356),
    2,
    sym_any_const_type,
    sym_const_type,
    STATE(178),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(179),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(355),
    3,
    sym_enum_dcl,
    sym_typedef_dcl,
    sym_const_dcl,
    STATE(421),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [564] = 38,
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
    anon_sym_module,
    ACTIONS(23),
    1,
    anon_sym_struct,
    ACTIONS(25),
    1,
    anon_sym_union,
    ACTIONS(27),
    1,
    anon_sym_enum,
    ACTIONS(29),
    1,
    anon_sym_const,
    ACTIONS(31),
    1,
    anon_sym_native,
    ACTIONS(33),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(35),
    1,
    anon_sym_typedef,
    ACTIONS(39),
    1,
    sym_dds_service,
    ACTIONS(41),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(43),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(45),
    1,
    sym_final,
    ACTIONS(47),
    1,
    anon_sym_ATdata_representation,
    ACTIONS(446),
    1,
    anon_sym_RBRACE,
    ACTIONS(448),
    1,
    anon_sym_alias,
    ACTIONS(450),
    1,
    anon_sym_POUNDdefine,
    STATE(26),
    1,
    sym_comment,
    STATE(27),
    1,
    aux_sym_template_module_dcl_repeat1,
    STATE(84),
    1,
    sym_predefine,
    STATE(89),
    1,
    sym__definition,
    STATE(90),
    1,
    sym_tpl_definition,
    STATE(122),
    1,
    aux_sym_interface_def_repeat1,
    STATE(155),
    1,
    sym_interface_anno,
    STATE(157),
    1,
    aux_sym_struct_def_repeat1,
    STATE(250),
    1,
    sym_data_representation,
    STATE(399),
    1,
    sym_template_module_ref,
    STATE(443),
    1,
    sym_enum_anno,
    STATE(446),
    1,
    sym_interface_header,
    STATE(150),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(451),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(453),
    16,
    sym_except_dcl,
    sym_interface_dcl,
    sym_bitset_dcl,
    sym_bitmask_dcl,
    sym_annotation_dcl,
    sym_template_module_dcl,
    sym_template_module_inst,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_enum_dcl,
    sym_union_forward_dcl,
    sym_union_def,
    sym_typedef_dcl,
    sym_const_dcl,
    [696] = 38,
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
    anon_sym_module,
    ACTIONS(23),
    1,
    anon_sym_struct,
    ACTIONS(25),
    1,
    anon_sym_union,
    ACTIONS(27),
    1,
    anon_sym_enum,
    ACTIONS(29),
    1,
    anon_sym_const,
    ACTIONS(31),
    1,
    anon_sym_native,
    ACTIONS(33),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(35),
    1,
    anon_sym_typedef,
    ACTIONS(39),
    1,
    sym_dds_service,
    ACTIONS(41),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(43),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(45),
    1,
    sym_final,
    ACTIONS(47),
    1,
    anon_sym_ATdata_representation,
    ACTIONS(448),
    1,
    anon_sym_alias,
    ACTIONS(450),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(452),
    1,
    anon_sym_RBRACE,
    STATE(27),
    1,
    sym_comment,
    STATE(28),
    1,
    aux_sym_template_module_dcl_repeat1,
    STATE(84),
    1,
    sym_predefine,
    STATE(89),
    1,
    sym__definition,
    STATE(90),
    1,
    sym_tpl_definition,
    STATE(122),
    1,
    aux_sym_interface_def_repeat1,
    STATE(155),
    1,
    sym_interface_anno,
    STATE(157),
    1,
    aux_sym_struct_def_repeat1,
    STATE(250),
    1,
    sym_data_representation,
    STATE(399),
    1,
    sym_template_module_ref,
    STATE(443),
    1,
    sym_enum_anno,
    STATE(446),
    1,
    sym_interface_header,
    STATE(150),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(451),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(453),
    16,
    sym_except_dcl,
    sym_interface_dcl,
    sym_bitset_dcl,
    sym_bitmask_dcl,
    sym_annotation_dcl,
    sym_template_module_dcl,
    sym_template_module_inst,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_enum_dcl,
    sym_union_forward_dcl,
    sym_union_def,
    sym_typedef_dcl,
    sym_const_dcl,
    [828] = 37,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(454),
    1,
    anon_sym_exception,
    ACTIONS(457),
    1,
    anon_sym_RBRACE,
    ACTIONS(459),
    1,
    anon_sym_interface,
    ACTIONS(462),
    1,
    anon_sym_local,
    ACTIONS(465),
    1,
    anon_sym_bitset,
    ACTIONS(468),
    1,
    anon_sym_bitmask,
    ACTIONS(471),
    1,
    anon_sym_ATannotation,
    ACTIONS(474),
    1,
    anon_sym_module,
    ACTIONS(477),
    1,
    anon_sym_struct,
    ACTIONS(480),
    1,
    anon_sym_union,
    ACTIONS(483),
    1,
    anon_sym_enum,
    ACTIONS(486),
    1,
    anon_sym_const,
    ACTIONS(489),
    1,
    anon_sym_alias,
    ACTIONS(492),
    1,
    anon_sym_native,
    ACTIONS(495),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(498),
    1,
    anon_sym_typedef,
    ACTIONS(501),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(504),
    1,
    sym_dds_service,
    ACTIONS(507),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(510),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(513),
    1,
    sym_final,
    ACTIONS(516),
    1,
    anon_sym_ATdata_representation,
    STATE(84),
    1,
    sym_predefine,
    STATE(89),
    1,
    sym__definition,
    STATE(90),
    1,
    sym_tpl_definition,
    STATE(122),
    1,
    aux_sym_interface_def_repeat1,
    STATE(155),
    1,
    sym_interface_anno,
    STATE(157),
    1,
    aux_sym_struct_def_repeat1,
    STATE(250),
    1,
    sym_data_representation,
    STATE(399),
    1,
    sym_template_module_ref,
    STATE(443),
    1,
    sym_enum_anno,
    STATE(446),
    1,
    sym_interface_header,
    STATE(28),
    2,
    sym_comment,
    aux_sym_template_module_dcl_repeat1,
    STATE(150),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(451),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(453),
    16,
    sym_except_dcl,
    sym_interface_dcl,
    sym_bitset_dcl,
    sym_bitmask_dcl,
    sym_annotation_dcl,
    sym_template_module_dcl,
    sym_template_module_inst,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_enum_dcl,
    sym_union_forward_dcl,
    sym_union_def,
    sym_typedef_dcl,
    sym_const_dcl,
    [958] = 33,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(53),
    1,
    anon_sym_longlong,
    ACTIONS(55),
    1,
    anon_sym_int64,
    ACTIONS(57),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(63),
    1,
    sym_signed_tiny_int,
    ACTIONS(65),
    1,
    anon_sym_unsignedshort,
    ACTIONS(67),
    1,
    anon_sym_uint16,
    ACTIONS(71),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(73),
    1,
    anon_sym_uint64,
    ACTIONS(77),
    1,
    anon_sym_longdouble,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(85),
    1,
    anon_sym_any,
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(519),
    1,
    anon_sym_sequence,
    ACTIONS(523),
    1,
    anon_sym_const,
    STATE(29),
    1,
    sym_comment,
    STATE(197),
    1,
    sym_base_type_spec,
    STATE(199),
    1,
    sym_scoped_name,
    STATE(217),
    1,
    sym_formal_parameter,
    STATE(352),
    1,
    sym_formal_parameter_type,
    STATE(353),
    1,
    sym_formal_parameters,
    ACTIONS(49),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(51),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(59),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(69),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(75),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(79),
    2,
    anon_sym_char,
    anon_sym_wchar,
    STATE(158),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(354),
    2,
    sym_simple_type_spec,
    sym_sequence_type,
    STATE(178),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(179),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(202),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    ACTIONS(521),
    8,
    anon_sym_exception,
    anon_sym_interface,
    anon_sym_typename,
    anon_sym_valuetype,
    anon_sym_eventtype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    [1080] = 38,
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
    anon_sym_module,
    ACTIONS(23),
    1,
    anon_sym_struct,
    ACTIONS(25),
    1,
    anon_sym_union,
    ACTIONS(27),
    1,
    anon_sym_enum,
    ACTIONS(29),
    1,
    anon_sym_const,
    ACTIONS(31),
    1,
    anon_sym_native,
    ACTIONS(33),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(35),
    1,
    anon_sym_typedef,
    ACTIONS(37),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(39),
    1,
    sym_dds_service,
    ACTIONS(41),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(43),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(45),
    1,
    sym_final,
    ACTIONS(47),
    1,
    anon_sym_ATdata_representation,
    ACTIONS(525),
    1,
    ts_builtin_sym_end,
    STATE(30),
    1,
    sym_comment,
    STATE(36),
    1,
    aux_sym_specification_repeat2,
    STATE(81),
    1,
    aux_sym_specification_repeat1,
    STATE(84),
    1,
    sym_predefine,
    STATE(92),
    1,
    sym__definition,
    STATE(93),
    1,
    sym_preproc_call,
    STATE(122),
    1,
    aux_sym_interface_def_repeat1,
    STATE(155),
    1,
    sym_interface_anno,
    STATE(157),
    1,
    aux_sym_struct_def_repeat1,
    STATE(250),
    1,
    sym_data_representation,
    STATE(443),
    1,
    sym_enum_anno,
    STATE(446),
    1,
    sym_interface_header,
    STATE(150),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(451),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(453),
    16,
    sym_except_dcl,
    sym_interface_dcl,
    sym_bitset_dcl,
    sym_bitmask_dcl,
    sym_annotation_dcl,
    sym_template_module_dcl,
    sym_template_module_inst,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_enum_dcl,
    sym_union_forward_dcl,
    sym_union_def,
    sym_typedef_dcl,
    sym_const_dcl,
    [1212] = 35,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(53),
    1,
    anon_sym_longlong,
    ACTIONS(55),
    1,
    anon_sym_int64,
    ACTIONS(57),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(61),
    1,
    anon_sym_fixed,
    ACTIONS(63),
    1,
    sym_signed_tiny_int,
    ACTIONS(65),
    1,
    anon_sym_unsignedshort,
    ACTIONS(67),
    1,
    anon_sym_uint16,
    ACTIONS(71),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(73),
    1,
    anon_sym_uint64,
    ACTIONS(77),
    1,
    anon_sym_longdouble,
    ACTIONS(85),
    1,
    anon_sym_any,
    ACTIONS(87),
    1,
    anon_sym_sequence,
    ACTIONS(89),
    1,
    anon_sym_map,
    ACTIONS(527),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(529),
    1,
    anon_sym_GT,
    ACTIONS(531),
    1,
    anon_sym_COMMA,
    ACTIONS(533),
    1,
    sym_identifier,
    STATE(31),
    1,
    sym_comment,
    STATE(197),
    1,
    sym_base_type_spec,
    STATE(222),
    1,
    sym_scoped_name,
    STATE(405),
    1,
    sym_type_spec,
    ACTIONS(49),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(51),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(59),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(69),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(75),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(79),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(83),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(158),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(234),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(178),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(179),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(198),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(202),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    [1337] = 32,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(53),
    1,
    anon_sym_longlong,
    ACTIONS(55),
    1,
    anon_sym_int64,
    ACTIONS(57),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(63),
    1,
    sym_signed_tiny_int,
    ACTIONS(65),
    1,
    anon_sym_unsignedshort,
    ACTIONS(67),
    1,
    anon_sym_uint16,
    ACTIONS(71),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(73),
    1,
    anon_sym_uint64,
    ACTIONS(77),
    1,
    anon_sym_longdouble,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(85),
    1,
    anon_sym_any,
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(519),
    1,
    anon_sym_sequence,
    ACTIONS(523),
    1,
    anon_sym_const,
    STATE(32),
    1,
    sym_comment,
    STATE(197),
    1,
    sym_base_type_spec,
    STATE(199),
    1,
    sym_scoped_name,
    STATE(338),
    1,
    sym_formal_parameter,
    STATE(352),
    1,
    sym_formal_parameter_type,
    ACTIONS(49),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(51),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(59),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(69),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(75),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(79),
    2,
    anon_sym_char,
    anon_sym_wchar,
    STATE(158),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(354),
    2,
    sym_simple_type_spec,
    sym_sequence_type,
    STATE(178),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(179),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(202),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    ACTIONS(521),
    8,
    anon_sym_exception,
    anon_sym_interface,
    anon_sym_typename,
    anon_sym_valuetype,
    anon_sym_eventtype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    [1456] = 34,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(537),
    1,
    anon_sym_exception,
    ACTIONS(540),
    1,
    anon_sym_interface,
    ACTIONS(543),
    1,
    anon_sym_local,
    ACTIONS(546),
    1,
    anon_sym_bitset,
    ACTIONS(549),
    1,
    anon_sym_bitmask,
    ACTIONS(552),
    1,
    anon_sym_ATannotation,
    ACTIONS(555),
    1,
    anon_sym_module,
    ACTIONS(558),
    1,
    anon_sym_struct,
    ACTIONS(561),
    1,
    anon_sym_union,
    ACTIONS(564),
    1,
    anon_sym_enum,
    ACTIONS(567),
    1,
    anon_sym_const,
    ACTIONS(570),
    1,
    anon_sym_native,
    ACTIONS(573),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(576),
    1,
    anon_sym_typedef,
    ACTIONS(579),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(582),
    1,
    sym_dds_service,
    ACTIONS(585),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(588),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(591),
    1,
    sym_final,
    ACTIONS(594),
    1,
    anon_sym_ATdata_representation,
    STATE(84),
    1,
    sym_predefine,
    STATE(92),
    1,
    sym__definition,
    STATE(122),
    1,
    aux_sym_interface_def_repeat1,
    STATE(155),
    1,
    sym_interface_anno,
    STATE(157),
    1,
    aux_sym_struct_def_repeat1,
    STATE(250),
    1,
    sym_data_representation,
    STATE(443),
    1,
    sym_enum_anno,
    STATE(446),
    1,
    sym_interface_header,
    ACTIONS(535),
    2,
    ts_builtin_sym_end,
    anon_sym_RBRACE,
    STATE(33),
    2,
    sym_comment,
    aux_sym_specification_repeat2,
    STATE(150),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(451),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(453),
    16,
    sym_except_dcl,
    sym_interface_dcl,
    sym_bitset_dcl,
    sym_bitmask_dcl,
    sym_annotation_dcl,
    sym_template_module_dcl,
    sym_template_module_inst,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_enum_dcl,
    sym_union_forward_dcl,
    sym_union_def,
    sym_typedef_dcl,
    sym_const_dcl,
    [1578] = 35,
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
    anon_sym_module,
    ACTIONS(23),
    1,
    anon_sym_struct,
    ACTIONS(25),
    1,
    anon_sym_union,
    ACTIONS(27),
    1,
    anon_sym_enum,
    ACTIONS(29),
    1,
    anon_sym_const,
    ACTIONS(31),
    1,
    anon_sym_native,
    ACTIONS(33),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(35),
    1,
    anon_sym_typedef,
    ACTIONS(39),
    1,
    sym_dds_service,
    ACTIONS(41),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(43),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(45),
    1,
    sym_final,
    ACTIONS(47),
    1,
    anon_sym_ATdata_representation,
    ACTIONS(450),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(525),
    1,
    ts_builtin_sym_end,
    STATE(33),
    1,
    aux_sym_specification_repeat2,
    STATE(34),
    1,
    sym_comment,
    STATE(84),
    1,
    sym_predefine,
    STATE(92),
    1,
    sym__definition,
    STATE(122),
    1,
    aux_sym_interface_def_repeat1,
    STATE(155),
    1,
    sym_interface_anno,
    STATE(157),
    1,
    aux_sym_struct_def_repeat1,
    STATE(250),
    1,
    sym_data_representation,
    STATE(443),
    1,
    sym_enum_anno,
    STATE(446),
    1,
    sym_interface_header,
    STATE(150),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(451),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(453),
    16,
    sym_except_dcl,
    sym_interface_dcl,
    sym_bitset_dcl,
    sym_bitmask_dcl,
    sym_annotation_dcl,
    sym_template_module_dcl,
    sym_template_module_inst,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_enum_dcl,
    sym_union_forward_dcl,
    sym_union_def,
    sym_typedef_dcl,
    sym_const_dcl,
    [1701] = 35,
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
    anon_sym_module,
    ACTIONS(23),
    1,
    anon_sym_struct,
    ACTIONS(25),
    1,
    anon_sym_union,
    ACTIONS(27),
    1,
    anon_sym_enum,
    ACTIONS(29),
    1,
    anon_sym_const,
    ACTIONS(31),
    1,
    anon_sym_native,
    ACTIONS(33),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(35),
    1,
    anon_sym_typedef,
    ACTIONS(39),
    1,
    sym_dds_service,
    ACTIONS(41),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(43),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(45),
    1,
    sym_final,
    ACTIONS(47),
    1,
    anon_sym_ATdata_representation,
    ACTIONS(450),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(597),
    1,
    anon_sym_RBRACE,
    STATE(35),
    1,
    sym_comment,
    STATE(38),
    1,
    aux_sym_specification_repeat2,
    STATE(84),
    1,
    sym_predefine,
    STATE(92),
    1,
    sym__definition,
    STATE(122),
    1,
    aux_sym_interface_def_repeat1,
    STATE(155),
    1,
    sym_interface_anno,
    STATE(157),
    1,
    aux_sym_struct_def_repeat1,
    STATE(250),
    1,
    sym_data_representation,
    STATE(443),
    1,
    sym_enum_anno,
    STATE(446),
    1,
    sym_interface_header,
    STATE(150),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(451),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(453),
    16,
    sym_except_dcl,
    sym_interface_dcl,
    sym_bitset_dcl,
    sym_bitmask_dcl,
    sym_annotation_dcl,
    sym_template_module_dcl,
    sym_template_module_inst,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_enum_dcl,
    sym_union_forward_dcl,
    sym_union_def,
    sym_typedef_dcl,
    sym_const_dcl,
    [1824] = 35,
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
    anon_sym_module,
    ACTIONS(23),
    1,
    anon_sym_struct,
    ACTIONS(25),
    1,
    anon_sym_union,
    ACTIONS(27),
    1,
    anon_sym_enum,
    ACTIONS(29),
    1,
    anon_sym_const,
    ACTIONS(31),
    1,
    anon_sym_native,
    ACTIONS(33),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(35),
    1,
    anon_sym_typedef,
    ACTIONS(39),
    1,
    sym_dds_service,
    ACTIONS(41),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(43),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(45),
    1,
    sym_final,
    ACTIONS(47),
    1,
    anon_sym_ATdata_representation,
    ACTIONS(450),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(599),
    1,
    ts_builtin_sym_end,
    STATE(33),
    1,
    aux_sym_specification_repeat2,
    STATE(36),
    1,
    sym_comment,
    STATE(84),
    1,
    sym_predefine,
    STATE(92),
    1,
    sym__definition,
    STATE(122),
    1,
    aux_sym_interface_def_repeat1,
    STATE(155),
    1,
    sym_interface_anno,
    STATE(157),
    1,
    aux_sym_struct_def_repeat1,
    STATE(250),
    1,
    sym_data_representation,
    STATE(443),
    1,
    sym_enum_anno,
    STATE(446),
    1,
    sym_interface_header,
    STATE(150),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(451),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(453),
    16,
    sym_except_dcl,
    sym_interface_dcl,
    sym_bitset_dcl,
    sym_bitmask_dcl,
    sym_annotation_dcl,
    sym_template_module_dcl,
    sym_template_module_inst,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_enum_dcl,
    sym_union_forward_dcl,
    sym_union_def,
    sym_typedef_dcl,
    sym_const_dcl,
    [1947] = 33,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(53),
    1,
    anon_sym_longlong,
    ACTIONS(55),
    1,
    anon_sym_int64,
    ACTIONS(57),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(61),
    1,
    anon_sym_fixed,
    ACTIONS(63),
    1,
    sym_signed_tiny_int,
    ACTIONS(65),
    1,
    anon_sym_unsignedshort,
    ACTIONS(67),
    1,
    anon_sym_uint16,
    ACTIONS(71),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(73),
    1,
    anon_sym_uint64,
    ACTIONS(77),
    1,
    anon_sym_longdouble,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(85),
    1,
    anon_sym_any,
    ACTIONS(87),
    1,
    anon_sym_sequence,
    ACTIONS(89),
    1,
    anon_sym_map,
    ACTIONS(117),
    1,
    sym_identifier,
    STATE(37),
    1,
    sym_comment,
    STATE(197),
    1,
    sym_base_type_spec,
    STATE(199),
    1,
    sym_scoped_name,
    STATE(415),
    1,
    sym_type_spec,
    ACTIONS(49),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(51),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(59),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(69),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(75),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(79),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(83),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(158),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(234),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(178),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(179),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(198),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(202),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    [2066] = 35,
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
    anon_sym_module,
    ACTIONS(23),
    1,
    anon_sym_struct,
    ACTIONS(25),
    1,
    anon_sym_union,
    ACTIONS(27),
    1,
    anon_sym_enum,
    ACTIONS(29),
    1,
    anon_sym_const,
    ACTIONS(31),
    1,
    anon_sym_native,
    ACTIONS(33),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(35),
    1,
    anon_sym_typedef,
    ACTIONS(39),
    1,
    sym_dds_service,
    ACTIONS(41),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(43),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(45),
    1,
    sym_final,
    ACTIONS(47),
    1,
    anon_sym_ATdata_representation,
    ACTIONS(450),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(601),
    1,
    anon_sym_RBRACE,
    STATE(33),
    1,
    aux_sym_specification_repeat2,
    STATE(38),
    1,
    sym_comment,
    STATE(84),
    1,
    sym_predefine,
    STATE(92),
    1,
    sym__definition,
    STATE(122),
    1,
    aux_sym_interface_def_repeat1,
    STATE(155),
    1,
    sym_interface_anno,
    STATE(157),
    1,
    aux_sym_struct_def_repeat1,
    STATE(250),
    1,
    sym_data_representation,
    STATE(443),
    1,
    sym_enum_anno,
    STATE(446),
    1,
    sym_interface_header,
    STATE(150),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(451),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(453),
    16,
    sym_except_dcl,
    sym_interface_dcl,
    sym_bitset_dcl,
    sym_bitmask_dcl,
    sym_annotation_dcl,
    sym_template_module_dcl,
    sym_template_module_inst,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_enum_dcl,
    sym_union_forward_dcl,
    sym_union_def,
    sym_typedef_dcl,
    sym_const_dcl,
    [2189] = 33,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(53),
    1,
    anon_sym_longlong,
    ACTIONS(55),
    1,
    anon_sym_int64,
    ACTIONS(57),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(61),
    1,
    anon_sym_fixed,
    ACTIONS(63),
    1,
    sym_signed_tiny_int,
    ACTIONS(65),
    1,
    anon_sym_unsignedshort,
    ACTIONS(67),
    1,
    anon_sym_uint16,
    ACTIONS(71),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(73),
    1,
    anon_sym_uint64,
    ACTIONS(77),
    1,
    anon_sym_longdouble,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(85),
    1,
    anon_sym_any,
    ACTIONS(87),
    1,
    anon_sym_sequence,
    ACTIONS(89),
    1,
    anon_sym_map,
    ACTIONS(117),
    1,
    sym_identifier,
    STATE(39),
    1,
    sym_comment,
    STATE(197),
    1,
    sym_base_type_spec,
    STATE(199),
    1,
    sym_scoped_name,
    STATE(210),
    1,
    sym_type_spec,
    ACTIONS(49),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(51),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(59),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(69),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(75),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(79),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(83),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(158),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(234),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(178),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(179),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(198),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(202),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    [2308] = 33,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(53),
    1,
    anon_sym_longlong,
    ACTIONS(55),
    1,
    anon_sym_int64,
    ACTIONS(57),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(61),
    1,
    anon_sym_fixed,
    ACTIONS(63),
    1,
    sym_signed_tiny_int,
    ACTIONS(65),
    1,
    anon_sym_unsignedshort,
    ACTIONS(67),
    1,
    anon_sym_uint16,
    ACTIONS(71),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(73),
    1,
    anon_sym_uint64,
    ACTIONS(77),
    1,
    anon_sym_longdouble,
    ACTIONS(85),
    1,
    anon_sym_any,
    ACTIONS(87),
    1,
    anon_sym_sequence,
    ACTIONS(89),
    1,
    anon_sym_map,
    ACTIONS(527),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(533),
    1,
    sym_identifier,
    STATE(40),
    1,
    sym_comment,
    STATE(197),
    1,
    sym_base_type_spec,
    STATE(222),
    1,
    sym_scoped_name,
    STATE(336),
    1,
    sym_type_spec,
    ACTIONS(49),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(51),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(59),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(69),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(75),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(79),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(83),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(158),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(234),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(178),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(179),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(198),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(202),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    [2427] = 33,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(53),
    1,
    anon_sym_longlong,
    ACTIONS(55),
    1,
    anon_sym_int64,
    ACTIONS(57),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(61),
    1,
    anon_sym_fixed,
    ACTIONS(63),
    1,
    sym_signed_tiny_int,
    ACTIONS(65),
    1,
    anon_sym_unsignedshort,
    ACTIONS(67),
    1,
    anon_sym_uint16,
    ACTIONS(71),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(73),
    1,
    anon_sym_uint64,
    ACTIONS(77),
    1,
    anon_sym_longdouble,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(85),
    1,
    anon_sym_any,
    ACTIONS(87),
    1,
    anon_sym_sequence,
    ACTIONS(89),
    1,
    anon_sym_map,
    ACTIONS(117),
    1,
    sym_identifier,
    STATE(41),
    1,
    sym_comment,
    STATE(197),
    1,
    sym_base_type_spec,
    STATE(199),
    1,
    sym_scoped_name,
    STATE(301),
    1,
    sym_type_spec,
    ACTIONS(49),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(51),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(59),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(69),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(75),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(79),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(83),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(158),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(234),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(178),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(179),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(198),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(202),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    [2546] = 33,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(53),
    1,
    anon_sym_longlong,
    ACTIONS(55),
    1,
    anon_sym_int64,
    ACTIONS(57),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(61),
    1,
    anon_sym_fixed,
    ACTIONS(63),
    1,
    sym_signed_tiny_int,
    ACTIONS(65),
    1,
    anon_sym_unsignedshort,
    ACTIONS(67),
    1,
    anon_sym_uint16,
    ACTIONS(71),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(73),
    1,
    anon_sym_uint64,
    ACTIONS(77),
    1,
    anon_sym_longdouble,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(85),
    1,
    anon_sym_any,
    ACTIONS(87),
    1,
    anon_sym_sequence,
    ACTIONS(89),
    1,
    anon_sym_map,
    ACTIONS(117),
    1,
    sym_identifier,
    STATE(42),
    1,
    sym_comment,
    STATE(197),
    1,
    sym_base_type_spec,
    STATE(199),
    1,
    sym_scoped_name,
    STATE(231),
    1,
    sym_type_spec,
    ACTIONS(49),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(51),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(59),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(69),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(75),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(79),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(83),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(158),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(234),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(178),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(179),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(198),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(202),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    [2665] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(43),
    1,
    sym_comment,
    ACTIONS(605),
    9,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    sym_final,
    anon_sym_ATdata_representation,
    ACTIONS(603),
    36,
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
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_native,
    anon_sym_typedef,
    sym_identifier,
    [2721] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(44),
    1,
    sym_comment,
    ACTIONS(609),
    9,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    sym_final,
    anon_sym_ATdata_representation,
    ACTIONS(607),
    36,
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
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_native,
    anon_sym_typedef,
    sym_identifier,
    [2777] = 28,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(53),
    1,
    anon_sym_longlong,
    ACTIONS(55),
    1,
    anon_sym_int64,
    ACTIONS(57),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(63),
    1,
    sym_signed_tiny_int,
    ACTIONS(65),
    1,
    anon_sym_unsignedshort,
    ACTIONS(67),
    1,
    anon_sym_uint16,
    ACTIONS(71),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(73),
    1,
    anon_sym_uint64,
    ACTIONS(77),
    1,
    anon_sym_longdouble,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(87),
    1,
    anon_sym_sequence,
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(361),
    1,
    anon_sym_fixed,
    STATE(45),
    1,
    sym_comment,
    STATE(303),
    1,
    sym_scoped_name,
    STATE(464),
    1,
    sym_const_type,
    ACTIONS(49),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(51),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(69),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(75),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(79),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(83),
    2,
    anon_sym_string,
    anon_sym_wstring,
    ACTIONS(359),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(158),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(178),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(179),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(421),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [2879] = 28,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(53),
    1,
    anon_sym_longlong,
    ACTIONS(55),
    1,
    anon_sym_int64,
    ACTIONS(57),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(63),
    1,
    sym_signed_tiny_int,
    ACTIONS(65),
    1,
    anon_sym_unsignedshort,
    ACTIONS(67),
    1,
    anon_sym_uint16,
    ACTIONS(71),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(73),
    1,
    anon_sym_uint64,
    ACTIONS(77),
    1,
    anon_sym_longdouble,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(87),
    1,
    anon_sym_sequence,
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(361),
    1,
    anon_sym_fixed,
    STATE(46),
    1,
    sym_comment,
    STATE(303),
    1,
    sym_scoped_name,
    STATE(412),
    1,
    sym_const_type,
    ACTIONS(49),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(51),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(69),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(75),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(79),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(83),
    2,
    anon_sym_string,
    anon_sym_wstring,
    ACTIONS(359),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(158),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(178),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(179),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(421),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [2981] = 9,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(618),
    1,
    anon_sym_AThashid,
    ACTIONS(621),
    1,
    anon_sym_ATtry_construct,
    STATE(56),
    1,
    sym_struct_modifier,
    STATE(47),
    2,
    sym_comment,
    aux_sym_member_repeat1,
    STATE(58),
    2,
    sym_hashid,
    sym_try_construct,
    ACTIONS(613),
    5,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    ACTIONS(615),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(611),
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
    [3043] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(48),
    1,
    sym_comment,
    ACTIONS(626),
    9,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    sym_final,
    anon_sym_ATdata_representation,
    ACTIONS(624),
    31,
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
    anon_sym_case,
    sym_identifier,
    [3094] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(49),
    1,
    sym_comment,
    ACTIONS(630),
    9,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    sym_final,
    anon_sym_ATdata_representation,
    ACTIONS(628),
    31,
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
    anon_sym_case,
    sym_identifier,
    [3145] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(50),
    1,
    sym_comment,
    ACTIONS(634),
    14,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    anon_sym_AThashid,
    anon_sym_ATtry_construct,
    ACTIONS(632),
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
    [3194] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(51),
    1,
    sym_comment,
    ACTIONS(638),
    14,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    anon_sym_AThashid,
    anon_sym_ATtry_construct,
    ACTIONS(636),
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
    [3243] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(52),
    1,
    sym_comment,
    ACTIONS(642),
    14,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    anon_sym_AThashid,
    anon_sym_ATtry_construct,
    ACTIONS(640),
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
    [3292] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(53),
    1,
    sym_comment,
    ACTIONS(646),
    14,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    anon_sym_AThashid,
    anon_sym_ATtry_construct,
    ACTIONS(644),
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
    [3341] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(54),
    1,
    sym_comment,
    ACTIONS(650),
    14,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    anon_sym_AThashid,
    anon_sym_ATtry_construct,
    ACTIONS(648),
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
    [3390] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(55),
    1,
    sym_comment,
    ACTIONS(654),
    13,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    anon_sym_AThashid,
    anon_sym_ATtry_construct,
    ACTIONS(652),
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
    [3438] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(56),
    1,
    sym_comment,
    ACTIONS(658),
    13,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    anon_sym_AThashid,
    anon_sym_ATtry_construct,
    ACTIONS(656),
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
    [3486] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(57),
    1,
    sym_comment,
    ACTIONS(662),
    13,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    anon_sym_AThashid,
    anon_sym_ATtry_construct,
    ACTIONS(660),
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
    [3534] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(58),
    1,
    sym_comment,
    ACTIONS(666),
    13,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    anon_sym_AThashid,
    anon_sym_ATtry_construct,
    ACTIONS(664),
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
    [3582] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(59),
    1,
    sym_comment,
    ACTIONS(670),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(668),
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
    [3626] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(60),
    1,
    sym_comment,
    ACTIONS(674),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(672),
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
    [3670] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(61),
    1,
    sym_comment,
    ACTIONS(678),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(676),
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
    [3714] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(62),
    1,
    sym_comment,
    ACTIONS(682),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(680),
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
    [3758] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(63),
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
    [3802] = 23,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(53),
    1,
    anon_sym_longlong,
    ACTIONS(55),
    1,
    anon_sym_int64,
    ACTIONS(57),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(63),
    1,
    sym_signed_tiny_int,
    ACTIONS(65),
    1,
    anon_sym_unsignedshort,
    ACTIONS(67),
    1,
    anon_sym_uint16,
    ACTIONS(71),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(73),
    1,
    anon_sym_uint64,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(688),
    1,
    sym_boolean_type,
    STATE(64),
    1,
    sym_comment,
    STATE(291),
    1,
    sym_scoped_name,
    STATE(447),
    1,
    sym_switch_type_spec,
    ACTIONS(49),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(51),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(69),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(79),
    2,
    anon_sym_char,
    anon_sym_wchar,
    STATE(158),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(448),
    2,
    sym_integer_type,
    sym_char_type,
    STATE(178),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(179),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    [3882] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(65),
    1,
    sym_comment,
    ACTIONS(692),
    5,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    ACTIONS(690),
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
    [3922] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(240),
    1,
    anon_sym_LPAREN,
    ACTIONS(242),
    1,
    anon_sym_TILDE,
    ACTIONS(244),
    1,
    anon_sym_L,
    ACTIONS(246),
    1,
    anon_sym_DQUOTE,
    ACTIONS(248),
    1,
    anon_sym_SQUOTE,
    ACTIONS(252),
    1,
    sym_number_literal,
    STATE(66),
    1,
    sym_comment,
    STATE(100),
    1,
    sym_scoped_name,
    STATE(109),
    1,
    sym_mult_expr,
    STATE(110),
    1,
    sym_literal,
    STATE(113),
    1,
    sym_unary_expr,
    STATE(116),
    1,
    sym_unary_operator,
    STATE(119),
    1,
    sym_add_expr,
    STATE(120),
    1,
    sym_shift_expr,
    STATE(124),
    1,
    sym_and_expr,
    STATE(127),
    1,
    sym_xor_expr,
    STATE(131),
    1,
    sym_or_expr,
    STATE(187),
    1,
    sym_const_expr,
    STATE(392),
    1,
    sym_positive_int_const,
    ACTIONS(238),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(250),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(106),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4002] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(240),
    1,
    anon_sym_LPAREN,
    ACTIONS(242),
    1,
    anon_sym_TILDE,
    ACTIONS(244),
    1,
    anon_sym_L,
    ACTIONS(246),
    1,
    anon_sym_DQUOTE,
    ACTIONS(248),
    1,
    anon_sym_SQUOTE,
    ACTIONS(252),
    1,
    sym_number_literal,
    STATE(67),
    1,
    sym_comment,
    STATE(100),
    1,
    sym_scoped_name,
    STATE(109),
    1,
    sym_mult_expr,
    STATE(110),
    1,
    sym_literal,
    STATE(113),
    1,
    sym_unary_expr,
    STATE(116),
    1,
    sym_unary_operator,
    STATE(119),
    1,
    sym_add_expr,
    STATE(120),
    1,
    sym_shift_expr,
    STATE(124),
    1,
    sym_and_expr,
    STATE(127),
    1,
    sym_xor_expr,
    STATE(131),
    1,
    sym_or_expr,
    STATE(187),
    1,
    sym_const_expr,
    STATE(327),
    1,
    sym_positive_int_const,
    ACTIONS(238),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(250),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(106),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4082] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(240),
    1,
    anon_sym_LPAREN,
    ACTIONS(242),
    1,
    anon_sym_TILDE,
    ACTIONS(244),
    1,
    anon_sym_L,
    ACTIONS(246),
    1,
    anon_sym_DQUOTE,
    ACTIONS(248),
    1,
    anon_sym_SQUOTE,
    ACTIONS(252),
    1,
    sym_number_literal,
    STATE(68),
    1,
    sym_comment,
    STATE(100),
    1,
    sym_scoped_name,
    STATE(109),
    1,
    sym_mult_expr,
    STATE(110),
    1,
    sym_literal,
    STATE(113),
    1,
    sym_unary_expr,
    STATE(116),
    1,
    sym_unary_operator,
    STATE(119),
    1,
    sym_add_expr,
    STATE(120),
    1,
    sym_shift_expr,
    STATE(124),
    1,
    sym_and_expr,
    STATE(127),
    1,
    sym_xor_expr,
    STATE(131),
    1,
    sym_or_expr,
    STATE(187),
    1,
    sym_const_expr,
    STATE(344),
    1,
    sym_positive_int_const,
    ACTIONS(238),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(250),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(106),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4162] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(240),
    1,
    anon_sym_LPAREN,
    ACTIONS(242),
    1,
    anon_sym_TILDE,
    ACTIONS(244),
    1,
    anon_sym_L,
    ACTIONS(246),
    1,
    anon_sym_DQUOTE,
    ACTIONS(248),
    1,
    anon_sym_SQUOTE,
    ACTIONS(252),
    1,
    sym_number_literal,
    STATE(69),
    1,
    sym_comment,
    STATE(100),
    1,
    sym_scoped_name,
    STATE(109),
    1,
    sym_mult_expr,
    STATE(110),
    1,
    sym_literal,
    STATE(113),
    1,
    sym_unary_expr,
    STATE(116),
    1,
    sym_unary_operator,
    STATE(119),
    1,
    sym_add_expr,
    STATE(120),
    1,
    sym_shift_expr,
    STATE(124),
    1,
    sym_and_expr,
    STATE(127),
    1,
    sym_xor_expr,
    STATE(131),
    1,
    sym_or_expr,
    STATE(187),
    1,
    sym_const_expr,
    STATE(413),
    1,
    sym_positive_int_const,
    ACTIONS(238),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(250),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(106),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4242] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(240),
    1,
    anon_sym_LPAREN,
    ACTIONS(242),
    1,
    anon_sym_TILDE,
    ACTIONS(244),
    1,
    anon_sym_L,
    ACTIONS(246),
    1,
    anon_sym_DQUOTE,
    ACTIONS(248),
    1,
    anon_sym_SQUOTE,
    ACTIONS(252),
    1,
    sym_number_literal,
    STATE(70),
    1,
    sym_comment,
    STATE(100),
    1,
    sym_scoped_name,
    STATE(109),
    1,
    sym_mult_expr,
    STATE(110),
    1,
    sym_literal,
    STATE(113),
    1,
    sym_unary_expr,
    STATE(116),
    1,
    sym_unary_operator,
    STATE(119),
    1,
    sym_add_expr,
    STATE(120),
    1,
    sym_shift_expr,
    STATE(124),
    1,
    sym_and_expr,
    STATE(127),
    1,
    sym_xor_expr,
    STATE(131),
    1,
    sym_or_expr,
    STATE(187),
    1,
    sym_const_expr,
    STATE(441),
    1,
    sym_positive_int_const,
    ACTIONS(238),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(250),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(106),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4322] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(240),
    1,
    anon_sym_LPAREN,
    ACTIONS(242),
    1,
    anon_sym_TILDE,
    ACTIONS(244),
    1,
    anon_sym_L,
    ACTIONS(246),
    1,
    anon_sym_DQUOTE,
    ACTIONS(248),
    1,
    anon_sym_SQUOTE,
    ACTIONS(252),
    1,
    sym_number_literal,
    STATE(71),
    1,
    sym_comment,
    STATE(100),
    1,
    sym_scoped_name,
    STATE(109),
    1,
    sym_mult_expr,
    STATE(110),
    1,
    sym_literal,
    STATE(113),
    1,
    sym_unary_expr,
    STATE(116),
    1,
    sym_unary_operator,
    STATE(119),
    1,
    sym_add_expr,
    STATE(120),
    1,
    sym_shift_expr,
    STATE(124),
    1,
    sym_and_expr,
    STATE(127),
    1,
    sym_xor_expr,
    STATE(131),
    1,
    sym_or_expr,
    STATE(187),
    1,
    sym_const_expr,
    STATE(426),
    1,
    sym_positive_int_const,
    ACTIONS(238),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(250),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(106),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4402] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(240),
    1,
    anon_sym_LPAREN,
    ACTIONS(242),
    1,
    anon_sym_TILDE,
    ACTIONS(244),
    1,
    anon_sym_L,
    ACTIONS(246),
    1,
    anon_sym_DQUOTE,
    ACTIONS(248),
    1,
    anon_sym_SQUOTE,
    ACTIONS(252),
    1,
    sym_number_literal,
    STATE(72),
    1,
    sym_comment,
    STATE(100),
    1,
    sym_scoped_name,
    STATE(109),
    1,
    sym_mult_expr,
    STATE(110),
    1,
    sym_literal,
    STATE(113),
    1,
    sym_unary_expr,
    STATE(116),
    1,
    sym_unary_operator,
    STATE(119),
    1,
    sym_add_expr,
    STATE(120),
    1,
    sym_shift_expr,
    STATE(124),
    1,
    sym_and_expr,
    STATE(127),
    1,
    sym_xor_expr,
    STATE(131),
    1,
    sym_or_expr,
    STATE(187),
    1,
    sym_const_expr,
    STATE(367),
    1,
    sym_positive_int_const,
    ACTIONS(238),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(250),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(106),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4482] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(240),
    1,
    anon_sym_LPAREN,
    ACTIONS(242),
    1,
    anon_sym_TILDE,
    ACTIONS(244),
    1,
    anon_sym_L,
    ACTIONS(246),
    1,
    anon_sym_DQUOTE,
    ACTIONS(248),
    1,
    anon_sym_SQUOTE,
    ACTIONS(252),
    1,
    sym_number_literal,
    STATE(73),
    1,
    sym_comment,
    STATE(100),
    1,
    sym_scoped_name,
    STATE(109),
    1,
    sym_mult_expr,
    STATE(110),
    1,
    sym_literal,
    STATE(113),
    1,
    sym_unary_expr,
    STATE(116),
    1,
    sym_unary_operator,
    STATE(119),
    1,
    sym_add_expr,
    STATE(120),
    1,
    sym_shift_expr,
    STATE(124),
    1,
    sym_and_expr,
    STATE(127),
    1,
    sym_xor_expr,
    STATE(131),
    1,
    sym_or_expr,
    STATE(395),
    1,
    sym_const_expr,
    ACTIONS(238),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(250),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(106),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4559] = 18,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(51),
    1,
    anon_sym_long,
    ACTIONS(69),
    1,
    anon_sym_unsignedlong,
    ACTIONS(696),
    1,
    anon_sym_int32,
    ACTIONS(698),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(702),
    1,
    sym_signed_tiny_int,
    ACTIONS(704),
    1,
    anon_sym_uint32,
    STATE(74),
    1,
    sym_comment,
    STATE(428),
    1,
    sym_integer_type,
    STATE(429),
    1,
    sym_destination_type,
    ACTIONS(53),
    2,
    anon_sym_longlong,
    anon_sym_int64,
    ACTIONS(65),
    2,
    anon_sym_unsignedshort,
    anon_sym_uint16,
    ACTIONS(71),
    2,
    anon_sym_unsignedlonglong,
    anon_sym_uint64,
    ACTIONS(694),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(700),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(158),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(178),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(179),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    [4624] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(240),
    1,
    anon_sym_LPAREN,
    ACTIONS(242),
    1,
    anon_sym_TILDE,
    ACTIONS(244),
    1,
    anon_sym_L,
    ACTIONS(246),
    1,
    anon_sym_DQUOTE,
    ACTIONS(248),
    1,
    anon_sym_SQUOTE,
    ACTIONS(252),
    1,
    sym_number_literal,
    STATE(75),
    1,
    sym_comment,
    STATE(100),
    1,
    sym_scoped_name,
    STATE(109),
    1,
    sym_mult_expr,
    STATE(110),
    1,
    sym_literal,
    STATE(113),
    1,
    sym_unary_expr,
    STATE(116),
    1,
    sym_unary_operator,
    STATE(119),
    1,
    sym_add_expr,
    STATE(120),
    1,
    sym_shift_expr,
    STATE(124),
    1,
    sym_and_expr,
    STATE(127),
    1,
    sym_xor_expr,
    STATE(131),
    1,
    sym_or_expr,
    STATE(377),
    1,
    sym_const_expr,
    ACTIONS(238),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(250),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(106),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4701] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(240),
    1,
    anon_sym_LPAREN,
    ACTIONS(242),
    1,
    anon_sym_TILDE,
    ACTIONS(244),
    1,
    anon_sym_L,
    ACTIONS(246),
    1,
    anon_sym_DQUOTE,
    ACTIONS(248),
    1,
    anon_sym_SQUOTE,
    ACTIONS(252),
    1,
    sym_number_literal,
    STATE(76),
    1,
    sym_comment,
    STATE(100),
    1,
    sym_scoped_name,
    STATE(109),
    1,
    sym_mult_expr,
    STATE(110),
    1,
    sym_literal,
    STATE(113),
    1,
    sym_unary_expr,
    STATE(116),
    1,
    sym_unary_operator,
    STATE(119),
    1,
    sym_add_expr,
    STATE(120),
    1,
    sym_shift_expr,
    STATE(124),
    1,
    sym_and_expr,
    STATE(127),
    1,
    sym_xor_expr,
    STATE(131),
    1,
    sym_or_expr,
    STATE(388),
    1,
    sym_const_expr,
    ACTIONS(238),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(250),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(106),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4778] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(240),
    1,
    anon_sym_LPAREN,
    ACTIONS(242),
    1,
    anon_sym_TILDE,
    ACTIONS(244),
    1,
    anon_sym_L,
    ACTIONS(246),
    1,
    anon_sym_DQUOTE,
    ACTIONS(248),
    1,
    anon_sym_SQUOTE,
    ACTIONS(252),
    1,
    sym_number_literal,
    STATE(77),
    1,
    sym_comment,
    STATE(100),
    1,
    sym_scoped_name,
    STATE(109),
    1,
    sym_mult_expr,
    STATE(110),
    1,
    sym_literal,
    STATE(113),
    1,
    sym_unary_expr,
    STATE(116),
    1,
    sym_unary_operator,
    STATE(119),
    1,
    sym_add_expr,
    STATE(120),
    1,
    sym_shift_expr,
    STATE(124),
    1,
    sym_and_expr,
    STATE(127),
    1,
    sym_xor_expr,
    STATE(131),
    1,
    sym_or_expr,
    STATE(424),
    1,
    sym_const_expr,
    ACTIONS(238),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(250),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(106),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4855] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(240),
    1,
    anon_sym_LPAREN,
    ACTIONS(242),
    1,
    anon_sym_TILDE,
    ACTIONS(244),
    1,
    anon_sym_L,
    ACTIONS(246),
    1,
    anon_sym_DQUOTE,
    ACTIONS(248),
    1,
    anon_sym_SQUOTE,
    ACTIONS(252),
    1,
    sym_number_literal,
    STATE(78),
    1,
    sym_comment,
    STATE(100),
    1,
    sym_scoped_name,
    STATE(109),
    1,
    sym_mult_expr,
    STATE(110),
    1,
    sym_literal,
    STATE(113),
    1,
    sym_unary_expr,
    STATE(116),
    1,
    sym_unary_operator,
    STATE(119),
    1,
    sym_add_expr,
    STATE(120),
    1,
    sym_shift_expr,
    STATE(124),
    1,
    sym_and_expr,
    STATE(127),
    1,
    sym_xor_expr,
    STATE(131),
    1,
    sym_or_expr,
    STATE(452),
    1,
    sym_const_expr,
    ACTIONS(238),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(250),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(106),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4932] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(240),
    1,
    anon_sym_LPAREN,
    ACTIONS(242),
    1,
    anon_sym_TILDE,
    ACTIONS(244),
    1,
    anon_sym_L,
    ACTIONS(246),
    1,
    anon_sym_DQUOTE,
    ACTIONS(248),
    1,
    anon_sym_SQUOTE,
    ACTIONS(252),
    1,
    sym_number_literal,
    STATE(79),
    1,
    sym_comment,
    STATE(100),
    1,
    sym_scoped_name,
    STATE(109),
    1,
    sym_mult_expr,
    STATE(110),
    1,
    sym_literal,
    STATE(113),
    1,
    sym_unary_expr,
    STATE(116),
    1,
    sym_unary_operator,
    STATE(119),
    1,
    sym_add_expr,
    STATE(120),
    1,
    sym_shift_expr,
    STATE(124),
    1,
    sym_and_expr,
    STATE(127),
    1,
    sym_xor_expr,
    STATE(131),
    1,
    sym_or_expr,
    STATE(361),
    1,
    sym_const_expr,
    ACTIONS(238),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(250),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(106),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5009] = 22,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(240),
    1,
    anon_sym_LPAREN,
    ACTIONS(242),
    1,
    anon_sym_TILDE,
    ACTIONS(244),
    1,
    anon_sym_L,
    ACTIONS(246),
    1,
    anon_sym_DQUOTE,
    ACTIONS(248),
    1,
    anon_sym_SQUOTE,
    ACTIONS(252),
    1,
    sym_number_literal,
    STATE(80),
    1,
    sym_comment,
    STATE(100),
    1,
    sym_scoped_name,
    STATE(109),
    1,
    sym_mult_expr,
    STATE(110),
    1,
    sym_literal,
    STATE(113),
    1,
    sym_unary_expr,
    STATE(116),
    1,
    sym_unary_operator,
    STATE(119),
    1,
    sym_add_expr,
    STATE(120),
    1,
    sym_shift_expr,
    STATE(124),
    1,
    sym_and_expr,
    STATE(128),
    1,
    sym_xor_expr,
    ACTIONS(238),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(250),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(106),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5080] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(708),
    1,
    sym_preproc_directive,
    ACTIONS(711),
    1,
    anon_sym_POUNDdefine,
    STATE(93),
    1,
    sym_preproc_call,
    STATE(81),
    2,
    sym_comment,
    aux_sym_specification_repeat1,
    ACTIONS(706),
    20,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_interface,
    anon_sym_local,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_ATannotation,
    anon_sym_module,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_native,
    anon_sym_ATignore_literal_names,
    anon_sym_typedef,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    sym_final,
    anon_sym_ATdata_representation,
    [5119] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(82),
    1,
    sym_comment,
    ACTIONS(713),
    23,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_RBRACE,
    anon_sym_interface,
    anon_sym_local,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_ATannotation,
    anon_sym_module,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_alias,
    anon_sym_native,
    anon_sym_ATignore_literal_names,
    anon_sym_typedef,
    anon_sym_POUNDdefine,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    sym_final,
    anon_sym_ATdata_representation,
    [5151] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(83),
    1,
    sym_comment,
    ACTIONS(715),
    23,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_RBRACE,
    anon_sym_interface,
    anon_sym_local,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_ATannotation,
    anon_sym_module,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_alias,
    anon_sym_native,
    anon_sym_ATignore_literal_names,
    anon_sym_typedef,
    anon_sym_POUNDdefine,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    sym_final,
    anon_sym_ATdata_representation,
    [5183] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(84),
    1,
    sym_comment,
    ACTIONS(717),
    23,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_RBRACE,
    anon_sym_interface,
    anon_sym_local,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_ATannotation,
    anon_sym_module,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_alias,
    anon_sym_native,
    anon_sym_ATignore_literal_names,
    anon_sym_typedef,
    anon_sym_POUNDdefine,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    sym_final,
    anon_sym_ATdata_representation,
    [5215] = 21,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(240),
    1,
    anon_sym_LPAREN,
    ACTIONS(242),
    1,
    anon_sym_TILDE,
    ACTIONS(244),
    1,
    anon_sym_L,
    ACTIONS(246),
    1,
    anon_sym_DQUOTE,
    ACTIONS(248),
    1,
    anon_sym_SQUOTE,
    ACTIONS(252),
    1,
    sym_number_literal,
    STATE(85),
    1,
    sym_comment,
    STATE(100),
    1,
    sym_scoped_name,
    STATE(109),
    1,
    sym_mult_expr,
    STATE(110),
    1,
    sym_literal,
    STATE(113),
    1,
    sym_unary_expr,
    STATE(116),
    1,
    sym_unary_operator,
    STATE(119),
    1,
    sym_add_expr,
    STATE(120),
    1,
    sym_shift_expr,
    STATE(123),
    1,
    sym_and_expr,
    ACTIONS(238),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(250),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(106),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5283] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(86),
    1,
    sym_comment,
    ACTIONS(721),
    2,
    sym_preproc_directive,
    anon_sym_POUNDdefine,
    ACTIONS(719),
    20,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_interface,
    anon_sym_local,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_ATannotation,
    anon_sym_module,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_native,
    anon_sym_ATignore_literal_names,
    anon_sym_typedef,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    sym_final,
    anon_sym_ATdata_representation,
    [5316] = 20,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(240),
    1,
    anon_sym_LPAREN,
    ACTIONS(242),
    1,
    anon_sym_TILDE,
    ACTIONS(244),
    1,
    anon_sym_L,
    ACTIONS(246),
    1,
    anon_sym_DQUOTE,
    ACTIONS(248),
    1,
    anon_sym_SQUOTE,
    ACTIONS(252),
    1,
    sym_number_literal,
    STATE(87),
    1,
    sym_comment,
    STATE(100),
    1,
    sym_scoped_name,
    STATE(109),
    1,
    sym_mult_expr,
    STATE(110),
    1,
    sym_literal,
    STATE(113),
    1,
    sym_unary_expr,
    STATE(116),
    1,
    sym_unary_operator,
    STATE(119),
    1,
    sym_add_expr,
    STATE(121),
    1,
    sym_shift_expr,
    ACTIONS(238),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(250),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(106),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5381] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(88),
    1,
    sym_comment,
    ACTIONS(723),
    22,
    anon_sym_exception,
    anon_sym_RBRACE,
    anon_sym_interface,
    anon_sym_local,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_ATannotation,
    anon_sym_module,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_alias,
    anon_sym_native,
    anon_sym_ATignore_literal_names,
    anon_sym_typedef,
    anon_sym_POUNDdefine,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    sym_final,
    anon_sym_ATdata_representation,
    [5412] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(89),
    1,
    sym_comment,
    ACTIONS(725),
    22,
    anon_sym_exception,
    anon_sym_RBRACE,
    anon_sym_interface,
    anon_sym_local,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_ATannotation,
    anon_sym_module,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_alias,
    anon_sym_native,
    anon_sym_ATignore_literal_names,
    anon_sym_typedef,
    anon_sym_POUNDdefine,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    sym_final,
    anon_sym_ATdata_representation,
    [5443] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(90),
    1,
    sym_comment,
    ACTIONS(727),
    22,
    anon_sym_exception,
    anon_sym_RBRACE,
    anon_sym_interface,
    anon_sym_local,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_ATannotation,
    anon_sym_module,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_alias,
    anon_sym_native,
    anon_sym_ATignore_literal_names,
    anon_sym_typedef,
    anon_sym_POUNDdefine,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    sym_final,
    anon_sym_ATdata_representation,
    [5474] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(91),
    1,
    sym_comment,
    ACTIONS(731),
    2,
    sym_preproc_directive,
    anon_sym_POUNDdefine,
    ACTIONS(729),
    20,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_interface,
    anon_sym_local,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_ATannotation,
    anon_sym_module,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_native,
    anon_sym_ATignore_literal_names,
    anon_sym_typedef,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    sym_final,
    anon_sym_ATdata_representation,
    [5507] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(92),
    1,
    sym_comment,
    ACTIONS(733),
    22,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_RBRACE,
    anon_sym_interface,
    anon_sym_local,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_ATannotation,
    anon_sym_module,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_native,
    anon_sym_ATignore_literal_names,
    anon_sym_typedef,
    anon_sym_POUNDdefine,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    sym_final,
    anon_sym_ATdata_representation,
    [5538] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(93),
    1,
    sym_comment,
    ACTIONS(737),
    2,
    sym_preproc_directive,
    anon_sym_POUNDdefine,
    ACTIONS(735),
    20,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_interface,
    anon_sym_local,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_ATannotation,
    anon_sym_module,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    anon_sym_const,
    anon_sym_native,
    anon_sym_ATignore_literal_names,
    anon_sym_typedef,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    sym_final,
    anon_sym_ATdata_representation,
    [5571] = 19,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(240),
    1,
    anon_sym_LPAREN,
    ACTIONS(242),
    1,
    anon_sym_TILDE,
    ACTIONS(244),
    1,
    anon_sym_L,
    ACTIONS(246),
    1,
    anon_sym_DQUOTE,
    ACTIONS(248),
    1,
    anon_sym_SQUOTE,
    ACTIONS(252),
    1,
    sym_number_literal,
    STATE(94),
    1,
    sym_comment,
    STATE(100),
    1,
    sym_scoped_name,
    STATE(109),
    1,
    sym_mult_expr,
    STATE(110),
    1,
    sym_literal,
    STATE(113),
    1,
    sym_unary_expr,
    STATE(116),
    1,
    sym_unary_operator,
    STATE(118),
    1,
    sym_add_expr,
    ACTIONS(238),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(250),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(106),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5633] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(95),
    1,
    sym_comment,
    ACTIONS(741),
    4,
    anon_sym_LT,
    anon_sym_GT,
    anon_sym_SLASH,
    anon_sym_COLON,
    ACTIONS(739),
    16,
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
    anon_sym_RPAREN,
    anon_sym_LBRACE,
    anon_sym_SEMI,
    sym_identifier,
    anon_sym_RBRACK,
    [5664] = 18,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(240),
    1,
    anon_sym_LPAREN,
    ACTIONS(242),
    1,
    anon_sym_TILDE,
    ACTIONS(244),
    1,
    anon_sym_L,
    ACTIONS(246),
    1,
    anon_sym_DQUOTE,
    ACTIONS(248),
    1,
    anon_sym_SQUOTE,
    ACTIONS(252),
    1,
    sym_number_literal,
    STATE(96),
    1,
    sym_comment,
    STATE(100),
    1,
    sym_scoped_name,
    STATE(107),
    1,
    sym_mult_expr,
    STATE(110),
    1,
    sym_literal,
    STATE(113),
    1,
    sym_unary_expr,
    STATE(116),
    1,
    sym_unary_operator,
    ACTIONS(238),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(250),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(106),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5723] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(97),
    1,
    sym_comment,
    ACTIONS(745),
    4,
    anon_sym_LT,
    anon_sym_GT,
    anon_sym_SLASH,
    anon_sym_COLON,
    ACTIONS(743),
    16,
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
    anon_sym_RPAREN,
    anon_sym_LBRACE,
    anon_sym_SEMI,
    sym_identifier,
    anon_sym_RBRACK,
    [5754] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(98),
    1,
    sym_comment,
    ACTIONS(749),
    4,
    anon_sym_LT,
    anon_sym_GT,
    anon_sym_SLASH,
    anon_sym_COLON,
    ACTIONS(747),
    16,
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
    anon_sym_RPAREN,
    anon_sym_LBRACE,
    anon_sym_SEMI,
    sym_identifier,
    anon_sym_RBRACK,
    [5785] = 17,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(240),
    1,
    anon_sym_LPAREN,
    ACTIONS(242),
    1,
    anon_sym_TILDE,
    ACTIONS(244),
    1,
    anon_sym_L,
    ACTIONS(246),
    1,
    anon_sym_DQUOTE,
    ACTIONS(248),
    1,
    anon_sym_SQUOTE,
    ACTIONS(252),
    1,
    sym_number_literal,
    STATE(99),
    1,
    sym_comment,
    STATE(100),
    1,
    sym_scoped_name,
    STATE(108),
    1,
    sym_unary_expr,
    STATE(110),
    1,
    sym_literal,
    STATE(116),
    1,
    sym_unary_operator,
    ACTIONS(238),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(250),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(106),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5841] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(751),
    1,
    anon_sym_COLON_COLON,
    STATE(100),
    1,
    sym_comment,
    ACTIONS(753),
    3,
    anon_sym_GT,
    anon_sym_SLASH,
    anon_sym_COLON,
    ACTIONS(755),
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
    [5871] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(751),
    1,
    anon_sym_COLON_COLON,
    STATE(101),
    1,
    sym_comment,
    ACTIONS(757),
    3,
    anon_sym_GT,
    anon_sym_SLASH,
    anon_sym_COLON,
    ACTIONS(759),
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
    [5901] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(102),
    1,
    sym_comment,
    ACTIONS(757),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(759),
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
    [5928] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(103),
    1,
    sym_comment,
    ACTIONS(761),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(763),
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
    [5955] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(104),
    1,
    sym_comment,
    ACTIONS(765),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(767),
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
    [5982] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(105),
    1,
    sym_comment,
    ACTIONS(769),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(771),
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
    [6009] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(106),
    1,
    sym_comment,
    ACTIONS(773),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(775),
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
    [6036] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(777),
    1,
    anon_sym_GT,
    ACTIONS(783),
    1,
    anon_sym_SLASH,
    STATE(107),
    1,
    sym_comment,
    ACTIONS(781),
    2,
    anon_sym_STAR,
    anon_sym_PERCENT,
    ACTIONS(779),
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
    [6067] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(108),
    1,
    sym_comment,
    ACTIONS(785),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(787),
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
    [6094] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(783),
    1,
    anon_sym_SLASH,
    ACTIONS(789),
    1,
    anon_sym_GT,
    STATE(109),
    1,
    sym_comment,
    ACTIONS(781),
    2,
    anon_sym_STAR,
    anon_sym_PERCENT,
    ACTIONS(791),
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
    [6125] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(110),
    1,
    sym_comment,
    ACTIONS(753),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(755),
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
    [6152] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(111),
    1,
    sym_comment,
    ACTIONS(793),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(795),
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
    [6179] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(112),
    1,
    sym_comment,
    ACTIONS(797),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(799),
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
    [6206] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(113),
    1,
    sym_comment,
    ACTIONS(801),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(803),
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
    [6233] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(114),
    1,
    sym_comment,
    ACTIONS(805),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(807),
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
    [6260] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(115),
    1,
    sym_comment,
    ACTIONS(809),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(811),
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
    [6287] = 13,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(244),
    1,
    anon_sym_L,
    ACTIONS(246),
    1,
    anon_sym_DQUOTE,
    ACTIONS(248),
    1,
    anon_sym_SQUOTE,
    ACTIONS(252),
    1,
    sym_number_literal,
    ACTIONS(813),
    1,
    anon_sym_LPAREN,
    STATE(101),
    1,
    sym_scoped_name,
    STATE(102),
    1,
    sym_literal,
    STATE(116),
    1,
    sym_comment,
    ACTIONS(250),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(106),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6330] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(751),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(753),
    1,
    anon_sym_SLASH,
    ACTIONS(815),
    1,
    anon_sym_GT,
    ACTIONS(817),
    1,
    anon_sym_COMMA,
    STATE(117),
    1,
    sym_comment,
    ACTIONS(755),
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
    [6360] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(819),
    1,
    anon_sym_GT,
    STATE(118),
    1,
    sym_comment,
    ACTIONS(823),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(821),
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
    [6386] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(825),
    1,
    anon_sym_GT,
    STATE(119),
    1,
    sym_comment,
    ACTIONS(823),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(827),
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
    [6412] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(829),
    1,
    anon_sym_GT,
    STATE(120),
    1,
    sym_comment,
    ACTIONS(833),
    2,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    ACTIONS(831),
    8,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [6436] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(835),
    1,
    anon_sym_GT,
    STATE(121),
    1,
    sym_comment,
    ACTIONS(833),
    2,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    ACTIONS(837),
    8,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [6460] = 11,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(39),
    1,
    sym_dds_service,
    ACTIONS(41),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(43),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(839),
    1,
    anon_sym_interface,
    ACTIONS(841),
    1,
    anon_sym_local,
    STATE(122),
    1,
    sym_comment,
    STATE(125),
    1,
    aux_sym_interface_def_repeat1,
    STATE(155),
    1,
    sym_interface_anno,
    STATE(437),
    1,
    sym_interface_header,
    STATE(150),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    [6495] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(845),
    1,
    anon_sym_DOLLAR,
    STATE(123),
    1,
    sym_comment,
    ACTIONS(843),
    8,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [6515] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(845),
    1,
    anon_sym_DOLLAR,
    STATE(124),
    1,
    sym_comment,
    ACTIONS(847),
    8,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [6535] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(851),
    1,
    sym_dds_service,
    ACTIONS(854),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(857),
    1,
    anon_sym_ATDDSReplyTopic,
    STATE(155),
    1,
    sym_interface_anno,
    ACTIONS(849),
    2,
    anon_sym_interface,
    anon_sym_local,
    STATE(125),
    2,
    sym_comment,
    aux_sym_interface_def_repeat1,
    STATE(150),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    [6563] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(126),
    1,
    sym_comment,
    ACTIONS(860),
    4,
    anon_sym_COLON_COLON,
    anon_sym_LPAREN,
    anon_sym_DQUOTE,
    anon_sym_SQUOTE,
    ACTIONS(862),
    5,
    anon_sym_L,
    anon_sym_TRUE,
    anon_sym_FALSE,
    sym_number_literal,
    sym_identifier,
    [6583] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(866),
    1,
    anon_sym_CARET,
    STATE(127),
    1,
    sym_comment,
    ACTIONS(864),
    7,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [6602] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(866),
    1,
    anon_sym_CARET,
    STATE(128),
    1,
    sym_comment,
    ACTIONS(868),
    7,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [6621] = 10,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(870),
    1,
    anon_sym_COMMA,
    ACTIONS(872),
    1,
    anon_sym_SEMI,
    ACTIONS(874),
    1,
    anon_sym_getraises,
    ACTIONS(876),
    1,
    anon_sym_setraises,
    STATE(129),
    1,
    sym_comment,
    STATE(230),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    STATE(233),
    1,
    sym_get_excep_expr,
    STATE(372),
    1,
    sym_attr_raises_expr,
    STATE(374),
    1,
    sym_set_excep_expr,
    [6652] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(878),
    1,
    anon_sym_RPAREN,
    ACTIONS(880),
    1,
    anon_sym_in,
    STATE(41),
    1,
    sym_param_attribute,
    STATE(130),
    1,
    sym_comment,
    STATE(223),
    1,
    sym_param_dcl,
    STATE(378),
    1,
    sym_parameter_dcls,
    ACTIONS(882),
    2,
    anon_sym_out,
    anon_sym_inout,
    [6678] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(886),
    1,
    anon_sym_PIPE,
    STATE(131),
    1,
    sym_comment,
    ACTIONS(884),
    6,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [6696] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(132),
    1,
    sym_comment,
    ACTIONS(888),
    7,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    anon_sym_SEMI,
    anon_sym_raises,
    anon_sym_getraises,
    anon_sym_setraises,
    anon_sym_default,
    [6712] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(890),
    1,
    anon_sym_RBRACE,
    ACTIONS(892),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(894),
    1,
    sym_identifier,
    STATE(133),
    1,
    sym_comment,
    STATE(183),
    1,
    aux_sym_enumerator_repeat1,
    STATE(209),
    1,
    sym_enumerator,
    STATE(312),
    1,
    sym_enum_modifier,
    [6737] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(896),
    1,
    anon_sym_RBRACE,
    ACTIONS(898),
    1,
    anon_sym_default,
    ACTIONS(900),
    1,
    anon_sym_case,
    STATE(9),
    1,
    sym_case_label,
    STATE(134),
    1,
    sym_comment,
    STATE(139),
    1,
    aux_sym_union_def_repeat1,
    STATE(240),
    1,
    sym_case,
    [6762] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(898),
    1,
    anon_sym_default,
    ACTIONS(900),
    1,
    anon_sym_case,
    ACTIONS(902),
    1,
    anon_sym_RBRACE,
    STATE(9),
    1,
    sym_case_label,
    STATE(134),
    1,
    aux_sym_union_def_repeat1,
    STATE(135),
    1,
    sym_comment,
    STATE(240),
    1,
    sym_case,
    [6787] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(892),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(894),
    1,
    sym_identifier,
    ACTIONS(904),
    1,
    anon_sym_RBRACE,
    STATE(136),
    1,
    sym_comment,
    STATE(183),
    1,
    aux_sym_enumerator_repeat1,
    STATE(207),
    1,
    sym_enumerator,
    STATE(312),
    1,
    sym_enum_modifier,
    [6812] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(908),
    1,
    anon_sym_LBRACK,
    STATE(137),
    1,
    sym_comment,
    STATE(138),
    1,
    aux_sym_array_declarator_repeat1,
    STATE(176),
    1,
    sym_fixed_array_size,
    ACTIONS(906),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [6833] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(912),
    1,
    anon_sym_LBRACK,
    STATE(176),
    1,
    sym_fixed_array_size,
    STATE(138),
    2,
    sym_comment,
    aux_sym_array_declarator_repeat1,
    ACTIONS(910),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [6852] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(915),
    1,
    anon_sym_RBRACE,
    ACTIONS(917),
    1,
    anon_sym_default,
    ACTIONS(920),
    1,
    anon_sym_case,
    STATE(9),
    1,
    sym_case_label,
    STATE(240),
    1,
    sym_case,
    STATE(139),
    2,
    sym_comment,
    aux_sym_union_def_repeat1,
    [6875] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(908),
    1,
    anon_sym_LBRACK,
    STATE(137),
    1,
    aux_sym_array_declarator_repeat1,
    STATE(140),
    1,
    sym_comment,
    STATE(176),
    1,
    sym_fixed_array_size,
    ACTIONS(888),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [6896] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(141),
    1,
    sym_comment,
    ACTIONS(923),
    5,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    [6910] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(925),
    1,
    sym_identifier,
    STATE(142),
    1,
    sym_comment,
    STATE(228),
    1,
    sym_any_declarator,
    STATE(389),
    1,
    sym_any_declarators,
    STATE(270),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [6930] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(925),
    1,
    sym_identifier,
    STATE(143),
    1,
    sym_comment,
    STATE(168),
    1,
    sym_declarator,
    STATE(191),
    1,
    sym_declarators,
    STATE(241),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [6950] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(925),
    1,
    sym_identifier,
    STATE(144),
    1,
    sym_comment,
    STATE(168),
    1,
    sym_declarator,
    STATE(243),
    1,
    sym_declarators,
    STATE(241),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [6970] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(927),
    1,
    anon_sym_RBRACE,
    ACTIONS(929),
    1,
    anon_sym_bitfield,
    STATE(145),
    1,
    sym_comment,
    STATE(152),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(237),
    1,
    sym_bitfield_spec,
    STATE(326),
    1,
    sym_bitfield,
    [6992] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(146),
    1,
    sym_comment,
    ACTIONS(931),
    5,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    [7006] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(870),
    1,
    anon_sym_COMMA,
    ACTIONS(933),
    1,
    anon_sym_SEMI,
    ACTIONS(935),
    1,
    anon_sym_raises,
    STATE(147),
    1,
    sym_comment,
    STATE(204),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    STATE(411),
    1,
    sym_raises_expr,
    [7028] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(929),
    1,
    anon_sym_bitfield,
    ACTIONS(937),
    1,
    anon_sym_RBRACE,
    STATE(148),
    1,
    sym_comment,
    STATE(156),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(237),
    1,
    sym_bitfield_spec,
    STATE(326),
    1,
    sym_bitfield,
    [7050] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(880),
    1,
    anon_sym_in,
    STATE(41),
    1,
    sym_param_attribute,
    STATE(149),
    1,
    sym_comment,
    STATE(292),
    1,
    sym_param_dcl,
    ACTIONS(882),
    2,
    anon_sym_out,
    anon_sym_inout,
    [7070] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(150),
    1,
    sym_comment,
    ACTIONS(939),
    5,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    [7084] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(929),
    1,
    anon_sym_bitfield,
    ACTIONS(941),
    1,
    anon_sym_RBRACE,
    STATE(148),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(151),
    1,
    sym_comment,
    STATE(237),
    1,
    sym_bitfield_spec,
    STATE(326),
    1,
    sym_bitfield,
    [7106] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(929),
    1,
    anon_sym_bitfield,
    ACTIONS(943),
    1,
    anon_sym_RBRACE,
    STATE(152),
    1,
    sym_comment,
    STATE(156),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(237),
    1,
    sym_bitfield_spec,
    STATE(326),
    1,
    sym_bitfield,
    [7128] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(945),
    1,
    anon_sym_struct,
    ACTIONS(947),
    1,
    sym_final,
    ACTIONS(950),
    1,
    anon_sym_ATdata_representation,
    STATE(250),
    1,
    sym_data_representation,
    STATE(153),
    2,
    sym_comment,
    aux_sym_struct_def_repeat1,
    [7148] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(892),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(894),
    1,
    sym_identifier,
    STATE(154),
    1,
    sym_comment,
    STATE(183),
    1,
    aux_sym_enumerator_repeat1,
    STATE(312),
    1,
    sym_enum_modifier,
    STATE(342),
    1,
    sym_enumerator,
    [7170] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(155),
    1,
    sym_comment,
    ACTIONS(953),
    5,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    [7184] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(955),
    1,
    anon_sym_RBRACE,
    ACTIONS(957),
    1,
    anon_sym_bitfield,
    STATE(237),
    1,
    sym_bitfield_spec,
    STATE(326),
    1,
    sym_bitfield,
    STATE(156),
    2,
    sym_comment,
    aux_sym_bitset_dcl_repeat1,
    [7204] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(45),
    1,
    sym_final,
    ACTIONS(47),
    1,
    anon_sym_ATdata_representation,
    ACTIONS(960),
    1,
    anon_sym_struct,
    STATE(153),
    1,
    aux_sym_struct_def_repeat1,
    STATE(157),
    1,
    sym_comment,
    STATE(250),
    1,
    sym_data_representation,
    [7226] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(158),
    1,
    sym_comment,
    ACTIONS(962),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [7239] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(159),
    1,
    sym_comment,
    ACTIONS(964),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [7252] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(966),
    1,
    anon_sym_RPAREN,
    ACTIONS(968),
    1,
    anon_sym_XCDR,
    ACTIONS(970),
    1,
    anon_sym_XCDR2,
    STATE(160),
    1,
    sym_comment,
    STATE(173),
    1,
    aux_sym_data_representation_repeat1,
    [7271] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(972),
    1,
    anon_sym_COMMA,
    ACTIONS(975),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    STATE(161),
    2,
    sym_comment,
    aux_sym_declarators_repeat1,
    [7286] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(977),
    1,
    sym_identifier,
    STATE(162),
    1,
    sym_comment,
    STATE(211),
    1,
    sym_interface_name,
    STATE(242),
    1,
    sym_scoped_name,
    [7305] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(979),
    1,
    anon_sym_COMMA,
    STATE(161),
    1,
    aux_sym_declarators_repeat1,
    STATE(163),
    1,
    sym_comment,
    ACTIONS(981),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    [7322] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(751),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(983),
    1,
    anon_sym_COMMA,
    ACTIONS(985),
    1,
    anon_sym_RPAREN,
    STATE(164),
    1,
    sym_comment,
    STATE(260),
    1,
    aux_sym_raises_expr_repeat1,
    [7341] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(977),
    1,
    sym_identifier,
    STATE(165),
    1,
    sym_comment,
    STATE(242),
    1,
    sym_scoped_name,
    STATE(325),
    1,
    sym_interface_name,
    [7360] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(925),
    1,
    sym_identifier,
    STATE(166),
    1,
    sym_comment,
    STATE(465),
    1,
    sym_declarator,
    STATE(241),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [7377] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(751),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(983),
    1,
    anon_sym_COMMA,
    ACTIONS(987),
    1,
    anon_sym_RPAREN,
    STATE(167),
    1,
    sym_comment,
    STATE(256),
    1,
    aux_sym_raises_expr_repeat1,
    [7396] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(979),
    1,
    anon_sym_COMMA,
    STATE(163),
    1,
    aux_sym_declarators_repeat1,
    STATE(168),
    1,
    sym_comment,
    ACTIONS(989),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    [7413] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(991),
    1,
    anon_sym_LBRACE,
    ACTIONS(993),
    1,
    anon_sym_COLON,
    ACTIONS(995),
    1,
    anon_sym_SEMI,
    STATE(169),
    1,
    sym_comment,
    STATE(398),
    1,
    sym_interface_inheritance_spec,
    [7432] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(997),
    1,
    anon_sym_LBRACE,
    ACTIONS(999),
    1,
    anon_sym_COLON,
    STATE(170),
    1,
    sym_comment,
    ACTIONS(1001),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [7449] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1003),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(1006),
    1,
    sym_identifier,
    STATE(312),
    1,
    sym_enum_modifier,
    STATE(171),
    2,
    sym_comment,
    aux_sym_enumerator_repeat1,
    [7466] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(172),
    1,
    sym_comment,
    ACTIONS(1008),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [7479] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1010),
    1,
    anon_sym_RPAREN,
    ACTIONS(1012),
    1,
    anon_sym_XCDR,
    ACTIONS(1015),
    1,
    anon_sym_XCDR2,
    STATE(173),
    2,
    sym_comment,
    aux_sym_data_representation_repeat1,
    [7496] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(925),
    1,
    sym_identifier,
    STATE(174),
    1,
    sym_comment,
    STATE(306),
    1,
    sym_any_declarator,
    STATE(270),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [7513] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(175),
    1,
    sym_comment,
    ACTIONS(1018),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [7526] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(176),
    1,
    sym_comment,
    ACTIONS(1020),
    4,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_LBRACK,
    [7539] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(177),
    1,
    sym_comment,
    ACTIONS(1022),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [7552] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(178),
    1,
    sym_comment,
    ACTIONS(1024),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [7565] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(179),
    1,
    sym_comment,
    ACTIONS(1026),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [7578] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(180),
    1,
    sym_comment,
    ACTIONS(1028),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [7591] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(181),
    1,
    sym_comment,
    ACTIONS(1030),
    4,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_LBRACK,
    [7604] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(182),
    1,
    sym_comment,
    ACTIONS(1032),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [7617] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(892),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(1034),
    1,
    sym_identifier,
    STATE(171),
    1,
    aux_sym_enumerator_repeat1,
    STATE(183),
    1,
    sym_comment,
    STATE(312),
    1,
    sym_enum_modifier,
    [7636] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1036),
    1,
    anon_sym_LT,
    STATE(184),
    1,
    sym_comment,
    ACTIONS(1038),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [7651] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(185),
    1,
    sym_comment,
    ACTIONS(1040),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [7664] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(925),
    1,
    sym_identifier,
    STATE(186),
    1,
    sym_comment,
    STATE(212),
    1,
    sym_declarator,
    STATE(241),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [7681] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(187),
    1,
    sym_comment,
    ACTIONS(1042),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [7693] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(188),
    1,
    sym_comment,
    ACTIONS(1044),
    3,
    anon_sym_struct,
    sym_final,
    anon_sym_ATdata_representation,
    [7705] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(977),
    1,
    sym_identifier,
    STATE(189),
    1,
    sym_comment,
    STATE(319),
    1,
    sym_scoped_name,
    [7721] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1046),
    1,
    anon_sym_COMMA,
    ACTIONS(1049),
    1,
    anon_sym_LBRACE,
    STATE(190),
    2,
    sym_comment,
    aux_sym_interface_inheritance_spec_repeat1,
    [7735] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1051),
    1,
    anon_sym_SEMI,
    ACTIONS(1053),
    1,
    anon_sym_default,
    STATE(191),
    1,
    sym_comment,
    STATE(391),
    1,
    sym_default,
    [7751] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1055),
    1,
    anon_sym_RBRACE,
    ACTIONS(1057),
    1,
    sym_identifier,
    STATE(192),
    1,
    sym_comment,
    STATE(245),
    1,
    sym_bit_value,
    [7767] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(977),
    1,
    sym_identifier,
    STATE(193),
    1,
    sym_comment,
    STATE(324),
    1,
    sym_scoped_name,
    [7783] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(991),
    1,
    anon_sym_LBRACE,
    ACTIONS(993),
    1,
    anon_sym_COLON,
    STATE(194),
    1,
    sym_comment,
    STATE(398),
    1,
    sym_interface_inheritance_spec,
    [7799] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(977),
    1,
    sym_identifier,
    STATE(195),
    1,
    sym_comment,
    STATE(297),
    1,
    sym_scoped_name,
    [7815] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(968),
    1,
    anon_sym_XCDR,
    ACTIONS(970),
    1,
    anon_sym_XCDR2,
    STATE(160),
    1,
    aux_sym_data_representation_repeat1,
    STATE(196),
    1,
    sym_comment,
    [7831] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(197),
    1,
    sym_comment,
    ACTIONS(817),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [7843] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(198),
    1,
    sym_comment,
    ACTIONS(1059),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [7855] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(751),
    1,
    anon_sym_COLON_COLON,
    STATE(199),
    1,
    sym_comment,
    ACTIONS(817),
    2,
    anon_sym_COMMA,
    sym_identifier,
    [7869] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(200),
    1,
    sym_comment,
    ACTIONS(1061),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [7881] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(201),
    1,
    sym_comment,
    ACTIONS(1063),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [7893] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(202),
    1,
    sym_comment,
    ACTIONS(1065),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [7905] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(203),
    1,
    sym_comment,
    ACTIONS(1067),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [7917] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(870),
    1,
    anon_sym_COMMA,
    ACTIONS(1069),
    1,
    anon_sym_SEMI,
    STATE(204),
    1,
    sym_comment,
    STATE(218),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    [7933] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1071),
    1,
    anon_sym_GT,
    ACTIONS(1073),
    1,
    anon_sym_COMMA,
    STATE(205),
    1,
    sym_comment,
    STATE(252),
    1,
    aux_sym_actual_parameters_repeat1,
    [7949] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(977),
    1,
    sym_identifier,
    STATE(167),
    1,
    sym_scoped_name,
    STATE(206),
    1,
    sym_comment,
    [7965] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1075),
    1,
    anon_sym_COMMA,
    ACTIONS(1077),
    1,
    anon_sym_RBRACE,
    STATE(207),
    1,
    sym_comment,
    STATE(221),
    1,
    aux_sym_enum_dcl_repeat1,
    [7981] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(208),
    1,
    sym_comment,
    ACTIONS(1079),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [7993] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(904),
    1,
    anon_sym_RBRACE,
    ACTIONS(1075),
    1,
    anon_sym_COMMA,
    STATE(209),
    1,
    sym_comment,
    STATE(239),
    1,
    aux_sym_enum_dcl_repeat1,
    [8009] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1081),
    1,
    sym_identifier,
    STATE(147),
    1,
    sym_simple_declarator,
    STATE(210),
    1,
    sym_comment,
    STATE(371),
    1,
    sym_readonly_attr_declarator,
    [8025] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1083),
    1,
    anon_sym_COMMA,
    ACTIONS(1085),
    1,
    anon_sym_LBRACE,
    STATE(211),
    1,
    sym_comment,
    STATE(249),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    [8041] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(212),
    1,
    sym_comment,
    ACTIONS(975),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [8053] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1087),
    1,
    anon_sym_SEMI,
    ACTIONS(1089),
    1,
    sym_identifier,
    STATE(213),
    2,
    sym_comment,
    aux_sym_bitfield_repeat1,
    [8067] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1092),
    1,
    anon_sym_COMMA,
    ACTIONS(1095),
    1,
    anon_sym_SEMI,
    STATE(214),
    2,
    sym_comment,
    aux_sym_any_declarators_repeat1,
    [8081] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(215),
    1,
    sym_comment,
    ACTIONS(1097),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [8093] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1101),
    1,
    anon_sym_XCDR,
    STATE(216),
    1,
    sym_comment,
    ACTIONS(1099),
    2,
    anon_sym_RPAREN,
    anon_sym_XCDR2,
    [8107] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1103),
    1,
    anon_sym_GT,
    ACTIONS(1105),
    1,
    anon_sym_COMMA,
    STATE(217),
    1,
    sym_comment,
    STATE(262),
    1,
    aux_sym_formal_parameters_repeat1,
    [8123] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1107),
    1,
    anon_sym_COMMA,
    ACTIONS(1110),
    1,
    anon_sym_SEMI,
    STATE(218),
    2,
    sym_comment,
    aux_sym_readonly_attr_declarator_repeat1,
    [8137] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(935),
    1,
    anon_sym_raises,
    ACTIONS(1112),
    1,
    anon_sym_SEMI,
    STATE(219),
    1,
    sym_comment,
    STATE(444),
    1,
    sym_raises_expr,
    [8153] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1114),
    1,
    anon_sym_COMMA,
    ACTIONS(1117),
    1,
    anon_sym_RBRACE,
    STATE(220),
    2,
    sym_comment,
    aux_sym_bitmask_dcl_repeat1,
    [8167] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1075),
    1,
    anon_sym_COMMA,
    ACTIONS(1119),
    1,
    anon_sym_RBRACE,
    STATE(221),
    1,
    sym_comment,
    STATE(253),
    1,
    aux_sym_enum_dcl_repeat1,
    [8183] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1121),
    1,
    anon_sym_COLON_COLON,
    STATE(222),
    1,
    sym_comment,
    ACTIONS(817),
    2,
    anon_sym_GT,
    anon_sym_COMMA,
    [8197] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1123),
    1,
    anon_sym_COMMA,
    ACTIONS(1125),
    1,
    anon_sym_RPAREN,
    STATE(223),
    1,
    sym_comment,
    STATE(235),
    1,
    aux_sym_parameter_dcls_repeat1,
    [8213] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(935),
    1,
    anon_sym_raises,
    ACTIONS(1127),
    1,
    anon_sym_SEMI,
    STATE(224),
    1,
    sym_comment,
    STATE(419),
    1,
    sym_raises_expr,
    [8229] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1129),
    1,
    anon_sym_COMMA,
    ACTIONS(1131),
    1,
    anon_sym_SEMI,
    STATE(214),
    1,
    aux_sym_any_declarators_repeat1,
    STATE(225),
    1,
    sym_comment,
    [8245] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(226),
    1,
    sym_comment,
    ACTIONS(1133),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [8257] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(227),
    1,
    sym_comment,
    ACTIONS(1135),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [8269] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1129),
    1,
    anon_sym_COMMA,
    ACTIONS(1137),
    1,
    anon_sym_SEMI,
    STATE(225),
    1,
    aux_sym_any_declarators_repeat1,
    STATE(228),
    1,
    sym_comment,
    [8285] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1139),
    1,
    anon_sym_GT,
    ACTIONS(1141),
    1,
    anon_sym_COMMA,
    STATE(229),
    2,
    sym_comment,
    aux_sym_formal_parameters_repeat1,
    [8299] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(870),
    1,
    anon_sym_COMMA,
    ACTIONS(1144),
    1,
    anon_sym_SEMI,
    STATE(218),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    STATE(230),
    1,
    sym_comment,
    [8315] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1081),
    1,
    sym_identifier,
    STATE(129),
    1,
    sym_simple_declarator,
    STATE(231),
    1,
    sym_comment,
    STATE(414),
    1,
    sym_attr_declarator,
    [8331] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1146),
    1,
    anon_sym_SEMI,
    ACTIONS(1148),
    1,
    anon_sym_switch,
    ACTIONS(1150),
    1,
    sym_identifier,
    STATE(232),
    1,
    sym_comment,
    [8347] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(876),
    1,
    anon_sym_setraises,
    ACTIONS(1152),
    1,
    anon_sym_SEMI,
    STATE(233),
    1,
    sym_comment,
    STATE(417),
    1,
    sym_set_excep_expr,
    [8363] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(234),
    1,
    sym_comment,
    ACTIONS(1154),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [8375] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1123),
    1,
    anon_sym_COMMA,
    ACTIONS(1156),
    1,
    anon_sym_RPAREN,
    STATE(235),
    1,
    sym_comment,
    STATE(246),
    1,
    aux_sym_parameter_dcls_repeat1,
    [8391] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(747),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1158),
    1,
    anon_sym_LT,
    ACTIONS(1160),
    1,
    anon_sym_LBRACE,
    STATE(236),
    1,
    sym_comment,
    [8407] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1162),
    1,
    anon_sym_SEMI,
    ACTIONS(1164),
    1,
    sym_identifier,
    STATE(237),
    1,
    sym_comment,
    STATE(254),
    1,
    aux_sym_bitfield_repeat1,
    [8423] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(977),
    1,
    sym_identifier,
    STATE(238),
    1,
    sym_comment,
    STATE(317),
    1,
    sym_scoped_name,
    [8439] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1075),
    1,
    anon_sym_COMMA,
    ACTIONS(1077),
    1,
    anon_sym_RBRACE,
    STATE(239),
    1,
    sym_comment,
    STATE(253),
    1,
    aux_sym_enum_dcl_repeat1,
    [8455] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(240),
    1,
    sym_comment,
    ACTIONS(1166),
    3,
    anon_sym_RBRACE,
    anon_sym_default,
    anon_sym_case,
    [8467] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(241),
    1,
    sym_comment,
    ACTIONS(1168),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [8479] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(751),
    1,
    anon_sym_COLON_COLON,
    STATE(242),
    1,
    sym_comment,
    ACTIONS(1170),
    2,
    anon_sym_COMMA,
    anon_sym_LBRACE,
    [8493] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1053),
    1,
    anon_sym_default,
    ACTIONS(1172),
    1,
    anon_sym_SEMI,
    STATE(243),
    1,
    sym_comment,
    STATE(348),
    1,
    sym_default,
    [8509] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(977),
    1,
    sym_identifier,
    STATE(164),
    1,
    sym_scoped_name,
    STATE(244),
    1,
    sym_comment,
    [8525] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1174),
    1,
    anon_sym_COMMA,
    ACTIONS(1176),
    1,
    anon_sym_RBRACE,
    STATE(245),
    1,
    sym_comment,
    STATE(258),
    1,
    aux_sym_bitmask_dcl_repeat1,
    [8541] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1178),
    1,
    anon_sym_COMMA,
    ACTIONS(1181),
    1,
    anon_sym_RPAREN,
    STATE(246),
    2,
    sym_comment,
    aux_sym_parameter_dcls_repeat1,
    [8555] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1183),
    1,
    anon_sym_GT,
    ACTIONS(1185),
    1,
    anon_sym_COMMA,
    STATE(247),
    2,
    sym_comment,
    aux_sym_actual_parameters_repeat1,
    [8569] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(248),
    1,
    sym_comment,
    ACTIONS(1188),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [8581] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1083),
    1,
    anon_sym_COMMA,
    ACTIONS(1190),
    1,
    anon_sym_LBRACE,
    STATE(190),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    STATE(249),
    1,
    sym_comment,
    [8597] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(250),
    1,
    sym_comment,
    ACTIONS(1192),
    3,
    anon_sym_struct,
    sym_final,
    anon_sym_ATdata_representation,
    [8609] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(251),
    1,
    sym_comment,
    ACTIONS(1194),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [8621] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1073),
    1,
    anon_sym_COMMA,
    ACTIONS(1196),
    1,
    anon_sym_GT,
    STATE(247),
    1,
    aux_sym_actual_parameters_repeat1,
    STATE(252),
    1,
    sym_comment,
    [8637] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1198),
    1,
    anon_sym_COMMA,
    ACTIONS(1201),
    1,
    anon_sym_RBRACE,
    STATE(253),
    2,
    sym_comment,
    aux_sym_enum_dcl_repeat1,
    [8651] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1164),
    1,
    sym_identifier,
    ACTIONS(1203),
    1,
    anon_sym_SEMI,
    STATE(213),
    1,
    aux_sym_bitfield_repeat1,
    STATE(254),
    1,
    sym_comment,
    [8667] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(977),
    1,
    sym_identifier,
    STATE(255),
    1,
    sym_comment,
    STATE(263),
    1,
    sym_scoped_name,
    [8683] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(983),
    1,
    anon_sym_COMMA,
    ACTIONS(1205),
    1,
    anon_sym_RPAREN,
    STATE(256),
    1,
    sym_comment,
    STATE(264),
    1,
    aux_sym_raises_expr_repeat1,
    [8699] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1207),
    1,
    anon_sym_GT,
    ACTIONS(1209),
    1,
    anon_sym_COMMA,
    STATE(257),
    1,
    sym_comment,
    STATE(265),
    1,
    aux_sym_formal_parameter_names_repeat1,
    [8715] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1174),
    1,
    anon_sym_COMMA,
    ACTIONS(1211),
    1,
    anon_sym_RBRACE,
    STATE(220),
    1,
    aux_sym_bitmask_dcl_repeat1,
    STATE(258),
    1,
    sym_comment,
    [8731] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(259),
    1,
    sym_comment,
    ACTIONS(1213),
    3,
    anon_sym_RBRACE,
    anon_sym_default,
    anon_sym_case,
    [8743] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(983),
    1,
    anon_sym_COMMA,
    ACTIONS(1215),
    1,
    anon_sym_RPAREN,
    STATE(260),
    1,
    sym_comment,
    STATE(264),
    1,
    aux_sym_raises_expr_repeat1,
    [8759] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1217),
    1,
    sym_identifier,
    STATE(261),
    1,
    sym_comment,
    STATE(298),
    1,
    sym_scoped_name,
    [8775] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1105),
    1,
    anon_sym_COMMA,
    ACTIONS(1219),
    1,
    anon_sym_GT,
    STATE(229),
    1,
    aux_sym_formal_parameters_repeat1,
    STATE(262),
    1,
    sym_comment,
    [8791] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(751),
    1,
    anon_sym_COLON_COLON,
    STATE(263),
    1,
    sym_comment,
    ACTIONS(1221),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [8805] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1221),
    1,
    anon_sym_RPAREN,
    ACTIONS(1223),
    1,
    anon_sym_COMMA,
    STATE(264),
    2,
    sym_comment,
    aux_sym_raises_expr_repeat1,
    [8819] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1209),
    1,
    anon_sym_COMMA,
    ACTIONS(1226),
    1,
    anon_sym_GT,
    STATE(265),
    1,
    sym_comment,
    STATE(266),
    1,
    aux_sym_formal_parameter_names_repeat1,
    [8835] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1228),
    1,
    anon_sym_GT,
    ACTIONS(1230),
    1,
    anon_sym_COMMA,
    STATE(266),
    2,
    sym_comment,
    aux_sym_formal_parameter_names_repeat1,
    [8849] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(267),
    1,
    sym_comment,
    ACTIONS(747),
    3,
    anon_sym_COLON_COLON,
    anon_sym_GT,
    anon_sym_COMMA,
    [8861] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(268),
    1,
    sym_comment,
    ACTIONS(743),
    3,
    anon_sym_COLON_COLON,
    anon_sym_GT,
    anon_sym_COMMA,
    [8873] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(269),
    1,
    sym_comment,
    ACTIONS(739),
    3,
    anon_sym_COLON_COLON,
    anon_sym_GT,
    anon_sym_COMMA,
    [8885] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(270),
    1,
    sym_comment,
    ACTIONS(1233),
    2,
    anon_sym_COMMA,
    anon_sym_SEMI,
    [8896] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1081),
    1,
    sym_identifier,
    STATE(271),
    1,
    sym_comment,
    STATE(280),
    1,
    sym_simple_declarator,
    [8909] = 4,
    ACTIONS(1235),
    1,
    aux_sym_preproc_call_token1,
    ACTIONS(1237),
    1,
    sym_preproc_arg,
    ACTIONS(1239),
    1,
    anon_sym_SLASH_SLASH,
    STATE(272),
    1,
    sym_comment,
    [8922] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(839),
    1,
    anon_sym_interface,
    STATE(273),
    1,
    sym_comment,
    STATE(437),
    1,
    sym_interface_header,
    [8935] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(274),
    1,
    sym_comment,
    ACTIONS(1228),
    2,
    anon_sym_GT,
    anon_sym_COMMA,
    [8946] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(275),
    1,
    sym_comment,
    ACTIONS(1241),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [8957] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1081),
    1,
    sym_identifier,
    STATE(276),
    1,
    sym_comment,
    STATE(409),
    1,
    sym_simple_declarator,
    [8970] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1057),
    1,
    sym_identifier,
    STATE(277),
    1,
    sym_comment,
    STATE(332),
    1,
    sym_bit_value,
    [8983] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(278),
    1,
    sym_comment,
    ACTIONS(1243),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [8994] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(279),
    1,
    sym_comment,
    ACTIONS(1245),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9005] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1247),
    1,
    anon_sym_SEMI,
    ACTIONS(1249),
    1,
    anon_sym_default,
    STATE(280),
    1,
    sym_comment,
    [9018] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(281),
    1,
    sym_comment,
    ACTIONS(1251),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9029] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(282),
    1,
    sym_comment,
    ACTIONS(1253),
    2,
    anon_sym_GT,
    anon_sym_COMMA,
    [9040] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1255),
    1,
    sym_identifier,
    STATE(283),
    1,
    sym_comment,
    STATE(463),
    1,
    sym_formal_parameter_names,
    [9053] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(284),
    1,
    sym_comment,
    ACTIONS(1257),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9064] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(285),
    1,
    sym_comment,
    ACTIONS(1259),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9075] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(286),
    1,
    sym_comment,
    ACTIONS(1261),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9086] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(287),
    1,
    sym_comment,
    ACTIONS(1263),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9097] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(288),
    1,
    sym_comment,
    ACTIONS(1265),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9108] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(289),
    1,
    sym_comment,
    ACTIONS(1267),
    2,
    anon_sym_RBRACE,
    anon_sym_bitfield,
    [9119] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(290),
    1,
    sym_comment,
    ACTIONS(1269),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [9130] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(751),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1271),
    1,
    anon_sym_RPAREN,
    STATE(291),
    1,
    sym_comment,
    [9143] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(292),
    1,
    sym_comment,
    ACTIONS(1181),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [9154] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(293),
    1,
    sym_comment,
    ACTIONS(1273),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9165] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(294),
    1,
    sym_comment,
    ACTIONS(1275),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9176] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1277),
    1,
    anon_sym_LBRACE,
    ACTIONS(1279),
    1,
    anon_sym_COLON,
    STATE(295),
    1,
    sym_comment,
    [9189] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(296),
    1,
    sym_comment,
    ACTIONS(1281),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [9200] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(751),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1283),
    1,
    anon_sym_LT,
    STATE(297),
    1,
    sym_comment,
    [9213] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(751),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1285),
    1,
    anon_sym_LT,
    STATE(298),
    1,
    sym_comment,
    [9226] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(299),
    1,
    sym_comment,
    ACTIONS(1287),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9237] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(300),
    1,
    sym_comment,
    ACTIONS(1289),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9248] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1081),
    1,
    sym_identifier,
    STATE(290),
    1,
    sym_simple_declarator,
    STATE(301),
    1,
    sym_comment,
    [9261] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(302),
    1,
    sym_comment,
    ACTIONS(1291),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [9272] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(751),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1293),
    1,
    sym_identifier,
    STATE(303),
    1,
    sym_comment,
    [9285] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(304),
    1,
    sym_comment,
    ACTIONS(1110),
    2,
    anon_sym_COMMA,
    anon_sym_SEMI,
    [9296] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(305),
    1,
    sym_comment,
    ACTIONS(1295),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9307] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(306),
    1,
    sym_comment,
    ACTIONS(1095),
    2,
    anon_sym_COMMA,
    anon_sym_SEMI,
    [9318] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(839),
    1,
    anon_sym_interface,
    STATE(307),
    1,
    sym_comment,
    STATE(373),
    1,
    sym_interface_header,
    [9331] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(308),
    1,
    sym_comment,
    ACTIONS(1297),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9342] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(309),
    1,
    sym_comment,
    ACTIONS(1299),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9353] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(310),
    1,
    sym_comment,
    ACTIONS(1301),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9364] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(751),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1293),
    1,
    sym_identifier,
    STATE(311),
    1,
    sym_comment,
    [9377] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(312),
    1,
    sym_comment,
    ACTIONS(1303),
    2,
    anon_sym_ATdefault_literal,
    sym_identifier,
    [9388] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(313),
    1,
    sym_comment,
    ACTIONS(1305),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [9399] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(314),
    1,
    sym_comment,
    ACTIONS(1307),
    2,
    anon_sym_ATdefault_literal,
    sym_identifier,
    [9410] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(315),
    1,
    sym_comment,
    ACTIONS(1309),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9421] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(316),
    1,
    sym_comment,
    ACTIONS(1311),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9432] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(751),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1313),
    1,
    anon_sym_LBRACE,
    STATE(317),
    1,
    sym_comment,
    [9445] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1081),
    1,
    sym_identifier,
    STATE(304),
    1,
    sym_simple_declarator,
    STATE(318),
    1,
    sym_comment,
    [9458] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(751),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1315),
    1,
    anon_sym_LBRACE,
    STATE(319),
    1,
    sym_comment,
    [9471] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(320),
    1,
    sym_comment,
    ACTIONS(1317),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9482] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(321),
    1,
    sym_comment,
    ACTIONS(1319),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [9493] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(322),
    1,
    sym_comment,
    ACTIONS(1321),
    2,
    anon_sym_GT,
    anon_sym_COMMA,
    [9504] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(323),
    1,
    sym_comment,
    ACTIONS(1323),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9515] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(751),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1325),
    1,
    anon_sym_LBRACE,
    STATE(324),
    1,
    sym_comment,
    [9528] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(325),
    1,
    sym_comment,
    ACTIONS(1049),
    2,
    anon_sym_COMMA,
    anon_sym_LBRACE,
    [9539] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(326),
    1,
    sym_comment,
    ACTIONS(1327),
    2,
    anon_sym_RBRACE,
    anon_sym_bitfield,
    [9550] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1329),
    1,
    anon_sym_GT,
    ACTIONS(1331),
    1,
    anon_sym_COMMA,
    STATE(327),
    1,
    sym_comment,
    [9563] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(328),
    1,
    sym_comment,
    ACTIONS(1333),
    2,
    anon_sym_RBRACE,
    anon_sym_bitfield,
    [9574] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1335),
    1,
    anon_sym_DQUOTE,
    ACTIONS(1337),
    1,
    anon_sym_SQUOTE,
    STATE(329),
    1,
    sym_comment,
    [9587] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(330),
    1,
    sym_comment,
    ACTIONS(1339),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9598] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1341),
    1,
    anon_sym_LPAREN,
    STATE(302),
    1,
    sym_exception_list,
    STATE(331),
    1,
    sym_comment,
    [9611] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(332),
    1,
    sym_comment,
    ACTIONS(1117),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [9622] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(333),
    1,
    sym_comment,
    ACTIONS(1343),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9633] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1341),
    1,
    anon_sym_LPAREN,
    STATE(334),
    1,
    sym_comment,
    STATE(416),
    1,
    sym_exception_list,
    [9646] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(335),
    1,
    sym_comment,
    ACTIONS(1183),
    2,
    anon_sym_GT,
    anon_sym_COMMA,
    [9657] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1345),
    1,
    anon_sym_GT,
    ACTIONS(1347),
    1,
    anon_sym_COMMA,
    STATE(336),
    1,
    sym_comment,
    [9670] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1349),
    1,
    anon_sym_LT,
    ACTIONS(1351),
    1,
    sym_identifier,
    STATE(337),
    1,
    sym_comment,
    [9683] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(338),
    1,
    sym_comment,
    ACTIONS(1139),
    2,
    anon_sym_GT,
    anon_sym_COMMA,
    [9694] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(339),
    1,
    sym_comment,
    ACTIONS(1353),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9705] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(340),
    1,
    sym_comment,
    ACTIONS(1355),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9716] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1357),
    1,
    anon_sym_LBRACE,
    ACTIONS(1359),
    1,
    anon_sym_COLON,
    STATE(341),
    1,
    sym_comment,
    [9729] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(342),
    1,
    sym_comment,
    ACTIONS(1201),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [9740] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1361),
    1,
    sym_identifier,
    STATE(343),
    1,
    sym_comment,
    [9750] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1363),
    1,
    anon_sym_RBRACK,
    STATE(344),
    1,
    sym_comment,
    [9760] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1365),
    1,
    anon_sym_RBRACE,
    STATE(345),
    1,
    sym_comment,
    [9770] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1367),
    1,
    anon_sym_DQUOTE,
    STATE(346),
    1,
    sym_comment,
    [9780] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1369),
    1,
    anon_sym_GT,
    STATE(347),
    1,
    sym_comment,
    [9790] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1371),
    1,
    anon_sym_SEMI,
    STATE(348),
    1,
    sym_comment,
    [9800] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1373),
    1,
    aux_sym_char_literal_token1,
    STATE(349),
    1,
    sym_comment,
    [9810] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1375),
    1,
    aux_sym_string_literal_token1,
    STATE(350),
    1,
    sym_comment,
    [9820] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1377),
    1,
    anon_sym_SEMI,
    STATE(351),
    1,
    sym_comment,
    [9830] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1379),
    1,
    sym_identifier,
    STATE(352),
    1,
    sym_comment,
    [9840] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1381),
    1,
    anon_sym_GT,
    STATE(353),
    1,
    sym_comment,
    [9850] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1351),
    1,
    sym_identifier,
    STATE(354),
    1,
    sym_comment,
    [9860] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1383),
    1,
    anon_sym_SEMI,
    STATE(355),
    1,
    sym_comment,
    [9870] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1385),
    1,
    sym_identifier,
    STATE(356),
    1,
    sym_comment,
    [9880] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1387),
    1,
    anon_sym_DQUOTE,
    STATE(357),
    1,
    sym_comment,
    [9890] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1389),
    1,
    anon_sym_SQUOTE,
    STATE(358),
    1,
    sym_comment,
    [9900] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1391),
    1,
    anon_sym_SEMI,
    STATE(359),
    1,
    sym_comment,
    [9910] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1393),
    1,
    sym_identifier,
    STATE(360),
    1,
    sym_comment,
    [9920] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1395),
    1,
    anon_sym_RPAREN,
    STATE(361),
    1,
    sym_comment,
    [9930] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1397),
    1,
    anon_sym_SEMI,
    STATE(362),
    1,
    sym_comment,
    [9940] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1399),
    1,
    anon_sym_LT,
    STATE(363),
    1,
    sym_comment,
    [9950] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1401),
    1,
    anon_sym_LBRACE,
    STATE(364),
    1,
    sym_comment,
    [9960] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1403),
    1,
    anon_sym_attribute,
    STATE(365),
    1,
    sym_comment,
    [9970] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1405),
    1,
    anon_sym_SEMI,
    STATE(366),
    1,
    sym_comment,
    [9980] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1407),
    1,
    anon_sym_GT,
    STATE(367),
    1,
    sym_comment,
    [9990] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1409),
    1,
    sym_identifier,
    STATE(368),
    1,
    sym_comment,
    [10000] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1411),
    1,
    anon_sym_LPAREN_DQUOTE,
    STATE(369),
    1,
    sym_comment,
    [10010] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1413),
    1,
    anon_sym_SEMI,
    STATE(370),
    1,
    sym_comment,
    [10020] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1415),
    1,
    anon_sym_SEMI,
    STATE(371),
    1,
    sym_comment,
    [10030] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1144),
    1,
    anon_sym_SEMI,
    STATE(372),
    1,
    sym_comment,
    [10040] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1417),
    1,
    anon_sym_LBRACE,
    STATE(373),
    1,
    sym_comment,
    [10050] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1152),
    1,
    anon_sym_SEMI,
    STATE(374),
    1,
    sym_comment,
    [10060] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1419),
    1,
    anon_sym_LBRACE,
    STATE(375),
    1,
    sym_comment,
    [10070] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1421),
    1,
    anon_sym_SEMI,
    STATE(376),
    1,
    sym_comment,
    [10080] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1423),
    1,
    anon_sym_RPAREN,
    STATE(377),
    1,
    sym_comment,
    [10090] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1425),
    1,
    anon_sym_RPAREN,
    STATE(378),
    1,
    sym_comment,
    [10100] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(121),
    1,
    anon_sym_RBRACE,
    STATE(379),
    1,
    sym_comment,
    [10110] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1427),
    1,
    anon_sym_SEMI,
    STATE(380),
    1,
    sym_comment,
    [10120] = 3,
    ACTIONS(1239),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1429),
    1,
    aux_sym_comment_token1,
    STATE(381),
    1,
    sym_comment,
    [10130] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1431),
    1,
    anon_sym_SEMI,
    STATE(382),
    1,
    sym_comment,
    [10140] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1433),
    1,
    aux_sym_string_literal_token1,
    STATE(383),
    1,
    sym_comment,
    [10150] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1435),
    1,
    sym_identifier,
    STATE(384),
    1,
    sym_comment,
    [10160] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1437),
    1,
    anon_sym_SEMI,
    STATE(385),
    1,
    sym_comment,
    [10170] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1439),
    1,
    anon_sym_EQ,
    STATE(386),
    1,
    sym_comment,
    [10180] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1441),
    1,
    anon_sym_EQ,
    STATE(387),
    1,
    sym_comment,
    [10190] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1443),
    1,
    anon_sym_SEMI,
    STATE(388),
    1,
    sym_comment,
    [10200] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1445),
    1,
    anon_sym_SEMI,
    STATE(389),
    1,
    sym_comment,
    [10210] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1447),
    1,
    anon_sym_EQ,
    STATE(390),
    1,
    sym_comment,
    [10220] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1449),
    1,
    anon_sym_SEMI,
    STATE(391),
    1,
    sym_comment,
    [10230] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1451),
    1,
    anon_sym_GT,
    STATE(392),
    1,
    sym_comment,
    [10240] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1453),
    1,
    anon_sym_LPAREN,
    STATE(393),
    1,
    sym_comment,
    [10250] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1455),
    1,
    anon_sym_RPAREN,
    STATE(394),
    1,
    sym_comment,
    [10260] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1457),
    1,
    anon_sym_SEMI,
    STATE(395),
    1,
    sym_comment,
    [10270] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1459),
    1,
    anon_sym_SEMI,
    STATE(396),
    1,
    sym_comment,
    [10280] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1461),
    1,
    sym_identifier,
    STATE(397),
    1,
    sym_comment,
    [10290] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1463),
    1,
    anon_sym_LBRACE,
    STATE(398),
    1,
    sym_comment,
    [10300] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1465),
    1,
    anon_sym_SEMI,
    STATE(399),
    1,
    sym_comment,
    [10310] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1467),
    1,
    sym_identifier,
    STATE(400),
    1,
    sym_comment,
    [10320] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1469),
    1,
    anon_sym_RPAREN,
    STATE(401),
    1,
    sym_comment,
    [10330] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1471),
    1,
    sym_identifier,
    STATE(402),
    1,
    sym_comment,
    [10340] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1473),
    1,
    anon_sym_name,
    STATE(403),
    1,
    sym_comment,
    [10350] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1475),
    1,
    anon_sym_name,
    STATE(404),
    1,
    sym_comment,
    [10360] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1477),
    1,
    anon_sym_GT,
    STATE(405),
    1,
    sym_comment,
    [10370] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1479),
    1,
    anon_sym_SEMI,
    STATE(406),
    1,
    sym_comment,
    [10380] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1481),
    1,
    anon_sym_LT,
    STATE(407),
    1,
    sym_comment,
    [10390] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1483),
    1,
    anon_sym_LT,
    STATE(408),
    1,
    sym_comment,
    [10400] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1485),
    1,
    anon_sym_SEMI,
    STATE(409),
    1,
    sym_comment,
    [10410] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1487),
    1,
    anon_sym_LPAREN,
    STATE(410),
    1,
    sym_comment,
    [10420] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1069),
    1,
    anon_sym_SEMI,
    STATE(411),
    1,
    sym_comment,
    [10430] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1489),
    1,
    sym_identifier,
    STATE(412),
    1,
    sym_comment,
    [10440] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1491),
    1,
    anon_sym_COMMA,
    STATE(413),
    1,
    sym_comment,
    [10450] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1493),
    1,
    anon_sym_SEMI,
    STATE(414),
    1,
    sym_comment,
    [10460] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1495),
    1,
    anon_sym_COMMA,
    STATE(415),
    1,
    sym_comment,
    [10470] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1497),
    1,
    anon_sym_SEMI,
    STATE(416),
    1,
    sym_comment,
    [10480] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1499),
    1,
    anon_sym_SEMI,
    STATE(417),
    1,
    sym_comment,
    [10490] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1349),
    1,
    anon_sym_LT,
    STATE(418),
    1,
    sym_comment,
    [10500] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1112),
    1,
    anon_sym_SEMI,
    STATE(419),
    1,
    sym_comment,
    [10510] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1501),
    1,
    sym_identifier,
    STATE(420),
    1,
    sym_comment,
    [10520] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1293),
    1,
    sym_identifier,
    STATE(421),
    1,
    sym_comment,
    [10530] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1503),
    1,
    anon_sym_LBRACE,
    STATE(422),
    1,
    sym_comment,
    [10540] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1505),
    1,
    aux_sym_string_literal_token1,
    STATE(423),
    1,
    sym_comment,
    [10550] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1507),
    1,
    anon_sym_SEMI,
    STATE(424),
    1,
    sym_comment,
    [10560] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1509),
    1,
    aux_sym_string_literal_token1,
    STATE(425),
    1,
    sym_comment,
    [10570] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1511),
    1,
    anon_sym_GT,
    STATE(426),
    1,
    sym_comment,
    [10580] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1513),
    1,
    sym_identifier,
    STATE(427),
    1,
    sym_comment,
    [10590] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1515),
    1,
    anon_sym_GT,
    STATE(428),
    1,
    sym_comment,
    [10600] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1517),
    1,
    anon_sym_GT,
    STATE(429),
    1,
    sym_comment,
    [10610] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1519),
    1,
    anon_sym_LBRACE,
    STATE(430),
    1,
    sym_comment,
    [10620] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1521),
    1,
    anon_sym_LPAREN,
    STATE(431),
    1,
    sym_comment,
    [10630] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1523),
    1,
    anon_sym_LBRACE,
    STATE(432),
    1,
    sym_comment,
    [10640] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1525),
    1,
    anon_sym_SEMI,
    STATE(433),
    1,
    sym_comment,
    [10650] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1527),
    1,
    sym_identifier,
    STATE(434),
    1,
    sym_comment,
    [10660] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1529),
    1,
    anon_sym_SEMI,
    STATE(435),
    1,
    sym_comment,
    [10670] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1531),
    1,
    anon_sym_COLON,
    STATE(436),
    1,
    sym_comment,
    [10680] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1533),
    1,
    anon_sym_LBRACE,
    STATE(437),
    1,
    sym_comment,
    [10690] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1535),
    1,
    sym_identifier,
    STATE(438),
    1,
    sym_comment,
    [10700] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1537),
    1,
    anon_sym_LBRACE,
    STATE(439),
    1,
    sym_comment,
    [10710] = 3,
    ACTIONS(1239),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1539),
    1,
    aux_sym_preproc_call_token1,
    STATE(440),
    1,
    sym_comment,
    [10720] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1541),
    1,
    anon_sym_GT,
    STATE(441),
    1,
    sym_comment,
    [10730] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1543),
    1,
    aux_sym_char_literal_token1,
    STATE(442),
    1,
    sym_comment,
    [10740] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1545),
    1,
    anon_sym_enum,
    STATE(443),
    1,
    sym_comment,
    [10750] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1547),
    1,
    anon_sym_SEMI,
    STATE(444),
    1,
    sym_comment,
    [10760] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1549),
    1,
    anon_sym_SEMI,
    STATE(445),
    1,
    sym_comment,
    [10770] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1551),
    1,
    anon_sym_LBRACE,
    STATE(446),
    1,
    sym_comment,
    [10780] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1553),
    1,
    anon_sym_RPAREN,
    STATE(447),
    1,
    sym_comment,
    [10790] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1271),
    1,
    anon_sym_RPAREN,
    STATE(448),
    1,
    sym_comment,
    [10800] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1555),
    1,
    sym_identifier,
    STATE(449),
    1,
    sym_comment,
    [10810] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(119),
    1,
    anon_sym_RBRACE,
    STATE(450),
    1,
    sym_comment,
    [10820] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1557),
    1,
    anon_sym_SEMI,
    STATE(451),
    1,
    sym_comment,
    [10830] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1559),
    1,
    anon_sym_COLON,
    STATE(452),
    1,
    sym_comment,
    [10840] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1561),
    1,
    anon_sym_SEMI,
    STATE(453),
    1,
    sym_comment,
    [10850] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1563),
    1,
    anon_sym_SEMI,
    STATE(454),
    1,
    sym_comment,
    [10860] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1565),
    1,
    anon_sym_SEMI,
    STATE(455),
    1,
    sym_comment,
    [10870] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1567),
    1,
    ts_builtin_sym_end,
    STATE(456),
    1,
    sym_comment,
    [10880] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1569),
    1,
    anon_sym_LPAREN,
    STATE(457),
    1,
    sym_comment,
    [10890] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1571),
    1,
    anon_sym_LPAREN,
    STATE(458),
    1,
    sym_comment,
    [10900] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1573),
    1,
    anon_sym_LPAREN,
    STATE(459),
    1,
    sym_comment,
    [10910] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1575),
    1,
    anon_sym_LBRACE,
    STATE(460),
    1,
    sym_comment,
    [10920] = 3,
    ACTIONS(1239),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1577),
    1,
    aux_sym_predefine_token1,
    STATE(461),
    1,
    sym_comment,
    [10930] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1579),
    1,
    anon_sym_enum,
    STATE(462),
    1,
    sym_comment,
    [10940] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1581),
    1,
    anon_sym_GT,
    STATE(463),
    1,
    sym_comment,
    [10950] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1583),
    1,
    sym_identifier,
    STATE(464),
    1,
    sym_comment,
    [10960] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1585),
    1,
    anon_sym_SEMI,
    STATE(465),
    1,
    sym_comment,
    [10970] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1587),
    1,
    sym_identifier,
    STATE(466),
    1,
    sym_comment,
    [10980] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1589),
    1,
    anon_sym_SEMI,
    STATE(467),
    1,
    sym_comment,
    [10990] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1591),
    1,
    sym_identifier,
    STATE(468),
    1,
    sym_comment,
    [11000] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1593),
    1,
    sym_identifier,
    STATE(469),
    1,
    sym_comment,
    [11010] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1595),
    1,
    anon_sym_SEMI,
    STATE(470),
    1,
    sym_comment,
    [11020] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1597),
    1,
    sym_identifier,
    STATE(471),
    1,
    sym_comment,
    [11030] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1599),
    1,
    sym_identifier,
    STATE(472),
    1,
    sym_comment,
    [11040] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1601),
    1,
    sym_identifier,
    STATE(473),
    1,
    sym_comment,
    [11050] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1603),
    1,
    sym_identifier,
    STATE(474),
    1,
    sym_comment,
    [11060] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1605),
    1,
    anon_sym_SEMI,
    STATE(475),
    1,
    sym_comment,
    [11070] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1607),
    1,
    anon_sym_SQUOTE,
    STATE(476),
    1,
    sym_comment,
    [11080] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1609),
    1,
    sym_identifier,
    STATE(477),
    1,
    sym_comment,
    [11090] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1611),
    1,
    anon_sym_SEMI,
    STATE(478),
    1,
    sym_comment,
    [11100] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1613),
    1,
    anon_sym_DQUOTE,
    STATE(479),
    1,
    sym_comment,
    [11110] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1615),
    1,
    sym_identifier,
    STATE(480),
    1,
    sym_comment,
    [11120] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1617),
    1,
    sym_identifier,
    STATE(481),
    1,
    sym_comment,
    [11130] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1619),
    1,
    sym_identifier,
    STATE(482),
    1,
    sym_comment,
    [11140] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1621),
    1,
    sym_identifier,
    STATE(483),
    1,
    sym_comment,
    [11150] = 1,
    ACTIONS(1623),
    1,
    ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
    [SMALL_STATE(22)] = 0,
    [SMALL_STATE(23)] = 143,
    [SMALL_STATE(24)] = 284,
    [SMALL_STATE(25)] = 423,
    [SMALL_STATE(26)] = 564,
    [SMALL_STATE(27)] = 696,
    [SMALL_STATE(28)] = 828,
    [SMALL_STATE(29)] = 958,
    [SMALL_STATE(30)] = 1080,
    [SMALL_STATE(31)] = 1212,
    [SMALL_STATE(32)] = 1337,
    [SMALL_STATE(33)] = 1456,
    [SMALL_STATE(34)] = 1578,
    [SMALL_STATE(35)] = 1701,
    [SMALL_STATE(36)] = 1824,
    [SMALL_STATE(37)] = 1947,
    [SMALL_STATE(38)] = 2066,
    [SMALL_STATE(39)] = 2189,
    [SMALL_STATE(40)] = 2308,
    [SMALL_STATE(41)] = 2427,
    [SMALL_STATE(42)] = 2546,
    [SMALL_STATE(43)] = 2665,
    [SMALL_STATE(44)] = 2721,
    [SMALL_STATE(45)] = 2777,
    [SMALL_STATE(46)] = 2879,
    [SMALL_STATE(47)] = 2981,
    [SMALL_STATE(48)] = 3043,
    [SMALL_STATE(49)] = 3094,
    [SMALL_STATE(50)] = 3145,
    [SMALL_STATE(51)] = 3194,
    [SMALL_STATE(52)] = 3243,
    [SMALL_STATE(53)] = 3292,
    [SMALL_STATE(54)] = 3341,
    [SMALL_STATE(55)] = 3390,
    [SMALL_STATE(56)] = 3438,
    [SMALL_STATE(57)] = 3486,
    [SMALL_STATE(58)] = 3534,
    [SMALL_STATE(59)] = 3582,
    [SMALL_STATE(60)] = 3626,
    [SMALL_STATE(61)] = 3670,
    [SMALL_STATE(62)] = 3714,
    [SMALL_STATE(63)] = 3758,
    [SMALL_STATE(64)] = 3802,
    [SMALL_STATE(65)] = 3882,
    [SMALL_STATE(66)] = 3922,
    [SMALL_STATE(67)] = 4002,
    [SMALL_STATE(68)] = 4082,
    [SMALL_STATE(69)] = 4162,
    [SMALL_STATE(70)] = 4242,
    [SMALL_STATE(71)] = 4322,
    [SMALL_STATE(72)] = 4402,
    [SMALL_STATE(73)] = 4482,
    [SMALL_STATE(74)] = 4559,
    [SMALL_STATE(75)] = 4624,
    [SMALL_STATE(76)] = 4701,
    [SMALL_STATE(77)] = 4778,
    [SMALL_STATE(78)] = 4855,
    [SMALL_STATE(79)] = 4932,
    [SMALL_STATE(80)] = 5009,
    [SMALL_STATE(81)] = 5080,
    [SMALL_STATE(82)] = 5119,
    [SMALL_STATE(83)] = 5151,
    [SMALL_STATE(84)] = 5183,
    [SMALL_STATE(85)] = 5215,
    [SMALL_STATE(86)] = 5283,
    [SMALL_STATE(87)] = 5316,
    [SMALL_STATE(88)] = 5381,
    [SMALL_STATE(89)] = 5412,
    [SMALL_STATE(90)] = 5443,
    [SMALL_STATE(91)] = 5474,
    [SMALL_STATE(92)] = 5507,
    [SMALL_STATE(93)] = 5538,
    [SMALL_STATE(94)] = 5571,
    [SMALL_STATE(95)] = 5633,
    [SMALL_STATE(96)] = 5664,
    [SMALL_STATE(97)] = 5723,
    [SMALL_STATE(98)] = 5754,
    [SMALL_STATE(99)] = 5785,
    [SMALL_STATE(100)] = 5841,
    [SMALL_STATE(101)] = 5871,
    [SMALL_STATE(102)] = 5901,
    [SMALL_STATE(103)] = 5928,
    [SMALL_STATE(104)] = 5955,
    [SMALL_STATE(105)] = 5982,
    [SMALL_STATE(106)] = 6009,
    [SMALL_STATE(107)] = 6036,
    [SMALL_STATE(108)] = 6067,
    [SMALL_STATE(109)] = 6094,
    [SMALL_STATE(110)] = 6125,
    [SMALL_STATE(111)] = 6152,
    [SMALL_STATE(112)] = 6179,
    [SMALL_STATE(113)] = 6206,
    [SMALL_STATE(114)] = 6233,
    [SMALL_STATE(115)] = 6260,
    [SMALL_STATE(116)] = 6287,
    [SMALL_STATE(117)] = 6330,
    [SMALL_STATE(118)] = 6360,
    [SMALL_STATE(119)] = 6386,
    [SMALL_STATE(120)] = 6412,
    [SMALL_STATE(121)] = 6436,
    [SMALL_STATE(122)] = 6460,
    [SMALL_STATE(123)] = 6495,
    [SMALL_STATE(124)] = 6515,
    [SMALL_STATE(125)] = 6535,
    [SMALL_STATE(126)] = 6563,
    [SMALL_STATE(127)] = 6583,
    [SMALL_STATE(128)] = 6602,
    [SMALL_STATE(129)] = 6621,
    [SMALL_STATE(130)] = 6652,
    [SMALL_STATE(131)] = 6678,
    [SMALL_STATE(132)] = 6696,
    [SMALL_STATE(133)] = 6712,
    [SMALL_STATE(134)] = 6737,
    [SMALL_STATE(135)] = 6762,
    [SMALL_STATE(136)] = 6787,
    [SMALL_STATE(137)] = 6812,
    [SMALL_STATE(138)] = 6833,
    [SMALL_STATE(139)] = 6852,
    [SMALL_STATE(140)] = 6875,
    [SMALL_STATE(141)] = 6896,
    [SMALL_STATE(142)] = 6910,
    [SMALL_STATE(143)] = 6930,
    [SMALL_STATE(144)] = 6950,
    [SMALL_STATE(145)] = 6970,
    [SMALL_STATE(146)] = 6992,
    [SMALL_STATE(147)] = 7006,
    [SMALL_STATE(148)] = 7028,
    [SMALL_STATE(149)] = 7050,
    [SMALL_STATE(150)] = 7070,
    [SMALL_STATE(151)] = 7084,
    [SMALL_STATE(152)] = 7106,
    [SMALL_STATE(153)] = 7128,
    [SMALL_STATE(154)] = 7148,
    [SMALL_STATE(155)] = 7170,
    [SMALL_STATE(156)] = 7184,
    [SMALL_STATE(157)] = 7204,
    [SMALL_STATE(158)] = 7226,
    [SMALL_STATE(159)] = 7239,
    [SMALL_STATE(160)] = 7252,
    [SMALL_STATE(161)] = 7271,
    [SMALL_STATE(162)] = 7286,
    [SMALL_STATE(163)] = 7305,
    [SMALL_STATE(164)] = 7322,
    [SMALL_STATE(165)] = 7341,
    [SMALL_STATE(166)] = 7360,
    [SMALL_STATE(167)] = 7377,
    [SMALL_STATE(168)] = 7396,
    [SMALL_STATE(169)] = 7413,
    [SMALL_STATE(170)] = 7432,
    [SMALL_STATE(171)] = 7449,
    [SMALL_STATE(172)] = 7466,
    [SMALL_STATE(173)] = 7479,
    [SMALL_STATE(174)] = 7496,
    [SMALL_STATE(175)] = 7513,
    [SMALL_STATE(176)] = 7526,
    [SMALL_STATE(177)] = 7539,
    [SMALL_STATE(178)] = 7552,
    [SMALL_STATE(179)] = 7565,
    [SMALL_STATE(180)] = 7578,
    [SMALL_STATE(181)] = 7591,
    [SMALL_STATE(182)] = 7604,
    [SMALL_STATE(183)] = 7617,
    [SMALL_STATE(184)] = 7636,
    [SMALL_STATE(185)] = 7651,
    [SMALL_STATE(186)] = 7664,
    [SMALL_STATE(187)] = 7681,
    [SMALL_STATE(188)] = 7693,
    [SMALL_STATE(189)] = 7705,
    [SMALL_STATE(190)] = 7721,
    [SMALL_STATE(191)] = 7735,
    [SMALL_STATE(192)] = 7751,
    [SMALL_STATE(193)] = 7767,
    [SMALL_STATE(194)] = 7783,
    [SMALL_STATE(195)] = 7799,
    [SMALL_STATE(196)] = 7815,
    [SMALL_STATE(197)] = 7831,
    [SMALL_STATE(198)] = 7843,
    [SMALL_STATE(199)] = 7855,
    [SMALL_STATE(200)] = 7869,
    [SMALL_STATE(201)] = 7881,
    [SMALL_STATE(202)] = 7893,
    [SMALL_STATE(203)] = 7905,
    [SMALL_STATE(204)] = 7917,
    [SMALL_STATE(205)] = 7933,
    [SMALL_STATE(206)] = 7949,
    [SMALL_STATE(207)] = 7965,
    [SMALL_STATE(208)] = 7981,
    [SMALL_STATE(209)] = 7993,
    [SMALL_STATE(210)] = 8009,
    [SMALL_STATE(211)] = 8025,
    [SMALL_STATE(212)] = 8041,
    [SMALL_STATE(213)] = 8053,
    [SMALL_STATE(214)] = 8067,
    [SMALL_STATE(215)] = 8081,
    [SMALL_STATE(216)] = 8093,
    [SMALL_STATE(217)] = 8107,
    [SMALL_STATE(218)] = 8123,
    [SMALL_STATE(219)] = 8137,
    [SMALL_STATE(220)] = 8153,
    [SMALL_STATE(221)] = 8167,
    [SMALL_STATE(222)] = 8183,
    [SMALL_STATE(223)] = 8197,
    [SMALL_STATE(224)] = 8213,
    [SMALL_STATE(225)] = 8229,
    [SMALL_STATE(226)] = 8245,
    [SMALL_STATE(227)] = 8257,
    [SMALL_STATE(228)] = 8269,
    [SMALL_STATE(229)] = 8285,
    [SMALL_STATE(230)] = 8299,
    [SMALL_STATE(231)] = 8315,
    [SMALL_STATE(232)] = 8331,
    [SMALL_STATE(233)] = 8347,
    [SMALL_STATE(234)] = 8363,
    [SMALL_STATE(235)] = 8375,
    [SMALL_STATE(236)] = 8391,
    [SMALL_STATE(237)] = 8407,
    [SMALL_STATE(238)] = 8423,
    [SMALL_STATE(239)] = 8439,
    [SMALL_STATE(240)] = 8455,
    [SMALL_STATE(241)] = 8467,
    [SMALL_STATE(242)] = 8479,
    [SMALL_STATE(243)] = 8493,
    [SMALL_STATE(244)] = 8509,
    [SMALL_STATE(245)] = 8525,
    [SMALL_STATE(246)] = 8541,
    [SMALL_STATE(247)] = 8555,
    [SMALL_STATE(248)] = 8569,
    [SMALL_STATE(249)] = 8581,
    [SMALL_STATE(250)] = 8597,
    [SMALL_STATE(251)] = 8609,
    [SMALL_STATE(252)] = 8621,
    [SMALL_STATE(253)] = 8637,
    [SMALL_STATE(254)] = 8651,
    [SMALL_STATE(255)] = 8667,
    [SMALL_STATE(256)] = 8683,
    [SMALL_STATE(257)] = 8699,
    [SMALL_STATE(258)] = 8715,
    [SMALL_STATE(259)] = 8731,
    [SMALL_STATE(260)] = 8743,
    [SMALL_STATE(261)] = 8759,
    [SMALL_STATE(262)] = 8775,
    [SMALL_STATE(263)] = 8791,
    [SMALL_STATE(264)] = 8805,
    [SMALL_STATE(265)] = 8819,
    [SMALL_STATE(266)] = 8835,
    [SMALL_STATE(267)] = 8849,
    [SMALL_STATE(268)] = 8861,
    [SMALL_STATE(269)] = 8873,
    [SMALL_STATE(270)] = 8885,
    [SMALL_STATE(271)] = 8896,
    [SMALL_STATE(272)] = 8909,
    [SMALL_STATE(273)] = 8922,
    [SMALL_STATE(274)] = 8935,
    [SMALL_STATE(275)] = 8946,
    [SMALL_STATE(276)] = 8957,
    [SMALL_STATE(277)] = 8970,
    [SMALL_STATE(278)] = 8983,
    [SMALL_STATE(279)] = 8994,
    [SMALL_STATE(280)] = 9005,
    [SMALL_STATE(281)] = 9018,
    [SMALL_STATE(282)] = 9029,
    [SMALL_STATE(283)] = 9040,
    [SMALL_STATE(284)] = 9053,
    [SMALL_STATE(285)] = 9064,
    [SMALL_STATE(286)] = 9075,
    [SMALL_STATE(287)] = 9086,
    [SMALL_STATE(288)] = 9097,
    [SMALL_STATE(289)] = 9108,
    [SMALL_STATE(290)] = 9119,
    [SMALL_STATE(291)] = 9130,
    [SMALL_STATE(292)] = 9143,
    [SMALL_STATE(293)] = 9154,
    [SMALL_STATE(294)] = 9165,
    [SMALL_STATE(295)] = 9176,
    [SMALL_STATE(296)] = 9189,
    [SMALL_STATE(297)] = 9200,
    [SMALL_STATE(298)] = 9213,
    [SMALL_STATE(299)] = 9226,
    [SMALL_STATE(300)] = 9237,
    [SMALL_STATE(301)] = 9248,
    [SMALL_STATE(302)] = 9261,
    [SMALL_STATE(303)] = 9272,
    [SMALL_STATE(304)] = 9285,
    [SMALL_STATE(305)] = 9296,
    [SMALL_STATE(306)] = 9307,
    [SMALL_STATE(307)] = 9318,
    [SMALL_STATE(308)] = 9331,
    [SMALL_STATE(309)] = 9342,
    [SMALL_STATE(310)] = 9353,
    [SMALL_STATE(311)] = 9364,
    [SMALL_STATE(312)] = 9377,
    [SMALL_STATE(313)] = 9388,
    [SMALL_STATE(314)] = 9399,
    [SMALL_STATE(315)] = 9410,
    [SMALL_STATE(316)] = 9421,
    [SMALL_STATE(317)] = 9432,
    [SMALL_STATE(318)] = 9445,
    [SMALL_STATE(319)] = 9458,
    [SMALL_STATE(320)] = 9471,
    [SMALL_STATE(321)] = 9482,
    [SMALL_STATE(322)] = 9493,
    [SMALL_STATE(323)] = 9504,
    [SMALL_STATE(324)] = 9515,
    [SMALL_STATE(325)] = 9528,
    [SMALL_STATE(326)] = 9539,
    [SMALL_STATE(327)] = 9550,
    [SMALL_STATE(328)] = 9563,
    [SMALL_STATE(329)] = 9574,
    [SMALL_STATE(330)] = 9587,
    [SMALL_STATE(331)] = 9598,
    [SMALL_STATE(332)] = 9611,
    [SMALL_STATE(333)] = 9622,
    [SMALL_STATE(334)] = 9633,
    [SMALL_STATE(335)] = 9646,
    [SMALL_STATE(336)] = 9657,
    [SMALL_STATE(337)] = 9670,
    [SMALL_STATE(338)] = 9683,
    [SMALL_STATE(339)] = 9694,
    [SMALL_STATE(340)] = 9705,
    [SMALL_STATE(341)] = 9716,
    [SMALL_STATE(342)] = 9729,
    [SMALL_STATE(343)] = 9740,
    [SMALL_STATE(344)] = 9750,
    [SMALL_STATE(345)] = 9760,
    [SMALL_STATE(346)] = 9770,
    [SMALL_STATE(347)] = 9780,
    [SMALL_STATE(348)] = 9790,
    [SMALL_STATE(349)] = 9800,
    [SMALL_STATE(350)] = 9810,
    [SMALL_STATE(351)] = 9820,
    [SMALL_STATE(352)] = 9830,
    [SMALL_STATE(353)] = 9840,
    [SMALL_STATE(354)] = 9850,
    [SMALL_STATE(355)] = 9860,
    [SMALL_STATE(356)] = 9870,
    [SMALL_STATE(357)] = 9880,
    [SMALL_STATE(358)] = 9890,
    [SMALL_STATE(359)] = 9900,
    [SMALL_STATE(360)] = 9910,
    [SMALL_STATE(361)] = 9920,
    [SMALL_STATE(362)] = 9930,
    [SMALL_STATE(363)] = 9940,
    [SMALL_STATE(364)] = 9950,
    [SMALL_STATE(365)] = 9960,
    [SMALL_STATE(366)] = 9970,
    [SMALL_STATE(367)] = 9980,
    [SMALL_STATE(368)] = 9990,
    [SMALL_STATE(369)] = 10000,
    [SMALL_STATE(370)] = 10010,
    [SMALL_STATE(371)] = 10020,
    [SMALL_STATE(372)] = 10030,
    [SMALL_STATE(373)] = 10040,
    [SMALL_STATE(374)] = 10050,
    [SMALL_STATE(375)] = 10060,
    [SMALL_STATE(376)] = 10070,
    [SMALL_STATE(377)] = 10080,
    [SMALL_STATE(378)] = 10090,
    [SMALL_STATE(379)] = 10100,
    [SMALL_STATE(380)] = 10110,
    [SMALL_STATE(381)] = 10120,
    [SMALL_STATE(382)] = 10130,
    [SMALL_STATE(383)] = 10140,
    [SMALL_STATE(384)] = 10150,
    [SMALL_STATE(385)] = 10160,
    [SMALL_STATE(386)] = 10170,
    [SMALL_STATE(387)] = 10180,
    [SMALL_STATE(388)] = 10190,
    [SMALL_STATE(389)] = 10200,
    [SMALL_STATE(390)] = 10210,
    [SMALL_STATE(391)] = 10220,
    [SMALL_STATE(392)] = 10230,
    [SMALL_STATE(393)] = 10240,
    [SMALL_STATE(394)] = 10250,
    [SMALL_STATE(395)] = 10260,
    [SMALL_STATE(396)] = 10270,
    [SMALL_STATE(397)] = 10280,
    [SMALL_STATE(398)] = 10290,
    [SMALL_STATE(399)] = 10300,
    [SMALL_STATE(400)] = 10310,
    [SMALL_STATE(401)] = 10320,
    [SMALL_STATE(402)] = 10330,
    [SMALL_STATE(403)] = 10340,
    [SMALL_STATE(404)] = 10350,
    [SMALL_STATE(405)] = 10360,
    [SMALL_STATE(406)] = 10370,
    [SMALL_STATE(407)] = 10380,
    [SMALL_STATE(408)] = 10390,
    [SMALL_STATE(409)] = 10400,
    [SMALL_STATE(410)] = 10410,
    [SMALL_STATE(411)] = 10420,
    [SMALL_STATE(412)] = 10430,
    [SMALL_STATE(413)] = 10440,
    [SMALL_STATE(414)] = 10450,
    [SMALL_STATE(415)] = 10460,
    [SMALL_STATE(416)] = 10470,
    [SMALL_STATE(417)] = 10480,
    [SMALL_STATE(418)] = 10490,
    [SMALL_STATE(419)] = 10500,
    [SMALL_STATE(420)] = 10510,
    [SMALL_STATE(421)] = 10520,
    [SMALL_STATE(422)] = 10530,
    [SMALL_STATE(423)] = 10540,
    [SMALL_STATE(424)] = 10550,
    [SMALL_STATE(425)] = 10560,
    [SMALL_STATE(426)] = 10570,
    [SMALL_STATE(427)] = 10580,
    [SMALL_STATE(428)] = 10590,
    [SMALL_STATE(429)] = 10600,
    [SMALL_STATE(430)] = 10610,
    [SMALL_STATE(431)] = 10620,
    [SMALL_STATE(432)] = 10630,
    [SMALL_STATE(433)] = 10640,
    [SMALL_STATE(434)] = 10650,
    [SMALL_STATE(435)] = 10660,
    [SMALL_STATE(436)] = 10670,
    [SMALL_STATE(437)] = 10680,
    [SMALL_STATE(438)] = 10690,
    [SMALL_STATE(439)] = 10700,
    [SMALL_STATE(440)] = 10710,
    [SMALL_STATE(441)] = 10720,
    [SMALL_STATE(442)] = 10730,
    [SMALL_STATE(443)] = 10740,
    [SMALL_STATE(444)] = 10750,
    [SMALL_STATE(445)] = 10760,
    [SMALL_STATE(446)] = 10770,
    [SMALL_STATE(447)] = 10780,
    [SMALL_STATE(448)] = 10790,
    [SMALL_STATE(449)] = 10800,
    [SMALL_STATE(450)] = 10810,
    [SMALL_STATE(451)] = 10820,
    [SMALL_STATE(452)] = 10830,
    [SMALL_STATE(453)] = 10840,
    [SMALL_STATE(454)] = 10850,
    [SMALL_STATE(455)] = 10860,
    [SMALL_STATE(456)] = 10870,
    [SMALL_STATE(457)] = 10880,
    [SMALL_STATE(458)] = 10890,
    [SMALL_STATE(459)] = 10900,
    [SMALL_STATE(460)] = 10910,
    [SMALL_STATE(461)] = 10920,
    [SMALL_STATE(462)] = 10930,
    [SMALL_STATE(463)] = 10940,
    [SMALL_STATE(464)] = 10950,
    [SMALL_STATE(465)] = 10960,
    [SMALL_STATE(466)] = 10970,
    [SMALL_STATE(467)] = 10980,
    [SMALL_STATE(468)] = 10990,
    [SMALL_STATE(469)] = 11000,
    [SMALL_STATE(470)] = 11010,
    [SMALL_STATE(471)] = 11020,
    [SMALL_STATE(472)] = 11030,
    [SMALL_STATE(473)] = 11040,
    [SMALL_STATE(474)] = 11050,
    [SMALL_STATE(475)] = 11060,
    [SMALL_STATE(476)] = 11070,
    [SMALL_STATE(477)] = 11080,
    [SMALL_STATE(478)] = 11090,
    [SMALL_STATE(479)] = 11100,
    [SMALL_STATE(480)] = 11110,
    [SMALL_STATE(481)] = 11120,
    [SMALL_STATE(482)] = 11130,
    [SMALL_STATE(483)] = 11140,
    [SMALL_STATE(484)] = 11150,
};

static const TSParseActionEntry ts_parse_actions[] = {
    [0] = { .entry = { .count = 0, .reusable = false } },
    [1] = { .entry = { .count = 1, .reusable = false } },
    RECOVER(),
    [3] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(381),
    [5] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_specification, 0),
    [7] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(272),
    [9] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(481),
    [11] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(480),
    [13] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(273),
    [15] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(477),
    [17] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(473),
    [19] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(471),
    [21] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(261),
    [23] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(469),
    [25] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(468),
    [27] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(466),
    [29] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(46),
    [31] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(276),
    [33] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(462),
    [35] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(10),
    [37] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(461),
    [39] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(150),
    [41] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(459),
    [43] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(458),
    [45] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(250),
    [47] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(457),
    [49] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(172),
    [51] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(175),
    [53] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(177),
    [55] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(177),
    [57] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(178),
    [59] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(202),
    [61] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(408),
    [63] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(179),
    [65] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(180),
    [67] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(180),
    [69] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(182),
    [71] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(159),
    [73] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(159),
    [75] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(208),
    [77] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(208),
    [79] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(185),
    [81] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(427),
    [83] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(184),
    [85] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(200),
    [87] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(418),
    [89] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(407),
    [91] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(481),
    [93] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(385),
    [95] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(384),
    [97] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(365),
    [99] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(42),
    [101] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(477),
    [103] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(473),
    [105] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(469),
    [107] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(468),
    [109] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(466),
    [111] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(46),
    [113] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(276),
    [115] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(10),
    [117] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(98),
    [119] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(445),
    [121] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(366),
    [123] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_body, 1),
    [125] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(172),
    [128] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(175),
    [131] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(177),
    [134] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(177),
    [137] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(178),
    [140] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(202),
    [143] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(408),
    [146] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(179),
    [149] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(180),
    [152] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(180),
    [155] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(182),
    [158] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(159),
    [161] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(159),
    [164] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(208),
    [167] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(208),
    [170] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(185),
    [173] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(427),
    [176] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(184),
    [179] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(200),
    [182] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(418),
    [185] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(407),
    [188] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(481),
    [191] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    [193] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(384),
    [196] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(365),
    [199] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(42),
    [202] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(477),
    [205] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(473),
    [208] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(469),
    [211] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(468),
    [214] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(466),
    [217] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(46),
    [220] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(276),
    [223] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(462),
    [226] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(10),
    [229] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(250),
    [232] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(457),
    [235] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(98),
    [238] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(126),
    [240] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(75),
    [242] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(126),
    [244] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(329),
    [246] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(350),
    [248] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(349),
    [250] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(105),
    [252] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(106),
    [254] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case, 1),
    [256] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_case, 1),
    [258] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(172),
    [261] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(175),
    [264] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(177),
    [267] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(177),
    [270] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(178),
    [273] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(202),
    [276] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(408),
    [279] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(179),
    [282] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(180),
    [285] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(180),
    [288] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(182),
    [291] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(159),
    [294] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(159),
    [297] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(208),
    [300] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(208),
    [303] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(185),
    [306] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(427),
    [309] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(184),
    [312] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(200),
    [315] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(418),
    [318] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(407),
    [321] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    [323] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(58),
    [326] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(369),
    [329] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(368),
    [332] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(98),
    [335] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(285),
    [337] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(58),
    [339] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(369),
    [341] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(368),
    [343] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(310),
    [345] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(320),
    [347] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(299),
    [349] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(288),
    [351] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(305),
    [353] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(370),
    [355] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(435),
    [357] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(339),
    [359] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(421),
    [361] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(420),
    [363] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(360),
    [365] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(470),
    [367] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(172),
    [370] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(175),
    [373] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(177),
    [376] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(177),
    [379] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(178),
    [382] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(421),
    [385] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(420),
    [388] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(179),
    [391] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(180),
    [394] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(180),
    [397] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(182),
    [400] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(159),
    [403] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(159),
    [406] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(208),
    [409] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(208),
    [412] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(185),
    [415] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(427),
    [418] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(184),
    [421] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(360),
    [424] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(418),
    [427] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    [429] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(466),
    [432] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(46),
    [435] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(462),
    [438] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(10),
    [441] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(98),
    [444] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(359),
    [446] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(396),
    [448] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(195),
    [450] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(461),
    [452] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(433),
    [454] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(481),
    [457] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    [459] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(480),
    [462] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(273),
    [465] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(477),
    [468] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(473),
    [471] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(471),
    [474] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(261),
    [477] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(469),
    [480] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(468),
    [483] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(466),
    [486] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(46),
    [489] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(195),
    [492] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(276),
    [495] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(462),
    [498] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(10),
    [501] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(461),
    [504] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(150),
    [507] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(459),
    [510] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(458),
    [513] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(250),
    [516] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(457),
    [519] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(337),
    [521] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(354),
    [523] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(45),
    [525] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_specification, 1),
    [527] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(482),
    [529] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(215),
    [531] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(71),
    [533] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(267),
    [535] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    [537] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(481),
    [540] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(480),
    [543] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(273),
    [546] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(477),
    [549] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(473),
    [552] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(471),
    [555] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(261),
    [558] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(469),
    [561] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(468),
    [564] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(466),
    [567] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(46),
    [570] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(276),
    [573] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(462),
    [576] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(10),
    [579] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(461),
    [582] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(150),
    [585] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(459),
    [588] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(458),
    [591] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(250),
    [594] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(457),
    [597] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(351),
    [599] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_specification, 2),
    [601] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(455),
    [603] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_export, 2),
    [605] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_export, 2),
    [607] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 1),
    [609] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 1),
    [611] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_member_repeat1, 2),
    [613] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 2),
    [615] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 2),
    SHIFT_REPEAT(58),
    [618] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 2),
    SHIFT_REPEAT(369),
    [621] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 2),
    SHIFT_REPEAT(368),
    [624] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_case_label, 2),
    [626] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case_label, 2),
    [628] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_case_label, 3),
    [630] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case_label, 3),
    [632] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 4, .production_id = 5),
    [634] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 4, .production_id = 5),
    [636] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 5, .production_id = 9),
    [638] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 5, .production_id = 9),
    [640] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 4, .production_id = 9),
    [642] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 4, .production_id = 9),
    [644] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 3, .production_id = 5),
    [646] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 3, .production_id = 5),
    [648] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 1),
    [650] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 1),
    [652] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_try_construct, 2, .production_id = 4),
    [654] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_try_construct, 2, .production_id = 4),
    [656] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_member_repeat1, 1),
    [658] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 1),
    [660] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_hashid, 4, .production_id = 8),
    [662] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_hashid, 4, .production_id = 8),
    [664] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_struct_modifier, 1),
    [666] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_modifier, 1),
    [668] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 1),
    [670] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 1),
    [672] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_member, 5),
    [674] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_member, 5),
    [676] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_body, 2),
    [678] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_body, 2),
    [680] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_body, 1),
    [682] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_body, 1),
    [684] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_member, 3),
    [686] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_member, 3),
    [688] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(448),
    [690] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_param_attribute, 1),
    [692] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_param_attribute, 1),
    [694] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(172),
    [696] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(175),
    [698] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(178),
    [700] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(428),
    [702] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(179),
    [704] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(182),
    [706] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    [708] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(272),
    [711] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_specification_repeat1, 2),
    [713] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym__definition, 2),
    [715] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_predefine, 2),
    [717] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym__definition, 1),
    [719] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_preproc_call, 2, .production_id = 1),
    [721] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_preproc_call, 2, .production_id = 1),
    [723] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_tpl_definition, 2),
    [725] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_tpl_definition, 1),
    [727] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 1),
    [729] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_preproc_call, 3, .production_id = 2),
    [731] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_preproc_call, 3, .production_id = 2),
    [733] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 1),
    [735] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 1),
    [737] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_specification_repeat1, 1),
    [739] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_scoped_name, 3),
    [741] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_scoped_name, 3),
    [743] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_scoped_name, 2),
    [745] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_scoped_name, 2),
    [747] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_scoped_name, 1),
    [749] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_scoped_name, 1),
    [751] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(397),
    [753] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 1),
    [755] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 1),
    [757] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 2),
    [759] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 2),
    [761] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 4),
    [763] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 4),
    [765] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_char_literal, 3, .production_id = 6),
    [767] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_char_literal, 3, .production_id = 6),
    [769] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_boolean_literal, 1),
    [771] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_boolean_literal, 1),
    [773] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_literal, 1),
    [775] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_literal, 1),
    [777] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_add_expr, 3),
    [779] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_add_expr, 3),
    [781] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(99),
    [783] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(99),
    [785] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_mult_expr, 3),
    [787] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_mult_expr, 3),
    [789] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_add_expr, 1),
    [791] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_add_expr, 1),
    [793] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_string_literal, 3),
    [795] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_literal, 3),
    [797] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_string_literal, 4),
    [799] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_literal, 4),
    [801] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_mult_expr, 1),
    [803] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_mult_expr, 1),
    [805] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 3),
    [807] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 3),
    [809] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_char_literal, 4, .production_id = 10),
    [811] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_char_literal, 4, .production_id = 10),
    [813] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(79),
    [815] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_simple_type_spec, 1),
    [817] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_simple_type_spec, 1),
    [819] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_shift_expr, 3),
    [821] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_shift_expr, 3),
    [823] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(96),
    [825] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_shift_expr, 1),
    [827] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_shift_expr, 1),
    [829] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_and_expr, 1),
    [831] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_and_expr, 1),
    [833] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(94),
    [835] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_and_expr, 3),
    [837] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_and_expr, 3),
    [839] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(438),
    [841] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(307),
    [843] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xor_expr, 3),
    [845] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(87),
    [847] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xor_expr, 1),
    [849] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2),
    [851] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2),
    SHIFT_REPEAT(150),
    [854] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2),
    SHIFT_REPEAT(459),
    [857] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2),
    SHIFT_REPEAT(458),
    [860] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_operator, 1),
    [862] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_operator, 1),
    [864] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_or_expr, 1),
    [866] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(85),
    [868] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_or_expr, 3),
    [870] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(318),
    [872] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_declarator, 1),
    [874] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(331),
    [876] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(334),
    [878] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(224),
    [880] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(65),
    [882] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(65),
    [884] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_expr, 1),
    [886] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(80),
    [888] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_simple_declarator, 1),
    [890] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(316),
    [892] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(314),
    [894] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(313),
    [896] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(279),
    [898] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(436),
    [900] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(78),
    [902] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(293),
    [904] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(294),
    [906] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_array_declarator, 2),
    [908] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(68),
    [910] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 2),
    [912] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 2),
    SHIFT_REPEAT(68),
    [915] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2),
    [917] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2),
    SHIFT_REPEAT(436),
    [920] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2),
    SHIFT_REPEAT(78),
    [923] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_dds_request_topic, 6),
    [925] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(140),
    [927] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(340),
    [929] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(363),
    [931] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_dds_reply_topic, 6),
    [933] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_readonly_attr_declarator, 1),
    [935] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(410),
    [937] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(308),
    [939] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_anno, 1),
    [941] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(330),
    [943] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(286),
    [945] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat1, 2),
    [947] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat1, 2),
    SHIFT_REPEAT(250),
    [950] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat1, 2),
    SHIFT_REPEAT(457),
    [953] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 1),
    [955] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitset_dcl_repeat1, 2),
    [957] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_bitset_dcl_repeat1, 2),
    SHIFT_REPEAT(363),
    [960] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(400),
    [962] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_integer_type, 1),
    [964] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unsigned_longlong_int, 1),
    [966] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(188),
    [968] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(216),
    [970] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(216),
    [972] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_declarators_repeat1, 2),
    SHIFT_REPEAT(186),
    [975] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_declarators_repeat1, 2),
    [977] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(98),
    [979] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(186),
    [981] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarators, 2),
    [983] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(255),
    [985] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(467),
    [987] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(278),
    [989] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarators, 1),
    [991] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_header, 2),
    [993] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(162),
    [995] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_forward_dcl, 2),
    [997] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(14),
    [999] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(189),
    [1001] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_forward_dcl, 2),
    [1003] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 2),
    SHIFT_REPEAT(314),
    [1006] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 2),
    [1008] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_signed_short_int, 1),
    [1010] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_data_representation_repeat1, 2),
    [1012] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_data_representation_repeat1, 2),
    SHIFT_REPEAT(216),
    [1015] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_data_representation_repeat1, 2),
    SHIFT_REPEAT(216),
    [1018] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_signed_long_int, 1),
    [1020] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 1),
    [1022] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_signed_longlong_int, 1),
    [1024] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unsigned_int, 1),
    [1026] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_signed_int, 1),
    [1028] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unsigned_short_int, 1),
    [1030] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_fixed_array_size, 3),
    [1032] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unsigned_long_int, 1),
    [1034] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(296),
    [1036] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(66),
    [1038] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_type, 1),
    [1040] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_char_type, 1),
    [1042] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_positive_int_const, 1),
    [1044] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_data_representation, 4, .production_id = 3),
    [1046] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_inheritance_spec_repeat1, 2),
    SHIFT_REPEAT(165),
    [1049] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_inheritance_spec_repeat1, 2),
    [1051] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(52),
    [1053] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(76),
    [1055] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(323),
    [1057] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(321),
    [1059] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_template_type_spec, 1),
    [1061] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_type, 1),
    [1063] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_fixed_pt_type, 6),
    [1065] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_base_type_spec, 1),
    [1067] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_map_type, 6),
    [1069] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_readonly_attr_declarator, 2),
    [1071] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_actual_parameters, 1),
    [1073] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(8),
    [1075] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(154),
    [1077] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(315),
    [1079] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_floating_pt_type, 1),
    [1081] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(132),
    [1083] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(165),
    [1085] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_inheritance_spec, 2),
    [1087] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitfield_repeat1, 2),
    [1089] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_bitfield_repeat1, 2),
    SHIFT_REPEAT(287),
    [1092] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_any_declarators_repeat1, 2),
    SHIFT_REPEAT(174),
    [1095] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_any_declarators_repeat1, 2),
    [1097] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 3),
    [1099] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_data_representation_repeat1, 1),
    [1101] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_data_representation_repeat1, 1),
    [1103] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameters, 1),
    [1105] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(32),
    [1107] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_readonly_attr_declarator_repeat1, 2),
    SHIFT_REPEAT(318),
    [1110] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_readonly_attr_declarator_repeat1, 2),
    [1112] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_dcl, 5),
    [1114] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_bitmask_dcl_repeat1, 2),
    SHIFT_REPEAT(277),
    [1117] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitmask_dcl_repeat1, 2),
    [1119] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(300),
    [1121] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(483),
    [1123] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(149),
    [1125] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_parameter_dcls, 1),
    [1127] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_dcl, 4),
    [1129] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(174),
    [1131] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarators, 2),
    [1133] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 4),
    [1135] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_type, 4),
    [1137] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarators, 1),
    [1139] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_formal_parameters_repeat1, 2),
    [1141] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_formal_parameters_repeat1, 2),
    SHIFT_REPEAT(32),
    [1144] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_declarator, 2),
    [1146] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_forward_dcl, 2),
    [1148] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(393),
    [1150] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_union_forward_dcl, 2),
    [1152] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_raises_expr, 1),
    [1154] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_type_spec, 1),
    [1156] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_parameter_dcls, 2),
    [1158] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(29),
    [1160] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(35),
    [1162] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(289),
    [1164] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(287),
    [1166] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 1),
    [1168] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarator, 1),
    [1170] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_name, 1),
    [1172] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(53),
    [1174] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(277),
    [1176] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(281),
    [1178] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_parameter_dcls_repeat1, 2),
    SHIFT_REPEAT(149),
    [1181] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_parameter_dcls_repeat1, 2),
    [1183] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_actual_parameters_repeat1, 2),
    [1185] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_actual_parameters_repeat1, 2),
    SHIFT_REPEAT(8),
    [1188] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 5),
    [1190] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_inheritance_spec, 3),
    [1192] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat1, 1),
    [1194] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_map_type, 8),
    [1196] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_actual_parameters, 2),
    [1198] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_enum_dcl_repeat1, 2),
    SHIFT_REPEAT(154),
    [1201] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enum_dcl_repeat1, 2),
    [1203] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(328),
    [1205] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(275),
    [1207] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameter_names, 1),
    [1209] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(472),
    [1211] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(333),
    [1213] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case, 3),
    [1215] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(475),
    [1217] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(236),
    [1219] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameters, 2),
    [1221] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_raises_expr_repeat1, 2),
    [1223] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_raises_expr_repeat1, 2),
    SHIFT_REPEAT(255),
    [1226] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameter_names, 2),
    [1228] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_formal_parameter_names_repeat1, 2),
    [1230] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_formal_parameter_names_repeat1, 2),
    SHIFT_REPEAT(472),
    [1233] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarator, 1),
    [1235] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(86),
    [1237] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(440),
    [1239] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(381),
    [1241] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_exception_list, 4),
    [1243] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_exception_list, 3),
    [1245] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_def, 9),
    [1247] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(63),
    [1249] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(73),
    [1251] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 5),
    [1253] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameter, 2),
    [1255] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(257),
    [1257] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield_spec, 6),
    [1259] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 8, .production_id = 11),
    [1261] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 5),
    [1263] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitfield_repeat1, 1),
    [1265] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 5),
    [1267] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield, 2),
    [1269] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_param_dcl, 3),
    [1271] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_switch_type_spec, 1),
    [1273] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_def, 8),
    [1275] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 5),
    [1277] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(145),
    [1279] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(193),
    [1281] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enumerator, 2),
    [1283] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(283),
    [1285] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(7),
    [1287] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 7, .production_id = 11),
    [1289] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 7),
    [1291] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_get_excep_expr, 2),
    [1293] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_type, 1),
    [1295] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 7, .production_id = 7),
    [1297] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 7),
    [1299] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield_spec, 4),
    [1301] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 6),
    [1303] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 1),
    [1305] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enumerator, 1),
    [1307] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_modifier, 1),
    [1309] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 6),
    [1311] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 4),
    [1313] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(15),
    [1315] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(20),
    [1317] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 4),
    [1319] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bit_value, 1),
    [1321] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_actual_parameter, 1),
    [1323] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 4),
    [1325] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(151),
    [1327] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitset_dcl_repeat1, 1),
    [1329] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(309),
    [1331] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(74),
    [1333] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield, 3),
    [1335] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(383),
    [1337] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(442),
    [1339] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 6),
    [1341] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(206),
    [1343] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 6),
    [1345] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(203),
    [1347] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(70),
    [1349] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(31),
    [1351] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameter_type, 1),
    [1353] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 6, .production_id = 7),
    [1355] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 4),
    [1357] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(21),
    [1359] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(238),
    [1361] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(431),
    [1363] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(181),
    [1365] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(382),
    [1367] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(57),
    [1369] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(449),
    [1371] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(50),
    [1373] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(476),
    [1375] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(479),
    [1377] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_module_dcl, 4),
    [1379] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(282),
    [1381] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(460),
    [1383] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(61),
    [1385] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_member_type, 1),
    [1387] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(112),
    [1389] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(115),
    [1391] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_dcl, 4),
    [1393] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_const_type, 1),
    [1395] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(103),
    [1397] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_template_module_inst, 6),
    [1399] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(67),
    [1401] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(135),
    [1403] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(39),
    [1405] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 4),
    [1407] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(201),
    [1409] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(55),
    [1411] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(434),
    [1413] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_except_dcl, 4),
    [1415] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_readonly_attr_spec, 4),
    [1417] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(3),
    [1419] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(136),
    [1421] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_dcl, 1),
    [1423] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(114),
    [1425] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(219),
    [1427] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(43),
    [1429] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(484),
    [1431] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 6),
    [1433] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(357),
    [1435] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_type_spec, 1),
    [1437] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 3),
    [1439] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(425),
    [1441] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(423),
    [1443] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_default, 2),
    [1445] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_type_declarator, 2),
    [1447] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(77),
    [1449] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(51),
    [1451] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(227),
    [1453] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(64),
    [1455] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(146),
    [1457] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(60),
    [1459] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_template_module_dcl, 7),
    [1461] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(95),
    [1463] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_header, 3),
    [1465] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(88),
    [1467] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(341),
    [1469] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(141),
    [1471] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(375),
    [1473] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(386),
    [1475] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(387),
    [1477] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(226),
    [1479] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_typedef_dcl, 2),
    [1481] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(37),
    [1483] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(69),
    [1485] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_native_dcl, 2),
    [1487] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(244),
    [1489] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(390),
    [1491] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(72),
    [1493] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_spec, 3),
    [1495] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(40),
    [1497] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_set_excep_expr, 2),
    [1499] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_raises_expr, 2),
    [1501] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_fixed_pt_const_type, 1),
    [1503] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(133),
    [1505] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(401),
    [1507] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_dcl, 5),
    [1509] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(394),
    [1511] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(248),
    [1513] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(97),
    [1515] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_destination_type, 1),
    [1517] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(284),
    [1519] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(25),
    [1521] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(130),
    [1523] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(192),
    [1525] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_template_module_dcl, 8),
    [1527] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(346),
    [1529] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_except_dcl, 5),
    [1531] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(48),
    [1533] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(4),
    [1535] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(194),
    [1537] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(18),
    [1539] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(91),
    [1541] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(251),
    [1543] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(358),
    [1545] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(402),
    [1547] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_dcl, 6),
    [1549] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 5),
    [1551] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(2),
    [1553] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(364),
    [1555] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(362),
    [1557] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_dcl, 1),
    [1559] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(49),
    [1561] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(82),
    [1563] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(259),
    [1565] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_module_dcl, 5),
    [1567] = { .entry = { .count = 1, .reusable = true } },
    ACCEPT_INPUT(),
    [1569] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(196),
    [1571] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(403),
    [1573] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(404),
    [1575] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(26),
    [1577] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(83),
    [1579] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_anno, 1),
    [1581] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(474),
    [1583] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameter_type, 2),
    [1585] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_element_spec, 2),
    [1587] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(422),
    [1589] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_raises_expr, 4),
    [1591] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(232),
    [1593] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(170),
    [1595] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_dcl, 5),
    [1597] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(430),
    [1599] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(274),
    [1601] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(432),
    [1603] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(478),
    [1605] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_raises_expr, 5),
    [1607] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(104),
    [1609] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(295),
    [1611] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_template_module_ref, 6),
    [1613] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(111),
    [1615] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(169),
    [1617] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(439),
    [1619] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(268),
    [1621] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(269),
    [1623] = { .entry = { .count = 1, .reusable = true } },
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
