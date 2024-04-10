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
#define STATE_COUNT 482
#define LARGE_STATE_COUNT 21
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
    [222] = 94,
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
    [265] = 95,
    [266] = 266,
    [267] = 267,
    [268] = 268,
    [269] = 269,
    [270] = 270,
    [271] = 271,
    [272] = 272,
    [273] = 266,
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
    [402] = 266,
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
    [438] = 424,
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
                ADVANCE(493);
            if(lookahead == '"')
                ADVANCE(568);
            if(lookahead == '#')
                ADVANCE(142);
            if(lookahead == '$')
                ADVANCE(553);
            if(lookahead == '%')
                ADVANCE(562);
            if(lookahead == '\'')
                ADVANCE(570);
            if(lookahead == '(')
                ADVANCE(563);
            if(lookahead == ')')
                ADVANCE(564);
            if(lookahead == '*')
                ADVANCE(560);
            if(lookahead == '+')
                ADVANCE(556);
            if(lookahead == ',')
                ADVANCE(546);
            if(lookahead == '-')
                ADVANCE(558);
            if(lookahead == '/')
                ADVANCE(561);
            if(lookahead == ':')
                ADVANCE(646);
            if(lookahead == ';')
                ADVANCE(647);
            if(lookahead == '<')
                ADVANCE(541);
            if(lookahead == '=')
                ADVANCE(669);
            if(lookahead == '>')
                ADVANCE(543);
            if(lookahead == '@')
                ADVANCE(668);
            if(lookahead == 'F')
                ADVANCE(572);
            if(lookahead == 'L')
                ADVANCE(566);
            if(lookahead == 'T')
                ADVANCE(574);
            if(lookahead == 'X')
                ADVANCE(573);
            if(lookahead == '[')
                ADVANCE(881);
            if(lookahead == '\\')
                SKIP(486)
            if(lookahead == ']')
                ADVANCE(882);
            if(lookahead == '^')
                ADVANCE(552);
            if(lookahead == 'a')
                ADVANCE(588);
            if(lookahead == 'b')
                ADVANCE(586);
            if(lookahead == 'c')
                ADVANCE(575);
            if(lookahead == 'd')
                ADVANCE(582);
            if(lookahead == 'e')
                ADVANCE(590);
            if(lookahead == 'f')
                ADVANCE(585);
            if(lookahead == 'g')
                ADVANCE(584);
            if(lookahead == 'i')
                ADVANCE(589);
            if(lookahead == 'l')
                ADVANCE(591);
            if(lookahead == 'm')
                ADVANCE(576);
            if(lookahead == 'n')
                ADVANCE(577);
            if(lookahead == 'o')
                ADVANCE(581);
            if(lookahead == 'r')
                ADVANCE(579);
            if(lookahead == 's')
                ADVANCE(583);
            if(lookahead == 't')
                ADVANCE(592);
            if(lookahead == 'u')
                ADVANCE(587);
            if(lookahead == 'v')
                ADVANCE(578);
            if(lookahead == 'w')
                ADVANCE(580);
            if(lookahead == '{')
                ADVANCE(642);
            if(lookahead == '|')
                ADVANCE(551);
            if(lookahead == '}')
                ADVANCE(643);
            if(lookahead == '~')
                ADVANCE(565);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(0)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= '_') ||
               ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(571);
            END_STATE();
        case 1:
            if(lookahead == '\n')
                SKIP(48)
            END_STATE();
        case 2:
            if(lookahead == '\n')
                SKIP(48)
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
                SKIP(52)
            END_STATE();
        case 6:
            if(lookahead == '\n')
                SKIP(52)
            if(lookahead == '\r')
                SKIP(5)
            END_STATE();
        case 7:
            if(lookahead == '\n')
                SKIP(49)
            END_STATE();
        case 8:
            if(lookahead == '\n')
                SKIP(49)
            if(lookahead == '\r')
                SKIP(7)
            END_STATE();
        case 9:
            if(lookahead == '\n')
                SKIP(53)
            END_STATE();
        case 10:
            if(lookahead == '\n')
                SKIP(53)
            if(lookahead == '\r')
                SKIP(9)
            END_STATE();
        case 11:
            if(lookahead == '\n')
                SKIP(54)
            END_STATE();
        case 12:
            if(lookahead == '\n')
                SKIP(54)
            if(lookahead == '\r')
                SKIP(11)
            END_STATE();
        case 13:
            if(lookahead == '\n')
                SKIP(55)
            END_STATE();
        case 14:
            if(lookahead == '\n')
                SKIP(55)
            if(lookahead == '\r')
                SKIP(13)
            END_STATE();
        case 15:
            if(lookahead == '\n')
                SKIP(56)
            END_STATE();
        case 16:
            if(lookahead == '\n')
                SKIP(56)
            if(lookahead == '\r')
                SKIP(15)
            END_STATE();
        case 17:
            if(lookahead == '\n')
                SKIP(42)
            END_STATE();
        case 18:
            if(lookahead == '\n')
                SKIP(42)
            if(lookahead == '\r')
                SKIP(17)
            END_STATE();
        case 19:
            if(lookahead == '\n')
                SKIP(44)
            END_STATE();
        case 20:
            if(lookahead == '\n')
                SKIP(44)
            if(lookahead == '\r')
                SKIP(19)
            END_STATE();
        case 21:
            if(lookahead == '\n')
                SKIP(45)
            END_STATE();
        case 22:
            if(lookahead == '\n')
                SKIP(45)
            if(lookahead == '\r')
                SKIP(21)
            END_STATE();
        case 23:
            if(lookahead == '\n')
                SKIP(47)
            END_STATE();
        case 24:
            if(lookahead == '\n')
                SKIP(47)
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
                ADVANCE(627);
            if(lookahead == '\r')
                ADVANCE(32);
            if(lookahead == '/')
                ADVANCE(636);
            if(lookahead == '\\')
                ADVANCE(634);
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                SKIP(61)
            if(lookahead != 0)
                ADVANCE(637);
            END_STATE();
        case 30:
            if(lookahead == '\n')
                ADVANCE(627);
            if(lookahead == '\r')
                ADVANCE(31);
            if(lookahead == '/')
                ADVANCE(51);
            if(lookahead == '\\')
                SKIP(37)
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                SKIP(60)
            END_STATE();
        case 31:
            if(lookahead == '\n')
                ADVANCE(627);
            if(lookahead == '/')
                ADVANCE(51);
            if(lookahead == '\\')
                SKIP(37)
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(60)
            END_STATE();
        case 32:
            if(lookahead == '\n')
                ADVANCE(627);
            if(lookahead == '/')
                ADVANCE(636);
            if(lookahead == '\\')
                ADVANCE(634);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(61)
            if(lookahead != 0)
                ADVANCE(637);
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
                ADVANCE(887);
            if(lookahead == '\r')
                ADVANCE(886);
            if(lookahead == '\\')
                ADVANCE(890);
            if(lookahead != 0)
                ADVANCE(889);
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
                ADVANCE(284);
            END_STATE();
        case 41:
            if(lookahead == '"')
                ADVANCE(568);
            if(lookahead == '\'')
                ADVANCE(570);
            if(lookahead == '(')
                ADVANCE(563);
            if(lookahead == '+')
                ADVANCE(557);
            if(lookahead == '-')
                ADVANCE(559);
            if(lookahead == '.')
                ADVANCE(478);
            if(lookahead == '/')
                ADVANCE(51);
            if(lookahead == '0')
                ADVANCE(604);
            if(lookahead == ':')
                ADVANCE(70);
            if(lookahead == 'F')
                ADVANCE(726);
            if(lookahead == 'L')
                ADVANCE(567);
            if(lookahead == 'T')
                ADVANCE(730);
            if(lookahead == '\\')
                SKIP(4)
            if(lookahead == 'a')
                ADVANCE(814);
            if(lookahead == 'b')
                ADVANCE(829);
            if(lookahead == 'c')
                ADVANCE(784);
            if(lookahead == 'd')
                ADVANCE(825);
            if(lookahead == 'f')
                ADVANCE(787);
            if(lookahead == 'i')
                ADVANCE(817);
            if(lookahead == 'l')
                ADVANCE(828);
            if(lookahead == 'm')
                ADVANCE(733);
            if(lookahead == 'o')
                ADVANCE(749);
            if(lookahead == 's')
                ADVANCE(758);
            if(lookahead == 'u')
                ADVANCE(798);
            if(lookahead == 'w')
                ADVANCE(745);
            if(lookahead == '~')
                ADVANCE(565);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(41)
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(608);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 42:
            if(lookahead == '"')
                ADVANCE(568);
            if(lookahead == '\'')
                ADVANCE(570);
            if(lookahead == '(')
                ADVANCE(563);
            if(lookahead == '+')
                ADVANCE(557);
            if(lookahead == '-')
                ADVANCE(559);
            if(lookahead == '.')
                ADVANCE(478);
            if(lookahead == '/')
                ADVANCE(51);
            if(lookahead == '0')
                ADVANCE(604);
            if(lookahead == ':')
                ADVANCE(70);
            if(lookahead == 'F')
                ADVANCE(726);
            if(lookahead == 'L')
                ADVANCE(567);
            if(lookahead == 'T')
                ADVANCE(730);
            if(lookahead == '\\')
                SKIP(18)
            if(lookahead == '~')
                ADVANCE(565);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(42)
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(608);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 43:
            if(lookahead == '"')
                ADVANCE(710);
            END_STATE();
        case 44:
            if(lookahead == '$')
                ADVANCE(553);
            if(lookahead == '%')
                ADVANCE(562);
            if(lookahead == ')')
                ADVANCE(564);
            if(lookahead == '*')
                ADVANCE(560);
            if(lookahead == '+')
                ADVANCE(556);
            if(lookahead == ',')
                ADVANCE(546);
            if(lookahead == '-')
                ADVANCE(558);
            if(lookahead == '/')
                ADVANCE(561);
            if(lookahead == ':')
                ADVANCE(646);
            if(lookahead == ';')
                ADVANCE(647);
            if(lookahead == '<')
                ADVANCE(541);
            if(lookahead == '>')
                ADVANCE(543);
            if(lookahead == '@')
                ADVANCE(159);
            if(lookahead == '\\')
                SKIP(20)
            if(lookahead == ']')
                ADVANCE(882);
            if(lookahead == '^')
                ADVANCE(552);
            if(lookahead == '{')
                ADVANCE(642);
            if(lookahead == '|')
                ADVANCE(551);
            if(lookahead == '}')
                ADVANCE(643);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(44)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 45:
            if(lookahead == '$')
                ADVANCE(553);
            if(lookahead == '%')
                ADVANCE(562);
            if(lookahead == ')')
                ADVANCE(564);
            if(lookahead == '*')
                ADVANCE(560);
            if(lookahead == '+')
                ADVANCE(556);
            if(lookahead == ',')
                ADVANCE(546);
            if(lookahead == '-')
                ADVANCE(558);
            if(lookahead == '/')
                ADVANCE(561);
            if(lookahead == ':')
                ADVANCE(646);
            if(lookahead == ';')
                ADVANCE(647);
            if(lookahead == '<')
                ADVANCE(71);
            if(lookahead == '>')
                ADVANCE(543);
            if(lookahead == '\\')
                SKIP(22)
            if(lookahead == ']')
                ADVANCE(882);
            if(lookahead == '^')
                ADVANCE(552);
            if(lookahead == '|')
                ADVANCE(551);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(45)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 46:
            if(lookahead == ')')
                ADVANCE(564);
            if(lookahead == ',')
                ADVANCE(546);
            if(lookahead == '/')
                ADVANCE(51);
            if(lookahead == ':')
                ADVANCE(70);
            if(lookahead == '<')
                ADVANCE(540);
            if(lookahead == '>')
                ADVANCE(542);
            if(lookahead == '\\')
                SKIP(26)
            if(lookahead == '{')
                ADVANCE(642);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(46)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 47:
            if(lookahead == ')')
                ADVANCE(564);
            if(lookahead == '/')
                ADVANCE(51);
            if(lookahead == '\\')
                SKIP(24)
            if(lookahead == 'i')
                ADVANCE(292);
            if(lookahead == 'o')
                ADVANCE(449);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(47)
            END_STATE();
        case 48:
            if(lookahead == ',')
                ADVANCE(546);
            if(lookahead == '/')
                ADVANCE(51);
            if(lookahead == ':')
                ADVANCE(70);
            if(lookahead == '<')
                ADVANCE(540);
            if(lookahead == '>')
                ADVANCE(542);
            if(lookahead == '@')
                ADVANCE(158);
            if(lookahead == '\\')
                SKIP(2)
            if(lookahead == ']')
                ADVANCE(882);
            if(lookahead == 'a')
                ADVANCE(813);
            if(lookahead == 'b')
                ADVANCE(789);
            if(lookahead == 'c')
                ADVANCE(783);
            if(lookahead == 'd')
                ADVANCE(825);
            if(lookahead == 'e')
                ADVANCE(815);
            if(lookahead == 'f')
                ADVANCE(787);
            if(lookahead == 'i')
                ADVANCE(817);
            if(lookahead == 'l')
                ADVANCE(828);
            if(lookahead == 'm')
                ADVANCE(733);
            if(lookahead == 'n')
                ADVANCE(737);
            if(lookahead == 'o')
                ADVANCE(749);
            if(lookahead == 'r')
                ADVANCE(768);
            if(lookahead == 's')
                ADVANCE(757);
            if(lookahead == 't')
                ADVANCE(878);
            if(lookahead == 'u')
                ADVANCE(797);
            if(lookahead == 'v')
                ADVANCE(826);
            if(lookahead == 'w')
                ADVANCE(745);
            if(lookahead == '}')
                ADVANCE(643);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(48)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 49:
            if(lookahead == ',')
                ADVANCE(546);
            if(lookahead == '/')
                ADVANCE(51);
            if(lookahead == ':')
                ADVANCE(70);
            if(lookahead == '>')
                ADVANCE(542);
            if(lookahead == '@')
                ADVANCE(179);
            if(lookahead == '\\')
                SKIP(8)
            if(lookahead == 'a')
                ADVANCE(814);
            if(lookahead == 'b')
                ADVANCE(829);
            if(lookahead == 'c')
                ADVANCE(784);
            if(lookahead == 'd')
                ADVANCE(825);
            if(lookahead == 'f')
                ADVANCE(787);
            if(lookahead == 'i')
                ADVANCE(817);
            if(lookahead == 'l')
                ADVANCE(828);
            if(lookahead == 'm')
                ADVANCE(733);
            if(lookahead == 'o')
                ADVANCE(749);
            if(lookahead == 's')
                ADVANCE(758);
            if(lookahead == 'u')
                ADVANCE(798);
            if(lookahead == 'w')
                ADVANCE(745);
            if(lookahead == '}')
                ADVANCE(643);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(49)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 50:
            if(lookahead == '.')
                ADVANCE(478);
            if(lookahead == '0')
                ADVANCE(601);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(603);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(617);
            END_STATE();
        case 51:
            if(lookahead == '/')
                ADVANCE(883);
            END_STATE();
        case 52:
            if(lookahead == '/')
                ADVANCE(51);
            if(lookahead == ':')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(158);
            if(lookahead == '\\')
                SKIP(6)
            if(lookahead == 'a')
                ADVANCE(814);
            if(lookahead == 'b')
                ADVANCE(789);
            if(lookahead == 'c')
                ADVANCE(784);
            if(lookahead == 'd')
                ADVANCE(825);
            if(lookahead == 'e')
                ADVANCE(816);
            if(lookahead == 'f')
                ADVANCE(787);
            if(lookahead == 'i')
                ADVANCE(817);
            if(lookahead == 'l')
                ADVANCE(828);
            if(lookahead == 'm')
                ADVANCE(733);
            if(lookahead == 'o')
                ADVANCE(749);
            if(lookahead == 's')
                ADVANCE(757);
            if(lookahead == 'u')
                ADVANCE(797);
            if(lookahead == 'w')
                ADVANCE(745);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(52)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 53:
            if(lookahead == '/')
                ADVANCE(51);
            if(lookahead == ':')
                ADVANCE(70);
            if(lookahead == '@')
                ADVANCE(252);
            if(lookahead == '\\')
                SKIP(10)
            if(lookahead == 'a')
                ADVANCE(814);
            if(lookahead == 'b')
                ADVANCE(829);
            if(lookahead == 'c')
                ADVANCE(783);
            if(lookahead == 'd')
                ADVANCE(825);
            if(lookahead == 'e')
                ADVANCE(816);
            if(lookahead == 'f')
                ADVANCE(787);
            if(lookahead == 'i')
                ADVANCE(817);
            if(lookahead == 'l')
                ADVANCE(828);
            if(lookahead == 'o')
                ADVANCE(749);
            if(lookahead == 's')
                ADVANCE(758);
            if(lookahead == 't')
                ADVANCE(878);
            if(lookahead == 'u')
                ADVANCE(798);
            if(lookahead == 'w')
                ADVANCE(745);
            if(lookahead == '}')
                ADVANCE(643);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(53)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 54:
            if(lookahead == '/')
                ADVANCE(51);
            if(lookahead == ':')
                ADVANCE(70);
            if(lookahead == '\\')
                SKIP(12)
            if(lookahead == 'a')
                ADVANCE(814);
            if(lookahead == 'b')
                ADVANCE(829);
            if(lookahead == 'c')
                ADVANCE(738);
            if(lookahead == 'd')
                ADVANCE(765);
            if(lookahead == 'f')
                ADVANCE(787);
            if(lookahead == 'i')
                ADVANCE(817);
            if(lookahead == 'l')
                ADVANCE(828);
            if(lookahead == 'm')
                ADVANCE(733);
            if(lookahead == 'o')
                ADVANCE(749);
            if(lookahead == 's')
                ADVANCE(758);
            if(lookahead == 'u')
                ADVANCE(798);
            if(lookahead == 'w')
                ADVANCE(745);
            if(lookahead == '}')
                ADVANCE(643);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(54)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 55:
            if(lookahead == '/')
                ADVANCE(51);
            if(lookahead == ':')
                ADVANCE(70);
            if(lookahead == '\\')
                SKIP(14)
            if(lookahead == 'b')
                ADVANCE(829);
            if(lookahead == 'c')
                ADVANCE(784);
            if(lookahead == 'd')
                ADVANCE(825);
            if(lookahead == 'f')
                ADVANCE(787);
            if(lookahead == 'i')
                ADVANCE(817);
            if(lookahead == 'l')
                ADVANCE(828);
            if(lookahead == 'o')
                ADVANCE(749);
            if(lookahead == 's')
                ADVANCE(758);
            if(lookahead == 'u')
                ADVANCE(798);
            if(lookahead == 'w')
                ADVANCE(745);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(55)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 56:
            if(lookahead == '/')
                ADVANCE(51);
            if(lookahead == ':')
                ADVANCE(70);
            if(lookahead == '\\')
                SKIP(16)
            if(lookahead == 'b')
                ADVANCE(829);
            if(lookahead == 'c')
                ADVANCE(784);
            if(lookahead == 'i')
                ADVANCE(817);
            if(lookahead == 'l')
                ADVANCE(835);
            if(lookahead == 's')
                ADVANCE(785);
            if(lookahead == 'u')
                ADVANCE(798);
            if(lookahead == 'w')
                ADVANCE(746);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(56)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 57:
            if(lookahead == '/')
                ADVANCE(51);
            if(lookahead == ';')
                ADVANCE(647);
            if(lookahead == '\\')
                SKIP(28)
            if(lookahead == 's')
                ADVANCE(874);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(57)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 58:
            if(lookahead == '/')
                ADVANCE(51);
            if(lookahead == '\\')
                SKIP(34)
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(58)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(571);
            END_STATE();
        case 59:
            if(lookahead == '/')
                ADVANCE(51);
            if(lookahead == '\\')
                SKIP(39)
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(59)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(569);
            END_STATE();
        case 60:
            if(lookahead == '/')
                ADVANCE(51);
            if(lookahead == '\\')
                SKIP(37)
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(60)
            END_STATE();
        case 61:
            if(lookahead == '/')
                ADVANCE(636);
            if(lookahead == '\\')
                ADVANCE(634);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(61)
            if(lookahead != 0)
                ADVANCE(637);
            END_STATE();
        case 62:
            if(lookahead == '1')
                ADVANCE(68);
            if(lookahead == '3')
                ADVANCE(64);
            if(lookahead == '6')
                ADVANCE(66);
            if(lookahead == '8')
                ADVANCE(507);
            END_STATE();
        case 63:
            if(lookahead == '1')
                ADVANCE(69);
            if(lookahead == '3')
                ADVANCE(65);
            if(lookahead == '6')
                ADVANCE(67);
            if(lookahead == '8')
                ADVANCE(515);
            if(lookahead == 'e')
                ADVANCE(379);
            END_STATE();
        case 64:
            if(lookahead == '2')
                ADVANCE(521);
            END_STATE();
        case 65:
            if(lookahead == '2')
                ADVANCE(502);
            END_STATE();
        case 66:
            if(lookahead == '4')
                ADVANCE(524);
            END_STATE();
        case 67:
            if(lookahead == '4')
                ADVANCE(505);
            END_STATE();
        case 68:
            if(lookahead == '6')
                ADVANCE(518);
            END_STATE();
        case 69:
            if(lookahead == '6')
                ADVANCE(496);
            END_STATE();
        case 70:
            if(lookahead == ':')
                ADVANCE(535);
            END_STATE();
        case 71:
            if(lookahead == '<')
                ADVANCE(555);
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
                ADVANCE(313);
            if(lookahead == 'd')
                ADVANCE(116);
            if(lookahead == 'f')
                ADVANCE(247);
            if(lookahead == 'i')
                ADVANCE(226);
            END_STATE();
        case 75:
            if(lookahead == 'D')
                ADVANCE(81);
            END_STATE();
        case 76:
            if(lookahead == 'E')
                ADVANCE(593);
            END_STATE();
        case 77:
            if(lookahead == 'E')
                ADVANCE(595);
            END_STATE();
        case 78:
            if(lookahead == 'L')
                ADVANCE(82);
            END_STATE();
        case 79:
            if(lookahead == 'R')
                ADVANCE(714);
            END_STATE();
        case 80:
            if(lookahead == 'R')
                ADVANCE(174);
            if(lookahead == 'S')
                ADVANCE(196);
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
                ADVANCE(333);
            END_STATE();
        case 84:
            if(lookahead == 'T')
                ADVANCE(343);
            END_STATE();
        case 85:
            if(lookahead == 'U')
                ADVANCE(76);
            END_STATE();
        case 86:
            if(lookahead == '_')
                ADVANCE(136);
            END_STATE();
        case 87:
            if(lookahead == '_')
                ADVANCE(283);
            END_STATE();
        case 88:
            if(lookahead == '_')
                ADVANCE(452);
            END_STATE();
        case 89:
            if(lookahead == '_')
                ADVANCE(380);
            END_STATE();
        case 90:
            if(lookahead == '_')
                ADVANCE(324);
            END_STATE();
        case 91:
            if(lookahead == '_')
                ADVANCE(400);
            END_STATE();
        case 92:
            if(lookahead == '_')
                ADVANCE(286);
            END_STATE();
        case 93:
            if(lookahead == 'a')
                ADVANCE(391);
            if(lookahead == 'o')
                ADVANCE(298);
            END_STATE();
        case 94:
            if(lookahead == 'a')
                ADVANCE(288);
            END_STATE();
        case 95:
            if(lookahead == 'a')
                ADVANCE(275);
            END_STATE();
        case 96:
            if(lookahead == 'a')
                ADVANCE(89);
            END_STATE();
        case 97:
            if(lookahead == 'a')
                ADVANCE(251);
            END_STATE();
        case 98:
            if(lookahead == 'a')
                ADVANCE(157);
            END_STATE();
        case 99:
            if(lookahead == 'a')
                ADVANCE(290);
            END_STATE();
        case 100:
            if(lookahead == 'a')
                ADVANCE(385);
            END_STATE();
        case 101:
            if(lookahead == 'a')
                ADVANCE(364);
            END_STATE();
        case 102:
            if(lookahead == 'a')
                ADVANCE(265);
            END_STATE();
        case 103:
            if(lookahead == 'a')
                ADVANCE(386);
            END_STATE();
        case 104:
            if(lookahead == 'a')
                ADVANCE(365);
            END_STATE();
        case 105:
            if(lookahead == 'a')
                ADVANCE(450);
            END_STATE();
        case 106:
            if(lookahead == 'a')
                ADVANCE(294);
            END_STATE();
        case 107:
            if(lookahead == 'a')
                ADVANCE(266);
            END_STATE();
        case 108:
            if(lookahead == 'a')
                ADVANCE(408);
            END_STATE();
        case 109:
            if(lookahead == 'a')
                ADVANCE(392);
            END_STATE();
        case 110:
            if(lookahead == 'a')
                ADVANCE(271);
            END_STATE();
        case 111:
            if(lookahead == 'a')
                ADVANCE(267);
            END_STATE();
        case 112:
            if(lookahead == 'a')
                ADVANCE(268);
            END_STATE();
        case 113:
            if(lookahead == 'a')
                ADVANCE(279);
            END_STATE();
        case 114:
            if(lookahead == 'a')
                ADVANCE(269);
            END_STATE();
        case 115:
            if(lookahead == 'a')
                ADVANCE(314);
            END_STATE();
        case 116:
            if(lookahead == 'a')
                ADVANCE(428);
            END_STATE();
        case 117:
            if(lookahead == 'a')
                ADVANCE(423);
            END_STATE();
        case 118:
            if(lookahead == 'a')
                ADVANCE(291);
            END_STATE();
        case 119:
            if(lookahead == 'a')
                ADVANCE(456);
            END_STATE();
        case 120:
            if(lookahead == 'a')
                ADVANCE(140);
            END_STATE();
        case 121:
            if(lookahead == 'a')
                ADVANCE(254);
            END_STATE();
        case 122:
            if(lookahead == 'a')
                ADVANCE(440);
            END_STATE();
        case 123:
            if(lookahead == 'a')
                ADVANCE(257);
            END_STATE();
        case 124:
            if(lookahead == 'a')
                ADVANCE(442);
            END_STATE();
        case 125:
            if(lookahead == 'b')
                ADVANCE(455);
            END_STATE();
        case 126:
            if(lookahead == 'b')
                ADVANCE(277);
            END_STATE();
        case 127:
            if(lookahead == 'b')
                ADVANCE(281);
            END_STATE();
        case 128:
            if(lookahead == 'c')
                ADVANCE(702);
            END_STATE();
        case 129:
            if(lookahead == 'c')
                ADVANCE(700);
            END_STATE();
        case 130:
            if(lookahead == 'c')
                ADVANCE(227);
            END_STATE();
        case 131:
            if(lookahead == 'c')
                ADVANCE(424);
            END_STATE();
        case 132:
            if(lookahead == 'c')
                ADVANCE(182);
            END_STATE();
        case 133:
            if(lookahead == 'c')
                ADVANCE(102);
            END_STATE();
        case 134:
            if(lookahead == 'c')
                ADVANCE(102);
            if(lookahead == 'n')
                ADVANCE(218);
            END_STATE();
        case 135:
            if(lookahead == 'c')
                ADVANCE(102);
            if(lookahead == 'n')
                ADVANCE(224);
            END_STATE();
        case 136:
            if(lookahead == 'c')
                ADVANCE(342);
            END_STATE();
        case 137:
            if(lookahead == 'c')
                ADVANCE(413);
            END_STATE();
        case 138:
            if(lookahead == 'c')
                ADVANCE(168);
            END_STATE();
        case 139:
            if(lookahead == 'c')
                ADVANCE(417);
            END_STATE();
        case 140:
            if(lookahead == 'c')
                ADVANCE(175);
            END_STATE();
        case 141:
            if(lookahead == 'c')
                ADVANCE(176);
            END_STATE();
        case 142:
            if(lookahead == 'd')
                ADVANCE(628);
            if(lookahead == '\t' ||
               lookahead == ' ')
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(633);
            END_STATE();
        case 143:
            if(lookahead == 'd')
                ADVANCE(648);
            END_STATE();
        case 144:
            if(lookahead == 'd')
                ADVANCE(511);
            END_STATE();
        case 145:
            if(lookahead == 'd')
                ADVANCE(662);
            END_STATE();
        case 146:
            if(lookahead == 'd')
                ADVANCE(40);
            END_STATE();
        case 147:
            if(lookahead == 'd')
                ADVANCE(707);
            END_STATE();
        case 148:
            if(lookahead == 'd')
                ADVANCE(709);
            END_STATE();
        case 149:
            if(lookahead == 'd')
                ADVANCE(706);
            END_STATE();
        case 150:
            if(lookahead == 'd')
                ADVANCE(705);
            END_STATE();
        case 151:
            if(lookahead == 'd')
                ADVANCE(459);
            END_STATE();
        case 152:
            if(lookahead == 'd')
                ADVANCE(350);
            if(lookahead == 'l')
                ADVANCE(345);
            END_STATE();
        case 153:
            if(lookahead == 'd')
                ADVANCE(178);
            END_STATE();
        case 154:
            if(lookahead == 'd')
                ADVANCE(178);
            if(lookahead == 'n')
                ADVANCE(99);
            END_STATE();
        case 155:
            if(lookahead == 'd')
                ADVANCE(201);
            END_STATE();
        case 156:
            if(lookahead == 'd')
                ADVANCE(181);
            END_STATE();
        case 157:
            if(lookahead == 'd')
                ADVANCE(332);
            END_STATE();
        case 158:
            if(lookahead == 'd')
                ADVANCE(116);
            if(lookahead == 'f')
                ADVANCE(247);
            if(lookahead == 'i')
                ADVANCE(226);
            END_STATE();
        case 159:
            if(lookahead == 'd')
                ADVANCE(211);
            END_STATE();
        case 160:
            if(lookahead == 'e')
                ADVANCE(213);
            END_STATE();
        case 161:
            if(lookahead == 'e')
                ADVANCE(362);
            if(lookahead == 'h')
                ADVANCE(334);
            if(lookahead == 't')
                ADVANCE(371);
            END_STATE();
        case 162:
            if(lookahead == 'e')
                ADVANCE(689);
            END_STATE();
        case 163:
            if(lookahead == 'e')
                ADVANCE(701);
            END_STATE();
        case 164:
            if(lookahead == 'e')
                ADVANCE(154);
            END_STATE();
        case 165:
            if(lookahead == 'e')
                ADVANCE(528);
            END_STATE();
        case 166:
            if(lookahead == 'e')
                ADVANCE(670);
            END_STATE();
        case 167:
            if(lookahead == 'e')
                ADVANCE(683);
            END_STATE();
        case 168:
            if(lookahead == 'e')
                ADVANCE(547);
            END_STATE();
        case 169:
            if(lookahead == 'e')
                ADVANCE(671);
            END_STATE();
        case 170:
            if(lookahead == 'e')
                ADVANCE(656);
            END_STATE();
        case 171:
            if(lookahead == 'e')
                ADVANCE(673);
            END_STATE();
        case 172:
            if(lookahead == 'e')
                ADVANCE(672);
            END_STATE();
        case 173:
            if(lookahead == 'e')
                ADVANCE(530);
            END_STATE();
        case 174:
            if(lookahead == 'e')
                ADVANCE(353);
            END_STATE();
        case 175:
            if(lookahead == 'e')
                ADVANCE(644);
            END_STATE();
        case 176:
            if(lookahead == 'e')
                ADVANCE(699);
            END_STATE();
        case 177:
            if(lookahead == 'e')
                ADVANCE(693);
            END_STATE();
        case 178:
            if(lookahead == 'e')
                ADVANCE(212);
            END_STATE();
        case 179:
            if(lookahead == 'e')
                ADVANCE(465);
            if(lookahead == 'h')
                ADVANCE(109);
            if(lookahead == 'i')
                ADVANCE(147);
            if(lookahead == 'k')
                ADVANCE(185);
            if(lookahead == 'm')
                ADVANCE(457);
            if(lookahead == 'n')
                ADVANCE(340);
            if(lookahead == 'o')
                ADVANCE(361);
            if(lookahead == 't')
                ADVANCE(367);
            END_STATE();
        case 180:
            if(lookahead == 'e')
                ADVANCE(87);
            END_STATE();
        case 181:
            if(lookahead == 'e')
                ADVANCE(216);
            END_STATE();
        case 182:
            if(lookahead == 'e')
                ADVANCE(356);
            END_STATE();
        case 183:
            if(lookahead == 'e')
                ADVANCE(359);
            END_STATE();
        case 184:
            if(lookahead == 'e')
                ADVANCE(144);
            END_STATE();
        case 185:
            if(lookahead == 'e')
                ADVANCE(469);
            END_STATE();
        case 186:
            if(lookahead == 'e')
                ADVANCE(387);
            END_STATE();
        case 187:
            if(lookahead == 'e')
                ADVANCE(273);
            END_STATE();
        case 188:
            if(lookahead == 'e')
                ADVANCE(388);
            END_STATE();
        case 189:
            if(lookahead == 'e')
                ADVANCE(320);
            END_STATE();
        case 190:
            if(lookahead == 'e')
                ADVANCE(146);
            END_STATE();
        case 191:
            if(lookahead == 'e')
                ADVANCE(389);
            END_STATE();
        case 192:
            if(lookahead == 'e')
                ADVANCE(390);
            END_STATE();
        case 193:
            if(lookahead == 'e')
                ADVANCE(379);
            END_STATE();
        case 194:
            if(lookahead == 'e')
                ADVANCE(106);
            END_STATE();
        case 195:
            if(lookahead == 'e')
                ADVANCE(149);
            END_STATE();
        case 196:
            if(lookahead == 'e')
                ADVANCE(366);
            END_STATE();
        case 197:
            if(lookahead == 'e')
                ADVANCE(410);
            END_STATE();
        case 198:
            if(lookahead == 'e')
                ADVANCE(412);
            END_STATE();
        case 199:
            if(lookahead == 'e')
                ADVANCE(382);
            END_STATE();
        case 200:
            if(lookahead == 'e')
                ADVANCE(378);
            END_STATE();
        case 201:
            if(lookahead == 'e')
                ADVANCE(383);
            END_STATE();
        case 202:
            if(lookahead == 'e')
                ADVANCE(422);
            END_STATE();
        case 203:
            if(lookahead == 'e')
                ADVANCE(397);
            END_STATE();
        case 204:
            if(lookahead == 'e')
                ADVANCE(309);
            END_STATE();
        case 205:
            if(lookahead == 'e')
                ADVANCE(373);
            END_STATE();
        case 206:
            if(lookahead == 'e')
                ADVANCE(375);
            END_STATE();
        case 207:
            if(lookahead == 'e')
                ADVANCE(153);
            END_STATE();
        case 208:
            if(lookahead == 'e')
                ADVANCE(326);
            END_STATE();
        case 209:
            if(lookahead == 'e')
                ADVANCE(402);
            END_STATE();
        case 210:
            if(lookahead == 'e')
                ADVANCE(438);
            END_STATE();
        case 211:
            if(lookahead == 'e')
                ADVANCE(217);
            END_STATE();
        case 212:
            if(lookahead == 'f')
                ADVANCE(691);
            END_STATE();
        case 213:
            if(lookahead == 'f')
                ADVANCE(105);
            END_STATE();
        case 214:
            if(lookahead == 'f')
                ADVANCE(246);
            if(lookahead == 'm')
                ADVANCE(103);
            if(lookahead == 's')
                ADVANCE(198);
            END_STATE();
        case 215:
            if(lookahead == 'f')
                ADVANCE(120);
            END_STATE();
        case 216:
            if(lookahead == 'f')
                ADVANCE(249);
            END_STATE();
        case 217:
            if(lookahead == 'f')
                ADVANCE(119);
            END_STATE();
        case 218:
            if(lookahead == 'g')
                ADVANCE(498);
            END_STATE();
        case 219:
            if(lookahead == 'g')
                ADVANCE(536);
            END_STATE();
        case 220:
            if(lookahead == 'g')
                ADVANCE(538);
            END_STATE();
        case 221:
            if(lookahead == 'g')
                ADVANCE(504);
            END_STATE();
        case 222:
            if(lookahead == 'g')
                ADVANCE(520);
            END_STATE();
        case 223:
            if(lookahead == 'g')
                ADVANCE(523);
            END_STATE();
        case 224:
            if(lookahead == 'g')
                ADVANCE(500);
            END_STATE();
        case 225:
            if(lookahead == 'g')
                ADVANCE(322);
            END_STATE();
        case 226:
            if(lookahead == 'g')
                ADVANCE(321);
            END_STATE();
        case 227:
            if(lookahead == 'h')
                ADVANCE(687);
            END_STATE();
        case 228:
            if(lookahead == 'h')
                ADVANCE(245);
            END_STATE();
        case 229:
            if(lookahead == 'h')
                ADVANCE(104);
            END_STATE();
        case 230:
            if(lookahead == 'h')
                ADVANCE(344);
            END_STATE();
        case 231:
            if(lookahead == 'i')
                ADVANCE(463);
            END_STATE();
        case 232:
            if(lookahead == 'i')
                ADVANCE(475);
            END_STATE();
        case 233:
            if(lookahead == 'i')
                ADVANCE(404);
            if(lookahead == 'o')
                ADVANCE(329);
            END_STATE();
        case 234:
            if(lookahead == 'i')
                ADVANCE(305);
            if(lookahead == 'n')
                ADVANCE(241);
            END_STATE();
        case 235:
            if(lookahead == 'i')
                ADVANCE(125);
            END_STATE();
        case 236:
            if(lookahead == 'i')
                ADVANCE(225);
            END_STATE();
        case 237:
            if(lookahead == 'i')
                ADVANCE(100);
            END_STATE();
        case 238:
            if(lookahead == 'i')
                ADVANCE(301);
            if(lookahead == 'u')
                ADVANCE(137);
            END_STATE();
        case 239:
            if(lookahead == 'i')
                ADVANCE(143);
            END_STATE();
        case 240:
            if(lookahead == 'i')
                ADVANCE(330);
            END_STATE();
        case 241:
            if(lookahead == 'i')
                ADVANCE(330);
            if(lookahead == 's')
                ADVANCE(236);
            END_STATE();
        case 242:
            if(lookahead == 'i')
                ADVANCE(128);
            END_STATE();
        case 243:
            if(lookahead == 'i')
                ADVANCE(421);
            END_STATE();
        case 244:
            if(lookahead == 'i')
                ADVANCE(129);
            END_STATE();
        case 245:
            if(lookahead == 'i')
                ADVANCE(148);
            END_STATE();
        case 246:
            if(lookahead == 'i')
                ADVANCE(187);
            END_STATE();
        case 247:
            if(lookahead == 'i')
                ADVANCE(315);
            END_STATE();
        case 248:
            if(lookahead == 'i')
                ADVANCE(113);
            END_STATE();
        case 249:
            if(lookahead == 'i')
                ADVANCE(319);
            END_STATE();
        case 250:
            if(lookahead == 'i')
                ADVANCE(418);
            END_STATE();
        case 251:
            if(lookahead == 'i')
                ADVANCE(394);
            END_STATE();
        case 252:
            if(lookahead == 'i')
                ADVANCE(226);
            END_STATE();
        case 253:
            if(lookahead == 'i')
                ADVANCE(302);
            END_STATE();
        case 254:
            if(lookahead == 'i')
                ADVANCE(395);
            END_STATE();
        case 255:
            if(lookahead == 'i')
                ADVANCE(432);
            END_STATE();
        case 256:
            if(lookahead == 'i')
                ADVANCE(336);
            END_STATE();
        case 257:
            if(lookahead == 'i')
                ADVANCE(396);
            END_STATE();
        case 258:
            if(lookahead == 'i')
                ADVANCE(141);
            END_STATE();
        case 259:
            if(lookahead == 'i')
                ADVANCE(338);
            END_STATE();
        case 260:
            if(lookahead == 'i')
                ADVANCE(339);
            END_STATE();
        case 261:
            if(lookahead == 'i')
                ADVANCE(346);
            END_STATE();
        case 262:
            if(lookahead == 'i')
                ADVANCE(441);
            END_STATE();
        case 263:
            if(lookahead == 'k')
                ADVANCE(663);
            END_STATE();
        case 264:
            if(lookahead == 'l')
                ADVANCE(237);
            END_STATE();
        case 265:
            if(lookahead == 'l')
                ADVANCE(645);
            END_STATE();
        case 266:
            if(lookahead == 'l')
                ADVANCE(712);
            END_STATE();
        case 267:
            if(lookahead == 'l')
                ADVANCE(708);
            END_STATE();
        case 268:
            if(lookahead == 'l')
                ADVANCE(703);
            END_STATE();
        case 269:
            if(lookahead == 'l')
                ADVANCE(685);
            END_STATE();
        case 270:
            if(lookahead == 'l')
                ADVANCE(467);
            END_STATE();
        case 271:
            if(lookahead == 'l')
                ADVANCE(90);
            END_STATE();
        case 272:
            if(lookahead == 'l')
                ADVANCE(468);
            END_STATE();
        case 273:
            if(lookahead == 'l')
                ADVANCE(145);
            END_STATE();
        case 274:
            if(lookahead == 'l')
                ADVANCE(345);
            END_STATE();
        case 275:
            if(lookahead == 'l')
                ADVANCE(460);
            END_STATE();
        case 276:
            if(lookahead == 'l')
                ADVANCE(194);
            END_STATE();
        case 277:
            if(lookahead == 'l')
                ADVANCE(165);
            END_STATE();
        case 278:
            if(lookahead == 'l')
                ADVANCE(166);
            END_STATE();
        case 279:
            if(lookahead == 'l')
                ADVANCE(232);
            END_STATE();
        case 280:
            if(lookahead == 'l')
                ADVANCE(414);
            END_STATE();
        case 281:
            if(lookahead == 'l')
                ADVANCE(173);
            END_STATE();
        case 282:
            if(lookahead == 'l')
                ADVANCE(445);
            END_STATE();
        case 283:
            if(lookahead == 'l')
                ADVANCE(255);
            END_STATE();
        case 284:
            if(lookahead == 'l')
                ADVANCE(347);
            if(lookahead == 's')
                ADVANCE(230);
            END_STATE();
        case 285:
            if(lookahead == 'l')
                ADVANCE(348);
            END_STATE();
        case 286:
            if(lookahead == 'l')
                ADVANCE(262);
            END_STATE();
        case 287:
            if(lookahead == 'm')
                ADVANCE(678);
            END_STATE();
        case 288:
            if(lookahead == 'm')
                ADVANCE(163);
            if(lookahead == 't')
                ADVANCE(231);
            END_STATE();
        case 289:
            if(lookahead == 'm')
                ADVANCE(103);
            if(lookahead == 's')
                ADVANCE(198);
            END_STATE();
        case 290:
            if(lookahead == 'm')
                ADVANCE(169);
            END_STATE();
        case 291:
            if(lookahead == 'm')
                ADVANCE(192);
            END_STATE();
        case 292:
            if(lookahead == 'n')
                ADVANCE(650);
            END_STATE();
        case 293:
            if(lookahead == 'n')
                ADVANCE(676);
            END_STATE();
        case 294:
            if(lookahead == 'n')
                ADVANCE(509);
            END_STATE();
        case 295:
            if(lookahead == 'n')
                ADVANCE(640);
            END_STATE();
        case 296:
            if(lookahead == 'n')
                ADVANCE(665);
            END_STATE();
        case 297:
            if(lookahead == 'n')
                ADVANCE(713);
            END_STATE();
        case 298:
            if(lookahead == 'n')
                ADVANCE(393);
            END_STATE();
        case 299:
            if(lookahead == 'n')
                ADVANCE(447);
            if(lookahead == 'v')
                ADVANCE(204);
            if(lookahead == 'x')
                ADVANCE(132);
            END_STATE();
        case 300:
            if(lookahead == 'n')
                ADVANCE(447);
            if(lookahead == 'x')
                ADVANCE(132);
            END_STATE();
        case 301:
            if(lookahead == 'n')
                ADVANCE(219);
            END_STATE();
        case 302:
            if(lookahead == 'n')
                ADVANCE(220);
            END_STATE();
        case 303:
            if(lookahead == 'n')
                ADVANCE(91);
            END_STATE();
        case 304:
            if(lookahead == 'n')
                ADVANCE(221);
            END_STATE();
        case 305:
            if(lookahead == 'n')
                ADVANCE(406);
            END_STATE();
        case 306:
            if(lookahead == 'n')
                ADVANCE(270);
            END_STATE();
        case 307:
            if(lookahead == 'n')
                ADVANCE(222);
            END_STATE();
        case 308:
            if(lookahead == 'n')
                ADVANCE(223);
            END_STATE();
        case 309:
            if(lookahead == 'n')
                ADVANCE(429);
            END_STATE();
        case 310:
            if(lookahead == 'n')
                ADVANCE(341);
            END_STATE();
        case 311:
            if(lookahead == 'n')
                ADVANCE(155);
            END_STATE();
        case 312:
            if(lookahead == 'n')
                ADVANCE(401);
            END_STATE();
        case 313:
            if(lookahead == 'n')
                ADVANCE(310);
            END_STATE();
        case 314:
            if(lookahead == 'n')
                ADVANCE(150);
            END_STATE();
        case 315:
            if(lookahead == 'n')
                ADVANCE(107);
            END_STATE();
        case 316:
            if(lookahead == 'n')
                ADVANCE(111);
            END_STATE();
        case 317:
            if(lookahead == 'n')
                ADVANCE(112);
            END_STATE();
        case 318:
            if(lookahead == 'n')
                ADVANCE(416);
            END_STATE();
        case 319:
            if(lookahead == 'n')
                ADVANCE(177);
            END_STATE();
        case 320:
            if(lookahead == 'n')
                ADVANCE(138);
            END_STATE();
        case 321:
            if(lookahead == 'n')
                ADVANCE(337);
            END_STATE();
        case 322:
            if(lookahead == 'n')
                ADVANCE(190);
            END_STATE();
        case 323:
            if(lookahead == 'n')
                ADVANCE(240);
            END_STATE();
        case 324:
            if(lookahead == 'n')
                ADVANCE(118);
            END_STATE();
        case 325:
            if(lookahead == 'n')
                ADVANCE(434);
            END_STATE();
        case 326:
            if(lookahead == 'n')
                ADVANCE(444);
            END_STATE();
        case 327:
            if(lookahead == 'o')
                ADVANCE(298);
            END_STATE();
        case 328:
            if(lookahead == 'o')
                ADVANCE(151);
            END_STATE();
        case 329:
            if(lookahead == 'o')
                ADVANCE(276);
            END_STATE();
        case 330:
            if(lookahead == 'o')
                ADVANCE(293);
            END_STATE();
        case 331:
            if(lookahead == 'o')
                ADVANCE(108);
            END_STATE();
        case 332:
            if(lookahead == 'o')
                ADVANCE(306);
            END_STATE();
        case 333:
            if(lookahead == 'o')
                ADVANCE(354);
            END_STATE();
        case 334:
            if(lookahead == 'o')
                ADVANCE(372);
            END_STATE();
        case 335:
            if(lookahead == 'o')
                ADVANCE(133);
            END_STATE();
        case 336:
            if(lookahead == 'o')
                ADVANCE(295);
            END_STATE();
        case 337:
            if(lookahead == 'o')
                ADVANCE(376);
            END_STATE();
        case 338:
            if(lookahead == 'o')
                ADVANCE(296);
            END_STATE();
        case 339:
            if(lookahead == 'o')
                ADVANCE(297);
            END_STATE();
        case 340:
            if(lookahead == 'o')
                ADVANCE(303);
            END_STATE();
        case 341:
            if(lookahead == 'o')
                ADVANCE(436);
            END_STATE();
        case 342:
            if(lookahead == 'o')
                ADVANCE(312);
            END_STATE();
        case 343:
            if(lookahead == 'o')
                ADVANCE(355);
            END_STATE();
        case 344:
            if(lookahead == 'o')
                ADVANCE(374);
            END_STATE();
        case 345:
            if(lookahead == 'o')
                ADVANCE(304);
            END_STATE();
        case 346:
            if(lookahead == 'o')
                ADVANCE(317);
            END_STATE();
        case 347:
            if(lookahead == 'o')
                ADVANCE(307);
            END_STATE();
        case 348:
            if(lookahead == 'o')
                ADVANCE(308);
            END_STATE();
        case 349:
            if(lookahead == 'o')
                ADVANCE(135);
            END_STATE();
        case 350:
            if(lookahead == 'o')
                ADVANCE(461);
            END_STATE();
        case 351:
            if(lookahead == 'p')
                ADVANCE(549);
            END_STATE();
        case 352:
            if(lookahead == 'p')
                ADVANCE(164);
            END_STATE();
        case 353:
            if(lookahead == 'p')
                ADVANCE(272);
            if(lookahead == 'q')
                ADVANCE(453);
            END_STATE();
        case 354:
            if(lookahead == 'p')
                ADVANCE(242);
            END_STATE();
        case 355:
            if(lookahead == 'p')
                ADVANCE(244);
            END_STATE();
        case 356:
            if(lookahead == 'p')
                ADVANCE(427);
            END_STATE();
        case 357:
            if(lookahead == 'p')
                ADVANCE(171);
            END_STATE();
        case 358:
            if(lookahead == 'p')
                ADVANCE(172);
            END_STATE();
        case 359:
            if(lookahead == 'p')
                ADVANCE(377);
            END_STATE();
        case 360:
            if(lookahead == 'p')
                ADVANCE(207);
            END_STATE();
        case 361:
            if(lookahead == 'p')
                ADVANCE(443);
            END_STATE();
        case 362:
            if(lookahead == 'q')
                ADVANCE(454);
            if(lookahead == 't')
                ADVANCE(384);
            END_STATE();
        case 363:
            if(lookahead == 'r')
                ADVANCE(238);
            END_STATE();
        case 364:
            if(lookahead == 'r')
                ADVANCE(531);
            END_STATE();
        case 365:
            if(lookahead == 'r')
                ADVANCE(533);
            END_STATE();
        case 366:
            if(lookahead == 'r')
                ADVANCE(462);
            END_STATE();
        case 367:
            if(lookahead == 'r')
                ADVANCE(471);
            END_STATE();
        case 368:
            if(lookahead == 'r')
                ADVANCE(235);
            END_STATE();
        case 369:
            if(lookahead == 'r')
                ADVANCE(121);
            END_STATE();
        case 370:
            if(lookahead == 'r')
                ADVANCE(253);
            END_STATE();
        case 371:
            if(lookahead == 'r')
                ADVANCE(448);
            END_STATE();
        case 372:
            if(lookahead == 'r')
                ADVANCE(411);
            END_STATE();
        case 373:
            if(lookahead == 'r')
                ADVANCE(110);
            END_STATE();
        case 374:
            if(lookahead == 'r')
                ADVANCE(415);
            END_STATE();
        case 375:
            if(lookahead == 'r')
                ADVANCE(114);
            END_STATE();
        case 376:
            if(lookahead == 'r')
                ADVANCE(180);
            END_STATE();
        case 377:
            if(lookahead == 'r')
                ADVANCE(209);
            END_STATE();
        case 378:
            if(lookahead == 'r')
                ADVANCE(248);
            END_STATE();
        case 379:
            if(lookahead == 'r')
                ADVANCE(215);
            END_STATE();
        case 380:
            if(lookahead == 'r')
                ADVANCE(183);
            END_STATE();
        case 381:
            if(lookahead == 'r')
                ADVANCE(458);
            END_STATE();
        case 382:
            if(lookahead == 'r')
                ADVANCE(316);
            END_STATE();
        case 383:
            if(lookahead == 'r')
                ADVANCE(399);
            END_STATE();
        case 384:
            if(lookahead == 'r')
                ADVANCE(123);
            END_STATE();
        case 385:
            if(lookahead == 's')
                ADVANCE(682);
            END_STATE();
        case 386:
            if(lookahead == 's')
                ADVANCE(263);
            END_STATE();
        case 387:
            if(lookahead == 's')
                ADVANCE(653);
            END_STATE();
        case 388:
            if(lookahead == 's')
                ADVANCE(658);
            END_STATE();
        case 389:
            if(lookahead == 's')
                ADVANCE(659);
            END_STATE();
        case 390:
            if(lookahead == 's')
                ADVANCE(686);
            END_STATE();
        case 391:
            if(lookahead == 's')
                ADVANCE(162);
            END_STATE();
        case 392:
            if(lookahead == 's')
                ADVANCE(228);
            END_STATE();
        case 393:
            if(lookahead == 's')
                ADVANCE(407);
            END_STATE();
        case 394:
            if(lookahead == 's')
                ADVANCE(186);
            END_STATE();
        case 395:
            if(lookahead == 's')
                ADVANCE(188);
            END_STATE();
        case 396:
            if(lookahead == 's')
                ADVANCE(191);
            END_STATE();
        case 397:
            if(lookahead == 's')
                ADVANCE(437);
            END_STATE();
        case 398:
            if(lookahead == 's')
                ADVANCE(425);
            END_STATE();
        case 399:
            if(lookahead == 's')
                ADVANCE(431);
            END_STATE();
        case 400:
            if(lookahead == 's')
                ADVANCE(200);
            END_STATE();
        case 401:
            if(lookahead == 's')
                ADVANCE(439);
            END_STATE();
        case 402:
            if(lookahead == 's')
                ADVANCE(208);
            END_STATE();
        case 403:
            if(lookahead == 't')
                ADVANCE(420);
            END_STATE();
        case 404:
            if(lookahead == 't')
                ADVANCE(214);
            END_STATE();
        case 405:
            if(lookahead == 't')
                ADVANCE(651);
            END_STATE();
        case 406:
            if(lookahead == 't')
                ADVANCE(62);
            END_STATE();
        case 407:
            if(lookahead == 't')
                ADVANCE(680);
            END_STATE();
        case 408:
            if(lookahead == 't')
                ADVANCE(526);
            END_STATE();
        case 409:
            if(lookahead == 't')
                ADVANCE(652);
            END_STATE();
        case 410:
            if(lookahead == 't')
                ADVANCE(513);
            END_STATE();
        case 411:
            if(lookahead == 't')
                ADVANCE(494);
            END_STATE();
        case 412:
            if(lookahead == 't')
                ADVANCE(660);
            END_STATE();
        case 413:
            if(lookahead == 't')
                ADVANCE(674);
            END_STATE();
        case 414:
            if(lookahead == 't')
                ADVANCE(666);
            END_STATE();
        case 415:
            if(lookahead == 't')
                ADVANCE(517);
            END_STATE();
        case 416:
            if(lookahead == 't')
                ADVANCE(63);
            END_STATE();
        case 417:
            if(lookahead == 't')
                ADVANCE(711);
            END_STATE();
        case 418:
            if(lookahead == 't')
                ADVANCE(289);
            END_STATE();
        case 419:
            if(lookahead == 't')
                ADVANCE(472);
            END_STATE();
        case 420:
            if(lookahead == 't')
                ADVANCE(368);
            END_STATE();
        case 421:
            if(lookahead == 't')
                ADVANCE(130);
            END_STATE();
        case 422:
            if(lookahead == 't')
                ADVANCE(369);
            END_STATE();
        case 423:
            if(lookahead == 't')
                ADVANCE(231);
            END_STATE();
        case 424:
            if(lookahead == 't')
                ADVANCE(197);
            END_STATE();
        case 425:
            if(lookahead == 't')
                ADVANCE(88);
            END_STATE();
        case 426:
            if(lookahead == 't')
                ADVANCE(371);
            END_STATE();
        case 427:
            if(lookahead == 't')
                ADVANCE(256);
            END_STATE();
        case 428:
            if(lookahead == 't')
                ADVANCE(96);
            END_STATE();
        case 429:
            if(lookahead == 't')
                ADVANCE(419);
            END_STATE();
        case 430:
            if(lookahead == 't')
                ADVANCE(170);
            END_STATE();
        case 431:
            if(lookahead == 't')
                ADVANCE(115);
            END_STATE();
        case 432:
            if(lookahead == 't')
                ADVANCE(205);
            END_STATE();
        case 433:
            if(lookahead == 't')
                ADVANCE(199);
            END_STATE();
        case 434:
            if(lookahead == 't')
                ADVANCE(193);
            END_STATE();
        case 435:
            if(lookahead == 't')
                ADVANCE(370);
            END_STATE();
        case 436:
            if(lookahead == 't')
                ADVANCE(122);
            END_STATE();
        case 437:
            if(lookahead == 't')
                ADVANCE(84);
            END_STATE();
        case 438:
            if(lookahead == 't')
                ADVANCE(473);
            END_STATE();
        case 439:
            if(lookahead == 't')
                ADVANCE(381);
            END_STATE();
        case 440:
            if(lookahead == 't')
                ADVANCE(259);
            END_STATE();
        case 441:
            if(lookahead == 't')
                ADVANCE(206);
            END_STATE();
        case 442:
            if(lookahead == 't')
                ADVANCE(260);
            END_STATE();
        case 443:
            if(lookahead == 't')
                ADVANCE(261);
            END_STATE();
        case 444:
            if(lookahead == 't')
                ADVANCE(124);
            END_STATE();
        case 445:
            if(lookahead == 't')
                ADVANCE(92);
            END_STATE();
        case 446:
            if(lookahead == 'u')
                ADVANCE(126);
            END_STATE();
        case 447:
            if(lookahead == 'u')
                ADVANCE(287);
            END_STATE();
        case 448:
            if(lookahead == 'u')
                ADVANCE(137);
            END_STATE();
        case 449:
            if(lookahead == 'u')
                ADVANCE(405);
            END_STATE();
        case 450:
            if(lookahead == 'u')
                ADVANCE(280);
            END_STATE();
        case 451:
            if(lookahead == 'u')
                ADVANCE(409);
            END_STATE();
        case 452:
            if(lookahead == 'u')
                ADVANCE(311);
            END_STATE();
        case 453:
            if(lookahead == 'u')
                ADVANCE(203);
            END_STATE();
        case 454:
            if(lookahead == 'u')
                ADVANCE(189);
            END_STATE();
        case 455:
            if(lookahead == 'u')
                ADVANCE(430);
            END_STATE();
        case 456:
            if(lookahead == 'u')
                ADVANCE(282);
            END_STATE();
        case 457:
            if(lookahead == 'u')
                ADVANCE(398);
            END_STATE();
        case 458:
            if(lookahead == 'u')
                ADVANCE(139);
            END_STATE();
        case 459:
            if(lookahead == 'u')
                ADVANCE(278);
            END_STATE();
        case 460:
            if(lookahead == 'u')
                ADVANCE(210);
            END_STATE();
        case 461:
            if(lookahead == 'u')
                ADVANCE(127);
            END_STATE();
        case 462:
            if(lookahead == 'v')
                ADVANCE(258);
            END_STATE();
        case 463:
            if(lookahead == 'v')
                ADVANCE(167);
            END_STATE();
        case 464:
            if(lookahead == 'x')
                ADVANCE(184);
            END_STATE();
        case 465:
            if(lookahead == 'x')
                ADVANCE(433);
            END_STATE();
        case 466:
            if(lookahead == 'y')
                ADVANCE(544);
            END_STATE();
        case 467:
            if(lookahead == 'y')
                ADVANCE(654);
            END_STATE();
        case 468:
            if(lookahead == 'y')
                ADVANCE(83);
            END_STATE();
        case 469:
            if(lookahead == 'y')
                ADVANCE(704);
            END_STATE();
        case 470:
            if(lookahead == 'y')
                ADVANCE(352);
            END_STATE();
        case 471:
            if(lookahead == 'y')
                ADVANCE(86);
            END_STATE();
        case 472:
            if(lookahead == 'y')
                ADVANCE(357);
            END_STATE();
        case 473:
            if(lookahead == 'y')
                ADVANCE(358);
            END_STATE();
        case 474:
            if(lookahead == 'y')
                ADVANCE(360);
            END_STATE();
        case 475:
            if(lookahead == 'z')
                ADVANCE(195);
            END_STATE();
        case 476:
            if(lookahead == '\t' ||
               lookahead == ' ')
                ADVANCE(476);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(633);
            END_STATE();
        case 477:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(609);
            END_STATE();
        case 478:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(597);
            END_STATE();
        case 479:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(603);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(617);
            END_STATE();
        case 480:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(611);
            END_STATE();
        case 481:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(617);
            END_STATE();
        case 482:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(599);
            END_STATE();
        case 483:
            if(lookahead != 0 &&
               lookahead != '\r' &&
               lookahead != '\\')
                ADVANCE(889);
            if(lookahead == '\r')
                ADVANCE(891);
            if(lookahead == '\\')
                ADVANCE(890);
            END_STATE();
        case 484:
            if(lookahead != 0 &&
               lookahead != '*')
                ADVANCE(637);
            END_STATE();
        case 485:
            if(eof)
                ADVANCE(493);
            if(lookahead == '\n')
                SKIP(0)
            END_STATE();
        case 486:
            if(eof)
                ADVANCE(493);
            if(lookahead == '\n')
                SKIP(0)
            if(lookahead == '\r')
                SKIP(485)
            END_STATE();
        case 487:
            if(eof)
                ADVANCE(493);
            if(lookahead == '\n')
                SKIP(491)
            END_STATE();
        case 488:
            if(eof)
                ADVANCE(493);
            if(lookahead == '\n')
                SKIP(491)
            if(lookahead == '\r')
                SKIP(487)
            END_STATE();
        case 489:
            if(eof)
                ADVANCE(493);
            if(lookahead == '\n')
                SKIP(492)
            END_STATE();
        case 490:
            if(eof)
                ADVANCE(493);
            if(lookahead == '\n')
                SKIP(492)
            if(lookahead == '\r')
                SKIP(489)
            END_STATE();
        case 491:
            if(eof)
                ADVANCE(493);
            if(lookahead == '#')
                ADVANCE(142);
            if(lookahead == '$')
                ADVANCE(553);
            if(lookahead == '%')
                ADVANCE(562);
            if(lookahead == '(')
                ADVANCE(43);
            if(lookahead == ')')
                ADVANCE(564);
            if(lookahead == '*')
                ADVANCE(560);
            if(lookahead == '+')
                ADVANCE(556);
            if(lookahead == ',')
                ADVANCE(546);
            if(lookahead == '-')
                ADVANCE(558);
            if(lookahead == '/')
                ADVANCE(561);
            if(lookahead == ':')
                ADVANCE(646);
            if(lookahead == ';')
                ADVANCE(647);
            if(lookahead == '<')
                ADVANCE(71);
            if(lookahead == '>')
                ADVANCE(543);
            if(lookahead == '@')
                ADVANCE(74);
            if(lookahead == 'X')
                ADVANCE(72);
            if(lookahead == '[')
                ADVANCE(881);
            if(lookahead == '\\')
                SKIP(488)
            if(lookahead == ']')
                ADVANCE(882);
            if(lookahead == '^')
                ADVANCE(552);
            if(lookahead == 'a')
                ADVANCE(403);
            if(lookahead == 'b')
                ADVANCE(233);
            if(lookahead == 'c')
                ADVANCE(93);
            if(lookahead == 'd')
                ADVANCE(160);
            if(lookahead == 'e')
                ADVANCE(299);
            if(lookahead == 'g')
                ADVANCE(202);
            if(lookahead == 'i')
                ADVANCE(318);
            if(lookahead == 'l')
                ADVANCE(349);
            if(lookahead == 'm')
                ADVANCE(328);
            if(lookahead == 'n')
                ADVANCE(94);
            if(lookahead == 'o')
                ADVANCE(131);
            if(lookahead == 'r')
                ADVANCE(97);
            if(lookahead == 's')
                ADVANCE(161);
            if(lookahead == 't')
                ADVANCE(470);
            if(lookahead == 'u')
                ADVANCE(234);
            if(lookahead == 'v')
                ADVANCE(95);
            if(lookahead == '|')
                ADVANCE(551);
            if(lookahead == '}')
                ADVANCE(643);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(491)
            END_STATE();
        case 492:
            if(eof)
                ADVANCE(493);
            if(lookahead == '#')
                ADVANCE(156);
            if(lookahead == '$')
                ADVANCE(553);
            if(lookahead == ')')
                ADVANCE(564);
            if(lookahead == ',')
                ADVANCE(546);
            if(lookahead == '/')
                ADVANCE(51);
            if(lookahead == ':')
                ADVANCE(646);
            if(lookahead == ';')
                ADVANCE(647);
            if(lookahead == '>')
                ADVANCE(542);
            if(lookahead == '@')
                ADVANCE(74);
            if(lookahead == '\\')
                SKIP(490)
            if(lookahead == ']')
                ADVANCE(882);
            if(lookahead == '^')
                ADVANCE(552);
            if(lookahead == 'a')
                ADVANCE(264);
            if(lookahead == 'b')
                ADVANCE(250);
            if(lookahead == 'c')
                ADVANCE(327);
            if(lookahead == 'e')
                ADVANCE(300);
            if(lookahead == 'i')
                ADVANCE(325);
            if(lookahead == 'l')
                ADVANCE(335);
            if(lookahead == 'm')
                ADVANCE(328);
            if(lookahead == 'n')
                ADVANCE(117);
            if(lookahead == 's')
                ADVANCE(426);
            if(lookahead == 't')
                ADVANCE(474);
            if(lookahead == 'u')
                ADVANCE(323);
            if(lookahead == '|')
                ADVANCE(551);
            if(lookahead == '}')
                ADVANCE(643);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(492)
            END_STATE();
        case 493:
            ACCEPT_TOKEN(ts_builtin_sym_end);
            END_STATE();
        case 494:
            ACCEPT_TOKEN(anon_sym_short);
            END_STATE();
        case 495:
            ACCEPT_TOKEN(anon_sym_short);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 496:
            ACCEPT_TOKEN(anon_sym_int16);
            END_STATE();
        case 497:
            ACCEPT_TOKEN(anon_sym_int16);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 498:
            ACCEPT_TOKEN(anon_sym_long);
            if(lookahead == ' ')
                ADVANCE(152);
            END_STATE();
        case 499:
            ACCEPT_TOKEN(anon_sym_long);
            if(lookahead == ' ')
                ADVANCE(152);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 500:
            ACCEPT_TOKEN(anon_sym_long);
            if(lookahead == ' ')
                ADVANCE(274);
            END_STATE();
        case 501:
            ACCEPT_TOKEN(anon_sym_long);
            if(lookahead == ' ')
                ADVANCE(274);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 502:
            ACCEPT_TOKEN(anon_sym_int32);
            END_STATE();
        case 503:
            ACCEPT_TOKEN(anon_sym_int32);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 504:
            ACCEPT_TOKEN(anon_sym_longlong);
            END_STATE();
        case 505:
            ACCEPT_TOKEN(anon_sym_int64);
            END_STATE();
        case 506:
            ACCEPT_TOKEN(anon_sym_int64);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 507:
            ACCEPT_TOKEN(sym_unsigned_tiny_int);
            END_STATE();
        case 508:
            ACCEPT_TOKEN(sym_unsigned_tiny_int);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 509:
            ACCEPT_TOKEN(sym_boolean_type);
            END_STATE();
        case 510:
            ACCEPT_TOKEN(sym_boolean_type);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 511:
            ACCEPT_TOKEN(anon_sym_fixed);
            END_STATE();
        case 512:
            ACCEPT_TOKEN(anon_sym_fixed);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 513:
            ACCEPT_TOKEN(sym_octet_type);
            END_STATE();
        case 514:
            ACCEPT_TOKEN(sym_octet_type);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 515:
            ACCEPT_TOKEN(sym_signed_tiny_int);
            END_STATE();
        case 516:
            ACCEPT_TOKEN(sym_signed_tiny_int);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 517:
            ACCEPT_TOKEN(anon_sym_unsignedshort);
            END_STATE();
        case 518:
            ACCEPT_TOKEN(anon_sym_uint16);
            END_STATE();
        case 519:
            ACCEPT_TOKEN(anon_sym_uint16);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 520:
            ACCEPT_TOKEN(anon_sym_unsignedlong);
            if(lookahead == ' ')
                ADVANCE(285);
            END_STATE();
        case 521:
            ACCEPT_TOKEN(anon_sym_uint32);
            END_STATE();
        case 522:
            ACCEPT_TOKEN(anon_sym_uint32);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 523:
            ACCEPT_TOKEN(anon_sym_unsignedlonglong);
            END_STATE();
        case 524:
            ACCEPT_TOKEN(anon_sym_uint64);
            END_STATE();
        case 525:
            ACCEPT_TOKEN(anon_sym_uint64);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 526:
            ACCEPT_TOKEN(anon_sym_float);
            END_STATE();
        case 527:
            ACCEPT_TOKEN(anon_sym_float);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 528:
            ACCEPT_TOKEN(anon_sym_double);
            END_STATE();
        case 529:
            ACCEPT_TOKEN(anon_sym_double);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 530:
            ACCEPT_TOKEN(anon_sym_longdouble);
            END_STATE();
        case 531:
            ACCEPT_TOKEN(anon_sym_char);
            END_STATE();
        case 532:
            ACCEPT_TOKEN(anon_sym_char);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 533:
            ACCEPT_TOKEN(anon_sym_wchar);
            END_STATE();
        case 534:
            ACCEPT_TOKEN(anon_sym_wchar);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 535:
            ACCEPT_TOKEN(anon_sym_COLON_COLON);
            END_STATE();
        case 536:
            ACCEPT_TOKEN(anon_sym_string);
            END_STATE();
        case 537:
            ACCEPT_TOKEN(anon_sym_string);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 538:
            ACCEPT_TOKEN(anon_sym_wstring);
            END_STATE();
        case 539:
            ACCEPT_TOKEN(anon_sym_wstring);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 540:
            ACCEPT_TOKEN(anon_sym_LT);
            END_STATE();
        case 541:
            ACCEPT_TOKEN(anon_sym_LT);
            if(lookahead == '<')
                ADVANCE(555);
            END_STATE();
        case 542:
            ACCEPT_TOKEN(anon_sym_GT);
            END_STATE();
        case 543:
            ACCEPT_TOKEN(anon_sym_GT);
            if(lookahead == '>')
                ADVANCE(554);
            END_STATE();
        case 544:
            ACCEPT_TOKEN(anon_sym_any);
            END_STATE();
        case 545:
            ACCEPT_TOKEN(anon_sym_any);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 546:
            ACCEPT_TOKEN(anon_sym_COMMA);
            END_STATE();
        case 547:
            ACCEPT_TOKEN(anon_sym_sequence);
            END_STATE();
        case 548:
            ACCEPT_TOKEN(anon_sym_sequence);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 549:
            ACCEPT_TOKEN(anon_sym_map);
            END_STATE();
        case 550:
            ACCEPT_TOKEN(anon_sym_map);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 551:
            ACCEPT_TOKEN(anon_sym_PIPE);
            END_STATE();
        case 552:
            ACCEPT_TOKEN(anon_sym_CARET);
            END_STATE();
        case 553:
            ACCEPT_TOKEN(anon_sym_DOLLAR);
            END_STATE();
        case 554:
            ACCEPT_TOKEN(anon_sym_GT_GT);
            END_STATE();
        case 555:
            ACCEPT_TOKEN(anon_sym_LT_LT);
            END_STATE();
        case 556:
            ACCEPT_TOKEN(anon_sym_PLUS);
            END_STATE();
        case 557:
            ACCEPT_TOKEN(anon_sym_PLUS);
            if(lookahead == '.')
                ADVANCE(478);
            if(lookahead == '0')
                ADVANCE(605);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(609);
            END_STATE();
        case 558:
            ACCEPT_TOKEN(anon_sym_DASH);
            END_STATE();
        case 559:
            ACCEPT_TOKEN(anon_sym_DASH);
            if(lookahead == '.')
                ADVANCE(478);
            if(lookahead == '0')
                ADVANCE(605);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(609);
            END_STATE();
        case 560:
            ACCEPT_TOKEN(anon_sym_STAR);
            END_STATE();
        case 561:
            ACCEPT_TOKEN(anon_sym_SLASH);
            if(lookahead == '/')
                ADVANCE(883);
            END_STATE();
        case 562:
            ACCEPT_TOKEN(anon_sym_PERCENT);
            END_STATE();
        case 563:
            ACCEPT_TOKEN(anon_sym_LPAREN);
            END_STATE();
        case 564:
            ACCEPT_TOKEN(anon_sym_RPAREN);
            END_STATE();
        case 565:
            ACCEPT_TOKEN(anon_sym_TILDE);
            END_STATE();
        case 566:
            ACCEPT_TOKEN(anon_sym_L);
            END_STATE();
        case 567:
            ACCEPT_TOKEN(anon_sym_L);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 568:
            ACCEPT_TOKEN(anon_sym_DQUOTE);
            END_STATE();
        case 569:
            ACCEPT_TOKEN(aux_sym_string_literal_token1);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(569);
            END_STATE();
        case 570:
            ACCEPT_TOKEN(anon_sym_SQUOTE);
            END_STATE();
        case 571:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            END_STATE();
        case 572:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'A')
                ADVANCE(78);
            END_STATE();
        case 573:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'C')
                ADVANCE(73);
            END_STATE();
        case 574:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'R')
                ADVANCE(85);
            END_STATE();
        case 575:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(391);
            if(lookahead == 'h')
                ADVANCE(101);
            if(lookahead == 'o')
                ADVANCE(298);
            END_STATE();
        case 576:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(351);
            if(lookahead == 'o')
                ADVANCE(151);
            END_STATE();
        case 577:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(288);
            END_STATE();
        case 578:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(275);
            if(lookahead == 'o')
                ADVANCE(239);
            END_STATE();
        case 579:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(251);
            if(lookahead == 'e')
                ADVANCE(98);
            END_STATE();
        case 580:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'c')
                ADVANCE(229);
            if(lookahead == 's')
                ADVANCE(435);
            END_STATE();
        case 581:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'c')
                ADVANCE(424);
            if(lookahead == 'u')
                ADVANCE(405);
            END_STATE();
        case 582:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'e')
                ADVANCE(213);
            if(lookahead == 'o')
                ADVANCE(446);
            END_STATE();
        case 583:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'e')
                ADVANCE(362);
            if(lookahead == 'h')
                ADVANCE(334);
            if(lookahead == 't')
                ADVANCE(363);
            if(lookahead == 'w')
                ADVANCE(243);
            END_STATE();
        case 584:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'e')
                ADVANCE(422);
            END_STATE();
        case 585:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'i')
                ADVANCE(464);
            if(lookahead == 'l')
                ADVANCE(331);
            END_STATE();
        case 586:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'i')
                ADVANCE(404);
            if(lookahead == 'o')
                ADVANCE(329);
            END_STATE();
        case 587:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'i')
                ADVANCE(305);
            if(lookahead == 'n')
                ADVANCE(241);
            END_STATE();
        case 588:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'l')
                ADVANCE(237);
            if(lookahead == 'n')
                ADVANCE(466);
            if(lookahead == 't')
                ADVANCE(420);
            END_STATE();
        case 589:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'n')
                ADVANCE(650);
            END_STATE();
        case 590:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'n')
                ADVANCE(447);
            if(lookahead == 'v')
                ADVANCE(204);
            if(lookahead == 'x')
                ADVANCE(132);
            END_STATE();
        case 591:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'o')
                ADVANCE(134);
            END_STATE();
        case 592:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'y')
                ADVANCE(352);
            END_STATE();
        case 593:
            ACCEPT_TOKEN(anon_sym_TRUE);
            END_STATE();
        case 594:
            ACCEPT_TOKEN(anon_sym_TRUE);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 595:
            ACCEPT_TOKEN(anon_sym_FALSE);
            END_STATE();
        case 596:
            ACCEPT_TOKEN(anon_sym_FALSE);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 597:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(478);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(621);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(597);
            if(sym_number_literal_character_set_1(lookahead))
                ADVANCE(626);
            END_STATE();
        case 598:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(482);
            if(lookahead == 'B' ||
               lookahead == 'D' ||
               lookahead == 'F' ||
               lookahead == 'b' ||
               lookahead == 'd' ||
               lookahead == 'f')
                ADVANCE(598);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(625);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(598);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 599:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(482);
            if(lookahead == 'B' ||
               lookahead == 'D' ||
               lookahead == 'F' ||
               lookahead == 'b' ||
               lookahead == 'd' ||
               lookahead == 'f')
                ADVANCE(599);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(626);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(599);
            END_STATE();
        case 600:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(479);
            if(lookahead == '.')
                ADVANCE(622);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(614);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(612);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(620);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(879);
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
                ADVANCE(625);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(602);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 601:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(479);
            if(lookahead == '.')
                ADVANCE(622);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(616);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(613);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(621);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(481);
            if(('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(617);
            if(('D' <= lookahead && lookahead <= 'F') ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(617);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(626);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(603);
            END_STATE();
        case 602:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(479);
            if(lookahead == '.')
                ADVANCE(622);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(612);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(620);
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
                ADVANCE(625);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(602);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 603:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(479);
            if(lookahead == '.')
                ADVANCE(622);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(613);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(621);
            if(lookahead == 'A' ||
               lookahead == 'C' ||
               lookahead == 'a' ||
               lookahead == 'c')
                ADVANCE(617);
            if(('B' <= lookahead && lookahead <= 'F') ||
               ('b' <= lookahead && lookahead <= 'f'))
                ADVANCE(617);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(626);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(603);
            END_STATE();
        case 604:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(477);
            if(lookahead == '.')
                ADVANCE(622);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(618);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(717);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(620);
            if(('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               ('d' <= lookahead && lookahead <= 'f') ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(625);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(608);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 605:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(477);
            if(lookahead == '.')
                ADVANCE(622);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(619);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(50);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(621);
            if(('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               ('d' <= lookahead && lookahead <= 'f') ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(626);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(609);
            END_STATE();
        case 606:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(477);
            if(lookahead == '.')
                ADVANCE(622);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(623);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(879);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(620);
            if(('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               ('d' <= lookahead && lookahead <= 'f') ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(625);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(608);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 607:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(477);
            if(lookahead == '.')
                ADVANCE(622);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(624);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(481);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(621);
            if(('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               ('d' <= lookahead && lookahead <= 'f') ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(626);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(609);
            END_STATE();
        case 608:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(477);
            if(lookahead == '.')
                ADVANCE(622);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(620);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(608);
            if(sym_number_literal_character_set_1(lookahead))
                ADVANCE(625);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 609:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(477);
            if(lookahead == '.')
                ADVANCE(622);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(621);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(609);
            if(sym_number_literal_character_set_1(lookahead))
                ADVANCE(626);
            END_STATE();
        case 610:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(480);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(482);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(610);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(621);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(611);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(626);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(611);
            END_STATE();
        case 611:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(480);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(610);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(621);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(611);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(626);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(611);
            END_STATE();
        case 612:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(481);
            if(lookahead == '.')
                ADVANCE(622);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(482);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(612);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(620);
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
                ADVANCE(625);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(615);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 613:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(481);
            if(lookahead == '.')
                ADVANCE(622);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(482);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(613);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(621);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(617);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(626);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(617);
            END_STATE();
        case 614:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(481);
            if(lookahead == '.')
                ADVANCE(622);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(612);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(620);
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
                ADVANCE(625);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(602);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 615:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(481);
            if(lookahead == '.')
                ADVANCE(622);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(612);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(620);
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
                ADVANCE(625);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(615);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 616:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(481);
            if(lookahead == '.')
                ADVANCE(622);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(613);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(621);
            if(lookahead == 'A' ||
               lookahead == 'C' ||
               lookahead == 'a' ||
               lookahead == 'c')
                ADVANCE(617);
            if(('B' <= lookahead && lookahead <= 'F') ||
               ('b' <= lookahead && lookahead <= 'f'))
                ADVANCE(617);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(626);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(603);
            END_STATE();
        case 617:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(481);
            if(lookahead == '.')
                ADVANCE(622);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(613);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(621);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(617);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(626);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(617);
            END_STATE();
        case 618:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '.')
                ADVANCE(478);
            if(lookahead == '0')
                ADVANCE(606);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(608);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(625);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 619:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '.')
                ADVANCE(478);
            if(lookahead == '0')
                ADVANCE(607);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(609);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(626);
            END_STATE();
        case 620:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(482);
            if(lookahead == 'B' ||
               lookahead == 'D' ||
               lookahead == 'F' ||
               lookahead == 'b' ||
               lookahead == 'd' ||
               lookahead == 'f')
                ADVANCE(598);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(625);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(598);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 621:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(482);
            if(lookahead == 'B' ||
               lookahead == 'D' ||
               lookahead == 'F' ||
               lookahead == 'b' ||
               lookahead == 'd' ||
               lookahead == 'f')
                ADVANCE(599);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(626);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(599);
            END_STATE();
        case 622:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(610);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(621);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(611);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(626);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(611);
            END_STATE();
        case 623:
            ACCEPT_TOKEN(sym_number_literal);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(608);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(625);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 624:
            ACCEPT_TOKEN(sym_number_literal);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(609);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(626);
            END_STATE();
        case 625:
            ACCEPT_TOKEN(sym_number_literal);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(625);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 626:
            ACCEPT_TOKEN(sym_number_literal);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(626);
            END_STATE();
        case 627:
            ACCEPT_TOKEN(aux_sym_preproc_call_token1);
            END_STATE();
        case 628:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'e')
                ADVANCE(630);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(633);
            END_STATE();
        case 629:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'e')
                ADVANCE(694);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(633);
            END_STATE();
        case 630:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'f')
                ADVANCE(631);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(633);
            END_STATE();
        case 631:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'i')
                ADVANCE(632);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(633);
            END_STATE();
        case 632:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'n')
                ADVANCE(629);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(633);
            END_STATE();
        case 633:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(633);
            END_STATE();
        case 634:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '\n')
                SKIP(61)
            if(lookahead == '\r')
                ADVANCE(635);
            if(lookahead == '/')
                ADVANCE(484);
            if(lookahead == '\\')
                ADVANCE(638);
            if(lookahead != 0)
                ADVANCE(637);
            END_STATE();
        case 635:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '\n')
                SKIP(61)
            if(lookahead == '/')
                ADVANCE(484);
            if(lookahead == '\\')
                ADVANCE(638);
            if(lookahead != 0)
                ADVANCE(637);
            END_STATE();
        case 636:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(883);
            if(lookahead == '\\')
                ADVANCE(638);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(637);
            END_STATE();
        case 637:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(484);
            if(lookahead == '\\')
                ADVANCE(638);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(637);
            END_STATE();
        case 638:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead != 0 &&
               lookahead != '\r' &&
               lookahead != '/' &&
               lookahead != '\\')
                ADVANCE(637);
            if(lookahead == '\r')
                ADVANCE(639);
            if(lookahead == '/')
                ADVANCE(484);
            if(lookahead == '\\')
                ADVANCE(638);
            END_STATE();
        case 639:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead != 0 &&
               lookahead != '/' &&
               lookahead != '\\')
                ADVANCE(637);
            if(lookahead == '/')
                ADVANCE(484);
            if(lookahead == '\\')
                ADVANCE(638);
            END_STATE();
        case 640:
            ACCEPT_TOKEN(anon_sym_exception);
            END_STATE();
        case 641:
            ACCEPT_TOKEN(anon_sym_exception);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 642:
            ACCEPT_TOKEN(anon_sym_LBRACE);
            END_STATE();
        case 643:
            ACCEPT_TOKEN(anon_sym_RBRACE);
            END_STATE();
        case 644:
            ACCEPT_TOKEN(anon_sym_interface);
            END_STATE();
        case 645:
            ACCEPT_TOKEN(anon_sym_local);
            END_STATE();
        case 646:
            ACCEPT_TOKEN(anon_sym_COLON);
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
                ADVANCE(880);
            END_STATE();
        case 650:
            ACCEPT_TOKEN(anon_sym_in);
            if(lookahead == 'o')
                ADVANCE(451);
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
                ADVANCE(880);
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
                ADVANCE(880);
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
                ADVANCE(880);
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
                ADVANCE(880);
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
                ADVANCE(880);
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
            ACCEPT_TOKEN(anon_sym_valuetype);
            END_STATE();
        case 673:
            ACCEPT_TOKEN(anon_sym_eventtype);
            END_STATE();
        case 674:
            ACCEPT_TOKEN(anon_sym_struct);
            END_STATE();
        case 675:
            ACCEPT_TOKEN(anon_sym_struct);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 676:
            ACCEPT_TOKEN(anon_sym_union);
            END_STATE();
        case 677:
            ACCEPT_TOKEN(anon_sym_union);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 678:
            ACCEPT_TOKEN(anon_sym_enum);
            END_STATE();
        case 679:
            ACCEPT_TOKEN(anon_sym_enum);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 680:
            ACCEPT_TOKEN(anon_sym_const);
            END_STATE();
        case 681:
            ACCEPT_TOKEN(anon_sym_const);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 682:
            ACCEPT_TOKEN(anon_sym_alias);
            END_STATE();
        case 683:
            ACCEPT_TOKEN(anon_sym_native);
            END_STATE();
        case 684:
            ACCEPT_TOKEN(anon_sym_native);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 685:
            ACCEPT_TOKEN(anon_sym_ATdefault_literal);
            END_STATE();
        case 686:
            ACCEPT_TOKEN(anon_sym_ATignore_literal_names);
            END_STATE();
        case 687:
            ACCEPT_TOKEN(anon_sym_switch);
            END_STATE();
        case 688:
            ACCEPT_TOKEN(anon_sym_switch);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 689:
            ACCEPT_TOKEN(anon_sym_case);
            END_STATE();
        case 690:
            ACCEPT_TOKEN(anon_sym_case);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 691:
            ACCEPT_TOKEN(anon_sym_typedef);
            END_STATE();
        case 692:
            ACCEPT_TOKEN(anon_sym_typedef);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 693:
            ACCEPT_TOKEN(anon_sym_POUNDdefine);
            END_STATE();
        case 694:
            ACCEPT_TOKEN(anon_sym_POUNDdefine);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(633);
            END_STATE();
        case 695:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '\r')
                ADVANCE(698);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(698);
            END_STATE();
        case 696:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '/')
                ADVANCE(697);
            if(lookahead == '\\')
                ADVANCE(695);
            if(lookahead == '\t' ||
               (11 <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(696);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(698);
            END_STATE();
        case 697:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '/')
                ADVANCE(885);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(698);
            END_STATE();
        case 698:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(698);
            END_STATE();
        case 699:
            ACCEPT_TOKEN(sym_dds_service);
            END_STATE();
        case 700:
            ACCEPT_TOKEN(anon_sym_ATDDSRequestTopic);
            END_STATE();
        case 701:
            ACCEPT_TOKEN(anon_sym_name);
            END_STATE();
        case 702:
            ACCEPT_TOKEN(anon_sym_ATDDSReplyTopic);
            END_STATE();
        case 703:
            ACCEPT_TOKEN(sym_optional);
            END_STATE();
        case 704:
            ACCEPT_TOKEN(sym_key);
            END_STATE();
        case 705:
            ACCEPT_TOKEN(sym_must_understand);
            END_STATE();
        case 706:
            ACCEPT_TOKEN(sym_non_serialized);
            END_STATE();
        case 707:
            ACCEPT_TOKEN(sym_id);
            END_STATE();
        case 708:
            ACCEPT_TOKEN(sym_external);
            END_STATE();
        case 709:
            ACCEPT_TOKEN(anon_sym_AThashid);
            END_STATE();
        case 710:
            ACCEPT_TOKEN(anon_sym_LPAREN_DQUOTE);
            END_STATE();
        case 711:
            ACCEPT_TOKEN(anon_sym_ATtry_construct);
            END_STATE();
        case 712:
            ACCEPT_TOKEN(sym_final);
            END_STATE();
        case 713:
            ACCEPT_TOKEN(anon_sym_ATdata_representation);
            END_STATE();
        case 714:
            ACCEPT_TOKEN(anon_sym_XCDR);
            if(lookahead == '2')
                ADVANCE(715);
            END_STATE();
        case 715:
            ACCEPT_TOKEN(anon_sym_XCDR2);
            END_STATE();
        case 716:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == ' ')
                ADVANCE(284);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 717:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '.')
                ADVANCE(478);
            if(lookahead == '0')
                ADVANCE(600);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(602);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(615);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 718:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '1')
                ADVANCE(724);
            if(lookahead == '3')
                ADVANCE(720);
            if(lookahead == '6')
                ADVANCE(722);
            if(lookahead == '8')
                ADVANCE(516);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 719:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '1')
                ADVANCE(725);
            if(lookahead == '3')
                ADVANCE(721);
            if(lookahead == '6')
                ADVANCE(723);
            if(lookahead == '8')
                ADVANCE(508);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 720:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '2')
                ADVANCE(503);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 721:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '2')
                ADVANCE(522);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 722:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '4')
                ADVANCE(506);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 723:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '4')
                ADVANCE(525);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 724:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '6')
                ADVANCE(497);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 725:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '6')
                ADVANCE(519);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 726:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'A')
                ADVANCE(729);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('B' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 727:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'E')
                ADVANCE(594);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 728:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'E')
                ADVANCE(596);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 729:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'L')
                ADVANCE(731);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 730:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'R')
                ADVANCE(732);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 731:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'S')
                ADVANCE(728);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 732:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'U')
                ADVANCE(727);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 733:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(836);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 734:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(756);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 735:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(847);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 736:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(841);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 737:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(861);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 738:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(850);
            if(lookahead == 'h')
                ADVANCE(736);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 739:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(870);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 740:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(842);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 741:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(854);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 742:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(811);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 743:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(803);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 744:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(872);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 745:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(786);
            if(lookahead == 's')
                ADVANCE(867);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 746:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(786);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 747:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(766);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 748:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(782);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 749:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(864);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 750:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(762);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 751:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(858);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 752:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(649);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 753:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(512);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 754:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(716);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 755:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(761);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 756:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(832);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 757:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(839);
            if(lookahead == 'h')
                ADVANCE(830);
            if(lookahead == 't')
                ADVANCE(840);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 758:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(839);
            if(lookahead == 'h')
                ADVANCE(830);
            if(lookahead == 't')
                ADVANCE(845);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 759:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(529);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 760:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(684);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 761:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(775);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 762:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(548);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 763:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(657);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 764:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(690);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 765:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(776);
            if(lookahead == 'o')
                ADVANCE(868);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 766:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(837);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 767:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(753);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 768:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(734);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 769:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(755);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 770:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(754);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 771:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(742);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 772:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(823);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 773:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(855);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 774:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(857);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 775:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'f')
                ADVANCE(692);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 776:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'f')
                ADVANCE(739);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 777:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(499);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 778:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(537);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 779:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(539);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 780:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(501);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 781:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(824);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 782:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(688);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 783:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(736);
            if(lookahead == 'o')
                ADVANCE(808);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 784:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(736);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 785:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(830);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 786:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(740);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 787:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(875);
            if(lookahead == 'l')
                ADVANCE(834);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 788:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(873);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 789:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(851);
            if(lookahead == 'o')
                ADVANCE(827);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 790:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(744);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 791:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(781);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 792:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(752);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 793:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(819);
            if(lookahead == 'u')
                ADVANCE(751);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 794:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(819);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 795:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(820);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 796:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(863);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 797:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(821);
            if(lookahead == 'n')
                ADVANCE(799);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 798:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(821);
            if(lookahead == 'n')
                ADVANCE(848);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 799:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(831);
            if(lookahead == 's')
                ADVANCE(791);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 800:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(833);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 801:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'k')
                ADVANCE(664);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 802:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(877);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 803:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(759);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 804:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(859);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 805:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(771);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 806:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'm')
                ADVANCE(679);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 807:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'm')
                ADVANCE(735);
            if(lookahead == 's')
                ADVANCE(774);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 808:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(849);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 809:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(777);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 810:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(677);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 811:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(510);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 812:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(641);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 813:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(876);
            if(lookahead == 't')
                ADVANCE(860);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 814:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(876);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 815:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(869);
            if(lookahead == 'x')
                ADVANCE(747);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 816:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(869);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 817:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(852);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 818:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(802);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 819:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(778);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 820:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(779);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 821:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(862);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 822:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(780);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 823:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(750);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 824:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(770);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 825:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(868);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 826:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(792);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 827:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(805);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 828:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(809);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 829:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(827);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 830:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(846);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 831:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(810);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 832:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(818);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 833:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(812);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 834:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(741);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 835:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(822);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 836:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(550);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 837:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(865);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 838:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(769);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 839:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'q')
                ADVANCE(871);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 840:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(793);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 841:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(532);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 842:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(534);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 843:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(790);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 844:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(795);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 845:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(794);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 846:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(856);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 847:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(801);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 848:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(791);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 849:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(853);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 850:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(764);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 851:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(807);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 852:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(718);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 853:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(681);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 854:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(527);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 855:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(514);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 856:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(495);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 857:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(661);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 858:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(675);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 859:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(667);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 860:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(843);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 861:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(788);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 862:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(719);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 863:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(748);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 864:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(773);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 865:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(800);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 866:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(763);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 867:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(844);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 868:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(743);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 869:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(806);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 870:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(804);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 871:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(772);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 872:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(866);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 873:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'v')
                ADVANCE(760);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 874:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'w')
                ADVANCE(796);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 875:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'x')
                ADVANCE(767);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 876:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(545);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 877:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(655);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 878:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(838);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 879:
            ACCEPT_TOKEN(sym_identifier);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(615);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 880:
            ACCEPT_TOKEN(sym_identifier);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(880);
            END_STATE();
        case 881:
            ACCEPT_TOKEN(anon_sym_LBRACK);
            END_STATE();
        case 882:
            ACCEPT_TOKEN(anon_sym_RBRACK);
            END_STATE();
        case 883:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            END_STATE();
        case 884:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            if(lookahead == '\\')
                ADVANCE(483);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(889);
            END_STATE();
        case 885:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(698);
            END_STATE();
        case 886:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '\n')
                ADVANCE(887);
            if(lookahead == '\\')
                ADVANCE(483);
            if(lookahead != 0)
                ADVANCE(889);
            END_STATE();
        case 887:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '/')
                ADVANCE(888);
            if(lookahead == '\\')
                ADVANCE(35);
            if(lookahead == '\t' ||
               (11 <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(887);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(889);
            END_STATE();
        case 888:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '/')
                ADVANCE(884);
            if(lookahead == '\\')
                ADVANCE(483);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(889);
            END_STATE();
        case 889:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '\\')
                ADVANCE(483);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(889);
            END_STATE();
        case 890:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead != 0 &&
               lookahead != '\r' &&
               lookahead != '\\')
                ADVANCE(889);
            if(lookahead == '\r')
                ADVANCE(891);
            if(lookahead == '\\')
                ADVANCE(890);
            END_STATE();
        case 891:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead != 0 &&
               lookahead != '\\')
                ADVANCE(889);
            if(lookahead == '\\')
                ADVANCE(483);
            END_STATE();
        default:
            return false;
    }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
    [0] = { .lex_state = 0, .external_lex_state = 1 },
    [1] = { .lex_state = 491 },
    [2] = { .lex_state = 48 },
    [3] = { .lex_state = 48 },
    [4] = { .lex_state = 48 },
    [5] = { .lex_state = 48 },
    [6] = { .lex_state = 48 },
    [7] = { .lex_state = 41 },
    [8] = { .lex_state = 41 },
    [9] = { .lex_state = 52 },
    [10] = { .lex_state = 49 },
    [11] = { .lex_state = 49 },
    [12] = { .lex_state = 49 },
    [13] = { .lex_state = 49 },
    [14] = { .lex_state = 49 },
    [15] = { .lex_state = 49 },
    [16] = { .lex_state = 49 },
    [17] = { .lex_state = 49 },
    [18] = { .lex_state = 49 },
    [19] = { .lex_state = 49 },
    [20] = { .lex_state = 49 },
    [21] = { .lex_state = 49 },
    [22] = { .lex_state = 53 },
    [23] = { .lex_state = 53 },
    [24] = { .lex_state = 53 },
    [25] = { .lex_state = 54 },
    [26] = { .lex_state = 492 },
    [27] = { .lex_state = 491 },
    [28] = { .lex_state = 492 },
    [29] = { .lex_state = 492 },
    [30] = { .lex_state = 49 },
    [31] = { .lex_state = 492 },
    [32] = { .lex_state = 492 },
    [33] = { .lex_state = 49 },
    [34] = { .lex_state = 49 },
    [35] = { .lex_state = 49 },
    [36] = { .lex_state = 492 },
    [37] = { .lex_state = 49 },
    [38] = { .lex_state = 49 },
    [39] = { .lex_state = 492 },
    [40] = { .lex_state = 492 },
    [41] = { .lex_state = 48 },
    [42] = { .lex_state = 48 },
    [43] = { .lex_state = 55 },
    [44] = { .lex_state = 55 },
    [45] = { .lex_state = 49 },
    [46] = { .lex_state = 49 },
    [47] = { .lex_state = 49 },
    [48] = { .lex_state = 49 },
    [49] = { .lex_state = 49 },
    [50] = { .lex_state = 49 },
    [51] = { .lex_state = 49 },
    [52] = { .lex_state = 49 },
    [53] = { .lex_state = 49 },
    [54] = { .lex_state = 49 },
    [55] = { .lex_state = 53 },
    [56] = { .lex_state = 53 },
    [57] = { .lex_state = 53 },
    [58] = { .lex_state = 53 },
    [59] = { .lex_state = 53 },
    [60] = { .lex_state = 54 },
    [61] = { .lex_state = 54 },
    [62] = { .lex_state = 56 },
    [63] = { .lex_state = 49 },
    [64] = { .lex_state = 42 },
    [65] = { .lex_state = 42 },
    [66] = { .lex_state = 42 },
    [67] = { .lex_state = 42 },
    [68] = { .lex_state = 42 },
    [69] = { .lex_state = 42 },
    [70] = { .lex_state = 42 },
    [71] = { .lex_state = 42 },
    [72] = { .lex_state = 42 },
    [73] = { .lex_state = 42 },
    [74] = { .lex_state = 42 },
    [75] = { .lex_state = 42 },
    [76] = { .lex_state = 42 },
    [77] = { .lex_state = 491 },
    [78] = { .lex_state = 491 },
    [79] = { .lex_state = 42 },
    [80] = { .lex_state = 42 },
    [81] = { .lex_state = 492 },
    [82] = { .lex_state = 492 },
    [83] = { .lex_state = 492 },
    [84] = { .lex_state = 491 },
    [85] = { .lex_state = 492 },
    [86] = { .lex_state = 42 },
    [87] = { .lex_state = 492 },
    [88] = { .lex_state = 492 },
    [89] = { .lex_state = 492 },
    [90] = { .lex_state = 491 },
    [91] = { .lex_state = 491 },
    [92] = { .lex_state = 42 },
    [93] = { .lex_state = 42 },
    [94] = { .lex_state = 44 },
    [95] = { .lex_state = 44 },
    [96] = { .lex_state = 42 },
    [97] = { .lex_state = 45 },
    [98] = { .lex_state = 45 },
    [99] = { .lex_state = 491 },
    [100] = { .lex_state = 491 },
    [101] = { .lex_state = 491 },
    [102] = { .lex_state = 491 },
    [103] = { .lex_state = 491 },
    [104] = { .lex_state = 491 },
    [105] = { .lex_state = 491 },
    [106] = { .lex_state = 491 },
    [107] = { .lex_state = 491 },
    [108] = { .lex_state = 491 },
    [109] = { .lex_state = 491 },
    [110] = { .lex_state = 491 },
    [111] = { .lex_state = 491 },
    [112] = { .lex_state = 491 },
    [113] = { .lex_state = 491 },
    [114] = { .lex_state = 42 },
    [115] = { .lex_state = 491 },
    [116] = { .lex_state = 45 },
    [117] = { .lex_state = 491 },
    [118] = { .lex_state = 491 },
    [119] = { .lex_state = 491 },
    [120] = { .lex_state = 491 },
    [121] = { .lex_state = 491 },
    [122] = { .lex_state = 42 },
    [123] = { .lex_state = 492 },
    [124] = { .lex_state = 491 },
    [125] = { .lex_state = 492 },
    [126] = { .lex_state = 491 },
    [127] = { .lex_state = 492 },
    [128] = { .lex_state = 492 },
    [129] = { .lex_state = 491 },
    [130] = { .lex_state = 47 },
    [131] = { .lex_state = 492 },
    [132] = { .lex_state = 491 },
    [133] = { .lex_state = 491 },
    [134] = { .lex_state = 491 },
    [135] = { .lex_state = 491 },
    [136] = { .lex_state = 44 },
    [137] = { .lex_state = 491 },
    [138] = { .lex_state = 491 },
    [139] = { .lex_state = 44 },
    [140] = { .lex_state = 491 },
    [141] = { .lex_state = 491 },
    [142] = { .lex_state = 44 },
    [143] = { .lex_state = 491 },
    [144] = { .lex_state = 491 },
    [145] = { .lex_state = 44 },
    [146] = { .lex_state = 44 },
    [147] = { .lex_state = 491 },
    [148] = { .lex_state = 44 },
    [149] = { .lex_state = 47 },
    [150] = { .lex_state = 491 },
    [151] = { .lex_state = 491 },
    [152] = { .lex_state = 491 },
    [153] = { .lex_state = 491 },
    [154] = { .lex_state = 491 },
    [155] = { .lex_state = 491 },
    [156] = { .lex_state = 491 },
    [157] = { .lex_state = 44 },
    [158] = { .lex_state = 46 },
    [159] = { .lex_state = 44 },
    [160] = { .lex_state = 46 },
    [161] = { .lex_state = 491 },
    [162] = { .lex_state = 44 },
    [163] = { .lex_state = 44 },
    [164] = { .lex_state = 491 },
    [165] = { .lex_state = 0 },
    [166] = { .lex_state = 44 },
    [167] = { .lex_state = 46 },
    [168] = { .lex_state = 491 },
    [169] = { .lex_state = 44 },
    [170] = { .lex_state = 44 },
    [171] = { .lex_state = 46 },
    [172] = { .lex_state = 491 },
    [173] = { .lex_state = 46 },
    [174] = { .lex_state = 46 },
    [175] = { .lex_state = 491 },
    [176] = { .lex_state = 46 },
    [177] = { .lex_state = 46 },
    [178] = { .lex_state = 46 },
    [179] = { .lex_state = 44 },
    [180] = { .lex_state = 46 },
    [181] = { .lex_state = 46 },
    [182] = { .lex_state = 491 },
    [183] = { .lex_state = 491 },
    [184] = { .lex_state = 46 },
    [185] = { .lex_state = 46 },
    [186] = { .lex_state = 48 },
    [187] = { .lex_state = 0 },
    [188] = { .lex_state = 491 },
    [189] = { .lex_state = 46 },
    [190] = { .lex_state = 44 },
    [191] = { .lex_state = 46 },
    [192] = { .lex_state = 0 },
    [193] = { .lex_state = 46 },
    [194] = { .lex_state = 491 },
    [195] = { .lex_state = 46 },
    [196] = { .lex_state = 46 },
    [197] = { .lex_state = 46 },
    [198] = { .lex_state = 46 },
    [199] = { .lex_state = 46 },
    [200] = { .lex_state = 46 },
    [201] = { .lex_state = 48 },
    [202] = { .lex_state = 0 },
    [203] = { .lex_state = 0 },
    [204] = { .lex_state = 46 },
    [205] = { .lex_state = 0 },
    [206] = { .lex_state = 44 },
    [207] = { .lex_state = 0 },
    [208] = { .lex_state = 0 },
    [209] = { .lex_state = 0 },
    [210] = { .lex_state = 491 },
    [211] = { .lex_state = 0 },
    [212] = { .lex_state = 0 },
    [213] = { .lex_state = 46 },
    [214] = { .lex_state = 44 },
    [215] = { .lex_state = 46 },
    [216] = { .lex_state = 0 },
    [217] = { .lex_state = 48 },
    [218] = { .lex_state = 46 },
    [219] = { .lex_state = 0 },
    [220] = { .lex_state = 0 },
    [221] = { .lex_state = 0 },
    [222] = { .lex_state = 46 },
    [223] = { .lex_state = 0 },
    [224] = { .lex_state = 46 },
    [225] = { .lex_state = 491 },
    [226] = { .lex_state = 491 },
    [227] = { .lex_state = 491 },
    [228] = { .lex_state = 48 },
    [229] = { .lex_state = 44 },
    [230] = { .lex_state = 491 },
    [231] = { .lex_state = 0 },
    [232] = { .lex_state = 57 },
    [233] = { .lex_state = 491 },
    [234] = { .lex_state = 46 },
    [235] = { .lex_state = 0 },
    [236] = { .lex_state = 46 },
    [237] = { .lex_state = 46 },
    [238] = { .lex_state = 491 },
    [239] = { .lex_state = 491 },
    [240] = { .lex_state = 44 },
    [241] = { .lex_state = 491 },
    [242] = { .lex_state = 46 },
    [243] = { .lex_state = 44 },
    [244] = { .lex_state = 0 },
    [245] = { .lex_state = 46 },
    [246] = { .lex_state = 0 },
    [247] = { .lex_state = 0 },
    [248] = { .lex_state = 48 },
    [249] = { .lex_state = 491 },
    [250] = { .lex_state = 46 },
    [251] = { .lex_state = 48 },
    [252] = { .lex_state = 44 },
    [253] = { .lex_state = 46 },
    [254] = { .lex_state = 0 },
    [255] = { .lex_state = 48 },
    [256] = { .lex_state = 491 },
    [257] = { .lex_state = 46 },
    [258] = { .lex_state = 0 },
    [259] = { .lex_state = 0 },
    [260] = { .lex_state = 44 },
    [261] = { .lex_state = 0 },
    [262] = { .lex_state = 48 },
    [263] = { .lex_state = 48 },
    [264] = { .lex_state = 48 },
    [265] = { .lex_state = 46 },
    [266] = { .lex_state = 46 },
    [267] = { .lex_state = 0 },
    [268] = { .lex_state = 44 },
    [269] = { .lex_state = 48 },
    [270] = { .lex_state = 44 },
    [271] = { .lex_state = 44 },
    [272] = { .lex_state = 44 },
    [273] = { .lex_state = 44 },
    [274] = { .lex_state = 29 },
    [275] = { .lex_state = 491 },
    [276] = { .lex_state = 48 },
    [277] = { .lex_state = 491 },
    [278] = { .lex_state = 44 },
    [279] = { .lex_state = 491 },
    [280] = { .lex_state = 44 },
    [281] = { .lex_state = 44 },
    [282] = { .lex_state = 44 },
    [283] = { .lex_state = 44 },
    [284] = { .lex_state = 44 },
    [285] = { .lex_state = 491 },
    [286] = { .lex_state = 44 },
    [287] = { .lex_state = 44 },
    [288] = { .lex_state = 0 },
    [289] = { .lex_state = 44 },
    [290] = { .lex_state = 0 },
    [291] = { .lex_state = 44 },
    [292] = { .lex_state = 44 },
    [293] = { .lex_state = 0 },
    [294] = { .lex_state = 0 },
    [295] = { .lex_state = 46 },
    [296] = { .lex_state = 44 },
    [297] = { .lex_state = 44 },
    [298] = { .lex_state = 44 },
    [299] = { .lex_state = 46 },
    [300] = { .lex_state = 491 },
    [301] = { .lex_state = 0 },
    [302] = { .lex_state = 44 },
    [303] = { .lex_state = 491 },
    [304] = { .lex_state = 0 },
    [305] = { .lex_state = 44 },
    [306] = { .lex_state = 44 },
    [307] = { .lex_state = 44 },
    [308] = { .lex_state = 44 },
    [309] = { .lex_state = 44 },
    [310] = { .lex_state = 0 },
    [311] = { .lex_state = 44 },
    [312] = { .lex_state = 44 },
    [313] = { .lex_state = 0 },
    [314] = { .lex_state = 44 },
    [315] = { .lex_state = 44 },
    [316] = { .lex_state = 0 },
    [317] = { .lex_state = 44 },
    [318] = { .lex_state = 44 },
    [319] = { .lex_state = 48 },
    [320] = { .lex_state = 0 },
    [321] = { .lex_state = 44 },
    [322] = { .lex_state = 44 },
    [323] = { .lex_state = 0 },
    [324] = { .lex_state = 0 },
    [325] = { .lex_state = 48 },
    [326] = { .lex_state = 491 },
    [327] = { .lex_state = 491 },
    [328] = { .lex_state = 44 },
    [329] = { .lex_state = 0 },
    [330] = { .lex_state = 0 },
    [331] = { .lex_state = 44 },
    [332] = { .lex_state = 0 },
    [333] = { .lex_state = 491 },
    [334] = { .lex_state = 46 },
    [335] = { .lex_state = 48 },
    [336] = { .lex_state = 48 },
    [337] = { .lex_state = 48 },
    [338] = { .lex_state = 44 },
    [339] = { .lex_state = 44 },
    [340] = { .lex_state = 44 },
    [341] = { .lex_state = 0 },
    [342] = { .lex_state = 0 },
    [343] = { .lex_state = 48 },
    [344] = { .lex_state = 58 },
    [345] = { .lex_state = 0 },
    [346] = { .lex_state = 59 },
    [347] = { .lex_state = 0 },
    [348] = { .lex_state = 44 },
    [349] = { .lex_state = 48 },
    [350] = { .lex_state = 44 },
    [351] = { .lex_state = 0 },
    [352] = { .lex_state = 44 },
    [353] = { .lex_state = 0 },
    [354] = { .lex_state = 0 },
    [355] = { .lex_state = 44 },
    [356] = { .lex_state = 0 },
    [357] = { .lex_state = 44 },
    [358] = { .lex_state = 48 },
    [359] = { .lex_state = 0 },
    [360] = { .lex_state = 0 },
    [361] = { .lex_state = 0 },
    [362] = { .lex_state = 0 },
    [363] = { .lex_state = 0 },
    [364] = { .lex_state = 0 },
    [365] = { .lex_state = 44 },
    [366] = { .lex_state = 48 },
    [367] = { .lex_state = 491 },
    [368] = { .lex_state = 0 },
    [369] = { .lex_state = 0 },
    [370] = { .lex_state = 0 },
    [371] = { .lex_state = 0 },
    [372] = { .lex_state = 0 },
    [373] = { .lex_state = 0 },
    [374] = { .lex_state = 0 },
    [375] = { .lex_state = 0 },
    [376] = { .lex_state = 0 },
    [377] = { .lex_state = 887 },
    [378] = { .lex_state = 491 },
    [379] = { .lex_state = 44 },
    [380] = { .lex_state = 0 },
    [381] = { .lex_state = 0 },
    [382] = { .lex_state = 0 },
    [383] = { .lex_state = 0 },
    [384] = { .lex_state = 0 },
    [385] = { .lex_state = 0 },
    [386] = { .lex_state = 0 },
    [387] = { .lex_state = 0 },
    [388] = { .lex_state = 0 },
    [389] = { .lex_state = 0 },
    [390] = { .lex_state = 0 },
    [391] = { .lex_state = 0 },
    [392] = { .lex_state = 0 },
    [393] = { .lex_state = 0 },
    [394] = { .lex_state = 0 },
    [395] = { .lex_state = 44 },
    [396] = { .lex_state = 48 },
    [397] = { .lex_state = 0 },
    [398] = { .lex_state = 44 },
    [399] = { .lex_state = 491 },
    [400] = { .lex_state = 491 },
    [401] = { .lex_state = 0 },
    [402] = { .lex_state = 44 },
    [403] = { .lex_state = 48 },
    [404] = { .lex_state = 48 },
    [405] = { .lex_state = 48 },
    [406] = { .lex_state = 0 },
    [407] = { .lex_state = 44 },
    [408] = { .lex_state = 0 },
    [409] = { .lex_state = 0 },
    [410] = { .lex_state = 0 },
    [411] = { .lex_state = 0 },
    [412] = { .lex_state = 48 },
    [413] = { .lex_state = 0 },
    [414] = { .lex_state = 0 },
    [415] = { .lex_state = 0 },
    [416] = { .lex_state = 44 },
    [417] = { .lex_state = 0 },
    [418] = { .lex_state = 44 },
    [419] = { .lex_state = 0 },
    [420] = { .lex_state = 0 },
    [421] = { .lex_state = 0 },
    [422] = { .lex_state = 59 },
    [423] = { .lex_state = 48 },
    [424] = { .lex_state = 44 },
    [425] = { .lex_state = 0 },
    [426] = { .lex_state = 48 },
    [427] = { .lex_state = 48 },
    [428] = { .lex_state = 0 },
    [429] = { .lex_state = 59 },
    [430] = { .lex_state = 0 },
    [431] = { .lex_state = 0 },
    [432] = { .lex_state = 0 },
    [433] = { .lex_state = 44 },
    [434] = { .lex_state = 0 },
    [435] = { .lex_state = 44 },
    [436] = { .lex_state = 0 },
    [437] = { .lex_state = 30 },
    [438] = { .lex_state = 44 },
    [439] = { .lex_state = 48 },
    [440] = { .lex_state = 491 },
    [441] = { .lex_state = 0 },
    [442] = { .lex_state = 0 },
    [443] = { .lex_state = 0 },
    [444] = { .lex_state = 0 },
    [445] = { .lex_state = 0 },
    [446] = { .lex_state = 0 },
    [447] = { .lex_state = 0 },
    [448] = { .lex_state = 44 },
    [449] = { .lex_state = 0 },
    [450] = { .lex_state = 0 },
    [451] = { .lex_state = 0 },
    [452] = { .lex_state = 0 },
    [453] = { .lex_state = 0 },
    [454] = { .lex_state = 0 },
    [455] = { .lex_state = 0 },
    [456] = { .lex_state = 0 },
    [457] = { .lex_state = 696 },
    [458] = { .lex_state = 0 },
    [459] = { .lex_state = 491 },
    [460] = { .lex_state = 44 },
    [461] = { .lex_state = 48 },
    [462] = { .lex_state = 44 },
    [463] = { .lex_state = 0 },
    [464] = { .lex_state = 44 },
    [465] = { .lex_state = 0 },
    [466] = { .lex_state = 44 },
    [467] = { .lex_state = 44 },
    [468] = { .lex_state = 0 },
    [469] = { .lex_state = 44 },
    [470] = { .lex_state = 44 },
    [471] = { .lex_state = 44 },
    [472] = { .lex_state = 44 },
    [473] = { .lex_state = 0 },
    [474] = { .lex_state = 0 },
    [475] = { .lex_state = 58 },
    [476] = { .lex_state = 0 },
    [477] = { .lex_state = 44 },
    [478] = { .lex_state = 44 },
    [479] = { .lex_state = 59 },
    [480] = { .lex_state = 0 },
    [481] = { (TSStateId)(-1) },
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
        [sym_specification] = STATE(451),
        [sym_preproc_call] = STATE(91),
        [sym_except_dcl] = STATE(449),
        [sym_interface_dcl] = STATE(449),
        [sym_interface_forward_dcl] = STATE(444),
        [sym_interface_def] = STATE(444),
        [sym_interface_header] = STATE(441),
        [sym_interface_anno] = STATE(147),
        [sym_bitset_dcl] = STATE(449),
        [sym_bitmask_dcl] = STATE(449),
        [sym_annotation_dcl] = STATE(449),
        [sym_template_module_dcl] = STATE(449),
        [sym_template_module_inst] = STATE(449),
        [sym__definition] = STATE(85),
        [sym_native_dcl] = STATE(449),
        [sym_module_dcl] = STATE(449),
        [sym_struct_forward_dcl] = STATE(449),
        [sym_struct_def] = STATE(449),
        [sym_enum_dcl] = STATE(449),
        [sym_enum_anno] = STATE(440),
        [sym_union_forward_dcl] = STATE(449),
        [sym_union_def] = STATE(449),
        [sym_typedef_dcl] = STATE(449),
        [sym_predefine] = STATE(83),
        [sym_dds_request_topic] = STATE(154),
        [sym_dds_reply_topic] = STATE(154),
        [sym_const_dcl] = STATE(449),
        [sym_data_representation] = STATE(249),
        [sym_comment] = STATE(1),
        [aux_sym_specification_repeat1] = STATE(27),
        [aux_sym_specification_repeat2] = STATE(36),
        [aux_sym_interface_def_repeat1] = STATE(121),
        [aux_sym_struct_def_repeat1] = STATE(153),
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
        [sym_signed_short_int] = STATE(176),
        [sym_signed_long_int] = STATE(176),
        [sym_signed_longlong_int] = STATE(176),
        [sym_unsigned_int] = STATE(181),
        [sym_integer_type] = STATE(198),
        [sym_signed_int] = STATE(181),
        [sym_unsigned_short_int] = STATE(174),
        [sym_unsigned_long_int] = STATE(174),
        [sym_unsigned_longlong_int] = STATE(174),
        [sym_floating_pt_type] = STATE(198),
        [sym_char_type] = STATE(198),
        [sym_scoped_name] = STATE(402),
        [sym_string_type] = STATE(196),
        [sym_type_spec] = STATE(379),
        [sym_simple_type_spec] = STATE(237),
        [sym_base_type_spec] = STATE(195),
        [sym_any_type] = STATE(198),
        [sym_fixed_pt_type] = STATE(196),
        [sym_template_type_spec] = STATE(237),
        [sym_sequence_type] = STATE(196),
        [sym_map_type] = STATE(196),
        [sym_except_dcl] = STATE(361),
        [sym_interface_body] = STATE(341),
        [sym_export] = STATE(42),
        [sym_op_dcl] = STATE(361),
        [sym_op_type_spec] = STATE(339),
        [sym_attr_dcl] = STATE(361),
        [sym_readonly_attr_spec] = STATE(374),
        [sym_attr_spec] = STATE(374),
        [sym_bitset_dcl] = STATE(361),
        [sym_bitmask_dcl] = STATE(361),
        [sym_native_dcl] = STATE(361),
        [sym_struct_forward_dcl] = STATE(361),
        [sym_struct_def] = STATE(361),
        [sym_enum_dcl] = STATE(361),
        [sym_enum_anno] = STATE(440),
        [sym_union_forward_dcl] = STATE(361),
        [sym_union_def] = STATE(361),
        [sym_typedef_dcl] = STATE(361),
        [sym_const_dcl] = STATE(361),
        [sym_data_representation] = STATE(249),
        [sym_comment] = STATE(2),
        [aux_sym_interface_body_repeat1] = STATE(5),
        [aux_sym_struct_def_repeat1] = STATE(153),
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
        [sym_signed_short_int] = STATE(176),
        [sym_signed_long_int] = STATE(176),
        [sym_signed_longlong_int] = STATE(176),
        [sym_unsigned_int] = STATE(181),
        [sym_integer_type] = STATE(198),
        [sym_signed_int] = STATE(181),
        [sym_unsigned_short_int] = STATE(174),
        [sym_unsigned_long_int] = STATE(174),
        [sym_unsigned_longlong_int] = STATE(174),
        [sym_floating_pt_type] = STATE(198),
        [sym_char_type] = STATE(198),
        [sym_scoped_name] = STATE(402),
        [sym_string_type] = STATE(196),
        [sym_type_spec] = STATE(379),
        [sym_simple_type_spec] = STATE(237),
        [sym_base_type_spec] = STATE(195),
        [sym_any_type] = STATE(198),
        [sym_fixed_pt_type] = STATE(196),
        [sym_template_type_spec] = STATE(237),
        [sym_sequence_type] = STATE(196),
        [sym_map_type] = STATE(196),
        [sym_except_dcl] = STATE(361),
        [sym_interface_body] = STATE(362),
        [sym_export] = STATE(42),
        [sym_op_dcl] = STATE(361),
        [sym_op_type_spec] = STATE(339),
        [sym_attr_dcl] = STATE(361),
        [sym_readonly_attr_spec] = STATE(374),
        [sym_attr_spec] = STATE(374),
        [sym_bitset_dcl] = STATE(361),
        [sym_bitmask_dcl] = STATE(361),
        [sym_native_dcl] = STATE(361),
        [sym_struct_forward_dcl] = STATE(361),
        [sym_struct_def] = STATE(361),
        [sym_enum_dcl] = STATE(361),
        [sym_enum_anno] = STATE(440),
        [sym_union_forward_dcl] = STATE(361),
        [sym_union_def] = STATE(361),
        [sym_typedef_dcl] = STATE(361),
        [sym_const_dcl] = STATE(361),
        [sym_data_representation] = STATE(249),
        [sym_comment] = STATE(3),
        [aux_sym_interface_body_repeat1] = STATE(5),
        [aux_sym_struct_def_repeat1] = STATE(153),
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
        [sym_signed_short_int] = STATE(176),
        [sym_signed_long_int] = STATE(176),
        [sym_signed_longlong_int] = STATE(176),
        [sym_unsigned_int] = STATE(181),
        [sym_integer_type] = STATE(198),
        [sym_signed_int] = STATE(181),
        [sym_unsigned_short_int] = STATE(174),
        [sym_unsigned_long_int] = STATE(174),
        [sym_unsigned_longlong_int] = STATE(174),
        [sym_floating_pt_type] = STATE(198),
        [sym_char_type] = STATE(198),
        [sym_scoped_name] = STATE(402),
        [sym_string_type] = STATE(196),
        [sym_type_spec] = STATE(379),
        [sym_simple_type_spec] = STATE(237),
        [sym_base_type_spec] = STATE(195),
        [sym_any_type] = STATE(198),
        [sym_fixed_pt_type] = STATE(196),
        [sym_template_type_spec] = STATE(237),
        [sym_sequence_type] = STATE(196),
        [sym_map_type] = STATE(196),
        [sym_except_dcl] = STATE(361),
        [sym_interface_body] = STATE(375),
        [sym_export] = STATE(42),
        [sym_op_dcl] = STATE(361),
        [sym_op_type_spec] = STATE(339),
        [sym_attr_dcl] = STATE(361),
        [sym_readonly_attr_spec] = STATE(374),
        [sym_attr_spec] = STATE(374),
        [sym_bitset_dcl] = STATE(361),
        [sym_bitmask_dcl] = STATE(361),
        [sym_native_dcl] = STATE(361),
        [sym_struct_forward_dcl] = STATE(361),
        [sym_struct_def] = STATE(361),
        [sym_enum_dcl] = STATE(361),
        [sym_enum_anno] = STATE(440),
        [sym_union_forward_dcl] = STATE(361),
        [sym_union_def] = STATE(361),
        [sym_typedef_dcl] = STATE(361),
        [sym_const_dcl] = STATE(361),
        [sym_data_representation] = STATE(249),
        [sym_comment] = STATE(4),
        [aux_sym_interface_body_repeat1] = STATE(5),
        [aux_sym_struct_def_repeat1] = STATE(153),
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
        [sym_signed_short_int] = STATE(176),
        [sym_signed_long_int] = STATE(176),
        [sym_signed_longlong_int] = STATE(176),
        [sym_unsigned_int] = STATE(181),
        [sym_integer_type] = STATE(198),
        [sym_signed_int] = STATE(181),
        [sym_unsigned_short_int] = STATE(174),
        [sym_unsigned_long_int] = STATE(174),
        [sym_unsigned_longlong_int] = STATE(174),
        [sym_floating_pt_type] = STATE(198),
        [sym_char_type] = STATE(198),
        [sym_scoped_name] = STATE(402),
        [sym_string_type] = STATE(196),
        [sym_type_spec] = STATE(379),
        [sym_simple_type_spec] = STATE(237),
        [sym_base_type_spec] = STATE(195),
        [sym_any_type] = STATE(198),
        [sym_fixed_pt_type] = STATE(196),
        [sym_template_type_spec] = STATE(237),
        [sym_sequence_type] = STATE(196),
        [sym_map_type] = STATE(196),
        [sym_except_dcl] = STATE(361),
        [sym_export] = STATE(42),
        [sym_op_dcl] = STATE(361),
        [sym_op_type_spec] = STATE(339),
        [sym_attr_dcl] = STATE(361),
        [sym_readonly_attr_spec] = STATE(374),
        [sym_attr_spec] = STATE(374),
        [sym_bitset_dcl] = STATE(361),
        [sym_bitmask_dcl] = STATE(361),
        [sym_native_dcl] = STATE(361),
        [sym_struct_forward_dcl] = STATE(361),
        [sym_struct_def] = STATE(361),
        [sym_enum_dcl] = STATE(361),
        [sym_enum_anno] = STATE(440),
        [sym_union_forward_dcl] = STATE(361),
        [sym_union_def] = STATE(361),
        [sym_typedef_dcl] = STATE(361),
        [sym_const_dcl] = STATE(361),
        [sym_data_representation] = STATE(249),
        [sym_comment] = STATE(5),
        [aux_sym_interface_body_repeat1] = STATE(6),
        [aux_sym_struct_def_repeat1] = STATE(153),
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
        [sym_signed_short_int] = STATE(176),
        [sym_signed_long_int] = STATE(176),
        [sym_signed_longlong_int] = STATE(176),
        [sym_unsigned_int] = STATE(181),
        [sym_integer_type] = STATE(198),
        [sym_signed_int] = STATE(181),
        [sym_unsigned_short_int] = STATE(174),
        [sym_unsigned_long_int] = STATE(174),
        [sym_unsigned_longlong_int] = STATE(174),
        [sym_floating_pt_type] = STATE(198),
        [sym_char_type] = STATE(198),
        [sym_scoped_name] = STATE(402),
        [sym_string_type] = STATE(196),
        [sym_type_spec] = STATE(379),
        [sym_simple_type_spec] = STATE(237),
        [sym_base_type_spec] = STATE(195),
        [sym_any_type] = STATE(198),
        [sym_fixed_pt_type] = STATE(196),
        [sym_template_type_spec] = STATE(237),
        [sym_sequence_type] = STATE(196),
        [sym_map_type] = STATE(196),
        [sym_except_dcl] = STATE(361),
        [sym_export] = STATE(42),
        [sym_op_dcl] = STATE(361),
        [sym_op_type_spec] = STATE(339),
        [sym_attr_dcl] = STATE(361),
        [sym_readonly_attr_spec] = STATE(374),
        [sym_attr_spec] = STATE(374),
        [sym_bitset_dcl] = STATE(361),
        [sym_bitmask_dcl] = STATE(361),
        [sym_native_dcl] = STATE(361),
        [sym_struct_forward_dcl] = STATE(361),
        [sym_struct_def] = STATE(361),
        [sym_enum_dcl] = STATE(361),
        [sym_enum_anno] = STATE(440),
        [sym_union_forward_dcl] = STATE(361),
        [sym_union_def] = STATE(361),
        [sym_typedef_dcl] = STATE(361),
        [sym_const_dcl] = STATE(361),
        [sym_data_representation] = STATE(249),
        [sym_comment] = STATE(6),
        [aux_sym_interface_body_repeat1] = STATE(6),
        [aux_sym_struct_def_repeat1] = STATE(153),
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
        [sym_signed_short_int] = STATE(176),
        [sym_signed_long_int] = STATE(176),
        [sym_signed_longlong_int] = STATE(176),
        [sym_unsigned_int] = STATE(181),
        [sym_integer_type] = STATE(198),
        [sym_signed_int] = STATE(181),
        [sym_unsigned_short_int] = STATE(174),
        [sym_unsigned_long_int] = STATE(174),
        [sym_unsigned_longlong_int] = STATE(174),
        [sym_floating_pt_type] = STATE(198),
        [sym_char_type] = STATE(198),
        [sym_scoped_name] = STATE(116),
        [sym_string_type] = STATE(196),
        [sym_type_spec] = STATE(319),
        [sym_simple_type_spec] = STATE(237),
        [sym_base_type_spec] = STATE(195),
        [sym_any_type] = STATE(198),
        [sym_fixed_pt_type] = STATE(196),
        [sym_template_type_spec] = STATE(237),
        [sym_sequence_type] = STATE(196),
        [sym_map_type] = STATE(196),
        [sym_const_expr] = STATE(319),
        [sym_or_expr] = STATE(131),
        [sym_xor_expr] = STATE(127),
        [sym_and_expr] = STATE(125),
        [sym_shift_expr] = STATE(120),
        [sym_add_expr] = STATE(117),
        [sym_mult_expr] = STATE(108),
        [sym_unary_expr] = STATE(111),
        [sym_unary_operator] = STATE(114),
        [sym_literal] = STATE(112),
        [sym_string_literal] = STATE(104),
        [sym_char_literal] = STATE(104),
        [sym_boolean_literal] = STATE(104),
        [sym_actual_parameters] = STATE(343),
        [sym_actual_parameter] = STATE(201),
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
        [sym_signed_short_int] = STATE(176),
        [sym_signed_long_int] = STATE(176),
        [sym_signed_longlong_int] = STATE(176),
        [sym_unsigned_int] = STATE(181),
        [sym_integer_type] = STATE(198),
        [sym_signed_int] = STATE(181),
        [sym_unsigned_short_int] = STATE(174),
        [sym_unsigned_long_int] = STATE(174),
        [sym_unsigned_longlong_int] = STATE(174),
        [sym_floating_pt_type] = STATE(198),
        [sym_char_type] = STATE(198),
        [sym_scoped_name] = STATE(116),
        [sym_string_type] = STATE(196),
        [sym_type_spec] = STATE(319),
        [sym_simple_type_spec] = STATE(237),
        [sym_base_type_spec] = STATE(195),
        [sym_any_type] = STATE(198),
        [sym_fixed_pt_type] = STATE(196),
        [sym_template_type_spec] = STATE(237),
        [sym_sequence_type] = STATE(196),
        [sym_map_type] = STATE(196),
        [sym_const_expr] = STATE(319),
        [sym_or_expr] = STATE(131),
        [sym_xor_expr] = STATE(127),
        [sym_and_expr] = STATE(125),
        [sym_shift_expr] = STATE(120),
        [sym_add_expr] = STATE(117),
        [sym_mult_expr] = STATE(108),
        [sym_unary_expr] = STATE(111),
        [sym_unary_operator] = STATE(114),
        [sym_literal] = STATE(112),
        [sym_string_literal] = STATE(104),
        [sym_char_literal] = STATE(104),
        [sym_boolean_literal] = STATE(104),
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
        [sym_signed_short_int] = STATE(176),
        [sym_signed_long_int] = STATE(176),
        [sym_signed_longlong_int] = STATE(176),
        [sym_unsigned_int] = STATE(181),
        [sym_integer_type] = STATE(198),
        [sym_signed_int] = STATE(181),
        [sym_unsigned_short_int] = STATE(174),
        [sym_unsigned_long_int] = STATE(174),
        [sym_unsigned_longlong_int] = STATE(174),
        [sym_floating_pt_type] = STATE(198),
        [sym_char_type] = STATE(198),
        [sym_scoped_name] = STATE(402),
        [sym_string_type] = STATE(196),
        [sym_simple_type_spec] = STATE(148),
        [sym_base_type_spec] = STATE(195),
        [sym_any_type] = STATE(198),
        [sym_fixed_pt_type] = STATE(196),
        [sym_template_type_spec] = STATE(148),
        [sym_sequence_type] = STATE(196),
        [sym_map_type] = STATE(196),
        [sym_bitset_dcl] = STATE(148),
        [sym_bitmask_dcl] = STATE(148),
        [sym_struct_forward_dcl] = STATE(148),
        [sym_struct_def] = STATE(148),
        [sym_enum_dcl] = STATE(148),
        [sym_enum_anno] = STATE(440),
        [sym_union_forward_dcl] = STATE(148),
        [sym_union_def] = STATE(148),
        [sym_data_representation] = STATE(249),
        [sym_type_declarator] = STATE(401),
        [sym_comment] = STATE(9),
        [aux_sym_struct_def_repeat1] = STATE(153),
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
    [10] = {
        [sym_signed_short_int] = STATE(176),
        [sym_signed_long_int] = STATE(176),
        [sym_signed_longlong_int] = STATE(176),
        [sym_unsigned_int] = STATE(181),
        [sym_integer_type] = STATE(198),
        [sym_signed_int] = STATE(181),
        [sym_unsigned_short_int] = STATE(174),
        [sym_unsigned_long_int] = STATE(174),
        [sym_unsigned_longlong_int] = STATE(174),
        [sym_floating_pt_type] = STATE(198),
        [sym_char_type] = STATE(198),
        [sym_scoped_name] = STATE(402),
        [sym_string_type] = STATE(196),
        [sym_type_spec] = STATE(142),
        [sym_simple_type_spec] = STATE(237),
        [sym_base_type_spec] = STATE(195),
        [sym_any_type] = STATE(198),
        [sym_fixed_pt_type] = STATE(196),
        [sym_template_type_spec] = STATE(237),
        [sym_sequence_type] = STATE(196),
        [sym_map_type] = STATE(196),
        [sym_member] = STATE(47),
        [sym_hashid] = STATE(53),
        [sym_try_construct] = STATE(53),
        [sym_struct_modifier] = STATE(52),
        [sym_comment] = STATE(10),
        [aux_sym_except_dcl_repeat1] = STATE(17),
        [aux_sym_member_repeat1] = STATE(21),
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
        [sym_optional] = ACTIONS(256),
        [sym_key] = ACTIONS(256),
        [sym_must_understand] = ACTIONS(256),
        [sym_non_serialized] = ACTIONS(256),
        [sym_id] = ACTIONS(256),
        [sym_external] = ACTIONS(256),
        [anon_sym_AThashid] = ACTIONS(258),
        [anon_sym_ATtry_construct] = ACTIONS(260),
        [sym_identifier] = ACTIONS(117),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [11] = {
        [sym_signed_short_int] = STATE(176),
        [sym_signed_long_int] = STATE(176),
        [sym_signed_longlong_int] = STATE(176),
        [sym_unsigned_int] = STATE(181),
        [sym_integer_type] = STATE(198),
        [sym_signed_int] = STATE(181),
        [sym_unsigned_short_int] = STATE(174),
        [sym_unsigned_long_int] = STATE(174),
        [sym_unsigned_longlong_int] = STATE(174),
        [sym_floating_pt_type] = STATE(198),
        [sym_char_type] = STATE(198),
        [sym_scoped_name] = STATE(402),
        [sym_string_type] = STATE(196),
        [sym_type_spec] = STATE(142),
        [sym_simple_type_spec] = STATE(237),
        [sym_base_type_spec] = STATE(195),
        [sym_any_type] = STATE(198),
        [sym_fixed_pt_type] = STATE(196),
        [sym_template_type_spec] = STATE(237),
        [sym_sequence_type] = STATE(196),
        [sym_map_type] = STATE(196),
        [sym_member] = STATE(47),
        [sym_hashid] = STATE(53),
        [sym_try_construct] = STATE(53),
        [sym_struct_modifier] = STATE(52),
        [sym_comment] = STATE(11),
        [aux_sym_except_dcl_repeat1] = STATE(18),
        [aux_sym_member_repeat1] = STATE(21),
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
        [anon_sym_RBRACE] = ACTIONS(262),
        [sym_optional] = ACTIONS(256),
        [sym_key] = ACTIONS(256),
        [sym_must_understand] = ACTIONS(256),
        [sym_non_serialized] = ACTIONS(256),
        [sym_id] = ACTIONS(256),
        [sym_external] = ACTIONS(256),
        [anon_sym_AThashid] = ACTIONS(258),
        [anon_sym_ATtry_construct] = ACTIONS(260),
        [sym_identifier] = ACTIONS(117),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [12] = {
        [sym_signed_short_int] = STATE(176),
        [sym_signed_long_int] = STATE(176),
        [sym_signed_longlong_int] = STATE(176),
        [sym_unsigned_int] = STATE(181),
        [sym_integer_type] = STATE(198),
        [sym_signed_int] = STATE(181),
        [sym_unsigned_short_int] = STATE(174),
        [sym_unsigned_long_int] = STATE(174),
        [sym_unsigned_longlong_int] = STATE(174),
        [sym_floating_pt_type] = STATE(198),
        [sym_char_type] = STATE(198),
        [sym_scoped_name] = STATE(402),
        [sym_string_type] = STATE(196),
        [sym_type_spec] = STATE(142),
        [sym_simple_type_spec] = STATE(237),
        [sym_base_type_spec] = STATE(195),
        [sym_any_type] = STATE(198),
        [sym_fixed_pt_type] = STATE(196),
        [sym_template_type_spec] = STATE(237),
        [sym_sequence_type] = STATE(196),
        [sym_map_type] = STATE(196),
        [sym_member] = STATE(47),
        [sym_hashid] = STATE(53),
        [sym_try_construct] = STATE(53),
        [sym_struct_modifier] = STATE(52),
        [sym_comment] = STATE(12),
        [aux_sym_except_dcl_repeat1] = STATE(17),
        [aux_sym_member_repeat1] = STATE(21),
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
        [anon_sym_RBRACE] = ACTIONS(264),
        [sym_optional] = ACTIONS(256),
        [sym_key] = ACTIONS(256),
        [sym_must_understand] = ACTIONS(256),
        [sym_non_serialized] = ACTIONS(256),
        [sym_id] = ACTIONS(256),
        [sym_external] = ACTIONS(256),
        [anon_sym_AThashid] = ACTIONS(258),
        [anon_sym_ATtry_construct] = ACTIONS(260),
        [sym_identifier] = ACTIONS(117),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [13] = {
        [sym_signed_short_int] = STATE(176),
        [sym_signed_long_int] = STATE(176),
        [sym_signed_longlong_int] = STATE(176),
        [sym_unsigned_int] = STATE(181),
        [sym_integer_type] = STATE(198),
        [sym_signed_int] = STATE(181),
        [sym_unsigned_short_int] = STATE(174),
        [sym_unsigned_long_int] = STATE(174),
        [sym_unsigned_longlong_int] = STATE(174),
        [sym_floating_pt_type] = STATE(198),
        [sym_char_type] = STATE(198),
        [sym_scoped_name] = STATE(402),
        [sym_string_type] = STATE(196),
        [sym_type_spec] = STATE(142),
        [sym_simple_type_spec] = STATE(237),
        [sym_base_type_spec] = STATE(195),
        [sym_any_type] = STATE(198),
        [sym_fixed_pt_type] = STATE(196),
        [sym_template_type_spec] = STATE(237),
        [sym_sequence_type] = STATE(196),
        [sym_map_type] = STATE(196),
        [sym_member] = STATE(47),
        [sym_hashid] = STATE(53),
        [sym_try_construct] = STATE(53),
        [sym_struct_modifier] = STATE(52),
        [sym_comment] = STATE(13),
        [aux_sym_except_dcl_repeat1] = STATE(17),
        [aux_sym_member_repeat1] = STATE(21),
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
        [anon_sym_RBRACE] = ACTIONS(266),
        [sym_optional] = ACTIONS(256),
        [sym_key] = ACTIONS(256),
        [sym_must_understand] = ACTIONS(256),
        [sym_non_serialized] = ACTIONS(256),
        [sym_id] = ACTIONS(256),
        [sym_external] = ACTIONS(256),
        [anon_sym_AThashid] = ACTIONS(258),
        [anon_sym_ATtry_construct] = ACTIONS(260),
        [sym_identifier] = ACTIONS(117),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [14] = {
        [sym_signed_short_int] = STATE(176),
        [sym_signed_long_int] = STATE(176),
        [sym_signed_longlong_int] = STATE(176),
        [sym_unsigned_int] = STATE(181),
        [sym_integer_type] = STATE(198),
        [sym_signed_int] = STATE(181),
        [sym_unsigned_short_int] = STATE(174),
        [sym_unsigned_long_int] = STATE(174),
        [sym_unsigned_longlong_int] = STATE(174),
        [sym_floating_pt_type] = STATE(198),
        [sym_char_type] = STATE(198),
        [sym_scoped_name] = STATE(402),
        [sym_string_type] = STATE(196),
        [sym_type_spec] = STATE(142),
        [sym_simple_type_spec] = STATE(237),
        [sym_base_type_spec] = STATE(195),
        [sym_any_type] = STATE(198),
        [sym_fixed_pt_type] = STATE(196),
        [sym_template_type_spec] = STATE(237),
        [sym_sequence_type] = STATE(196),
        [sym_map_type] = STATE(196),
        [sym_member] = STATE(47),
        [sym_hashid] = STATE(53),
        [sym_try_construct] = STATE(53),
        [sym_struct_modifier] = STATE(52),
        [sym_comment] = STATE(14),
        [aux_sym_except_dcl_repeat1] = STATE(20),
        [aux_sym_member_repeat1] = STATE(21),
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
        [sym_optional] = ACTIONS(256),
        [sym_key] = ACTIONS(256),
        [sym_must_understand] = ACTIONS(256),
        [sym_non_serialized] = ACTIONS(256),
        [sym_id] = ACTIONS(256),
        [sym_external] = ACTIONS(256),
        [anon_sym_AThashid] = ACTIONS(258),
        [anon_sym_ATtry_construct] = ACTIONS(260),
        [sym_identifier] = ACTIONS(117),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [15] = {
        [sym_signed_short_int] = STATE(176),
        [sym_signed_long_int] = STATE(176),
        [sym_signed_longlong_int] = STATE(176),
        [sym_unsigned_int] = STATE(181),
        [sym_integer_type] = STATE(198),
        [sym_signed_int] = STATE(181),
        [sym_unsigned_short_int] = STATE(174),
        [sym_unsigned_long_int] = STATE(174),
        [sym_unsigned_longlong_int] = STATE(174),
        [sym_floating_pt_type] = STATE(198),
        [sym_char_type] = STATE(198),
        [sym_scoped_name] = STATE(402),
        [sym_string_type] = STATE(196),
        [sym_type_spec] = STATE(142),
        [sym_simple_type_spec] = STATE(237),
        [sym_base_type_spec] = STATE(195),
        [sym_any_type] = STATE(198),
        [sym_fixed_pt_type] = STATE(196),
        [sym_template_type_spec] = STATE(237),
        [sym_sequence_type] = STATE(196),
        [sym_map_type] = STATE(196),
        [sym_member] = STATE(47),
        [sym_hashid] = STATE(53),
        [sym_try_construct] = STATE(53),
        [sym_struct_modifier] = STATE(52),
        [sym_comment] = STATE(15),
        [aux_sym_except_dcl_repeat1] = STATE(13),
        [aux_sym_member_repeat1] = STATE(21),
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
        [anon_sym_RBRACE] = ACTIONS(268),
        [sym_optional] = ACTIONS(256),
        [sym_key] = ACTIONS(256),
        [sym_must_understand] = ACTIONS(256),
        [sym_non_serialized] = ACTIONS(256),
        [sym_id] = ACTIONS(256),
        [sym_external] = ACTIONS(256),
        [anon_sym_AThashid] = ACTIONS(258),
        [anon_sym_ATtry_construct] = ACTIONS(260),
        [sym_identifier] = ACTIONS(117),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [16] = {
        [sym_signed_short_int] = STATE(176),
        [sym_signed_long_int] = STATE(176),
        [sym_signed_longlong_int] = STATE(176),
        [sym_unsigned_int] = STATE(181),
        [sym_integer_type] = STATE(198),
        [sym_signed_int] = STATE(181),
        [sym_unsigned_short_int] = STATE(174),
        [sym_unsigned_long_int] = STATE(174),
        [sym_unsigned_longlong_int] = STATE(174),
        [sym_floating_pt_type] = STATE(198),
        [sym_char_type] = STATE(198),
        [sym_scoped_name] = STATE(402),
        [sym_string_type] = STATE(196),
        [sym_type_spec] = STATE(142),
        [sym_simple_type_spec] = STATE(237),
        [sym_base_type_spec] = STATE(195),
        [sym_any_type] = STATE(198),
        [sym_fixed_pt_type] = STATE(196),
        [sym_template_type_spec] = STATE(237),
        [sym_sequence_type] = STATE(196),
        [sym_map_type] = STATE(196),
        [sym_member] = STATE(47),
        [sym_hashid] = STATE(53),
        [sym_try_construct] = STATE(53),
        [sym_struct_modifier] = STATE(52),
        [sym_comment] = STATE(16),
        [aux_sym_except_dcl_repeat1] = STATE(12),
        [aux_sym_member_repeat1] = STATE(21),
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
        [anon_sym_RBRACE] = ACTIONS(270),
        [sym_optional] = ACTIONS(256),
        [sym_key] = ACTIONS(256),
        [sym_must_understand] = ACTIONS(256),
        [sym_non_serialized] = ACTIONS(256),
        [sym_id] = ACTIONS(256),
        [sym_external] = ACTIONS(256),
        [anon_sym_AThashid] = ACTIONS(258),
        [anon_sym_ATtry_construct] = ACTIONS(260),
        [sym_identifier] = ACTIONS(117),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [17] = {
        [sym_signed_short_int] = STATE(176),
        [sym_signed_long_int] = STATE(176),
        [sym_signed_longlong_int] = STATE(176),
        [sym_unsigned_int] = STATE(181),
        [sym_integer_type] = STATE(198),
        [sym_signed_int] = STATE(181),
        [sym_unsigned_short_int] = STATE(174),
        [sym_unsigned_long_int] = STATE(174),
        [sym_unsigned_longlong_int] = STATE(174),
        [sym_floating_pt_type] = STATE(198),
        [sym_char_type] = STATE(198),
        [sym_scoped_name] = STATE(402),
        [sym_string_type] = STATE(196),
        [sym_type_spec] = STATE(142),
        [sym_simple_type_spec] = STATE(237),
        [sym_base_type_spec] = STATE(195),
        [sym_any_type] = STATE(198),
        [sym_fixed_pt_type] = STATE(196),
        [sym_template_type_spec] = STATE(237),
        [sym_sequence_type] = STATE(196),
        [sym_map_type] = STATE(196),
        [sym_member] = STATE(47),
        [sym_hashid] = STATE(53),
        [sym_try_construct] = STATE(53),
        [sym_struct_modifier] = STATE(52),
        [sym_comment] = STATE(17),
        [aux_sym_except_dcl_repeat1] = STATE(17),
        [aux_sym_member_repeat1] = STATE(21),
        [anon_sym_short] = ACTIONS(272),
        [anon_sym_int16] = ACTIONS(272),
        [anon_sym_long] = ACTIONS(275),
        [anon_sym_int32] = ACTIONS(275),
        [anon_sym_longlong] = ACTIONS(278),
        [anon_sym_int64] = ACTIONS(281),
        [sym_unsigned_tiny_int] = ACTIONS(284),
        [sym_boolean_type] = ACTIONS(287),
        [anon_sym_fixed] = ACTIONS(290),
        [sym_octet_type] = ACTIONS(287),
        [sym_signed_tiny_int] = ACTIONS(293),
        [anon_sym_unsignedshort] = ACTIONS(296),
        [anon_sym_uint16] = ACTIONS(299),
        [anon_sym_unsignedlong] = ACTIONS(302),
        [anon_sym_uint32] = ACTIONS(302),
        [anon_sym_unsignedlonglong] = ACTIONS(305),
        [anon_sym_uint64] = ACTIONS(308),
        [anon_sym_float] = ACTIONS(311),
        [anon_sym_double] = ACTIONS(311),
        [anon_sym_longdouble] = ACTIONS(314),
        [anon_sym_char] = ACTIONS(317),
        [anon_sym_wchar] = ACTIONS(317),
        [anon_sym_COLON_COLON] = ACTIONS(320),
        [anon_sym_string] = ACTIONS(323),
        [anon_sym_wstring] = ACTIONS(323),
        [anon_sym_any] = ACTIONS(326),
        [anon_sym_sequence] = ACTIONS(329),
        [anon_sym_map] = ACTIONS(332),
        [anon_sym_RBRACE] = ACTIONS(335),
        [sym_optional] = ACTIONS(337),
        [sym_key] = ACTIONS(337),
        [sym_must_understand] = ACTIONS(337),
        [sym_non_serialized] = ACTIONS(337),
        [sym_id] = ACTIONS(337),
        [sym_external] = ACTIONS(337),
        [anon_sym_AThashid] = ACTIONS(340),
        [anon_sym_ATtry_construct] = ACTIONS(343),
        [sym_identifier] = ACTIONS(346),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [18] = {
        [sym_signed_short_int] = STATE(176),
        [sym_signed_long_int] = STATE(176),
        [sym_signed_longlong_int] = STATE(176),
        [sym_unsigned_int] = STATE(181),
        [sym_integer_type] = STATE(198),
        [sym_signed_int] = STATE(181),
        [sym_unsigned_short_int] = STATE(174),
        [sym_unsigned_long_int] = STATE(174),
        [sym_unsigned_longlong_int] = STATE(174),
        [sym_floating_pt_type] = STATE(198),
        [sym_char_type] = STATE(198),
        [sym_scoped_name] = STATE(402),
        [sym_string_type] = STATE(196),
        [sym_type_spec] = STATE(142),
        [sym_simple_type_spec] = STATE(237),
        [sym_base_type_spec] = STATE(195),
        [sym_any_type] = STATE(198),
        [sym_fixed_pt_type] = STATE(196),
        [sym_template_type_spec] = STATE(237),
        [sym_sequence_type] = STATE(196),
        [sym_map_type] = STATE(196),
        [sym_member] = STATE(47),
        [sym_hashid] = STATE(53),
        [sym_try_construct] = STATE(53),
        [sym_struct_modifier] = STATE(52),
        [sym_comment] = STATE(18),
        [aux_sym_except_dcl_repeat1] = STATE(17),
        [aux_sym_member_repeat1] = STATE(21),
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
        [sym_optional] = ACTIONS(256),
        [sym_key] = ACTIONS(256),
        [sym_must_understand] = ACTIONS(256),
        [sym_non_serialized] = ACTIONS(256),
        [sym_id] = ACTIONS(256),
        [sym_external] = ACTIONS(256),
        [anon_sym_AThashid] = ACTIONS(258),
        [anon_sym_ATtry_construct] = ACTIONS(260),
        [sym_identifier] = ACTIONS(117),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [19] = {
        [sym_signed_short_int] = STATE(176),
        [sym_signed_long_int] = STATE(176),
        [sym_signed_longlong_int] = STATE(176),
        [sym_unsigned_int] = STATE(181),
        [sym_integer_type] = STATE(198),
        [sym_signed_int] = STATE(181),
        [sym_unsigned_short_int] = STATE(174),
        [sym_unsigned_long_int] = STATE(174),
        [sym_unsigned_longlong_int] = STATE(174),
        [sym_floating_pt_type] = STATE(198),
        [sym_char_type] = STATE(198),
        [sym_scoped_name] = STATE(402),
        [sym_string_type] = STATE(196),
        [sym_type_spec] = STATE(142),
        [sym_simple_type_spec] = STATE(237),
        [sym_base_type_spec] = STATE(195),
        [sym_any_type] = STATE(198),
        [sym_fixed_pt_type] = STATE(196),
        [sym_template_type_spec] = STATE(237),
        [sym_sequence_type] = STATE(196),
        [sym_map_type] = STATE(196),
        [sym_member] = STATE(47),
        [sym_hashid] = STATE(53),
        [sym_try_construct] = STATE(53),
        [sym_struct_modifier] = STATE(52),
        [sym_comment] = STATE(19),
        [aux_sym_except_dcl_repeat1] = STATE(10),
        [aux_sym_member_repeat1] = STATE(21),
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
        [sym_optional] = ACTIONS(256),
        [sym_key] = ACTIONS(256),
        [sym_must_understand] = ACTIONS(256),
        [sym_non_serialized] = ACTIONS(256),
        [sym_id] = ACTIONS(256),
        [sym_external] = ACTIONS(256),
        [anon_sym_AThashid] = ACTIONS(258),
        [anon_sym_ATtry_construct] = ACTIONS(260),
        [sym_identifier] = ACTIONS(117),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [20] = {
        [sym_signed_short_int] = STATE(176),
        [sym_signed_long_int] = STATE(176),
        [sym_signed_longlong_int] = STATE(176),
        [sym_unsigned_int] = STATE(181),
        [sym_integer_type] = STATE(198),
        [sym_signed_int] = STATE(181),
        [sym_unsigned_short_int] = STATE(174),
        [sym_unsigned_long_int] = STATE(174),
        [sym_unsigned_longlong_int] = STATE(174),
        [sym_floating_pt_type] = STATE(198),
        [sym_char_type] = STATE(198),
        [sym_scoped_name] = STATE(402),
        [sym_string_type] = STATE(196),
        [sym_type_spec] = STATE(142),
        [sym_simple_type_spec] = STATE(237),
        [sym_base_type_spec] = STATE(195),
        [sym_any_type] = STATE(198),
        [sym_fixed_pt_type] = STATE(196),
        [sym_template_type_spec] = STATE(237),
        [sym_sequence_type] = STATE(196),
        [sym_map_type] = STATE(196),
        [sym_member] = STATE(47),
        [sym_hashid] = STATE(53),
        [sym_try_construct] = STATE(53),
        [sym_struct_modifier] = STATE(52),
        [sym_comment] = STATE(20),
        [aux_sym_except_dcl_repeat1] = STATE(17),
        [aux_sym_member_repeat1] = STATE(21),
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
        [sym_optional] = ACTIONS(256),
        [sym_key] = ACTIONS(256),
        [sym_must_understand] = ACTIONS(256),
        [sym_non_serialized] = ACTIONS(256),
        [sym_id] = ACTIONS(256),
        [sym_external] = ACTIONS(256),
        [anon_sym_AThashid] = ACTIONS(258),
        [anon_sym_ATtry_construct] = ACTIONS(260),
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
    ACTIONS(258),
    1,
    anon_sym_AThashid,
    ACTIONS(260),
    1,
    anon_sym_ATtry_construct,
    STATE(21),
    1,
    sym_comment,
    STATE(45),
    1,
    aux_sym_member_repeat1,
    STATE(52),
    1,
    sym_struct_modifier,
    STATE(145),
    1,
    sym_type_spec,
    STATE(195),
    1,
    sym_base_type_spec,
    STATE(402),
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
    STATE(53),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(181),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(237),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(174),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(176),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(196),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(198),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    ACTIONS(256),
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
    ACTIONS(357),
    1,
    anon_sym_fixed,
    ACTIONS(359),
    1,
    anon_sym_any,
    ACTIONS(361),
    1,
    anon_sym_RBRACE,
    STATE(22),
    1,
    sym_comment,
    STATE(23),
    1,
    aux_sym_annotation_dcl_repeat1,
    STATE(58),
    1,
    sym_annotation_body,
    STATE(59),
    1,
    sym_annotation_member,
    STATE(338),
    1,
    sym_annotation_member_type,
    STATE(355),
    1,
    sym_scoped_name,
    STATE(440),
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
    ACTIONS(355),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(181),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(352),
    2,
    sym_any_const_type,
    sym_const_type,
    STATE(174),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(176),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(351),
    3,
    sym_enum_dcl,
    sym_typedef_dcl,
    sym_const_dcl,
    STATE(418),
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
    ACTIONS(369),
    1,
    anon_sym_longlong,
    ACTIONS(372),
    1,
    anon_sym_int64,
    ACTIONS(375),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(381),
    1,
    anon_sym_fixed,
    ACTIONS(384),
    1,
    sym_signed_tiny_int,
    ACTIONS(387),
    1,
    anon_sym_unsignedshort,
    ACTIONS(390),
    1,
    anon_sym_uint16,
    ACTIONS(396),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(399),
    1,
    anon_sym_uint64,
    ACTIONS(405),
    1,
    anon_sym_longdouble,
    ACTIONS(411),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(417),
    1,
    anon_sym_any,
    ACTIONS(420),
    1,
    anon_sym_sequence,
    ACTIONS(423),
    1,
    anon_sym_RBRACE,
    ACTIONS(425),
    1,
    anon_sym_enum,
    ACTIONS(428),
    1,
    anon_sym_const,
    ACTIONS(431),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(434),
    1,
    anon_sym_typedef,
    ACTIONS(437),
    1,
    sym_identifier,
    STATE(58),
    1,
    sym_annotation_body,
    STATE(59),
    1,
    sym_annotation_member,
    STATE(338),
    1,
    sym_annotation_member_type,
    STATE(355),
    1,
    sym_scoped_name,
    STATE(440),
    1,
    sym_enum_anno,
    ACTIONS(363),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(366),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(378),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(393),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(402),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(408),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(414),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(23),
    2,
    sym_comment,
    aux_sym_annotation_dcl_repeat1,
    STATE(181),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(352),
    2,
    sym_any_const_type,
    sym_const_type,
    STATE(174),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(176),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(351),
    3,
    sym_enum_dcl,
    sym_typedef_dcl,
    sym_const_dcl,
    STATE(418),
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
    ACTIONS(357),
    1,
    anon_sym_fixed,
    ACTIONS(359),
    1,
    anon_sym_any,
    ACTIONS(440),
    1,
    anon_sym_RBRACE,
    STATE(22),
    1,
    aux_sym_annotation_dcl_repeat1,
    STATE(24),
    1,
    sym_comment,
    STATE(58),
    1,
    sym_annotation_body,
    STATE(59),
    1,
    sym_annotation_member,
    STATE(338),
    1,
    sym_annotation_member_type,
    STATE(355),
    1,
    sym_scoped_name,
    STATE(440),
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
    ACTIONS(355),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(181),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(352),
    2,
    sym_any_const_type,
    sym_const_type,
    STATE(174),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(176),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(351),
    3,
    sym_enum_dcl,
    sym_typedef_dcl,
    sym_const_dcl,
    STATE(418),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [564] = 36,
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
    ACTIONS(442),
    1,
    anon_sym_RBRACE,
    STATE(25),
    1,
    sym_comment,
    STATE(162),
    1,
    sym_type_spec,
    STATE(195),
    1,
    sym_base_type_spec,
    STATE(402),
    1,
    sym_scoped_name,
    STATE(452),
    1,
    sym_element_spec,
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
    ACTIONS(444),
    2,
    anon_sym_default,
    anon_sym_case,
    STATE(181),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(237),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(174),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(176),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(196),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(198),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    [693] = 38,
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
    STATE(28),
    1,
    aux_sym_template_module_dcl_repeat1,
    STATE(83),
    1,
    sym_predefine,
    STATE(87),
    1,
    sym_tpl_definition,
    STATE(89),
    1,
    sym__definition,
    STATE(121),
    1,
    aux_sym_interface_def_repeat1,
    STATE(147),
    1,
    sym_interface_anno,
    STATE(153),
    1,
    aux_sym_struct_def_repeat1,
    STATE(249),
    1,
    sym_data_representation,
    STATE(397),
    1,
    sym_template_module_ref,
    STATE(440),
    1,
    sym_enum_anno,
    STATE(441),
    1,
    sym_interface_header,
    STATE(154),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(444),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(449),
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
    [825] = 38,
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
    ACTIONS(452),
    1,
    ts_builtin_sym_end,
    STATE(27),
    1,
    sym_comment,
    STATE(39),
    1,
    aux_sym_specification_repeat2,
    STATE(78),
    1,
    aux_sym_specification_repeat1,
    STATE(83),
    1,
    sym_predefine,
    STATE(85),
    1,
    sym__definition,
    STATE(91),
    1,
    sym_preproc_call,
    STATE(121),
    1,
    aux_sym_interface_def_repeat1,
    STATE(147),
    1,
    sym_interface_anno,
    STATE(153),
    1,
    aux_sym_struct_def_repeat1,
    STATE(249),
    1,
    sym_data_representation,
    STATE(440),
    1,
    sym_enum_anno,
    STATE(441),
    1,
    sym_interface_header,
    STATE(154),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(444),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(449),
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
    [957] = 37,
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
    STATE(83),
    1,
    sym_predefine,
    STATE(87),
    1,
    sym_tpl_definition,
    STATE(89),
    1,
    sym__definition,
    STATE(121),
    1,
    aux_sym_interface_def_repeat1,
    STATE(147),
    1,
    sym_interface_anno,
    STATE(153),
    1,
    aux_sym_struct_def_repeat1,
    STATE(249),
    1,
    sym_data_representation,
    STATE(397),
    1,
    sym_template_module_ref,
    STATE(440),
    1,
    sym_enum_anno,
    STATE(441),
    1,
    sym_interface_header,
    STATE(28),
    2,
    sym_comment,
    aux_sym_template_module_dcl_repeat1,
    STATE(154),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(444),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(449),
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
    [1087] = 38,
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
    ACTIONS(519),
    1,
    anon_sym_RBRACE,
    STATE(26),
    1,
    aux_sym_template_module_dcl_repeat1,
    STATE(29),
    1,
    sym_comment,
    STATE(83),
    1,
    sym_predefine,
    STATE(87),
    1,
    sym_tpl_definition,
    STATE(89),
    1,
    sym__definition,
    STATE(121),
    1,
    aux_sym_interface_def_repeat1,
    STATE(147),
    1,
    sym_interface_anno,
    STATE(153),
    1,
    aux_sym_struct_def_repeat1,
    STATE(249),
    1,
    sym_data_representation,
    STATE(397),
    1,
    sym_template_module_ref,
    STATE(440),
    1,
    sym_enum_anno,
    STATE(441),
    1,
    sym_interface_header,
    STATE(154),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(444),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(449),
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
    [1219] = 35,
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
    ACTIONS(521),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(523),
    1,
    anon_sym_GT,
    ACTIONS(525),
    1,
    anon_sym_COMMA,
    ACTIONS(527),
    1,
    sym_identifier,
    STATE(30),
    1,
    sym_comment,
    STATE(195),
    1,
    sym_base_type_spec,
    STATE(266),
    1,
    sym_scoped_name,
    STATE(403),
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
    STATE(181),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(237),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(174),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(176),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(196),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(198),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    [1344] = 34,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(531),
    1,
    anon_sym_exception,
    ACTIONS(534),
    1,
    anon_sym_interface,
    ACTIONS(537),
    1,
    anon_sym_local,
    ACTIONS(540),
    1,
    anon_sym_bitset,
    ACTIONS(543),
    1,
    anon_sym_bitmask,
    ACTIONS(546),
    1,
    anon_sym_ATannotation,
    ACTIONS(549),
    1,
    anon_sym_module,
    ACTIONS(552),
    1,
    anon_sym_struct,
    ACTIONS(555),
    1,
    anon_sym_union,
    ACTIONS(558),
    1,
    anon_sym_enum,
    ACTIONS(561),
    1,
    anon_sym_const,
    ACTIONS(564),
    1,
    anon_sym_native,
    ACTIONS(567),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(570),
    1,
    anon_sym_typedef,
    ACTIONS(573),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(576),
    1,
    sym_dds_service,
    ACTIONS(579),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(582),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(585),
    1,
    sym_final,
    ACTIONS(588),
    1,
    anon_sym_ATdata_representation,
    STATE(83),
    1,
    sym_predefine,
    STATE(85),
    1,
    sym__definition,
    STATE(121),
    1,
    aux_sym_interface_def_repeat1,
    STATE(147),
    1,
    sym_interface_anno,
    STATE(153),
    1,
    aux_sym_struct_def_repeat1,
    STATE(249),
    1,
    sym_data_representation,
    STATE(440),
    1,
    sym_enum_anno,
    STATE(441),
    1,
    sym_interface_header,
    ACTIONS(529),
    2,
    ts_builtin_sym_end,
    anon_sym_RBRACE,
    STATE(31),
    2,
    sym_comment,
    aux_sym_specification_repeat2,
    STATE(154),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(444),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(449),
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
    [1466] = 35,
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
    ACTIONS(591),
    1,
    anon_sym_RBRACE,
    STATE(32),
    1,
    sym_comment,
    STATE(40),
    1,
    aux_sym_specification_repeat2,
    STATE(83),
    1,
    sym_predefine,
    STATE(85),
    1,
    sym__definition,
    STATE(121),
    1,
    aux_sym_interface_def_repeat1,
    STATE(147),
    1,
    sym_interface_anno,
    STATE(153),
    1,
    aux_sym_struct_def_repeat1,
    STATE(249),
    1,
    sym_data_representation,
    STATE(440),
    1,
    sym_enum_anno,
    STATE(441),
    1,
    sym_interface_header,
    STATE(154),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(444),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(449),
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
    [1589] = 33,
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
    STATE(33),
    1,
    sym_comment,
    STATE(195),
    1,
    sym_base_type_spec,
    STATE(273),
    1,
    sym_scoped_name,
    STATE(420),
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
    STATE(181),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(237),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(174),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(176),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(196),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(198),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    [1708] = 33,
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
    STATE(34),
    1,
    sym_comment,
    STATE(195),
    1,
    sym_base_type_spec,
    STATE(206),
    1,
    sym_type_spec,
    STATE(402),
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
    STATE(181),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(237),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(174),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(176),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(196),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(198),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    [1827] = 33,
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
    STATE(35),
    1,
    sym_comment,
    STATE(195),
    1,
    sym_base_type_spec,
    STATE(229),
    1,
    sym_type_spec,
    STATE(402),
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
    STATE(181),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(237),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(174),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(176),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(196),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(198),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    [1946] = 35,
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
    ACTIONS(452),
    1,
    ts_builtin_sym_end,
    STATE(31),
    1,
    aux_sym_specification_repeat2,
    STATE(36),
    1,
    sym_comment,
    STATE(83),
    1,
    sym_predefine,
    STATE(85),
    1,
    sym__definition,
    STATE(121),
    1,
    aux_sym_interface_def_repeat1,
    STATE(147),
    1,
    sym_interface_anno,
    STATE(153),
    1,
    aux_sym_struct_def_repeat1,
    STATE(249),
    1,
    sym_data_representation,
    STATE(440),
    1,
    sym_enum_anno,
    STATE(441),
    1,
    sym_interface_header,
    STATE(154),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(444),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(449),
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
    [2069] = 33,
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
    STATE(195),
    1,
    sym_base_type_spec,
    STATE(298),
    1,
    sym_type_spec,
    STATE(402),
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
    STATE(181),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(237),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(174),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(176),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(196),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(198),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    [2188] = 33,
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
    ACTIONS(521),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(527),
    1,
    sym_identifier,
    STATE(38),
    1,
    sym_comment,
    STATE(195),
    1,
    sym_base_type_spec,
    STATE(266),
    1,
    sym_scoped_name,
    STATE(337),
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
    STATE(181),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(237),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(174),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(176),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(196),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    STATE(198),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    [2307] = 35,
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
    ACTIONS(593),
    1,
    ts_builtin_sym_end,
    STATE(31),
    1,
    aux_sym_specification_repeat2,
    STATE(39),
    1,
    sym_comment,
    STATE(83),
    1,
    sym_predefine,
    STATE(85),
    1,
    sym__definition,
    STATE(121),
    1,
    aux_sym_interface_def_repeat1,
    STATE(147),
    1,
    sym_interface_anno,
    STATE(153),
    1,
    aux_sym_struct_def_repeat1,
    STATE(249),
    1,
    sym_data_representation,
    STATE(440),
    1,
    sym_enum_anno,
    STATE(441),
    1,
    sym_interface_header,
    STATE(154),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(444),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(449),
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
    [2430] = 35,
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
    ACTIONS(595),
    1,
    anon_sym_RBRACE,
    STATE(31),
    1,
    aux_sym_specification_repeat2,
    STATE(40),
    1,
    sym_comment,
    STATE(83),
    1,
    sym_predefine,
    STATE(85),
    1,
    sym__definition,
    STATE(121),
    1,
    aux_sym_interface_def_repeat1,
    STATE(147),
    1,
    sym_interface_anno,
    STATE(153),
    1,
    aux_sym_struct_def_repeat1,
    STATE(249),
    1,
    sym_data_representation,
    STATE(440),
    1,
    sym_enum_anno,
    STATE(441),
    1,
    sym_interface_header,
    STATE(154),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(444),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(449),
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
    [2553] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(41),
    1,
    sym_comment,
    ACTIONS(599),
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
    ACTIONS(597),
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
    [2609] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(42),
    1,
    sym_comment,
    ACTIONS(603),
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
    ACTIONS(601),
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
    [2665] = 28,
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
    ACTIONS(357),
    1,
    anon_sym_fixed,
    STATE(43),
    1,
    sym_comment,
    STATE(340),
    1,
    sym_scoped_name,
    STATE(407),
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
    ACTIONS(355),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(181),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(174),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(176),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(418),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [2767] = 28,
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
    ACTIONS(357),
    1,
    anon_sym_fixed,
    STATE(44),
    1,
    sym_comment,
    STATE(340),
    1,
    sym_scoped_name,
    STATE(460),
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
    ACTIONS(355),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(181),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(174),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(176),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(418),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [2869] = 9,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(612),
    1,
    anon_sym_AThashid,
    ACTIONS(615),
    1,
    anon_sym_ATtry_construct,
    STATE(52),
    1,
    sym_struct_modifier,
    STATE(45),
    2,
    sym_comment,
    aux_sym_member_repeat1,
    STATE(53),
    2,
    sym_hashid,
    sym_try_construct,
    ACTIONS(607),
    5,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    ACTIONS(609),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(605),
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
    [2931] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(46),
    1,
    sym_comment,
    ACTIONS(620),
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
    ACTIONS(618),
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
    [2980] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(47),
    1,
    sym_comment,
    ACTIONS(624),
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
    ACTIONS(622),
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
    [3029] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(48),
    1,
    sym_comment,
    ACTIONS(628),
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
    ACTIONS(626),
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
    [3078] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(49),
    1,
    sym_comment,
    ACTIONS(632),
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
    ACTIONS(630),
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
    [3127] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(50),
    1,
    sym_comment,
    ACTIONS(636),
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
    ACTIONS(634),
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
    [3176] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(51),
    1,
    sym_comment,
    ACTIONS(640),
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
    ACTIONS(638),
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
    [3224] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(52),
    1,
    sym_comment,
    ACTIONS(644),
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
    ACTIONS(642),
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
    [3272] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(53),
    1,
    sym_comment,
    ACTIONS(648),
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
    ACTIONS(646),
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
    [3320] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(54),
    1,
    sym_comment,
    ACTIONS(652),
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
    ACTIONS(650),
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
    [3368] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(55),
    1,
    sym_comment,
    ACTIONS(656),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(654),
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
    [3412] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(56),
    1,
    sym_comment,
    ACTIONS(660),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(658),
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
    [3456] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(57),
    1,
    sym_comment,
    ACTIONS(664),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(662),
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
    [3500] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(58),
    1,
    sym_comment,
    ACTIONS(668),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(666),
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
    [3544] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(59),
    1,
    sym_comment,
    ACTIONS(672),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(670),
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
    [3588] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(60),
    1,
    sym_comment,
    ACTIONS(676),
    6,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    ACTIONS(674),
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
    anon_sym_default,
    anon_sym_case,
    sym_identifier,
    [3631] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(61),
    1,
    sym_comment,
    ACTIONS(680),
    6,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    ACTIONS(678),
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
    anon_sym_default,
    anon_sym_case,
    sym_identifier,
    [3674] = 23,
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
    ACTIONS(682),
    1,
    sym_boolean_type,
    STATE(62),
    1,
    sym_comment,
    STATE(289),
    1,
    sym_scoped_name,
    STATE(445),
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
    STATE(181),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(446),
    2,
    sym_integer_type,
    sym_char_type,
    STATE(174),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(176),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    [3754] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(63),
    1,
    sym_comment,
    ACTIONS(686),
    5,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    ACTIONS(684),
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
    [3794] = 25,
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
    STATE(64),
    1,
    sym_comment,
    STATE(98),
    1,
    sym_scoped_name,
    STATE(108),
    1,
    sym_mult_expr,
    STATE(111),
    1,
    sym_unary_expr,
    STATE(112),
    1,
    sym_literal,
    STATE(114),
    1,
    sym_unary_operator,
    STATE(117),
    1,
    sym_add_expr,
    STATE(120),
    1,
    sym_shift_expr,
    STATE(125),
    1,
    sym_and_expr,
    STATE(127),
    1,
    sym_xor_expr,
    STATE(131),
    1,
    sym_or_expr,
    STATE(186),
    1,
    sym_const_expr,
    STATE(366),
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
    STATE(104),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [3874] = 25,
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
    STATE(65),
    1,
    sym_comment,
    STATE(98),
    1,
    sym_scoped_name,
    STATE(108),
    1,
    sym_mult_expr,
    STATE(111),
    1,
    sym_unary_expr,
    STATE(112),
    1,
    sym_literal,
    STATE(114),
    1,
    sym_unary_operator,
    STATE(117),
    1,
    sym_add_expr,
    STATE(120),
    1,
    sym_shift_expr,
    STATE(125),
    1,
    sym_and_expr,
    STATE(127),
    1,
    sym_xor_expr,
    STATE(131),
    1,
    sym_or_expr,
    STATE(186),
    1,
    sym_const_expr,
    STATE(396),
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
    STATE(104),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [3954] = 25,
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
    STATE(98),
    1,
    sym_scoped_name,
    STATE(108),
    1,
    sym_mult_expr,
    STATE(111),
    1,
    sym_unary_expr,
    STATE(112),
    1,
    sym_literal,
    STATE(114),
    1,
    sym_unary_operator,
    STATE(117),
    1,
    sym_add_expr,
    STATE(120),
    1,
    sym_shift_expr,
    STATE(125),
    1,
    sym_and_expr,
    STATE(127),
    1,
    sym_xor_expr,
    STATE(131),
    1,
    sym_or_expr,
    STATE(186),
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
    STATE(104),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4034] = 25,
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
    STATE(98),
    1,
    sym_scoped_name,
    STATE(108),
    1,
    sym_mult_expr,
    STATE(111),
    1,
    sym_unary_expr,
    STATE(112),
    1,
    sym_literal,
    STATE(114),
    1,
    sym_unary_operator,
    STATE(117),
    1,
    sym_add_expr,
    STATE(120),
    1,
    sym_shift_expr,
    STATE(125),
    1,
    sym_and_expr,
    STATE(127),
    1,
    sym_xor_expr,
    STATE(131),
    1,
    sym_or_expr,
    STATE(186),
    1,
    sym_const_expr,
    STATE(411),
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
    STATE(104),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4114] = 25,
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
    STATE(98),
    1,
    sym_scoped_name,
    STATE(108),
    1,
    sym_mult_expr,
    STATE(111),
    1,
    sym_unary_expr,
    STATE(112),
    1,
    sym_literal,
    STATE(114),
    1,
    sym_unary_operator,
    STATE(117),
    1,
    sym_add_expr,
    STATE(120),
    1,
    sym_shift_expr,
    STATE(125),
    1,
    sym_and_expr,
    STATE(127),
    1,
    sym_xor_expr,
    STATE(131),
    1,
    sym_or_expr,
    STATE(186),
    1,
    sym_const_expr,
    STATE(325),
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
    STATE(104),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4194] = 25,
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
    STATE(98),
    1,
    sym_scoped_name,
    STATE(108),
    1,
    sym_mult_expr,
    STATE(111),
    1,
    sym_unary_expr,
    STATE(112),
    1,
    sym_literal,
    STATE(114),
    1,
    sym_unary_operator,
    STATE(117),
    1,
    sym_add_expr,
    STATE(120),
    1,
    sym_shift_expr,
    STATE(125),
    1,
    sym_and_expr,
    STATE(127),
    1,
    sym_xor_expr,
    STATE(131),
    1,
    sym_or_expr,
    STATE(186),
    1,
    sym_const_expr,
    STATE(439),
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
    STATE(104),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4274] = 25,
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
    STATE(98),
    1,
    sym_scoped_name,
    STATE(108),
    1,
    sym_mult_expr,
    STATE(111),
    1,
    sym_unary_expr,
    STATE(112),
    1,
    sym_literal,
    STATE(114),
    1,
    sym_unary_operator,
    STATE(117),
    1,
    sym_add_expr,
    STATE(120),
    1,
    sym_shift_expr,
    STATE(125),
    1,
    sym_and_expr,
    STATE(127),
    1,
    sym_xor_expr,
    STATE(131),
    1,
    sym_or_expr,
    STATE(186),
    1,
    sym_const_expr,
    STATE(423),
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
    STATE(104),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4354] = 24,
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
    STATE(98),
    1,
    sym_scoped_name,
    STATE(108),
    1,
    sym_mult_expr,
    STATE(111),
    1,
    sym_unary_expr,
    STATE(112),
    1,
    sym_literal,
    STATE(114),
    1,
    sym_unary_operator,
    STATE(117),
    1,
    sym_add_expr,
    STATE(120),
    1,
    sym_shift_expr,
    STATE(125),
    1,
    sym_and_expr,
    STATE(127),
    1,
    sym_xor_expr,
    STATE(131),
    1,
    sym_or_expr,
    STATE(421),
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
    STATE(104),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4431] = 24,
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
    STATE(98),
    1,
    sym_scoped_name,
    STATE(108),
    1,
    sym_mult_expr,
    STATE(111),
    1,
    sym_unary_expr,
    STATE(112),
    1,
    sym_literal,
    STATE(114),
    1,
    sym_unary_operator,
    STATE(117),
    1,
    sym_add_expr,
    STATE(120),
    1,
    sym_shift_expr,
    STATE(125),
    1,
    sym_and_expr,
    STATE(127),
    1,
    sym_xor_expr,
    STATE(131),
    1,
    sym_or_expr,
    STATE(480),
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
    STATE(104),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4508] = 24,
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
    STATE(98),
    1,
    sym_scoped_name,
    STATE(108),
    1,
    sym_mult_expr,
    STATE(111),
    1,
    sym_unary_expr,
    STATE(112),
    1,
    sym_literal,
    STATE(114),
    1,
    sym_unary_operator,
    STATE(117),
    1,
    sym_add_expr,
    STATE(120),
    1,
    sym_shift_expr,
    STATE(125),
    1,
    sym_and_expr,
    STATE(127),
    1,
    sym_xor_expr,
    STATE(131),
    1,
    sym_or_expr,
    STATE(386),
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
    STATE(104),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4585] = 24,
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
    STATE(74),
    1,
    sym_comment,
    STATE(98),
    1,
    sym_scoped_name,
    STATE(108),
    1,
    sym_mult_expr,
    STATE(111),
    1,
    sym_unary_expr,
    STATE(112),
    1,
    sym_literal,
    STATE(114),
    1,
    sym_unary_operator,
    STATE(117),
    1,
    sym_add_expr,
    STATE(120),
    1,
    sym_shift_expr,
    STATE(125),
    1,
    sym_and_expr,
    STATE(127),
    1,
    sym_xor_expr,
    STATE(131),
    1,
    sym_or_expr,
    STATE(393),
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
    STATE(104),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4662] = 24,
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
    STATE(98),
    1,
    sym_scoped_name,
    STATE(108),
    1,
    sym_mult_expr,
    STATE(111),
    1,
    sym_unary_expr,
    STATE(112),
    1,
    sym_literal,
    STATE(114),
    1,
    sym_unary_operator,
    STATE(117),
    1,
    sym_add_expr,
    STATE(120),
    1,
    sym_shift_expr,
    STATE(125),
    1,
    sym_and_expr,
    STATE(127),
    1,
    sym_xor_expr,
    STATE(131),
    1,
    sym_or_expr,
    STATE(359),
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
    STATE(104),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4739] = 24,
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
    STATE(98),
    1,
    sym_scoped_name,
    STATE(108),
    1,
    sym_mult_expr,
    STATE(111),
    1,
    sym_unary_expr,
    STATE(112),
    1,
    sym_literal,
    STATE(114),
    1,
    sym_unary_operator,
    STATE(117),
    1,
    sym_add_expr,
    STATE(120),
    1,
    sym_shift_expr,
    STATE(125),
    1,
    sym_and_expr,
    STATE(127),
    1,
    sym_xor_expr,
    STATE(131),
    1,
    sym_or_expr,
    STATE(450),
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
    STATE(104),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4816] = 18,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(51),
    1,
    anon_sym_long,
    ACTIONS(69),
    1,
    anon_sym_unsignedlong,
    ACTIONS(690),
    1,
    anon_sym_int32,
    ACTIONS(692),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(696),
    1,
    sym_signed_tiny_int,
    ACTIONS(698),
    1,
    anon_sym_uint32,
    STATE(77),
    1,
    sym_comment,
    STATE(426),
    1,
    sym_integer_type,
    STATE(427),
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
    ACTIONS(688),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(694),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(181),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(174),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(176),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    [4881] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(702),
    1,
    sym_preproc_directive,
    ACTIONS(705),
    1,
    anon_sym_POUNDdefine,
    STATE(91),
    1,
    sym_preproc_call,
    STATE(78),
    2,
    sym_comment,
    aux_sym_specification_repeat1,
    ACTIONS(700),
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
    [4920] = 22,
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
    STATE(98),
    1,
    sym_scoped_name,
    STATE(108),
    1,
    sym_mult_expr,
    STATE(111),
    1,
    sym_unary_expr,
    STATE(112),
    1,
    sym_literal,
    STATE(114),
    1,
    sym_unary_operator,
    STATE(117),
    1,
    sym_add_expr,
    STATE(120),
    1,
    sym_shift_expr,
    STATE(125),
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
    STATE(104),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4991] = 21,
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
    STATE(98),
    1,
    sym_scoped_name,
    STATE(108),
    1,
    sym_mult_expr,
    STATE(111),
    1,
    sym_unary_expr,
    STATE(112),
    1,
    sym_literal,
    STATE(114),
    1,
    sym_unary_operator,
    STATE(117),
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
    STATE(104),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5059] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(81),
    1,
    sym_comment,
    ACTIONS(707),
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
    [5091] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(82),
    1,
    sym_comment,
    ACTIONS(709),
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
    [5123] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(83),
    1,
    sym_comment,
    ACTIONS(711),
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
    [5155] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(84),
    1,
    sym_comment,
    ACTIONS(715),
    2,
    sym_preproc_directive,
    anon_sym_POUNDdefine,
    ACTIONS(713),
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
    [5188] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(85),
    1,
    sym_comment,
    ACTIONS(717),
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
    [5219] = 20,
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
    STATE(86),
    1,
    sym_comment,
    STATE(98),
    1,
    sym_scoped_name,
    STATE(108),
    1,
    sym_mult_expr,
    STATE(111),
    1,
    sym_unary_expr,
    STATE(112),
    1,
    sym_literal,
    STATE(114),
    1,
    sym_unary_operator,
    STATE(117),
    1,
    sym_add_expr,
    STATE(119),
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
    STATE(104),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5284] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(87),
    1,
    sym_comment,
    ACTIONS(719),
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
    [5315] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(88),
    1,
    sym_comment,
    ACTIONS(721),
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
    [5346] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(89),
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
    [5377] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(90),
    1,
    sym_comment,
    ACTIONS(727),
    2,
    sym_preproc_directive,
    anon_sym_POUNDdefine,
    ACTIONS(725),
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
    [5410] = 4,
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
    [5443] = 19,
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
    STATE(92),
    1,
    sym_comment,
    STATE(98),
    1,
    sym_scoped_name,
    STATE(108),
    1,
    sym_mult_expr,
    STATE(111),
    1,
    sym_unary_expr,
    STATE(112),
    1,
    sym_literal,
    STATE(114),
    1,
    sym_unary_operator,
    STATE(115),
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
    STATE(104),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5505] = 18,
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
    STATE(93),
    1,
    sym_comment,
    STATE(98),
    1,
    sym_scoped_name,
    STATE(109),
    1,
    sym_mult_expr,
    STATE(111),
    1,
    sym_unary_expr,
    STATE(112),
    1,
    sym_literal,
    STATE(114),
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
    STATE(104),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5564] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(94),
    1,
    sym_comment,
    ACTIONS(733),
    3,
    anon_sym_LT,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(735),
    16,
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
    anon_sym_COLON,
    anon_sym_SEMI,
    sym_identifier,
    anon_sym_RBRACK,
    [5594] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(95),
    1,
    sym_comment,
    ACTIONS(737),
    3,
    anon_sym_LT,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(739),
    16,
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
    anon_sym_COLON,
    anon_sym_SEMI,
    sym_identifier,
    anon_sym_RBRACK,
    [5624] = 17,
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
    STATE(98),
    1,
    sym_scoped_name,
    STATE(107),
    1,
    sym_unary_expr,
    STATE(112),
    1,
    sym_literal,
    STATE(114),
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
    STATE(104),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5680] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(745),
    1,
    sym_identifier,
    STATE(97),
    1,
    sym_comment,
    ACTIONS(741),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(743),
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
    [5710] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(745),
    1,
    sym_identifier,
    STATE(98),
    1,
    sym_comment,
    ACTIONS(747),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(749),
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
    [5740] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(99),
    1,
    sym_comment,
    ACTIONS(741),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(743),
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
    [5767] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(100),
    1,
    sym_comment,
    ACTIONS(751),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(753),
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
    [5794] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(101),
    1,
    sym_comment,
    ACTIONS(755),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(757),
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
    [5821] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(102),
    1,
    sym_comment,
    ACTIONS(759),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(761),
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
    [5848] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(103),
    1,
    sym_comment,
    ACTIONS(763),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(765),
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
    [5875] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(104),
    1,
    sym_comment,
    ACTIONS(767),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(769),
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
    [5902] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(105),
    1,
    sym_comment,
    ACTIONS(771),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(773),
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
    [5929] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(106),
    1,
    sym_comment,
    ACTIONS(775),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(777),
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
    [5956] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(107),
    1,
    sym_comment,
    ACTIONS(779),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(781),
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
    [5983] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(783),
    1,
    anon_sym_GT,
    ACTIONS(789),
    1,
    anon_sym_SLASH,
    STATE(108),
    1,
    sym_comment,
    ACTIONS(787),
    2,
    anon_sym_STAR,
    anon_sym_PERCENT,
    ACTIONS(785),
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
    [6014] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(789),
    1,
    anon_sym_SLASH,
    ACTIONS(791),
    1,
    anon_sym_GT,
    STATE(109),
    1,
    sym_comment,
    ACTIONS(787),
    2,
    anon_sym_STAR,
    anon_sym_PERCENT,
    ACTIONS(793),
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
    [6045] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(110),
    1,
    sym_comment,
    ACTIONS(795),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(797),
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
    [6072] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(111),
    1,
    sym_comment,
    ACTIONS(799),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(801),
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
    [6099] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(112),
    1,
    sym_comment,
    ACTIONS(747),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(749),
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
    [6126] = 9,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(803),
    1,
    anon_sym_sequence,
    ACTIONS(807),
    1,
    anon_sym_const,
    STATE(113),
    1,
    sym_comment,
    STATE(217),
    1,
    sym_formal_parameter,
    STATE(348),
    1,
    sym_formal_parameter_type,
    STATE(349),
    1,
    sym_formal_parameters,
    STATE(350),
    1,
    sym_sequence_type,
    ACTIONS(805),
    8,
    anon_sym_exception,
    anon_sym_interface,
    anon_sym_typename,
    anon_sym_valuetype,
    anon_sym_eventtype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    [6161] = 13,
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
    ACTIONS(809),
    1,
    anon_sym_LPAREN,
    STATE(97),
    1,
    sym_scoped_name,
    STATE(99),
    1,
    sym_literal,
    STATE(114),
    1,
    sym_comment,
    ACTIONS(250),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(104),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6204] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(811),
    1,
    anon_sym_GT,
    STATE(115),
    1,
    sym_comment,
    ACTIONS(815),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(813),
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
    [6230] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(745),
    1,
    sym_identifier,
    ACTIONS(747),
    1,
    anon_sym_SLASH,
    ACTIONS(817),
    1,
    anon_sym_GT,
    ACTIONS(819),
    1,
    anon_sym_COMMA,
    STATE(116),
    1,
    sym_comment,
    ACTIONS(749),
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
    [6260] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(821),
    1,
    anon_sym_GT,
    STATE(117),
    1,
    sym_comment,
    ACTIONS(815),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(823),
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
    [6286] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(803),
    1,
    anon_sym_sequence,
    ACTIONS(807),
    1,
    anon_sym_const,
    STATE(118),
    1,
    sym_comment,
    STATE(336),
    1,
    sym_formal_parameter,
    STATE(348),
    1,
    sym_formal_parameter_type,
    STATE(350),
    1,
    sym_sequence_type,
    ACTIONS(805),
    8,
    anon_sym_exception,
    anon_sym_interface,
    anon_sym_typename,
    anon_sym_valuetype,
    anon_sym_eventtype,
    anon_sym_struct,
    anon_sym_union,
    anon_sym_enum,
    [6318] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(825),
    1,
    anon_sym_GT,
    STATE(119),
    1,
    sym_comment,
    ACTIONS(829),
    2,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    ACTIONS(827),
    8,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [6342] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(831),
    1,
    anon_sym_GT,
    STATE(120),
    1,
    sym_comment,
    ACTIONS(829),
    2,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    ACTIONS(833),
    8,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [6366] = 11,
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
    ACTIONS(835),
    1,
    anon_sym_interface,
    ACTIONS(837),
    1,
    anon_sym_local,
    STATE(121),
    1,
    sym_comment,
    STATE(124),
    1,
    aux_sym_interface_def_repeat1,
    STATE(147),
    1,
    sym_interface_anno,
    STATE(432),
    1,
    sym_interface_header,
    STATE(154),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    [6401] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(122),
    1,
    sym_comment,
    ACTIONS(839),
    4,
    anon_sym_COLON_COLON,
    anon_sym_LPAREN,
    anon_sym_DQUOTE,
    anon_sym_SQUOTE,
    ACTIONS(841),
    5,
    anon_sym_L,
    anon_sym_TRUE,
    anon_sym_FALSE,
    sym_number_literal,
    sym_identifier,
    [6421] = 4,
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
    [6441] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(849),
    1,
    sym_dds_service,
    ACTIONS(852),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(855),
    1,
    anon_sym_ATDDSReplyTopic,
    STATE(147),
    1,
    sym_interface_anno,
    ACTIONS(847),
    2,
    anon_sym_interface,
    anon_sym_local,
    STATE(124),
    2,
    sym_comment,
    aux_sym_interface_def_repeat1,
    STATE(154),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    [6469] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(845),
    1,
    anon_sym_DOLLAR,
    STATE(125),
    1,
    sym_comment,
    ACTIONS(858),
    8,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [6489] = 10,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(860),
    1,
    anon_sym_COMMA,
    ACTIONS(862),
    1,
    anon_sym_SEMI,
    ACTIONS(864),
    1,
    anon_sym_getraises,
    ACTIONS(866),
    1,
    anon_sym_setraises,
    STATE(126),
    1,
    sym_comment,
    STATE(187),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    STATE(233),
    1,
    sym_get_excep_expr,
    STATE(371),
    1,
    sym_attr_raises_expr,
    STATE(373),
    1,
    sym_set_excep_expr,
    [6520] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(870),
    1,
    anon_sym_CARET,
    STATE(127),
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
    [6539] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(870),
    1,
    anon_sym_CARET,
    STATE(128),
    1,
    sym_comment,
    ACTIONS(872),
    7,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [6558] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(129),
    1,
    sym_comment,
    ACTIONS(874),
    7,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    anon_sym_SEMI,
    anon_sym_raises,
    anon_sym_getraises,
    anon_sym_setraises,
    anon_sym_default,
    [6574] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(876),
    1,
    anon_sym_RPAREN,
    ACTIONS(878),
    1,
    anon_sym_in,
    STATE(37),
    1,
    sym_param_attribute,
    STATE(130),
    1,
    sym_comment,
    STATE(221),
    1,
    sym_param_dcl,
    STATE(376),
    1,
    sym_parameter_dcls,
    ACTIONS(880),
    2,
    anon_sym_out,
    anon_sym_inout,
    [6600] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(884),
    1,
    anon_sym_PIPE,
    STATE(131),
    1,
    sym_comment,
    ACTIONS(882),
    6,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [6618] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(888),
    1,
    anon_sym_LBRACK,
    STATE(132),
    1,
    sym_comment,
    STATE(137),
    1,
    aux_sym_array_declarator_repeat1,
    STATE(172),
    1,
    sym_fixed_array_size,
    ACTIONS(886),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [6639] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(890),
    1,
    anon_sym_RBRACE,
    ACTIONS(892),
    1,
    anon_sym_default,
    ACTIONS(894),
    1,
    anon_sym_case,
    STATE(25),
    1,
    sym_case_label,
    STATE(133),
    1,
    sym_comment,
    STATE(135),
    1,
    aux_sym_union_def_repeat1,
    STATE(238),
    1,
    sym_case,
    [6664] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(892),
    1,
    anon_sym_default,
    ACTIONS(894),
    1,
    anon_sym_case,
    ACTIONS(896),
    1,
    anon_sym_RBRACE,
    STATE(25),
    1,
    sym_case_label,
    STATE(133),
    1,
    aux_sym_union_def_repeat1,
    STATE(134),
    1,
    sym_comment,
    STATE(238),
    1,
    sym_case,
    [6689] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(898),
    1,
    anon_sym_RBRACE,
    ACTIONS(900),
    1,
    anon_sym_default,
    ACTIONS(903),
    1,
    anon_sym_case,
    STATE(25),
    1,
    sym_case_label,
    STATE(238),
    1,
    sym_case,
    STATE(135),
    2,
    sym_comment,
    aux_sym_union_def_repeat1,
    [6712] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(906),
    1,
    anon_sym_RBRACE,
    ACTIONS(908),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(910),
    1,
    sym_identifier,
    STATE(136),
    1,
    sym_comment,
    STATE(179),
    1,
    aux_sym_enumerator_repeat1,
    STATE(207),
    1,
    sym_enumerator,
    STATE(308),
    1,
    sym_enum_modifier,
    [6737] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(914),
    1,
    anon_sym_LBRACK,
    STATE(172),
    1,
    sym_fixed_array_size,
    STATE(137),
    2,
    sym_comment,
    aux_sym_array_declarator_repeat1,
    ACTIONS(912),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [6756] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(888),
    1,
    anon_sym_LBRACK,
    STATE(132),
    1,
    aux_sym_array_declarator_repeat1,
    STATE(138),
    1,
    sym_comment,
    STATE(172),
    1,
    sym_fixed_array_size,
    ACTIONS(874),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [6777] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(908),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(910),
    1,
    sym_identifier,
    ACTIONS(917),
    1,
    anon_sym_RBRACE,
    STATE(139),
    1,
    sym_comment,
    STATE(179),
    1,
    aux_sym_enumerator_repeat1,
    STATE(203),
    1,
    sym_enumerator,
    STATE(308),
    1,
    sym_enum_modifier,
    [6802] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(140),
    1,
    sym_comment,
    ACTIONS(919),
    5,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    [6816] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(921),
    1,
    anon_sym_RBRACE,
    ACTIONS(923),
    1,
    anon_sym_bitfield,
    STATE(141),
    1,
    sym_comment,
    STATE(143),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(240),
    1,
    sym_bitfield_spec,
    STATE(327),
    1,
    sym_bitfield,
    [6838] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(925),
    1,
    sym_identifier,
    STATE(142),
    1,
    sym_comment,
    STATE(164),
    1,
    sym_declarator,
    STATE(241),
    1,
    sym_declarators,
    STATE(239),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [6858] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(927),
    1,
    anon_sym_RBRACE,
    ACTIONS(929),
    1,
    anon_sym_bitfield,
    STATE(240),
    1,
    sym_bitfield_spec,
    STATE(327),
    1,
    sym_bitfield,
    STATE(143),
    2,
    sym_comment,
    aux_sym_bitset_dcl_repeat1,
    [6878] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(923),
    1,
    anon_sym_bitfield,
    ACTIONS(932),
    1,
    anon_sym_RBRACE,
    STATE(141),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(144),
    1,
    sym_comment,
    STATE(240),
    1,
    sym_bitfield_spec,
    STATE(327),
    1,
    sym_bitfield,
    [6900] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(925),
    1,
    sym_identifier,
    STATE(145),
    1,
    sym_comment,
    STATE(164),
    1,
    sym_declarator,
    STATE(188),
    1,
    sym_declarators,
    STATE(239),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [6920] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(908),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(910),
    1,
    sym_identifier,
    STATE(146),
    1,
    sym_comment,
    STATE(179),
    1,
    aux_sym_enumerator_repeat1,
    STATE(308),
    1,
    sym_enum_modifier,
    STATE(316),
    1,
    sym_enumerator,
    [6942] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(147),
    1,
    sym_comment,
    ACTIONS(934),
    5,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    [6956] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(925),
    1,
    sym_identifier,
    STATE(148),
    1,
    sym_comment,
    STATE(209),
    1,
    sym_any_declarator,
    STATE(385),
    1,
    sym_any_declarators,
    STATE(267),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [6976] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(878),
    1,
    anon_sym_in,
    STATE(37),
    1,
    sym_param_attribute,
    STATE(149),
    1,
    sym_comment,
    STATE(290),
    1,
    sym_param_dcl,
    ACTIONS(880),
    2,
    anon_sym_out,
    anon_sym_inout,
    [6996] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(150),
    1,
    sym_comment,
    ACTIONS(936),
    5,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    [7010] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(923),
    1,
    anon_sym_bitfield,
    ACTIONS(938),
    1,
    anon_sym_RBRACE,
    STATE(143),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(151),
    1,
    sym_comment,
    STATE(240),
    1,
    sym_bitfield_spec,
    STATE(327),
    1,
    sym_bitfield,
    [7032] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(860),
    1,
    anon_sym_COMMA,
    ACTIONS(940),
    1,
    anon_sym_SEMI,
    ACTIONS(942),
    1,
    anon_sym_raises,
    STATE(152),
    1,
    sym_comment,
    STATE(202),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    STATE(409),
    1,
    sym_raises_expr,
    [7054] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(45),
    1,
    sym_final,
    ACTIONS(47),
    1,
    anon_sym_ATdata_representation,
    ACTIONS(944),
    1,
    anon_sym_struct,
    STATE(153),
    1,
    sym_comment,
    STATE(156),
    1,
    aux_sym_struct_def_repeat1,
    STATE(249),
    1,
    sym_data_representation,
    [7076] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(154),
    1,
    sym_comment,
    ACTIONS(946),
    5,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    [7090] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(923),
    1,
    anon_sym_bitfield,
    ACTIONS(948),
    1,
    anon_sym_RBRACE,
    STATE(151),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(155),
    1,
    sym_comment,
    STATE(240),
    1,
    sym_bitfield_spec,
    STATE(327),
    1,
    sym_bitfield,
    [7112] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(950),
    1,
    anon_sym_struct,
    ACTIONS(952),
    1,
    sym_final,
    ACTIONS(955),
    1,
    anon_sym_ATdata_representation,
    STATE(249),
    1,
    sym_data_representation,
    STATE(156),
    2,
    sym_comment,
    aux_sym_struct_def_repeat1,
    [7132] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(925),
    1,
    sym_identifier,
    STATE(157),
    1,
    sym_comment,
    STATE(227),
    1,
    sym_declarator,
    STATE(239),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [7149] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(158),
    1,
    sym_comment,
    ACTIONS(958),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [7162] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(745),
    1,
    sym_identifier,
    ACTIONS(960),
    1,
    anon_sym_COMMA,
    ACTIONS(962),
    1,
    anon_sym_RPAREN,
    STATE(159),
    1,
    sym_comment,
    STATE(259),
    1,
    aux_sym_raises_expr_repeat1,
    [7181] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(964),
    1,
    sym_identifier,
    STATE(160),
    1,
    sym_comment,
    STATE(243),
    1,
    sym_scoped_name,
    STATE(323),
    1,
    sym_interface_name,
    [7200] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(161),
    1,
    sym_comment,
    ACTIONS(966),
    4,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_LBRACK,
    [7213] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(925),
    1,
    sym_identifier,
    STATE(162),
    1,
    sym_comment,
    STATE(463),
    1,
    sym_declarator,
    STATE(239),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [7230] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(745),
    1,
    sym_identifier,
    ACTIONS(960),
    1,
    anon_sym_COMMA,
    ACTIONS(968),
    1,
    anon_sym_RPAREN,
    STATE(163),
    1,
    sym_comment,
    STATE(254),
    1,
    aux_sym_raises_expr_repeat1,
    [7249] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(970),
    1,
    anon_sym_COMMA,
    STATE(164),
    1,
    sym_comment,
    STATE(182),
    1,
    aux_sym_declarators_repeat1,
    ACTIONS(972),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    [7266] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(974),
    1,
    anon_sym_LBRACE,
    ACTIONS(976),
    1,
    anon_sym_COLON,
    ACTIONS(978),
    1,
    anon_sym_SEMI,
    STATE(165),
    1,
    sym_comment,
    STATE(391),
    1,
    sym_interface_inheritance_spec,
    [7285] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(980),
    1,
    anon_sym_LBRACE,
    ACTIONS(982),
    1,
    anon_sym_COLON,
    STATE(166),
    1,
    sym_comment,
    ACTIONS(984),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [7302] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(167),
    1,
    sym_comment,
    ACTIONS(986),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [7315] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(988),
    1,
    anon_sym_RPAREN,
    ACTIONS(990),
    1,
    anon_sym_XCDR,
    ACTIONS(993),
    1,
    anon_sym_XCDR2,
    STATE(168),
    2,
    sym_comment,
    aux_sym_data_representation_repeat1,
    [7332] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(996),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(999),
    1,
    sym_identifier,
    STATE(308),
    1,
    sym_enum_modifier,
    STATE(169),
    2,
    sym_comment,
    aux_sym_enumerator_repeat1,
    [7349] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(925),
    1,
    sym_identifier,
    STATE(170),
    1,
    sym_comment,
    STATE(304),
    1,
    sym_any_declarator,
    STATE(267),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [7366] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(171),
    1,
    sym_comment,
    ACTIONS(1001),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [7379] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(172),
    1,
    sym_comment,
    ACTIONS(1003),
    4,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_LBRACK,
    [7392] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(173),
    1,
    sym_comment,
    ACTIONS(1005),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [7405] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(174),
    1,
    sym_comment,
    ACTIONS(1007),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [7418] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1009),
    1,
    anon_sym_RPAREN,
    ACTIONS(1011),
    1,
    anon_sym_XCDR,
    ACTIONS(1013),
    1,
    anon_sym_XCDR2,
    STATE(168),
    1,
    aux_sym_data_representation_repeat1,
    STATE(175),
    1,
    sym_comment,
    [7437] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(176),
    1,
    sym_comment,
    ACTIONS(1015),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [7450] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(177),
    1,
    sym_comment,
    ACTIONS(1017),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [7463] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(178),
    1,
    sym_comment,
    ACTIONS(1019),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [7476] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(908),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(1021),
    1,
    sym_identifier,
    STATE(169),
    1,
    aux_sym_enumerator_repeat1,
    STATE(179),
    1,
    sym_comment,
    STATE(308),
    1,
    sym_enum_modifier,
    [7495] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(180),
    1,
    sym_comment,
    ACTIONS(1023),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [7508] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(181),
    1,
    sym_comment,
    ACTIONS(1025),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [7521] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(970),
    1,
    anon_sym_COMMA,
    STATE(182),
    1,
    sym_comment,
    STATE(183),
    1,
    aux_sym_declarators_repeat1,
    ACTIONS(1027),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    [7538] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1029),
    1,
    anon_sym_COMMA,
    ACTIONS(1032),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    STATE(183),
    2,
    sym_comment,
    aux_sym_declarators_repeat1,
    [7553] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(964),
    1,
    sym_identifier,
    STATE(184),
    1,
    sym_comment,
    STATE(211),
    1,
    sym_interface_name,
    STATE(243),
    1,
    sym_scoped_name,
    [7572] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1034),
    1,
    anon_sym_LT,
    STATE(185),
    1,
    sym_comment,
    ACTIONS(1036),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [7587] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(186),
    1,
    sym_comment,
    ACTIONS(1038),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [7599] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(860),
    1,
    anon_sym_COMMA,
    ACTIONS(1040),
    1,
    anon_sym_SEMI,
    STATE(187),
    1,
    sym_comment,
    STATE(216),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    [7615] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1042),
    1,
    anon_sym_SEMI,
    ACTIONS(1044),
    1,
    anon_sym_default,
    STATE(188),
    1,
    sym_comment,
    STATE(389),
    1,
    sym_default,
    [7631] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(964),
    1,
    sym_identifier,
    STATE(189),
    1,
    sym_comment,
    STATE(314),
    1,
    sym_scoped_name,
    [7647] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1046),
    1,
    anon_sym_RBRACE,
    ACTIONS(1048),
    1,
    sym_identifier,
    STATE(190),
    1,
    sym_comment,
    STATE(246),
    1,
    sym_bit_value,
    [7663] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(964),
    1,
    sym_identifier,
    STATE(191),
    1,
    sym_comment,
    STATE(322),
    1,
    sym_scoped_name,
    [7679] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(974),
    1,
    anon_sym_LBRACE,
    ACTIONS(976),
    1,
    anon_sym_COLON,
    STATE(192),
    1,
    sym_comment,
    STATE(391),
    1,
    sym_interface_inheritance_spec,
    [7695] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(964),
    1,
    sym_identifier,
    STATE(193),
    1,
    sym_comment,
    STATE(295),
    1,
    sym_scoped_name,
    [7711] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1011),
    1,
    anon_sym_XCDR,
    ACTIONS(1013),
    1,
    anon_sym_XCDR2,
    STATE(175),
    1,
    aux_sym_data_representation_repeat1,
    STATE(194),
    1,
    sym_comment,
    [7727] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(195),
    1,
    sym_comment,
    ACTIONS(819),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [7739] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(196),
    1,
    sym_comment,
    ACTIONS(1050),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [7751] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(197),
    1,
    sym_comment,
    ACTIONS(1052),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [7763] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(198),
    1,
    sym_comment,
    ACTIONS(1054),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [7775] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(199),
    1,
    sym_comment,
    ACTIONS(1056),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [7787] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(200),
    1,
    sym_comment,
    ACTIONS(1058),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [7799] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1060),
    1,
    anon_sym_GT,
    ACTIONS(1062),
    1,
    anon_sym_COMMA,
    STATE(201),
    1,
    sym_comment,
    STATE(248),
    1,
    aux_sym_actual_parameters_repeat1,
    [7815] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(860),
    1,
    anon_sym_COMMA,
    ACTIONS(1064),
    1,
    anon_sym_SEMI,
    STATE(202),
    1,
    sym_comment,
    STATE(216),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    [7831] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1066),
    1,
    anon_sym_COMMA,
    ACTIONS(1068),
    1,
    anon_sym_RBRACE,
    STATE(203),
    1,
    sym_comment,
    STATE(219),
    1,
    aux_sym_enum_dcl_repeat1,
    [7847] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(204),
    1,
    sym_comment,
    ACTIONS(1070),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [7859] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1072),
    1,
    anon_sym_COMMA,
    ACTIONS(1075),
    1,
    anon_sym_RBRACE,
    STATE(205),
    2,
    sym_comment,
    aux_sym_enum_dcl_repeat1,
    [7873] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1077),
    1,
    sym_identifier,
    STATE(152),
    1,
    sym_simple_declarator,
    STATE(206),
    1,
    sym_comment,
    STATE(369),
    1,
    sym_readonly_attr_declarator,
    [7889] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(917),
    1,
    anon_sym_RBRACE,
    ACTIONS(1066),
    1,
    anon_sym_COMMA,
    STATE(207),
    1,
    sym_comment,
    STATE(231),
    1,
    aux_sym_enum_dcl_repeat1,
    [7905] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1079),
    1,
    anon_sym_COMMA,
    ACTIONS(1082),
    1,
    anon_sym_SEMI,
    STATE(208),
    2,
    sym_comment,
    aux_sym_any_declarators_repeat1,
    [7919] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1084),
    1,
    anon_sym_COMMA,
    ACTIONS(1086),
    1,
    anon_sym_SEMI,
    STATE(209),
    1,
    sym_comment,
    STATE(223),
    1,
    aux_sym_any_declarators_repeat1,
    [7935] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1090),
    1,
    anon_sym_XCDR,
    STATE(210),
    1,
    sym_comment,
    ACTIONS(1088),
    2,
    anon_sym_RPAREN,
    anon_sym_XCDR2,
    [7949] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1092),
    1,
    anon_sym_COMMA,
    ACTIONS(1094),
    1,
    anon_sym_LBRACE,
    STATE(211),
    1,
    sym_comment,
    STATE(247),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    [7965] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1096),
    1,
    anon_sym_COMMA,
    ACTIONS(1099),
    1,
    anon_sym_LBRACE,
    STATE(212),
    2,
    sym_comment,
    aux_sym_interface_inheritance_spec_repeat1,
    [7979] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(213),
    1,
    sym_comment,
    ACTIONS(1101),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [7991] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1103),
    1,
    anon_sym_SEMI,
    ACTIONS(1105),
    1,
    sym_identifier,
    STATE(214),
    2,
    sym_comment,
    aux_sym_bitfield_repeat1,
    [8005] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(964),
    1,
    sym_identifier,
    STATE(163),
    1,
    sym_scoped_name,
    STATE(215),
    1,
    sym_comment,
    [8021] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1108),
    1,
    anon_sym_COMMA,
    ACTIONS(1111),
    1,
    anon_sym_SEMI,
    STATE(216),
    2,
    sym_comment,
    aux_sym_readonly_attr_declarator_repeat1,
    [8035] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1113),
    1,
    anon_sym_GT,
    ACTIONS(1115),
    1,
    anon_sym_COMMA,
    STATE(217),
    1,
    sym_comment,
    STATE(262),
    1,
    aux_sym_formal_parameters_repeat1,
    [8051] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(218),
    1,
    sym_comment,
    ACTIONS(1117),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [8063] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1066),
    1,
    anon_sym_COMMA,
    ACTIONS(1119),
    1,
    anon_sym_RBRACE,
    STATE(205),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(219),
    1,
    sym_comment,
    [8079] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1121),
    1,
    anon_sym_COMMA,
    ACTIONS(1124),
    1,
    anon_sym_RBRACE,
    STATE(220),
    2,
    sym_comment,
    aux_sym_bitmask_dcl_repeat1,
    [8093] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1126),
    1,
    anon_sym_COMMA,
    ACTIONS(1128),
    1,
    anon_sym_RPAREN,
    STATE(221),
    1,
    sym_comment,
    STATE(235),
    1,
    aux_sym_parameter_dcls_repeat1,
    [8109] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(222),
    1,
    sym_comment,
    ACTIONS(735),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [8121] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1084),
    1,
    anon_sym_COMMA,
    ACTIONS(1130),
    1,
    anon_sym_SEMI,
    STATE(208),
    1,
    aux_sym_any_declarators_repeat1,
    STATE(223),
    1,
    sym_comment,
    [8137] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(224),
    1,
    sym_comment,
    ACTIONS(1132),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [8149] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(942),
    1,
    anon_sym_raises,
    ACTIONS(1134),
    1,
    anon_sym_SEMI,
    STATE(225),
    1,
    sym_comment,
    STATE(417),
    1,
    sym_raises_expr,
    [8165] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(226),
    1,
    sym_comment,
    ACTIONS(1136),
    3,
    anon_sym_struct,
    sym_final,
    anon_sym_ATdata_representation,
    [8177] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(227),
    1,
    sym_comment,
    ACTIONS(1032),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [8189] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1138),
    1,
    anon_sym_GT,
    ACTIONS(1140),
    1,
    anon_sym_COMMA,
    STATE(228),
    2,
    sym_comment,
    aux_sym_formal_parameters_repeat1,
    [8203] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1077),
    1,
    sym_identifier,
    STATE(126),
    1,
    sym_simple_declarator,
    STATE(229),
    1,
    sym_comment,
    STATE(410),
    1,
    sym_attr_declarator,
    [8219] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(942),
    1,
    anon_sym_raises,
    ACTIONS(1143),
    1,
    anon_sym_SEMI,
    STATE(230),
    1,
    sym_comment,
    STATE(442),
    1,
    sym_raises_expr,
    [8235] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1066),
    1,
    anon_sym_COMMA,
    ACTIONS(1068),
    1,
    anon_sym_RBRACE,
    STATE(205),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(231),
    1,
    sym_comment,
    [8251] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1145),
    1,
    anon_sym_SEMI,
    ACTIONS(1147),
    1,
    anon_sym_switch,
    ACTIONS(1149),
    1,
    sym_identifier,
    STATE(232),
    1,
    sym_comment,
    [8267] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(866),
    1,
    anon_sym_setraises,
    ACTIONS(1151),
    1,
    anon_sym_SEMI,
    STATE(233),
    1,
    sym_comment,
    STATE(415),
    1,
    sym_set_excep_expr,
    [8283] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(739),
    1,
    sym_identifier,
    ACTIONS(1153),
    1,
    anon_sym_LT,
    ACTIONS(1155),
    1,
    anon_sym_LBRACE,
    STATE(234),
    1,
    sym_comment,
    [8299] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1126),
    1,
    anon_sym_COMMA,
    ACTIONS(1157),
    1,
    anon_sym_RPAREN,
    STATE(235),
    1,
    sym_comment,
    STATE(244),
    1,
    aux_sym_parameter_dcls_repeat1,
    [8315] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(964),
    1,
    sym_identifier,
    STATE(236),
    1,
    sym_comment,
    STATE(315),
    1,
    sym_scoped_name,
    [8331] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(237),
    1,
    sym_comment,
    ACTIONS(1159),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [8343] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(238),
    1,
    sym_comment,
    ACTIONS(1161),
    3,
    anon_sym_RBRACE,
    anon_sym_default,
    anon_sym_case,
    [8355] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(239),
    1,
    sym_comment,
    ACTIONS(1163),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [8367] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1165),
    1,
    anon_sym_SEMI,
    ACTIONS(1167),
    1,
    sym_identifier,
    STATE(240),
    1,
    sym_comment,
    STATE(252),
    1,
    aux_sym_bitfield_repeat1,
    [8383] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1044),
    1,
    anon_sym_default,
    ACTIONS(1169),
    1,
    anon_sym_SEMI,
    STATE(241),
    1,
    sym_comment,
    STATE(345),
    1,
    sym_default,
    [8399] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(964),
    1,
    sym_identifier,
    STATE(159),
    1,
    sym_scoped_name,
    STATE(242),
    1,
    sym_comment,
    [8415] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(745),
    1,
    sym_identifier,
    STATE(243),
    1,
    sym_comment,
    ACTIONS(1171),
    2,
    anon_sym_COMMA,
    anon_sym_LBRACE,
    [8429] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1173),
    1,
    anon_sym_COMMA,
    ACTIONS(1176),
    1,
    anon_sym_RPAREN,
    STATE(244),
    2,
    sym_comment,
    aux_sym_parameter_dcls_repeat1,
    [8443] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(245),
    1,
    sym_comment,
    ACTIONS(1178),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [8455] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1180),
    1,
    anon_sym_COMMA,
    ACTIONS(1182),
    1,
    anon_sym_RBRACE,
    STATE(246),
    1,
    sym_comment,
    STATE(258),
    1,
    aux_sym_bitmask_dcl_repeat1,
    [8471] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1092),
    1,
    anon_sym_COMMA,
    ACTIONS(1184),
    1,
    anon_sym_LBRACE,
    STATE(212),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    STATE(247),
    1,
    sym_comment,
    [8487] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1062),
    1,
    anon_sym_COMMA,
    ACTIONS(1186),
    1,
    anon_sym_GT,
    STATE(248),
    1,
    sym_comment,
    STATE(251),
    1,
    aux_sym_actual_parameters_repeat1,
    [8503] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(249),
    1,
    sym_comment,
    ACTIONS(1188),
    3,
    anon_sym_struct,
    sym_final,
    anon_sym_ATdata_representation,
    [8515] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(250),
    1,
    sym_comment,
    ACTIONS(1190),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [8527] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1192),
    1,
    anon_sym_GT,
    ACTIONS(1194),
    1,
    anon_sym_COMMA,
    STATE(251),
    2,
    sym_comment,
    aux_sym_actual_parameters_repeat1,
    [8541] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1167),
    1,
    sym_identifier,
    ACTIONS(1197),
    1,
    anon_sym_SEMI,
    STATE(214),
    1,
    aux_sym_bitfield_repeat1,
    STATE(252),
    1,
    sym_comment,
    [8557] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(964),
    1,
    sym_identifier,
    STATE(253),
    1,
    sym_comment,
    STATE(260),
    1,
    sym_scoped_name,
    [8573] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(960),
    1,
    anon_sym_COMMA,
    ACTIONS(1199),
    1,
    anon_sym_RPAREN,
    STATE(254),
    1,
    sym_comment,
    STATE(261),
    1,
    aux_sym_raises_expr_repeat1,
    [8589] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1201),
    1,
    anon_sym_GT,
    ACTIONS(1203),
    1,
    anon_sym_COMMA,
    STATE(255),
    1,
    sym_comment,
    STATE(263),
    1,
    aux_sym_formal_parameter_names_repeat1,
    [8605] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(256),
    1,
    sym_comment,
    ACTIONS(1205),
    3,
    anon_sym_RBRACE,
    anon_sym_default,
    anon_sym_case,
    [8617] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(1207),
    1,
    sym_identifier,
    STATE(257),
    1,
    sym_comment,
    STATE(299),
    1,
    sym_scoped_name,
    [8633] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1180),
    1,
    anon_sym_COMMA,
    ACTIONS(1209),
    1,
    anon_sym_RBRACE,
    STATE(220),
    1,
    aux_sym_bitmask_dcl_repeat1,
    STATE(258),
    1,
    sym_comment,
    [8649] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(960),
    1,
    anon_sym_COMMA,
    ACTIONS(1211),
    1,
    anon_sym_RPAREN,
    STATE(259),
    1,
    sym_comment,
    STATE(261),
    1,
    aux_sym_raises_expr_repeat1,
    [8665] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(745),
    1,
    sym_identifier,
    STATE(260),
    1,
    sym_comment,
    ACTIONS(1213),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [8679] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1213),
    1,
    anon_sym_RPAREN,
    ACTIONS(1215),
    1,
    anon_sym_COMMA,
    STATE(261),
    2,
    sym_comment,
    aux_sym_raises_expr_repeat1,
    [8693] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1115),
    1,
    anon_sym_COMMA,
    ACTIONS(1218),
    1,
    anon_sym_GT,
    STATE(228),
    1,
    aux_sym_formal_parameters_repeat1,
    STATE(262),
    1,
    sym_comment,
    [8709] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1203),
    1,
    anon_sym_COMMA,
    ACTIONS(1220),
    1,
    anon_sym_GT,
    STATE(263),
    1,
    sym_comment,
    STATE(264),
    1,
    aux_sym_formal_parameter_names_repeat1,
    [8725] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1222),
    1,
    anon_sym_GT,
    ACTIONS(1224),
    1,
    anon_sym_COMMA,
    STATE(264),
    2,
    sym_comment,
    aux_sym_formal_parameter_names_repeat1,
    [8739] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(265),
    1,
    sym_comment,
    ACTIONS(739),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [8751] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1227),
    1,
    sym_identifier,
    STATE(266),
    1,
    sym_comment,
    ACTIONS(819),
    2,
    anon_sym_GT,
    anon_sym_COMMA,
    [8765] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(267),
    1,
    sym_comment,
    ACTIONS(1229),
    2,
    anon_sym_COMMA,
    anon_sym_SEMI,
    [8776] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(268),
    1,
    sym_comment,
    ACTIONS(1231),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [8787] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(269),
    1,
    sym_comment,
    ACTIONS(1233),
    2,
    anon_sym_GT,
    anon_sym_COMMA,
    [8798] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(270),
    1,
    sym_comment,
    ACTIONS(1235),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [8809] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(271),
    1,
    sym_comment,
    ACTIONS(1237),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [8820] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1048),
    1,
    sym_identifier,
    STATE(272),
    1,
    sym_comment,
    STATE(330),
    1,
    sym_bit_value,
    [8833] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(745),
    1,
    sym_identifier,
    ACTIONS(819),
    1,
    anon_sym_COMMA,
    STATE(273),
    1,
    sym_comment,
    [8846] = 4,
    ACTIONS(1239),
    1,
    aux_sym_preproc_call_token1,
    ACTIONS(1241),
    1,
    sym_preproc_arg,
    ACTIONS(1243),
    1,
    anon_sym_SLASH_SLASH,
    STATE(274),
    1,
    sym_comment,
    [8859] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(835),
    1,
    anon_sym_interface,
    STATE(275),
    1,
    sym_comment,
    STATE(432),
    1,
    sym_interface_header,
    [8872] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(276),
    1,
    sym_comment,
    ACTIONS(1222),
    2,
    anon_sym_GT,
    anon_sym_COMMA,
    [8883] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(277),
    1,
    sym_comment,
    ACTIONS(1245),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [8894] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1077),
    1,
    sym_identifier,
    STATE(278),
    1,
    sym_comment,
    STATE(406),
    1,
    sym_simple_declarator,
    [8907] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(279),
    1,
    sym_comment,
    ACTIONS(1247),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [8918] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(280),
    1,
    sym_comment,
    ACTIONS(1249),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [8929] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1251),
    1,
    sym_identifier,
    STATE(281),
    1,
    sym_comment,
    STATE(461),
    1,
    sym_formal_parameter_names,
    [8942] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(282),
    1,
    sym_comment,
    ACTIONS(1253),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [8953] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(283),
    1,
    sym_comment,
    ACTIONS(1255),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [8964] = 3,
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
    [8975] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(285),
    1,
    sym_comment,
    ACTIONS(1259),
    2,
    anon_sym_RBRACE,
    anon_sym_bitfield,
    [8986] = 3,
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
    [8997] = 3,
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
    [9008] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(288),
    1,
    sym_comment,
    ACTIONS(1265),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [9019] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(745),
    1,
    sym_identifier,
    ACTIONS(1267),
    1,
    anon_sym_RPAREN,
    STATE(289),
    1,
    sym_comment,
    [9032] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(290),
    1,
    sym_comment,
    ACTIONS(1176),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [9043] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(291),
    1,
    sym_comment,
    ACTIONS(1269),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9054] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(292),
    1,
    sym_comment,
    ACTIONS(1271),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9065] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1273),
    1,
    anon_sym_LBRACE,
    ACTIONS(1275),
    1,
    anon_sym_COLON,
    STATE(293),
    1,
    sym_comment,
    [9078] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(294),
    1,
    sym_comment,
    ACTIONS(1277),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [9089] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(745),
    1,
    sym_identifier,
    ACTIONS(1279),
    1,
    anon_sym_LT,
    STATE(295),
    1,
    sym_comment,
    [9102] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(296),
    1,
    sym_comment,
    ACTIONS(1281),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9113] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(297),
    1,
    sym_comment,
    ACTIONS(1283),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9124] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1077),
    1,
    sym_identifier,
    STATE(288),
    1,
    sym_simple_declarator,
    STATE(298),
    1,
    sym_comment,
    [9137] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(745),
    1,
    sym_identifier,
    ACTIONS(1285),
    1,
    anon_sym_LT,
    STATE(299),
    1,
    sym_comment,
    [9150] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(300),
    1,
    sym_comment,
    ACTIONS(1287),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [9161] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(301),
    1,
    sym_comment,
    ACTIONS(1111),
    2,
    anon_sym_COMMA,
    anon_sym_SEMI,
    [9172] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(302),
    1,
    sym_comment,
    ACTIONS(1289),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9183] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(835),
    1,
    anon_sym_interface,
    STATE(303),
    1,
    sym_comment,
    STATE(370),
    1,
    sym_interface_header,
    [9196] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(304),
    1,
    sym_comment,
    ACTIONS(1082),
    2,
    anon_sym_COMMA,
    anon_sym_SEMI,
    [9207] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(305),
    1,
    sym_comment,
    ACTIONS(1291),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9218] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(306),
    1,
    sym_comment,
    ACTIONS(1293),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9229] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(307),
    1,
    sym_comment,
    ACTIONS(1295),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9240] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(308),
    1,
    sym_comment,
    ACTIONS(1297),
    2,
    anon_sym_ATdefault_literal,
    sym_identifier,
    [9251] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1077),
    1,
    sym_identifier,
    STATE(301),
    1,
    sym_simple_declarator,
    STATE(309),
    1,
    sym_comment,
    [9264] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(310),
    1,
    sym_comment,
    ACTIONS(1299),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [9275] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(311),
    1,
    sym_comment,
    ACTIONS(1301),
    2,
    anon_sym_ATdefault_literal,
    sym_identifier,
    [9286] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(312),
    1,
    sym_comment,
    ACTIONS(1303),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9297] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1305),
    1,
    anon_sym_LPAREN,
    STATE(300),
    1,
    sym_exception_list,
    STATE(313),
    1,
    sym_comment,
    [9310] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(745),
    1,
    sym_identifier,
    ACTIONS(1307),
    1,
    anon_sym_LBRACE,
    STATE(314),
    1,
    sym_comment,
    [9323] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(745),
    1,
    sym_identifier,
    ACTIONS(1309),
    1,
    anon_sym_LBRACE,
    STATE(315),
    1,
    sym_comment,
    [9336] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(316),
    1,
    sym_comment,
    ACTIONS(1075),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [9347] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(317),
    1,
    sym_comment,
    ACTIONS(1311),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9358] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(318),
    1,
    sym_comment,
    ACTIONS(1313),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9369] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(319),
    1,
    sym_comment,
    ACTIONS(1315),
    2,
    anon_sym_GT,
    anon_sym_COMMA,
    [9380] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(320),
    1,
    sym_comment,
    ACTIONS(1317),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [9391] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(321),
    1,
    sym_comment,
    ACTIONS(1319),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9402] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(745),
    1,
    sym_identifier,
    ACTIONS(1321),
    1,
    anon_sym_LBRACE,
    STATE(322),
    1,
    sym_comment,
    [9415] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(323),
    1,
    sym_comment,
    ACTIONS(1099),
    2,
    anon_sym_COMMA,
    anon_sym_LBRACE,
    [9426] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1323),
    1,
    anon_sym_DQUOTE,
    ACTIONS(1325),
    1,
    anon_sym_SQUOTE,
    STATE(324),
    1,
    sym_comment,
    [9439] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1327),
    1,
    anon_sym_GT,
    ACTIONS(1329),
    1,
    anon_sym_COMMA,
    STATE(325),
    1,
    sym_comment,
    [9452] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(326),
    1,
    sym_comment,
    ACTIONS(1331),
    2,
    anon_sym_RBRACE,
    anon_sym_bitfield,
    [9463] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(327),
    1,
    sym_comment,
    ACTIONS(1333),
    2,
    anon_sym_RBRACE,
    anon_sym_bitfield,
    [9474] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(328),
    1,
    sym_comment,
    ACTIONS(1335),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9485] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1337),
    1,
    anon_sym_LBRACE,
    ACTIONS(1339),
    1,
    anon_sym_COLON,
    STATE(329),
    1,
    sym_comment,
    [9498] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(330),
    1,
    sym_comment,
    ACTIONS(1124),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [9509] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(331),
    1,
    sym_comment,
    ACTIONS(1341),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9520] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1305),
    1,
    anon_sym_LPAREN,
    STATE(332),
    1,
    sym_comment,
    STATE(414),
    1,
    sym_exception_list,
    [9533] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1343),
    1,
    anon_sym_SEMI,
    ACTIONS(1345),
    1,
    anon_sym_default,
    STATE(333),
    1,
    sym_comment,
    [9546] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1347),
    1,
    anon_sym_LT,
    ACTIONS(1349),
    1,
    sym_identifier,
    STATE(334),
    1,
    sym_comment,
    [9559] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(335),
    1,
    sym_comment,
    ACTIONS(1192),
    2,
    anon_sym_GT,
    anon_sym_COMMA,
    [9570] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(336),
    1,
    sym_comment,
    ACTIONS(1138),
    2,
    anon_sym_GT,
    anon_sym_COMMA,
    [9581] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1351),
    1,
    anon_sym_GT,
    ACTIONS(1353),
    1,
    anon_sym_COMMA,
    STATE(337),
    1,
    sym_comment,
    [9594] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1077),
    1,
    sym_identifier,
    STATE(333),
    1,
    sym_simple_declarator,
    STATE(338),
    1,
    sym_comment,
    [9607] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1355),
    1,
    sym_identifier,
    STATE(339),
    1,
    sym_comment,
    [9617] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1357),
    1,
    sym_identifier,
    STATE(340),
    1,
    sym_comment,
    [9627] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1359),
    1,
    anon_sym_RBRACE,
    STATE(341),
    1,
    sym_comment,
    [9637] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1361),
    1,
    anon_sym_DQUOTE,
    STATE(342),
    1,
    sym_comment,
    [9647] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1363),
    1,
    anon_sym_GT,
    STATE(343),
    1,
    sym_comment,
    [9657] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1365),
    1,
    aux_sym_char_literal_token1,
    STATE(344),
    1,
    sym_comment,
    [9667] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1367),
    1,
    anon_sym_SEMI,
    STATE(345),
    1,
    sym_comment,
    [9677] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1369),
    1,
    aux_sym_string_literal_token1,
    STATE(346),
    1,
    sym_comment,
    [9687] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1371),
    1,
    anon_sym_SEMI,
    STATE(347),
    1,
    sym_comment,
    [9697] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1373),
    1,
    sym_identifier,
    STATE(348),
    1,
    sym_comment,
    [9707] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1375),
    1,
    anon_sym_GT,
    STATE(349),
    1,
    sym_comment,
    [9717] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1349),
    1,
    sym_identifier,
    STATE(350),
    1,
    sym_comment,
    [9727] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1377),
    1,
    anon_sym_SEMI,
    STATE(351),
    1,
    sym_comment,
    [9737] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1379),
    1,
    sym_identifier,
    STATE(352),
    1,
    sym_comment,
    [9747] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1381),
    1,
    anon_sym_DQUOTE,
    STATE(353),
    1,
    sym_comment,
    [9757] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1383),
    1,
    anon_sym_SQUOTE,
    STATE(354),
    1,
    sym_comment,
    [9767] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1357),
    1,
    sym_identifier,
    STATE(355),
    1,
    sym_comment,
    [9777] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1385),
    1,
    anon_sym_SEMI,
    STATE(356),
    1,
    sym_comment,
    [9787] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1387),
    1,
    sym_identifier,
    STATE(357),
    1,
    sym_comment,
    [9797] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1389),
    1,
    anon_sym_LT,
    STATE(358),
    1,
    sym_comment,
    [9807] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1391),
    1,
    anon_sym_RPAREN,
    STATE(359),
    1,
    sym_comment,
    [9817] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1393),
    1,
    anon_sym_SEMI,
    STATE(360),
    1,
    sym_comment,
    [9827] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1395),
    1,
    anon_sym_SEMI,
    STATE(361),
    1,
    sym_comment,
    [9837] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(93),
    1,
    anon_sym_RBRACE,
    STATE(362),
    1,
    sym_comment,
    [9847] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1397),
    1,
    anon_sym_LBRACE,
    STATE(363),
    1,
    sym_comment,
    [9857] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1399),
    1,
    anon_sym_SEMI,
    STATE(364),
    1,
    sym_comment,
    [9867] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1401),
    1,
    sym_identifier,
    STATE(365),
    1,
    sym_comment,
    [9877] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1403),
    1,
    anon_sym_GT,
    STATE(366),
    1,
    sym_comment,
    [9887] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1405),
    1,
    anon_sym_LPAREN_DQUOTE,
    STATE(367),
    1,
    sym_comment,
    [9897] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1407),
    1,
    anon_sym_SEMI,
    STATE(368),
    1,
    sym_comment,
    [9907] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1409),
    1,
    anon_sym_SEMI,
    STATE(369),
    1,
    sym_comment,
    [9917] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1411),
    1,
    anon_sym_LBRACE,
    STATE(370),
    1,
    sym_comment,
    [9927] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1040),
    1,
    anon_sym_SEMI,
    STATE(371),
    1,
    sym_comment,
    [9937] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1413),
    1,
    anon_sym_LBRACE,
    STATE(372),
    1,
    sym_comment,
    [9947] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1151),
    1,
    anon_sym_SEMI,
    STATE(373),
    1,
    sym_comment,
    [9957] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1415),
    1,
    anon_sym_SEMI,
    STATE(374),
    1,
    sym_comment,
    [9967] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(119),
    1,
    anon_sym_RBRACE,
    STATE(375),
    1,
    sym_comment,
    [9977] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1417),
    1,
    anon_sym_RPAREN,
    STATE(376),
    1,
    sym_comment,
    [9987] = 3,
    ACTIONS(1243),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1419),
    1,
    aux_sym_comment_token1,
    STATE(377),
    1,
    sym_comment,
    [9997] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1421),
    1,
    anon_sym_attribute,
    STATE(378),
    1,
    sym_comment,
    [10007] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1423),
    1,
    sym_identifier,
    STATE(379),
    1,
    sym_comment,
    [10017] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1425),
    1,
    anon_sym_SEMI,
    STATE(380),
    1,
    sym_comment,
    [10027] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1427),
    1,
    anon_sym_SEMI,
    STATE(381),
    1,
    sym_comment,
    [10037] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1429),
    1,
    anon_sym_SEMI,
    STATE(382),
    1,
    sym_comment,
    [10047] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1431),
    1,
    anon_sym_EQ,
    STATE(383),
    1,
    sym_comment,
    [10057] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1433),
    1,
    anon_sym_EQ,
    STATE(384),
    1,
    sym_comment,
    [10067] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1435),
    1,
    anon_sym_SEMI,
    STATE(385),
    1,
    sym_comment,
    [10077] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1437),
    1,
    anon_sym_SEMI,
    STATE(386),
    1,
    sym_comment,
    [10087] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1439),
    1,
    anon_sym_EQ,
    STATE(387),
    1,
    sym_comment,
    [10097] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1441),
    1,
    anon_sym_LPAREN,
    STATE(388),
    1,
    sym_comment,
    [10107] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1443),
    1,
    anon_sym_SEMI,
    STATE(389),
    1,
    sym_comment,
    [10117] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1445),
    1,
    anon_sym_RPAREN,
    STATE(390),
    1,
    sym_comment,
    [10127] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1447),
    1,
    anon_sym_LBRACE,
    STATE(391),
    1,
    sym_comment,
    [10137] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1449),
    1,
    anon_sym_RPAREN,
    STATE(392),
    1,
    sym_comment,
    [10147] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1451),
    1,
    anon_sym_SEMI,
    STATE(393),
    1,
    sym_comment,
    [10157] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1453),
    1,
    anon_sym_SEMI,
    STATE(394),
    1,
    sym_comment,
    [10167] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1455),
    1,
    sym_identifier,
    STATE(395),
    1,
    sym_comment,
    [10177] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1457),
    1,
    anon_sym_GT,
    STATE(396),
    1,
    sym_comment,
    [10187] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1459),
    1,
    anon_sym_SEMI,
    STATE(397),
    1,
    sym_comment,
    [10197] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1461),
    1,
    sym_identifier,
    STATE(398),
    1,
    sym_comment,
    [10207] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1463),
    1,
    anon_sym_name,
    STATE(399),
    1,
    sym_comment,
    [10217] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1465),
    1,
    anon_sym_name,
    STATE(400),
    1,
    sym_comment,
    [10227] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1467),
    1,
    anon_sym_SEMI,
    STATE(401),
    1,
    sym_comment,
    [10237] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(819),
    1,
    sym_identifier,
    STATE(402),
    1,
    sym_comment,
    [10247] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1469),
    1,
    anon_sym_GT,
    STATE(403),
    1,
    sym_comment,
    [10257] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1471),
    1,
    anon_sym_LT,
    STATE(404),
    1,
    sym_comment,
    [10267] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1473),
    1,
    anon_sym_LT,
    STATE(405),
    1,
    sym_comment,
    [10277] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1475),
    1,
    anon_sym_SEMI,
    STATE(406),
    1,
    sym_comment,
    [10287] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1477),
    1,
    sym_identifier,
    STATE(407),
    1,
    sym_comment,
    [10297] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1479),
    1,
    anon_sym_LPAREN,
    STATE(408),
    1,
    sym_comment,
    [10307] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1064),
    1,
    anon_sym_SEMI,
    STATE(409),
    1,
    sym_comment,
    [10317] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1481),
    1,
    anon_sym_SEMI,
    STATE(410),
    1,
    sym_comment,
    [10327] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1483),
    1,
    anon_sym_RBRACK,
    STATE(411),
    1,
    sym_comment,
    [10337] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1347),
    1,
    anon_sym_LT,
    STATE(412),
    1,
    sym_comment,
    [10347] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1485),
    1,
    anon_sym_COMMA,
    STATE(413),
    1,
    sym_comment,
    [10357] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1487),
    1,
    anon_sym_SEMI,
    STATE(414),
    1,
    sym_comment,
    [10367] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1489),
    1,
    anon_sym_SEMI,
    STATE(415),
    1,
    sym_comment,
    [10377] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1491),
    1,
    sym_identifier,
    STATE(416),
    1,
    sym_comment,
    [10387] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1143),
    1,
    anon_sym_SEMI,
    STATE(417),
    1,
    sym_comment,
    [10397] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1357),
    1,
    sym_identifier,
    STATE(418),
    1,
    sym_comment,
    [10407] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1493),
    1,
    anon_sym_LBRACE,
    STATE(419),
    1,
    sym_comment,
    [10417] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1495),
    1,
    anon_sym_COMMA,
    STATE(420),
    1,
    sym_comment,
    [10427] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1497),
    1,
    anon_sym_SEMI,
    STATE(421),
    1,
    sym_comment,
    [10437] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1499),
    1,
    aux_sym_string_literal_token1,
    STATE(422),
    1,
    sym_comment,
    [10447] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1501),
    1,
    anon_sym_GT,
    STATE(423),
    1,
    sym_comment,
    [10457] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(745),
    1,
    sym_identifier,
    STATE(424),
    1,
    sym_comment,
    [10467] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1503),
    1,
    anon_sym_LBRACE,
    STATE(425),
    1,
    sym_comment,
    [10477] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1505),
    1,
    anon_sym_GT,
    STATE(426),
    1,
    sym_comment,
    [10487] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1507),
    1,
    anon_sym_GT,
    STATE(427),
    1,
    sym_comment,
    [10497] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1509),
    1,
    anon_sym_LBRACE,
    STATE(428),
    1,
    sym_comment,
    [10507] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1511),
    1,
    aux_sym_string_literal_token1,
    STATE(429),
    1,
    sym_comment,
    [10517] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1513),
    1,
    anon_sym_LPAREN,
    STATE(430),
    1,
    sym_comment,
    [10527] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1515),
    1,
    anon_sym_SEMI,
    STATE(431),
    1,
    sym_comment,
    [10537] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1517),
    1,
    anon_sym_LBRACE,
    STATE(432),
    1,
    sym_comment,
    [10547] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1519),
    1,
    sym_identifier,
    STATE(433),
    1,
    sym_comment,
    [10557] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1521),
    1,
    anon_sym_COLON,
    STATE(434),
    1,
    sym_comment,
    [10567] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1523),
    1,
    sym_identifier,
    STATE(435),
    1,
    sym_comment,
    [10577] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1525),
    1,
    anon_sym_LBRACE,
    STATE(436),
    1,
    sym_comment,
    [10587] = 3,
    ACTIONS(1243),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1527),
    1,
    aux_sym_preproc_call_token1,
    STATE(437),
    1,
    sym_comment,
    [10597] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1227),
    1,
    sym_identifier,
    STATE(438),
    1,
    sym_comment,
    [10607] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1529),
    1,
    anon_sym_GT,
    STATE(439),
    1,
    sym_comment,
    [10617] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1531),
    1,
    anon_sym_enum,
    STATE(440),
    1,
    sym_comment,
    [10627] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1533),
    1,
    anon_sym_LBRACE,
    STATE(441),
    1,
    sym_comment,
    [10637] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1535),
    1,
    anon_sym_SEMI,
    STATE(442),
    1,
    sym_comment,
    [10647] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1537),
    1,
    anon_sym_SEMI,
    STATE(443),
    1,
    sym_comment,
    [10657] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1539),
    1,
    anon_sym_SEMI,
    STATE(444),
    1,
    sym_comment,
    [10667] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1541),
    1,
    anon_sym_RPAREN,
    STATE(445),
    1,
    sym_comment,
    [10677] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1267),
    1,
    anon_sym_RPAREN,
    STATE(446),
    1,
    sym_comment,
    [10687] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1543),
    1,
    anon_sym_SEMI,
    STATE(447),
    1,
    sym_comment,
    [10697] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1545),
    1,
    sym_identifier,
    STATE(448),
    1,
    sym_comment,
    [10707] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1547),
    1,
    anon_sym_SEMI,
    STATE(449),
    1,
    sym_comment,
    [10717] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1549),
    1,
    anon_sym_COLON,
    STATE(450),
    1,
    sym_comment,
    [10727] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1551),
    1,
    ts_builtin_sym_end,
    STATE(451),
    1,
    sym_comment,
    [10737] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1553),
    1,
    anon_sym_SEMI,
    STATE(452),
    1,
    sym_comment,
    [10747] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1555),
    1,
    anon_sym_SEMI,
    STATE(453),
    1,
    sym_comment,
    [10757] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1557),
    1,
    anon_sym_LPAREN,
    STATE(454),
    1,
    sym_comment,
    [10767] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1559),
    1,
    anon_sym_LPAREN,
    STATE(455),
    1,
    sym_comment,
    [10777] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1561),
    1,
    anon_sym_LPAREN,
    STATE(456),
    1,
    sym_comment,
    [10787] = 3,
    ACTIONS(1243),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1563),
    1,
    aux_sym_predefine_token1,
    STATE(457),
    1,
    sym_comment,
    [10797] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1565),
    1,
    anon_sym_LBRACE,
    STATE(458),
    1,
    sym_comment,
    [10807] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1567),
    1,
    anon_sym_enum,
    STATE(459),
    1,
    sym_comment,
    [10817] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1569),
    1,
    sym_identifier,
    STATE(460),
    1,
    sym_comment,
    [10827] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1571),
    1,
    anon_sym_GT,
    STATE(461),
    1,
    sym_comment,
    [10837] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1573),
    1,
    sym_identifier,
    STATE(462),
    1,
    sym_comment,
    [10847] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1575),
    1,
    anon_sym_SEMI,
    STATE(463),
    1,
    sym_comment,
    [10857] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1577),
    1,
    sym_identifier,
    STATE(464),
    1,
    sym_comment,
    [10867] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1579),
    1,
    anon_sym_SEMI,
    STATE(465),
    1,
    sym_comment,
    [10877] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1581),
    1,
    sym_identifier,
    STATE(466),
    1,
    sym_comment,
    [10887] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1583),
    1,
    sym_identifier,
    STATE(467),
    1,
    sym_comment,
    [10897] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1585),
    1,
    anon_sym_SQUOTE,
    STATE(468),
    1,
    sym_comment,
    [10907] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1587),
    1,
    sym_identifier,
    STATE(469),
    1,
    sym_comment,
    [10917] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1589),
    1,
    sym_identifier,
    STATE(470),
    1,
    sym_comment,
    [10927] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1591),
    1,
    sym_identifier,
    STATE(471),
    1,
    sym_comment,
    [10937] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1593),
    1,
    sym_identifier,
    STATE(472),
    1,
    sym_comment,
    [10947] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1595),
    1,
    anon_sym_SEMI,
    STATE(473),
    1,
    sym_comment,
    [10957] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1597),
    1,
    anon_sym_DQUOTE,
    STATE(474),
    1,
    sym_comment,
    [10967] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1599),
    1,
    aux_sym_char_literal_token1,
    STATE(475),
    1,
    sym_comment,
    [10977] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1601),
    1,
    anon_sym_SEMI,
    STATE(476),
    1,
    sym_comment,
    [10987] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1603),
    1,
    sym_identifier,
    STATE(477),
    1,
    sym_comment,
    [10997] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1605),
    1,
    sym_identifier,
    STATE(478),
    1,
    sym_comment,
    [11007] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1607),
    1,
    aux_sym_string_literal_token1,
    STATE(479),
    1,
    sym_comment,
    [11017] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1609),
    1,
    anon_sym_RPAREN,
    STATE(480),
    1,
    sym_comment,
    [11027] = 1,
    ACTIONS(1611),
    1,
    ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
    [SMALL_STATE(21)] = 0,
    [SMALL_STATE(22)] = 143,
    [SMALL_STATE(23)] = 284,
    [SMALL_STATE(24)] = 423,
    [SMALL_STATE(25)] = 564,
    [SMALL_STATE(26)] = 693,
    [SMALL_STATE(27)] = 825,
    [SMALL_STATE(28)] = 957,
    [SMALL_STATE(29)] = 1087,
    [SMALL_STATE(30)] = 1219,
    [SMALL_STATE(31)] = 1344,
    [SMALL_STATE(32)] = 1466,
    [SMALL_STATE(33)] = 1589,
    [SMALL_STATE(34)] = 1708,
    [SMALL_STATE(35)] = 1827,
    [SMALL_STATE(36)] = 1946,
    [SMALL_STATE(37)] = 2069,
    [SMALL_STATE(38)] = 2188,
    [SMALL_STATE(39)] = 2307,
    [SMALL_STATE(40)] = 2430,
    [SMALL_STATE(41)] = 2553,
    [SMALL_STATE(42)] = 2609,
    [SMALL_STATE(43)] = 2665,
    [SMALL_STATE(44)] = 2767,
    [SMALL_STATE(45)] = 2869,
    [SMALL_STATE(46)] = 2931,
    [SMALL_STATE(47)] = 2980,
    [SMALL_STATE(48)] = 3029,
    [SMALL_STATE(49)] = 3078,
    [SMALL_STATE(50)] = 3127,
    [SMALL_STATE(51)] = 3176,
    [SMALL_STATE(52)] = 3224,
    [SMALL_STATE(53)] = 3272,
    [SMALL_STATE(54)] = 3320,
    [SMALL_STATE(55)] = 3368,
    [SMALL_STATE(56)] = 3412,
    [SMALL_STATE(57)] = 3456,
    [SMALL_STATE(58)] = 3500,
    [SMALL_STATE(59)] = 3544,
    [SMALL_STATE(60)] = 3588,
    [SMALL_STATE(61)] = 3631,
    [SMALL_STATE(62)] = 3674,
    [SMALL_STATE(63)] = 3754,
    [SMALL_STATE(64)] = 3794,
    [SMALL_STATE(65)] = 3874,
    [SMALL_STATE(66)] = 3954,
    [SMALL_STATE(67)] = 4034,
    [SMALL_STATE(68)] = 4114,
    [SMALL_STATE(69)] = 4194,
    [SMALL_STATE(70)] = 4274,
    [SMALL_STATE(71)] = 4354,
    [SMALL_STATE(72)] = 4431,
    [SMALL_STATE(73)] = 4508,
    [SMALL_STATE(74)] = 4585,
    [SMALL_STATE(75)] = 4662,
    [SMALL_STATE(76)] = 4739,
    [SMALL_STATE(77)] = 4816,
    [SMALL_STATE(78)] = 4881,
    [SMALL_STATE(79)] = 4920,
    [SMALL_STATE(80)] = 4991,
    [SMALL_STATE(81)] = 5059,
    [SMALL_STATE(82)] = 5091,
    [SMALL_STATE(83)] = 5123,
    [SMALL_STATE(84)] = 5155,
    [SMALL_STATE(85)] = 5188,
    [SMALL_STATE(86)] = 5219,
    [SMALL_STATE(87)] = 5284,
    [SMALL_STATE(88)] = 5315,
    [SMALL_STATE(89)] = 5346,
    [SMALL_STATE(90)] = 5377,
    [SMALL_STATE(91)] = 5410,
    [SMALL_STATE(92)] = 5443,
    [SMALL_STATE(93)] = 5505,
    [SMALL_STATE(94)] = 5564,
    [SMALL_STATE(95)] = 5594,
    [SMALL_STATE(96)] = 5624,
    [SMALL_STATE(97)] = 5680,
    [SMALL_STATE(98)] = 5710,
    [SMALL_STATE(99)] = 5740,
    [SMALL_STATE(100)] = 5767,
    [SMALL_STATE(101)] = 5794,
    [SMALL_STATE(102)] = 5821,
    [SMALL_STATE(103)] = 5848,
    [SMALL_STATE(104)] = 5875,
    [SMALL_STATE(105)] = 5902,
    [SMALL_STATE(106)] = 5929,
    [SMALL_STATE(107)] = 5956,
    [SMALL_STATE(108)] = 5983,
    [SMALL_STATE(109)] = 6014,
    [SMALL_STATE(110)] = 6045,
    [SMALL_STATE(111)] = 6072,
    [SMALL_STATE(112)] = 6099,
    [SMALL_STATE(113)] = 6126,
    [SMALL_STATE(114)] = 6161,
    [SMALL_STATE(115)] = 6204,
    [SMALL_STATE(116)] = 6230,
    [SMALL_STATE(117)] = 6260,
    [SMALL_STATE(118)] = 6286,
    [SMALL_STATE(119)] = 6318,
    [SMALL_STATE(120)] = 6342,
    [SMALL_STATE(121)] = 6366,
    [SMALL_STATE(122)] = 6401,
    [SMALL_STATE(123)] = 6421,
    [SMALL_STATE(124)] = 6441,
    [SMALL_STATE(125)] = 6469,
    [SMALL_STATE(126)] = 6489,
    [SMALL_STATE(127)] = 6520,
    [SMALL_STATE(128)] = 6539,
    [SMALL_STATE(129)] = 6558,
    [SMALL_STATE(130)] = 6574,
    [SMALL_STATE(131)] = 6600,
    [SMALL_STATE(132)] = 6618,
    [SMALL_STATE(133)] = 6639,
    [SMALL_STATE(134)] = 6664,
    [SMALL_STATE(135)] = 6689,
    [SMALL_STATE(136)] = 6712,
    [SMALL_STATE(137)] = 6737,
    [SMALL_STATE(138)] = 6756,
    [SMALL_STATE(139)] = 6777,
    [SMALL_STATE(140)] = 6802,
    [SMALL_STATE(141)] = 6816,
    [SMALL_STATE(142)] = 6838,
    [SMALL_STATE(143)] = 6858,
    [SMALL_STATE(144)] = 6878,
    [SMALL_STATE(145)] = 6900,
    [SMALL_STATE(146)] = 6920,
    [SMALL_STATE(147)] = 6942,
    [SMALL_STATE(148)] = 6956,
    [SMALL_STATE(149)] = 6976,
    [SMALL_STATE(150)] = 6996,
    [SMALL_STATE(151)] = 7010,
    [SMALL_STATE(152)] = 7032,
    [SMALL_STATE(153)] = 7054,
    [SMALL_STATE(154)] = 7076,
    [SMALL_STATE(155)] = 7090,
    [SMALL_STATE(156)] = 7112,
    [SMALL_STATE(157)] = 7132,
    [SMALL_STATE(158)] = 7149,
    [SMALL_STATE(159)] = 7162,
    [SMALL_STATE(160)] = 7181,
    [SMALL_STATE(161)] = 7200,
    [SMALL_STATE(162)] = 7213,
    [SMALL_STATE(163)] = 7230,
    [SMALL_STATE(164)] = 7249,
    [SMALL_STATE(165)] = 7266,
    [SMALL_STATE(166)] = 7285,
    [SMALL_STATE(167)] = 7302,
    [SMALL_STATE(168)] = 7315,
    [SMALL_STATE(169)] = 7332,
    [SMALL_STATE(170)] = 7349,
    [SMALL_STATE(171)] = 7366,
    [SMALL_STATE(172)] = 7379,
    [SMALL_STATE(173)] = 7392,
    [SMALL_STATE(174)] = 7405,
    [SMALL_STATE(175)] = 7418,
    [SMALL_STATE(176)] = 7437,
    [SMALL_STATE(177)] = 7450,
    [SMALL_STATE(178)] = 7463,
    [SMALL_STATE(179)] = 7476,
    [SMALL_STATE(180)] = 7495,
    [SMALL_STATE(181)] = 7508,
    [SMALL_STATE(182)] = 7521,
    [SMALL_STATE(183)] = 7538,
    [SMALL_STATE(184)] = 7553,
    [SMALL_STATE(185)] = 7572,
    [SMALL_STATE(186)] = 7587,
    [SMALL_STATE(187)] = 7599,
    [SMALL_STATE(188)] = 7615,
    [SMALL_STATE(189)] = 7631,
    [SMALL_STATE(190)] = 7647,
    [SMALL_STATE(191)] = 7663,
    [SMALL_STATE(192)] = 7679,
    [SMALL_STATE(193)] = 7695,
    [SMALL_STATE(194)] = 7711,
    [SMALL_STATE(195)] = 7727,
    [SMALL_STATE(196)] = 7739,
    [SMALL_STATE(197)] = 7751,
    [SMALL_STATE(198)] = 7763,
    [SMALL_STATE(199)] = 7775,
    [SMALL_STATE(200)] = 7787,
    [SMALL_STATE(201)] = 7799,
    [SMALL_STATE(202)] = 7815,
    [SMALL_STATE(203)] = 7831,
    [SMALL_STATE(204)] = 7847,
    [SMALL_STATE(205)] = 7859,
    [SMALL_STATE(206)] = 7873,
    [SMALL_STATE(207)] = 7889,
    [SMALL_STATE(208)] = 7905,
    [SMALL_STATE(209)] = 7919,
    [SMALL_STATE(210)] = 7935,
    [SMALL_STATE(211)] = 7949,
    [SMALL_STATE(212)] = 7965,
    [SMALL_STATE(213)] = 7979,
    [SMALL_STATE(214)] = 7991,
    [SMALL_STATE(215)] = 8005,
    [SMALL_STATE(216)] = 8021,
    [SMALL_STATE(217)] = 8035,
    [SMALL_STATE(218)] = 8051,
    [SMALL_STATE(219)] = 8063,
    [SMALL_STATE(220)] = 8079,
    [SMALL_STATE(221)] = 8093,
    [SMALL_STATE(222)] = 8109,
    [SMALL_STATE(223)] = 8121,
    [SMALL_STATE(224)] = 8137,
    [SMALL_STATE(225)] = 8149,
    [SMALL_STATE(226)] = 8165,
    [SMALL_STATE(227)] = 8177,
    [SMALL_STATE(228)] = 8189,
    [SMALL_STATE(229)] = 8203,
    [SMALL_STATE(230)] = 8219,
    [SMALL_STATE(231)] = 8235,
    [SMALL_STATE(232)] = 8251,
    [SMALL_STATE(233)] = 8267,
    [SMALL_STATE(234)] = 8283,
    [SMALL_STATE(235)] = 8299,
    [SMALL_STATE(236)] = 8315,
    [SMALL_STATE(237)] = 8331,
    [SMALL_STATE(238)] = 8343,
    [SMALL_STATE(239)] = 8355,
    [SMALL_STATE(240)] = 8367,
    [SMALL_STATE(241)] = 8383,
    [SMALL_STATE(242)] = 8399,
    [SMALL_STATE(243)] = 8415,
    [SMALL_STATE(244)] = 8429,
    [SMALL_STATE(245)] = 8443,
    [SMALL_STATE(246)] = 8455,
    [SMALL_STATE(247)] = 8471,
    [SMALL_STATE(248)] = 8487,
    [SMALL_STATE(249)] = 8503,
    [SMALL_STATE(250)] = 8515,
    [SMALL_STATE(251)] = 8527,
    [SMALL_STATE(252)] = 8541,
    [SMALL_STATE(253)] = 8557,
    [SMALL_STATE(254)] = 8573,
    [SMALL_STATE(255)] = 8589,
    [SMALL_STATE(256)] = 8605,
    [SMALL_STATE(257)] = 8617,
    [SMALL_STATE(258)] = 8633,
    [SMALL_STATE(259)] = 8649,
    [SMALL_STATE(260)] = 8665,
    [SMALL_STATE(261)] = 8679,
    [SMALL_STATE(262)] = 8693,
    [SMALL_STATE(263)] = 8709,
    [SMALL_STATE(264)] = 8725,
    [SMALL_STATE(265)] = 8739,
    [SMALL_STATE(266)] = 8751,
    [SMALL_STATE(267)] = 8765,
    [SMALL_STATE(268)] = 8776,
    [SMALL_STATE(269)] = 8787,
    [SMALL_STATE(270)] = 8798,
    [SMALL_STATE(271)] = 8809,
    [SMALL_STATE(272)] = 8820,
    [SMALL_STATE(273)] = 8833,
    [SMALL_STATE(274)] = 8846,
    [SMALL_STATE(275)] = 8859,
    [SMALL_STATE(276)] = 8872,
    [SMALL_STATE(277)] = 8883,
    [SMALL_STATE(278)] = 8894,
    [SMALL_STATE(279)] = 8907,
    [SMALL_STATE(280)] = 8918,
    [SMALL_STATE(281)] = 8929,
    [SMALL_STATE(282)] = 8942,
    [SMALL_STATE(283)] = 8953,
    [SMALL_STATE(284)] = 8964,
    [SMALL_STATE(285)] = 8975,
    [SMALL_STATE(286)] = 8986,
    [SMALL_STATE(287)] = 8997,
    [SMALL_STATE(288)] = 9008,
    [SMALL_STATE(289)] = 9019,
    [SMALL_STATE(290)] = 9032,
    [SMALL_STATE(291)] = 9043,
    [SMALL_STATE(292)] = 9054,
    [SMALL_STATE(293)] = 9065,
    [SMALL_STATE(294)] = 9078,
    [SMALL_STATE(295)] = 9089,
    [SMALL_STATE(296)] = 9102,
    [SMALL_STATE(297)] = 9113,
    [SMALL_STATE(298)] = 9124,
    [SMALL_STATE(299)] = 9137,
    [SMALL_STATE(300)] = 9150,
    [SMALL_STATE(301)] = 9161,
    [SMALL_STATE(302)] = 9172,
    [SMALL_STATE(303)] = 9183,
    [SMALL_STATE(304)] = 9196,
    [SMALL_STATE(305)] = 9207,
    [SMALL_STATE(306)] = 9218,
    [SMALL_STATE(307)] = 9229,
    [SMALL_STATE(308)] = 9240,
    [SMALL_STATE(309)] = 9251,
    [SMALL_STATE(310)] = 9264,
    [SMALL_STATE(311)] = 9275,
    [SMALL_STATE(312)] = 9286,
    [SMALL_STATE(313)] = 9297,
    [SMALL_STATE(314)] = 9310,
    [SMALL_STATE(315)] = 9323,
    [SMALL_STATE(316)] = 9336,
    [SMALL_STATE(317)] = 9347,
    [SMALL_STATE(318)] = 9358,
    [SMALL_STATE(319)] = 9369,
    [SMALL_STATE(320)] = 9380,
    [SMALL_STATE(321)] = 9391,
    [SMALL_STATE(322)] = 9402,
    [SMALL_STATE(323)] = 9415,
    [SMALL_STATE(324)] = 9426,
    [SMALL_STATE(325)] = 9439,
    [SMALL_STATE(326)] = 9452,
    [SMALL_STATE(327)] = 9463,
    [SMALL_STATE(328)] = 9474,
    [SMALL_STATE(329)] = 9485,
    [SMALL_STATE(330)] = 9498,
    [SMALL_STATE(331)] = 9509,
    [SMALL_STATE(332)] = 9520,
    [SMALL_STATE(333)] = 9533,
    [SMALL_STATE(334)] = 9546,
    [SMALL_STATE(335)] = 9559,
    [SMALL_STATE(336)] = 9570,
    [SMALL_STATE(337)] = 9581,
    [SMALL_STATE(338)] = 9594,
    [SMALL_STATE(339)] = 9607,
    [SMALL_STATE(340)] = 9617,
    [SMALL_STATE(341)] = 9627,
    [SMALL_STATE(342)] = 9637,
    [SMALL_STATE(343)] = 9647,
    [SMALL_STATE(344)] = 9657,
    [SMALL_STATE(345)] = 9667,
    [SMALL_STATE(346)] = 9677,
    [SMALL_STATE(347)] = 9687,
    [SMALL_STATE(348)] = 9697,
    [SMALL_STATE(349)] = 9707,
    [SMALL_STATE(350)] = 9717,
    [SMALL_STATE(351)] = 9727,
    [SMALL_STATE(352)] = 9737,
    [SMALL_STATE(353)] = 9747,
    [SMALL_STATE(354)] = 9757,
    [SMALL_STATE(355)] = 9767,
    [SMALL_STATE(356)] = 9777,
    [SMALL_STATE(357)] = 9787,
    [SMALL_STATE(358)] = 9797,
    [SMALL_STATE(359)] = 9807,
    [SMALL_STATE(360)] = 9817,
    [SMALL_STATE(361)] = 9827,
    [SMALL_STATE(362)] = 9837,
    [SMALL_STATE(363)] = 9847,
    [SMALL_STATE(364)] = 9857,
    [SMALL_STATE(365)] = 9867,
    [SMALL_STATE(366)] = 9877,
    [SMALL_STATE(367)] = 9887,
    [SMALL_STATE(368)] = 9897,
    [SMALL_STATE(369)] = 9907,
    [SMALL_STATE(370)] = 9917,
    [SMALL_STATE(371)] = 9927,
    [SMALL_STATE(372)] = 9937,
    [SMALL_STATE(373)] = 9947,
    [SMALL_STATE(374)] = 9957,
    [SMALL_STATE(375)] = 9967,
    [SMALL_STATE(376)] = 9977,
    [SMALL_STATE(377)] = 9987,
    [SMALL_STATE(378)] = 9997,
    [SMALL_STATE(379)] = 10007,
    [SMALL_STATE(380)] = 10017,
    [SMALL_STATE(381)] = 10027,
    [SMALL_STATE(382)] = 10037,
    [SMALL_STATE(383)] = 10047,
    [SMALL_STATE(384)] = 10057,
    [SMALL_STATE(385)] = 10067,
    [SMALL_STATE(386)] = 10077,
    [SMALL_STATE(387)] = 10087,
    [SMALL_STATE(388)] = 10097,
    [SMALL_STATE(389)] = 10107,
    [SMALL_STATE(390)] = 10117,
    [SMALL_STATE(391)] = 10127,
    [SMALL_STATE(392)] = 10137,
    [SMALL_STATE(393)] = 10147,
    [SMALL_STATE(394)] = 10157,
    [SMALL_STATE(395)] = 10167,
    [SMALL_STATE(396)] = 10177,
    [SMALL_STATE(397)] = 10187,
    [SMALL_STATE(398)] = 10197,
    [SMALL_STATE(399)] = 10207,
    [SMALL_STATE(400)] = 10217,
    [SMALL_STATE(401)] = 10227,
    [SMALL_STATE(402)] = 10237,
    [SMALL_STATE(403)] = 10247,
    [SMALL_STATE(404)] = 10257,
    [SMALL_STATE(405)] = 10267,
    [SMALL_STATE(406)] = 10277,
    [SMALL_STATE(407)] = 10287,
    [SMALL_STATE(408)] = 10297,
    [SMALL_STATE(409)] = 10307,
    [SMALL_STATE(410)] = 10317,
    [SMALL_STATE(411)] = 10327,
    [SMALL_STATE(412)] = 10337,
    [SMALL_STATE(413)] = 10347,
    [SMALL_STATE(414)] = 10357,
    [SMALL_STATE(415)] = 10367,
    [SMALL_STATE(416)] = 10377,
    [SMALL_STATE(417)] = 10387,
    [SMALL_STATE(418)] = 10397,
    [SMALL_STATE(419)] = 10407,
    [SMALL_STATE(420)] = 10417,
    [SMALL_STATE(421)] = 10427,
    [SMALL_STATE(422)] = 10437,
    [SMALL_STATE(423)] = 10447,
    [SMALL_STATE(424)] = 10457,
    [SMALL_STATE(425)] = 10467,
    [SMALL_STATE(426)] = 10477,
    [SMALL_STATE(427)] = 10487,
    [SMALL_STATE(428)] = 10497,
    [SMALL_STATE(429)] = 10507,
    [SMALL_STATE(430)] = 10517,
    [SMALL_STATE(431)] = 10527,
    [SMALL_STATE(432)] = 10537,
    [SMALL_STATE(433)] = 10547,
    [SMALL_STATE(434)] = 10557,
    [SMALL_STATE(435)] = 10567,
    [SMALL_STATE(436)] = 10577,
    [SMALL_STATE(437)] = 10587,
    [SMALL_STATE(438)] = 10597,
    [SMALL_STATE(439)] = 10607,
    [SMALL_STATE(440)] = 10617,
    [SMALL_STATE(441)] = 10627,
    [SMALL_STATE(442)] = 10637,
    [SMALL_STATE(443)] = 10647,
    [SMALL_STATE(444)] = 10657,
    [SMALL_STATE(445)] = 10667,
    [SMALL_STATE(446)] = 10677,
    [SMALL_STATE(447)] = 10687,
    [SMALL_STATE(448)] = 10697,
    [SMALL_STATE(449)] = 10707,
    [SMALL_STATE(450)] = 10717,
    [SMALL_STATE(451)] = 10727,
    [SMALL_STATE(452)] = 10737,
    [SMALL_STATE(453)] = 10747,
    [SMALL_STATE(454)] = 10757,
    [SMALL_STATE(455)] = 10767,
    [SMALL_STATE(456)] = 10777,
    [SMALL_STATE(457)] = 10787,
    [SMALL_STATE(458)] = 10797,
    [SMALL_STATE(459)] = 10807,
    [SMALL_STATE(460)] = 10817,
    [SMALL_STATE(461)] = 10827,
    [SMALL_STATE(462)] = 10837,
    [SMALL_STATE(463)] = 10847,
    [SMALL_STATE(464)] = 10857,
    [SMALL_STATE(465)] = 10867,
    [SMALL_STATE(466)] = 10877,
    [SMALL_STATE(467)] = 10887,
    [SMALL_STATE(468)] = 10897,
    [SMALL_STATE(469)] = 10907,
    [SMALL_STATE(470)] = 10917,
    [SMALL_STATE(471)] = 10927,
    [SMALL_STATE(472)] = 10937,
    [SMALL_STATE(473)] = 10947,
    [SMALL_STATE(474)] = 10957,
    [SMALL_STATE(475)] = 10967,
    [SMALL_STATE(476)] = 10977,
    [SMALL_STATE(477)] = 10987,
    [SMALL_STATE(478)] = 10997,
    [SMALL_STATE(479)] = 11007,
    [SMALL_STATE(480)] = 11017,
    [SMALL_STATE(481)] = 11027,
};

