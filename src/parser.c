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
#define STATE_COUNT 480
#define LARGE_STATE_COUNT 19
#define SYMBOL_COUNT 247
#define ALIAS_COUNT 3
#define TOKEN_COUNT 115
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
    anon_sym_LBRACK = 78,
    anon_sym_RBRACK = 79,
    anon_sym_EQ = 80,
    anon_sym_native = 81,
    anon_sym_module = 82,
    anon_sym_struct = 83,
    anon_sym_enum = 84,
    anon_sym_ATdefault_literal = 85,
    anon_sym_ATignore_literal_names = 86,
    anon_sym_union = 87,
    anon_sym_switch = 88,
    anon_sym_case = 89,
    anon_sym_typedef = 90,
    anon_sym_POUNDdefine = 91,
    aux_sym_predefine_token1 = 92,
    sym_dds_service = 93,
    anon_sym_ATDDSRequestTopic = 94,
    anon_sym_name = 95,
    anon_sym_ATDDSReplyTopic = 96,
    anon_sym_const = 97,
    sym_optional = 98,
    sym_key = 99,
    sym_must_understand = 100,
    sym_non_serialized = 101,
    sym_id = 102,
    sym_external = 103,
    anon_sym_AThashid = 104,
    anon_sym_LPAREN_DQUOTE = 105,
    anon_sym_ATtry_construct = 106,
    sym_final = 107,
    anon_sym_ATdata_representation = 108,
    anon_sym_XCDR = 109,
    anon_sym_XCDR2 = 110,
    sym_identifier = 111,
    anon_sym_SLASH_SLASH = 112,
    aux_sym_comment_token1 = 113,
    sym__eof = 114,
    sym_specification = 115,
    sym_signed_short_int = 116,
    sym_signed_long_int = 117,
    sym_signed_longlong_int = 118,
    sym_unsigned_int = 119,
    sym_fixed_pt_const_type = 120,
    sym_integer_type = 121,
    sym_signed_int = 122,
    sym_unsigned_short_int = 123,
    sym_unsigned_long_int = 124,
    sym_unsigned_longlong_int = 125,
    sym_floating_pt_type = 126,
    sym_char_type = 127,
    sym_scoped_name = 128,
    sym_string_type = 129,
    sym_type_spec = 130,
    sym_simple_type_spec = 131,
    sym_base_type_spec = 132,
    sym_any_type = 133,
    sym_fixed_pt_type = 134,
    sym_template_type_spec = 135,
    sym_sequence_type = 136,
    sym_map_type = 137,
    sym_const_expr = 138,
    sym_or_expr = 139,
    sym_xor_expr = 140,
    sym_and_expr = 141,
    sym_shift_expr = 142,
    sym_add_expr = 143,
    sym_mult_expr = 144,
    sym_unary_expr = 145,
    sym_unary_operator = 146,
    sym_literal = 147,
    sym_string_literal = 148,
    sym_char_literal = 149,
    sym_boolean_literal = 150,
    sym_preproc_call = 151,
    sym_except_dcl = 152,
    sym_interface_dcl = 153,
    sym_interface_forward_dcl = 154,
    sym_interface_def = 155,
    sym_interface_header = 156,
    sym_interface_inheritance_spec = 157,
    sym_interface_name = 158,
    sym_interface_body = 159,
    sym_export = 160,
    sym_op_dcl = 161,
    sym_op_type_spec = 162,
    sym_parameter_dcls = 163,
    sym_param_dcl = 164,
    sym_param_attribute = 165,
    sym_raises_expr = 166,
    sym_attr_dcl = 167,
    sym_readonly_attr_spec = 168,
    sym_readonly_attr_declarator = 169,
    sym_attr_spec = 170,
    sym_attr_declarator = 171,
    sym_attr_raises_expr = 172,
    sym_get_excep_expr = 173,
    sym_set_excep_expr = 174,
    sym_exception_list = 175,
    sym_interface_anno = 176,
    sym_bitset_dcl = 177,
    sym_bitfield = 178,
    sym_bitfield_spec = 179,
    sym_destination_type = 180,
    sym_bitmask_dcl = 181,
    sym_bit_value = 182,
    sym_annotation_dcl = 183,
    sym_annotation_body = 184,
    sym_annotation_member = 185,
    sym_annotation_member_type = 186,
    sym_any_const_type = 187,
    sym__definition = 188,
    sym_native_dcl = 189,
    sym_module_dcl = 190,
    sym_struct_forward_dcl = 191,
    sym_struct_def = 192,
    sym_member = 193,
    sym_default = 194,
    sym_enum_dcl = 195,
    sym_enumerator = 196,
    sym_enum_modifier = 197,
    sym_enum_anno = 198,
    sym_union_forward_dcl = 199,
    sym_union_def = 200,
    sym_case = 201,
    sym_case_label = 202,
    sym_element_spec = 203,
    sym_switch_type_spec = 204,
    sym_typedef_dcl = 205,
    sym_predefine = 206,
    sym_dds_request_topic = 207,
    sym_dds_reply_topic = 208,
    sym_const_dcl = 209,
    sym_const_type = 210,
    sym_hashid = 211,
    sym_try_construct = 212,
    sym_data_representation = 213,
    sym_struct_modifier = 214,
    sym_simple_declarator = 215,
    sym_declarator = 216,
    sym_declarators = 217,
    sym_array_declarator = 218,
    sym_positive_int_const = 219,
    sym_fixed_array_size = 220,
    sym_type_declarator = 221,
    sym_any_declarators = 222,
    sym_any_declarator = 223,
    sym_comment = 224,
    aux_sym_specification_repeat1 = 225,
    aux_sym_specification_repeat2 = 226,
    aux_sym_except_dcl_repeat1 = 227,
    aux_sym_interface_def_repeat1 = 228,
    aux_sym_interface_inheritance_spec_repeat1 = 229,
    aux_sym_interface_body_repeat1 = 230,
    aux_sym_parameter_dcls_repeat1 = 231,
    aux_sym_raises_expr_repeat1 = 232,
    aux_sym_readonly_attr_declarator_repeat1 = 233,
    aux_sym_bitset_dcl_repeat1 = 234,
    aux_sym_bitfield_repeat1 = 235,
    aux_sym_bitmask_dcl_repeat1 = 236,
    aux_sym_annotation_body_repeat1 = 237,
    aux_sym_struct_def_repeat1 = 238,
    aux_sym_member_repeat1 = 239,
    aux_sym_enum_dcl_repeat1 = 240,
    aux_sym_enumerator_repeat1 = 241,
    aux_sym_union_def_repeat1 = 242,
    aux_sym_data_representation_repeat1 = 243,
    aux_sym_declarators_repeat1 = 244,
    aux_sym_array_declarator_repeat1 = 245,
    aux_sym_any_declarators_repeat1 = 246,
    alias_sym_data_rep = 247,
    alias_sym_hashid_value = 248,
    alias_sym_try_construct_value = 249,
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
    [anon_sym_LBRACK] = "[",
    [anon_sym_RBRACK] = "]",
    [anon_sym_EQ] = "=",
    [anon_sym_native] = "native",
    [anon_sym_module] = "module",
    [anon_sym_struct] = "struct",
    [anon_sym_enum] = "enum",
    [anon_sym_ATdefault_literal] = "@default_literal",
    [anon_sym_ATignore_literal_names] = "@ignore_literal_names",
    [anon_sym_union] = "union",
    [anon_sym_switch] = "switch",
    [anon_sym_case] = "case",
    [anon_sym_typedef] = "typedef",
    [anon_sym_POUNDdefine] = "#define",
    [aux_sym_predefine_token1] = "predefine_token1",
    [sym_dds_service] = "dds_service",
    [anon_sym_ATDDSRequestTopic] = "@DDSRequestTopic",
    [anon_sym_name] = "name",
    [anon_sym_ATDDSReplyTopic] = "@DDSReplyTopic",
    [anon_sym_const] = "const",
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
    [aux_sym_annotation_body_repeat1] = "annotation_body_repeat1",
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
    [anon_sym_LBRACK] = anon_sym_LBRACK,
    [anon_sym_RBRACK] = anon_sym_RBRACK,
    [anon_sym_EQ] = anon_sym_EQ,
    [anon_sym_native] = anon_sym_native,
    [anon_sym_module] = anon_sym_module,
    [anon_sym_struct] = anon_sym_struct,
    [anon_sym_enum] = anon_sym_enum,
    [anon_sym_ATdefault_literal] = anon_sym_ATdefault_literal,
    [anon_sym_ATignore_literal_names] = anon_sym_ATignore_literal_names,
    [anon_sym_union] = anon_sym_union,
    [anon_sym_switch] = anon_sym_switch,
    [anon_sym_case] = anon_sym_case,
    [anon_sym_typedef] = anon_sym_typedef,
    [anon_sym_POUNDdefine] = anon_sym_POUNDdefine,
    [aux_sym_predefine_token1] = aux_sym_predefine_token1,
    [sym_dds_service] = sym_dds_service,
    [anon_sym_ATDDSRequestTopic] = anon_sym_ATDDSRequestTopic,
    [anon_sym_name] = anon_sym_name,
    [anon_sym_ATDDSReplyTopic] = anon_sym_ATDDSReplyTopic,
    [anon_sym_const] = anon_sym_const,
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
    [aux_sym_annotation_body_repeat1] = aux_sym_annotation_body_repeat1,
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
    [anon_sym_LBRACK] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_RBRACK] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_EQ] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_native] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_module] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_struct] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_enum] = {
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
    [anon_sym_union] = {
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
    [anon_sym_const] = {
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
    [aux_sym_annotation_body_repeat1] = {
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
    [5] = { field_parent, 3 },
    [6] = { field_value, 1 },
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
    [39] = 38,
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
    [71] = 69,
    [72] = 72,
    [73] = 73,
    [74] = 74,
    [75] = 73,
    [76] = 76,
    [77] = 76,
    [78] = 78,
    [79] = 79,
    [80] = 80,
    [81] = 78,
    [82] = 82,
    [83] = 83,
    [84] = 84,
    [85] = 85,
    [86] = 86,
    [87] = 87,
    [88] = 87,
    [89] = 89,
    [90] = 89,
    [91] = 91,
    [92] = 91,
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
    [112] = 111,
    [113] = 113,
    [114] = 114,
    [115] = 95,
    [116] = 93,
    [117] = 107,
    [118] = 94,
    [119] = 110,
    [120] = 120,
    [121] = 109,
    [122] = 122,
    [123] = 123,
    [124] = 124,
    [125] = 125,
    [126] = 126,
    [127] = 127,
    [128] = 128,
    [129] = 129,
    [130] = 130,
    [131] = 113,
    [132] = 114,
    [133] = 133,
    [134] = 134,
    [135] = 135,
    [136] = 122,
    [137] = 137,
    [138] = 138,
    [139] = 139,
    [140] = 140,
    [141] = 140,
    [142] = 120,
    [143] = 143,
    [144] = 144,
    [145] = 145,
    [146] = 143,
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
    [171] = 127,
    [172] = 172,
    [173] = 173,
    [174] = 174,
    [175] = 175,
    [176] = 176,
    [177] = 125,
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
    [201] = 128,
    [202] = 202,
    [203] = 94,
    [204] = 93,
    [205] = 202,
    [206] = 130,
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
    [244] = 198,
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
    [255] = 200,
    [256] = 256,
    [257] = 257,
    [258] = 258,
    [259] = 259,
    [260] = 260,
    [261] = 261,
    [262] = 262,
    [263] = 199,
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
    [279] = 133,
    [280] = 280,
    [281] = 281,
    [282] = 208,
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
    [370] = 208,
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
    [433] = 424,
    [434] = 434,
    [435] = 435,
    [436] = 278,
    [437] = 437,
    [438] = 438,
    [439] = 439,
    [440] = 327,
    [441] = 441,
    [442] = 442,
    [443] = 443,
    [444] = 444,
    [445] = 445,
    [446] = 446,
    [447] = 447,
    [448] = 320,
    [449] = 449,
    [450] = 450,
    [451] = 451,
    [452] = 452,
    [453] = 453,
    [454] = 299,
    [455] = 455,
    [456] = 456,
    [457] = 457,
    [458] = 374,
    [459] = 459,
    [460] = 379,
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
    [472] = 374,
    [473] = 394,
    [474] = 356,
    [475] = 430,
    [476] = 450,
    [477] = 477,
    [478] = 355,
    [479] = 479,
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
                ADVANCE(465);
            if(lookahead == '"')
                ADVANCE(540);
            if(lookahead == '#')
                ADVANCE(138);
            if(lookahead == '$')
                ADVANCE(525);
            if(lookahead == '%')
                ADVANCE(534);
            if(lookahead == '\'')
                ADVANCE(542);
            if(lookahead == '(')
                ADVANCE(535);
            if(lookahead == ')')
                ADVANCE(536);
            if(lookahead == '*')
                ADVANCE(532);
            if(lookahead == '+')
                ADVANCE(528);
            if(lookahead == ',')
                ADVANCE(518);
            if(lookahead == '-')
                ADVANCE(530);
            if(lookahead == '/')
                ADVANCE(533);
            if(lookahead == ':')
                ADVANCE(618);
            if(lookahead == ';')
                ADVANCE(619);
            if(lookahead == '<')
                ADVANCE(513);
            if(lookahead == '=')
                ADVANCE(643);
            if(lookahead == '>')
                ADVANCE(515);
            if(lookahead == '@')
                ADVANCE(640);
            if(lookahead == 'F')
                ADVANCE(544);
            if(lookahead == 'L')
                ADVANCE(538);
            if(lookahead == 'T')
                ADVANCE(546);
            if(lookahead == 'X')
                ADVANCE(545);
            if(lookahead == '[')
                ADVANCE(641);
            if(lookahead == '\\')
                SKIP(458)
            if(lookahead == ']')
                ADVANCE(642);
            if(lookahead == '^')
                ADVANCE(524);
            if(lookahead == 'a')
                ADVANCE(559);
            if(lookahead == 'b')
                ADVANCE(557);
            if(lookahead == 'c')
                ADVANCE(547);
            if(lookahead == 'd')
                ADVANCE(553);
            if(lookahead == 'e')
                ADVANCE(561);
            if(lookahead == 'f')
                ADVANCE(556);
            if(lookahead == 'g')
                ADVANCE(555);
            if(lookahead == 'i')
                ADVANCE(560);
            if(lookahead == 'l')
                ADVANCE(562);
            if(lookahead == 'm')
                ADVANCE(548);
            if(lookahead == 'n')
                ADVANCE(549);
            if(lookahead == 'o')
                ADVANCE(552);
            if(lookahead == 'r')
                ADVANCE(550);
            if(lookahead == 's')
                ADVANCE(554);
            if(lookahead == 't')
                ADVANCE(564);
            if(lookahead == 'u')
                ADVANCE(558);
            if(lookahead == 'v')
                ADVANCE(563);
            if(lookahead == 'w')
                ADVANCE(551);
            if(lookahead == '{')
                ADVANCE(614);
            if(lookahead == '|')
                ADVANCE(523);
            if(lookahead == '}')
                ADVANCE(615);
            if(lookahead == '~')
                ADVANCE(537);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(0)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= '_') ||
               ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(543);
            END_STATE();
        case 1:
            if(lookahead == '\n')
                SKIP(45)
            END_STATE();
        case 2:
            if(lookahead == '\n')
                SKIP(45)
            if(lookahead == '\r')
                SKIP(1)
            END_STATE();
        case 3:
            if(lookahead == '\n')
                SKIP(49)
            END_STATE();
        case 4:
            if(lookahead == '\n')
                SKIP(49)
            if(lookahead == '\r')
                SKIP(3)
            END_STATE();
        case 5:
            if(lookahead == '\n')
                SKIP(46)
            END_STATE();
        case 6:
            if(lookahead == '\n')
                SKIP(46)
            if(lookahead == '\r')
                SKIP(5)
            END_STATE();
        case 7:
            if(lookahead == '\n')
                SKIP(50)
            END_STATE();
        case 8:
            if(lookahead == '\n')
                SKIP(50)
            if(lookahead == '\r')
                SKIP(7)
            END_STATE();
        case 9:
            if(lookahead == '\n')
                SKIP(51)
            END_STATE();
        case 10:
            if(lookahead == '\n')
                SKIP(51)
            if(lookahead == '\r')
                SKIP(9)
            END_STATE();
        case 11:
            if(lookahead == '\n')
                SKIP(52)
            END_STATE();
        case 12:
            if(lookahead == '\n')
                SKIP(52)
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
                SKIP(39)
            END_STATE();
        case 16:
            if(lookahead == '\n')
                SKIP(39)
            if(lookahead == '\r')
                SKIP(15)
            END_STATE();
        case 17:
            if(lookahead == '\n')
                SKIP(41)
            END_STATE();
        case 18:
            if(lookahead == '\n')
                SKIP(41)
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
                SKIP(43)
            END_STATE();
        case 24:
            if(lookahead == '\n')
                SKIP(43)
            if(lookahead == '\r')
                SKIP(23)
            END_STATE();
        case 25:
            if(lookahead == '\n')
                SKIP(54)
            END_STATE();
        case 26:
            if(lookahead == '\n')
                SKIP(54)
            if(lookahead == '\r')
                SKIP(25)
            END_STATE();
        case 27:
            if(lookahead == '\n')
                ADVANCE(599);
            if(lookahead == '\r')
                ADVANCE(30);
            if(lookahead == '/')
                ADVANCE(608);
            if(lookahead == '\\')
                ADVANCE(606);
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                SKIP(58)
            if(lookahead != 0)
                ADVANCE(609);
            END_STATE();
        case 28:
            if(lookahead == '\n')
                ADVANCE(599);
            if(lookahead == '\r')
                ADVANCE(29);
            if(lookahead == '/')
                ADVANCE(48);
            if(lookahead == '\\')
                SKIP(33)
            if(('\t' <= lookahead && lookahead <= '\f') ||
               lookahead == ' ')
                SKIP(55)
            END_STATE();
        case 29:
            if(lookahead == '\n')
                ADVANCE(599);
            if(lookahead == '/')
                ADVANCE(48);
            if(lookahead == '\\')
                SKIP(33)
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(55)
            END_STATE();
        case 30:
            if(lookahead == '\n')
                ADVANCE(599);
            if(lookahead == '/')
                ADVANCE(608);
            if(lookahead == '\\')
                ADVANCE(606);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(58)
            if(lookahead != 0)
                ADVANCE(609);
            END_STATE();
        case 31:
            if(lookahead == '\n')
                ADVANCE(855);
            if(lookahead == '\r')
                ADVANCE(854);
            if(lookahead == '\\')
                ADVANCE(858);
            if(lookahead != 0)
                ADVANCE(857);
            END_STATE();
        case 32:
            if(lookahead == '\n')
                SKIP(55)
            END_STATE();
        case 33:
            if(lookahead == '\n')
                SKIP(55)
            if(lookahead == '\r')
                SKIP(32)
            END_STATE();
        case 34:
            if(lookahead == '\n')
                SKIP(56)
            END_STATE();
        case 35:
            if(lookahead == '\n')
                SKIP(56)
            if(lookahead == '\r')
                SKIP(34)
            END_STATE();
        case 36:
            if(lookahead == '\n')
                SKIP(57)
            END_STATE();
        case 37:
            if(lookahead == '\n')
                SKIP(57)
            if(lookahead == '\r')
                SKIP(36)
            END_STATE();
        case 38:
            if(lookahead == ' ')
                ADVANCE(269);
            END_STATE();
        case 39:
            if(lookahead == '"')
                ADVANCE(540);
            if(lookahead == '\'')
                ADVANCE(542);
            if(lookahead == '(')
                ADVANCE(535);
            if(lookahead == '+')
                ADVANCE(529);
            if(lookahead == '-')
                ADVANCE(531);
            if(lookahead == '.')
                ADVANCE(450);
            if(lookahead == '/')
                ADVANCE(48);
            if(lookahead == '0')
                ADVANCE(576);
            if(lookahead == ':')
                ADVANCE(67);
            if(lookahead == 'F')
                ADVANCE(696);
            if(lookahead == 'L')
                ADVANCE(539);
            if(lookahead == 'T')
                ADVANCE(700);
            if(lookahead == '\\')
                SKIP(16)
            if(lookahead == '~')
                ADVANCE(537);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(39)
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(580);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 40:
            if(lookahead == '"')
                ADVANCE(680);
            END_STATE();
        case 41:
            if(lookahead == '$')
                ADVANCE(525);
            if(lookahead == '%')
                ADVANCE(534);
            if(lookahead == ')')
                ADVANCE(536);
            if(lookahead == '*')
                ADVANCE(532);
            if(lookahead == '+')
                ADVANCE(528);
            if(lookahead == ',')
                ADVANCE(518);
            if(lookahead == '-')
                ADVANCE(530);
            if(lookahead == '/')
                ADVANCE(533);
            if(lookahead == ':')
                ADVANCE(618);
            if(lookahead == ';')
                ADVANCE(619);
            if(lookahead == '<')
                ADVANCE(68);
            if(lookahead == '>')
                ADVANCE(515);
            if(lookahead == '@')
                ADVANCE(153);
            if(lookahead == '\\')
                SKIP(18)
            if(lookahead == ']')
                ADVANCE(642);
            if(lookahead == '^')
                ADVANCE(524);
            if(lookahead == '{')
                ADVANCE(614);
            if(lookahead == '|')
                ADVANCE(523);
            if(lookahead == '}')
                ADVANCE(615);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(41)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 42:
            if(lookahead == '$')
                ADVANCE(525);
            if(lookahead == '%')
                ADVANCE(534);
            if(lookahead == '*')
                ADVANCE(532);
            if(lookahead == '+')
                ADVANCE(528);
            if(lookahead == '-')
                ADVANCE(530);
            if(lookahead == '/')
                ADVANCE(533);
            if(lookahead == '<')
                ADVANCE(68);
            if(lookahead == '>')
                ADVANCE(69);
            if(lookahead == '\\')
                SKIP(20)
            if(lookahead == '^')
                ADVANCE(524);
            if(lookahead == 't')
                ADVANCE(848);
            if(lookahead == '|')
                ADVANCE(523);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(42)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 43:
            if(lookahead == ')')
                ADVANCE(536);
            if(lookahead == ',')
                ADVANCE(518);
            if(lookahead == '/')
                ADVANCE(48);
            if(lookahead == ':')
                ADVANCE(67);
            if(lookahead == '<')
                ADVANCE(512);
            if(lookahead == '>')
                ADVANCE(514);
            if(lookahead == '\\')
                SKIP(24)
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(43)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 44:
            if(lookahead == ')')
                ADVANCE(536);
            if(lookahead == '/')
                ADVANCE(48);
            if(lookahead == '\\')
                SKIP(22)
            if(lookahead == 'i')
                ADVANCE(276);
            if(lookahead == 'o')
                ADVANCE(426);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(44)
            END_STATE();
        case 45:
            if(lookahead == ',')
                ADVANCE(518);
            if(lookahead == '/')
                ADVANCE(48);
            if(lookahead == ':')
                ADVANCE(67);
            if(lookahead == '<')
                ADVANCE(512);
            if(lookahead == '>')
                ADVANCE(514);
            if(lookahead == '@')
                ADVANCE(106);
            if(lookahead == '\\')
                SKIP(2)
            if(lookahead == ']')
                ADVANCE(642);
            if(lookahead == 'a')
                ADVANCE(783);
            if(lookahead == 'b')
                ADVANCE(759);
            if(lookahead == 'c')
                ADVANCE(753);
            if(lookahead == 'd')
                ADVANCE(795);
            if(lookahead == 'e')
                ADVANCE(785);
            if(lookahead == 'f')
                ADVANCE(757);
            if(lookahead == 'i')
                ADVANCE(787);
            if(lookahead == 'l')
                ADVANCE(798);
            if(lookahead == 'm')
                ADVANCE(703);
            if(lookahead == 'n')
                ADVANCE(707);
            if(lookahead == 'o')
                ADVANCE(719);
            if(lookahead == 'r')
                ADVANCE(738);
            if(lookahead == 's')
                ADVANCE(727);
            if(lookahead == 't')
                ADVANCE(848);
            if(lookahead == 'u')
                ADVANCE(767);
            if(lookahead == 'v')
                ADVANCE(796);
            if(lookahead == 'w')
                ADVANCE(715);
            if(lookahead == '}')
                ADVANCE(615);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(45)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 46:
            if(lookahead == ',')
                ADVANCE(518);
            if(lookahead == '/')
                ADVANCE(48);
            if(lookahead == ':')
                ADVANCE(67);
            if(lookahead == '>')
                ADVANCE(514);
            if(lookahead == '@')
                ADVANCE(168);
            if(lookahead == '\\')
                SKIP(6)
            if(lookahead == 'a')
                ADVANCE(784);
            if(lookahead == 'b')
                ADVANCE(799);
            if(lookahead == 'c')
                ADVANCE(754);
            if(lookahead == 'd')
                ADVANCE(795);
            if(lookahead == 'f')
                ADVANCE(757);
            if(lookahead == 'i')
                ADVANCE(787);
            if(lookahead == 'l')
                ADVANCE(798);
            if(lookahead == 'm')
                ADVANCE(703);
            if(lookahead == 'o')
                ADVANCE(719);
            if(lookahead == 's')
                ADVANCE(728);
            if(lookahead == 'u')
                ADVANCE(768);
            if(lookahead == 'w')
                ADVANCE(715);
            if(lookahead == '}')
                ADVANCE(615);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(46)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 47:
            if(lookahead == '.')
                ADVANCE(450);
            if(lookahead == '0')
                ADVANCE(573);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(575);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(589);
            END_STATE();
        case 48:
            if(lookahead == '/')
                ADVANCE(851);
            END_STATE();
        case 49:
            if(lookahead == '/')
                ADVANCE(48);
            if(lookahead == ':')
                ADVANCE(67);
            if(lookahead == '@')
                ADVANCE(106);
            if(lookahead == '\\')
                SKIP(4)
            if(lookahead == 'a')
                ADVANCE(784);
            if(lookahead == 'b')
                ADVANCE(759);
            if(lookahead == 'c')
                ADVANCE(754);
            if(lookahead == 'd')
                ADVANCE(795);
            if(lookahead == 'e')
                ADVANCE(786);
            if(lookahead == 'f')
                ADVANCE(757);
            if(lookahead == 'i')
                ADVANCE(787);
            if(lookahead == 'l')
                ADVANCE(798);
            if(lookahead == 'm')
                ADVANCE(703);
            if(lookahead == 'o')
                ADVANCE(719);
            if(lookahead == 's')
                ADVANCE(727);
            if(lookahead == 'u')
                ADVANCE(767);
            if(lookahead == 'w')
                ADVANCE(715);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(49)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 50:
            if(lookahead == '/')
                ADVANCE(48);
            if(lookahead == ':')
                ADVANCE(67);
            if(lookahead == '@')
                ADVANCE(239);
            if(lookahead == '\\')
                SKIP(8)
            if(lookahead == 'a')
                ADVANCE(784);
            if(lookahead == 'b')
                ADVANCE(799);
            if(lookahead == 'c')
                ADVANCE(754);
            if(lookahead == 'd')
                ADVANCE(795);
            if(lookahead == 'e')
                ADVANCE(786);
            if(lookahead == 'f')
                ADVANCE(757);
            if(lookahead == 'i')
                ADVANCE(787);
            if(lookahead == 'l')
                ADVANCE(798);
            if(lookahead == 'o')
                ADVANCE(719);
            if(lookahead == 's')
                ADVANCE(728);
            if(lookahead == 'u')
                ADVANCE(768);
            if(lookahead == 'w')
                ADVANCE(715);
            if(lookahead == '}')
                ADVANCE(615);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(50)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 51:
            if(lookahead == '/')
                ADVANCE(48);
            if(lookahead == ':')
                ADVANCE(67);
            if(lookahead == '\\')
                SKIP(10)
            if(lookahead == 'a')
                ADVANCE(784);
            if(lookahead == 'b')
                ADVANCE(799);
            if(lookahead == 'c')
                ADVANCE(708);
            if(lookahead == 'd')
                ADVANCE(735);
            if(lookahead == 'f')
                ADVANCE(757);
            if(lookahead == 'i')
                ADVANCE(787);
            if(lookahead == 'l')
                ADVANCE(798);
            if(lookahead == 'm')
                ADVANCE(703);
            if(lookahead == 'o')
                ADVANCE(719);
            if(lookahead == 's')
                ADVANCE(728);
            if(lookahead == 'u')
                ADVANCE(768);
            if(lookahead == 'w')
                ADVANCE(715);
            if(lookahead == '}')
                ADVANCE(615);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(51)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 52:
            if(lookahead == '/')
                ADVANCE(48);
            if(lookahead == ':')
                ADVANCE(67);
            if(lookahead == '\\')
                SKIP(12)
            if(lookahead == 'b')
                ADVANCE(799);
            if(lookahead == 'c')
                ADVANCE(754);
            if(lookahead == 'd')
                ADVANCE(795);
            if(lookahead == 'f')
                ADVANCE(757);
            if(lookahead == 'i')
                ADVANCE(787);
            if(lookahead == 'l')
                ADVANCE(798);
            if(lookahead == 'o')
                ADVANCE(719);
            if(lookahead == 's')
                ADVANCE(728);
            if(lookahead == 'u')
                ADVANCE(768);
            if(lookahead == 'w')
                ADVANCE(715);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(52)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 53:
            if(lookahead == '/')
                ADVANCE(48);
            if(lookahead == ':')
                ADVANCE(67);
            if(lookahead == '\\')
                SKIP(14)
            if(lookahead == 'b')
                ADVANCE(799);
            if(lookahead == 'c')
                ADVANCE(754);
            if(lookahead == 'i')
                ADVANCE(787);
            if(lookahead == 'l')
                ADVANCE(805);
            if(lookahead == 's')
                ADVANCE(755);
            if(lookahead == 'u')
                ADVANCE(768);
            if(lookahead == 'w')
                ADVANCE(716);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(53)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 54:
            if(lookahead == '/')
                ADVANCE(48);
            if(lookahead == ';')
                ADVANCE(619);
            if(lookahead == '\\')
                SKIP(26)
            if(lookahead == 's')
                ADVANCE(844);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(54)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 55:
            if(lookahead == '/')
                ADVANCE(48);
            if(lookahead == '\\')
                SKIP(33)
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(55)
            END_STATE();
        case 56:
            if(lookahead == '/')
                ADVANCE(48);
            if(lookahead == '\\')
                SKIP(35)
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(56)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(541);
            END_STATE();
        case 57:
            if(lookahead == '/')
                ADVANCE(48);
            if(lookahead == '\\')
                SKIP(37)
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(57)
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(543);
            END_STATE();
        case 58:
            if(lookahead == '/')
                ADVANCE(608);
            if(lookahead == '\\')
                ADVANCE(606);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(58)
            if(lookahead != 0)
                ADVANCE(609);
            END_STATE();
        case 59:
            if(lookahead == '1')
                ADVANCE(65);
            if(lookahead == '3')
                ADVANCE(61);
            if(lookahead == '6')
                ADVANCE(63);
            if(lookahead == '8')
                ADVANCE(479);
            END_STATE();
        case 60:
            if(lookahead == '1')
                ADVANCE(66);
            if(lookahead == '3')
                ADVANCE(62);
            if(lookahead == '6')
                ADVANCE(64);
            if(lookahead == '8')
                ADVANCE(487);
            if(lookahead == 'e')
                ADVANCE(359);
            END_STATE();
        case 61:
            if(lookahead == '2')
                ADVANCE(493);
            END_STATE();
        case 62:
            if(lookahead == '2')
                ADVANCE(474);
            END_STATE();
        case 63:
            if(lookahead == '4')
                ADVANCE(496);
            END_STATE();
        case 64:
            if(lookahead == '4')
                ADVANCE(477);
            END_STATE();
        case 65:
            if(lookahead == '6')
                ADVANCE(490);
            END_STATE();
        case 66:
            if(lookahead == '6')
                ADVANCE(468);
            END_STATE();
        case 67:
            if(lookahead == ':')
                ADVANCE(507);
            END_STATE();
        case 68:
            if(lookahead == '<')
                ADVANCE(527);
            END_STATE();
        case 69:
            if(lookahead == '>')
                ADVANCE(526);
            END_STATE();
        case 70:
            if(lookahead == 'C')
                ADVANCE(71);
            END_STATE();
        case 71:
            if(lookahead == 'D')
                ADVANCE(77);
            END_STATE();
        case 72:
            if(lookahead == 'D')
                ADVANCE(73);
            if(lookahead == 'a')
                ADVANCE(295);
            if(lookahead == 'd')
                ADVANCE(112);
            if(lookahead == 'f')
                ADVANCE(234);
            if(lookahead == 'i')
                ADVANCE(214);
            END_STATE();
        case 73:
            if(lookahead == 'D')
                ADVANCE(79);
            END_STATE();
        case 74:
            if(lookahead == 'E')
                ADVANCE(565);
            END_STATE();
        case 75:
            if(lookahead == 'E')
                ADVANCE(567);
            END_STATE();
        case 76:
            if(lookahead == 'L')
                ADVANCE(80);
            END_STATE();
        case 77:
            if(lookahead == 'R')
                ADVANCE(684);
            END_STATE();
        case 78:
            if(lookahead == 'R')
                ADVANCE(163);
            if(lookahead == 'S')
                ADVANCE(187);
            END_STATE();
        case 79:
            if(lookahead == 'S')
                ADVANCE(78);
            END_STATE();
        case 80:
            if(lookahead == 'S')
                ADVANCE(75);
            END_STATE();
        case 81:
            if(lookahead == 'T')
                ADVANCE(315);
            END_STATE();
        case 82:
            if(lookahead == 'T')
                ADVANCE(326);
            END_STATE();
        case 83:
            if(lookahead == 'U')
                ADVANCE(74);
            END_STATE();
        case 84:
            if(lookahead == '_')
                ADVANCE(132);
            END_STATE();
        case 85:
            if(lookahead == '_')
                ADVANCE(268);
            END_STATE();
        case 86:
            if(lookahead == '_')
                ADVANCE(429);
            END_STATE();
        case 87:
            if(lookahead == '_')
                ADVANCE(360);
            END_STATE();
        case 88:
            if(lookahead == '_')
                ADVANCE(297);
            END_STATE();
        case 89:
            if(lookahead == '_')
                ADVANCE(379);
            END_STATE();
        case 90:
            if(lookahead == '_')
                ADVANCE(271);
            END_STATE();
        case 91:
            if(lookahead == 'a')
                ADVANCE(364);
            if(lookahead == 'o')
                ADVANCE(282);
            END_STATE();
        case 92:
            if(lookahead == 'a')
                ADVANCE(273);
            END_STATE();
        case 93:
            if(lookahead == 'a')
                ADVANCE(238);
            END_STATE();
        case 94:
            if(lookahead == 'a')
                ADVANCE(87);
            END_STATE();
        case 95:
            if(lookahead == 'a')
                ADVANCE(152);
            END_STATE();
        case 96:
            if(lookahead == 'a')
                ADVANCE(251);
            END_STATE();
        case 97:
            if(lookahead == 'a')
                ADVANCE(275);
            END_STATE();
        case 98:
            if(lookahead == 'a')
                ADVANCE(365);
            END_STATE();
        case 99:
            if(lookahead == 'a')
                ADVANCE(343);
            END_STATE();
        case 100:
            if(lookahead == 'a')
                ADVANCE(425);
            END_STATE();
        case 101:
            if(lookahead == 'a')
                ADVANCE(344);
            END_STATE();
        case 102:
            if(lookahead == 'a')
                ADVANCE(252);
            END_STATE();
        case 103:
            if(lookahead == 'a')
                ADVANCE(386);
            END_STATE();
        case 104:
            if(lookahead == 'a')
                ADVANCE(370);
            END_STATE();
        case 105:
            if(lookahead == 'a')
                ADVANCE(278);
            END_STATE();
        case 106:
            if(lookahead == 'a')
                ADVANCE(295);
            if(lookahead == 'd')
                ADVANCE(112);
            if(lookahead == 'f')
                ADVANCE(234);
            if(lookahead == 'i')
                ADVANCE(214);
            END_STATE();
        case 107:
            if(lookahead == 'a')
                ADVANCE(257);
            END_STATE();
        case 108:
            if(lookahead == 'a')
                ADVANCE(253);
            END_STATE();
        case 109:
            if(lookahead == 'a')
                ADVANCE(254);
            END_STATE();
        case 110:
            if(lookahead == 'a')
                ADVANCE(265);
            END_STATE();
        case 111:
            if(lookahead == 'a')
                ADVANCE(255);
            END_STATE();
        case 112:
            if(lookahead == 'a')
                ADVANCE(405);
            END_STATE();
        case 113:
            if(lookahead == 'a')
                ADVANCE(296);
            END_STATE();
        case 114:
            if(lookahead == 'a')
                ADVANCE(399);
            END_STATE();
        case 115:
            if(lookahead == 'a')
                ADVANCE(432);
            END_STATE();
        case 116:
            if(lookahead == 'a')
                ADVANCE(136);
            END_STATE();
        case 117:
            if(lookahead == 'a')
                ADVANCE(241);
            END_STATE();
        case 118:
            if(lookahead == 'a')
                ADVANCE(415);
            END_STATE();
        case 119:
            if(lookahead == 'a')
                ADVANCE(244);
            END_STATE();
        case 120:
            if(lookahead == 'a')
                ADVANCE(417);
            END_STATE();
        case 121:
            if(lookahead == 'b')
                ADVANCE(431);
            END_STATE();
        case 122:
            if(lookahead == 'b')
                ADVANCE(262);
            END_STATE();
        case 123:
            if(lookahead == 'b')
                ADVANCE(266);
            END_STATE();
        case 124:
            if(lookahead == 'c')
                ADVANCE(670);
            END_STATE();
        case 125:
            if(lookahead == 'c')
                ADVANCE(668);
            END_STATE();
        case 126:
            if(lookahead == 'c')
                ADVANCE(215);
            END_STATE();
        case 127:
            if(lookahead == 'c')
                ADVANCE(171);
            END_STATE();
        case 128:
            if(lookahead == 'c')
                ADVANCE(401);
            END_STATE();
        case 129:
            if(lookahead == 'c')
                ADVANCE(96);
            END_STATE();
        case 130:
            if(lookahead == 'c')
                ADVANCE(96);
            if(lookahead == 'n')
                ADVANCE(206);
            END_STATE();
        case 131:
            if(lookahead == 'c')
                ADVANCE(96);
            if(lookahead == 'n')
                ADVANCE(212);
            END_STATE();
        case 132:
            if(lookahead == 'c')
                ADVANCE(325);
            END_STATE();
        case 133:
            if(lookahead == 'c')
                ADVANCE(391);
            END_STATE();
        case 134:
            if(lookahead == 'c')
                ADVANCE(160);
            END_STATE();
        case 135:
            if(lookahead == 'c')
                ADVANCE(395);
            END_STATE();
        case 136:
            if(lookahead == 'c')
                ADVANCE(164);
            END_STATE();
        case 137:
            if(lookahead == 'c')
                ADVANCE(165);
            END_STATE();
        case 138:
            if(lookahead == 'd')
                ADVANCE(600);
            if(lookahead == '\t' ||
               lookahead == ' ')
                ADVANCE(448);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(605);
            END_STATE();
        case 139:
            if(lookahead == 'd')
                ADVANCE(620);
            END_STATE();
        case 140:
            if(lookahead == 'd')
                ADVANCE(483);
            END_STATE();
        case 141:
            if(lookahead == 'd')
                ADVANCE(634);
            END_STATE();
        case 142:
            if(lookahead == 'd')
                ADVANCE(38);
            END_STATE();
        case 143:
            if(lookahead == 'd')
                ADVANCE(677);
            END_STATE();
        case 144:
            if(lookahead == 'd')
                ADVANCE(679);
            END_STATE();
        case 145:
            if(lookahead == 'd')
                ADVANCE(676);
            END_STATE();
        case 146:
            if(lookahead == 'd')
                ADVANCE(675);
            END_STATE();
        case 147:
            if(lookahead == 'd')
                ADVANCE(433);
            END_STATE();
        case 148:
            if(lookahead == 'd')
                ADVANCE(332);
            if(lookahead == 'l')
                ADVANCE(328);
            END_STATE();
        case 149:
            if(lookahead == 'd')
                ADVANCE(167);
            END_STATE();
        case 150:
            if(lookahead == 'd')
                ADVANCE(190);
            END_STATE();
        case 151:
            if(lookahead == 'd')
                ADVANCE(170);
            END_STATE();
        case 152:
            if(lookahead == 'd')
                ADVANCE(314);
            END_STATE();
        case 153:
            if(lookahead == 'd')
                ADVANCE(198);
            END_STATE();
        case 154:
            if(lookahead == 'e')
                ADVANCE(201);
            END_STATE();
        case 155:
            if(lookahead == 'e')
                ADVANCE(657);
            END_STATE();
        case 156:
            if(lookahead == 'e')
                ADVANCE(669);
            END_STATE();
        case 157:
            if(lookahead == 'e')
                ADVANCE(500);
            END_STATE();
        case 158:
            if(lookahead == 'e')
                ADVANCE(646);
            END_STATE();
        case 159:
            if(lookahead == 'e')
                ADVANCE(644);
            END_STATE();
        case 160:
            if(lookahead == 'e')
                ADVANCE(519);
            END_STATE();
        case 161:
            if(lookahead == 'e')
                ADVANCE(628);
            END_STATE();
        case 162:
            if(lookahead == 'e')
                ADVANCE(502);
            END_STATE();
        case 163:
            if(lookahead == 'e')
                ADVANCE(334);
            END_STATE();
        case 164:
            if(lookahead == 'e')
                ADVANCE(616);
            END_STATE();
        case 165:
            if(lookahead == 'e')
                ADVANCE(667);
            END_STATE();
        case 166:
            if(lookahead == 'e')
                ADVANCE(661);
            END_STATE();
        case 167:
            if(lookahead == 'e')
                ADVANCE(200);
            END_STATE();
        case 168:
            if(lookahead == 'e')
                ADVANCE(440);
            if(lookahead == 'h')
                ADVANCE(104);
            if(lookahead == 'i')
                ADVANCE(143);
            if(lookahead == 'k')
                ADVANCE(176);
            if(lookahead == 'm')
                ADVANCE(434);
            if(lookahead == 'n')
                ADVANCE(322);
            if(lookahead == 'o')
                ADVANCE(340);
            if(lookahead == 't')
                ADVANCE(346);
            END_STATE();
        case 169:
            if(lookahead == 'e')
                ADVANCE(85);
            END_STATE();
        case 170:
            if(lookahead == 'e')
                ADVANCE(204);
            END_STATE();
        case 171:
            if(lookahead == 'e')
                ADVANCE(336);
            END_STATE();
        case 172:
            if(lookahead == 'e')
                ADVANCE(366);
            END_STATE();
        case 173:
            if(lookahead == 'e')
                ADVANCE(339);
            END_STATE();
        case 174:
            if(lookahead == 'e')
                ADVANCE(140);
            END_STATE();
        case 175:
            if(lookahead == 'e')
                ADVANCE(260);
            END_STATE();
        case 176:
            if(lookahead == 'e')
                ADVANCE(444);
            END_STATE();
        case 177:
            if(lookahead == 'e')
                ADVANCE(367);
            END_STATE();
        case 178:
            if(lookahead == 'e')
                ADVANCE(149);
            END_STATE();
        case 179:
            if(lookahead == 'e')
                ADVANCE(368);
            END_STATE();
        case 180:
            if(lookahead == 'e')
                ADVANCE(302);
            END_STATE();
        case 181:
            if(lookahead == 'e')
                ADVANCE(369);
            END_STATE();
        case 182:
            if(lookahead == 'e')
                ADVANCE(142);
            END_STATE();
        case 183:
            if(lookahead == 'e')
                ADVANCE(105);
            END_STATE();
        case 184:
            if(lookahead == 'e')
                ADVANCE(359);
            END_STATE();
        case 185:
            if(lookahead == 'e')
                ADVANCE(388);
            END_STATE();
        case 186:
            if(lookahead == 'e')
                ADVANCE(145);
            END_STATE();
        case 187:
            if(lookahead == 'e')
                ADVANCE(345);
            END_STATE();
        case 188:
            if(lookahead == 'e')
                ADVANCE(390);
            END_STATE();
        case 189:
            if(lookahead == 'e')
                ADVANCE(355);
            END_STATE();
        case 190:
            if(lookahead == 'e')
                ADVANCE(362);
            END_STATE();
        case 191:
            if(lookahead == 'e')
                ADVANCE(400);
            END_STATE();
        case 192:
            if(lookahead == 'e')
                ADVANCE(375);
            END_STATE();
        case 193:
            if(lookahead == 'e')
                ADVANCE(352);
            END_STATE();
        case 194:
            if(lookahead == 'e')
                ADVANCE(308);
            END_STATE();
        case 195:
            if(lookahead == 'e')
                ADVANCE(353);
            END_STATE();
        case 196:
            if(lookahead == 'e')
                ADVANCE(356);
            END_STATE();
        case 197:
            if(lookahead == 'e')
                ADVANCE(378);
            END_STATE();
        case 198:
            if(lookahead == 'e')
                ADVANCE(205);
            END_STATE();
        case 199:
            if(lookahead == 'e')
                ADVANCE(420);
            if(lookahead == 'h')
                ADVANCE(316);
            if(lookahead == 't')
                ADVANCE(349);
            END_STATE();
        case 200:
            if(lookahead == 'f')
                ADVANCE(659);
            END_STATE();
        case 201:
            if(lookahead == 'f')
                ADVANCE(100);
            END_STATE();
        case 202:
            if(lookahead == 'f')
                ADVANCE(233);
            if(lookahead == 'm')
                ADVANCE(98);
            if(lookahead == 's')
                ADVANCE(188);
            END_STATE();
        case 203:
            if(lookahead == 'f')
                ADVANCE(116);
            END_STATE();
        case 204:
            if(lookahead == 'f')
                ADVANCE(236);
            END_STATE();
        case 205:
            if(lookahead == 'f')
                ADVANCE(115);
            END_STATE();
        case 206:
            if(lookahead == 'g')
                ADVANCE(470);
            END_STATE();
        case 207:
            if(lookahead == 'g')
                ADVANCE(508);
            END_STATE();
        case 208:
            if(lookahead == 'g')
                ADVANCE(510);
            END_STATE();
        case 209:
            if(lookahead == 'g')
                ADVANCE(476);
            END_STATE();
        case 210:
            if(lookahead == 'g')
                ADVANCE(492);
            END_STATE();
        case 211:
            if(lookahead == 'g')
                ADVANCE(495);
            END_STATE();
        case 212:
            if(lookahead == 'g')
                ADVANCE(472);
            END_STATE();
        case 213:
            if(lookahead == 'g')
                ADVANCE(306);
            END_STATE();
        case 214:
            if(lookahead == 'g')
                ADVANCE(303);
            END_STATE();
        case 215:
            if(lookahead == 'h')
                ADVANCE(655);
            END_STATE();
        case 216:
            if(lookahead == 'h')
                ADVANCE(232);
            END_STATE();
        case 217:
            if(lookahead == 'h')
                ADVANCE(101);
            END_STATE();
        case 218:
            if(lookahead == 'h')
                ADVANCE(327);
            END_STATE();
        case 219:
            if(lookahead == 'i')
                ADVANCE(438);
            END_STATE();
        case 220:
            if(lookahead == 'i')
                ADVANCE(447);
            END_STATE();
        case 221:
            if(lookahead == 'i')
                ADVANCE(382);
            if(lookahead == 'o')
                ADVANCE(311);
            END_STATE();
        case 222:
            if(lookahead == 'i')
                ADVANCE(289);
            if(lookahead == 'n')
                ADVANCE(228);
            END_STATE();
        case 223:
            if(lookahead == 'i')
                ADVANCE(121);
            END_STATE();
        case 224:
            if(lookahead == 'i')
                ADVANCE(213);
            END_STATE();
        case 225:
            if(lookahead == 'i')
                ADVANCE(284);
            if(lookahead == 'u')
                ADVANCE(133);
            END_STATE();
        case 226:
            if(lookahead == 'i')
                ADVANCE(139);
            END_STATE();
        case 227:
            if(lookahead == 'i')
                ADVANCE(313);
            END_STATE();
        case 228:
            if(lookahead == 'i')
                ADVANCE(313);
            if(lookahead == 's')
                ADVANCE(224);
            END_STATE();
        case 229:
            if(lookahead == 'i')
                ADVANCE(124);
            END_STATE();
        case 230:
            if(lookahead == 'i')
                ADVANCE(398);
            END_STATE();
        case 231:
            if(lookahead == 'i')
                ADVANCE(125);
            END_STATE();
        case 232:
            if(lookahead == 'i')
                ADVANCE(144);
            END_STATE();
        case 233:
            if(lookahead == 'i')
                ADVANCE(175);
            END_STATE();
        case 234:
            if(lookahead == 'i')
                ADVANCE(294);
            END_STATE();
        case 235:
            if(lookahead == 'i')
                ADVANCE(110);
            END_STATE();
        case 236:
            if(lookahead == 'i')
                ADVANCE(301);
            END_STATE();
        case 237:
            if(lookahead == 'i')
                ADVANCE(396);
            END_STATE();
        case 238:
            if(lookahead == 'i')
                ADVANCE(372);
            END_STATE();
        case 239:
            if(lookahead == 'i')
                ADVANCE(214);
            END_STATE();
        case 240:
            if(lookahead == 'i')
                ADVANCE(285);
            END_STATE();
        case 241:
            if(lookahead == 'i')
                ADVANCE(373);
            END_STATE();
        case 242:
            if(lookahead == 'i')
                ADVANCE(407);
            END_STATE();
        case 243:
            if(lookahead == 'i')
                ADVANCE(318);
            END_STATE();
        case 244:
            if(lookahead == 'i')
                ADVANCE(374);
            END_STATE();
        case 245:
            if(lookahead == 'i')
                ADVANCE(137);
            END_STATE();
        case 246:
            if(lookahead == 'i')
                ADVANCE(320);
            END_STATE();
        case 247:
            if(lookahead == 'i')
                ADVANCE(321);
            END_STATE();
        case 248:
            if(lookahead == 'i')
                ADVANCE(323);
            END_STATE();
        case 249:
            if(lookahead == 'i')
                ADVANCE(416);
            END_STATE();
        case 250:
            if(lookahead == 'k')
                ADVANCE(635);
            END_STATE();
        case 251:
            if(lookahead == 'l')
                ADVANCE(617);
            END_STATE();
        case 252:
            if(lookahead == 'l')
                ADVANCE(682);
            END_STATE();
        case 253:
            if(lookahead == 'l')
                ADVANCE(678);
            END_STATE();
        case 254:
            if(lookahead == 'l')
                ADVANCE(673);
            END_STATE();
        case 255:
            if(lookahead == 'l')
                ADVANCE(651);
            END_STATE();
        case 256:
            if(lookahead == 'l')
                ADVANCE(442);
            END_STATE();
        case 257:
            if(lookahead == 'l')
                ADVANCE(88);
            END_STATE();
        case 258:
            if(lookahead == 'l')
                ADVANCE(443);
            END_STATE();
        case 259:
            if(lookahead == 'l')
                ADVANCE(328);
            END_STATE();
        case 260:
            if(lookahead == 'l')
                ADVANCE(141);
            END_STATE();
        case 261:
            if(lookahead == 'l')
                ADVANCE(183);
            END_STATE();
        case 262:
            if(lookahead == 'l')
                ADVANCE(157);
            END_STATE();
        case 263:
            if(lookahead == 'l')
                ADVANCE(158);
            END_STATE();
        case 264:
            if(lookahead == 'l')
                ADVANCE(392);
            END_STATE();
        case 265:
            if(lookahead == 'l')
                ADVANCE(220);
            END_STATE();
        case 266:
            if(lookahead == 'l')
                ADVANCE(162);
            END_STATE();
        case 267:
            if(lookahead == 'l')
                ADVANCE(421);
            END_STATE();
        case 268:
            if(lookahead == 'l')
                ADVANCE(242);
            END_STATE();
        case 269:
            if(lookahead == 'l')
                ADVANCE(329);
            if(lookahead == 's')
                ADVANCE(218);
            END_STATE();
        case 270:
            if(lookahead == 'l')
                ADVANCE(330);
            END_STATE();
        case 271:
            if(lookahead == 'l')
                ADVANCE(249);
            END_STATE();
        case 272:
            if(lookahead == 'm')
                ADVANCE(649);
            END_STATE();
        case 273:
            if(lookahead == 'm')
                ADVANCE(156);
            if(lookahead == 't')
                ADVANCE(219);
            END_STATE();
        case 274:
            if(lookahead == 'm')
                ADVANCE(98);
            if(lookahead == 's')
                ADVANCE(188);
            END_STATE();
        case 275:
            if(lookahead == 'm')
                ADVANCE(181);
            END_STATE();
        case 276:
            if(lookahead == 'n')
                ADVANCE(622);
            END_STATE();
        case 277:
            if(lookahead == 'n')
                ADVANCE(653);
            END_STATE();
        case 278:
            if(lookahead == 'n')
                ADVANCE(481);
            END_STATE();
        case 279:
            if(lookahead == 'n')
                ADVANCE(612);
            END_STATE();
        case 280:
            if(lookahead == 'n')
                ADVANCE(637);
            END_STATE();
        case 281:
            if(lookahead == 'n')
                ADVANCE(683);
            END_STATE();
        case 282:
            if(lookahead == 'n')
                ADVANCE(371);
            END_STATE();
        case 283:
            if(lookahead == 'n')
                ADVANCE(423);
            if(lookahead == 'x')
                ADVANCE(127);
            END_STATE();
        case 284:
            if(lookahead == 'n')
                ADVANCE(207);
            END_STATE();
        case 285:
            if(lookahead == 'n')
                ADVANCE(208);
            END_STATE();
        case 286:
            if(lookahead == 'n')
                ADVANCE(89);
            END_STATE();
        case 287:
            if(lookahead == 'n')
                ADVANCE(256);
            END_STATE();
        case 288:
            if(lookahead == 'n')
                ADVANCE(209);
            END_STATE();
        case 289:
            if(lookahead == 'n')
                ADVANCE(384);
            END_STATE();
        case 290:
            if(lookahead == 'n')
                ADVANCE(210);
            END_STATE();
        case 291:
            if(lookahead == 'n')
                ADVANCE(211);
            END_STATE();
        case 292:
            if(lookahead == 'n')
                ADVANCE(324);
            END_STATE();
        case 293:
            if(lookahead == 'n')
                ADVANCE(380);
            END_STATE();
        case 294:
            if(lookahead == 'n')
                ADVANCE(102);
            END_STATE();
        case 295:
            if(lookahead == 'n')
                ADVANCE(292);
            END_STATE();
        case 296:
            if(lookahead == 'n')
                ADVANCE(146);
            END_STATE();
        case 297:
            if(lookahead == 'n')
                ADVANCE(97);
            END_STATE();
        case 298:
            if(lookahead == 'n')
                ADVANCE(108);
            END_STATE();
        case 299:
            if(lookahead == 'n')
                ADVANCE(109);
            END_STATE();
        case 300:
            if(lookahead == 'n')
                ADVANCE(394);
            END_STATE();
        case 301:
            if(lookahead == 'n')
                ADVANCE(166);
            END_STATE();
        case 302:
            if(lookahead == 'n')
                ADVANCE(134);
            END_STATE();
        case 303:
            if(lookahead == 'n')
                ADVANCE(319);
            END_STATE();
        case 304:
            if(lookahead == 'n')
                ADVANCE(150);
            END_STATE();
        case 305:
            if(lookahead == 'n')
                ADVANCE(227);
            END_STATE();
        case 306:
            if(lookahead == 'n')
                ADVANCE(182);
            END_STATE();
        case 307:
            if(lookahead == 'n')
                ADVANCE(409);
            END_STATE();
        case 308:
            if(lookahead == 'n')
                ADVANCE(419);
            END_STATE();
        case 309:
            if(lookahead == 'o')
                ADVANCE(282);
            END_STATE();
        case 310:
            if(lookahead == 'o')
                ADVANCE(147);
            END_STATE();
        case 311:
            if(lookahead == 'o')
                ADVANCE(261);
            END_STATE();
        case 312:
            if(lookahead == 'o')
                ADVANCE(103);
            END_STATE();
        case 313:
            if(lookahead == 'o')
                ADVANCE(277);
            END_STATE();
        case 314:
            if(lookahead == 'o')
                ADVANCE(287);
            END_STATE();
        case 315:
            if(lookahead == 'o')
                ADVANCE(335);
            END_STATE();
        case 316:
            if(lookahead == 'o')
                ADVANCE(351);
            END_STATE();
        case 317:
            if(lookahead == 'o')
                ADVANCE(129);
            END_STATE();
        case 318:
            if(lookahead == 'o')
                ADVANCE(279);
            END_STATE();
        case 319:
            if(lookahead == 'o')
                ADVANCE(357);
            END_STATE();
        case 320:
            if(lookahead == 'o')
                ADVANCE(280);
            END_STATE();
        case 321:
            if(lookahead == 'o')
                ADVANCE(281);
            END_STATE();
        case 322:
            if(lookahead == 'o')
                ADVANCE(286);
            END_STATE();
        case 323:
            if(lookahead == 'o')
                ADVANCE(299);
            END_STATE();
        case 324:
            if(lookahead == 'o')
                ADVANCE(412);
            END_STATE();
        case 325:
            if(lookahead == 'o')
                ADVANCE(293);
            END_STATE();
        case 326:
            if(lookahead == 'o')
                ADVANCE(337);
            END_STATE();
        case 327:
            if(lookahead == 'o')
                ADVANCE(354);
            END_STATE();
        case 328:
            if(lookahead == 'o')
                ADVANCE(288);
            END_STATE();
        case 329:
            if(lookahead == 'o')
                ADVANCE(290);
            END_STATE();
        case 330:
            if(lookahead == 'o')
                ADVANCE(291);
            END_STATE();
        case 331:
            if(lookahead == 'o')
                ADVANCE(131);
            END_STATE();
        case 332:
            if(lookahead == 'o')
                ADVANCE(436);
            END_STATE();
        case 333:
            if(lookahead == 'p')
                ADVANCE(521);
            END_STATE();
        case 334:
            if(lookahead == 'p')
                ADVANCE(258);
            if(lookahead == 'q')
                ADVANCE(430);
            END_STATE();
        case 335:
            if(lookahead == 'p')
                ADVANCE(229);
            END_STATE();
        case 336:
            if(lookahead == 'p')
                ADVANCE(404);
            END_STATE();
        case 337:
            if(lookahead == 'p')
                ADVANCE(231);
            END_STATE();
        case 338:
            if(lookahead == 'p')
                ADVANCE(178);
            END_STATE();
        case 339:
            if(lookahead == 'p')
                ADVANCE(358);
            END_STATE();
        case 340:
            if(lookahead == 'p')
                ADVANCE(418);
            END_STATE();
        case 341:
            if(lookahead == 'q')
                ADVANCE(427);
            if(lookahead == 't')
                ADVANCE(363);
            END_STATE();
        case 342:
            if(lookahead == 'r')
                ADVANCE(225);
            END_STATE();
        case 343:
            if(lookahead == 'r')
                ADVANCE(503);
            END_STATE();
        case 344:
            if(lookahead == 'r')
                ADVANCE(505);
            END_STATE();
        case 345:
            if(lookahead == 'r')
                ADVANCE(437);
            END_STATE();
        case 346:
            if(lookahead == 'r')
                ADVANCE(446);
            END_STATE();
        case 347:
            if(lookahead == 'r')
                ADVANCE(223);
            END_STATE();
        case 348:
            if(lookahead == 'r')
                ADVANCE(117);
            END_STATE();
        case 349:
            if(lookahead == 'r')
                ADVANCE(424);
            END_STATE();
        case 350:
            if(lookahead == 'r')
                ADVANCE(240);
            END_STATE();
        case 351:
            if(lookahead == 'r')
                ADVANCE(389);
            END_STATE();
        case 352:
            if(lookahead == 'r')
                ADVANCE(107);
            END_STATE();
        case 353:
            if(lookahead == 'r')
                ADVANCE(235);
            END_STATE();
        case 354:
            if(lookahead == 'r')
                ADVANCE(393);
            END_STATE();
        case 355:
            if(lookahead == 'r')
                ADVANCE(298);
            END_STATE();
        case 356:
            if(lookahead == 'r')
                ADVANCE(111);
            END_STATE();
        case 357:
            if(lookahead == 'r')
                ADVANCE(169);
            END_STATE();
        case 358:
            if(lookahead == 'r')
                ADVANCE(197);
            END_STATE();
        case 359:
            if(lookahead == 'r')
                ADVANCE(203);
            END_STATE();
        case 360:
            if(lookahead == 'r')
                ADVANCE(173);
            END_STATE();
        case 361:
            if(lookahead == 'r')
                ADVANCE(435);
            END_STATE();
        case 362:
            if(lookahead == 'r')
                ADVANCE(377);
            END_STATE();
        case 363:
            if(lookahead == 'r')
                ADVANCE(119);
            END_STATE();
        case 364:
            if(lookahead == 's')
                ADVANCE(155);
            END_STATE();
        case 365:
            if(lookahead == 's')
                ADVANCE(250);
            END_STATE();
        case 366:
            if(lookahead == 's')
                ADVANCE(625);
            END_STATE();
        case 367:
            if(lookahead == 's')
                ADVANCE(630);
            END_STATE();
        case 368:
            if(lookahead == 's')
                ADVANCE(631);
            END_STATE();
        case 369:
            if(lookahead == 's')
                ADVANCE(652);
            END_STATE();
        case 370:
            if(lookahead == 's')
                ADVANCE(216);
            END_STATE();
        case 371:
            if(lookahead == 's')
                ADVANCE(385);
            END_STATE();
        case 372:
            if(lookahead == 's')
                ADVANCE(172);
            END_STATE();
        case 373:
            if(lookahead == 's')
                ADVANCE(177);
            END_STATE();
        case 374:
            if(lookahead == 's')
                ADVANCE(179);
            END_STATE();
        case 375:
            if(lookahead == 's')
                ADVANCE(413);
            END_STATE();
        case 376:
            if(lookahead == 's')
                ADVANCE(402);
            END_STATE();
        case 377:
            if(lookahead == 's')
                ADVANCE(411);
            END_STATE();
        case 378:
            if(lookahead == 's')
                ADVANCE(194);
            END_STATE();
        case 379:
            if(lookahead == 's')
                ADVANCE(195);
            END_STATE();
        case 380:
            if(lookahead == 's')
                ADVANCE(414);
            END_STATE();
        case 381:
            if(lookahead == 't')
                ADVANCE(397);
            END_STATE();
        case 382:
            if(lookahead == 't')
                ADVANCE(202);
            END_STATE();
        case 383:
            if(lookahead == 't')
                ADVANCE(623);
            END_STATE();
        case 384:
            if(lookahead == 't')
                ADVANCE(59);
            END_STATE();
        case 385:
            if(lookahead == 't')
                ADVANCE(671);
            END_STATE();
        case 386:
            if(lookahead == 't')
                ADVANCE(498);
            END_STATE();
        case 387:
            if(lookahead == 't')
                ADVANCE(624);
            END_STATE();
        case 388:
            if(lookahead == 't')
                ADVANCE(485);
            END_STATE();
        case 389:
            if(lookahead == 't')
                ADVANCE(466);
            END_STATE();
        case 390:
            if(lookahead == 't')
                ADVANCE(632);
            END_STATE();
        case 391:
            if(lookahead == 't')
                ADVANCE(647);
            END_STATE();
        case 392:
            if(lookahead == 't')
                ADVANCE(638);
            END_STATE();
        case 393:
            if(lookahead == 't')
                ADVANCE(489);
            END_STATE();
        case 394:
            if(lookahead == 't')
                ADVANCE(60);
            END_STATE();
        case 395:
            if(lookahead == 't')
                ADVANCE(681);
            END_STATE();
        case 396:
            if(lookahead == 't')
                ADVANCE(274);
            END_STATE();
        case 397:
            if(lookahead == 't')
                ADVANCE(347);
            END_STATE();
        case 398:
            if(lookahead == 't')
                ADVANCE(126);
            END_STATE();
        case 399:
            if(lookahead == 't')
                ADVANCE(219);
            END_STATE();
        case 400:
            if(lookahead == 't')
                ADVANCE(348);
            END_STATE();
        case 401:
            if(lookahead == 't')
                ADVANCE(185);
            END_STATE();
        case 402:
            if(lookahead == 't')
                ADVANCE(86);
            END_STATE();
        case 403:
            if(lookahead == 't')
                ADVANCE(349);
            END_STATE();
        case 404:
            if(lookahead == 't')
                ADVANCE(243);
            END_STATE();
        case 405:
            if(lookahead == 't')
                ADVANCE(94);
            END_STATE();
        case 406:
            if(lookahead == 't')
                ADVANCE(161);
            END_STATE();
        case 407:
            if(lookahead == 't')
                ADVANCE(193);
            END_STATE();
        case 408:
            if(lookahead == 't')
                ADVANCE(189);
            END_STATE();
        case 409:
            if(lookahead == 't')
                ADVANCE(184);
            END_STATE();
        case 410:
            if(lookahead == 't')
                ADVANCE(350);
            END_STATE();
        case 411:
            if(lookahead == 't')
                ADVANCE(113);
            END_STATE();
        case 412:
            if(lookahead == 't')
                ADVANCE(118);
            END_STATE();
        case 413:
            if(lookahead == 't')
                ADVANCE(82);
            END_STATE();
        case 414:
            if(lookahead == 't')
                ADVANCE(361);
            END_STATE();
        case 415:
            if(lookahead == 't')
                ADVANCE(246);
            END_STATE();
        case 416:
            if(lookahead == 't')
                ADVANCE(196);
            END_STATE();
        case 417:
            if(lookahead == 't')
                ADVANCE(247);
            END_STATE();
        case 418:
            if(lookahead == 't')
                ADVANCE(248);
            END_STATE();
        case 419:
            if(lookahead == 't')
                ADVANCE(120);
            END_STATE();
        case 420:
            if(lookahead == 't')
                ADVANCE(363);
            END_STATE();
        case 421:
            if(lookahead == 't')
                ADVANCE(90);
            END_STATE();
        case 422:
            if(lookahead == 'u')
                ADVANCE(122);
            END_STATE();
        case 423:
            if(lookahead == 'u')
                ADVANCE(272);
            END_STATE();
        case 424:
            if(lookahead == 'u')
                ADVANCE(133);
            END_STATE();
        case 425:
            if(lookahead == 'u')
                ADVANCE(264);
            END_STATE();
        case 426:
            if(lookahead == 'u')
                ADVANCE(383);
            END_STATE();
        case 427:
            if(lookahead == 'u')
                ADVANCE(180);
            END_STATE();
        case 428:
            if(lookahead == 'u')
                ADVANCE(387);
            END_STATE();
        case 429:
            if(lookahead == 'u')
                ADVANCE(304);
            END_STATE();
        case 430:
            if(lookahead == 'u')
                ADVANCE(192);
            END_STATE();
        case 431:
            if(lookahead == 'u')
                ADVANCE(406);
            END_STATE();
        case 432:
            if(lookahead == 'u')
                ADVANCE(267);
            END_STATE();
        case 433:
            if(lookahead == 'u')
                ADVANCE(263);
            END_STATE();
        case 434:
            if(lookahead == 'u')
                ADVANCE(376);
            END_STATE();
        case 435:
            if(lookahead == 'u')
                ADVANCE(135);
            END_STATE();
        case 436:
            if(lookahead == 'u')
                ADVANCE(123);
            END_STATE();
        case 437:
            if(lookahead == 'v')
                ADVANCE(245);
            END_STATE();
        case 438:
            if(lookahead == 'v')
                ADVANCE(159);
            END_STATE();
        case 439:
            if(lookahead == 'x')
                ADVANCE(174);
            END_STATE();
        case 440:
            if(lookahead == 'x')
                ADVANCE(408);
            END_STATE();
        case 441:
            if(lookahead == 'y')
                ADVANCE(516);
            END_STATE();
        case 442:
            if(lookahead == 'y')
                ADVANCE(626);
            END_STATE();
        case 443:
            if(lookahead == 'y')
                ADVANCE(81);
            END_STATE();
        case 444:
            if(lookahead == 'y')
                ADVANCE(674);
            END_STATE();
        case 445:
            if(lookahead == 'y')
                ADVANCE(338);
            END_STATE();
        case 446:
            if(lookahead == 'y')
                ADVANCE(84);
            END_STATE();
        case 447:
            if(lookahead == 'z')
                ADVANCE(186);
            END_STATE();
        case 448:
            if(lookahead == '\t' ||
               lookahead == ' ')
                ADVANCE(448);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(605);
            END_STATE();
        case 449:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(581);
            END_STATE();
        case 450:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(569);
            END_STATE();
        case 451:
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(575);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(589);
            END_STATE();
        case 452:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(583);
            END_STATE();
        case 453:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(589);
            END_STATE();
        case 454:
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(571);
            END_STATE();
        case 455:
            if(lookahead != 0 &&
               lookahead != '\r' &&
               lookahead != '\\')
                ADVANCE(857);
            if(lookahead == '\r')
                ADVANCE(859);
            if(lookahead == '\\')
                ADVANCE(858);
            END_STATE();
        case 456:
            if(lookahead != 0 &&
               lookahead != '*')
                ADVANCE(609);
            END_STATE();
        case 457:
            if(eof)
                ADVANCE(465);
            if(lookahead == '\n')
                SKIP(0)
            END_STATE();
        case 458:
            if(eof)
                ADVANCE(465);
            if(lookahead == '\n')
                SKIP(0)
            if(lookahead == '\r')
                SKIP(457)
            END_STATE();
        case 459:
            if(eof)
                ADVANCE(465);
            if(lookahead == '\n')
                SKIP(463)
            END_STATE();
        case 460:
            if(eof)
                ADVANCE(465);
            if(lookahead == '\n')
                SKIP(463)
            if(lookahead == '\r')
                SKIP(459)
            END_STATE();
        case 461:
            if(eof)
                ADVANCE(465);
            if(lookahead == '\n')
                SKIP(464)
            END_STATE();
        case 462:
            if(eof)
                ADVANCE(465);
            if(lookahead == '\n')
                SKIP(464)
            if(lookahead == '\r')
                SKIP(461)
            END_STATE();
        case 463:
            if(eof)
                ADVANCE(465);
            if(lookahead == '#')
                ADVANCE(138);
            if(lookahead == '$')
                ADVANCE(525);
            if(lookahead == '%')
                ADVANCE(534);
            if(lookahead == '(')
                ADVANCE(40);
            if(lookahead == ')')
                ADVANCE(536);
            if(lookahead == '*')
                ADVANCE(532);
            if(lookahead == '+')
                ADVANCE(528);
            if(lookahead == ',')
                ADVANCE(518);
            if(lookahead == '-')
                ADVANCE(530);
            if(lookahead == '/')
                ADVANCE(533);
            if(lookahead == ':')
                ADVANCE(618);
            if(lookahead == ';')
                ADVANCE(619);
            if(lookahead == '<')
                ADVANCE(68);
            if(lookahead == '>')
                ADVANCE(515);
            if(lookahead == '@')
                ADVANCE(72);
            if(lookahead == 'X')
                ADVANCE(70);
            if(lookahead == '[')
                ADVANCE(641);
            if(lookahead == '\\')
                SKIP(460)
            if(lookahead == ']')
                ADVANCE(642);
            if(lookahead == '^')
                ADVANCE(524);
            if(lookahead == 'a')
                ADVANCE(381);
            if(lookahead == 'b')
                ADVANCE(221);
            if(lookahead == 'c')
                ADVANCE(91);
            if(lookahead == 'd')
                ADVANCE(154);
            if(lookahead == 'e')
                ADVANCE(283);
            if(lookahead == 'g')
                ADVANCE(191);
            if(lookahead == 'i')
                ADVANCE(300);
            if(lookahead == 'l')
                ADVANCE(331);
            if(lookahead == 'm')
                ADVANCE(310);
            if(lookahead == 'n')
                ADVANCE(92);
            if(lookahead == 'o')
                ADVANCE(128);
            if(lookahead == 'r')
                ADVANCE(93);
            if(lookahead == 's')
                ADVANCE(199);
            if(lookahead == 't')
                ADVANCE(445);
            if(lookahead == 'u')
                ADVANCE(222);
            if(lookahead == '|')
                ADVANCE(523);
            if(lookahead == '}')
                ADVANCE(615);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(463)
            END_STATE();
        case 464:
            if(eof)
                ADVANCE(465);
            if(lookahead == '#')
                ADVANCE(151);
            if(lookahead == '$')
                ADVANCE(525);
            if(lookahead == ')')
                ADVANCE(536);
            if(lookahead == ',')
                ADVANCE(518);
            if(lookahead == '/')
                ADVANCE(48);
            if(lookahead == ':')
                ADVANCE(618);
            if(lookahead == ';')
                ADVANCE(619);
            if(lookahead == '>')
                ADVANCE(514);
            if(lookahead == '@')
                ADVANCE(72);
            if(lookahead == '\\')
                SKIP(462)
            if(lookahead == ']')
                ADVANCE(642);
            if(lookahead == '^')
                ADVANCE(524);
            if(lookahead == 'b')
                ADVANCE(237);
            if(lookahead == 'c')
                ADVANCE(309);
            if(lookahead == 'e')
                ADVANCE(283);
            if(lookahead == 'i')
                ADVANCE(307);
            if(lookahead == 'l')
                ADVANCE(317);
            if(lookahead == 'm')
                ADVANCE(310);
            if(lookahead == 'n')
                ADVANCE(114);
            if(lookahead == 's')
                ADVANCE(403);
            if(lookahead == 't')
                ADVANCE(445);
            if(lookahead == 'u')
                ADVANCE(305);
            if(lookahead == '|')
                ADVANCE(523);
            if(lookahead == '}')
                ADVANCE(615);
            if(('\t' <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                SKIP(464)
            END_STATE();
        case 465:
            ACCEPT_TOKEN(ts_builtin_sym_end);
            END_STATE();
        case 466:
            ACCEPT_TOKEN(anon_sym_short);
            END_STATE();
        case 467:
            ACCEPT_TOKEN(anon_sym_short);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 468:
            ACCEPT_TOKEN(anon_sym_int16);
            END_STATE();
        case 469:
            ACCEPT_TOKEN(anon_sym_int16);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 470:
            ACCEPT_TOKEN(anon_sym_long);
            if(lookahead == ' ')
                ADVANCE(148);
            END_STATE();
        case 471:
            ACCEPT_TOKEN(anon_sym_long);
            if(lookahead == ' ')
                ADVANCE(148);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 472:
            ACCEPT_TOKEN(anon_sym_long);
            if(lookahead == ' ')
                ADVANCE(259);
            END_STATE();
        case 473:
            ACCEPT_TOKEN(anon_sym_long);
            if(lookahead == ' ')
                ADVANCE(259);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 474:
            ACCEPT_TOKEN(anon_sym_int32);
            END_STATE();
        case 475:
            ACCEPT_TOKEN(anon_sym_int32);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 476:
            ACCEPT_TOKEN(anon_sym_longlong);
            END_STATE();
        case 477:
            ACCEPT_TOKEN(anon_sym_int64);
            END_STATE();
        case 478:
            ACCEPT_TOKEN(anon_sym_int64);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 479:
            ACCEPT_TOKEN(sym_unsigned_tiny_int);
            END_STATE();
        case 480:
            ACCEPT_TOKEN(sym_unsigned_tiny_int);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 481:
            ACCEPT_TOKEN(sym_boolean_type);
            END_STATE();
        case 482:
            ACCEPT_TOKEN(sym_boolean_type);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 483:
            ACCEPT_TOKEN(anon_sym_fixed);
            END_STATE();
        case 484:
            ACCEPT_TOKEN(anon_sym_fixed);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 485:
            ACCEPT_TOKEN(sym_octet_type);
            END_STATE();
        case 486:
            ACCEPT_TOKEN(sym_octet_type);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 487:
            ACCEPT_TOKEN(sym_signed_tiny_int);
            END_STATE();
        case 488:
            ACCEPT_TOKEN(sym_signed_tiny_int);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 489:
            ACCEPT_TOKEN(anon_sym_unsignedshort);
            END_STATE();
        case 490:
            ACCEPT_TOKEN(anon_sym_uint16);
            END_STATE();
        case 491:
            ACCEPT_TOKEN(anon_sym_uint16);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 492:
            ACCEPT_TOKEN(anon_sym_unsignedlong);
            if(lookahead == ' ')
                ADVANCE(270);
            END_STATE();
        case 493:
            ACCEPT_TOKEN(anon_sym_uint32);
            END_STATE();
        case 494:
            ACCEPT_TOKEN(anon_sym_uint32);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 495:
            ACCEPT_TOKEN(anon_sym_unsignedlonglong);
            END_STATE();
        case 496:
            ACCEPT_TOKEN(anon_sym_uint64);
            END_STATE();
        case 497:
            ACCEPT_TOKEN(anon_sym_uint64);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 498:
            ACCEPT_TOKEN(anon_sym_float);
            END_STATE();
        case 499:
            ACCEPT_TOKEN(anon_sym_float);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 500:
            ACCEPT_TOKEN(anon_sym_double);
            END_STATE();
        case 501:
            ACCEPT_TOKEN(anon_sym_double);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 502:
            ACCEPT_TOKEN(anon_sym_longdouble);
            END_STATE();
        case 503:
            ACCEPT_TOKEN(anon_sym_char);
            END_STATE();
        case 504:
            ACCEPT_TOKEN(anon_sym_char);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 505:
            ACCEPT_TOKEN(anon_sym_wchar);
            END_STATE();
        case 506:
            ACCEPT_TOKEN(anon_sym_wchar);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 507:
            ACCEPT_TOKEN(anon_sym_COLON_COLON);
            END_STATE();
        case 508:
            ACCEPT_TOKEN(anon_sym_string);
            END_STATE();
        case 509:
            ACCEPT_TOKEN(anon_sym_string);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 510:
            ACCEPT_TOKEN(anon_sym_wstring);
            END_STATE();
        case 511:
            ACCEPT_TOKEN(anon_sym_wstring);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 512:
            ACCEPT_TOKEN(anon_sym_LT);
            END_STATE();
        case 513:
            ACCEPT_TOKEN(anon_sym_LT);
            if(lookahead == '<')
                ADVANCE(527);
            END_STATE();
        case 514:
            ACCEPT_TOKEN(anon_sym_GT);
            END_STATE();
        case 515:
            ACCEPT_TOKEN(anon_sym_GT);
            if(lookahead == '>')
                ADVANCE(526);
            END_STATE();
        case 516:
            ACCEPT_TOKEN(anon_sym_any);
            END_STATE();
        case 517:
            ACCEPT_TOKEN(anon_sym_any);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 518:
            ACCEPT_TOKEN(anon_sym_COMMA);
            END_STATE();
        case 519:
            ACCEPT_TOKEN(anon_sym_sequence);
            END_STATE();
        case 520:
            ACCEPT_TOKEN(anon_sym_sequence);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 521:
            ACCEPT_TOKEN(anon_sym_map);
            END_STATE();
        case 522:
            ACCEPT_TOKEN(anon_sym_map);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 523:
            ACCEPT_TOKEN(anon_sym_PIPE);
            END_STATE();
        case 524:
            ACCEPT_TOKEN(anon_sym_CARET);
            END_STATE();
        case 525:
            ACCEPT_TOKEN(anon_sym_DOLLAR);
            END_STATE();
        case 526:
            ACCEPT_TOKEN(anon_sym_GT_GT);
            END_STATE();
        case 527:
            ACCEPT_TOKEN(anon_sym_LT_LT);
            END_STATE();
        case 528:
            ACCEPT_TOKEN(anon_sym_PLUS);
            END_STATE();
        case 529:
            ACCEPT_TOKEN(anon_sym_PLUS);
            if(lookahead == '.')
                ADVANCE(450);
            if(lookahead == '0')
                ADVANCE(577);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(581);
            END_STATE();
        case 530:
            ACCEPT_TOKEN(anon_sym_DASH);
            END_STATE();
        case 531:
            ACCEPT_TOKEN(anon_sym_DASH);
            if(lookahead == '.')
                ADVANCE(450);
            if(lookahead == '0')
                ADVANCE(577);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(581);
            END_STATE();
        case 532:
            ACCEPT_TOKEN(anon_sym_STAR);
            END_STATE();
        case 533:
            ACCEPT_TOKEN(anon_sym_SLASH);
            if(lookahead == '/')
                ADVANCE(851);
            END_STATE();
        case 534:
            ACCEPT_TOKEN(anon_sym_PERCENT);
            END_STATE();
        case 535:
            ACCEPT_TOKEN(anon_sym_LPAREN);
            END_STATE();
        case 536:
            ACCEPT_TOKEN(anon_sym_RPAREN);
            END_STATE();
        case 537:
            ACCEPT_TOKEN(anon_sym_TILDE);
            END_STATE();
        case 538:
            ACCEPT_TOKEN(anon_sym_L);
            END_STATE();
        case 539:
            ACCEPT_TOKEN(anon_sym_L);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 540:
            ACCEPT_TOKEN(anon_sym_DQUOTE);
            END_STATE();
        case 541:
            ACCEPT_TOKEN(aux_sym_string_literal_token1);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(541);
            END_STATE();
        case 542:
            ACCEPT_TOKEN(anon_sym_SQUOTE);
            END_STATE();
        case 543:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            END_STATE();
        case 544:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'A')
                ADVANCE(76);
            END_STATE();
        case 545:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'C')
                ADVANCE(71);
            END_STATE();
        case 546:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'R')
                ADVANCE(83);
            END_STATE();
        case 547:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(364);
            if(lookahead == 'h')
                ADVANCE(99);
            if(lookahead == 'o')
                ADVANCE(282);
            END_STATE();
        case 548:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(333);
            if(lookahead == 'o')
                ADVANCE(147);
            END_STATE();
        case 549:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(273);
            END_STATE();
        case 550:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'a')
                ADVANCE(238);
            if(lookahead == 'e')
                ADVANCE(95);
            END_STATE();
        case 551:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'c')
                ADVANCE(217);
            if(lookahead == 's')
                ADVANCE(410);
            END_STATE();
        case 552:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'c')
                ADVANCE(401);
            if(lookahead == 'u')
                ADVANCE(383);
            END_STATE();
        case 553:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'e')
                ADVANCE(201);
            if(lookahead == 'o')
                ADVANCE(422);
            END_STATE();
        case 554:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'e')
                ADVANCE(341);
            if(lookahead == 'h')
                ADVANCE(316);
            if(lookahead == 't')
                ADVANCE(342);
            if(lookahead == 'w')
                ADVANCE(230);
            END_STATE();
        case 555:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'e')
                ADVANCE(400);
            END_STATE();
        case 556:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'i')
                ADVANCE(439);
            if(lookahead == 'l')
                ADVANCE(312);
            END_STATE();
        case 557:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'i')
                ADVANCE(382);
            if(lookahead == 'o')
                ADVANCE(311);
            END_STATE();
        case 558:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'i')
                ADVANCE(289);
            if(lookahead == 'n')
                ADVANCE(228);
            END_STATE();
        case 559:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'n')
                ADVANCE(441);
            if(lookahead == 't')
                ADVANCE(397);
            END_STATE();
        case 560:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'n')
                ADVANCE(622);
            END_STATE();
        case 561:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'n')
                ADVANCE(423);
            if(lookahead == 'x')
                ADVANCE(127);
            END_STATE();
        case 562:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'o')
                ADVANCE(130);
            END_STATE();
        case 563:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'o')
                ADVANCE(226);
            END_STATE();
        case 564:
            ACCEPT_TOKEN(aux_sym_char_literal_token1);
            if(lookahead == 'y')
                ADVANCE(338);
            END_STATE();
        case 565:
            ACCEPT_TOKEN(anon_sym_TRUE);
            END_STATE();
        case 566:
            ACCEPT_TOKEN(anon_sym_TRUE);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 567:
            ACCEPT_TOKEN(anon_sym_FALSE);
            END_STATE();
        case 568:
            ACCEPT_TOKEN(anon_sym_FALSE);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 569:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(450);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(593);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(569);
            if(sym_number_literal_character_set_1(lookahead))
                ADVANCE(598);
            END_STATE();
        case 570:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(454);
            if(lookahead == 'B' ||
               lookahead == 'D' ||
               lookahead == 'F' ||
               lookahead == 'b' ||
               lookahead == 'd' ||
               lookahead == 'f')
                ADVANCE(570);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(597);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(570);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 571:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(454);
            if(lookahead == 'B' ||
               lookahead == 'D' ||
               lookahead == 'F' ||
               lookahead == 'b' ||
               lookahead == 'd' ||
               lookahead == 'f')
                ADVANCE(571);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(598);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(571);
            END_STATE();
        case 572:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(451);
            if(lookahead == '.')
                ADVANCE(594);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(586);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(584);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(592);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(849);
            if(('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(587);
            if(('D' <= lookahead && lookahead <= 'F') ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(587);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(597);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(574);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 573:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(451);
            if(lookahead == '.')
                ADVANCE(594);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(588);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(585);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(593);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(453);
            if(('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(589);
            if(('D' <= lookahead && lookahead <= 'F') ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(589);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(598);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(575);
            END_STATE();
        case 574:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(451);
            if(lookahead == '.')
                ADVANCE(594);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(584);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(592);
            if(lookahead == 'A' ||
               lookahead == 'C' ||
               lookahead == 'a' ||
               lookahead == 'c')
                ADVANCE(587);
            if(('B' <= lookahead && lookahead <= 'F') ||
               ('b' <= lookahead && lookahead <= 'f'))
                ADVANCE(587);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(597);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(574);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 575:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(451);
            if(lookahead == '.')
                ADVANCE(594);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(585);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(593);
            if(lookahead == 'A' ||
               lookahead == 'C' ||
               lookahead == 'a' ||
               lookahead == 'c')
                ADVANCE(589);
            if(('B' <= lookahead && lookahead <= 'F') ||
               ('b' <= lookahead && lookahead <= 'f'))
                ADVANCE(589);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(598);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(575);
            END_STATE();
        case 576:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(449);
            if(lookahead == '.')
                ADVANCE(594);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(590);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(687);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(592);
            if(('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               ('d' <= lookahead && lookahead <= 'f') ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(597);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(580);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 577:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(449);
            if(lookahead == '.')
                ADVANCE(594);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(591);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(47);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(593);
            if(('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               ('d' <= lookahead && lookahead <= 'f') ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(598);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(581);
            END_STATE();
        case 578:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(449);
            if(lookahead == '.')
                ADVANCE(594);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(595);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(849);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(592);
            if(('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               ('d' <= lookahead && lookahead <= 'f') ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(597);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(580);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 579:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(449);
            if(lookahead == '.')
                ADVANCE(594);
            if(lookahead == 'B' ||
               lookahead == 'b')
                ADVANCE(596);
            if(lookahead == 'X' ||
               lookahead == 'x')
                ADVANCE(453);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(593);
            if(('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               ('d' <= lookahead && lookahead <= 'f') ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(598);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(581);
            END_STATE();
        case 580:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(449);
            if(lookahead == '.')
                ADVANCE(594);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(592);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(580);
            if(sym_number_literal_character_set_1(lookahead))
                ADVANCE(597);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 581:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(449);
            if(lookahead == '.')
                ADVANCE(594);
            if(lookahead == 'E' ||
               lookahead == 'P' ||
               lookahead == 'e' ||
               lookahead == 'p')
                ADVANCE(593);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(581);
            if(sym_number_literal_character_set_1(lookahead))
                ADVANCE(598);
            END_STATE();
        case 582:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(452);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(454);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(582);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(593);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(583);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(598);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(583);
            END_STATE();
        case 583:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(452);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(582);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(593);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(583);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(598);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(583);
            END_STATE();
        case 584:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(453);
            if(lookahead == '.')
                ADVANCE(594);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(454);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(584);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(592);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(587);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(597);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(587);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 585:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(453);
            if(lookahead == '.')
                ADVANCE(594);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(454);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(585);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(593);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(589);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(598);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(589);
            END_STATE();
        case 586:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(453);
            if(lookahead == '.')
                ADVANCE(594);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(584);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(592);
            if(lookahead == 'A' ||
               lookahead == 'C' ||
               lookahead == 'a' ||
               lookahead == 'c')
                ADVANCE(587);
            if(('B' <= lookahead && lookahead <= 'F') ||
               ('b' <= lookahead && lookahead <= 'f'))
                ADVANCE(587);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(597);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(574);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 587:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(453);
            if(lookahead == '.')
                ADVANCE(594);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(584);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(592);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(587);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(597);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(587);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 588:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(453);
            if(lookahead == '.')
                ADVANCE(594);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(585);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(593);
            if(lookahead == 'A' ||
               lookahead == 'C' ||
               lookahead == 'a' ||
               lookahead == 'c')
                ADVANCE(589);
            if(('B' <= lookahead && lookahead <= 'F') ||
               ('b' <= lookahead && lookahead <= 'f'))
                ADVANCE(589);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(598);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(575);
            END_STATE();
        case 589:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '\'')
                ADVANCE(453);
            if(lookahead == '.')
                ADVANCE(594);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(585);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(593);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(589);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(598);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(589);
            END_STATE();
        case 590:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '.')
                ADVANCE(450);
            if(lookahead == '0')
                ADVANCE(578);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(580);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(597);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 591:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '.')
                ADVANCE(450);
            if(lookahead == '0')
                ADVANCE(579);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(581);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(598);
            END_STATE();
        case 592:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(454);
            if(lookahead == 'B' ||
               lookahead == 'D' ||
               lookahead == 'F' ||
               lookahead == 'b' ||
               lookahead == 'd' ||
               lookahead == 'f')
                ADVANCE(570);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(597);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(570);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 593:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == '+' ||
               lookahead == '-')
                ADVANCE(454);
            if(lookahead == 'B' ||
               lookahead == 'D' ||
               lookahead == 'F' ||
               lookahead == 'b' ||
               lookahead == 'd' ||
               lookahead == 'f')
                ADVANCE(571);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(598);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'E') ||
               ('a' <= lookahead && lookahead <= 'e'))
                ADVANCE(571);
            END_STATE();
        case 594:
            ACCEPT_TOKEN(sym_number_literal);
            if(lookahead == 'E' ||
               lookahead == 'e')
                ADVANCE(582);
            if(lookahead == 'P' ||
               lookahead == 'p')
                ADVANCE(593);
            if(lookahead == 'B' ||
               ('D' <= lookahead && lookahead <= 'F') ||
               lookahead == 'b' ||
               ('d' <= lookahead && lookahead <= 'f'))
                ADVANCE(583);
            if(lookahead == 'L' ||
               lookahead == 'U' ||
               lookahead == 'W' ||
               lookahead == 'l' ||
               lookahead == 'u' ||
               lookahead == 'w')
                ADVANCE(598);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'C') ||
               ('a' <= lookahead && lookahead <= 'c'))
                ADVANCE(583);
            END_STATE();
        case 595:
            ACCEPT_TOKEN(sym_number_literal);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(580);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(597);
            if(('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 596:
            ACCEPT_TOKEN(sym_number_literal);
            if(('0' <= lookahead && lookahead <= '9'))
                ADVANCE(581);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(598);
            END_STATE();
        case 597:
            ACCEPT_TOKEN(sym_number_literal);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(597);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 598:
            ACCEPT_TOKEN(sym_number_literal);
            if(sym_number_literal_character_set_2(lookahead))
                ADVANCE(598);
            END_STATE();
        case 599:
            ACCEPT_TOKEN(aux_sym_preproc_call_token1);
            END_STATE();
        case 600:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'e')
                ADVANCE(602);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(605);
            END_STATE();
        case 601:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'e')
                ADVANCE(662);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(605);
            END_STATE();
        case 602:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'f')
                ADVANCE(603);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(605);
            END_STATE();
        case 603:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'i')
                ADVANCE(604);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(605);
            END_STATE();
        case 604:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(lookahead == 'n')
                ADVANCE(601);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(605);
            END_STATE();
        case 605:
            ACCEPT_TOKEN(sym_preproc_directive);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(605);
            END_STATE();
        case 606:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '\n')
                SKIP(58)
            if(lookahead == '\r')
                ADVANCE(607);
            if(lookahead == '/')
                ADVANCE(456);
            if(lookahead == '\\')
                ADVANCE(610);
            if(lookahead != 0)
                ADVANCE(609);
            END_STATE();
        case 607:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '\n')
                SKIP(58)
            if(lookahead == '/')
                ADVANCE(456);
            if(lookahead == '\\')
                ADVANCE(610);
            if(lookahead != 0)
                ADVANCE(609);
            END_STATE();
        case 608:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(851);
            if(lookahead == '\\')
                ADVANCE(610);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(609);
            END_STATE();
        case 609:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead == '/')
                ADVANCE(456);
            if(lookahead == '\\')
                ADVANCE(610);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(609);
            END_STATE();
        case 610:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead != 0 &&
               lookahead != '\r' &&
               lookahead != '/' &&
               lookahead != '\\')
                ADVANCE(609);
            if(lookahead == '\r')
                ADVANCE(611);
            if(lookahead == '/')
                ADVANCE(456);
            if(lookahead == '\\')
                ADVANCE(610);
            END_STATE();
        case 611:
            ACCEPT_TOKEN(sym_preproc_arg);
            if(lookahead != 0 &&
               lookahead != '/' &&
               lookahead != '\\')
                ADVANCE(609);
            if(lookahead == '/')
                ADVANCE(456);
            if(lookahead == '\\')
                ADVANCE(610);
            END_STATE();
        case 612:
            ACCEPT_TOKEN(anon_sym_exception);
            END_STATE();
        case 613:
            ACCEPT_TOKEN(anon_sym_exception);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 614:
            ACCEPT_TOKEN(anon_sym_LBRACE);
            END_STATE();
        case 615:
            ACCEPT_TOKEN(anon_sym_RBRACE);
            END_STATE();
        case 616:
            ACCEPT_TOKEN(anon_sym_interface);
            END_STATE();
        case 617:
            ACCEPT_TOKEN(anon_sym_local);
            END_STATE();
        case 618:
            ACCEPT_TOKEN(anon_sym_COLON);
            END_STATE();
        case 619:
            ACCEPT_TOKEN(anon_sym_SEMI);
            END_STATE();
        case 620:
            ACCEPT_TOKEN(anon_sym_void);
            END_STATE();
        case 621:
            ACCEPT_TOKEN(anon_sym_void);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 622:
            ACCEPT_TOKEN(anon_sym_in);
            if(lookahead == 'o')
                ADVANCE(428);
            END_STATE();
        case 623:
            ACCEPT_TOKEN(anon_sym_out);
            END_STATE();
        case 624:
            ACCEPT_TOKEN(anon_sym_inout);
            END_STATE();
        case 625:
            ACCEPT_TOKEN(anon_sym_raises);
            END_STATE();
        case 626:
            ACCEPT_TOKEN(anon_sym_readonly);
            END_STATE();
        case 627:
            ACCEPT_TOKEN(anon_sym_readonly);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 628:
            ACCEPT_TOKEN(anon_sym_attribute);
            END_STATE();
        case 629:
            ACCEPT_TOKEN(anon_sym_attribute);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 630:
            ACCEPT_TOKEN(anon_sym_getraises);
            END_STATE();
        case 631:
            ACCEPT_TOKEN(anon_sym_setraises);
            END_STATE();
        case 632:
            ACCEPT_TOKEN(anon_sym_bitset);
            END_STATE();
        case 633:
            ACCEPT_TOKEN(anon_sym_bitset);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 634:
            ACCEPT_TOKEN(anon_sym_bitfield);
            END_STATE();
        case 635:
            ACCEPT_TOKEN(anon_sym_bitmask);
            END_STATE();
        case 636:
            ACCEPT_TOKEN(anon_sym_bitmask);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 637:
            ACCEPT_TOKEN(anon_sym_ATannotation);
            END_STATE();
        case 638:
            ACCEPT_TOKEN(anon_sym_default);
            END_STATE();
        case 639:
            ACCEPT_TOKEN(anon_sym_default);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 640:
            ACCEPT_TOKEN(anon_sym_AT);
            END_STATE();
        case 641:
            ACCEPT_TOKEN(anon_sym_LBRACK);
            END_STATE();
        case 642:
            ACCEPT_TOKEN(anon_sym_RBRACK);
            END_STATE();
        case 643:
            ACCEPT_TOKEN(anon_sym_EQ);
            END_STATE();
        case 644:
            ACCEPT_TOKEN(anon_sym_native);
            END_STATE();
        case 645:
            ACCEPT_TOKEN(anon_sym_native);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 646:
            ACCEPT_TOKEN(anon_sym_module);
            END_STATE();
        case 647:
            ACCEPT_TOKEN(anon_sym_struct);
            END_STATE();
        case 648:
            ACCEPT_TOKEN(anon_sym_struct);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 649:
            ACCEPT_TOKEN(anon_sym_enum);
            END_STATE();
        case 650:
            ACCEPT_TOKEN(anon_sym_enum);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 651:
            ACCEPT_TOKEN(anon_sym_ATdefault_literal);
            END_STATE();
        case 652:
            ACCEPT_TOKEN(anon_sym_ATignore_literal_names);
            END_STATE();
        case 653:
            ACCEPT_TOKEN(anon_sym_union);
            END_STATE();
        case 654:
            ACCEPT_TOKEN(anon_sym_union);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 655:
            ACCEPT_TOKEN(anon_sym_switch);
            END_STATE();
        case 656:
            ACCEPT_TOKEN(anon_sym_switch);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 657:
            ACCEPT_TOKEN(anon_sym_case);
            END_STATE();
        case 658:
            ACCEPT_TOKEN(anon_sym_case);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 659:
            ACCEPT_TOKEN(anon_sym_typedef);
            END_STATE();
        case 660:
            ACCEPT_TOKEN(anon_sym_typedef);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 661:
            ACCEPT_TOKEN(anon_sym_POUNDdefine);
            END_STATE();
        case 662:
            ACCEPT_TOKEN(anon_sym_POUNDdefine);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(605);
            END_STATE();
        case 663:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '\r')
                ADVANCE(666);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(666);
            END_STATE();
        case 664:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '/')
                ADVANCE(665);
            if(lookahead == '\\')
                ADVANCE(663);
            if(lookahead == '\t' ||
               (11 <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(664);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(666);
            END_STATE();
        case 665:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead == '/')
                ADVANCE(853);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(666);
            END_STATE();
        case 666:
            ACCEPT_TOKEN(aux_sym_predefine_token1);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(666);
            END_STATE();
        case 667:
            ACCEPT_TOKEN(sym_dds_service);
            END_STATE();
        case 668:
            ACCEPT_TOKEN(anon_sym_ATDDSRequestTopic);
            END_STATE();
        case 669:
            ACCEPT_TOKEN(anon_sym_name);
            END_STATE();
        case 670:
            ACCEPT_TOKEN(anon_sym_ATDDSReplyTopic);
            END_STATE();
        case 671:
            ACCEPT_TOKEN(anon_sym_const);
            END_STATE();
        case 672:
            ACCEPT_TOKEN(anon_sym_const);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 673:
            ACCEPT_TOKEN(sym_optional);
            END_STATE();
        case 674:
            ACCEPT_TOKEN(sym_key);
            END_STATE();
        case 675:
            ACCEPT_TOKEN(sym_must_understand);
            END_STATE();
        case 676:
            ACCEPT_TOKEN(sym_non_serialized);
            END_STATE();
        case 677:
            ACCEPT_TOKEN(sym_id);
            END_STATE();
        case 678:
            ACCEPT_TOKEN(sym_external);
            END_STATE();
        case 679:
            ACCEPT_TOKEN(anon_sym_AThashid);
            END_STATE();
        case 680:
            ACCEPT_TOKEN(anon_sym_LPAREN_DQUOTE);
            END_STATE();
        case 681:
            ACCEPT_TOKEN(anon_sym_ATtry_construct);
            END_STATE();
        case 682:
            ACCEPT_TOKEN(sym_final);
            END_STATE();
        case 683:
            ACCEPT_TOKEN(anon_sym_ATdata_representation);
            END_STATE();
        case 684:
            ACCEPT_TOKEN(anon_sym_XCDR);
            if(lookahead == '2')
                ADVANCE(685);
            END_STATE();
        case 685:
            ACCEPT_TOKEN(anon_sym_XCDR2);
            END_STATE();
        case 686:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == ' ')
                ADVANCE(269);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 687:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '.')
                ADVANCE(450);
            if(lookahead == '0')
                ADVANCE(572);
            if(('1' <= lookahead && lookahead <= '9'))
                ADVANCE(574);
            if(('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(587);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 688:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '1')
                ADVANCE(694);
            if(lookahead == '3')
                ADVANCE(690);
            if(lookahead == '6')
                ADVANCE(692);
            if(lookahead == '8')
                ADVANCE(488);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 689:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '1')
                ADVANCE(695);
            if(lookahead == '3')
                ADVANCE(691);
            if(lookahead == '6')
                ADVANCE(693);
            if(lookahead == '8')
                ADVANCE(480);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 690:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '2')
                ADVANCE(475);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 691:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '2')
                ADVANCE(494);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 692:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '4')
                ADVANCE(478);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 693:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '4')
                ADVANCE(497);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 694:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '6')
                ADVANCE(469);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 695:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == '6')
                ADVANCE(491);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 696:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'A')
                ADVANCE(699);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('B' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 697:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'E')
                ADVANCE(566);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 698:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'E')
                ADVANCE(568);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 699:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'L')
                ADVANCE(701);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 700:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'R')
                ADVANCE(702);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 701:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'S')
                ADVANCE(698);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 702:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'U')
                ADVANCE(697);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 703:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(806);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 704:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(726);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 705:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(817);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 706:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(811);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 707:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(831);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 708:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(820);
            if(lookahead == 'h')
                ADVANCE(706);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 709:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(840);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 710:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(812);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 711:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(824);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 712:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'a')
                ADVANCE(781);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 713:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(773);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 714:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'b')
                ADVANCE(842);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 715:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(756);
            if(lookahead == 's')
                ADVANCE(837);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 716:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(756);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 717:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(736);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 718:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(752);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 719:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(834);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 720:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(732);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 721:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'c')
                ADVANCE(828);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 722:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(621);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 723:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(484);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 724:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(686);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 725:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(731);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 726:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'd')
                ADVANCE(802);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 727:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(809);
            if(lookahead == 'h')
                ADVANCE(800);
            if(lookahead == 't')
                ADVANCE(810);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 728:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(809);
            if(lookahead == 'h')
                ADVANCE(800);
            if(lookahead == 't')
                ADVANCE(815);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 729:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(501);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 730:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(645);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 731:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(745);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 732:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(520);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 733:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(629);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 734:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(658);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 735:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(746);
            if(lookahead == 'o')
                ADVANCE(838);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 736:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(807);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 737:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(723);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 738:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(704);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 739:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(725);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 740:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(724);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 741:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(712);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 742:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(793);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 743:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(825);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 744:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'e')
                ADVANCE(827);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 745:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'f')
                ADVANCE(660);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 746:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'f')
                ADVANCE(709);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 747:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(471);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 748:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(509);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 749:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(511);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 750:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(473);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 751:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'g')
                ADVANCE(794);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 752:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(656);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 753:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(706);
            if(lookahead == 'o')
                ADVANCE(778);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 754:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(706);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 755:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(800);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 756:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'h')
                ADVANCE(710);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 757:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(845);
            if(lookahead == 'l')
                ADVANCE(804);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 758:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(843);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 759:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(821);
            if(lookahead == 'o')
                ADVANCE(797);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 760:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(714);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 761:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(751);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 762:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(722);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 763:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(789);
            if(lookahead == 'u')
                ADVANCE(721);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 764:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(789);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 765:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(790);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 766:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(833);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 767:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(791);
            if(lookahead == 'n')
                ADVANCE(769);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 768:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(791);
            if(lookahead == 'n')
                ADVANCE(818);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 769:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(801);
            if(lookahead == 's')
                ADVANCE(761);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 770:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'i')
                ADVANCE(803);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 771:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'k')
                ADVANCE(636);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 772:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(847);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 773:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(729);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 774:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(829);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 775:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'l')
                ADVANCE(741);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 776:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'm')
                ADVANCE(650);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 777:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'm')
                ADVANCE(705);
            if(lookahead == 's')
                ADVANCE(744);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 778:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(819);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 779:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(747);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 780:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(654);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 781:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(482);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 782:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(613);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 783:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(846);
            if(lookahead == 't')
                ADVANCE(830);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 784:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(846);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 785:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(839);
            if(lookahead == 'x')
                ADVANCE(717);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 786:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(839);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 787:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(822);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 788:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(772);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 789:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(748);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 790:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(749);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 791:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(832);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 792:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(750);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 793:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(720);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 794:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'n')
                ADVANCE(740);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 795:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(838);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 796:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(762);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 797:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(775);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 798:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(779);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 799:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(797);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 800:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(816);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 801:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(780);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 802:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(788);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 803:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(782);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 804:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(711);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 805:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'o')
                ADVANCE(792);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 806:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(522);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 807:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(835);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 808:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'p')
                ADVANCE(739);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 809:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'q')
                ADVANCE(841);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 810:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(763);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 811:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(504);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 812:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(506);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 813:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(760);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 814:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(765);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 815:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(764);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 816:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'r')
                ADVANCE(826);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 817:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(771);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 818:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(761);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 819:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(823);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 820:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 's')
                ADVANCE(734);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 821:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(777);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 822:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(688);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 823:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(672);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 824:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(499);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 825:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(486);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 826:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(467);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 827:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(633);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 828:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(648);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 829:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(639);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 830:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(813);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 831:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(758);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 832:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(689);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 833:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(718);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 834:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(743);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 835:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(770);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 836:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(733);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 837:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 't')
                ADVANCE(814);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 838:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(713);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 839:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(776);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 840:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(774);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 841:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(742);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 842:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'u')
                ADVANCE(836);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 843:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'v')
                ADVANCE(730);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 844:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'w')
                ADVANCE(766);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 845:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'x')
                ADVANCE(737);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 846:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(517);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 847:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(627);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 848:
            ACCEPT_TOKEN(sym_identifier);
            if(lookahead == 'y')
                ADVANCE(808);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 849:
            ACCEPT_TOKEN(sym_identifier);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'F') ||
               ('a' <= lookahead && lookahead <= 'f'))
                ADVANCE(587);
            if(('G' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 850:
            ACCEPT_TOKEN(sym_identifier);
            if(('0' <= lookahead && lookahead <= '9') ||
               ('A' <= lookahead && lookahead <= 'Z') ||
               lookahead == '_' ||
               ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(850);
            END_STATE();
        case 851:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            END_STATE();
        case 852:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            if(lookahead == '\\')
                ADVANCE(455);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(857);
            END_STATE();
        case 853:
            ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(666);
            END_STATE();
        case 854:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '\n')
                ADVANCE(855);
            if(lookahead == '\\')
                ADVANCE(455);
            if(lookahead != 0)
                ADVANCE(857);
            END_STATE();
        case 855:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '/')
                ADVANCE(856);
            if(lookahead == '\\')
                ADVANCE(31);
            if(lookahead == '\t' ||
               (11 <= lookahead && lookahead <= '\r') ||
               lookahead == ' ')
                ADVANCE(855);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(857);
            END_STATE();
        case 856:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '/')
                ADVANCE(852);
            if(lookahead == '\\')
                ADVANCE(455);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(857);
            END_STATE();
        case 857:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead == '\\')
                ADVANCE(455);
            if(lookahead != 0 &&
               lookahead != '\n')
                ADVANCE(857);
            END_STATE();
        case 858:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead != 0 &&
               lookahead != '\r' &&
               lookahead != '\\')
                ADVANCE(857);
            if(lookahead == '\r')
                ADVANCE(859);
            if(lookahead == '\\')
                ADVANCE(858);
            END_STATE();
        case 859:
            ACCEPT_TOKEN(aux_sym_comment_token1);
            if(lookahead != 0 &&
               lookahead != '\\')
                ADVANCE(857);
            if(lookahead == '\\')
                ADVANCE(455);
            END_STATE();
        default:
            return false;
    }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
    [0] = { .lex_state = 0, .external_lex_state = 1 },
    [1] = { .lex_state = 463 },
    [2] = { .lex_state = 45 },
    [3] = { .lex_state = 45 },
    [4] = { .lex_state = 45 },
    [5] = { .lex_state = 45 },
    [6] = { .lex_state = 45 },
    [7] = { .lex_state = 49 },
    [8] = { .lex_state = 46 },
    [9] = { .lex_state = 46 },
    [10] = { .lex_state = 46 },
    [11] = { .lex_state = 46 },
    [12] = { .lex_state = 46 },
    [13] = { .lex_state = 46 },
    [14] = { .lex_state = 46 },
    [15] = { .lex_state = 46 },
    [16] = { .lex_state = 46 },
    [17] = { .lex_state = 46 },
    [18] = { .lex_state = 46 },
    [19] = { .lex_state = 46 },
    [20] = { .lex_state = 50 },
    [21] = { .lex_state = 51 },
    [22] = { .lex_state = 50 },
    [23] = { .lex_state = 50 },
    [24] = { .lex_state = 46 },
    [25] = { .lex_state = 463 },
    [26] = { .lex_state = 46 },
    [27] = { .lex_state = 46 },
    [28] = { .lex_state = 46 },
    [29] = { .lex_state = 46 },
    [30] = { .lex_state = 46 },
    [31] = { .lex_state = 464 },
    [32] = { .lex_state = 464 },
    [33] = { .lex_state = 464 },
    [34] = { .lex_state = 464 },
    [35] = { .lex_state = 464 },
    [36] = { .lex_state = 45 },
    [37] = { .lex_state = 45 },
    [38] = { .lex_state = 52 },
    [39] = { .lex_state = 52 },
    [40] = { .lex_state = 46 },
    [41] = { .lex_state = 46 },
    [42] = { .lex_state = 46 },
    [43] = { .lex_state = 46 },
    [44] = { .lex_state = 46 },
    [45] = { .lex_state = 46 },
    [46] = { .lex_state = 46 },
    [47] = { .lex_state = 46 },
    [48] = { .lex_state = 46 },
    [49] = { .lex_state = 46 },
    [50] = { .lex_state = 51 },
    [51] = { .lex_state = 51 },
    [52] = { .lex_state = 50 },
    [53] = { .lex_state = 50 },
    [54] = { .lex_state = 50 },
    [55] = { .lex_state = 50 },
    [56] = { .lex_state = 53 },
    [57] = { .lex_state = 46 },
    [58] = { .lex_state = 39 },
    [59] = { .lex_state = 39 },
    [60] = { .lex_state = 39 },
    [61] = { .lex_state = 39 },
    [62] = { .lex_state = 39 },
    [63] = { .lex_state = 39 },
    [64] = { .lex_state = 39 },
    [65] = { .lex_state = 39 },
    [66] = { .lex_state = 39 },
    [67] = { .lex_state = 39 },
    [68] = { .lex_state = 39 },
    [69] = { .lex_state = 39 },
    [70] = { .lex_state = 39 },
    [71] = { .lex_state = 39 },
    [72] = { .lex_state = 463 },
    [73] = { .lex_state = 39 },
    [74] = { .lex_state = 463 },
    [75] = { .lex_state = 39 },
    [76] = { .lex_state = 39 },
    [77] = { .lex_state = 39 },
    [78] = { .lex_state = 39 },
    [79] = { .lex_state = 463 },
    [80] = { .lex_state = 463 },
    [81] = { .lex_state = 39 },
    [82] = { .lex_state = 464 },
    [83] = { .lex_state = 463 },
    [84] = { .lex_state = 464 },
    [85] = { .lex_state = 464 },
    [86] = { .lex_state = 464 },
    [87] = { .lex_state = 39 },
    [88] = { .lex_state = 39 },
    [89] = { .lex_state = 39 },
    [90] = { .lex_state = 39 },
    [91] = { .lex_state = 39 },
    [92] = { .lex_state = 39 },
    [93] = { .lex_state = 41 },
    [94] = { .lex_state = 41 },
    [95] = { .lex_state = 41 },
    [96] = { .lex_state = 463 },
    [97] = { .lex_state = 463 },
    [98] = { .lex_state = 463 },
    [99] = { .lex_state = 463 },
    [100] = { .lex_state = 463 },
    [101] = { .lex_state = 463 },
    [102] = { .lex_state = 463 },
    [103] = { .lex_state = 463 },
    [104] = { .lex_state = 463 },
    [105] = { .lex_state = 463 },
    [106] = { .lex_state = 463 },
    [107] = { .lex_state = 41 },
    [108] = { .lex_state = 463 },
    [109] = { .lex_state = 463 },
    [110] = { .lex_state = 463 },
    [111] = { .lex_state = 39 },
    [112] = { .lex_state = 39 },
    [113] = { .lex_state = 463 },
    [114] = { .lex_state = 463 },
    [115] = { .lex_state = 42 },
    [116] = { .lex_state = 42 },
    [117] = { .lex_state = 42 },
    [118] = { .lex_state = 42 },
    [119] = { .lex_state = 463 },
    [120] = { .lex_state = 463 },
    [121] = { .lex_state = 463 },
    [122] = { .lex_state = 463 },
    [123] = { .lex_state = 463 },
    [124] = { .lex_state = 39 },
    [125] = { .lex_state = 464 },
    [126] = { .lex_state = 463 },
    [127] = { .lex_state = 464 },
    [128] = { .lex_state = 464 },
    [129] = { .lex_state = 463 },
    [130] = { .lex_state = 464 },
    [131] = { .lex_state = 463 },
    [132] = { .lex_state = 463 },
    [133] = { .lex_state = 464 },
    [134] = { .lex_state = 463 },
    [135] = { .lex_state = 44 },
    [136] = { .lex_state = 463 },
    [137] = { .lex_state = 463 },
    [138] = { .lex_state = 463 },
    [139] = { .lex_state = 463 },
    [140] = { .lex_state = 41 },
    [141] = { .lex_state = 41 },
    [142] = { .lex_state = 463 },
    [143] = { .lex_state = 41 },
    [144] = { .lex_state = 463 },
    [145] = { .lex_state = 463 },
    [146] = { .lex_state = 41 },
    [147] = { .lex_state = 463 },
    [148] = { .lex_state = 463 },
    [149] = { .lex_state = 463 },
    [150] = { .lex_state = 41 },
    [151] = { .lex_state = 463 },
    [152] = { .lex_state = 463 },
    [153] = { .lex_state = 463 },
    [154] = { .lex_state = 463 },
    [155] = { .lex_state = 463 },
    [156] = { .lex_state = 463 },
    [157] = { .lex_state = 41 },
    [158] = { .lex_state = 44 },
    [159] = { .lex_state = 463 },
    [160] = { .lex_state = 41 },
    [161] = { .lex_state = 41 },
    [162] = { .lex_state = 463 },
    [163] = { .lex_state = 463 },
    [164] = { .lex_state = 463 },
    [165] = { .lex_state = 0 },
    [166] = { .lex_state = 41 },
    [167] = { .lex_state = 463 },
    [168] = { .lex_state = 43 },
    [169] = { .lex_state = 43 },
    [170] = { .lex_state = 43 },
    [171] = { .lex_state = 463 },
    [172] = { .lex_state = 463 },
    [173] = { .lex_state = 41 },
    [174] = { .lex_state = 463 },
    [175] = { .lex_state = 463 },
    [176] = { .lex_state = 43 },
    [177] = { .lex_state = 463 },
    [178] = { .lex_state = 463 },
    [179] = { .lex_state = 41 },
    [180] = { .lex_state = 463 },
    [181] = { .lex_state = 43 },
    [182] = { .lex_state = 41 },
    [183] = { .lex_state = 41 },
    [184] = { .lex_state = 41 },
    [185] = { .lex_state = 41 },
    [186] = { .lex_state = 43 },
    [187] = { .lex_state = 43 },
    [188] = { .lex_state = 43 },
    [189] = { .lex_state = 463 },
    [190] = { .lex_state = 43 },
    [191] = { .lex_state = 43 },
    [192] = { .lex_state = 43 },
    [193] = { .lex_state = 41 },
    [194] = { .lex_state = 43 },
    [195] = { .lex_state = 43 },
    [196] = { .lex_state = 41 },
    [197] = { .lex_state = 0 },
    [198] = { .lex_state = 0 },
    [199] = { .lex_state = 0 },
    [200] = { .lex_state = 0 },
    [201] = { .lex_state = 463 },
    [202] = { .lex_state = 0 },
    [203] = { .lex_state = 43 },
    [204] = { .lex_state = 43 },
    [205] = { .lex_state = 0 },
    [206] = { .lex_state = 463 },
    [207] = { .lex_state = 463 },
    [208] = { .lex_state = 43 },
    [209] = { .lex_state = 0 },
    [210] = { .lex_state = 45 },
    [211] = { .lex_state = 41 },
    [212] = { .lex_state = 0 },
    [213] = { .lex_state = 43 },
    [214] = { .lex_state = 463 },
    [215] = { .lex_state = 0 },
    [216] = { .lex_state = 0 },
    [217] = { .lex_state = 43 },
    [218] = { .lex_state = 43 },
    [219] = { .lex_state = 463 },
    [220] = { .lex_state = 41 },
    [221] = { .lex_state = 0 },
    [222] = { .lex_state = 43 },
    [223] = { .lex_state = 43 },
    [224] = { .lex_state = 463 },
    [225] = { .lex_state = 54 },
    [226] = { .lex_state = 463 },
    [227] = { .lex_state = 0 },
    [228] = { .lex_state = 463 },
    [229] = { .lex_state = 43 },
    [230] = { .lex_state = 463 },
    [231] = { .lex_state = 0 },
    [232] = { .lex_state = 43 },
    [233] = { .lex_state = 0 },
    [234] = { .lex_state = 0 },
    [235] = { .lex_state = 0 },
    [236] = { .lex_state = 43 },
    [237] = { .lex_state = 43 },
    [238] = { .lex_state = 43 },
    [239] = { .lex_state = 43 },
    [240] = { .lex_state = 43 },
    [241] = { .lex_state = 43 },
    [242] = { .lex_state = 41 },
    [243] = { .lex_state = 463 },
    [244] = { .lex_state = 0 },
    [245] = { .lex_state = 0 },
    [246] = { .lex_state = 0 },
    [247] = { .lex_state = 463 },
    [248] = { .lex_state = 0 },
    [249] = { .lex_state = 463 },
    [250] = { .lex_state = 463 },
    [251] = { .lex_state = 43 },
    [252] = { .lex_state = 0 },
    [253] = { .lex_state = 43 },
    [254] = { .lex_state = 41 },
    [255] = { .lex_state = 0 },
    [256] = { .lex_state = 43 },
    [257] = { .lex_state = 41 },
    [258] = { .lex_state = 463 },
    [259] = { .lex_state = 41 },
    [260] = { .lex_state = 43 },
    [261] = { .lex_state = 43 },
    [262] = { .lex_state = 43 },
    [263] = { .lex_state = 0 },
    [264] = { .lex_state = 0 },
    [265] = { .lex_state = 463 },
    [266] = { .lex_state = 0 },
    [267] = { .lex_state = 0 },
    [268] = { .lex_state = 41 },
    [269] = { .lex_state = 0 },
    [270] = { .lex_state = 0 },
    [271] = { .lex_state = 0 },
    [272] = { .lex_state = 41 },
    [273] = { .lex_state = 27 },
    [274] = { .lex_state = 41 },
    [275] = { .lex_state = 41 },
    [276] = { .lex_state = 41 },
    [277] = { .lex_state = 463 },
    [278] = { .lex_state = 41 },
    [279] = { .lex_state = 463 },
    [280] = { .lex_state = 41 },
    [281] = { .lex_state = 0 },
    [282] = { .lex_state = 41 },
    [283] = { .lex_state = 41 },
    [284] = { .lex_state = 41 },
    [285] = { .lex_state = 0 },
    [286] = { .lex_state = 0 },
    [287] = { .lex_state = 463 },
    [288] = { .lex_state = 463 },
    [289] = { .lex_state = 41 },
    [290] = { .lex_state = 41 },
    [291] = { .lex_state = 41 },
    [292] = { .lex_state = 0 },
    [293] = { .lex_state = 0 },
    [294] = { .lex_state = 0 },
    [295] = { .lex_state = 41 },
    [296] = { .lex_state = 41 },
    [297] = { .lex_state = 463 },
    [298] = { .lex_state = 41 },
    [299] = { .lex_state = 41 },
    [300] = { .lex_state = 41 },
    [301] = { .lex_state = 41 },
    [302] = { .lex_state = 41 },
    [303] = { .lex_state = 463 },
    [304] = { .lex_state = 0 },
    [305] = { .lex_state = 0 },
    [306] = { .lex_state = 0 },
    [307] = { .lex_state = 463 },
    [308] = { .lex_state = 0 },
    [309] = { .lex_state = 45 },
    [310] = { .lex_state = 463 },
    [311] = { .lex_state = 41 },
    [312] = { .lex_state = 41 },
    [313] = { .lex_state = 0 },
    [314] = { .lex_state = 41 },
    [315] = { .lex_state = 0 },
    [316] = { .lex_state = 0 },
    [317] = { .lex_state = 41 },
    [318] = { .lex_state = 41 },
    [319] = { .lex_state = 0 },
    [320] = { .lex_state = 41 },
    [321] = { .lex_state = 463 },
    [322] = { .lex_state = 0 },
    [323] = { .lex_state = 41 },
    [324] = { .lex_state = 463 },
    [325] = { .lex_state = 463 },
    [326] = { .lex_state = 41 },
    [327] = { .lex_state = 41 },
    [328] = { .lex_state = 41 },
    [329] = { .lex_state = 41 },
    [330] = { .lex_state = 463 },
    [331] = { .lex_state = 463 },
    [332] = { .lex_state = 41 },
    [333] = { .lex_state = 41 },
    [334] = { .lex_state = 41 },
    [335] = { .lex_state = 45 },
    [336] = { .lex_state = 41 },
    [337] = { .lex_state = 41 },
    [338] = { .lex_state = 41 },
    [339] = { .lex_state = 41 },
    [340] = { .lex_state = 45 },
    [341] = { .lex_state = 0 },
    [342] = { .lex_state = 0 },
    [343] = { .lex_state = 0 },
    [344] = { .lex_state = 0 },
    [345] = { .lex_state = 0 },
    [346] = { .lex_state = 0 },
    [347] = { .lex_state = 0 },
    [348] = { .lex_state = 0 },
    [349] = { .lex_state = 0 },
    [350] = { .lex_state = 0 },
    [351] = { .lex_state = 41 },
    [352] = { .lex_state = 0 },
    [353] = { .lex_state = 45 },
    [354] = { .lex_state = 45 },
    [355] = { .lex_state = 41 },
    [356] = { .lex_state = 41 },
    [357] = { .lex_state = 0 },
    [358] = { .lex_state = 41 },
    [359] = { .lex_state = 0 },
    [360] = { .lex_state = 0 },
    [361] = { .lex_state = 41 },
    [362] = { .lex_state = 0 },
    [363] = { .lex_state = 855 },
    [364] = { .lex_state = 0 },
    [365] = { .lex_state = 463 },
    [366] = { .lex_state = 463 },
    [367] = { .lex_state = 0 },
    [368] = { .lex_state = 0 },
    [369] = { .lex_state = 0 },
    [370] = { .lex_state = 41 },
    [371] = { .lex_state = 0 },
    [372] = { .lex_state = 45 },
    [373] = { .lex_state = 45 },
    [374] = { .lex_state = 41 },
    [375] = { .lex_state = 0 },
    [376] = { .lex_state = 0 },
    [377] = { .lex_state = 0 },
    [378] = { .lex_state = 0 },
    [379] = { .lex_state = 0 },
    [380] = { .lex_state = 0 },
    [381] = { .lex_state = 0 },
    [382] = { .lex_state = 41 },
    [383] = { .lex_state = 0 },
    [384] = { .lex_state = 0 },
    [385] = { .lex_state = 41 },
    [386] = { .lex_state = 0 },
    [387] = { .lex_state = 0 },
    [388] = { .lex_state = 41 },
    [389] = { .lex_state = 0 },
    [390] = { .lex_state = 463 },
    [391] = { .lex_state = 0 },
    [392] = { .lex_state = 0 },
    [393] = { .lex_state = 0 },
    [394] = { .lex_state = 0 },
    [395] = { .lex_state = 45 },
    [396] = { .lex_state = 45 },
    [397] = { .lex_state = 0 },
    [398] = { .lex_state = 0 },
    [399] = { .lex_state = 0 },
    [400] = { .lex_state = 0 },
    [401] = { .lex_state = 0 },
    [402] = { .lex_state = 0 },
    [403] = { .lex_state = 0 },
    [404] = { .lex_state = 45 },
    [405] = { .lex_state = 41 },
    [406] = { .lex_state = 0 },
    [407] = { .lex_state = 0 },
    [408] = { .lex_state = 41 },
    [409] = { .lex_state = 0 },
    [410] = { .lex_state = 41 },
    [411] = { .lex_state = 0 },
    [412] = { .lex_state = 41 },
    [413] = { .lex_state = 0 },
    [414] = { .lex_state = 0 },
    [415] = { .lex_state = 41 },
    [416] = { .lex_state = 0 },
    [417] = { .lex_state = 45 },
    [418] = { .lex_state = 0 },
    [419] = { .lex_state = 0 },
    [420] = { .lex_state = 28 },
    [421] = { .lex_state = 56 },
    [422] = { .lex_state = 0 },
    [423] = { .lex_state = 56 },
    [424] = { .lex_state = 463 },
    [425] = { .lex_state = 0 },
    [426] = { .lex_state = 0 },
    [427] = { .lex_state = 0 },
    [428] = { .lex_state = 45 },
    [429] = { .lex_state = 45 },
    [430] = { .lex_state = 0 },
    [431] = { .lex_state = 0 },
    [432] = { .lex_state = 0 },
    [433] = { .lex_state = 463 },
    [434] = { .lex_state = 57 },
    [435] = { .lex_state = 0 },
    [436] = { .lex_state = 463 },
    [437] = { .lex_state = 0 },
    [438] = { .lex_state = 0 },
    [439] = { .lex_state = 0 },
    [440] = { .lex_state = 463 },
    [441] = { .lex_state = 0 },
    [442] = { .lex_state = 56 },
    [443] = { .lex_state = 0 },
    [444] = { .lex_state = 0 },
    [445] = { .lex_state = 664 },
    [446] = { .lex_state = 41 },
    [447] = { .lex_state = 463 },
    [448] = { .lex_state = 463 },
    [449] = { .lex_state = 0 },
    [450] = { .lex_state = 41 },
    [451] = { .lex_state = 41 },
    [452] = { .lex_state = 41 },
    [453] = { .lex_state = 0 },
    [454] = { .lex_state = 463 },
    [455] = { .lex_state = 463 },
    [456] = { .lex_state = 41 },
    [457] = { .lex_state = 0 },
    [458] = { .lex_state = 41 },
    [459] = { .lex_state = 41 },
    [460] = { .lex_state = 0 },
    [461] = { .lex_state = 0 },
    [462] = { .lex_state = 0 },
    [463] = { .lex_state = 57 },
    [464] = { .lex_state = 41 },
    [465] = { .lex_state = 41 },
    [466] = { .lex_state = 56 },
    [467] = { .lex_state = 41 },
    [468] = { .lex_state = 41 },
    [469] = { .lex_state = 0 },
    [470] = { .lex_state = 0 },
    [471] = { .lex_state = 0 },
    [472] = { .lex_state = 41 },
    [473] = { .lex_state = 0 },
    [474] = { .lex_state = 41 },
    [475] = { .lex_state = 0 },
    [476] = { .lex_state = 41 },
    [477] = { .lex_state = 0 },
    [478] = { .lex_state = 41 },
    [479] = { (TSStateId)(-1) },
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
        [anon_sym_LBRACK] = ACTIONS(1),
        [anon_sym_RBRACK] = ACTIONS(1),
        [anon_sym_EQ] = ACTIONS(1),
        [anon_sym_native] = ACTIONS(1),
        [anon_sym_module] = ACTIONS(1),
        [anon_sym_struct] = ACTIONS(1),
        [anon_sym_enum] = ACTIONS(1),
        [anon_sym_union] = ACTIONS(1),
        [anon_sym_switch] = ACTIONS(1),
        [anon_sym_case] = ACTIONS(1),
        [anon_sym_typedef] = ACTIONS(1),
        [anon_sym_POUNDdefine] = ACTIONS(1),
        [anon_sym_name] = ACTIONS(1),
        [anon_sym_const] = ACTIONS(1),
        [anon_sym_XCDR] = ACTIONS(1),
        [anon_sym_XCDR2] = ACTIONS(1),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
        [sym__eof] = ACTIONS(1),
    },
    [1] = {
        [sym_specification] = STATE(439),
        [sym_preproc_call] = STATE(83),
        [sym_except_dcl] = STATE(438),
        [sym_interface_dcl] = STATE(438),
        [sym_interface_forward_dcl] = STATE(437),
        [sym_interface_def] = STATE(437),
        [sym_interface_header] = STATE(435),
        [sym_interface_anno] = STATE(152),
        [sym_bitset_dcl] = STATE(438),
        [sym_bitmask_dcl] = STATE(438),
        [sym_annotation_dcl] = STATE(438),
        [sym__definition] = STATE(85),
        [sym_native_dcl] = STATE(438),
        [sym_module_dcl] = STATE(438),
        [sym_struct_forward_dcl] = STATE(438),
        [sym_struct_def] = STATE(438),
        [sym_enum_dcl] = STATE(438),
        [sym_enum_anno] = STATE(433),
        [sym_union_forward_dcl] = STATE(438),
        [sym_union_def] = STATE(438),
        [sym_typedef_dcl] = STATE(438),
        [sym_predefine] = STATE(86),
        [sym_dds_request_topic] = STATE(164),
        [sym_dds_reply_topic] = STATE(164),
        [sym_const_dcl] = STATE(438),
        [sym_data_representation] = STATE(207),
        [sym_comment] = STATE(1),
        [aux_sym_specification_repeat1] = STATE(25),
        [aux_sym_specification_repeat2] = STATE(35),
        [aux_sym_interface_def_repeat1] = STATE(123),
        [aux_sym_struct_def_repeat1] = STATE(163),
        [ts_builtin_sym_end] = ACTIONS(5),
        [sym_preproc_directive] = ACTIONS(7),
        [anon_sym_exception] = ACTIONS(9),
        [anon_sym_interface] = ACTIONS(11),
        [anon_sym_local] = ACTIONS(13),
        [anon_sym_bitset] = ACTIONS(15),
        [anon_sym_bitmask] = ACTIONS(17),
        [anon_sym_ATannotation] = ACTIONS(19),
        [anon_sym_native] = ACTIONS(21),
        [anon_sym_module] = ACTIONS(23),
        [anon_sym_struct] = ACTIONS(25),
        [anon_sym_enum] = ACTIONS(27),
        [anon_sym_ATignore_literal_names] = ACTIONS(29),
        [anon_sym_union] = ACTIONS(31),
        [anon_sym_typedef] = ACTIONS(33),
        [anon_sym_POUNDdefine] = ACTIONS(35),
        [sym_dds_service] = ACTIONS(37),
        [anon_sym_ATDDSRequestTopic] = ACTIONS(39),
        [anon_sym_ATDDSReplyTopic] = ACTIONS(41),
        [anon_sym_const] = ACTIONS(43),
        [sym_final] = ACTIONS(45),
        [anon_sym_ATdata_representation] = ACTIONS(47),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [2] = {
        [sym_signed_short_int] = STATE(190),
        [sym_signed_long_int] = STATE(190),
        [sym_signed_longlong_int] = STATE(190),
        [sym_unsigned_int] = STATE(170),
        [sym_integer_type] = STATE(229),
        [sym_signed_int] = STATE(170),
        [sym_unsigned_short_int] = STATE(188),
        [sym_unsigned_long_int] = STATE(188),
        [sym_unsigned_longlong_int] = STATE(188),
        [sym_floating_pt_type] = STATE(229),
        [sym_char_type] = STATE(229),
        [sym_scoped_name] = STATE(370),
        [sym_string_type] = STATE(240),
        [sym_type_spec] = STATE(382),
        [sym_simple_type_spec] = STATE(261),
        [sym_base_type_spec] = STATE(241),
        [sym_any_type] = STATE(229),
        [sym_fixed_pt_type] = STATE(240),
        [sym_template_type_spec] = STATE(261),
        [sym_sequence_type] = STATE(240),
        [sym_map_type] = STATE(240),
        [sym_except_dcl] = STATE(392),
        [sym_interface_body] = STATE(341),
        [sym_export] = STATE(36),
        [sym_op_dcl] = STATE(392),
        [sym_op_type_spec] = STATE(412),
        [sym_attr_dcl] = STATE(392),
        [sym_readonly_attr_spec] = STATE(422),
        [sym_attr_spec] = STATE(422),
        [sym_bitset_dcl] = STATE(392),
        [sym_bitmask_dcl] = STATE(392),
        [sym_annotation_dcl] = STATE(392),
        [sym_native_dcl] = STATE(392),
        [sym_struct_forward_dcl] = STATE(392),
        [sym_struct_def] = STATE(392),
        [sym_enum_dcl] = STATE(392),
        [sym_enum_anno] = STATE(433),
        [sym_union_forward_dcl] = STATE(392),
        [sym_union_def] = STATE(392),
        [sym_typedef_dcl] = STATE(392),
        [sym_const_dcl] = STATE(392),
        [sym_data_representation] = STATE(207),
        [sym_comment] = STATE(2),
        [aux_sym_interface_body_repeat1] = STATE(5),
        [aux_sym_struct_def_repeat1] = STATE(163),
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
        [anon_sym_ATannotation] = ACTIONS(19),
        [anon_sym_native] = ACTIONS(105),
        [anon_sym_struct] = ACTIONS(107),
        [anon_sym_enum] = ACTIONS(109),
        [anon_sym_ATignore_literal_names] = ACTIONS(29),
        [anon_sym_union] = ACTIONS(111),
        [anon_sym_typedef] = ACTIONS(113),
        [anon_sym_const] = ACTIONS(115),
        [sym_final] = ACTIONS(45),
        [anon_sym_ATdata_representation] = ACTIONS(47),
        [sym_identifier] = ACTIONS(117),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [3] = {
        [sym_signed_short_int] = STATE(190),
        [sym_signed_long_int] = STATE(190),
        [sym_signed_longlong_int] = STATE(190),
        [sym_unsigned_int] = STATE(170),
        [sym_integer_type] = STATE(229),
        [sym_signed_int] = STATE(170),
        [sym_unsigned_short_int] = STATE(188),
        [sym_unsigned_long_int] = STATE(188),
        [sym_unsigned_longlong_int] = STATE(188),
        [sym_floating_pt_type] = STATE(229),
        [sym_char_type] = STATE(229),
        [sym_scoped_name] = STATE(370),
        [sym_string_type] = STATE(240),
        [sym_type_spec] = STATE(382),
        [sym_simple_type_spec] = STATE(261),
        [sym_base_type_spec] = STATE(241),
        [sym_any_type] = STATE(229),
        [sym_fixed_pt_type] = STATE(240),
        [sym_template_type_spec] = STATE(261),
        [sym_sequence_type] = STATE(240),
        [sym_map_type] = STATE(240),
        [sym_except_dcl] = STATE(392),
        [sym_interface_body] = STATE(375),
        [sym_export] = STATE(36),
        [sym_op_dcl] = STATE(392),
        [sym_op_type_spec] = STATE(412),
        [sym_attr_dcl] = STATE(392),
        [sym_readonly_attr_spec] = STATE(422),
        [sym_attr_spec] = STATE(422),
        [sym_bitset_dcl] = STATE(392),
        [sym_bitmask_dcl] = STATE(392),
        [sym_annotation_dcl] = STATE(392),
        [sym_native_dcl] = STATE(392),
        [sym_struct_forward_dcl] = STATE(392),
        [sym_struct_def] = STATE(392),
        [sym_enum_dcl] = STATE(392),
        [sym_enum_anno] = STATE(433),
        [sym_union_forward_dcl] = STATE(392),
        [sym_union_def] = STATE(392),
        [sym_typedef_dcl] = STATE(392),
        [sym_const_dcl] = STATE(392),
        [sym_data_representation] = STATE(207),
        [sym_comment] = STATE(3),
        [aux_sym_interface_body_repeat1] = STATE(5),
        [aux_sym_struct_def_repeat1] = STATE(163),
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
        [anon_sym_ATannotation] = ACTIONS(19),
        [anon_sym_native] = ACTIONS(105),
        [anon_sym_struct] = ACTIONS(107),
        [anon_sym_enum] = ACTIONS(109),
        [anon_sym_ATignore_literal_names] = ACTIONS(29),
        [anon_sym_union] = ACTIONS(111),
        [anon_sym_typedef] = ACTIONS(113),
        [anon_sym_const] = ACTIONS(115),
        [sym_final] = ACTIONS(45),
        [anon_sym_ATdata_representation] = ACTIONS(47),
        [sym_identifier] = ACTIONS(117),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [4] = {
        [sym_signed_short_int] = STATE(190),
        [sym_signed_long_int] = STATE(190),
        [sym_signed_longlong_int] = STATE(190),
        [sym_unsigned_int] = STATE(170),
        [sym_integer_type] = STATE(229),
        [sym_signed_int] = STATE(170),
        [sym_unsigned_short_int] = STATE(188),
        [sym_unsigned_long_int] = STATE(188),
        [sym_unsigned_longlong_int] = STATE(188),
        [sym_floating_pt_type] = STATE(229),
        [sym_char_type] = STATE(229),
        [sym_scoped_name] = STATE(370),
        [sym_string_type] = STATE(240),
        [sym_type_spec] = STATE(382),
        [sym_simple_type_spec] = STATE(261),
        [sym_base_type_spec] = STATE(241),
        [sym_any_type] = STATE(229),
        [sym_fixed_pt_type] = STATE(240),
        [sym_template_type_spec] = STATE(261),
        [sym_sequence_type] = STATE(240),
        [sym_map_type] = STATE(240),
        [sym_except_dcl] = STATE(392),
        [sym_interface_body] = STATE(391),
        [sym_export] = STATE(36),
        [sym_op_dcl] = STATE(392),
        [sym_op_type_spec] = STATE(412),
        [sym_attr_dcl] = STATE(392),
        [sym_readonly_attr_spec] = STATE(422),
        [sym_attr_spec] = STATE(422),
        [sym_bitset_dcl] = STATE(392),
        [sym_bitmask_dcl] = STATE(392),
        [sym_annotation_dcl] = STATE(392),
        [sym_native_dcl] = STATE(392),
        [sym_struct_forward_dcl] = STATE(392),
        [sym_struct_def] = STATE(392),
        [sym_enum_dcl] = STATE(392),
        [sym_enum_anno] = STATE(433),
        [sym_union_forward_dcl] = STATE(392),
        [sym_union_def] = STATE(392),
        [sym_typedef_dcl] = STATE(392),
        [sym_const_dcl] = STATE(392),
        [sym_data_representation] = STATE(207),
        [sym_comment] = STATE(4),
        [aux_sym_interface_body_repeat1] = STATE(5),
        [aux_sym_struct_def_repeat1] = STATE(163),
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
        [anon_sym_ATannotation] = ACTIONS(19),
        [anon_sym_native] = ACTIONS(105),
        [anon_sym_struct] = ACTIONS(107),
        [anon_sym_enum] = ACTIONS(109),
        [anon_sym_ATignore_literal_names] = ACTIONS(29),
        [anon_sym_union] = ACTIONS(111),
        [anon_sym_typedef] = ACTIONS(113),
        [anon_sym_const] = ACTIONS(115),
        [sym_final] = ACTIONS(45),
        [anon_sym_ATdata_representation] = ACTIONS(47),
        [sym_identifier] = ACTIONS(117),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [5] = {
        [sym_signed_short_int] = STATE(190),
        [sym_signed_long_int] = STATE(190),
        [sym_signed_longlong_int] = STATE(190),
        [sym_unsigned_int] = STATE(170),
        [sym_integer_type] = STATE(229),
        [sym_signed_int] = STATE(170),
        [sym_unsigned_short_int] = STATE(188),
        [sym_unsigned_long_int] = STATE(188),
        [sym_unsigned_longlong_int] = STATE(188),
        [sym_floating_pt_type] = STATE(229),
        [sym_char_type] = STATE(229),
        [sym_scoped_name] = STATE(370),
        [sym_string_type] = STATE(240),
        [sym_type_spec] = STATE(382),
        [sym_simple_type_spec] = STATE(261),
        [sym_base_type_spec] = STATE(241),
        [sym_any_type] = STATE(229),
        [sym_fixed_pt_type] = STATE(240),
        [sym_template_type_spec] = STATE(261),
        [sym_sequence_type] = STATE(240),
        [sym_map_type] = STATE(240),
        [sym_except_dcl] = STATE(392),
        [sym_export] = STATE(36),
        [sym_op_dcl] = STATE(392),
        [sym_op_type_spec] = STATE(412),
        [sym_attr_dcl] = STATE(392),
        [sym_readonly_attr_spec] = STATE(422),
        [sym_attr_spec] = STATE(422),
        [sym_bitset_dcl] = STATE(392),
        [sym_bitmask_dcl] = STATE(392),
        [sym_annotation_dcl] = STATE(392),
        [sym_native_dcl] = STATE(392),
        [sym_struct_forward_dcl] = STATE(392),
        [sym_struct_def] = STATE(392),
        [sym_enum_dcl] = STATE(392),
        [sym_enum_anno] = STATE(433),
        [sym_union_forward_dcl] = STATE(392),
        [sym_union_def] = STATE(392),
        [sym_typedef_dcl] = STATE(392),
        [sym_const_dcl] = STATE(392),
        [sym_data_representation] = STATE(207),
        [sym_comment] = STATE(5),
        [aux_sym_interface_body_repeat1] = STATE(6),
        [aux_sym_struct_def_repeat1] = STATE(163),
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
        [anon_sym_ATannotation] = ACTIONS(19),
        [anon_sym_native] = ACTIONS(105),
        [anon_sym_struct] = ACTIONS(107),
        [anon_sym_enum] = ACTIONS(109),
        [anon_sym_ATignore_literal_names] = ACTIONS(29),
        [anon_sym_union] = ACTIONS(111),
        [anon_sym_typedef] = ACTIONS(113),
        [anon_sym_const] = ACTIONS(115),
        [sym_final] = ACTIONS(45),
        [anon_sym_ATdata_representation] = ACTIONS(47),
        [sym_identifier] = ACTIONS(117),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [6] = {
        [sym_signed_short_int] = STATE(190),
        [sym_signed_long_int] = STATE(190),
        [sym_signed_longlong_int] = STATE(190),
        [sym_unsigned_int] = STATE(170),
        [sym_integer_type] = STATE(229),
        [sym_signed_int] = STATE(170),
        [sym_unsigned_short_int] = STATE(188),
        [sym_unsigned_long_int] = STATE(188),
        [sym_unsigned_longlong_int] = STATE(188),
        [sym_floating_pt_type] = STATE(229),
        [sym_char_type] = STATE(229),
        [sym_scoped_name] = STATE(370),
        [sym_string_type] = STATE(240),
        [sym_type_spec] = STATE(382),
        [sym_simple_type_spec] = STATE(261),
        [sym_base_type_spec] = STATE(241),
        [sym_any_type] = STATE(229),
        [sym_fixed_pt_type] = STATE(240),
        [sym_template_type_spec] = STATE(261),
        [sym_sequence_type] = STATE(240),
        [sym_map_type] = STATE(240),
        [sym_except_dcl] = STATE(392),
        [sym_export] = STATE(36),
        [sym_op_dcl] = STATE(392),
        [sym_op_type_spec] = STATE(412),
        [sym_attr_dcl] = STATE(392),
        [sym_readonly_attr_spec] = STATE(422),
        [sym_attr_spec] = STATE(422),
        [sym_bitset_dcl] = STATE(392),
        [sym_bitmask_dcl] = STATE(392),
        [sym_annotation_dcl] = STATE(392),
        [sym_native_dcl] = STATE(392),
        [sym_struct_forward_dcl] = STATE(392),
        [sym_struct_def] = STATE(392),
        [sym_enum_dcl] = STATE(392),
        [sym_enum_anno] = STATE(433),
        [sym_union_forward_dcl] = STATE(392),
        [sym_union_def] = STATE(392),
        [sym_typedef_dcl] = STATE(392),
        [sym_const_dcl] = STATE(392),
        [sym_data_representation] = STATE(207),
        [sym_comment] = STATE(6),
        [aux_sym_interface_body_repeat1] = STATE(6),
        [aux_sym_struct_def_repeat1] = STATE(163),
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
        [anon_sym_ATannotation] = ACTIONS(208),
        [anon_sym_native] = ACTIONS(211),
        [anon_sym_struct] = ACTIONS(214),
        [anon_sym_enum] = ACTIONS(217),
        [anon_sym_ATignore_literal_names] = ACTIONS(220),
        [anon_sym_union] = ACTIONS(223),
        [anon_sym_typedef] = ACTIONS(226),
        [anon_sym_const] = ACTIONS(229),
        [sym_final] = ACTIONS(232),
        [anon_sym_ATdata_representation] = ACTIONS(235),
        [sym_identifier] = ACTIONS(238),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [7] = {
        [sym_signed_short_int] = STATE(190),
        [sym_signed_long_int] = STATE(190),
        [sym_signed_longlong_int] = STATE(190),
        [sym_unsigned_int] = STATE(170),
        [sym_integer_type] = STATE(229),
        [sym_signed_int] = STATE(170),
        [sym_unsigned_short_int] = STATE(188),
        [sym_unsigned_long_int] = STATE(188),
        [sym_unsigned_longlong_int] = STATE(188),
        [sym_floating_pt_type] = STATE(229),
        [sym_char_type] = STATE(229),
        [sym_scoped_name] = STATE(370),
        [sym_string_type] = STATE(240),
        [sym_simple_type_spec] = STATE(161),
        [sym_base_type_spec] = STATE(241),
        [sym_any_type] = STATE(229),
        [sym_fixed_pt_type] = STATE(240),
        [sym_template_type_spec] = STATE(161),
        [sym_sequence_type] = STATE(240),
        [sym_map_type] = STATE(240),
        [sym_bitset_dcl] = STATE(161),
        [sym_bitmask_dcl] = STATE(161),
        [sym_annotation_dcl] = STATE(161),
        [sym_struct_forward_dcl] = STATE(161),
        [sym_struct_def] = STATE(161),
        [sym_enum_dcl] = STATE(161),
        [sym_enum_anno] = STATE(433),
        [sym_union_forward_dcl] = STATE(161),
        [sym_union_def] = STATE(161),
        [sym_data_representation] = STATE(207),
        [sym_type_declarator] = STATE(367),
        [sym_comment] = STATE(7),
        [aux_sym_struct_def_repeat1] = STATE(163),
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
        [anon_sym_ATannotation] = ACTIONS(19),
        [anon_sym_struct] = ACTIONS(107),
        [anon_sym_enum] = ACTIONS(109),
        [anon_sym_ATignore_literal_names] = ACTIONS(29),
        [anon_sym_union] = ACTIONS(111),
        [sym_final] = ACTIONS(45),
        [anon_sym_ATdata_representation] = ACTIONS(47),
        [sym_identifier] = ACTIONS(117),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [8] = {
        [sym_signed_short_int] = STATE(190),
        [sym_signed_long_int] = STATE(190),
        [sym_signed_longlong_int] = STATE(190),
        [sym_unsigned_int] = STATE(170),
        [sym_integer_type] = STATE(229),
        [sym_signed_int] = STATE(170),
        [sym_unsigned_short_int] = STATE(188),
        [sym_unsigned_long_int] = STATE(188),
        [sym_unsigned_longlong_int] = STATE(188),
        [sym_floating_pt_type] = STATE(229),
        [sym_char_type] = STATE(229),
        [sym_scoped_name] = STATE(370),
        [sym_string_type] = STATE(240),
        [sym_type_spec] = STATE(157),
        [sym_simple_type_spec] = STATE(261),
        [sym_base_type_spec] = STATE(241),
        [sym_any_type] = STATE(229),
        [sym_fixed_pt_type] = STATE(240),
        [sym_template_type_spec] = STATE(261),
        [sym_sequence_type] = STATE(240),
        [sym_map_type] = STATE(240),
        [sym_member] = STATE(42),
        [sym_hashid] = STATE(49),
        [sym_try_construct] = STATE(49),
        [sym_struct_modifier] = STATE(48),
        [sym_comment] = STATE(8),
        [aux_sym_except_dcl_repeat1] = STATE(9),
        [aux_sym_member_repeat1] = STATE(19),
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
        [anon_sym_RBRACE] = ACTIONS(241),
        [sym_optional] = ACTIONS(243),
        [sym_key] = ACTIONS(243),
        [sym_must_understand] = ACTIONS(243),
        [sym_non_serialized] = ACTIONS(243),
        [sym_id] = ACTIONS(243),
        [sym_external] = ACTIONS(243),
        [anon_sym_AThashid] = ACTIONS(245),
        [anon_sym_ATtry_construct] = ACTIONS(247),
        [sym_identifier] = ACTIONS(117),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [9] = {
        [sym_signed_short_int] = STATE(190),
        [sym_signed_long_int] = STATE(190),
        [sym_signed_longlong_int] = STATE(190),
        [sym_unsigned_int] = STATE(170),
        [sym_integer_type] = STATE(229),
        [sym_signed_int] = STATE(170),
        [sym_unsigned_short_int] = STATE(188),
        [sym_unsigned_long_int] = STATE(188),
        [sym_unsigned_longlong_int] = STATE(188),
        [sym_floating_pt_type] = STATE(229),
        [sym_char_type] = STATE(229),
        [sym_scoped_name] = STATE(370),
        [sym_string_type] = STATE(240),
        [sym_type_spec] = STATE(157),
        [sym_simple_type_spec] = STATE(261),
        [sym_base_type_spec] = STATE(241),
        [sym_any_type] = STATE(229),
        [sym_fixed_pt_type] = STATE(240),
        [sym_template_type_spec] = STATE(261),
        [sym_sequence_type] = STATE(240),
        [sym_map_type] = STATE(240),
        [sym_member] = STATE(42),
        [sym_hashid] = STATE(49),
        [sym_try_construct] = STATE(49),
        [sym_struct_modifier] = STATE(48),
        [sym_comment] = STATE(9),
        [aux_sym_except_dcl_repeat1] = STATE(15),
        [aux_sym_member_repeat1] = STATE(19),
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
        [anon_sym_RBRACE] = ACTIONS(249),
        [sym_optional] = ACTIONS(243),
        [sym_key] = ACTIONS(243),
        [sym_must_understand] = ACTIONS(243),
        [sym_non_serialized] = ACTIONS(243),
        [sym_id] = ACTIONS(243),
        [sym_external] = ACTIONS(243),
        [anon_sym_AThashid] = ACTIONS(245),
        [anon_sym_ATtry_construct] = ACTIONS(247),
        [sym_identifier] = ACTIONS(117),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [10] = {
        [sym_signed_short_int] = STATE(190),
        [sym_signed_long_int] = STATE(190),
        [sym_signed_longlong_int] = STATE(190),
        [sym_unsigned_int] = STATE(170),
        [sym_integer_type] = STATE(229),
        [sym_signed_int] = STATE(170),
        [sym_unsigned_short_int] = STATE(188),
        [sym_unsigned_long_int] = STATE(188),
        [sym_unsigned_longlong_int] = STATE(188),
        [sym_floating_pt_type] = STATE(229),
        [sym_char_type] = STATE(229),
        [sym_scoped_name] = STATE(370),
        [sym_string_type] = STATE(240),
        [sym_type_spec] = STATE(157),
        [sym_simple_type_spec] = STATE(261),
        [sym_base_type_spec] = STATE(241),
        [sym_any_type] = STATE(229),
        [sym_fixed_pt_type] = STATE(240),
        [sym_template_type_spec] = STATE(261),
        [sym_sequence_type] = STATE(240),
        [sym_map_type] = STATE(240),
        [sym_member] = STATE(42),
        [sym_hashid] = STATE(49),
        [sym_try_construct] = STATE(49),
        [sym_struct_modifier] = STATE(48),
        [sym_comment] = STATE(10),
        [aux_sym_except_dcl_repeat1] = STATE(15),
        [aux_sym_member_repeat1] = STATE(19),
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
        [anon_sym_RBRACE] = ACTIONS(251),
        [sym_optional] = ACTIONS(243),
        [sym_key] = ACTIONS(243),
        [sym_must_understand] = ACTIONS(243),
        [sym_non_serialized] = ACTIONS(243),
        [sym_id] = ACTIONS(243),
        [sym_external] = ACTIONS(243),
        [anon_sym_AThashid] = ACTIONS(245),
        [anon_sym_ATtry_construct] = ACTIONS(247),
        [sym_identifier] = ACTIONS(117),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [11] = {
        [sym_signed_short_int] = STATE(190),
        [sym_signed_long_int] = STATE(190),
        [sym_signed_longlong_int] = STATE(190),
        [sym_unsigned_int] = STATE(170),
        [sym_integer_type] = STATE(229),
        [sym_signed_int] = STATE(170),
        [sym_unsigned_short_int] = STATE(188),
        [sym_unsigned_long_int] = STATE(188),
        [sym_unsigned_longlong_int] = STATE(188),
        [sym_floating_pt_type] = STATE(229),
        [sym_char_type] = STATE(229),
        [sym_scoped_name] = STATE(370),
        [sym_string_type] = STATE(240),
        [sym_type_spec] = STATE(157),
        [sym_simple_type_spec] = STATE(261),
        [sym_base_type_spec] = STATE(241),
        [sym_any_type] = STATE(229),
        [sym_fixed_pt_type] = STATE(240),
        [sym_template_type_spec] = STATE(261),
        [sym_sequence_type] = STATE(240),
        [sym_map_type] = STATE(240),
        [sym_member] = STATE(42),
        [sym_hashid] = STATE(49),
        [sym_try_construct] = STATE(49),
        [sym_struct_modifier] = STATE(48),
        [sym_comment] = STATE(11),
        [aux_sym_except_dcl_repeat1] = STATE(15),
        [aux_sym_member_repeat1] = STATE(19),
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
        [anon_sym_RBRACE] = ACTIONS(253),
        [sym_optional] = ACTIONS(243),
        [sym_key] = ACTIONS(243),
        [sym_must_understand] = ACTIONS(243),
        [sym_non_serialized] = ACTIONS(243),
        [sym_id] = ACTIONS(243),
        [sym_external] = ACTIONS(243),
        [anon_sym_AThashid] = ACTIONS(245),
        [anon_sym_ATtry_construct] = ACTIONS(247),
        [sym_identifier] = ACTIONS(117),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [12] = {
        [sym_signed_short_int] = STATE(190),
        [sym_signed_long_int] = STATE(190),
        [sym_signed_longlong_int] = STATE(190),
        [sym_unsigned_int] = STATE(170),
        [sym_integer_type] = STATE(229),
        [sym_signed_int] = STATE(170),
        [sym_unsigned_short_int] = STATE(188),
        [sym_unsigned_long_int] = STATE(188),
        [sym_unsigned_longlong_int] = STATE(188),
        [sym_floating_pt_type] = STATE(229),
        [sym_char_type] = STATE(229),
        [sym_scoped_name] = STATE(370),
        [sym_string_type] = STATE(240),
        [sym_type_spec] = STATE(157),
        [sym_simple_type_spec] = STATE(261),
        [sym_base_type_spec] = STATE(241),
        [sym_any_type] = STATE(229),
        [sym_fixed_pt_type] = STATE(240),
        [sym_template_type_spec] = STATE(261),
        [sym_sequence_type] = STATE(240),
        [sym_map_type] = STATE(240),
        [sym_member] = STATE(42),
        [sym_hashid] = STATE(49),
        [sym_try_construct] = STATE(49),
        [sym_struct_modifier] = STATE(48),
        [sym_comment] = STATE(12),
        [aux_sym_except_dcl_repeat1] = STATE(18),
        [aux_sym_member_repeat1] = STATE(19),
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
        [anon_sym_RBRACE] = ACTIONS(249),
        [sym_optional] = ACTIONS(243),
        [sym_key] = ACTIONS(243),
        [sym_must_understand] = ACTIONS(243),
        [sym_non_serialized] = ACTIONS(243),
        [sym_id] = ACTIONS(243),
        [sym_external] = ACTIONS(243),
        [anon_sym_AThashid] = ACTIONS(245),
        [anon_sym_ATtry_construct] = ACTIONS(247),
        [sym_identifier] = ACTIONS(117),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [13] = {
        [sym_signed_short_int] = STATE(190),
        [sym_signed_long_int] = STATE(190),
        [sym_signed_longlong_int] = STATE(190),
        [sym_unsigned_int] = STATE(170),
        [sym_integer_type] = STATE(229),
        [sym_signed_int] = STATE(170),
        [sym_unsigned_short_int] = STATE(188),
        [sym_unsigned_long_int] = STATE(188),
        [sym_unsigned_longlong_int] = STATE(188),
        [sym_floating_pt_type] = STATE(229),
        [sym_char_type] = STATE(229),
        [sym_scoped_name] = STATE(370),
        [sym_string_type] = STATE(240),
        [sym_type_spec] = STATE(157),
        [sym_simple_type_spec] = STATE(261),
        [sym_base_type_spec] = STATE(241),
        [sym_any_type] = STATE(229),
        [sym_fixed_pt_type] = STATE(240),
        [sym_template_type_spec] = STATE(261),
        [sym_sequence_type] = STATE(240),
        [sym_map_type] = STATE(240),
        [sym_member] = STATE(42),
        [sym_hashid] = STATE(49),
        [sym_try_construct] = STATE(49),
        [sym_struct_modifier] = STATE(48),
        [sym_comment] = STATE(13),
        [aux_sym_except_dcl_repeat1] = STATE(11),
        [aux_sym_member_repeat1] = STATE(19),
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
        [anon_sym_RBRACE] = ACTIONS(255),
        [sym_optional] = ACTIONS(243),
        [sym_key] = ACTIONS(243),
        [sym_must_understand] = ACTIONS(243),
        [sym_non_serialized] = ACTIONS(243),
        [sym_id] = ACTIONS(243),
        [sym_external] = ACTIONS(243),
        [anon_sym_AThashid] = ACTIONS(245),
        [anon_sym_ATtry_construct] = ACTIONS(247),
        [sym_identifier] = ACTIONS(117),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [14] = {
        [sym_signed_short_int] = STATE(190),
        [sym_signed_long_int] = STATE(190),
        [sym_signed_longlong_int] = STATE(190),
        [sym_unsigned_int] = STATE(170),
        [sym_integer_type] = STATE(229),
        [sym_signed_int] = STATE(170),
        [sym_unsigned_short_int] = STATE(188),
        [sym_unsigned_long_int] = STATE(188),
        [sym_unsigned_longlong_int] = STATE(188),
        [sym_floating_pt_type] = STATE(229),
        [sym_char_type] = STATE(229),
        [sym_scoped_name] = STATE(370),
        [sym_string_type] = STATE(240),
        [sym_type_spec] = STATE(157),
        [sym_simple_type_spec] = STATE(261),
        [sym_base_type_spec] = STATE(241),
        [sym_any_type] = STATE(229),
        [sym_fixed_pt_type] = STATE(240),
        [sym_template_type_spec] = STATE(261),
        [sym_sequence_type] = STATE(240),
        [sym_map_type] = STATE(240),
        [sym_member] = STATE(42),
        [sym_hashid] = STATE(49),
        [sym_try_construct] = STATE(49),
        [sym_struct_modifier] = STATE(48),
        [sym_comment] = STATE(14),
        [aux_sym_except_dcl_repeat1] = STATE(15),
        [aux_sym_member_repeat1] = STATE(19),
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
        [anon_sym_RBRACE] = ACTIONS(257),
        [sym_optional] = ACTIONS(243),
        [sym_key] = ACTIONS(243),
        [sym_must_understand] = ACTIONS(243),
        [sym_non_serialized] = ACTIONS(243),
        [sym_id] = ACTIONS(243),
        [sym_external] = ACTIONS(243),
        [anon_sym_AThashid] = ACTIONS(245),
        [anon_sym_ATtry_construct] = ACTIONS(247),
        [sym_identifier] = ACTIONS(117),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [15] = {
        [sym_signed_short_int] = STATE(190),
        [sym_signed_long_int] = STATE(190),
        [sym_signed_longlong_int] = STATE(190),
        [sym_unsigned_int] = STATE(170),
        [sym_integer_type] = STATE(229),
        [sym_signed_int] = STATE(170),
        [sym_unsigned_short_int] = STATE(188),
        [sym_unsigned_long_int] = STATE(188),
        [sym_unsigned_longlong_int] = STATE(188),
        [sym_floating_pt_type] = STATE(229),
        [sym_char_type] = STATE(229),
        [sym_scoped_name] = STATE(370),
        [sym_string_type] = STATE(240),
        [sym_type_spec] = STATE(157),
        [sym_simple_type_spec] = STATE(261),
        [sym_base_type_spec] = STATE(241),
        [sym_any_type] = STATE(229),
        [sym_fixed_pt_type] = STATE(240),
        [sym_template_type_spec] = STATE(261),
        [sym_sequence_type] = STATE(240),
        [sym_map_type] = STATE(240),
        [sym_member] = STATE(42),
        [sym_hashid] = STATE(49),
        [sym_try_construct] = STATE(49),
        [sym_struct_modifier] = STATE(48),
        [sym_comment] = STATE(15),
        [aux_sym_except_dcl_repeat1] = STATE(15),
        [aux_sym_member_repeat1] = STATE(19),
        [anon_sym_short] = ACTIONS(259),
        [anon_sym_int16] = ACTIONS(259),
        [anon_sym_long] = ACTIONS(262),
        [anon_sym_int32] = ACTIONS(262),
        [anon_sym_longlong] = ACTIONS(265),
        [anon_sym_int64] = ACTIONS(268),
        [sym_unsigned_tiny_int] = ACTIONS(271),
        [sym_boolean_type] = ACTIONS(274),
        [anon_sym_fixed] = ACTIONS(277),
        [sym_octet_type] = ACTIONS(274),
        [sym_signed_tiny_int] = ACTIONS(280),
        [anon_sym_unsignedshort] = ACTIONS(283),
        [anon_sym_uint16] = ACTIONS(286),
        [anon_sym_unsignedlong] = ACTIONS(289),
        [anon_sym_uint32] = ACTIONS(289),
        [anon_sym_unsignedlonglong] = ACTIONS(292),
        [anon_sym_uint64] = ACTIONS(295),
        [anon_sym_float] = ACTIONS(298),
        [anon_sym_double] = ACTIONS(298),
        [anon_sym_longdouble] = ACTIONS(301),
        [anon_sym_char] = ACTIONS(304),
        [anon_sym_wchar] = ACTIONS(304),
        [anon_sym_COLON_COLON] = ACTIONS(307),
        [anon_sym_string] = ACTIONS(310),
        [anon_sym_wstring] = ACTIONS(310),
        [anon_sym_any] = ACTIONS(313),
        [anon_sym_sequence] = ACTIONS(316),
        [anon_sym_map] = ACTIONS(319),
        [anon_sym_RBRACE] = ACTIONS(322),
        [sym_optional] = ACTIONS(324),
        [sym_key] = ACTIONS(324),
        [sym_must_understand] = ACTIONS(324),
        [sym_non_serialized] = ACTIONS(324),
        [sym_id] = ACTIONS(324),
        [sym_external] = ACTIONS(324),
        [anon_sym_AThashid] = ACTIONS(327),
        [anon_sym_ATtry_construct] = ACTIONS(330),
        [sym_identifier] = ACTIONS(333),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [16] = {
        [sym_signed_short_int] = STATE(190),
        [sym_signed_long_int] = STATE(190),
        [sym_signed_longlong_int] = STATE(190),
        [sym_unsigned_int] = STATE(170),
        [sym_integer_type] = STATE(229),
        [sym_signed_int] = STATE(170),
        [sym_unsigned_short_int] = STATE(188),
        [sym_unsigned_long_int] = STATE(188),
        [sym_unsigned_longlong_int] = STATE(188),
        [sym_floating_pt_type] = STATE(229),
        [sym_char_type] = STATE(229),
        [sym_scoped_name] = STATE(370),
        [sym_string_type] = STATE(240),
        [sym_type_spec] = STATE(157),
        [sym_simple_type_spec] = STATE(261),
        [sym_base_type_spec] = STATE(241),
        [sym_any_type] = STATE(229),
        [sym_fixed_pt_type] = STATE(240),
        [sym_template_type_spec] = STATE(261),
        [sym_sequence_type] = STATE(240),
        [sym_map_type] = STATE(240),
        [sym_member] = STATE(42),
        [sym_hashid] = STATE(49),
        [sym_try_construct] = STATE(49),
        [sym_struct_modifier] = STATE(48),
        [sym_comment] = STATE(16),
        [aux_sym_except_dcl_repeat1] = STATE(10),
        [aux_sym_member_repeat1] = STATE(19),
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
        [anon_sym_RBRACE] = ACTIONS(336),
        [sym_optional] = ACTIONS(243),
        [sym_key] = ACTIONS(243),
        [sym_must_understand] = ACTIONS(243),
        [sym_non_serialized] = ACTIONS(243),
        [sym_id] = ACTIONS(243),
        [sym_external] = ACTIONS(243),
        [anon_sym_AThashid] = ACTIONS(245),
        [anon_sym_ATtry_construct] = ACTIONS(247),
        [sym_identifier] = ACTIONS(117),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [17] = {
        [sym_signed_short_int] = STATE(190),
        [sym_signed_long_int] = STATE(190),
        [sym_signed_longlong_int] = STATE(190),
        [sym_unsigned_int] = STATE(170),
        [sym_integer_type] = STATE(229),
        [sym_signed_int] = STATE(170),
        [sym_unsigned_short_int] = STATE(188),
        [sym_unsigned_long_int] = STATE(188),
        [sym_unsigned_longlong_int] = STATE(188),
        [sym_floating_pt_type] = STATE(229),
        [sym_char_type] = STATE(229),
        [sym_scoped_name] = STATE(370),
        [sym_string_type] = STATE(240),
        [sym_type_spec] = STATE(157),
        [sym_simple_type_spec] = STATE(261),
        [sym_base_type_spec] = STATE(241),
        [sym_any_type] = STATE(229),
        [sym_fixed_pt_type] = STATE(240),
        [sym_template_type_spec] = STATE(261),
        [sym_sequence_type] = STATE(240),
        [sym_map_type] = STATE(240),
        [sym_member] = STATE(42),
        [sym_hashid] = STATE(49),
        [sym_try_construct] = STATE(49),
        [sym_struct_modifier] = STATE(48),
        [sym_comment] = STATE(17),
        [aux_sym_except_dcl_repeat1] = STATE(14),
        [aux_sym_member_repeat1] = STATE(19),
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
        [anon_sym_RBRACE] = ACTIONS(338),
        [sym_optional] = ACTIONS(243),
        [sym_key] = ACTIONS(243),
        [sym_must_understand] = ACTIONS(243),
        [sym_non_serialized] = ACTIONS(243),
        [sym_id] = ACTIONS(243),
        [sym_external] = ACTIONS(243),
        [anon_sym_AThashid] = ACTIONS(245),
        [anon_sym_ATtry_construct] = ACTIONS(247),
        [sym_identifier] = ACTIONS(117),
        [anon_sym_SLASH_SLASH] = ACTIONS(3),
    },
    [18] = {
        [sym_signed_short_int] = STATE(190),
        [sym_signed_long_int] = STATE(190),
        [sym_signed_longlong_int] = STATE(190),
        [sym_unsigned_int] = STATE(170),
        [sym_integer_type] = STATE(229),
        [sym_signed_int] = STATE(170),
        [sym_unsigned_short_int] = STATE(188),
        [sym_unsigned_long_int] = STATE(188),
        [sym_unsigned_longlong_int] = STATE(188),
        [sym_floating_pt_type] = STATE(229),
        [sym_char_type] = STATE(229),
        [sym_scoped_name] = STATE(370),
        [sym_string_type] = STATE(240),
        [sym_type_spec] = STATE(157),
        [sym_simple_type_spec] = STATE(261),
        [sym_base_type_spec] = STATE(241),
        [sym_any_type] = STATE(229),
        [sym_fixed_pt_type] = STATE(240),
        [sym_template_type_spec] = STATE(261),
        [sym_sequence_type] = STATE(240),
        [sym_map_type] = STATE(240),
        [sym_member] = STATE(42),
        [sym_hashid] = STATE(49),
        [sym_try_construct] = STATE(49),
        [sym_struct_modifier] = STATE(48),
        [sym_comment] = STATE(18),
        [aux_sym_except_dcl_repeat1] = STATE(15),
        [aux_sym_member_repeat1] = STATE(19),
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
        [anon_sym_RBRACE] = ACTIONS(340),
        [sym_optional] = ACTIONS(243),
        [sym_key] = ACTIONS(243),
        [sym_must_understand] = ACTIONS(243),
        [sym_non_serialized] = ACTIONS(243),
        [sym_id] = ACTIONS(243),
        [sym_external] = ACTIONS(243),
        [anon_sym_AThashid] = ACTIONS(245),
        [anon_sym_ATtry_construct] = ACTIONS(247),
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
    ACTIONS(245),
    1,
    anon_sym_AThashid,
    ACTIONS(247),
    1,
    anon_sym_ATtry_construct,
    STATE(19),
    1,
    sym_comment,
    STATE(40),
    1,
    aux_sym_member_repeat1,
    STATE(48),
    1,
    sym_struct_modifier,
    STATE(160),
    1,
    sym_type_spec,
    STATE(241),
    1,
    sym_base_type_spec,
    STATE(370),
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
    STATE(49),
    2,
    sym_hashid,
    sym_try_construct,
    STATE(170),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(261),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(188),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(190),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(229),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(240),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    ACTIONS(243),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    [143] = 38,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(29),
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
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(344),
    1,
    anon_sym_fixed,
    ACTIONS(346),
    1,
    anon_sym_any,
    ACTIONS(348),
    1,
    anon_sym_RBRACE,
    ACTIONS(350),
    1,
    anon_sym_enum,
    STATE(20),
    1,
    sym_comment,
    STATE(23),
    1,
    aux_sym_annotation_body_repeat1,
    STATE(54),
    1,
    sym_annotation_member,
    STATE(295),
    1,
    sym_annotation_member_type,
    STATE(321),
    1,
    sym_enum_dcl,
    STATE(388),
    1,
    sym_scoped_name,
    STATE(393),
    1,
    sym_annotation_body,
    STATE(424),
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
    ACTIONS(342),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(170),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(408),
    2,
    sym_any_const_type,
    sym_const_type,
    STATE(188),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(190),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(410),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [276] = 36,
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
    ACTIONS(352),
    1,
    anon_sym_RBRACE,
    STATE(21),
    1,
    sym_comment,
    STATE(183),
    1,
    sym_type_spec,
    STATE(241),
    1,
    sym_base_type_spec,
    STATE(370),
    1,
    sym_scoped_name,
    STATE(416),
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
    ACTIONS(354),
    2,
    anon_sym_default,
    anon_sym_case,
    STATE(170),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(261),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(188),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(190),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(229),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(240),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [405] = 36,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(362),
    1,
    anon_sym_longlong,
    ACTIONS(365),
    1,
    anon_sym_int64,
    ACTIONS(368),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(374),
    1,
    anon_sym_fixed,
    ACTIONS(377),
    1,
    sym_signed_tiny_int,
    ACTIONS(380),
    1,
    anon_sym_unsignedshort,
    ACTIONS(383),
    1,
    anon_sym_uint16,
    ACTIONS(389),
    1,
    anon_sym_unsignedlonglong,
    ACTIONS(392),
    1,
    anon_sym_uint64,
    ACTIONS(398),
    1,
    anon_sym_longdouble,
    ACTIONS(404),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(410),
    1,
    anon_sym_any,
    ACTIONS(413),
    1,
    anon_sym_sequence,
    ACTIONS(416),
    1,
    anon_sym_RBRACE,
    ACTIONS(418),
    1,
    anon_sym_enum,
    ACTIONS(421),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(424),
    1,
    sym_identifier,
    STATE(54),
    1,
    sym_annotation_member,
    STATE(295),
    1,
    sym_annotation_member_type,
    STATE(321),
    1,
    sym_enum_dcl,
    STATE(388),
    1,
    sym_scoped_name,
    STATE(424),
    1,
    sym_enum_anno,
    ACTIONS(356),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(359),
    2,
    anon_sym_long,
    anon_sym_int32,
    ACTIONS(371),
    2,
    sym_boolean_type,
    sym_octet_type,
    ACTIONS(386),
    2,
    anon_sym_unsignedlong,
    anon_sym_uint32,
    ACTIONS(395),
    2,
    anon_sym_float,
    anon_sym_double,
    ACTIONS(401),
    2,
    anon_sym_char,
    anon_sym_wchar,
    ACTIONS(407),
    2,
    anon_sym_string,
    anon_sym_wstring,
    STATE(22),
    2,
    sym_comment,
    aux_sym_annotation_body_repeat1,
    STATE(170),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(408),
    2,
    sym_any_const_type,
    sym_const_type,
    STATE(188),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(190),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(410),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [533] = 37,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(29),
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
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(344),
    1,
    anon_sym_fixed,
    ACTIONS(346),
    1,
    anon_sym_any,
    ACTIONS(350),
    1,
    anon_sym_enum,
    ACTIONS(427),
    1,
    anon_sym_RBRACE,
    STATE(22),
    1,
    aux_sym_annotation_body_repeat1,
    STATE(23),
    1,
    sym_comment,
    STATE(54),
    1,
    sym_annotation_member,
    STATE(295),
    1,
    sym_annotation_member_type,
    STATE(321),
    1,
    sym_enum_dcl,
    STATE(388),
    1,
    sym_scoped_name,
    STATE(424),
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
    ACTIONS(342),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(170),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(408),
    2,
    sym_any_const_type,
    sym_const_type,
    STATE(188),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(190),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(410),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [663] = 35,
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
    ACTIONS(429),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(431),
    1,
    anon_sym_GT,
    ACTIONS(433),
    1,
    anon_sym_COMMA,
    ACTIONS(435),
    1,
    sym_identifier,
    STATE(24),
    1,
    sym_comment,
    STATE(208),
    1,
    sym_scoped_name,
    STATE(241),
    1,
    sym_base_type_spec,
    STATE(428),
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
    STATE(170),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(261),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(188),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(190),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(229),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(240),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [788] = 38,
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
    anon_sym_native,
    ACTIONS(23),
    1,
    anon_sym_module,
    ACTIONS(25),
    1,
    anon_sym_struct,
    ACTIONS(27),
    1,
    anon_sym_enum,
    ACTIONS(29),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(31),
    1,
    anon_sym_union,
    ACTIONS(33),
    1,
    anon_sym_typedef,
    ACTIONS(35),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(37),
    1,
    sym_dds_service,
    ACTIONS(39),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(41),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(43),
    1,
    anon_sym_const,
    ACTIONS(45),
    1,
    sym_final,
    ACTIONS(47),
    1,
    anon_sym_ATdata_representation,
    ACTIONS(437),
    1,
    ts_builtin_sym_end,
    STATE(25),
    1,
    sym_comment,
    STATE(33),
    1,
    aux_sym_specification_repeat2,
    STATE(74),
    1,
    aux_sym_specification_repeat1,
    STATE(83),
    1,
    sym_preproc_call,
    STATE(85),
    1,
    sym__definition,
    STATE(86),
    1,
    sym_predefine,
    STATE(123),
    1,
    aux_sym_interface_def_repeat1,
    STATE(152),
    1,
    sym_interface_anno,
    STATE(163),
    1,
    aux_sym_struct_def_repeat1,
    STATE(207),
    1,
    sym_data_representation,
    STATE(433),
    1,
    sym_enum_anno,
    STATE(435),
    1,
    sym_interface_header,
    STATE(164),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(437),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(438),
    14,
    sym_except_dcl,
    sym_interface_dcl,
    sym_bitset_dcl,
    sym_bitmask_dcl,
    sym_annotation_dcl,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_enum_dcl,
    sym_union_forward_dcl,
    sym_union_def,
    sym_typedef_dcl,
    sym_const_dcl,
    [918] = 33,
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
    STATE(26),
    1,
    sym_comment,
    STATE(241),
    1,
    sym_base_type_spec,
    STATE(257),
    1,
    sym_type_spec,
    STATE(370),
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
    STATE(170),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(261),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(188),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(190),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(229),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(240),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [1037] = 33,
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
    STATE(27),
    1,
    sym_comment,
    STATE(241),
    1,
    sym_base_type_spec,
    STATE(282),
    1,
    sym_scoped_name,
    STATE(426),
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
    STATE(170),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(261),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(188),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(190),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(229),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(240),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [1156] = 33,
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
    ACTIONS(429),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(435),
    1,
    sym_identifier,
    STATE(28),
    1,
    sym_comment,
    STATE(208),
    1,
    sym_scoped_name,
    STATE(241),
    1,
    sym_base_type_spec,
    STATE(335),
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
    STATE(170),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(261),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(188),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(190),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(229),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(240),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [1275] = 33,
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
    STATE(29),
    1,
    sym_comment,
    STATE(220),
    1,
    sym_type_spec,
    STATE(241),
    1,
    sym_base_type_spec,
    STATE(370),
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
    STATE(170),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(261),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(188),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(190),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(229),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(240),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [1394] = 33,
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
    STATE(30),
    1,
    sym_comment,
    STATE(241),
    1,
    sym_base_type_spec,
    STATE(300),
    1,
    sym_type_spec,
    STATE(370),
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
    STATE(170),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(261),
    2,
    sym_simple_type_spec,
    sym_template_type_spec,
    STATE(188),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(190),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(229),
    4,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_any_type,
    STATE(240),
    4,
    sym_string_type,
    sym_fixed_pt_type,
    sym_sequence_type,
    sym_map_type,
    [1513] = 34,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(441),
    1,
    anon_sym_exception,
    ACTIONS(444),
    1,
    anon_sym_interface,
    ACTIONS(447),
    1,
    anon_sym_local,
    ACTIONS(450),
    1,
    anon_sym_bitset,
    ACTIONS(453),
    1,
    anon_sym_bitmask,
    ACTIONS(456),
    1,
    anon_sym_ATannotation,
    ACTIONS(459),
    1,
    anon_sym_native,
    ACTIONS(462),
    1,
    anon_sym_module,
    ACTIONS(465),
    1,
    anon_sym_struct,
    ACTIONS(468),
    1,
    anon_sym_enum,
    ACTIONS(471),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(474),
    1,
    anon_sym_union,
    ACTIONS(477),
    1,
    anon_sym_typedef,
    ACTIONS(480),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(483),
    1,
    sym_dds_service,
    ACTIONS(486),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(489),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(492),
    1,
    anon_sym_const,
    ACTIONS(495),
    1,
    sym_final,
    ACTIONS(498),
    1,
    anon_sym_ATdata_representation,
    STATE(85),
    1,
    sym__definition,
    STATE(86),
    1,
    sym_predefine,
    STATE(123),
    1,
    aux_sym_interface_def_repeat1,
    STATE(152),
    1,
    sym_interface_anno,
    STATE(163),
    1,
    aux_sym_struct_def_repeat1,
    STATE(207),
    1,
    sym_data_representation,
    STATE(433),
    1,
    sym_enum_anno,
    STATE(435),
    1,
    sym_interface_header,
    ACTIONS(439),
    2,
    ts_builtin_sym_end,
    anon_sym_RBRACE,
    STATE(31),
    2,
    sym_comment,
    aux_sym_specification_repeat2,
    STATE(164),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(437),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(438),
    14,
    sym_except_dcl,
    sym_interface_dcl,
    sym_bitset_dcl,
    sym_bitmask_dcl,
    sym_annotation_dcl,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_enum_dcl,
    sym_union_forward_dcl,
    sym_union_def,
    sym_typedef_dcl,
    sym_const_dcl,
    [1633] = 35,
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
    anon_sym_native,
    ACTIONS(23),
    1,
    anon_sym_module,
    ACTIONS(25),
    1,
    anon_sym_struct,
    ACTIONS(27),
    1,
    anon_sym_enum,
    ACTIONS(29),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(31),
    1,
    anon_sym_union,
    ACTIONS(33),
    1,
    anon_sym_typedef,
    ACTIONS(37),
    1,
    sym_dds_service,
    ACTIONS(39),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(41),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(43),
    1,
    anon_sym_const,
    ACTIONS(45),
    1,
    sym_final,
    ACTIONS(47),
    1,
    anon_sym_ATdata_representation,
    ACTIONS(501),
    1,
    anon_sym_RBRACE,
    ACTIONS(503),
    1,
    anon_sym_POUNDdefine,
    STATE(32),
    1,
    sym_comment,
    STATE(34),
    1,
    aux_sym_specification_repeat2,
    STATE(85),
    1,
    sym__definition,
    STATE(86),
    1,
    sym_predefine,
    STATE(123),
    1,
    aux_sym_interface_def_repeat1,
    STATE(152),
    1,
    sym_interface_anno,
    STATE(163),
    1,
    aux_sym_struct_def_repeat1,
    STATE(207),
    1,
    sym_data_representation,
    STATE(433),
    1,
    sym_enum_anno,
    STATE(435),
    1,
    sym_interface_header,
    STATE(164),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(437),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(438),
    14,
    sym_except_dcl,
    sym_interface_dcl,
    sym_bitset_dcl,
    sym_bitmask_dcl,
    sym_annotation_dcl,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_enum_dcl,
    sym_union_forward_dcl,
    sym_union_def,
    sym_typedef_dcl,
    sym_const_dcl,
    [1754] = 35,
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
    anon_sym_native,
    ACTIONS(23),
    1,
    anon_sym_module,
    ACTIONS(25),
    1,
    anon_sym_struct,
    ACTIONS(27),
    1,
    anon_sym_enum,
    ACTIONS(29),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(31),
    1,
    anon_sym_union,
    ACTIONS(33),
    1,
    anon_sym_typedef,
    ACTIONS(37),
    1,
    sym_dds_service,
    ACTIONS(39),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(41),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(43),
    1,
    anon_sym_const,
    ACTIONS(45),
    1,
    sym_final,
    ACTIONS(47),
    1,
    anon_sym_ATdata_representation,
    ACTIONS(503),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(505),
    1,
    ts_builtin_sym_end,
    STATE(31),
    1,
    aux_sym_specification_repeat2,
    STATE(33),
    1,
    sym_comment,
    STATE(85),
    1,
    sym__definition,
    STATE(86),
    1,
    sym_predefine,
    STATE(123),
    1,
    aux_sym_interface_def_repeat1,
    STATE(152),
    1,
    sym_interface_anno,
    STATE(163),
    1,
    aux_sym_struct_def_repeat1,
    STATE(207),
    1,
    sym_data_representation,
    STATE(433),
    1,
    sym_enum_anno,
    STATE(435),
    1,
    sym_interface_header,
    STATE(164),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(437),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(438),
    14,
    sym_except_dcl,
    sym_interface_dcl,
    sym_bitset_dcl,
    sym_bitmask_dcl,
    sym_annotation_dcl,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_enum_dcl,
    sym_union_forward_dcl,
    sym_union_def,
    sym_typedef_dcl,
    sym_const_dcl,
    [1875] = 35,
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
    anon_sym_native,
    ACTIONS(23),
    1,
    anon_sym_module,
    ACTIONS(25),
    1,
    anon_sym_struct,
    ACTIONS(27),
    1,
    anon_sym_enum,
    ACTIONS(29),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(31),
    1,
    anon_sym_union,
    ACTIONS(33),
    1,
    anon_sym_typedef,
    ACTIONS(37),
    1,
    sym_dds_service,
    ACTIONS(39),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(41),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(43),
    1,
    anon_sym_const,
    ACTIONS(45),
    1,
    sym_final,
    ACTIONS(47),
    1,
    anon_sym_ATdata_representation,
    ACTIONS(503),
    1,
    anon_sym_POUNDdefine,
    ACTIONS(507),
    1,
    anon_sym_RBRACE,
    STATE(31),
    1,
    aux_sym_specification_repeat2,
    STATE(34),
    1,
    sym_comment,
    STATE(85),
    1,
    sym__definition,
    STATE(86),
    1,
    sym_predefine,
    STATE(123),
    1,
    aux_sym_interface_def_repeat1,
    STATE(152),
    1,
    sym_interface_anno,
    STATE(163),
    1,
    aux_sym_struct_def_repeat1,
    STATE(207),
    1,
    sym_data_representation,
    STATE(433),
    1,
    sym_enum_anno,
    STATE(435),
    1,
    sym_interface_header,
    STATE(164),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(437),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(438),
    14,
    sym_except_dcl,
    sym_interface_dcl,
    sym_bitset_dcl,
    sym_bitmask_dcl,
    sym_annotation_dcl,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_enum_dcl,
    sym_union_forward_dcl,
    sym_union_def,
    sym_typedef_dcl,
    sym_const_dcl,
    [1996] = 35,
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
    anon_sym_native,
    ACTIONS(23),
    1,
    anon_sym_module,
    ACTIONS(25),
    1,
    anon_sym_struct,
    ACTIONS(27),
    1,
    anon_sym_enum,
    ACTIONS(29),
    1,
    anon_sym_ATignore_literal_names,
    ACTIONS(31),
    1,
    anon_sym_union,
    ACTIONS(33),
    1,
    anon_sym_typedef,
    ACTIONS(37),
    1,
    sym_dds_service,
    ACTIONS(39),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(41),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(43),
    1,
    anon_sym_const,
    ACTIONS(45),
    1,
    sym_final,
    ACTIONS(47),
    1,
    anon_sym_ATdata_representation,
    ACTIONS(437),
    1,
    ts_builtin_sym_end,
    ACTIONS(503),
    1,
    anon_sym_POUNDdefine,
    STATE(31),
    1,
    aux_sym_specification_repeat2,
    STATE(35),
    1,
    sym_comment,
    STATE(85),
    1,
    sym__definition,
    STATE(86),
    1,
    sym_predefine,
    STATE(123),
    1,
    aux_sym_interface_def_repeat1,
    STATE(152),
    1,
    sym_interface_anno,
    STATE(163),
    1,
    aux_sym_struct_def_repeat1,
    STATE(207),
    1,
    sym_data_representation,
    STATE(433),
    1,
    sym_enum_anno,
    STATE(435),
    1,
    sym_interface_header,
    STATE(164),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    STATE(437),
    2,
    sym_interface_forward_dcl,
    sym_interface_def,
    STATE(438),
    14,
    sym_except_dcl,
    sym_interface_dcl,
    sym_bitset_dcl,
    sym_bitmask_dcl,
    sym_annotation_dcl,
    sym_native_dcl,
    sym_module_dcl,
    sym_struct_forward_dcl,
    sym_struct_def,
    sym_enum_dcl,
    sym_union_forward_dcl,
    sym_union_def,
    sym_typedef_dcl,
    sym_const_dcl,
    [2117] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(36),
    1,
    sym_comment,
    ACTIONS(511),
    10,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATannotation,
    anon_sym_ATignore_literal_names,
    sym_final,
    anon_sym_ATdata_representation,
    ACTIONS(509),
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
    anon_sym_native,
    anon_sym_struct,
    anon_sym_enum,
    anon_sym_union,
    anon_sym_typedef,
    anon_sym_const,
    sym_identifier,
    [2174] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(37),
    1,
    sym_comment,
    ACTIONS(515),
    10,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATannotation,
    anon_sym_ATignore_literal_names,
    sym_final,
    anon_sym_ATdata_representation,
    ACTIONS(513),
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
    anon_sym_native,
    anon_sym_struct,
    anon_sym_enum,
    anon_sym_union,
    anon_sym_typedef,
    anon_sym_const,
    sym_identifier,
    [2231] = 28,
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
    ACTIONS(344),
    1,
    anon_sym_fixed,
    STATE(38),
    1,
    sym_comment,
    STATE(358),
    1,
    sym_scoped_name,
    STATE(474),
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
    ACTIONS(342),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(170),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(188),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(190),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(410),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [2333] = 28,
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
    ACTIONS(344),
    1,
    anon_sym_fixed,
    STATE(39),
    1,
    sym_comment,
    STATE(356),
    1,
    sym_const_type,
    STATE(358),
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
    ACTIONS(342),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(170),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(188),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(190),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    STATE(410),
    6,
    sym_fixed_pt_const_type,
    sym_integer_type,
    sym_floating_pt_type,
    sym_char_type,
    sym_string_type,
    sym_sequence_type,
    [2435] = 9,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(524),
    1,
    anon_sym_AThashid,
    ACTIONS(527),
    1,
    anon_sym_ATtry_construct,
    STATE(48),
    1,
    sym_struct_modifier,
    STATE(40),
    2,
    sym_comment,
    aux_sym_member_repeat1,
    STATE(49),
    2,
    sym_hashid,
    sym_try_construct,
    ACTIONS(519),
    5,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    ACTIONS(521),
    6,
    sym_optional,
    sym_key,
    sym_must_understand,
    sym_non_serialized,
    sym_id,
    sym_external,
    ACTIONS(517),
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
    [2497] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(41),
    1,
    sym_comment,
    ACTIONS(532),
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
    ACTIONS(530),
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
    [2546] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(42),
    1,
    sym_comment,
    ACTIONS(536),
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
    ACTIONS(534),
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
    [2595] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(43),
    1,
    sym_comment,
    ACTIONS(540),
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
    ACTIONS(538),
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
    [2644] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(44),
    1,
    sym_comment,
    ACTIONS(544),
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
    ACTIONS(542),
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
    [2693] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(45),
    1,
    sym_comment,
    ACTIONS(548),
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
    ACTIONS(546),
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
    [2742] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(46),
    1,
    sym_comment,
    ACTIONS(552),
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
    ACTIONS(550),
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
    [2790] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(47),
    1,
    sym_comment,
    ACTIONS(556),
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
    ACTIONS(554),
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
    [2838] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(48),
    1,
    sym_comment,
    ACTIONS(560),
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
    ACTIONS(558),
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
    [2886] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(49),
    1,
    sym_comment,
    ACTIONS(564),
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
    ACTIONS(562),
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
    [2934] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(50),
    1,
    sym_comment,
    ACTIONS(568),
    6,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    ACTIONS(566),
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
    [2977] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(51),
    1,
    sym_comment,
    ACTIONS(572),
    6,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    ACTIONS(570),
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
    [3020] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(52),
    1,
    sym_comment,
    ACTIONS(576),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(574),
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
    anon_sym_enum,
    sym_identifier,
    [3062] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(53),
    1,
    sym_comment,
    ACTIONS(580),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(578),
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
    anon_sym_enum,
    sym_identifier,
    [3104] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(54),
    1,
    sym_comment,
    ACTIONS(584),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(582),
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
    anon_sym_enum,
    sym_identifier,
    [3146] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(55),
    1,
    sym_comment,
    ACTIONS(588),
    7,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    anon_sym_RBRACE,
    anon_sym_ATignore_literal_names,
    ACTIONS(586),
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
    anon_sym_enum,
    sym_identifier,
    [3188] = 23,
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
    ACTIONS(590),
    1,
    sym_boolean_type,
    STATE(56),
    1,
    sym_comment,
    STATE(275),
    1,
    sym_scoped_name,
    STATE(470),
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
    STATE(170),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(477),
    2,
    sym_integer_type,
    sym_char_type,
    STATE(188),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(190),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    [3268] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(57),
    1,
    sym_comment,
    ACTIONS(594),
    5,
    anon_sym_longlong,
    anon_sym_unsignedshort,
    anon_sym_unsignedlonglong,
    anon_sym_longdouble,
    anon_sym_COLON_COLON,
    ACTIONS(592),
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
    [3308] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(598),
    1,
    anon_sym_LPAREN,
    ACTIONS(600),
    1,
    anon_sym_TILDE,
    ACTIONS(602),
    1,
    anon_sym_L,
    ACTIONS(604),
    1,
    anon_sym_DQUOTE,
    ACTIONS(606),
    1,
    anon_sym_SQUOTE,
    ACTIONS(610),
    1,
    sym_number_literal,
    STATE(58),
    1,
    sym_comment,
    STATE(97),
    1,
    sym_unary_expr,
    STATE(98),
    1,
    sym_literal,
    STATE(107),
    1,
    sym_scoped_name,
    STATE(110),
    1,
    sym_mult_expr,
    STATE(111),
    1,
    sym_unary_operator,
    STATE(114),
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
    STATE(133),
    1,
    sym_or_expr,
    STATE(210),
    1,
    sym_const_expr,
    STATE(353),
    1,
    sym_positive_int_const,
    ACTIONS(596),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(608),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(102),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [3388] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(598),
    1,
    anon_sym_LPAREN,
    ACTIONS(600),
    1,
    anon_sym_TILDE,
    ACTIONS(602),
    1,
    anon_sym_L,
    ACTIONS(604),
    1,
    anon_sym_DQUOTE,
    ACTIONS(606),
    1,
    anon_sym_SQUOTE,
    ACTIONS(610),
    1,
    sym_number_literal,
    STATE(59),
    1,
    sym_comment,
    STATE(97),
    1,
    sym_unary_expr,
    STATE(98),
    1,
    sym_literal,
    STATE(107),
    1,
    sym_scoped_name,
    STATE(110),
    1,
    sym_mult_expr,
    STATE(111),
    1,
    sym_unary_operator,
    STATE(114),
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
    STATE(133),
    1,
    sym_or_expr,
    STATE(210),
    1,
    sym_const_expr,
    STATE(429),
    1,
    sym_positive_int_const,
    ACTIONS(596),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(608),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(102),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [3468] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(598),
    1,
    anon_sym_LPAREN,
    ACTIONS(600),
    1,
    anon_sym_TILDE,
    ACTIONS(602),
    1,
    anon_sym_L,
    ACTIONS(604),
    1,
    anon_sym_DQUOTE,
    ACTIONS(606),
    1,
    anon_sym_SQUOTE,
    ACTIONS(610),
    1,
    sym_number_literal,
    STATE(60),
    1,
    sym_comment,
    STATE(97),
    1,
    sym_unary_expr,
    STATE(98),
    1,
    sym_literal,
    STATE(107),
    1,
    sym_scoped_name,
    STATE(110),
    1,
    sym_mult_expr,
    STATE(111),
    1,
    sym_unary_operator,
    STATE(114),
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
    STATE(133),
    1,
    sym_or_expr,
    STATE(210),
    1,
    sym_const_expr,
    STATE(431),
    1,
    sym_positive_int_const,
    ACTIONS(596),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(608),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(102),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [3548] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(598),
    1,
    anon_sym_LPAREN,
    ACTIONS(600),
    1,
    anon_sym_TILDE,
    ACTIONS(602),
    1,
    anon_sym_L,
    ACTIONS(604),
    1,
    anon_sym_DQUOTE,
    ACTIONS(606),
    1,
    anon_sym_SQUOTE,
    ACTIONS(610),
    1,
    sym_number_literal,
    STATE(61),
    1,
    sym_comment,
    STATE(97),
    1,
    sym_unary_expr,
    STATE(98),
    1,
    sym_literal,
    STATE(107),
    1,
    sym_scoped_name,
    STATE(110),
    1,
    sym_mult_expr,
    STATE(111),
    1,
    sym_unary_operator,
    STATE(114),
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
    STATE(133),
    1,
    sym_or_expr,
    STATE(210),
    1,
    sym_const_expr,
    STATE(404),
    1,
    sym_positive_int_const,
    ACTIONS(596),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(608),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(102),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [3628] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(598),
    1,
    anon_sym_LPAREN,
    ACTIONS(600),
    1,
    anon_sym_TILDE,
    ACTIONS(602),
    1,
    anon_sym_L,
    ACTIONS(604),
    1,
    anon_sym_DQUOTE,
    ACTIONS(606),
    1,
    anon_sym_SQUOTE,
    ACTIONS(610),
    1,
    sym_number_literal,
    STATE(62),
    1,
    sym_comment,
    STATE(97),
    1,
    sym_unary_expr,
    STATE(98),
    1,
    sym_literal,
    STATE(107),
    1,
    sym_scoped_name,
    STATE(110),
    1,
    sym_mult_expr,
    STATE(111),
    1,
    sym_unary_operator,
    STATE(114),
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
    STATE(133),
    1,
    sym_or_expr,
    STATE(210),
    1,
    sym_const_expr,
    STATE(309),
    1,
    sym_positive_int_const,
    ACTIONS(596),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(608),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(102),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [3708] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(598),
    1,
    anon_sym_LPAREN,
    ACTIONS(600),
    1,
    anon_sym_TILDE,
    ACTIONS(602),
    1,
    anon_sym_L,
    ACTIONS(604),
    1,
    anon_sym_DQUOTE,
    ACTIONS(606),
    1,
    anon_sym_SQUOTE,
    ACTIONS(610),
    1,
    sym_number_literal,
    STATE(63),
    1,
    sym_comment,
    STATE(97),
    1,
    sym_unary_expr,
    STATE(98),
    1,
    sym_literal,
    STATE(107),
    1,
    sym_scoped_name,
    STATE(110),
    1,
    sym_mult_expr,
    STATE(111),
    1,
    sym_unary_operator,
    STATE(114),
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
    STATE(133),
    1,
    sym_or_expr,
    STATE(210),
    1,
    sym_const_expr,
    STATE(417),
    1,
    sym_positive_int_const,
    ACTIONS(596),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(608),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(102),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [3788] = 25,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(598),
    1,
    anon_sym_LPAREN,
    ACTIONS(600),
    1,
    anon_sym_TILDE,
    ACTIONS(602),
    1,
    anon_sym_L,
    ACTIONS(604),
    1,
    anon_sym_DQUOTE,
    ACTIONS(606),
    1,
    anon_sym_SQUOTE,
    ACTIONS(610),
    1,
    sym_number_literal,
    STATE(64),
    1,
    sym_comment,
    STATE(97),
    1,
    sym_unary_expr,
    STATE(98),
    1,
    sym_literal,
    STATE(107),
    1,
    sym_scoped_name,
    STATE(110),
    1,
    sym_mult_expr,
    STATE(111),
    1,
    sym_unary_operator,
    STATE(114),
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
    STATE(133),
    1,
    sym_or_expr,
    STATE(210),
    1,
    sym_const_expr,
    STATE(411),
    1,
    sym_positive_int_const,
    ACTIONS(596),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(608),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(102),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [3868] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(598),
    1,
    anon_sym_LPAREN,
    ACTIONS(600),
    1,
    anon_sym_TILDE,
    ACTIONS(602),
    1,
    anon_sym_L,
    ACTIONS(604),
    1,
    anon_sym_DQUOTE,
    ACTIONS(606),
    1,
    anon_sym_SQUOTE,
    ACTIONS(610),
    1,
    sym_number_literal,
    STATE(65),
    1,
    sym_comment,
    STATE(97),
    1,
    sym_unary_expr,
    STATE(98),
    1,
    sym_literal,
    STATE(107),
    1,
    sym_scoped_name,
    STATE(110),
    1,
    sym_mult_expr,
    STATE(111),
    1,
    sym_unary_operator,
    STATE(114),
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
    STATE(133),
    1,
    sym_or_expr,
    STATE(469),
    1,
    sym_const_expr,
    ACTIONS(596),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(608),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(102),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [3945] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(598),
    1,
    anon_sym_LPAREN,
    ACTIONS(600),
    1,
    anon_sym_TILDE,
    ACTIONS(602),
    1,
    anon_sym_L,
    ACTIONS(604),
    1,
    anon_sym_DQUOTE,
    ACTIONS(606),
    1,
    anon_sym_SQUOTE,
    ACTIONS(610),
    1,
    sym_number_literal,
    STATE(66),
    1,
    sym_comment,
    STATE(97),
    1,
    sym_unary_expr,
    STATE(98),
    1,
    sym_literal,
    STATE(107),
    1,
    sym_scoped_name,
    STATE(110),
    1,
    sym_mult_expr,
    STATE(111),
    1,
    sym_unary_operator,
    STATE(114),
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
    STATE(133),
    1,
    sym_or_expr,
    STATE(352),
    1,
    sym_const_expr,
    ACTIONS(596),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(608),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(102),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4022] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(598),
    1,
    anon_sym_LPAREN,
    ACTIONS(600),
    1,
    anon_sym_TILDE,
    ACTIONS(602),
    1,
    anon_sym_L,
    ACTIONS(604),
    1,
    anon_sym_DQUOTE,
    ACTIONS(606),
    1,
    anon_sym_SQUOTE,
    ACTIONS(610),
    1,
    sym_number_literal,
    STATE(67),
    1,
    sym_comment,
    STATE(97),
    1,
    sym_unary_expr,
    STATE(98),
    1,
    sym_literal,
    STATE(107),
    1,
    sym_scoped_name,
    STATE(110),
    1,
    sym_mult_expr,
    STATE(111),
    1,
    sym_unary_operator,
    STATE(114),
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
    STATE(133),
    1,
    sym_or_expr,
    STATE(368),
    1,
    sym_const_expr,
    ACTIONS(596),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(608),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(102),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4099] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(598),
    1,
    anon_sym_LPAREN,
    ACTIONS(600),
    1,
    anon_sym_TILDE,
    ACTIONS(602),
    1,
    anon_sym_L,
    ACTIONS(604),
    1,
    anon_sym_DQUOTE,
    ACTIONS(606),
    1,
    anon_sym_SQUOTE,
    ACTIONS(610),
    1,
    sym_number_literal,
    STATE(68),
    1,
    sym_comment,
    STATE(97),
    1,
    sym_unary_expr,
    STATE(98),
    1,
    sym_literal,
    STATE(107),
    1,
    sym_scoped_name,
    STATE(110),
    1,
    sym_mult_expr,
    STATE(111),
    1,
    sym_unary_operator,
    STATE(114),
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
    STATE(133),
    1,
    sym_or_expr,
    STATE(414),
    1,
    sym_const_expr,
    ACTIONS(596),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(608),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(102),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4176] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(598),
    1,
    anon_sym_LPAREN,
    ACTIONS(600),
    1,
    anon_sym_TILDE,
    ACTIONS(602),
    1,
    anon_sym_L,
    ACTIONS(604),
    1,
    anon_sym_DQUOTE,
    ACTIONS(606),
    1,
    anon_sym_SQUOTE,
    ACTIONS(610),
    1,
    sym_number_literal,
    ACTIONS(612),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(614),
    1,
    sym_identifier,
    STATE(69),
    1,
    sym_comment,
    STATE(97),
    1,
    sym_unary_expr,
    STATE(98),
    1,
    sym_literal,
    STATE(112),
    1,
    sym_unary_operator,
    STATE(117),
    1,
    sym_scoped_name,
    STATE(119),
    1,
    sym_mult_expr,
    STATE(132),
    1,
    sym_add_expr,
    STATE(142),
    1,
    sym_shift_expr,
    STATE(177),
    1,
    sym_and_expr,
    STATE(201),
    1,
    sym_xor_expr,
    STATE(279),
    1,
    sym_or_expr,
    STATE(297),
    1,
    sym_const_expr,
    ACTIONS(596),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(608),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(102),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4253] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(598),
    1,
    anon_sym_LPAREN,
    ACTIONS(600),
    1,
    anon_sym_TILDE,
    ACTIONS(602),
    1,
    anon_sym_L,
    ACTIONS(604),
    1,
    anon_sym_DQUOTE,
    ACTIONS(606),
    1,
    anon_sym_SQUOTE,
    ACTIONS(610),
    1,
    sym_number_literal,
    STATE(70),
    1,
    sym_comment,
    STATE(97),
    1,
    sym_unary_expr,
    STATE(98),
    1,
    sym_literal,
    STATE(107),
    1,
    sym_scoped_name,
    STATE(110),
    1,
    sym_mult_expr,
    STATE(111),
    1,
    sym_unary_operator,
    STATE(114),
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
    STATE(133),
    1,
    sym_or_expr,
    STATE(371),
    1,
    sym_const_expr,
    ACTIONS(596),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(608),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(102),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4330] = 24,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(598),
    1,
    anon_sym_LPAREN,
    ACTIONS(600),
    1,
    anon_sym_TILDE,
    ACTIONS(602),
    1,
    anon_sym_L,
    ACTIONS(604),
    1,
    anon_sym_DQUOTE,
    ACTIONS(606),
    1,
    anon_sym_SQUOTE,
    ACTIONS(610),
    1,
    sym_number_literal,
    STATE(71),
    1,
    sym_comment,
    STATE(97),
    1,
    sym_unary_expr,
    STATE(98),
    1,
    sym_literal,
    STATE(107),
    1,
    sym_scoped_name,
    STATE(110),
    1,
    sym_mult_expr,
    STATE(111),
    1,
    sym_unary_operator,
    STATE(114),
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
    STATE(133),
    1,
    sym_or_expr,
    STATE(297),
    1,
    sym_const_expr,
    ACTIONS(596),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(608),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(102),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4407] = 18,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(51),
    1,
    anon_sym_long,
    ACTIONS(69),
    1,
    anon_sym_unsignedlong,
    ACTIONS(618),
    1,
    anon_sym_int32,
    ACTIONS(620),
    1,
    sym_unsigned_tiny_int,
    ACTIONS(624),
    1,
    sym_signed_tiny_int,
    ACTIONS(626),
    1,
    anon_sym_uint32,
    STATE(72),
    1,
    sym_comment,
    STATE(395),
    1,
    sym_integer_type,
    STATE(396),
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
    ACTIONS(616),
    2,
    anon_sym_short,
    anon_sym_int16,
    ACTIONS(622),
    2,
    sym_boolean_type,
    sym_octet_type,
    STATE(170),
    2,
    sym_unsigned_int,
    sym_signed_int,
    STATE(188),
    3,
    sym_unsigned_short_int,
    sym_unsigned_long_int,
    sym_unsigned_longlong_int,
    STATE(190),
    3,
    sym_signed_short_int,
    sym_signed_long_int,
    sym_signed_longlong_int,
    [4472] = 22,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(598),
    1,
    anon_sym_LPAREN,
    ACTIONS(600),
    1,
    anon_sym_TILDE,
    ACTIONS(602),
    1,
    anon_sym_L,
    ACTIONS(604),
    1,
    anon_sym_DQUOTE,
    ACTIONS(606),
    1,
    anon_sym_SQUOTE,
    ACTIONS(610),
    1,
    sym_number_literal,
    STATE(73),
    1,
    sym_comment,
    STATE(97),
    1,
    sym_unary_expr,
    STATE(98),
    1,
    sym_literal,
    STATE(107),
    1,
    sym_scoped_name,
    STATE(110),
    1,
    sym_mult_expr,
    STATE(111),
    1,
    sym_unary_operator,
    STATE(114),
    1,
    sym_add_expr,
    STATE(120),
    1,
    sym_shift_expr,
    STATE(125),
    1,
    sym_and_expr,
    STATE(130),
    1,
    sym_xor_expr,
    ACTIONS(596),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(608),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(102),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4543] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(630),
    1,
    sym_preproc_directive,
    ACTIONS(633),
    1,
    anon_sym_POUNDdefine,
    STATE(83),
    1,
    sym_preproc_call,
    STATE(74),
    2,
    sym_comment,
    aux_sym_specification_repeat1,
    ACTIONS(628),
    20,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_interface,
    anon_sym_local,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_ATannotation,
    anon_sym_native,
    anon_sym_module,
    anon_sym_struct,
    anon_sym_enum,
    anon_sym_ATignore_literal_names,
    anon_sym_union,
    anon_sym_typedef,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    anon_sym_const,
    sym_final,
    anon_sym_ATdata_representation,
    [4582] = 22,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(598),
    1,
    anon_sym_LPAREN,
    ACTIONS(600),
    1,
    anon_sym_TILDE,
    ACTIONS(602),
    1,
    anon_sym_L,
    ACTIONS(604),
    1,
    anon_sym_DQUOTE,
    ACTIONS(606),
    1,
    anon_sym_SQUOTE,
    ACTIONS(610),
    1,
    sym_number_literal,
    ACTIONS(612),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(614),
    1,
    sym_identifier,
    STATE(75),
    1,
    sym_comment,
    STATE(97),
    1,
    sym_unary_expr,
    STATE(98),
    1,
    sym_literal,
    STATE(112),
    1,
    sym_unary_operator,
    STATE(117),
    1,
    sym_scoped_name,
    STATE(119),
    1,
    sym_mult_expr,
    STATE(132),
    1,
    sym_add_expr,
    STATE(142),
    1,
    sym_shift_expr,
    STATE(177),
    1,
    sym_and_expr,
    STATE(206),
    1,
    sym_xor_expr,
    ACTIONS(596),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(608),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(102),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4653] = 21,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(598),
    1,
    anon_sym_LPAREN,
    ACTIONS(600),
    1,
    anon_sym_TILDE,
    ACTIONS(602),
    1,
    anon_sym_L,
    ACTIONS(604),
    1,
    anon_sym_DQUOTE,
    ACTIONS(606),
    1,
    anon_sym_SQUOTE,
    ACTIONS(610),
    1,
    sym_number_literal,
    ACTIONS(612),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(614),
    1,
    sym_identifier,
    STATE(76),
    1,
    sym_comment,
    STATE(97),
    1,
    sym_unary_expr,
    STATE(98),
    1,
    sym_literal,
    STATE(112),
    1,
    sym_unary_operator,
    STATE(117),
    1,
    sym_scoped_name,
    STATE(119),
    1,
    sym_mult_expr,
    STATE(132),
    1,
    sym_add_expr,
    STATE(142),
    1,
    sym_shift_expr,
    STATE(171),
    1,
    sym_and_expr,
    ACTIONS(596),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(608),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(102),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4721] = 21,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(598),
    1,
    anon_sym_LPAREN,
    ACTIONS(600),
    1,
    anon_sym_TILDE,
    ACTIONS(602),
    1,
    anon_sym_L,
    ACTIONS(604),
    1,
    anon_sym_DQUOTE,
    ACTIONS(606),
    1,
    anon_sym_SQUOTE,
    ACTIONS(610),
    1,
    sym_number_literal,
    STATE(77),
    1,
    sym_comment,
    STATE(97),
    1,
    sym_unary_expr,
    STATE(98),
    1,
    sym_literal,
    STATE(107),
    1,
    sym_scoped_name,
    STATE(110),
    1,
    sym_mult_expr,
    STATE(111),
    1,
    sym_unary_operator,
    STATE(114),
    1,
    sym_add_expr,
    STATE(120),
    1,
    sym_shift_expr,
    STATE(127),
    1,
    sym_and_expr,
    ACTIONS(596),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(608),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(102),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4789] = 20,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(598),
    1,
    anon_sym_LPAREN,
    ACTIONS(600),
    1,
    anon_sym_TILDE,
    ACTIONS(602),
    1,
    anon_sym_L,
    ACTIONS(604),
    1,
    anon_sym_DQUOTE,
    ACTIONS(606),
    1,
    anon_sym_SQUOTE,
    ACTIONS(610),
    1,
    sym_number_literal,
    STATE(78),
    1,
    sym_comment,
    STATE(97),
    1,
    sym_unary_expr,
    STATE(98),
    1,
    sym_literal,
    STATE(107),
    1,
    sym_scoped_name,
    STATE(110),
    1,
    sym_mult_expr,
    STATE(111),
    1,
    sym_unary_operator,
    STATE(114),
    1,
    sym_add_expr,
    STATE(122),
    1,
    sym_shift_expr,
    ACTIONS(596),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(608),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(102),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4854] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(79),
    1,
    sym_comment,
    ACTIONS(637),
    2,
    sym_preproc_directive,
    anon_sym_POUNDdefine,
    ACTIONS(635),
    20,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_interface,
    anon_sym_local,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_ATannotation,
    anon_sym_native,
    anon_sym_module,
    anon_sym_struct,
    anon_sym_enum,
    anon_sym_ATignore_literal_names,
    anon_sym_union,
    anon_sym_typedef,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    anon_sym_const,
    sym_final,
    anon_sym_ATdata_representation,
    [4887] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(80),
    1,
    sym_comment,
    ACTIONS(641),
    2,
    sym_preproc_directive,
    anon_sym_POUNDdefine,
    ACTIONS(639),
    20,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_interface,
    anon_sym_local,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_ATannotation,
    anon_sym_native,
    anon_sym_module,
    anon_sym_struct,
    anon_sym_enum,
    anon_sym_ATignore_literal_names,
    anon_sym_union,
    anon_sym_typedef,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    anon_sym_const,
    sym_final,
    anon_sym_ATdata_representation,
    [4920] = 20,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(598),
    1,
    anon_sym_LPAREN,
    ACTIONS(600),
    1,
    anon_sym_TILDE,
    ACTIONS(602),
    1,
    anon_sym_L,
    ACTIONS(604),
    1,
    anon_sym_DQUOTE,
    ACTIONS(606),
    1,
    anon_sym_SQUOTE,
    ACTIONS(610),
    1,
    sym_number_literal,
    ACTIONS(612),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(614),
    1,
    sym_identifier,
    STATE(81),
    1,
    sym_comment,
    STATE(97),
    1,
    sym_unary_expr,
    STATE(98),
    1,
    sym_literal,
    STATE(112),
    1,
    sym_unary_operator,
    STATE(117),
    1,
    sym_scoped_name,
    STATE(119),
    1,
    sym_mult_expr,
    STATE(132),
    1,
    sym_add_expr,
    STATE(136),
    1,
    sym_shift_expr,
    ACTIONS(596),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(608),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(102),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [4985] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(82),
    1,
    sym_comment,
    ACTIONS(643),
    22,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_RBRACE,
    anon_sym_interface,
    anon_sym_local,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_ATannotation,
    anon_sym_native,
    anon_sym_module,
    anon_sym_struct,
    anon_sym_enum,
    anon_sym_ATignore_literal_names,
    anon_sym_union,
    anon_sym_typedef,
    anon_sym_POUNDdefine,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    anon_sym_const,
    sym_final,
    anon_sym_ATdata_representation,
    [5016] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(83),
    1,
    sym_comment,
    ACTIONS(647),
    2,
    sym_preproc_directive,
    anon_sym_POUNDdefine,
    ACTIONS(645),
    20,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_interface,
    anon_sym_local,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_ATannotation,
    anon_sym_native,
    anon_sym_module,
    anon_sym_struct,
    anon_sym_enum,
    anon_sym_ATignore_literal_names,
    anon_sym_union,
    anon_sym_typedef,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    anon_sym_const,
    sym_final,
    anon_sym_ATdata_representation,
    [5049] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(84),
    1,
    sym_comment,
    ACTIONS(649),
    22,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_RBRACE,
    anon_sym_interface,
    anon_sym_local,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_ATannotation,
    anon_sym_native,
    anon_sym_module,
    anon_sym_struct,
    anon_sym_enum,
    anon_sym_ATignore_literal_names,
    anon_sym_union,
    anon_sym_typedef,
    anon_sym_POUNDdefine,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    anon_sym_const,
    sym_final,
    anon_sym_ATdata_representation,
    [5080] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(85),
    1,
    sym_comment,
    ACTIONS(651),
    22,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_RBRACE,
    anon_sym_interface,
    anon_sym_local,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_ATannotation,
    anon_sym_native,
    anon_sym_module,
    anon_sym_struct,
    anon_sym_enum,
    anon_sym_ATignore_literal_names,
    anon_sym_union,
    anon_sym_typedef,
    anon_sym_POUNDdefine,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    anon_sym_const,
    sym_final,
    anon_sym_ATdata_representation,
    [5111] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(86),
    1,
    sym_comment,
    ACTIONS(653),
    22,
    ts_builtin_sym_end,
    anon_sym_exception,
    anon_sym_RBRACE,
    anon_sym_interface,
    anon_sym_local,
    anon_sym_bitset,
    anon_sym_bitmask,
    anon_sym_ATannotation,
    anon_sym_native,
    anon_sym_module,
    anon_sym_struct,
    anon_sym_enum,
    anon_sym_ATignore_literal_names,
    anon_sym_union,
    anon_sym_typedef,
    anon_sym_POUNDdefine,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    anon_sym_const,
    sym_final,
    anon_sym_ATdata_representation,
    [5142] = 19,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(598),
    1,
    anon_sym_LPAREN,
    ACTIONS(600),
    1,
    anon_sym_TILDE,
    ACTIONS(602),
    1,
    anon_sym_L,
    ACTIONS(604),
    1,
    anon_sym_DQUOTE,
    ACTIONS(606),
    1,
    anon_sym_SQUOTE,
    ACTIONS(610),
    1,
    sym_number_literal,
    STATE(87),
    1,
    sym_comment,
    STATE(97),
    1,
    sym_unary_expr,
    STATE(98),
    1,
    sym_literal,
    STATE(107),
    1,
    sym_scoped_name,
    STATE(110),
    1,
    sym_mult_expr,
    STATE(111),
    1,
    sym_unary_operator,
    STATE(113),
    1,
    sym_add_expr,
    ACTIONS(596),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(608),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(102),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5204] = 19,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(598),
    1,
    anon_sym_LPAREN,
    ACTIONS(600),
    1,
    anon_sym_TILDE,
    ACTIONS(602),
    1,
    anon_sym_L,
    ACTIONS(604),
    1,
    anon_sym_DQUOTE,
    ACTIONS(606),
    1,
    anon_sym_SQUOTE,
    ACTIONS(610),
    1,
    sym_number_literal,
    ACTIONS(612),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(614),
    1,
    sym_identifier,
    STATE(88),
    1,
    sym_comment,
    STATE(97),
    1,
    sym_unary_expr,
    STATE(98),
    1,
    sym_literal,
    STATE(112),
    1,
    sym_unary_operator,
    STATE(117),
    1,
    sym_scoped_name,
    STATE(119),
    1,
    sym_mult_expr,
    STATE(131),
    1,
    sym_add_expr,
    ACTIONS(596),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(608),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(102),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5266] = 18,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(598),
    1,
    anon_sym_LPAREN,
    ACTIONS(600),
    1,
    anon_sym_TILDE,
    ACTIONS(602),
    1,
    anon_sym_L,
    ACTIONS(604),
    1,
    anon_sym_DQUOTE,
    ACTIONS(606),
    1,
    anon_sym_SQUOTE,
    ACTIONS(610),
    1,
    sym_number_literal,
    STATE(89),
    1,
    sym_comment,
    STATE(97),
    1,
    sym_unary_expr,
    STATE(98),
    1,
    sym_literal,
    STATE(107),
    1,
    sym_scoped_name,
    STATE(109),
    1,
    sym_mult_expr,
    STATE(111),
    1,
    sym_unary_operator,
    ACTIONS(596),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(608),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(102),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5325] = 18,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(598),
    1,
    anon_sym_LPAREN,
    ACTIONS(600),
    1,
    anon_sym_TILDE,
    ACTIONS(602),
    1,
    anon_sym_L,
    ACTIONS(604),
    1,
    anon_sym_DQUOTE,
    ACTIONS(606),
    1,
    anon_sym_SQUOTE,
    ACTIONS(610),
    1,
    sym_number_literal,
    ACTIONS(612),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(614),
    1,
    sym_identifier,
    STATE(90),
    1,
    sym_comment,
    STATE(97),
    1,
    sym_unary_expr,
    STATE(98),
    1,
    sym_literal,
    STATE(112),
    1,
    sym_unary_operator,
    STATE(117),
    1,
    sym_scoped_name,
    STATE(121),
    1,
    sym_mult_expr,
    ACTIONS(596),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(608),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(102),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5384] = 17,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(598),
    1,
    anon_sym_LPAREN,
    ACTIONS(600),
    1,
    anon_sym_TILDE,
    ACTIONS(602),
    1,
    anon_sym_L,
    ACTIONS(604),
    1,
    anon_sym_DQUOTE,
    ACTIONS(606),
    1,
    anon_sym_SQUOTE,
    ACTIONS(610),
    1,
    sym_number_literal,
    ACTIONS(612),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(614),
    1,
    sym_identifier,
    STATE(91),
    1,
    sym_comment,
    STATE(98),
    1,
    sym_literal,
    STATE(106),
    1,
    sym_unary_expr,
    STATE(112),
    1,
    sym_unary_operator,
    STATE(117),
    1,
    sym_scoped_name,
    ACTIONS(596),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(608),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(102),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5440] = 17,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(598),
    1,
    anon_sym_LPAREN,
    ACTIONS(600),
    1,
    anon_sym_TILDE,
    ACTIONS(602),
    1,
    anon_sym_L,
    ACTIONS(604),
    1,
    anon_sym_DQUOTE,
    ACTIONS(606),
    1,
    anon_sym_SQUOTE,
    ACTIONS(610),
    1,
    sym_number_literal,
    STATE(92),
    1,
    sym_comment,
    STATE(98),
    1,
    sym_literal,
    STATE(106),
    1,
    sym_unary_expr,
    STATE(107),
    1,
    sym_scoped_name,
    STATE(111),
    1,
    sym_unary_operator,
    ACTIONS(596),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(608),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(102),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [5496] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(93),
    1,
    sym_comment,
    ACTIONS(655),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(657),
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
    anon_sym_RBRACK,
    sym_identifier,
    [5525] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(94),
    1,
    sym_comment,
    ACTIONS(659),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(661),
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
    anon_sym_RBRACK,
    sym_identifier,
    [5554] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(667),
    1,
    sym_identifier,
    STATE(95),
    1,
    sym_comment,
    ACTIONS(663),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(665),
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
    [5584] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(96),
    1,
    sym_comment,
    ACTIONS(669),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(671),
    15,
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
    anon_sym_typedef,
    [5612] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(97),
    1,
    sym_comment,
    ACTIONS(673),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(675),
    15,
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
    anon_sym_typedef,
    [5640] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(98),
    1,
    sym_comment,
    ACTIONS(677),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(679),
    15,
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
    anon_sym_typedef,
    [5668] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(99),
    1,
    sym_comment,
    ACTIONS(681),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(683),
    15,
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
    anon_sym_typedef,
    [5696] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(100),
    1,
    sym_comment,
    ACTIONS(685),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(687),
    15,
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
    anon_sym_typedef,
    [5724] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(101),
    1,
    sym_comment,
    ACTIONS(663),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(665),
    15,
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
    anon_sym_typedef,
    [5752] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(102),
    1,
    sym_comment,
    ACTIONS(689),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(691),
    15,
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
    anon_sym_typedef,
    [5780] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(103),
    1,
    sym_comment,
    ACTIONS(693),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(695),
    15,
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
    anon_sym_typedef,
    [5808] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(104),
    1,
    sym_comment,
    ACTIONS(697),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(699),
    15,
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
    anon_sym_typedef,
    [5836] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(105),
    1,
    sym_comment,
    ACTIONS(701),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(703),
    15,
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
    anon_sym_typedef,
    [5864] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(106),
    1,
    sym_comment,
    ACTIONS(705),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(707),
    15,
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
    anon_sym_typedef,
    [5892] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(667),
    1,
    sym_identifier,
    STATE(107),
    1,
    sym_comment,
    ACTIONS(677),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(679),
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
    [5922] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(108),
    1,
    sym_comment,
    ACTIONS(709),
    2,
    anon_sym_GT,
    anon_sym_SLASH,
    ACTIONS(711),
    15,
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
    anon_sym_typedef,
    [5950] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(713),
    1,
    anon_sym_GT,
    ACTIONS(719),
    1,
    anon_sym_SLASH,
    STATE(109),
    1,
    sym_comment,
    ACTIONS(717),
    2,
    anon_sym_STAR,
    anon_sym_PERCENT,
    ACTIONS(715),
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
    [5981] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(719),
    1,
    anon_sym_SLASH,
    ACTIONS(721),
    1,
    anon_sym_GT,
    STATE(110),
    1,
    sym_comment,
    ACTIONS(717),
    2,
    anon_sym_STAR,
    anon_sym_PERCENT,
    ACTIONS(723),
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
    [6012] = 13,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(117),
    1,
    sym_identifier,
    ACTIONS(602),
    1,
    anon_sym_L,
    ACTIONS(604),
    1,
    anon_sym_DQUOTE,
    ACTIONS(606),
    1,
    anon_sym_SQUOTE,
    ACTIONS(610),
    1,
    sym_number_literal,
    ACTIONS(725),
    1,
    anon_sym_LPAREN,
    STATE(95),
    1,
    sym_scoped_name,
    STATE(101),
    1,
    sym_literal,
    STATE(111),
    1,
    sym_comment,
    ACTIONS(608),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(102),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6055] = 13,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(602),
    1,
    anon_sym_L,
    ACTIONS(604),
    1,
    anon_sym_DQUOTE,
    ACTIONS(606),
    1,
    anon_sym_SQUOTE,
    ACTIONS(610),
    1,
    sym_number_literal,
    ACTIONS(612),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(614),
    1,
    sym_identifier,
    ACTIONS(725),
    1,
    anon_sym_LPAREN,
    STATE(101),
    1,
    sym_literal,
    STATE(112),
    1,
    sym_comment,
    STATE(115),
    1,
    sym_scoped_name,
    ACTIONS(608),
    2,
    anon_sym_TRUE,
    anon_sym_FALSE,
    STATE(102),
    3,
    sym_string_literal,
    sym_char_literal,
    sym_boolean_literal,
    [6098] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(727),
    1,
    anon_sym_GT,
    STATE(113),
    1,
    sym_comment,
    ACTIONS(731),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(729),
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
    [6124] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(733),
    1,
    anon_sym_GT,
    STATE(114),
    1,
    sym_comment,
    ACTIONS(731),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(735),
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
    [6150] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(737),
    1,
    sym_identifier,
    STATE(115),
    1,
    sym_comment,
    ACTIONS(663),
    2,
    anon_sym_SLASH,
    anon_sym_typedef,
    ACTIONS(665),
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
    [6175] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(116),
    1,
    sym_comment,
    ACTIONS(655),
    3,
    anon_sym_SLASH,
    anon_sym_typedef,
    sym_identifier,
    ACTIONS(657),
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
    [6198] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(737),
    1,
    sym_identifier,
    STATE(117),
    1,
    sym_comment,
    ACTIONS(677),
    2,
    anon_sym_SLASH,
    anon_sym_typedef,
    ACTIONS(679),
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
    [6223] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(118),
    1,
    sym_comment,
    ACTIONS(659),
    3,
    anon_sym_SLASH,
    anon_sym_typedef,
    sym_identifier,
    ACTIONS(661),
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
    [6246] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(741),
    1,
    anon_sym_SLASH,
    STATE(119),
    1,
    sym_comment,
    ACTIONS(739),
    2,
    anon_sym_STAR,
    anon_sym_PERCENT,
    ACTIONS(723),
    8,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_typedef,
    [6270] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(743),
    1,
    anon_sym_GT,
    STATE(120),
    1,
    sym_comment,
    ACTIONS(747),
    2,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    ACTIONS(745),
    8,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [6294] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(741),
    1,
    anon_sym_SLASH,
    STATE(121),
    1,
    sym_comment,
    ACTIONS(739),
    2,
    anon_sym_STAR,
    anon_sym_PERCENT,
    ACTIONS(715),
    8,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_typedef,
    [6318] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(749),
    1,
    anon_sym_GT,
    STATE(122),
    1,
    sym_comment,
    ACTIONS(747),
    2,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    ACTIONS(751),
    8,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [6342] = 11,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(37),
    1,
    sym_dds_service,
    ACTIONS(39),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(41),
    1,
    anon_sym_ATDDSReplyTopic,
    ACTIONS(753),
    1,
    anon_sym_interface,
    ACTIONS(755),
    1,
    anon_sym_local,
    STATE(123),
    1,
    sym_comment,
    STATE(126),
    1,
    aux_sym_interface_def_repeat1,
    STATE(152),
    1,
    sym_interface_anno,
    STATE(413),
    1,
    sym_interface_header,
    STATE(164),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    [6377] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(124),
    1,
    sym_comment,
    ACTIONS(757),
    4,
    anon_sym_COLON_COLON,
    anon_sym_LPAREN,
    anon_sym_DQUOTE,
    anon_sym_SQUOTE,
    ACTIONS(759),
    5,
    anon_sym_L,
    anon_sym_TRUE,
    anon_sym_FALSE,
    sym_number_literal,
    sym_identifier,
    [6397] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(763),
    1,
    anon_sym_DOLLAR,
    STATE(125),
    1,
    sym_comment,
    ACTIONS(761),
    8,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [6417] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(767),
    1,
    sym_dds_service,
    ACTIONS(770),
    1,
    anon_sym_ATDDSRequestTopic,
    ACTIONS(773),
    1,
    anon_sym_ATDDSReplyTopic,
    STATE(152),
    1,
    sym_interface_anno,
    ACTIONS(765),
    2,
    anon_sym_interface,
    anon_sym_local,
    STATE(126),
    2,
    sym_comment,
    aux_sym_interface_def_repeat1,
    STATE(164),
    2,
    sym_dds_request_topic,
    sym_dds_reply_topic,
    [6445] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(763),
    1,
    anon_sym_DOLLAR,
    STATE(127),
    1,
    sym_comment,
    ACTIONS(776),
    8,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [6465] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(780),
    1,
    anon_sym_CARET,
    STATE(128),
    1,
    sym_comment,
    ACTIONS(778),
    7,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [6484] = 10,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(782),
    1,
    anon_sym_COMMA,
    ACTIONS(784),
    1,
    anon_sym_SEMI,
    ACTIONS(786),
    1,
    anon_sym_getraises,
    ACTIONS(788),
    1,
    anon_sym_setraises,
    STATE(129),
    1,
    sym_comment,
    STATE(248),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    STATE(249),
    1,
    sym_get_excep_expr,
    STATE(359),
    1,
    sym_attr_raises_expr,
    STATE(360),
    1,
    sym_set_excep_expr,
    [6515] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(780),
    1,
    anon_sym_CARET,
    STATE(130),
    1,
    sym_comment,
    ACTIONS(790),
    7,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_PIPE,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [6534] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(131),
    1,
    sym_comment,
    ACTIONS(792),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(729),
    6,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_typedef,
    [6553] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(132),
    1,
    sym_comment,
    ACTIONS(792),
    2,
    anon_sym_PLUS,
    anon_sym_DASH,
    ACTIONS(735),
    6,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    anon_sym_typedef,
    [6572] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(796),
    1,
    anon_sym_PIPE,
    STATE(133),
    1,
    sym_comment,
    ACTIONS(794),
    6,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    anon_sym_COLON,
    anon_sym_SEMI,
    anon_sym_RBRACK,
    [6590] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(134),
    1,
    sym_comment,
    ACTIONS(798),
    7,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    anon_sym_SEMI,
    anon_sym_raises,
    anon_sym_getraises,
    anon_sym_setraises,
    anon_sym_default,
    [6606] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(800),
    1,
    anon_sym_RPAREN,
    ACTIONS(802),
    1,
    anon_sym_in,
    STATE(30),
    1,
    sym_param_attribute,
    STATE(135),
    1,
    sym_comment,
    STATE(246),
    1,
    sym_param_dcl,
    STATE(362),
    1,
    sym_parameter_dcls,
    ACTIONS(804),
    2,
    anon_sym_out,
    anon_sym_inout,
    [6632] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(136),
    1,
    sym_comment,
    ACTIONS(806),
    2,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    ACTIONS(751),
    4,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_typedef,
    [6649] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(810),
    1,
    anon_sym_LBRACK,
    STATE(178),
    1,
    sym_fixed_array_size,
    STATE(137),
    2,
    sym_comment,
    aux_sym_array_declarator_repeat1,
    ACTIONS(808),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [6668] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(813),
    1,
    anon_sym_RBRACE,
    ACTIONS(815),
    1,
    anon_sym_default,
    ACTIONS(818),
    1,
    anon_sym_case,
    STATE(21),
    1,
    sym_case_label,
    STATE(224),
    1,
    sym_case,
    STATE(138),
    2,
    sym_comment,
    aux_sym_union_def_repeat1,
    [6691] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(821),
    1,
    anon_sym_RBRACE,
    ACTIONS(823),
    1,
    anon_sym_default,
    ACTIONS(825),
    1,
    anon_sym_case,
    STATE(21),
    1,
    sym_case_label,
    STATE(138),
    1,
    aux_sym_union_def_repeat1,
    STATE(139),
    1,
    sym_comment,
    STATE(224),
    1,
    sym_case,
    [6716] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(827),
    1,
    anon_sym_RBRACE,
    ACTIONS(829),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(831),
    1,
    sym_identifier,
    STATE(140),
    1,
    sym_comment,
    STATE(179),
    1,
    aux_sym_enumerator_repeat1,
    STATE(205),
    1,
    sym_enumerator,
    STATE(283),
    1,
    sym_enum_modifier,
    [6741] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(829),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(831),
    1,
    sym_identifier,
    ACTIONS(833),
    1,
    anon_sym_RBRACE,
    STATE(141),
    1,
    sym_comment,
    STATE(179),
    1,
    aux_sym_enumerator_repeat1,
    STATE(202),
    1,
    sym_enumerator,
    STATE(283),
    1,
    sym_enum_modifier,
    [6766] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(142),
    1,
    sym_comment,
    ACTIONS(806),
    2,
    anon_sym_GT_GT,
    anon_sym_LT_LT,
    ACTIONS(745),
    4,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_DOLLAR,
    anon_sym_typedef,
    [6783] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(829),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(831),
    1,
    sym_identifier,
    ACTIONS(835),
    1,
    anon_sym_RBRACE,
    STATE(143),
    1,
    sym_comment,
    STATE(179),
    1,
    aux_sym_enumerator_repeat1,
    STATE(263),
    1,
    sym_enumerator,
    STATE(283),
    1,
    sym_enum_modifier,
    [6808] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(823),
    1,
    anon_sym_default,
    ACTIONS(825),
    1,
    anon_sym_case,
    ACTIONS(837),
    1,
    anon_sym_RBRACE,
    STATE(21),
    1,
    sym_case_label,
    STATE(139),
    1,
    aux_sym_union_def_repeat1,
    STATE(144),
    1,
    sym_comment,
    STATE(224),
    1,
    sym_case,
    [6833] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(839),
    1,
    anon_sym_LBRACK,
    STATE(145),
    1,
    sym_comment,
    STATE(147),
    1,
    aux_sym_array_declarator_repeat1,
    STATE(178),
    1,
    sym_fixed_array_size,
    ACTIONS(798),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [6854] = 8,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(829),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(831),
    1,
    sym_identifier,
    ACTIONS(841),
    1,
    anon_sym_RBRACE,
    STATE(146),
    1,
    sym_comment,
    STATE(179),
    1,
    aux_sym_enumerator_repeat1,
    STATE(199),
    1,
    sym_enumerator,
    STATE(283),
    1,
    sym_enum_modifier,
    [6879] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(839),
    1,
    anon_sym_LBRACK,
    STATE(137),
    1,
    aux_sym_array_declarator_repeat1,
    STATE(147),
    1,
    sym_comment,
    STATE(178),
    1,
    sym_fixed_array_size,
    ACTIONS(843),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [6900] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(148),
    1,
    sym_comment,
    ACTIONS(845),
    5,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    [6914] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(149),
    1,
    sym_comment,
    ACTIONS(847),
    5,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    [6928] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(829),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(831),
    1,
    sym_identifier,
    STATE(150),
    1,
    sym_comment,
    STATE(179),
    1,
    aux_sym_enumerator_repeat1,
    STATE(283),
    1,
    sym_enum_modifier,
    STATE(319),
    1,
    sym_enumerator,
    [6950] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(849),
    1,
    anon_sym_RBRACE,
    ACTIONS(851),
    1,
    anon_sym_bitfield,
    STATE(151),
    1,
    sym_comment,
    STATE(155),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(242),
    1,
    sym_bitfield_spec,
    STATE(324),
    1,
    sym_bitfield,
    [6972] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(152),
    1,
    sym_comment,
    ACTIONS(853),
    5,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    [6986] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(851),
    1,
    anon_sym_bitfield,
    ACTIONS(855),
    1,
    anon_sym_RBRACE,
    STATE(153),
    1,
    sym_comment,
    STATE(162),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(242),
    1,
    sym_bitfield_spec,
    STATE(324),
    1,
    sym_bitfield,
    [7008] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(857),
    1,
    anon_sym_RBRACE,
    ACTIONS(859),
    1,
    anon_sym_bitfield,
    STATE(242),
    1,
    sym_bitfield_spec,
    STATE(324),
    1,
    sym_bitfield,
    STATE(154),
    2,
    sym_comment,
    aux_sym_bitset_dcl_repeat1,
    [7028] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(851),
    1,
    anon_sym_bitfield,
    ACTIONS(862),
    1,
    anon_sym_RBRACE,
    STATE(154),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(155),
    1,
    sym_comment,
    STATE(242),
    1,
    sym_bitfield_spec,
    STATE(324),
    1,
    sym_bitfield,
    [7050] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(782),
    1,
    anon_sym_COMMA,
    ACTIONS(864),
    1,
    anon_sym_SEMI,
    ACTIONS(866),
    1,
    anon_sym_raises,
    STATE(156),
    1,
    sym_comment,
    STATE(235),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    STATE(378),
    1,
    sym_raises_expr,
    [7072] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(868),
    1,
    sym_identifier,
    STATE(157),
    1,
    sym_comment,
    STATE(172),
    1,
    sym_declarator,
    STATE(228),
    1,
    sym_declarators,
    STATE(226),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [7092] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(802),
    1,
    anon_sym_in,
    STATE(30),
    1,
    sym_param_attribute,
    STATE(158),
    1,
    sym_comment,
    STATE(271),
    1,
    sym_param_dcl,
    ACTIONS(804),
    2,
    anon_sym_out,
    anon_sym_inout,
    [7112] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(870),
    1,
    anon_sym_struct,
    ACTIONS(872),
    1,
    sym_final,
    ACTIONS(875),
    1,
    anon_sym_ATdata_representation,
    STATE(207),
    1,
    sym_data_representation,
    STATE(159),
    2,
    sym_comment,
    aux_sym_struct_def_repeat1,
    [7132] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(868),
    1,
    sym_identifier,
    STATE(160),
    1,
    sym_comment,
    STATE(172),
    1,
    sym_declarator,
    STATE(265),
    1,
    sym_declarators,
    STATE(226),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [7152] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(868),
    1,
    sym_identifier,
    STATE(161),
    1,
    sym_comment,
    STATE(197),
    1,
    sym_any_declarator,
    STATE(344),
    1,
    sym_any_declarators,
    STATE(322),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [7172] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(851),
    1,
    anon_sym_bitfield,
    ACTIONS(878),
    1,
    anon_sym_RBRACE,
    STATE(154),
    1,
    aux_sym_bitset_dcl_repeat1,
    STATE(162),
    1,
    sym_comment,
    STATE(242),
    1,
    sym_bitfield_spec,
    STATE(324),
    1,
    sym_bitfield,
    [7194] = 7,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(45),
    1,
    sym_final,
    ACTIONS(47),
    1,
    anon_sym_ATdata_representation,
    ACTIONS(880),
    1,
    anon_sym_struct,
    STATE(159),
    1,
    aux_sym_struct_def_repeat1,
    STATE(163),
    1,
    sym_comment,
    STATE(207),
    1,
    sym_data_representation,
    [7216] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(164),
    1,
    sym_comment,
    ACTIONS(882),
    5,
    anon_sym_interface,
    anon_sym_local,
    sym_dds_service,
    anon_sym_ATDDSRequestTopic,
    anon_sym_ATDDSReplyTopic,
    [7230] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(884),
    1,
    anon_sym_LBRACE,
    ACTIONS(886),
    1,
    anon_sym_COLON,
    ACTIONS(888),
    1,
    anon_sym_SEMI,
    STATE(165),
    1,
    sym_comment,
    STATE(350),
    1,
    sym_interface_inheritance_spec,
    [7249] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(868),
    1,
    sym_identifier,
    STATE(166),
    1,
    sym_comment,
    STATE(243),
    1,
    sym_declarator,
    STATE(226),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [7266] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(890),
    1,
    anon_sym_COMMA,
    STATE(167),
    1,
    sym_comment,
    STATE(174),
    1,
    aux_sym_declarators_repeat1,
    ACTIONS(892),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    [7283] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(894),
    1,
    anon_sym_LT,
    STATE(168),
    1,
    sym_comment,
    ACTIONS(896),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [7298] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(169),
    1,
    sym_comment,
    ACTIONS(898),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [7311] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(170),
    1,
    sym_comment,
    ACTIONS(900),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [7324] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(902),
    1,
    anon_sym_DOLLAR,
    STATE(171),
    1,
    sym_comment,
    ACTIONS(776),
    3,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_typedef,
    [7339] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(890),
    1,
    anon_sym_COMMA,
    STATE(167),
    1,
    aux_sym_declarators_repeat1,
    STATE(172),
    1,
    sym_comment,
    ACTIONS(904),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    [7356] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(906),
    1,
    anon_sym_LBRACE,
    ACTIONS(908),
    1,
    anon_sym_COLON,
    STATE(173),
    1,
    sym_comment,
    ACTIONS(910),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [7373] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(912),
    1,
    anon_sym_COMMA,
    ACTIONS(915),
    2,
    anon_sym_SEMI,
    anon_sym_default,
    STATE(174),
    2,
    sym_comment,
    aux_sym_declarators_repeat1,
    [7388] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(917),
    1,
    anon_sym_RPAREN,
    ACTIONS(919),
    1,
    anon_sym_XCDR,
    ACTIONS(922),
    1,
    anon_sym_XCDR2,
    STATE(175),
    2,
    sym_comment,
    aux_sym_data_representation_repeat1,
    [7405] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(925),
    1,
    sym_identifier,
    STATE(176),
    1,
    sym_comment,
    STATE(268),
    1,
    sym_scoped_name,
    STATE(308),
    1,
    sym_interface_name,
    [7424] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(902),
    1,
    anon_sym_DOLLAR,
    STATE(177),
    1,
    sym_comment,
    ACTIONS(761),
    3,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_typedef,
    [7439] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(178),
    1,
    sym_comment,
    ACTIONS(927),
    4,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_LBRACK,
    [7452] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(829),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(929),
    1,
    sym_identifier,
    STATE(179),
    1,
    sym_comment,
    STATE(185),
    1,
    aux_sym_enumerator_repeat1,
    STATE(283),
    1,
    sym_enum_modifier,
    [7471] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(931),
    1,
    anon_sym_RPAREN,
    ACTIONS(933),
    1,
    anon_sym_XCDR,
    ACTIONS(935),
    1,
    anon_sym_XCDR2,
    STATE(175),
    1,
    aux_sym_data_representation_repeat1,
    STATE(180),
    1,
    sym_comment,
    [7490] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(181),
    1,
    sym_comment,
    ACTIONS(937),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [7503] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(667),
    1,
    sym_identifier,
    ACTIONS(939),
    1,
    anon_sym_COMMA,
    ACTIONS(941),
    1,
    anon_sym_RPAREN,
    STATE(182),
    1,
    sym_comment,
    STATE(215),
    1,
    aux_sym_raises_expr_repeat1,
    [7522] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(868),
    1,
    sym_identifier,
    STATE(183),
    1,
    sym_comment,
    STATE(425),
    1,
    sym_declarator,
    STATE(226),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [7539] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(868),
    1,
    sym_identifier,
    STATE(184),
    1,
    sym_comment,
    STATE(294),
    1,
    sym_any_declarator,
    STATE(322),
    2,
    sym_simple_declarator,
    sym_array_declarator,
    [7556] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(943),
    1,
    anon_sym_ATdefault_literal,
    ACTIONS(946),
    1,
    sym_identifier,
    STATE(283),
    1,
    sym_enum_modifier,
    STATE(185),
    2,
    sym_comment,
    aux_sym_enumerator_repeat1,
    [7573] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(186),
    1,
    sym_comment,
    ACTIONS(948),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [7586] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(187),
    1,
    sym_comment,
    ACTIONS(950),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [7599] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(188),
    1,
    sym_comment,
    ACTIONS(952),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [7612] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(189),
    1,
    sym_comment,
    ACTIONS(954),
    4,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    anon_sym_LBRACK,
    [7625] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(190),
    1,
    sym_comment,
    ACTIONS(956),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [7638] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(191),
    1,
    sym_comment,
    ACTIONS(958),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [7651] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(192),
    1,
    sym_comment,
    ACTIONS(960),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [7664] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(667),
    1,
    sym_identifier,
    ACTIONS(939),
    1,
    anon_sym_COMMA,
    ACTIONS(962),
    1,
    anon_sym_RPAREN,
    STATE(193),
    1,
    sym_comment,
    STATE(212),
    1,
    aux_sym_raises_expr_repeat1,
    [7683] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(194),
    1,
    sym_comment,
    ACTIONS(964),
    4,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    sym_identifier,
    [7696] = 6,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(925),
    1,
    sym_identifier,
    STATE(195),
    1,
    sym_comment,
    STATE(267),
    1,
    sym_interface_name,
    STATE(268),
    1,
    sym_scoped_name,
    [7715] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(966),
    1,
    anon_sym_SEMI,
    ACTIONS(968),
    1,
    sym_identifier,
    STATE(196),
    1,
    sym_comment,
    STATE(259),
    1,
    aux_sym_bitfield_repeat1,
    [7731] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(970),
    1,
    anon_sym_COMMA,
    ACTIONS(972),
    1,
    anon_sym_SEMI,
    STATE(197),
    1,
    sym_comment,
    STATE(216),
    1,
    aux_sym_any_declarators_repeat1,
    [7747] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(974),
    1,
    anon_sym_COMMA,
    ACTIONS(976),
    1,
    anon_sym_RBRACE,
    STATE(198),
    1,
    sym_comment,
    STATE(266),
    1,
    aux_sym_enum_dcl_repeat1,
    [7763] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(974),
    1,
    anon_sym_COMMA,
    ACTIONS(978),
    1,
    anon_sym_RBRACE,
    STATE(198),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(199),
    1,
    sym_comment,
    [7779] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(974),
    1,
    anon_sym_COMMA,
    ACTIONS(978),
    1,
    anon_sym_RBRACE,
    STATE(200),
    1,
    sym_comment,
    STATE(266),
    1,
    aux_sym_enum_dcl_repeat1,
    [7795] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(980),
    1,
    anon_sym_CARET,
    STATE(201),
    1,
    sym_comment,
    ACTIONS(778),
    2,
    anon_sym_PIPE,
    anon_sym_typedef,
    [7809] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(841),
    1,
    anon_sym_RBRACE,
    ACTIONS(974),
    1,
    anon_sym_COMMA,
    STATE(200),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(202),
    1,
    sym_comment,
    [7825] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(203),
    1,
    sym_comment,
    ACTIONS(661),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [7837] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(204),
    1,
    sym_comment,
    ACTIONS(657),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [7849] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(835),
    1,
    anon_sym_RBRACE,
    ACTIONS(974),
    1,
    anon_sym_COMMA,
    STATE(205),
    1,
    sym_comment,
    STATE(255),
    1,
    aux_sym_enum_dcl_repeat1,
    [7865] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(980),
    1,
    anon_sym_CARET,
    STATE(206),
    1,
    sym_comment,
    ACTIONS(790),
    2,
    anon_sym_PIPE,
    anon_sym_typedef,
    [7879] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(207),
    1,
    sym_comment,
    ACTIONS(982),
    3,
    anon_sym_struct,
    sym_final,
    anon_sym_ATdata_representation,
    [7891] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(986),
    1,
    sym_identifier,
    STATE(208),
    1,
    sym_comment,
    ACTIONS(984),
    2,
    anon_sym_GT,
    anon_sym_COMMA,
    [7905] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(988),
    1,
    anon_sym_COMMA,
    ACTIONS(991),
    1,
    anon_sym_RPAREN,
    STATE(209),
    2,
    sym_comment,
    aux_sym_raises_expr_repeat1,
    [7919] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(210),
    1,
    sym_comment,
    ACTIONS(993),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    anon_sym_RBRACK,
    [7931] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(667),
    1,
    sym_identifier,
    STATE(211),
    1,
    sym_comment,
    ACTIONS(991),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [7945] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(939),
    1,
    anon_sym_COMMA,
    ACTIONS(995),
    1,
    anon_sym_RPAREN,
    STATE(209),
    1,
    aux_sym_raises_expr_repeat1,
    STATE(212),
    1,
    sym_comment,
    [7961] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(213),
    1,
    sym_comment,
    ACTIONS(997),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [7973] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(214),
    1,
    sym_comment,
    ACTIONS(999),
    3,
    anon_sym_RBRACE,
    anon_sym_default,
    anon_sym_case,
    [7985] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(939),
    1,
    anon_sym_COMMA,
    ACTIONS(1001),
    1,
    anon_sym_RPAREN,
    STATE(209),
    1,
    aux_sym_raises_expr_repeat1,
    STATE(215),
    1,
    sym_comment,
    [8001] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(970),
    1,
    anon_sym_COMMA,
    ACTIONS(1003),
    1,
    anon_sym_SEMI,
    STATE(216),
    1,
    sym_comment,
    STATE(269),
    1,
    aux_sym_any_declarators_repeat1,
    [8017] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(925),
    1,
    sym_identifier,
    STATE(211),
    1,
    sym_scoped_name,
    STATE(217),
    1,
    sym_comment,
    [8033] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(218),
    1,
    sym_comment,
    ACTIONS(1005),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [8045] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(219),
    1,
    sym_comment,
    ACTIONS(1007),
    3,
    anon_sym_struct,
    sym_final,
    anon_sym_ATdata_representation,
    [8057] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1009),
    1,
    sym_identifier,
    STATE(129),
    1,
    sym_simple_declarator,
    STATE(220),
    1,
    sym_comment,
    STATE(398),
    1,
    sym_attr_declarator,
    [8073] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1011),
    1,
    anon_sym_COMMA,
    ACTIONS(1014),
    1,
    anon_sym_RPAREN,
    STATE(221),
    2,
    sym_comment,
    aux_sym_parameter_dcls_repeat1,
    [8087] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(925),
    1,
    sym_identifier,
    STATE(193),
    1,
    sym_scoped_name,
    STATE(222),
    1,
    sym_comment,
    [8103] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(925),
    1,
    sym_identifier,
    STATE(223),
    1,
    sym_comment,
    STATE(302),
    1,
    sym_scoped_name,
    [8119] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(224),
    1,
    sym_comment,
    ACTIONS(1016),
    3,
    anon_sym_RBRACE,
    anon_sym_default,
    anon_sym_case,
    [8131] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1018),
    1,
    anon_sym_SEMI,
    ACTIONS(1020),
    1,
    anon_sym_switch,
    ACTIONS(1022),
    1,
    sym_identifier,
    STATE(225),
    1,
    sym_comment,
    [8147] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(226),
    1,
    sym_comment,
    ACTIONS(1024),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [8159] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1026),
    1,
    anon_sym_COMMA,
    ACTIONS(1028),
    1,
    anon_sym_RPAREN,
    STATE(221),
    1,
    aux_sym_parameter_dcls_repeat1,
    STATE(227),
    1,
    sym_comment,
    [8175] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1030),
    1,
    anon_sym_SEMI,
    ACTIONS(1032),
    1,
    anon_sym_default,
    STATE(228),
    1,
    sym_comment,
    STATE(376),
    1,
    sym_default,
    [8191] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(229),
    1,
    sym_comment,
    ACTIONS(1034),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [8203] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(866),
    1,
    anon_sym_raises,
    ACTIONS(1036),
    1,
    anon_sym_SEMI,
    STATE(230),
    1,
    sym_comment,
    STATE(407),
    1,
    sym_raises_expr,
    [8219] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1038),
    1,
    anon_sym_COMMA,
    ACTIONS(1041),
    1,
    anon_sym_SEMI,
    STATE(231),
    2,
    sym_comment,
    aux_sym_readonly_attr_declarator_repeat1,
    [8233] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(925),
    1,
    sym_identifier,
    STATE(182),
    1,
    sym_scoped_name,
    STATE(232),
    1,
    sym_comment,
    [8249] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1043),
    1,
    anon_sym_COMMA,
    ACTIONS(1045),
    1,
    anon_sym_RBRACE,
    STATE(233),
    1,
    sym_comment,
    STATE(245),
    1,
    aux_sym_bitmask_dcl_repeat1,
    [8265] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1047),
    1,
    anon_sym_COMMA,
    ACTIONS(1049),
    1,
    anon_sym_LBRACE,
    STATE(234),
    1,
    sym_comment,
    STATE(270),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    [8281] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(782),
    1,
    anon_sym_COMMA,
    ACTIONS(1051),
    1,
    anon_sym_SEMI,
    STATE(231),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    STATE(235),
    1,
    sym_comment,
    [8297] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(236),
    1,
    sym_comment,
    ACTIONS(1053),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [8309] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(237),
    1,
    sym_comment,
    ACTIONS(1055),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [8321] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(238),
    1,
    sym_comment,
    ACTIONS(1057),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [8333] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(239),
    1,
    sym_comment,
    ACTIONS(1059),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [8345] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(240),
    1,
    sym_comment,
    ACTIONS(1061),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [8357] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(241),
    1,
    sym_comment,
    ACTIONS(984),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [8369] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(968),
    1,
    sym_identifier,
    ACTIONS(1063),
    1,
    anon_sym_SEMI,
    STATE(196),
    1,
    aux_sym_bitfield_repeat1,
    STATE(242),
    1,
    sym_comment,
    [8385] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(243),
    1,
    sym_comment,
    ACTIONS(915),
    3,
    anon_sym_COMMA,
    anon_sym_SEMI,
    anon_sym_default,
    [8397] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(974),
    1,
    anon_sym_COMMA,
    ACTIONS(1065),
    1,
    anon_sym_RBRACE,
    STATE(244),
    1,
    sym_comment,
    STATE(266),
    1,
    aux_sym_enum_dcl_repeat1,
    [8413] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1043),
    1,
    anon_sym_COMMA,
    ACTIONS(1067),
    1,
    anon_sym_RBRACE,
    STATE(245),
    1,
    sym_comment,
    STATE(264),
    1,
    aux_sym_bitmask_dcl_repeat1,
    [8429] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1026),
    1,
    anon_sym_COMMA,
    ACTIONS(1069),
    1,
    anon_sym_RPAREN,
    STATE(227),
    1,
    aux_sym_parameter_dcls_repeat1,
    STATE(246),
    1,
    sym_comment,
    [8445] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(866),
    1,
    anon_sym_raises,
    ACTIONS(1071),
    1,
    anon_sym_SEMI,
    STATE(247),
    1,
    sym_comment,
    STATE(386),
    1,
    sym_raises_expr,
    [8461] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(782),
    1,
    anon_sym_COMMA,
    ACTIONS(1073),
    1,
    anon_sym_SEMI,
    STATE(231),
    1,
    aux_sym_readonly_attr_declarator_repeat1,
    STATE(248),
    1,
    sym_comment,
    [8477] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(788),
    1,
    anon_sym_setraises,
    ACTIONS(1075),
    1,
    anon_sym_SEMI,
    STATE(249),
    1,
    sym_comment,
    STATE(384),
    1,
    sym_set_excep_expr,
    [8493] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(933),
    1,
    anon_sym_XCDR,
    ACTIONS(935),
    1,
    anon_sym_XCDR2,
    STATE(180),
    1,
    aux_sym_data_representation_repeat1,
    STATE(250),
    1,
    sym_comment,
    [8509] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(251),
    1,
    sym_comment,
    ACTIONS(1077),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [8521] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(884),
    1,
    anon_sym_LBRACE,
    ACTIONS(886),
    1,
    anon_sym_COLON,
    STATE(252),
    1,
    sym_comment,
    STATE(350),
    1,
    sym_interface_inheritance_spec,
    [8537] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(925),
    1,
    sym_identifier,
    STATE(253),
    1,
    sym_comment,
    STATE(329),
    1,
    sym_scoped_name,
    [8553] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1079),
    1,
    anon_sym_RBRACE,
    ACTIONS(1081),
    1,
    sym_identifier,
    STATE(233),
    1,
    sym_bit_value,
    STATE(254),
    1,
    sym_comment,
    [8569] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(974),
    1,
    anon_sym_COMMA,
    ACTIONS(1083),
    1,
    anon_sym_RBRACE,
    STATE(255),
    1,
    sym_comment,
    STATE(266),
    1,
    aux_sym_enum_dcl_repeat1,
    [8585] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(81),
    1,
    anon_sym_COLON_COLON,
    ACTIONS(925),
    1,
    sym_identifier,
    STATE(256),
    1,
    sym_comment,
    STATE(276),
    1,
    sym_scoped_name,
    [8601] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1009),
    1,
    sym_identifier,
    STATE(156),
    1,
    sym_simple_declarator,
    STATE(257),
    1,
    sym_comment,
    STATE(357),
    1,
    sym_readonly_attr_declarator,
    [8617] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1087),
    1,
    anon_sym_XCDR,
    STATE(258),
    1,
    sym_comment,
    ACTIONS(1085),
    2,
    anon_sym_RPAREN,
    anon_sym_XCDR2,
    [8631] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1089),
    1,
    anon_sym_SEMI,
    ACTIONS(1091),
    1,
    sym_identifier,
    STATE(259),
    2,
    sym_comment,
    aux_sym_bitfield_repeat1,
    [8645] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(260),
    1,
    sym_comment,
    ACTIONS(1094),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [8657] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(261),
    1,
    sym_comment,
    ACTIONS(1096),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [8669] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(262),
    1,
    sym_comment,
    ACTIONS(1098),
    3,
    anon_sym_GT,
    anon_sym_COMMA,
    sym_identifier,
    [8681] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(974),
    1,
    anon_sym_COMMA,
    ACTIONS(1083),
    1,
    anon_sym_RBRACE,
    STATE(244),
    1,
    aux_sym_enum_dcl_repeat1,
    STATE(263),
    1,
    sym_comment,
    [8697] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1100),
    1,
    anon_sym_COMMA,
    ACTIONS(1103),
    1,
    anon_sym_RBRACE,
    STATE(264),
    2,
    sym_comment,
    aux_sym_bitmask_dcl_repeat1,
    [8711] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1032),
    1,
    anon_sym_default,
    ACTIONS(1105),
    1,
    anon_sym_SEMI,
    STATE(265),
    1,
    sym_comment,
    STATE(369),
    1,
    sym_default,
    [8727] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1107),
    1,
    anon_sym_COMMA,
    ACTIONS(1110),
    1,
    anon_sym_RBRACE,
    STATE(266),
    2,
    sym_comment,
    aux_sym_enum_dcl_repeat1,
    [8741] = 5,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1047),
    1,
    anon_sym_COMMA,
    ACTIONS(1112),
    1,
    anon_sym_LBRACE,
    STATE(234),
    1,
    aux_sym_interface_inheritance_spec_repeat1,
    STATE(267),
    1,
    sym_comment,
    [8757] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(667),
    1,
    sym_identifier,
    STATE(268),
    1,
    sym_comment,
    ACTIONS(1114),
    2,
    anon_sym_COMMA,
    anon_sym_LBRACE,
    [8771] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1116),
    1,
    anon_sym_COMMA,
    ACTIONS(1119),
    1,
    anon_sym_SEMI,
    STATE(269),
    2,
    sym_comment,
    aux_sym_any_declarators_repeat1,
    [8785] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1121),
    1,
    anon_sym_COMMA,
    ACTIONS(1124),
    1,
    anon_sym_LBRACE,
    STATE(270),
    2,
    sym_comment,
    aux_sym_interface_inheritance_spec_repeat1,
    [8799] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(271),
    1,
    sym_comment,
    ACTIONS(1014),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [8810] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(272),
    1,
    sym_comment,
    ACTIONS(1126),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [8821] = 4,
    ACTIONS(1128),
    1,
    aux_sym_preproc_call_token1,
    ACTIONS(1130),
    1,
    sym_preproc_arg,
    ACTIONS(1132),
    1,
    anon_sym_SLASH_SLASH,
    STATE(273),
    1,
    sym_comment,
    [8834] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(274),
    1,
    sym_comment,
    ACTIONS(1134),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [8845] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(667),
    1,
    sym_identifier,
    ACTIONS(1136),
    1,
    anon_sym_RPAREN,
    STATE(275),
    1,
    sym_comment,
    [8858] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(667),
    1,
    sym_identifier,
    ACTIONS(1138),
    1,
    anon_sym_LBRACE,
    STATE(276),
    1,
    sym_comment,
    [8871] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(753),
    1,
    anon_sym_interface,
    STATE(277),
    1,
    sym_comment,
    STATE(413),
    1,
    sym_interface_header,
    [8884] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(278),
    1,
    sym_comment,
    ACTIONS(1140),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [8895] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(794),
    1,
    anon_sym_typedef,
    ACTIONS(1142),
    1,
    anon_sym_PIPE,
    STATE(279),
    1,
    sym_comment,
    [8908] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(280),
    1,
    sym_comment,
    ACTIONS(1144),
    2,
    anon_sym_ATdefault_literal,
    sym_identifier,
    [8919] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(281),
    1,
    sym_comment,
    ACTIONS(1146),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [8930] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(667),
    1,
    sym_identifier,
    ACTIONS(984),
    1,
    anon_sym_COMMA,
    STATE(282),
    1,
    sym_comment,
    [8943] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(283),
    1,
    sym_comment,
    ACTIONS(1148),
    2,
    anon_sym_ATdefault_literal,
    sym_identifier,
    [8954] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1009),
    1,
    sym_identifier,
    STATE(284),
    1,
    sym_comment,
    STATE(400),
    1,
    sym_simple_declarator,
    [8967] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1150),
    1,
    anon_sym_DQUOTE,
    ACTIONS(1152),
    1,
    anon_sym_SQUOTE,
    STATE(285),
    1,
    sym_comment,
    [8980] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1154),
    1,
    anon_sym_LBRACE,
    ACTIONS(1156),
    1,
    anon_sym_COLON,
    STATE(286),
    1,
    sym_comment,
    [8993] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(287),
    1,
    sym_comment,
    ACTIONS(1158),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [9004] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(288),
    1,
    sym_comment,
    ACTIONS(1160),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [9015] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(289),
    1,
    sym_comment,
    ACTIONS(1162),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9026] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(290),
    1,
    sym_comment,
    ACTIONS(1164),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9037] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(291),
    1,
    sym_comment,
    ACTIONS(1166),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9048] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(292),
    1,
    sym_comment,
    ACTIONS(1168),
    2,
    anon_sym_COMMA,
    anon_sym_RPAREN,
    [9059] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1170),
    1,
    anon_sym_LBRACE,
    ACTIONS(1172),
    1,
    anon_sym_COLON,
    STATE(293),
    1,
    sym_comment,
    [9072] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(294),
    1,
    sym_comment,
    ACTIONS(1119),
    2,
    anon_sym_COMMA,
    anon_sym_SEMI,
    [9083] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1009),
    1,
    sym_identifier,
    STATE(295),
    1,
    sym_comment,
    STATE(330),
    1,
    sym_simple_declarator,
    [9096] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(296),
    1,
    sym_comment,
    ACTIONS(1174),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9107] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(297),
    1,
    sym_comment,
    ACTIONS(1176),
    2,
    anon_sym_SEMI,
    anon_sym_typedef,
    [9118] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(298),
    1,
    sym_comment,
    ACTIONS(1178),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9129] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(299),
    1,
    sym_comment,
    ACTIONS(1180),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9140] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1009),
    1,
    sym_identifier,
    STATE(292),
    1,
    sym_simple_declarator,
    STATE(300),
    1,
    sym_comment,
    [9153] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(301),
    1,
    sym_comment,
    ACTIONS(1182),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9164] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(667),
    1,
    sym_identifier,
    ACTIONS(1184),
    1,
    anon_sym_LBRACE,
    STATE(302),
    1,
    sym_comment,
    [9177] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(303),
    1,
    sym_comment,
    ACTIONS(1186),
    2,
    anon_sym_SEMI,
    anon_sym_setraises,
    [9188] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(304),
    1,
    sym_comment,
    ACTIONS(1041),
    2,
    anon_sym_COMMA,
    anon_sym_SEMI,
    [9199] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(305),
    1,
    sym_comment,
    ACTIONS(1188),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [9210] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(306),
    1,
    sym_comment,
    ACTIONS(1190),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [9221] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(307),
    1,
    sym_comment,
    ACTIONS(1192),
    2,
    anon_sym_RBRACE,
    anon_sym_bitfield,
    [9232] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(308),
    1,
    sym_comment,
    ACTIONS(1124),
    2,
    anon_sym_COMMA,
    anon_sym_LBRACE,
    [9243] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1194),
    1,
    anon_sym_GT,
    ACTIONS(1196),
    1,
    anon_sym_COMMA,
    STATE(309),
    1,
    sym_comment,
    [9256] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(310),
    1,
    sym_comment,
    ACTIONS(1198),
    2,
    anon_sym_RBRACE,
    anon_sym_bitfield,
    [9267] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(311),
    1,
    sym_comment,
    ACTIONS(1200),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9278] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1009),
    1,
    sym_identifier,
    STATE(304),
    1,
    sym_simple_declarator,
    STATE(312),
    1,
    sym_comment,
    [9291] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(313),
    1,
    sym_comment,
    ACTIONS(1103),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [9302] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(314),
    1,
    sym_comment,
    ACTIONS(1202),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9313] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1204),
    1,
    anon_sym_LPAREN,
    STATE(303),
    1,
    sym_exception_list,
    STATE(315),
    1,
    sym_comment,
    [9326] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1204),
    1,
    anon_sym_LPAREN,
    STATE(316),
    1,
    sym_comment,
    STATE(383),
    1,
    sym_exception_list,
    [9339] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(317),
    1,
    sym_comment,
    ACTIONS(1206),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9350] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(318),
    1,
    sym_comment,
    ACTIONS(1208),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9361] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(319),
    1,
    sym_comment,
    ACTIONS(1110),
    2,
    anon_sym_COMMA,
    anon_sym_RBRACE,
    [9372] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(320),
    1,
    sym_comment,
    ACTIONS(1210),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9383] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1212),
    1,
    anon_sym_const,
    STATE(321),
    1,
    sym_comment,
    STATE(325),
    1,
    sym_const_dcl,
    [9396] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(322),
    1,
    sym_comment,
    ACTIONS(1214),
    2,
    anon_sym_COMMA,
    anon_sym_SEMI,
    [9407] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(323),
    1,
    sym_comment,
    ACTIONS(1216),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9418] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(324),
    1,
    sym_comment,
    ACTIONS(1218),
    2,
    anon_sym_RBRACE,
    anon_sym_bitfield,
    [9429] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(33),
    1,
    anon_sym_typedef,
    STATE(325),
    1,
    sym_comment,
    STATE(343),
    1,
    sym_typedef_dcl,
    [9442] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1081),
    1,
    sym_identifier,
    STATE(313),
    1,
    sym_bit_value,
    STATE(326),
    1,
    sym_comment,
    [9455] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(327),
    1,
    sym_comment,
    ACTIONS(1220),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9466] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(328),
    1,
    sym_comment,
    ACTIONS(1222),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9477] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(667),
    1,
    sym_identifier,
    ACTIONS(1224),
    1,
    anon_sym_LBRACE,
    STATE(329),
    1,
    sym_comment,
    [9490] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1226),
    1,
    anon_sym_SEMI,
    ACTIONS(1228),
    1,
    anon_sym_default,
    STATE(330),
    1,
    sym_comment,
    [9503] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(753),
    1,
    anon_sym_interface,
    STATE(331),
    1,
    sym_comment,
    STATE(449),
    1,
    sym_interface_header,
    [9516] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(332),
    1,
    sym_comment,
    ACTIONS(1230),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9527] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(333),
    1,
    sym_comment,
    ACTIONS(1232),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9538] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(334),
    1,
    sym_comment,
    ACTIONS(1234),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9549] = 4,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1236),
    1,
    anon_sym_GT,
    ACTIONS(1238),
    1,
    anon_sym_COMMA,
    STATE(335),
    1,
    sym_comment,
    [9562] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(336),
    1,
    sym_comment,
    ACTIONS(1240),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9573] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(337),
    1,
    sym_comment,
    ACTIONS(1242),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9584] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(338),
    1,
    sym_comment,
    ACTIONS(1244),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9595] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    STATE(339),
    1,
    sym_comment,
    ACTIONS(1246),
    2,
    anon_sym_SEMI,
    sym_identifier,
    [9606] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1248),
    1,
    anon_sym_LT,
    STATE(340),
    1,
    sym_comment,
    [9616] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(119),
    1,
    anon_sym_RBRACE,
    STATE(341),
    1,
    sym_comment,
    [9626] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1250),
    1,
    anon_sym_EQ,
    STATE(342),
    1,
    sym_comment,
    [9636] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1252),
    1,
    anon_sym_SEMI,
    STATE(343),
    1,
    sym_comment,
    [9646] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1254),
    1,
    anon_sym_SEMI,
    STATE(344),
    1,
    sym_comment,
    [9656] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1256),
    1,
    anon_sym_LBRACE,
    STATE(345),
    1,
    sym_comment,
    [9666] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1258),
    1,
    anon_sym_DQUOTE,
    STATE(346),
    1,
    sym_comment,
    [9676] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1260),
    1,
    anon_sym_SQUOTE,
    STATE(347),
    1,
    sym_comment,
    [9686] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1262),
    1,
    anon_sym_LPAREN,
    STATE(348),
    1,
    sym_comment,
    [9696] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1264),
    1,
    anon_sym_SEMI,
    STATE(349),
    1,
    sym_comment,
    [9706] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1266),
    1,
    anon_sym_LBRACE,
    STATE(350),
    1,
    sym_comment,
    [9716] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1268),
    1,
    sym_identifier,
    STATE(351),
    1,
    sym_comment,
    [9726] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1270),
    1,
    anon_sym_RPAREN,
    STATE(352),
    1,
    sym_comment,
    [9736] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1272),
    1,
    anon_sym_GT,
    STATE(353),
    1,
    sym_comment,
    [9746] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1274),
    1,
    anon_sym_LT,
    STATE(354),
    1,
    sym_comment,
    [9756] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1276),
    1,
    sym_identifier,
    STATE(355),
    1,
    sym_comment,
    [9766] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1278),
    1,
    sym_identifier,
    STATE(356),
    1,
    sym_comment,
    [9776] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1280),
    1,
    anon_sym_SEMI,
    STATE(357),
    1,
    sym_comment,
    [9786] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1282),
    1,
    sym_identifier,
    STATE(358),
    1,
    sym_comment,
    [9796] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1073),
    1,
    anon_sym_SEMI,
    STATE(359),
    1,
    sym_comment,
    [9806] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1075),
    1,
    anon_sym_SEMI,
    STATE(360),
    1,
    sym_comment,
    [9816] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1284),
    1,
    sym_identifier,
    STATE(361),
    1,
    sym_comment,
    [9826] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1286),
    1,
    anon_sym_RPAREN,
    STATE(362),
    1,
    sym_comment,
    [9836] = 3,
    ACTIONS(1132),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1288),
    1,
    aux_sym_comment_token1,
    STATE(363),
    1,
    sym_comment,
    [9846] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1290),
    1,
    anon_sym_SEMI,
    STATE(364),
    1,
    sym_comment,
    [9856] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1292),
    1,
    anon_sym_name,
    STATE(365),
    1,
    sym_comment,
    [9866] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1294),
    1,
    anon_sym_name,
    STATE(366),
    1,
    sym_comment,
    [9876] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1296),
    1,
    anon_sym_SEMI,
    STATE(367),
    1,
    sym_comment,
    [9886] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1298),
    1,
    anon_sym_SEMI,
    STATE(368),
    1,
    sym_comment,
    [9896] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1300),
    1,
    anon_sym_SEMI,
    STATE(369),
    1,
    sym_comment,
    [9906] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(984),
    1,
    sym_identifier,
    STATE(370),
    1,
    sym_comment,
    [9916] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1302),
    1,
    anon_sym_SEMI,
    STATE(371),
    1,
    sym_comment,
    [9926] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1304),
    1,
    anon_sym_LT,
    STATE(372),
    1,
    sym_comment,
    [9936] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1306),
    1,
    anon_sym_LT,
    STATE(373),
    1,
    sym_comment,
    [9946] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(667),
    1,
    sym_identifier,
    STATE(374),
    1,
    sym_comment,
    [9956] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(121),
    1,
    anon_sym_RBRACE,
    STATE(375),
    1,
    sym_comment,
    [9966] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1308),
    1,
    anon_sym_SEMI,
    STATE(376),
    1,
    sym_comment,
    [9976] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1310),
    1,
    anon_sym_LPAREN,
    STATE(377),
    1,
    sym_comment,
    [9986] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1051),
    1,
    anon_sym_SEMI,
    STATE(378),
    1,
    sym_comment,
    [9996] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1312),
    1,
    anon_sym_EQ,
    STATE(379),
    1,
    sym_comment,
    [10006] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1314),
    1,
    anon_sym_SEMI,
    STATE(380),
    1,
    sym_comment,
    [10016] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1316),
    1,
    anon_sym_SEMI,
    STATE(381),
    1,
    sym_comment,
    [10026] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1318),
    1,
    sym_identifier,
    STATE(382),
    1,
    sym_comment,
    [10036] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1320),
    1,
    anon_sym_SEMI,
    STATE(383),
    1,
    sym_comment,
    [10046] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1322),
    1,
    anon_sym_SEMI,
    STATE(384),
    1,
    sym_comment,
    [10056] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1324),
    1,
    sym_identifier,
    STATE(385),
    1,
    sym_comment,
    [10066] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1036),
    1,
    anon_sym_SEMI,
    STATE(386),
    1,
    sym_comment,
    [10076] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1326),
    1,
    anon_sym_DQUOTE,
    STATE(387),
    1,
    sym_comment,
    [10086] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1282),
    1,
    sym_identifier,
    STATE(388),
    1,
    sym_comment,
    [10096] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1328),
    1,
    anon_sym_SEMI,
    STATE(389),
    1,
    sym_comment,
    [10106] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1330),
    1,
    anon_sym_attribute,
    STATE(390),
    1,
    sym_comment,
    [10116] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1332),
    1,
    anon_sym_RBRACE,
    STATE(391),
    1,
    sym_comment,
    [10126] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1334),
    1,
    anon_sym_SEMI,
    STATE(392),
    1,
    sym_comment,
    [10136] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1336),
    1,
    anon_sym_RBRACE,
    STATE(393),
    1,
    sym_comment,
    [10146] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1338),
    1,
    anon_sym_LBRACE,
    STATE(394),
    1,
    sym_comment,
    [10156] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1340),
    1,
    anon_sym_GT,
    STATE(395),
    1,
    sym_comment,
    [10166] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1342),
    1,
    anon_sym_GT,
    STATE(396),
    1,
    sym_comment,
    [10176] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1344),
    1,
    anon_sym_LBRACE,
    STATE(397),
    1,
    sym_comment,
    [10186] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1346),
    1,
    anon_sym_SEMI,
    STATE(398),
    1,
    sym_comment,
    [10196] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1348),
    1,
    anon_sym_COLON,
    STATE(399),
    1,
    sym_comment,
    [10206] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1350),
    1,
    anon_sym_SEMI,
    STATE(400),
    1,
    sym_comment,
    [10216] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1352),
    1,
    anon_sym_RPAREN,
    STATE(401),
    1,
    sym_comment,
    [10226] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1354),
    1,
    anon_sym_LBRACE,
    STATE(402),
    1,
    sym_comment,
    [10236] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1356),
    1,
    anon_sym_LBRACE,
    STATE(403),
    1,
    sym_comment,
    [10246] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1358),
    1,
    anon_sym_GT,
    STATE(404),
    1,
    sym_comment,
    [10256] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1360),
    1,
    sym_identifier,
    STATE(405),
    1,
    sym_comment,
    [10266] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1362),
    1,
    anon_sym_RPAREN,
    STATE(406),
    1,
    sym_comment,
    [10276] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1364),
    1,
    anon_sym_SEMI,
    STATE(407),
    1,
    sym_comment,
    [10286] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1366),
    1,
    sym_identifier,
    STATE(408),
    1,
    sym_comment,
    [10296] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1368),
    1,
    anon_sym_EQ,
    STATE(409),
    1,
    sym_comment,
    [10306] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1282),
    1,
    sym_identifier,
    STATE(410),
    1,
    sym_comment,
    [10316] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1370),
    1,
    anon_sym_RBRACK,
    STATE(411),
    1,
    sym_comment,
    [10326] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1372),
    1,
    sym_identifier,
    STATE(412),
    1,
    sym_comment,
    [10336] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1374),
    1,
    anon_sym_LBRACE,
    STATE(413),
    1,
    sym_comment,
    [10346] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1376),
    1,
    anon_sym_COLON,
    STATE(414),
    1,
    sym_comment,
    [10356] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1378),
    1,
    sym_identifier,
    STATE(415),
    1,
    sym_comment,
    [10366] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1380),
    1,
    anon_sym_SEMI,
    STATE(416),
    1,
    sym_comment,
    [10376] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1382),
    1,
    anon_sym_GT,
    STATE(417),
    1,
    sym_comment,
    [10386] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1384),
    1,
    anon_sym_LBRACE,
    STATE(418),
    1,
    sym_comment,
    [10396] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1386),
    1,
    anon_sym_LPAREN,
    STATE(419),
    1,
    sym_comment,
    [10406] = 3,
    ACTIONS(1132),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1388),
    1,
    aux_sym_preproc_call_token1,
    STATE(420),
    1,
    sym_comment,
    [10416] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1390),
    1,
    aux_sym_string_literal_token1,
    STATE(421),
    1,
    sym_comment,
    [10426] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1392),
    1,
    anon_sym_SEMI,
    STATE(422),
    1,
    sym_comment,
    [10436] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1394),
    1,
    aux_sym_string_literal_token1,
    STATE(423),
    1,
    sym_comment,
    [10446] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1396),
    1,
    anon_sym_enum,
    STATE(424),
    1,
    sym_comment,
    [10456] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1398),
    1,
    anon_sym_SEMI,
    STATE(425),
    1,
    sym_comment,
    [10466] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1400),
    1,
    anon_sym_COMMA,
    STATE(426),
    1,
    sym_comment,
    [10476] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1402),
    1,
    anon_sym_SEMI,
    STATE(427),
    1,
    sym_comment,
    [10486] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1404),
    1,
    anon_sym_GT,
    STATE(428),
    1,
    sym_comment,
    [10496] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1406),
    1,
    anon_sym_GT,
    STATE(429),
    1,
    sym_comment,
    [10506] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1408),
    1,
    anon_sym_LBRACE,
    STATE(430),
    1,
    sym_comment,
    [10516] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1410),
    1,
    anon_sym_COMMA,
    STATE(431),
    1,
    sym_comment,
    [10526] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1412),
    1,
    anon_sym_SEMI,
    STATE(432),
    1,
    sym_comment,
    [10536] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1414),
    1,
    anon_sym_enum,
    STATE(433),
    1,
    sym_comment,
    [10546] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1416),
    1,
    aux_sym_char_literal_token1,
    STATE(434),
    1,
    sym_comment,
    [10556] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1418),
    1,
    anon_sym_LBRACE,
    STATE(435),
    1,
    sym_comment,
    [10566] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1140),
    1,
    anon_sym_const,
    STATE(436),
    1,
    sym_comment,
    [10576] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1420),
    1,
    anon_sym_SEMI,
    STATE(437),
    1,
    sym_comment,
    [10586] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1422),
    1,
    anon_sym_SEMI,
    STATE(438),
    1,
    sym_comment,
    [10596] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1424),
    1,
    ts_builtin_sym_end,
    STATE(439),
    1,
    sym_comment,
    [10606] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1220),
    1,
    anon_sym_const,
    STATE(440),
    1,
    sym_comment,
    [10616] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1426),
    1,
    anon_sym_LPAREN,
    STATE(441),
    1,
    sym_comment,
    [10626] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1428),
    1,
    aux_sym_string_literal_token1,
    STATE(442),
    1,
    sym_comment,
    [10636] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1430),
    1,
    anon_sym_LPAREN,
    STATE(443),
    1,
    sym_comment,
    [10646] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1432),
    1,
    anon_sym_LPAREN,
    STATE(444),
    1,
    sym_comment,
    [10656] = 3,
    ACTIONS(1132),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1434),
    1,
    aux_sym_predefine_token1,
    STATE(445),
    1,
    sym_comment,
    [10666] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1436),
    1,
    sym_identifier,
    STATE(446),
    1,
    sym_comment,
    [10676] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1438),
    1,
    anon_sym_enum,
    STATE(447),
    1,
    sym_comment,
    [10686] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1210),
    1,
    anon_sym_const,
    STATE(448),
    1,
    sym_comment,
    [10696] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1440),
    1,
    anon_sym_LBRACE,
    STATE(449),
    1,
    sym_comment,
    [10706] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1442),
    1,
    sym_identifier,
    STATE(450),
    1,
    sym_comment,
    [10716] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1444),
    1,
    sym_identifier,
    STATE(451),
    1,
    sym_comment,
    [10726] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1446),
    1,
    sym_identifier,
    STATE(452),
    1,
    sym_comment,
    [10736] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1448),
    1,
    anon_sym_SEMI,
    STATE(453),
    1,
    sym_comment,
    [10746] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1180),
    1,
    anon_sym_const,
    STATE(454),
    1,
    sym_comment,
    [10756] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1450),
    1,
    anon_sym_LPAREN_DQUOTE,
    STATE(455),
    1,
    sym_comment,
    [10766] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1452),
    1,
    sym_identifier,
    STATE(456),
    1,
    sym_comment,
    [10776] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1454),
    1,
    anon_sym_SEMI,
    STATE(457),
    1,
    sym_comment,
    [10786] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(986),
    1,
    sym_identifier,
    STATE(458),
    1,
    sym_comment,
    [10796] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1456),
    1,
    sym_identifier,
    STATE(459),
    1,
    sym_comment,
    [10806] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1458),
    1,
    anon_sym_EQ,
    STATE(460),
    1,
    sym_comment,
    [10816] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1460),
    1,
    anon_sym_SQUOTE,
    STATE(461),
    1,
    sym_comment,
    [10826] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1462),
    1,
    anon_sym_DQUOTE,
    STATE(462),
    1,
    sym_comment,
    [10836] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1464),
    1,
    aux_sym_char_literal_token1,
    STATE(463),
    1,
    sym_comment,
    [10846] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1466),
    1,
    sym_identifier,
    STATE(464),
    1,
    sym_comment,
    [10856] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1468),
    1,
    sym_identifier,
    STATE(465),
    1,
    sym_comment,
    [10866] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1470),
    1,
    aux_sym_string_literal_token1,
    STATE(466),
    1,
    sym_comment,
    [10876] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1472),
    1,
    sym_identifier,
    STATE(467),
    1,
    sym_comment,
    [10886] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1474),
    1,
    sym_identifier,
    STATE(468),
    1,
    sym_comment,
    [10896] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1476),
    1,
    anon_sym_RPAREN,
    STATE(469),
    1,
    sym_comment,
    [10906] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1478),
    1,
    anon_sym_RPAREN,
    STATE(470),
    1,
    sym_comment,
    [10916] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1480),
    1,
    anon_sym_SEMI,
    STATE(471),
    1,
    sym_comment,
    [10926] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1482),
    1,
    sym_identifier,
    STATE(472),
    1,
    sym_comment,
    [10936] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1484),
    1,
    anon_sym_LBRACE,
    STATE(473),
    1,
    sym_comment,
    [10946] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1486),
    1,
    sym_identifier,
    STATE(474),
    1,
    sym_comment,
    [10956] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1488),
    1,
    anon_sym_LBRACE,
    STATE(475),
    1,
    sym_comment,
    [10966] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1490),
    1,
    sym_identifier,
    STATE(476),
    1,
    sym_comment,
    [10976] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1136),
    1,
    anon_sym_RPAREN,
    STATE(477),
    1,
    sym_comment,
    [10986] = 3,
    ACTIONS(3),
    1,
    anon_sym_SLASH_SLASH,
    ACTIONS(1492),
    1,
    sym_identifier,
    STATE(478),
    1,
    sym_comment,
    [10996] = 1,
    ACTIONS(1494),
    1,
    ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
    [SMALL_STATE(19)] = 0,
    [SMALL_STATE(20)] = 143,
    [SMALL_STATE(21)] = 276,
    [SMALL_STATE(22)] = 405,
    [SMALL_STATE(23)] = 533,
    [SMALL_STATE(24)] = 663,
    [SMALL_STATE(25)] = 788,
    [SMALL_STATE(26)] = 918,
    [SMALL_STATE(27)] = 1037,
    [SMALL_STATE(28)] = 1156,
    [SMALL_STATE(29)] = 1275,
    [SMALL_STATE(30)] = 1394,
    [SMALL_STATE(31)] = 1513,
    [SMALL_STATE(32)] = 1633,
    [SMALL_STATE(33)] = 1754,
    [SMALL_STATE(34)] = 1875,
    [SMALL_STATE(35)] = 1996,
    [SMALL_STATE(36)] = 2117,
    [SMALL_STATE(37)] = 2174,
    [SMALL_STATE(38)] = 2231,
    [SMALL_STATE(39)] = 2333,
    [SMALL_STATE(40)] = 2435,
    [SMALL_STATE(41)] = 2497,
    [SMALL_STATE(42)] = 2546,
    [SMALL_STATE(43)] = 2595,
    [SMALL_STATE(44)] = 2644,
    [SMALL_STATE(45)] = 2693,
    [SMALL_STATE(46)] = 2742,
    [SMALL_STATE(47)] = 2790,
    [SMALL_STATE(48)] = 2838,
    [SMALL_STATE(49)] = 2886,
    [SMALL_STATE(50)] = 2934,
    [SMALL_STATE(51)] = 2977,
    [SMALL_STATE(52)] = 3020,
    [SMALL_STATE(53)] = 3062,
    [SMALL_STATE(54)] = 3104,
    [SMALL_STATE(55)] = 3146,
    [SMALL_STATE(56)] = 3188,
    [SMALL_STATE(57)] = 3268,
    [SMALL_STATE(58)] = 3308,
    [SMALL_STATE(59)] = 3388,
    [SMALL_STATE(60)] = 3468,
    [SMALL_STATE(61)] = 3548,
    [SMALL_STATE(62)] = 3628,
    [SMALL_STATE(63)] = 3708,
    [SMALL_STATE(64)] = 3788,
    [SMALL_STATE(65)] = 3868,
    [SMALL_STATE(66)] = 3945,
    [SMALL_STATE(67)] = 4022,
    [SMALL_STATE(68)] = 4099,
    [SMALL_STATE(69)] = 4176,
    [SMALL_STATE(70)] = 4253,
    [SMALL_STATE(71)] = 4330,
    [SMALL_STATE(72)] = 4407,
    [SMALL_STATE(73)] = 4472,
    [SMALL_STATE(74)] = 4543,
    [SMALL_STATE(75)] = 4582,
    [SMALL_STATE(76)] = 4653,
    [SMALL_STATE(77)] = 4721,
    [SMALL_STATE(78)] = 4789,
    [SMALL_STATE(79)] = 4854,
    [SMALL_STATE(80)] = 4887,
    [SMALL_STATE(81)] = 4920,
    [SMALL_STATE(82)] = 4985,
    [SMALL_STATE(83)] = 5016,
    [SMALL_STATE(84)] = 5049,
    [SMALL_STATE(85)] = 5080,
    [SMALL_STATE(86)] = 5111,
    [SMALL_STATE(87)] = 5142,
    [SMALL_STATE(88)] = 5204,
    [SMALL_STATE(89)] = 5266,
    [SMALL_STATE(90)] = 5325,
    [SMALL_STATE(91)] = 5384,
    [SMALL_STATE(92)] = 5440,
    [SMALL_STATE(93)] = 5496,
    [SMALL_STATE(94)] = 5525,
    [SMALL_STATE(95)] = 5554,
    [SMALL_STATE(96)] = 5584,
    [SMALL_STATE(97)] = 5612,
    [SMALL_STATE(98)] = 5640,
    [SMALL_STATE(99)] = 5668,
    [SMALL_STATE(100)] = 5696,
    [SMALL_STATE(101)] = 5724,
    [SMALL_STATE(102)] = 5752,
    [SMALL_STATE(103)] = 5780,
    [SMALL_STATE(104)] = 5808,
    [SMALL_STATE(105)] = 5836,
    [SMALL_STATE(106)] = 5864,
    [SMALL_STATE(107)] = 5892,
    [SMALL_STATE(108)] = 5922,
    [SMALL_STATE(109)] = 5950,
    [SMALL_STATE(110)] = 5981,
    [SMALL_STATE(111)] = 6012,
    [SMALL_STATE(112)] = 6055,
    [SMALL_STATE(113)] = 6098,
    [SMALL_STATE(114)] = 6124,
    [SMALL_STATE(115)] = 6150,
    [SMALL_STATE(116)] = 6175,
    [SMALL_STATE(117)] = 6198,
    [SMALL_STATE(118)] = 6223,
    [SMALL_STATE(119)] = 6246,
    [SMALL_STATE(120)] = 6270,
    [SMALL_STATE(121)] = 6294,
    [SMALL_STATE(122)] = 6318,
    [SMALL_STATE(123)] = 6342,
    [SMALL_STATE(124)] = 6377,
    [SMALL_STATE(125)] = 6397,
    [SMALL_STATE(126)] = 6417,
    [SMALL_STATE(127)] = 6445,
    [SMALL_STATE(128)] = 6465,
    [SMALL_STATE(129)] = 6484,
    [SMALL_STATE(130)] = 6515,
    [SMALL_STATE(131)] = 6534,
    [SMALL_STATE(132)] = 6553,
    [SMALL_STATE(133)] = 6572,
    [SMALL_STATE(134)] = 6590,
    [SMALL_STATE(135)] = 6606,
    [SMALL_STATE(136)] = 6632,
    [SMALL_STATE(137)] = 6649,
    [SMALL_STATE(138)] = 6668,
    [SMALL_STATE(139)] = 6691,
    [SMALL_STATE(140)] = 6716,
    [SMALL_STATE(141)] = 6741,
    [SMALL_STATE(142)] = 6766,
    [SMALL_STATE(143)] = 6783,
    [SMALL_STATE(144)] = 6808,
    [SMALL_STATE(145)] = 6833,
    [SMALL_STATE(146)] = 6854,
    [SMALL_STATE(147)] = 6879,
    [SMALL_STATE(148)] = 6900,
    [SMALL_STATE(149)] = 6914,
    [SMALL_STATE(150)] = 6928,
    [SMALL_STATE(151)] = 6950,
    [SMALL_STATE(152)] = 6972,
    [SMALL_STATE(153)] = 6986,
    [SMALL_STATE(154)] = 7008,
    [SMALL_STATE(155)] = 7028,
    [SMALL_STATE(156)] = 7050,
    [SMALL_STATE(157)] = 7072,
    [SMALL_STATE(158)] = 7092,
    [SMALL_STATE(159)] = 7112,
    [SMALL_STATE(160)] = 7132,
    [SMALL_STATE(161)] = 7152,
    [SMALL_STATE(162)] = 7172,
    [SMALL_STATE(163)] = 7194,
    [SMALL_STATE(164)] = 7216,
    [SMALL_STATE(165)] = 7230,
    [SMALL_STATE(166)] = 7249,
    [SMALL_STATE(167)] = 7266,
    [SMALL_STATE(168)] = 7283,
    [SMALL_STATE(169)] = 7298,
    [SMALL_STATE(170)] = 7311,
    [SMALL_STATE(171)] = 7324,
    [SMALL_STATE(172)] = 7339,
    [SMALL_STATE(173)] = 7356,
    [SMALL_STATE(174)] = 7373,
    [SMALL_STATE(175)] = 7388,
    [SMALL_STATE(176)] = 7405,
    [SMALL_STATE(177)] = 7424,
    [SMALL_STATE(178)] = 7439,
    [SMALL_STATE(179)] = 7452,
    [SMALL_STATE(180)] = 7471,
    [SMALL_STATE(181)] = 7490,
    [SMALL_STATE(182)] = 7503,
    [SMALL_STATE(183)] = 7522,
    [SMALL_STATE(184)] = 7539,
    [SMALL_STATE(185)] = 7556,
    [SMALL_STATE(186)] = 7573,
    [SMALL_STATE(187)] = 7586,
    [SMALL_STATE(188)] = 7599,
    [SMALL_STATE(189)] = 7612,
    [SMALL_STATE(190)] = 7625,
    [SMALL_STATE(191)] = 7638,
    [SMALL_STATE(192)] = 7651,
    [SMALL_STATE(193)] = 7664,
    [SMALL_STATE(194)] = 7683,
    [SMALL_STATE(195)] = 7696,
    [SMALL_STATE(196)] = 7715,
    [SMALL_STATE(197)] = 7731,
    [SMALL_STATE(198)] = 7747,
    [SMALL_STATE(199)] = 7763,
    [SMALL_STATE(200)] = 7779,
    [SMALL_STATE(201)] = 7795,
    [SMALL_STATE(202)] = 7809,
    [SMALL_STATE(203)] = 7825,
    [SMALL_STATE(204)] = 7837,
    [SMALL_STATE(205)] = 7849,
    [SMALL_STATE(206)] = 7865,
    [SMALL_STATE(207)] = 7879,
    [SMALL_STATE(208)] = 7891,
    [SMALL_STATE(209)] = 7905,
    [SMALL_STATE(210)] = 7919,
    [SMALL_STATE(211)] = 7931,
    [SMALL_STATE(212)] = 7945,
    [SMALL_STATE(213)] = 7961,
    [SMALL_STATE(214)] = 7973,
    [SMALL_STATE(215)] = 7985,
    [SMALL_STATE(216)] = 8001,
    [SMALL_STATE(217)] = 8017,
    [SMALL_STATE(218)] = 8033,
    [SMALL_STATE(219)] = 8045,
    [SMALL_STATE(220)] = 8057,
    [SMALL_STATE(221)] = 8073,
    [SMALL_STATE(222)] = 8087,
    [SMALL_STATE(223)] = 8103,
    [SMALL_STATE(224)] = 8119,
    [SMALL_STATE(225)] = 8131,
    [SMALL_STATE(226)] = 8147,
    [SMALL_STATE(227)] = 8159,
    [SMALL_STATE(228)] = 8175,
    [SMALL_STATE(229)] = 8191,
    [SMALL_STATE(230)] = 8203,
    [SMALL_STATE(231)] = 8219,
    [SMALL_STATE(232)] = 8233,
    [SMALL_STATE(233)] = 8249,
    [SMALL_STATE(234)] = 8265,
    [SMALL_STATE(235)] = 8281,
    [SMALL_STATE(236)] = 8297,
    [SMALL_STATE(237)] = 8309,
    [SMALL_STATE(238)] = 8321,
    [SMALL_STATE(239)] = 8333,
    [SMALL_STATE(240)] = 8345,
    [SMALL_STATE(241)] = 8357,
    [SMALL_STATE(242)] = 8369,
    [SMALL_STATE(243)] = 8385,
    [SMALL_STATE(244)] = 8397,
    [SMALL_STATE(245)] = 8413,
    [SMALL_STATE(246)] = 8429,
    [SMALL_STATE(247)] = 8445,
    [SMALL_STATE(248)] = 8461,
    [SMALL_STATE(249)] = 8477,
    [SMALL_STATE(250)] = 8493,
    [SMALL_STATE(251)] = 8509,
    [SMALL_STATE(252)] = 8521,
    [SMALL_STATE(253)] = 8537,
    [SMALL_STATE(254)] = 8553,
    [SMALL_STATE(255)] = 8569,
    [SMALL_STATE(256)] = 8585,
    [SMALL_STATE(257)] = 8601,
    [SMALL_STATE(258)] = 8617,
    [SMALL_STATE(259)] = 8631,
    [SMALL_STATE(260)] = 8645,
    [SMALL_STATE(261)] = 8657,
    [SMALL_STATE(262)] = 8669,
    [SMALL_STATE(263)] = 8681,
    [SMALL_STATE(264)] = 8697,
    [SMALL_STATE(265)] = 8711,
    [SMALL_STATE(266)] = 8727,
    [SMALL_STATE(267)] = 8741,
    [SMALL_STATE(268)] = 8757,
    [SMALL_STATE(269)] = 8771,
    [SMALL_STATE(270)] = 8785,
    [SMALL_STATE(271)] = 8799,
    [SMALL_STATE(272)] = 8810,
    [SMALL_STATE(273)] = 8821,
    [SMALL_STATE(274)] = 8834,
    [SMALL_STATE(275)] = 8845,
    [SMALL_STATE(276)] = 8858,
    [SMALL_STATE(277)] = 8871,
    [SMALL_STATE(278)] = 8884,
    [SMALL_STATE(279)] = 8895,
    [SMALL_STATE(280)] = 8908,
    [SMALL_STATE(281)] = 8919,
    [SMALL_STATE(282)] = 8930,
    [SMALL_STATE(283)] = 8943,
    [SMALL_STATE(284)] = 8954,
    [SMALL_STATE(285)] = 8967,
    [SMALL_STATE(286)] = 8980,
    [SMALL_STATE(287)] = 8993,
    [SMALL_STATE(288)] = 9004,
    [SMALL_STATE(289)] = 9015,
    [SMALL_STATE(290)] = 9026,
    [SMALL_STATE(291)] = 9037,
    [SMALL_STATE(292)] = 9048,
    [SMALL_STATE(293)] = 9059,
    [SMALL_STATE(294)] = 9072,
    [SMALL_STATE(295)] = 9083,
    [SMALL_STATE(296)] = 9096,
    [SMALL_STATE(297)] = 9107,
    [SMALL_STATE(298)] = 9118,
    [SMALL_STATE(299)] = 9129,
    [SMALL_STATE(300)] = 9140,
    [SMALL_STATE(301)] = 9153,
    [SMALL_STATE(302)] = 9164,
    [SMALL_STATE(303)] = 9177,
    [SMALL_STATE(304)] = 9188,
    [SMALL_STATE(305)] = 9199,
    [SMALL_STATE(306)] = 9210,
    [SMALL_STATE(307)] = 9221,
    [SMALL_STATE(308)] = 9232,
    [SMALL_STATE(309)] = 9243,
    [SMALL_STATE(310)] = 9256,
    [SMALL_STATE(311)] = 9267,
    [SMALL_STATE(312)] = 9278,
    [SMALL_STATE(313)] = 9291,
    [SMALL_STATE(314)] = 9302,
    [SMALL_STATE(315)] = 9313,
    [SMALL_STATE(316)] = 9326,
    [SMALL_STATE(317)] = 9339,
    [SMALL_STATE(318)] = 9350,
    [SMALL_STATE(319)] = 9361,
    [SMALL_STATE(320)] = 9372,
    [SMALL_STATE(321)] = 9383,
    [SMALL_STATE(322)] = 9396,
    [SMALL_STATE(323)] = 9407,
    [SMALL_STATE(324)] = 9418,
    [SMALL_STATE(325)] = 9429,
    [SMALL_STATE(326)] = 9442,
    [SMALL_STATE(327)] = 9455,
    [SMALL_STATE(328)] = 9466,
    [SMALL_STATE(329)] = 9477,
    [SMALL_STATE(330)] = 9490,
    [SMALL_STATE(331)] = 9503,
    [SMALL_STATE(332)] = 9516,
    [SMALL_STATE(333)] = 9527,
    [SMALL_STATE(334)] = 9538,
    [SMALL_STATE(335)] = 9549,
    [SMALL_STATE(336)] = 9562,
    [SMALL_STATE(337)] = 9573,
    [SMALL_STATE(338)] = 9584,
    [SMALL_STATE(339)] = 9595,
    [SMALL_STATE(340)] = 9606,
    [SMALL_STATE(341)] = 9616,
    [SMALL_STATE(342)] = 9626,
    [SMALL_STATE(343)] = 9636,
    [SMALL_STATE(344)] = 9646,
    [SMALL_STATE(345)] = 9656,
    [SMALL_STATE(346)] = 9666,
    [SMALL_STATE(347)] = 9676,
    [SMALL_STATE(348)] = 9686,
    [SMALL_STATE(349)] = 9696,
    [SMALL_STATE(350)] = 9706,
    [SMALL_STATE(351)] = 9716,
    [SMALL_STATE(352)] = 9726,
    [SMALL_STATE(353)] = 9736,
    [SMALL_STATE(354)] = 9746,
    [SMALL_STATE(355)] = 9756,
    [SMALL_STATE(356)] = 9766,
    [SMALL_STATE(357)] = 9776,
    [SMALL_STATE(358)] = 9786,
    [SMALL_STATE(359)] = 9796,
    [SMALL_STATE(360)] = 9806,
    [SMALL_STATE(361)] = 9816,
    [SMALL_STATE(362)] = 9826,
    [SMALL_STATE(363)] = 9836,
    [SMALL_STATE(364)] = 9846,
    [SMALL_STATE(365)] = 9856,
    [SMALL_STATE(366)] = 9866,
    [SMALL_STATE(367)] = 9876,
    [SMALL_STATE(368)] = 9886,
    [SMALL_STATE(369)] = 9896,
    [SMALL_STATE(370)] = 9906,
    [SMALL_STATE(371)] = 9916,
    [SMALL_STATE(372)] = 9926,
    [SMALL_STATE(373)] = 9936,
    [SMALL_STATE(374)] = 9946,
    [SMALL_STATE(375)] = 9956,
    [SMALL_STATE(376)] = 9966,
    [SMALL_STATE(377)] = 9976,
    [SMALL_STATE(378)] = 9986,
    [SMALL_STATE(379)] = 9996,
    [SMALL_STATE(380)] = 10006,
    [SMALL_STATE(381)] = 10016,
    [SMALL_STATE(382)] = 10026,
    [SMALL_STATE(383)] = 10036,
    [SMALL_STATE(384)] = 10046,
    [SMALL_STATE(385)] = 10056,
    [SMALL_STATE(386)] = 10066,
    [SMALL_STATE(387)] = 10076,
    [SMALL_STATE(388)] = 10086,
    [SMALL_STATE(389)] = 10096,
    [SMALL_STATE(390)] = 10106,
    [SMALL_STATE(391)] = 10116,
    [SMALL_STATE(392)] = 10126,
    [SMALL_STATE(393)] = 10136,
    [SMALL_STATE(394)] = 10146,
    [SMALL_STATE(395)] = 10156,
    [SMALL_STATE(396)] = 10166,
    [SMALL_STATE(397)] = 10176,
    [SMALL_STATE(398)] = 10186,
    [SMALL_STATE(399)] = 10196,
    [SMALL_STATE(400)] = 10206,
    [SMALL_STATE(401)] = 10216,
    [SMALL_STATE(402)] = 10226,
    [SMALL_STATE(403)] = 10236,
    [SMALL_STATE(404)] = 10246,
    [SMALL_STATE(405)] = 10256,
    [SMALL_STATE(406)] = 10266,
    [SMALL_STATE(407)] = 10276,
    [SMALL_STATE(408)] = 10286,
    [SMALL_STATE(409)] = 10296,
    [SMALL_STATE(410)] = 10306,
    [SMALL_STATE(411)] = 10316,
    [SMALL_STATE(412)] = 10326,
    [SMALL_STATE(413)] = 10336,
    [SMALL_STATE(414)] = 10346,
    [SMALL_STATE(415)] = 10356,
    [SMALL_STATE(416)] = 10366,
    [SMALL_STATE(417)] = 10376,
    [SMALL_STATE(418)] = 10386,
    [SMALL_STATE(419)] = 10396,
    [SMALL_STATE(420)] = 10406,
    [SMALL_STATE(421)] = 10416,
    [SMALL_STATE(422)] = 10426,
    [SMALL_STATE(423)] = 10436,
    [SMALL_STATE(424)] = 10446,
    [SMALL_STATE(425)] = 10456,
    [SMALL_STATE(426)] = 10466,
    [SMALL_STATE(427)] = 10476,
    [SMALL_STATE(428)] = 10486,
    [SMALL_STATE(429)] = 10496,
    [SMALL_STATE(430)] = 10506,
    [SMALL_STATE(431)] = 10516,
    [SMALL_STATE(432)] = 10526,
    [SMALL_STATE(433)] = 10536,
    [SMALL_STATE(434)] = 10546,
    [SMALL_STATE(435)] = 10556,
    [SMALL_STATE(436)] = 10566,
    [SMALL_STATE(437)] = 10576,
    [SMALL_STATE(438)] = 10586,
    [SMALL_STATE(439)] = 10596,
    [SMALL_STATE(440)] = 10606,
    [SMALL_STATE(441)] = 10616,
    [SMALL_STATE(442)] = 10626,
    [SMALL_STATE(443)] = 10636,
    [SMALL_STATE(444)] = 10646,
    [SMALL_STATE(445)] = 10656,
    [SMALL_STATE(446)] = 10666,
    [SMALL_STATE(447)] = 10676,
    [SMALL_STATE(448)] = 10686,
    [SMALL_STATE(449)] = 10696,
    [SMALL_STATE(450)] = 10706,
    [SMALL_STATE(451)] = 10716,
    [SMALL_STATE(452)] = 10726,
    [SMALL_STATE(453)] = 10736,
    [SMALL_STATE(454)] = 10746,
    [SMALL_STATE(455)] = 10756,
    [SMALL_STATE(456)] = 10766,
    [SMALL_STATE(457)] = 10776,
    [SMALL_STATE(458)] = 10786,
    [SMALL_STATE(459)] = 10796,
    [SMALL_STATE(460)] = 10806,
    [SMALL_STATE(461)] = 10816,
    [SMALL_STATE(462)] = 10826,
    [SMALL_STATE(463)] = 10836,
    [SMALL_STATE(464)] = 10846,
    [SMALL_STATE(465)] = 10856,
    [SMALL_STATE(466)] = 10866,
    [SMALL_STATE(467)] = 10876,
    [SMALL_STATE(468)] = 10886,
    [SMALL_STATE(469)] = 10896,
    [SMALL_STATE(470)] = 10906,
    [SMALL_STATE(471)] = 10916,
    [SMALL_STATE(472)] = 10926,
    [SMALL_STATE(473)] = 10936,
    [SMALL_STATE(474)] = 10946,
    [SMALL_STATE(475)] = 10956,
    [SMALL_STATE(476)] = 10966,
    [SMALL_STATE(477)] = 10976,
    [SMALL_STATE(478)] = 10986,
    [SMALL_STATE(479)] = 10996,
};

static const TSParseActionEntry ts_parse_actions[] = {
    [0] = { .entry = { .count = 0, .reusable = false } },
    [1] = { .entry = { .count = 1, .reusable = false } },
    RECOVER(),
    [3] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(363),
    [5] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_specification, 0),
    [7] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(273),
    [9] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(468),
    [11] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(467),
    [13] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(277),
    [15] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(465),
    [17] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(464),
    [19] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(459),
    [21] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(284),
    [23] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(452),
    [25] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(451),
    [27] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(450),
    [29] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(447),
    [31] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(446),
    [33] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(7),
    [35] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(445),
    [37] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(164),
    [39] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(444),
    [41] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(443),
    [43] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(39),
    [45] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(207),
    [47] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(441),
    [49] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(181),
    [51] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(186),
    [53] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(187),
    [55] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(187),
    [57] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(188),
    [59] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(229),
    [61] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(340),
    [63] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(190),
    [65] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(191),
    [67] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(191),
    [69] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(192),
    [71] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(194),
    [73] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(194),
    [75] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(238),
    [77] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(238),
    [79] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(169),
    [81] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(374),
    [83] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(168),
    [85] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(239),
    [87] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(373),
    [89] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(372),
    [91] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(468),
    [93] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(380),
    [95] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(382),
    [97] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(390),
    [99] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(29),
    [101] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(465),
    [103] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(464),
    [105] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(284),
    [107] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(451),
    [109] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(450),
    [111] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(446),
    [113] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(7),
    [115] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(39),
    [117] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(93),
    [119] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(457),
    [121] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(381),
    [123] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_body, 1),
    [125] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(181),
    [128] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(186),
    [131] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(187),
    [134] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(187),
    [137] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(188),
    [140] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(229),
    [143] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(340),
    [146] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(190),
    [149] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(191),
    [152] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(191),
    [155] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(192),
    [158] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(194),
    [161] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(194),
    [164] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(238),
    [167] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(238),
    [170] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(169),
    [173] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(374),
    [176] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(168),
    [179] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(239),
    [182] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(373),
    [185] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(372),
    [188] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(468),
    [191] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    [193] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(382),
    [196] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(390),
    [199] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(29),
    [202] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(465),
    [205] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(464),
    [208] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(459),
    [211] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(284),
    [214] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(451),
    [217] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(450),
    [220] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(447),
    [223] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(446),
    [226] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(7),
    [229] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(39),
    [232] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(207),
    [235] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(441),
    [238] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 2),
    SHIFT_REPEAT(93),
    [241] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(274),
    [243] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(49),
    [245] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(455),
    [247] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(456),
    [249] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(337),
    [251] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(332),
    [253] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(291),
    [255] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(298),
    [257] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(389),
    [259] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(181),
    [262] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(186),
    [265] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(187),
    [268] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(187),
    [271] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(188),
    [274] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(229),
    [277] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(340),
    [280] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(190),
    [283] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(191),
    [286] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(191),
    [289] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(192),
    [292] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(194),
    [295] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(194),
    [298] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(238),
    [301] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(238),
    [304] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(169),
    [307] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(374),
    [310] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(168),
    [313] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(239),
    [316] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(373),
    [319] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(372),
    [322] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    [324] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(49),
    [327] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(455),
    [330] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(456),
    [333] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 2),
    SHIFT_REPEAT(93),
    [336] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(317),
    [338] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(453),
    [340] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(336),
    [342] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(410),
    [344] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(361),
    [346] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(385),
    [348] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(301),
    [350] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(476),
    [352] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case, 1),
    [354] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_case, 1),
    [356] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(181),
    [359] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(186),
    [362] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(187),
    [365] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(187),
    [368] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(188),
    [371] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(410),
    [374] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(361),
    [377] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(190),
    [380] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(191),
    [383] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(191),
    [386] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(192),
    [389] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(194),
    [392] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(194),
    [395] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(238),
    [398] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(238),
    [401] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(169),
    [404] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(374),
    [407] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(168),
    [410] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(385),
    [413] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(373),
    [416] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    [418] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(476),
    [421] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(447),
    [424] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 2),
    SHIFT_REPEAT(93),
    [427] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_body, 1),
    [429] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(458),
    [431] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(213),
    [433] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(63),
    [435] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(204),
    [437] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_specification, 1),
    [439] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    [441] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(468),
    [444] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(467),
    [447] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(277),
    [450] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(465),
    [453] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(464),
    [456] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(459),
    [459] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(284),
    [462] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(452),
    [465] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(451),
    [468] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(450),
    [471] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(447),
    [474] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(446),
    [477] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(7),
    [480] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(445),
    [483] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(164),
    [486] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(444),
    [489] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(443),
    [492] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(39),
    [495] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(207),
    [498] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 2),
    SHIFT_REPEAT(441),
    [501] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(471),
    [503] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(445),
    [505] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_specification, 2),
    [507] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(349),
    [509] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_interface_body_repeat1, 1),
    [511] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_body_repeat1, 1),
    [513] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_export, 2),
    [515] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_export, 2),
    [517] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_member_repeat1, 2),
    [519] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 2),
    [521] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 2),
    SHIFT_REPEAT(49),
    [524] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 2),
    SHIFT_REPEAT(455),
    [527] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 2),
    SHIFT_REPEAT(456),
    [530] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 4, .production_id = 5),
    [532] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 4, .production_id = 5),
    [534] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_except_dcl_repeat1, 1),
    [536] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_except_dcl_repeat1, 1),
    [538] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 3, .production_id = 5),
    [540] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 3, .production_id = 5),
    [542] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 4, .production_id = 9),
    [544] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 4, .production_id = 9),
    [546] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_member, 5, .production_id = 9),
    [548] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_member, 5, .production_id = 9),
    [550] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_try_construct, 2, .production_id = 4),
    [552] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_try_construct, 2, .production_id = 4),
    [554] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_hashid, 4, .production_id = 8),
    [556] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_hashid, 4, .production_id = 8),
    [558] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_member_repeat1, 1),
    [560] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_member_repeat1, 1),
    [562] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_struct_modifier, 1),
    [564] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_modifier, 1),
    [566] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_case_label, 3),
    [568] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case_label, 3),
    [570] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_case_label, 2),
    [572] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case_label, 2),
    [574] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_member, 3),
    [576] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_member, 3),
    [578] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_annotation_member, 5),
    [580] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_member, 5),
    [582] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 1),
    [584] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_annotation_body_repeat1, 1),
    [586] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_annotation_body_repeat1, 4),
    [588] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_annotation_body_repeat1, 4),
    [590] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(477),
    [592] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_param_attribute, 1),
    [594] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_param_attribute, 1),
    [596] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(124),
    [598] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(65),
    [600] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(124),
    [602] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(285),
    [604] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(442),
    [606] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(434),
    [608] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(105),
    [610] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(102),
    [612] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(472),
    [614] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(116),
    [616] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(181),
    [618] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(186),
    [620] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(188),
    [622] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(395),
    [624] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(190),
    [626] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(192),
    [628] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 2),
    [630] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_specification_repeat1, 2),
    SHIFT_REPEAT(273),
    [633] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_specification_repeat1, 2),
    [635] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_preproc_call, 2, .production_id = 1),
    [637] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_preproc_call, 2, .production_id = 1),
    [639] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_preproc_call, 3, .production_id = 2),
    [641] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_preproc_call, 3, .production_id = 2),
    [643] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym__definition, 2),
    [645] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat1, 1),
    [647] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_specification_repeat1, 1),
    [649] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_predefine, 2),
    [651] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_specification_repeat2, 1),
    [653] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym__definition, 1),
    [655] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_scoped_name, 1),
    [657] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_scoped_name, 1),
    [659] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_scoped_name, 2),
    [661] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_scoped_name, 2),
    [663] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 2),
    [665] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 2),
    [667] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(94),
    [669] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_char_literal, 4, .production_id = 10),
    [671] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_char_literal, 4, .production_id = 10),
    [673] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_mult_expr, 1),
    [675] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_mult_expr, 1),
    [677] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 1),
    [679] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 1),
    [681] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_string_literal, 4),
    [683] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_literal, 4),
    [685] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_char_literal, 3, .production_id = 7),
    [687] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_char_literal, 3, .production_id = 7),
    [689] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_literal, 1),
    [691] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_literal, 1),
    [693] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 4),
    [695] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 4),
    [697] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_expr, 3),
    [699] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_expr, 3),
    [701] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_boolean_literal, 1),
    [703] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_boolean_literal, 1),
    [705] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_mult_expr, 3),
    [707] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_mult_expr, 3),
    [709] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_string_literal, 3),
    [711] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_literal, 3),
    [713] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_add_expr, 3),
    [715] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_add_expr, 3),
    [717] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(92),
    [719] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(92),
    [721] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_add_expr, 1),
    [723] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_add_expr, 1),
    [725] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(66),
    [727] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_shift_expr, 3),
    [729] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_shift_expr, 3),
    [731] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(89),
    [733] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_shift_expr, 1),
    [735] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_shift_expr, 1),
    [737] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(118),
    [739] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(91),
    [741] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(91),
    [743] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_and_expr, 1),
    [745] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_and_expr, 1),
    [747] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(87),
    [749] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_and_expr, 3),
    [751] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_and_expr, 3),
    [753] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(415),
    [755] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(331),
    [757] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unary_operator, 1),
    [759] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_unary_operator, 1),
    [761] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xor_expr, 1),
    [763] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(78),
    [765] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2),
    [767] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2),
    SHIFT_REPEAT(164),
    [770] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2),
    SHIFT_REPEAT(444),
    [773] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 2),
    SHIFT_REPEAT(443),
    [776] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_xor_expr, 3),
    [778] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_or_expr, 1),
    [780] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(77),
    [782] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(312),
    [784] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_declarator, 1),
    [786] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(315),
    [788] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(316),
    [790] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_or_expr, 3),
    [792] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(90),
    [794] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_expr, 1),
    [796] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(73),
    [798] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_simple_declarator, 1),
    [800] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(247),
    [802] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(57),
    [804] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(57),
    [806] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(88),
    [808] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 2),
    [810] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 2),
    SHIFT_REPEAT(64),
    [813] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2),
    [815] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2),
    SHIFT_REPEAT(399),
    [818] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 2),
    SHIFT_REPEAT(68),
    [821] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(289),
    [823] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(399),
    [825] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(68),
    [827] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(278),
    [829] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(280),
    [831] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(281),
    [833] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(436),
    [835] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(327),
    [837] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(296),
    [839] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(64),
    [841] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(440),
    [843] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_array_declarator, 2),
    [845] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_dds_request_topic, 6),
    [847] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_dds_reply_topic, 6),
    [849] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(328),
    [851] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(354),
    [853] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_def_repeat1, 1),
    [855] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(311),
    [857] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitset_dcl_repeat1, 2),
    [859] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_bitset_dcl_repeat1, 2),
    SHIFT_REPEAT(354),
    [862] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(318),
    [864] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_readonly_attr_declarator, 1),
    [866] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(377),
    [868] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(145),
    [870] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat1, 2),
    [872] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat1, 2),
    SHIFT_REPEAT(207),
    [875] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat1, 2),
    SHIFT_REPEAT(441),
    [878] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(339),
    [880] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(351),
    [882] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_anno, 1),
    [884] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_header, 2),
    [886] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(195),
    [888] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_forward_dcl, 2),
    [890] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(166),
    [892] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarators, 2),
    [894] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(59),
    [896] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_type, 1),
    [898] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_char_type, 1),
    [900] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_integer_type, 1),
    [902] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(81),
    [904] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarators, 1),
    [906] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(8),
    [908] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(256),
    [910] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_forward_dcl, 2),
    [912] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_declarators_repeat1, 2),
    SHIFT_REPEAT(166),
    [915] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_declarators_repeat1, 2),
    [917] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_data_representation_repeat1, 2),
    [919] = { .entry = { .count = 2, .reusable = false } },
    REDUCE(aux_sym_data_representation_repeat1, 2),
    SHIFT_REPEAT(258),
    [922] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_data_representation_repeat1, 2),
    SHIFT_REPEAT(258),
    [925] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(93),
    [927] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_array_declarator_repeat1, 1),
    [929] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(306),
    [931] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(219),
    [933] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(258),
    [935] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(258),
    [937] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_signed_short_int, 1),
    [939] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(217),
    [941] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(288),
    [943] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 2),
    SHIFT_REPEAT(280),
    [946] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 2),
    [948] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_signed_long_int, 1),
    [950] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_signed_longlong_int, 1),
    [952] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unsigned_int, 1),
    [954] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_fixed_array_size, 3),
    [956] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_signed_int, 1),
    [958] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unsigned_short_int, 1),
    [960] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unsigned_long_int, 1),
    [962] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(427),
    [964] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_unsigned_longlong_int, 1),
    [966] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(310),
    [968] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(323),
    [970] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(184),
    [972] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarators, 1),
    [974] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(150),
    [976] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(454),
    [978] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(448),
    [980] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(76),
    [982] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_struct_def_repeat1, 1),
    [984] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_simple_type_spec, 1),
    [986] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(203),
    [988] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_raises_expr_repeat1, 2),
    SHIFT_REPEAT(217),
    [991] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_raises_expr_repeat1, 2),
    [993] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_positive_int_const, 1),
    [995] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(432),
    [997] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 3),
    [999] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_case, 3),
    [1001] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(287),
    [1003] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarators, 2),
    [1005] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_map_type, 8),
    [1007] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_data_representation, 4, .production_id = 3),
    [1009] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(134),
    [1011] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_parameter_dcls_repeat1, 2),
    SHIFT_REPEAT(158),
    [1014] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_parameter_dcls_repeat1, 2),
    [1016] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_union_def_repeat1, 1),
    [1018] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_forward_dcl, 2),
    [1020] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(348),
    [1022] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(sym_union_forward_dcl, 2),
    [1024] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_declarator, 1),
    [1026] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(158),
    [1028] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_parameter_dcls, 2),
    [1030] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(43),
    [1032] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(67),
    [1034] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_base_type_spec, 1),
    [1036] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_dcl, 5),
    [1038] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_readonly_attr_declarator_repeat1, 2),
    SHIFT_REPEAT(312),
    [1041] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_readonly_attr_declarator_repeat1, 2),
    [1043] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(326),
    [1045] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(272),
    [1047] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(176),
    [1049] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_inheritance_spec, 3),
    [1051] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_readonly_attr_declarator, 2),
    [1053] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_map_type, 6),
    [1055] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_fixed_pt_type, 6),
    [1057] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_floating_pt_type, 1),
    [1059] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_type, 1),
    [1061] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_template_type_spec, 1),
    [1063] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(307),
    [1065] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(299),
    [1067] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(314),
    [1069] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_parameter_dcls, 1),
    [1071] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_dcl, 4),
    [1073] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_declarator, 2),
    [1075] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_raises_expr, 1),
    [1077] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 5),
    [1079] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(338),
    [1081] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(305),
    [1083] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(320),
    [1085] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_data_representation_repeat1, 1),
    [1087] = { .entry = { .count = 1, .reusable = false } },
    REDUCE(aux_sym_data_representation_repeat1, 1),
    [1089] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitfield_repeat1, 2),
    [1091] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_bitfield_repeat1, 2),
    SHIFT_REPEAT(323),
    [1094] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_string_type, 4),
    [1096] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_type_spec, 1),
    [1098] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_sequence_type, 4),
    [1100] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_bitmask_dcl_repeat1, 2),
    SHIFT_REPEAT(326),
    [1103] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitmask_dcl_repeat1, 2),
    [1105] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(44),
    [1107] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_enum_dcl_repeat1, 2),
    SHIFT_REPEAT(150),
    [1110] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enum_dcl_repeat1, 2),
    [1112] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_inheritance_spec, 2),
    [1114] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_name, 1),
    [1116] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_any_declarators_repeat1, 2),
    SHIFT_REPEAT(184),
    [1119] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_any_declarators_repeat1, 2),
    [1121] = { .entry = { .count = 2, .reusable = true } },
    REDUCE(aux_sym_interface_inheritance_spec_repeat1, 2),
    SHIFT_REPEAT(176),
    [1124] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_interface_inheritance_spec_repeat1, 2),
    [1126] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 5),
    [1128] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(79),
    [1130] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(420),
    [1132] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(363),
    [1134] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 4),
    [1136] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_switch_type_spec, 1),
    [1138] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(16),
    [1140] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 4),
    [1142] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(75),
    [1144] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_modifier, 1),
    [1146] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enumerator, 1),
    [1148] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_enumerator_repeat1, 1),
    [1150] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(466),
    [1152] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(463),
    [1154] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(12),
    [1156] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(223),
    [1158] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_exception_list, 4),
    [1160] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_exception_list, 3),
    [1162] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_def, 9),
    [1164] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield_spec, 6),
    [1166] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 8, .production_id = 11),
    [1168] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_param_dcl, 3),
    [1170] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(151),
    [1172] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(253),
    [1174] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_union_def, 8),
    [1176] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_dcl, 5),
    [1178] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 7, .production_id = 11),
    [1180] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 7),
    [1182] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_dcl, 4),
    [1184] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(13),
    [1186] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_get_excep_expr, 2),
    [1188] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bit_value, 1),
    [1190] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enumerator, 2),
    [1192] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield, 2),
    [1194] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(334),
    [1196] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(72),
    [1198] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield, 3),
    [1200] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 6),
    [1202] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 6),
    [1204] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(232),
    [1206] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 6, .production_id = 6),
    [1208] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 5),
    [1210] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 6),
    [1212] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(38),
    [1214] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_declarator, 1),
    [1216] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitfield_repeat1, 1),
    [1218] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(aux_sym_bitset_dcl_repeat1, 1),
    [1220] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_dcl, 5),
    [1222] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 4),
    [1224] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(153),
    [1226] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(52),
    [1228] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(70),
    [1230] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 7, .production_id = 6),
    [1232] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_dcl, 5),
    [1234] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitfield_spec, 4),
    [1236] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(236),
    [1238] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(61),
    [1240] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 6),
    [1242] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_struct_def, 5),
    [1244] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitmask_dcl, 4),
    [1246] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_bitset_dcl, 7),
    [1248] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(60),
    [1250] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(423),
    [1252] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(55),
    [1254] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_type_declarator, 2),
    [1256] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(144),
    [1258] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(99),
    [1260] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(96),
    [1262] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(56),
    [1264] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_module_dcl, 5),
    [1266] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_header, 3),
    [1268] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(286),
    [1270] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(103),
    [1272] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(237),
    [1274] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(62),
    [1276] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(430),
    [1278] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(379),
    [1280] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_readonly_attr_spec, 4),
    [1282] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_const_type, 1),
    [1284] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_fixed_pt_const_type, 1),
    [1286] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(230),
    [1288] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(479),
    [1290] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 6),
    [1292] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(409),
    [1294] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(342),
    [1296] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_typedef_dcl, 2),
    [1298] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_default, 2),
    [1300] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(45),
    [1302] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(53),
    [1304] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(27),
    [1306] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(24),
    [1308] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(41),
    [1310] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(222),
    [1312] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(71),
    [1314] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 3),
    [1316] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 5),
    [1318] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_type_spec, 1),
    [1320] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_set_excep_expr, 2),
    [1322] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_raises_expr, 2),
    [1324] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_any_const_type, 1),
    [1326] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(47),
    [1328] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_except_dcl, 5),
    [1330] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(26),
    [1332] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(364),
    [1334] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(37),
    [1336] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(333),
    [1338] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(140),
    [1340] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_destination_type, 1),
    [1342] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(290),
    [1344] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(32),
    [1346] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_spec, 3),
    [1348] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(51),
    [1350] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_native_dcl, 2),
    [1352] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(149),
    [1354] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(20),
    [1356] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(254),
    [1358] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(218),
    [1360] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(387),
    [1362] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(148),
    [1364] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_op_dcl, 6),
    [1366] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_annotation_member_type, 1),
    [1368] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(421),
    [1370] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(189),
    [1372] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(419),
    [1374] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(3),
    [1376] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(50),
    [1378] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(252),
    [1380] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(214),
    [1382] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(251),
    [1384] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(17),
    [1386] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(135),
    [1388] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(80),
    [1390] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(401),
    [1392] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_attr_dcl, 1),
    [1394] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(406),
    [1396] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(478),
    [1398] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_element_spec, 2),
    [1400] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(28),
    [1402] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_raises_expr, 4),
    [1404] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(262),
    [1406] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(260),
    [1408] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(143),
    [1410] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(58),
    [1412] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_raises_expr, 5),
    [1414] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(355),
    [1416] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(461),
    [1418] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(2),
    [1420] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_dcl, 1),
    [1422] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(82),
    [1424] = { .entry = { .count = 1, .reusable = true } },
    ACCEPT_INPUT(),
    [1426] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(250),
    [1428] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(462),
    [1430] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(365),
    [1432] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(366),
    [1434] = { .entry = { .count = 1, .reusable = false } },
    SHIFT(84),
    [1436] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(225),
    [1438] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_enum_anno, 1),
    [1440] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(4),
    [1442] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(394),
    [1444] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(173),
    [1446] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(397),
    [1448] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_except_dcl, 4),
    [1450] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(405),
    [1452] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(46),
    [1454] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_interface_def, 4),
    [1456] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(402),
    [1458] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(69),
    [1460] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(100),
    [1462] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(108),
    [1464] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(347),
    [1466] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(403),
    [1468] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(293),
    [1470] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(346),
    [1472] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(165),
    [1474] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(418),
    [1476] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(104),
    [1478] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(345),
    [1480] = { .entry = { .count = 1, .reusable = true } },
    REDUCE(sym_module_dcl, 4),
    [1482] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(118),
    [1484] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(141),
    [1486] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(460),
    [1488] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(146),
    [1490] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(473),
    [1492] = { .entry = { .count = 1, .reusable = true } },
    SHIFT(475),
    [1494] = { .entry = { .count = 1, .reusable = true } },
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