static const TSParseActionEntry ts_parse_actions[] = {
    [0] = { .entry = { .count = 0, .reusable = false } },
    [1] = { .entry = { .count = 1, .reusable = false } },
    RECOVER(),
    [3] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(377),
    [5] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_specification, 0),
    [7] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(274),
    [9] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(478),
    [11] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(477),
    [13] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(275),
    [15] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(471),
    [17] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(469),
    [19] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(467),
    [21] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(257),
    [23] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(466),
    [25] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(464),
    [27] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(462),
    [29] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(43),
    [31] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(278),
    [33] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(459),
    [35] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(9),
    [37] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(457),
    [39] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(154),
    [41] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(456),
    [43] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(455),
    [45] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(249),
    [47] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(454),
    [49] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(167),
    [51] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(171),
    [53] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(173),
    [55] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(173),
    [57] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(174),
    [59] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(198),
    [61] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(405),
    [63] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(176),
    [65] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(177),
    [67] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(177),
    [69] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(178),
    [71] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(180),
    [73] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(180),
    [75] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(204),
    [77] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(204),
    [79] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(158),
    [81] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(424),
    [83] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(185),
    [85] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(197),
    [87] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(412),
    [89] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(404),
    [91] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(478),
    [93] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(447),
    [95] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(379),
    [97] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(378),
    [99] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(35),
    [101] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(471),
    [103] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(469),
    [105] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(466),
    [107] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(464),
    [109] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(462),
    [111] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(43),
    [113] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(278),
    [115] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(9),
    [117] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(95),
    [119] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(364),
    [121] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(382),
    [123] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_body, 1),
    [125] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(167),
    [128] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(171),
    [131] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(173),
    [134] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(173),
    [137] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(174),
    [140] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(198),
    [143] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(405),
    [146] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(176),
    [149] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(177),
    [152] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(177),
    [155] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(178),
    [158] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(180),
    [161] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(180),
    [164] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(204),
    [167] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(204),
    [170] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(158),
    [173] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(424),
    [176] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(185),
    [179] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(197),
    [182] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(412),
    [185] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(404),
    [188] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(478),
    [191] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    [193] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(379),
    [196] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(378),
    [199] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(35),
    [202] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(471),
    [205] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(469),
    [208] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(466),
    [211] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(464),
    [214] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(462),
    [217] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(43),
    [220] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(278),
    [223] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(459),
    [226] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(9),
    [229] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(249),
    [232] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(454),
    [235] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(95),
    [238] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(122),
    [240] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(72),
    [242] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(122),
    [244] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(324),
    [246] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(346),
    [248] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(344),
    [250] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(106),
    [252] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(104),
    [254] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(286),
    [256] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(53),
    [258] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(367),
    [260] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(365),
    [262] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(268),
    [264] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(443),
    [266] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(287),
    [268] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(296),
    [270] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(368),
    [272] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(167),
    [275] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(171),
    [278] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(173),
    [281] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(173),
    [284] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(174),
    [287] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(198),
    [290] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(405),
    [293] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(176),
    [296] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(177),
    [299] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(177),
    [302] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(178),
    [305] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(180),
    [308] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(180),
    [311] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(204),
    [314] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(204),
    [317] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(158),
    [320] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(424),
    [323] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(185),
    [326] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(197),
    [329] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(412),
    [332] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(404),
    [335] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    [337] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(53),
    [340] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(367),
    [343] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(365),
    [346] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(95),
    [349] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(302),
    [351] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(317),
    [353] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(307),
    [355] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(418),
    [357] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(416),
    [359] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(357),
    [361] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(453),
    [363] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(167),
    [366] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(171),
    [369] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(173),
    [372] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(173),
    [375] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(174),
    [378] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(418),
    [381] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(416),
    [384] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(176),
    [387] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(177),
    [390] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(177),
    [393] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(178),
    [396] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(180),
    [399] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(180),
    [402] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(204),
    [405] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(204),
    [408] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(158),
    [411] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(424),
    [414] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(185),
    [417] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(357),
    [420] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(412),
    [423] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    [425] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(462),
    [428] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(43),
    [431] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(459),
    [434] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(9),
    [437] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 2),
    SHIFT_REPEAT(95),
    [440] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(356),
    [442] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case, 1),
    [444] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_case, 1),
    [446] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(431),
    [448] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(193),
    [450] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(457),
    [452] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_specification, 1),
    [454] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(478),
    [457] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    [459] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(477),
    [462] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(275),
    [465] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(471),
    [468] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(469),
    [471] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(467),
    [474] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(257),
    [477] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(466),
    [480] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(464),
    [483] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(462),
    [486] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(43),
    [489] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(193),
    [492] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(278),
    [495] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(459),
    [498] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(9),
    [501] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(457),
    [504] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(154),
    [507] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(456),
    [510] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(455),
    [513] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(249),
    [516] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 2),
    SHIFT_REPEAT(454),
    [519] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(394),
    [521] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(438),
    [523] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(213),
    [525] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(70),
    [527] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(265),
    [529] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    [531] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(478),
    [534] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(477),
    [537] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(275),
    [540] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(471),
    [543] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(469),
    [546] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(467),
    [549] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(257),
    [552] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(466),
    [555] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(464),
    [558] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(462),
    [561] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(43),
    [564] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(278),
    [567] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(459),
    [570] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(9),
    [573] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(457),
    [576] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(154),
    [579] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(456),
    [582] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(455),
    [585] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(249),
    [588] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(454),
    [591] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(347),
    [593] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_specification, 2),
    [595] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(381),
    [597] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_export, 2),
    [599] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_export, 2),
    [601] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 1),
    [603] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 1),
    [605] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_member_repeat1, 2),
    [607] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 2),
    [609] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 2),
    SHIFT_REPEAT(53),
    [612] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 2),
    SHIFT_REPEAT(367),
    [615] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 2),
    SHIFT_REPEAT(365),
    [618] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 5, .production_id = 9),
    [620] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 5, .production_id = 9),
    [622] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 1),
    [624] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 1),
    [626] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 3, .production_id = 5),
    [628] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 3, .production_id = 5),
    [630] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 4, .production_id = 5),
    [632] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 4, .production_id = 5),
    [634] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 4, .production_id = 9),
    [636] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 4, .production_id = 9),
    [638] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_hashid, 4, .production_id = 8),
    [640] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_hashid, 4, .production_id = 8),
    [642] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_member_repeat1, 1),
    [644] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 1),
    [646] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_struct_modifier, 1),
    [648] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_modifier, 1),
    [650] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_try_construct, 2, .production_id = 4),
    [652] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_try_construct, 2, .production_id = 4),
    [654] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_member, 5),
    [656] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_member, 5),
    [658] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_body, 2),
    [660] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_body, 2),
    [662] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_member, 3),
    [664] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_member, 3),
    [666] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 1),
    [668] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_annotation_dcl_repeat1, 1),
    [670] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_body, 1),
    [672] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_body, 1),
    [674] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_case_label, 2),
    [676] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case_label, 2),
    [678] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_case_label, 3),
    [680] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case_label, 3),
    [682] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(446),
    [684] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_param_attribute, 1),
    [686] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_param_attribute, 1),
    [688] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(167),
    [690] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(171),
    [692] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(174),
    [694] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(426),
    [696] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(176),
    [698] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(178),
    [700] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    [702] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(274),
    [705] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_specification_repeat1, 2),
    [707] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_predefine, 2),
    [709] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym__definition, 2),
    [711] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym__definition, 1),
    [713] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_preproc_call, 2, .production_id = 1),
    [715] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_preproc_call, 2, .production_id = 1),
    [717] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 1),
    [719] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_template_module_dcl_repeat1, 1),
    [721] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_tpl_definition, 2),
    [723] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_tpl_definition, 1),
    [725] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_preproc_call, 3, .production_id = 2),
    [727] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_preproc_call, 3, .production_id = 2),
    [729] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 1),
    [731] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_specification_repeat1, 1),
    [733] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_scoped_name, 2),
    [735] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_scoped_name, 2),
    [737] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_scoped_name, 1),
    [739] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_scoped_name, 1),
    [741] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 2),
    [743] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 2),
    [745] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(94),
    [747] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 1),
    [749] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 1),
    [751] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_char_literal, 3, .production_id = 6),
    [753] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_char_literal, 3, .production_id = 6),
    [755] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 4),
    [757] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 4),
    [759] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 3),
    [761] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 3),
    [763] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_char_literal, 4, .production_id = 10),
    [765] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_char_literal, 4, .production_id = 10),
    [767] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_literal, 1),
    [769] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_literal, 1),
    [771] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_string_literal, 4),
    [773] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_literal, 4),
    [775] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_boolean_literal, 1),
    [777] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_boolean_literal, 1),
    [779] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_mult_expr, 3),
    [781] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_mult_expr, 3),
    [783] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_add_expr, 1),
    [785] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_add_expr, 1),
    [787] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(96),
    [789] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(96),
    [791] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_add_expr, 3),
    [793] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_add_expr, 3),
    [795] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_string_literal, 3),
    [797] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_literal, 3),
    [799] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_mult_expr, 1),
    [801] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_mult_expr, 1),
    [803] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(334),
    [805] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(350),
    [807] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(44),
    [809] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(75),
    [811] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_shift_expr, 3),
    [813] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_shift_expr, 3),
    [815] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(93),
    [817] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_simple_type_spec, 1),
    [819] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_simple_type_spec, 1),
    [821] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_shift_expr, 1),
    [823] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_shift_expr, 1),
    [825] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_and_expr, 3),
    [827] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_and_expr, 3),
    [829] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(92),
    [831] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_and_expr, 1),
    [833] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_and_expr, 1),
    [835] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(435),
    [837] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(303),
    [839] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_operator, 1),
    [841] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_operator, 1),
    [843] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xor_expr, 3),
    [845] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(86),
    [847] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2),
    [849] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2),
    SHIFT_REPEAT(154),
    [852] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2),
    SHIFT_REPEAT(456),
    [855] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2),
    SHIFT_REPEAT(455),
    [858] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xor_expr, 1),
    [860] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(309),
    [862] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_declarator, 1),
    [864] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(313),
    [866] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(332),
    [868] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_or_expr, 1),
    [870] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(80),
    [872] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_or_expr, 3),
    [874] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_simple_declarator, 1),
    [876] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(225),
    [878] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(63),
    [880] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(63),
    [882] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_expr, 1),
    [884] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(79),
    [886] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_array_declarator, 2),
    [888] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(67),
    [890] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(280),
    [892] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(434),
    [894] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(76),
    [896] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(291),
    [898] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2),
    [900] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2),
    SHIFT_REPEAT(434),
    [903] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2),
    SHIFT_REPEAT(76),
    [906] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(312),
    [908] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(311),
    [910] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(310),
    [912] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 2),
    [914] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 2),
    SHIFT_REPEAT(67),
    [917] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(292),
    [919] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_dds_reply_topic, 6),
    [921] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(305),
    [923] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(358),
    [925] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(138),
    [927] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitset_dcl_repeat1, 2),
    [929] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_bitset_dcl_repeat1, 2),
    SHIFT_REPEAT(358),
    [932] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(328),
    [934] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 1),
    [936] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_dds_request_topic, 6),
    [938] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(282),
    [940] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_readonly_attr_declarator, 1),
    [942] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(408),
    [944] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(395),
    [946] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_anno, 1),
    [948] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(270),
    [950] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat1, 2),
    [952] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat1, 2),
    SHIFT_REPEAT(249),
    [955] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat1, 2),
    SHIFT_REPEAT(454),
    [958] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_char_type, 1),
    [960] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(253),
    [962] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(465),
    [964] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(95),
    [966] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_fixed_array_size, 3),
    [968] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(279),
    [970] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(157),
    [972] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarators, 1),
    [974] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_header, 2),
    [976] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(184),
    [978] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_forward_dcl, 2),
    [980] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(19),
    [982] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(189),
    [984] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_forward_dcl, 2),
    [986] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_signed_short_int, 1),
    [988] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_data_representation_repeat1, 2),
    [990] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_data_representation_repeat1, 2),
    SHIFT_REPEAT(210),
    [993] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_data_representation_repeat1, 2),
    SHIFT_REPEAT(210),
    [996] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 2),
    SHIFT_REPEAT(311),
    [999] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 2),
    [1001] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_signed_long_int, 1),
    [1003] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 1),
    [1005] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_signed_longlong_int, 1),
    [1007] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unsigned_int, 1),
    [1009] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(226),
    [1011] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(210),
    [1013] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(210),
    [1015] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_signed_int, 1),
    [1017] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unsigned_short_int, 1),
    [1019] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unsigned_long_int, 1),
    [1021] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(294),
    [1023] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unsigned_longlong_int, 1),
    [1025] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_integer_type, 1),
    [1027] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarators, 2),
    [1029] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_declarators_repeat1, 2),
    SHIFT_REPEAT(157),
    [1032] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_declarators_repeat1, 2),
    [1034] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(65),
    [1036] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_type, 1),
    [1038] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_positive_int_const, 1),
    [1040] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_declarator, 2),
    [1042] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(50),
    [1044] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(73),
    [1046] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(321),
    [1048] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(320),
    [1050] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_template_type_spec, 1),
    [1052] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_type, 1),
    [1054] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_base_type_spec, 1),
    [1056] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_fixed_pt_type, 6),
    [1058] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_map_type, 6),
    [1060] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_actual_parameters, 1),
    [1062] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(8),
    [1064] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_readonly_attr_declarator, 2),
    [1066] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(146),
    [1068] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(318),
    [1070] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_floating_pt_type, 1),
    [1072] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_enum_dcl_repeat1, 2),
    SHIFT_REPEAT(146),
    [1075] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enum_dcl_repeat1, 2),
    [1077] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(129),
    [1079] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_any_declarators_repeat1, 2),
    SHIFT_REPEAT(170),
    [1082] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_any_declarators_repeat1, 2),
    [1084] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(170),
    [1086] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarators, 1),
    [1088] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_data_representation_repeat1, 1),
    [1090] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_data_representation_repeat1, 1),
    [1092] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(160),
    [1094] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_inheritance_spec, 2),
    [1096] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_inheritance_spec_repeat1, 2),
    SHIFT_REPEAT(160),
    [1099] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_inheritance_spec_repeat1, 2),
    [1101] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 3),
    [1103] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitfield_repeat1, 2),
    [1105] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_bitfield_repeat1, 2),
    SHIFT_REPEAT(284),
    [1108] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_readonly_attr_declarator_repeat1, 2),
    SHIFT_REPEAT(309),
    [1111] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_readonly_attr_declarator_repeat1, 2),
    [1113] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameters, 1),
    [1115] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(118),
    [1117] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 4),
    [1119] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(297),
    [1121] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_bitmask_dcl_repeat1, 2),
    SHIFT_REPEAT(272),
    [1124] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitmask_dcl_repeat1, 2),
    [1126] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(149),
    [1128] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_parameter_dcls, 1),
    [1130] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarators, 2),
    [1132] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_type, 4),
    [1134] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_dcl, 4),
    [1136] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_data_representation, 4, .production_id = 3),
    [1138] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_formal_parameters_repeat1, 2),
    [1140] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_formal_parameters_repeat1, 2),
    SHIFT_REPEAT(118),
    [1143] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_dcl, 5),
    [1145] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_forward_dcl, 2),
    [1147] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(388),
    [1149] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_union_forward_dcl, 2),
    [1151] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_raises_expr, 1),
    [1153] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(113),
    [1155] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(32),
    [1157] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_parameter_dcls, 2),
    [1159] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_type_spec, 1),
    [1161] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 1),
    [1163] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarator, 1),
    [1165] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(285),
    [1167] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(284),
    [1169] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(48),
    [1171] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_name, 1),
    [1173] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_parameter_dcls_repeat1, 2),
    SHIFT_REPEAT(149),
    [1176] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_parameter_dcls_repeat1, 2),
    [1178] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 5),
    [1180] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(272),
    [1182] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(271),
    [1184] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_inheritance_spec, 3),
    [1186] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_actual_parameters, 2),
    [1188] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat1, 1),
    [1190] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_map_type, 8),
    [1192] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_actual_parameters_repeat1, 2),
    [1194] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_actual_parameters_repeat1, 2),
    SHIFT_REPEAT(8),
    [1197] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(326),
    [1199] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(277),
    [1201] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameter_names, 1),
    [1203] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(470),
    [1205] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case, 3),
    [1207] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(234),
    [1209] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(331),
    [1211] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(473),
    [1213] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_raises_expr_repeat1, 2),
    [1215] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_raises_expr_repeat1, 2),
    SHIFT_REPEAT(253),
    [1218] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameters, 2),
    [1220] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameter_names, 2),
    [1222] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_formal_parameter_names_repeat1, 2),
    [1224] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_formal_parameter_names_repeat1, 2),
    SHIFT_REPEAT(470),
    [1227] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(222),
    [1229] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarator, 1),
    [1231] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 6, .production_id = 7),
    [1233] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameter, 2),
    [1235] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 4),
    [1237] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 5),
    [1239] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(84),
    [1241] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(437),
    [1243] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(377),
    [1245] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_exception_list, 4),
    [1247] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_exception_list, 3),
    [1249] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_def, 9),
    [1251] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(255),
    [1253] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 5),
    [1255] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield_spec, 6),
    [1257] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitfield_repeat1, 1),
    [1259] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield, 2),
    [1261] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 5),
    [1263] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 8, .production_id = 11),
    [1265] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_param_dcl, 3),
    [1267] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_switch_type_spec, 1),
    [1269] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_def, 8),
    [1271] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 5),
    [1273] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(155),
    [1275] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(191),
    [1277] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enumerator, 2),
    [1279] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(281),
    [1281] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 7, .production_id = 11),
    [1283] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 7),
    [1285] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(7),
    [1287] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_get_excep_expr, 2),
    [1289] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 7, .production_id = 7),
    [1291] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 7),
    [1293] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield_spec, 4),
    [1295] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 6),
    [1297] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 1),
    [1299] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enumerator, 1),
    [1301] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_modifier, 1),
    [1303] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 4),
    [1305] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(215),
    [1307] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(11),
    [1309] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(15),
    [1311] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 4),
    [1313] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 6),
    [1315] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_actual_parameter, 1),
    [1317] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bit_value, 1),
    [1319] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 4),
    [1321] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(144),
    [1323] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(479),
    [1325] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(475),
    [1327] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(306),
    [1329] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(77),
    [1331] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield, 3),
    [1333] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitset_dcl_repeat1, 1),
    [1335] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 6),
    [1337] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(14),
    [1339] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(236),
    [1341] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 6),
    [1343] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(57),
    [1345] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(74),
    [1347] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(30),
    [1349] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameter_type, 1),
    [1351] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(200),
    [1353] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(69),
    [1355] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(430),
    [1357] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_type, 1),
    [1359] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(380),
    [1361] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(51),
    [1363] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(448),
    [1365] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(468),
    [1367] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(49),
    [1369] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(474),
    [1371] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_module_dcl, 4),
    [1373] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(269),
    [1375] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(458),
    [1377] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(56),
    [1379] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_member_type, 1),
    [1381] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(105),
    [1383] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(103),
    [1385] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_dcl, 4),
    [1387] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_const_type, 1),
    [1389] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(68),
    [1391] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(101),
    [1393] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_template_module_inst, 6),
    [1395] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(41),
    [1397] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(134),
    [1399] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 4),
    [1401] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(54),
    [1403] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(199),
    [1405] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(433),
    [1407] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_except_dcl, 4),
    [1409] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_readonly_attr_spec, 4),
    [1411] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(2),
    [1413] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(139),
    [1415] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_dcl, 1),
    [1417] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(230),
    [1419] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(481),
    [1421] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(34),
    [1423] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_type_spec, 1),
    [1425] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 6),
    [1427] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_module_dcl, 5),
    [1429] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 3),
    [1431] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(429),
    [1433] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(422),
    [1435] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_type_declarator, 2),
    [1437] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_default, 2),
    [1439] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(71),
    [1441] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(62),
    [1443] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(46),
    [1445] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(140),
    [1447] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_header, 3),
    [1449] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(150),
    [1451] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(55),
    [1453] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_template_module_dcl, 7),
    [1455] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(329),
    [1457] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(224),
    [1459] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(88),
    [1461] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(372),
    [1463] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(383),
    [1465] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(384),
    [1467] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_typedef_dcl, 2),
    [1469] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(218),
    [1471] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(33),
    [1473] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(66),
    [1475] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_native_dcl, 2),
    [1477] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(387),
    [1479] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(242),
    [1481] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_spec, 3),
    [1483] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(161),
    [1485] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(64),
    [1487] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_set_excep_expr, 2),
    [1489] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_raises_expr, 2),
    [1491] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_fixed_pt_const_type, 1),
    [1493] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(136),
    [1495] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(38),
    [1497] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_dcl, 5),
    [1499] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(392),
    [1501] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(245),
    [1503] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(24),
    [1505] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_destination_type, 1),
    [1507] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(283),
    [1509] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(190),
    [1511] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(390),
    [1513] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(130),
    [1515] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_template_module_dcl, 8),
    [1517] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(3),
    [1519] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(342),
    [1521] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(60),
    [1523] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(192),
    [1525] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(16),
    [1527] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(90),
    [1529] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(250),
    [1531] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(398),
    [1533] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(4),
    [1535] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_dcl, 6),
    [1537] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_except_dcl, 5),
    [1539] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_dcl, 1),
    [1541] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(363),
    [1543] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 5),
    [1545] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(360),
    [1547] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(82),
    [1549] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(61),
    [1551] = { .entry = { .count = 1, .reusable = true } },
    ACCEPT_INPUT(),
    [1553] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(256),
    [1555] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_dcl, 5),
    [1557] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(194),
    [1559] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(399),
    [1561] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(400),
    [1563] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(81),
    [1565] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(29),
    [1567] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_anno, 1),
    [1569] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_formal_parameter_type, 2),
    [1571] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(472),
    [1573] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(419),
    [1575] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_element_spec, 2),
    [1577] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(232),
    [1579] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_raises_expr, 4),
    [1581] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(166),
    [1583] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(425),
    [1585] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(100),
    [1587] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(428),
    [1589] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(276),
    [1591] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(293),
    [1593] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(476),
    [1595] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_raises_expr, 5),
    [1597] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(110),
    [1599] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(354),
    [1601] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_template_module_ref, 6),
    [1603] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(165),
    [1605] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(436),
    [1607] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(353),
    [1609] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(102),
    [1611] = { .entry = { .count = 1, .reusable = true } },
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
